/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

/**
 * nr_fhi_72.c — split-7.2 (O-RAN xRAN/DPDK) implementation of nr_fhi_t.
 *
 * This module provides ul_slot_ready / dl_slot_send / start / stop for
 * O-RAN split 7.2.  It has no RU_t dependency: all buffers live in the
 * private nr_fhi_72_priv_t struct and the slot loop runs in a dedicated
 * thread rather than in ru_thread.
 *
 * Phase-2 migration note: nr_fhi_72_init() still calls
 * openair0_transport_load() and stores a back-pointer in ru->ifdevice so
 * that the existing startup/shutdown plumbing in nr-softmodem.c and
 * nr-ru.c continues to work during the transition.  The RU_t.common
 * buffers are populated with pointers into this module's own allocations
 * so that init_eNB_afterRU() can map them into gNB->common_vars without
 * changes; those indirections are removed in Phase 4.
 */

#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdatomic.h>

#include "radio/COMMON/common_lib.h"
#include "radio/COMMON/ru_info.h"
#include "common/utils/LOG/log.h"
#include "common/utils/assertions.h"
#include "common/utils/system.h"
#include "openair1/PHY/defs_gNB.h"
#include "openair1/PHY/defs_RU.h"
#include "openair1/PHY/NR_TRANSPORT/nr_transport_proto.h"
#include "openair1/SCHED_NR/sched_nr.h"
#include "common/utils/threadPool/notified_fifo.h"
#include "executables/softmodem-common.h"
#include "executables/nr-softmodem-common.h"
#include "radio/fhi_72/nr_fhi_72.h"

typedef struct {
  openair0_device_t *dev;      /* points to ru->ifdevice */
  PHY_VARS_gNB *gNB;           /* back-pointer set in start() */
  RU_t *ru;                    /* kept during migration for frame_parms and prach */

  int nb_rx;
  int nb_tx;
  int32_t **rxdataF;           /* [nb_rx][RU_RX_SLOT_DEPTH * sym * ofdm_sz] */
  int32_t **txdataF_BF;        /* [nb_tx][samples_per_slot_wCP] */
  uint16_t **beam_id;          /* [sym_per_frame][nb_tx] */

  atomic_bool ready;           /* gate: xRAN callbacks are dropped until start() finishes */
  pthread_t slot_thread;
} nr_fhi_72_priv_t;

/* ------------------------------------------------------------------ */
/* Precoding: gNB->common_vars.txdataF → priv->txdataF_BF             */
/* ------------------------------------------------------------------ */

static void nr_fhi_72_prec(nr_fhi_72_priv_t *priv, PHY_VARS_gNB *gNB,
                            int frame_tx, int slot_tx)
{
  nfapi_nr_config_request_scf_t *cfg = &gNB->gNB_config;
  NR_DL_FRAME_PARMS *fp = &gNB->frame_parms;

  if (nr_slot_select(cfg, frame_tx, slot_tx) == NR_UPLINK_SLOT)
    return;

  /* copy beam IDs for analog BF */
  if (gNB->common_vars.analog_bf && priv->beam_id) {
    for (int i = 0; i < fp->symbols_per_slot; i++) {
      memcpy(priv->beam_id[slot_tx * fp->symbols_per_slot + i],
             gNB->common_vars.beam_id[slot_tx * fp->symbols_per_slot + i],
             priv->nb_tx * sizeof(**priv->beam_id));
    }
  }

  /* no digital BF: copy txdataF → txdataF_BF */
  for (int i = 0; i < fp->nb_antennas_tx; ++i)
    memcpy(priv->txdataF_BF[i], gNB->common_vars.txdataF[i],
           fp->samples_per_slot_wCP * sizeof(int32_t));
}

/* ------------------------------------------------------------------ */
/* nr_fhi_t ops                                                        */
/* ------------------------------------------------------------------ */

static void nr_fhi_72_ul_slot_ready(nr_fhi_t *fhi, PHY_VARS_gNB *gNB,
                                     int frame_rx, int slot_rx,
                                     int frame_tx, int slot_tx,
                                     openair0_timestamp_t ts_tx)
{
  notifiedFIFO_elt_t *elt = newNotifiedFIFO_elt(sizeof(processingData_L1tx_t), 0,
                                                  &gNB->L1_tx_out, NULL);
  elt->key = slot_tx;
  processingData_L1tx_t *msg = NotifiedFifoData(elt);
  *msg = (processingData_L1tx_t){
      .gNB = gNB,
      .frame = frame_tx,
      .slot = slot_tx,
      .frame_rx = frame_rx,
      .slot_rx = slot_rx,
      .timestamp_tx = ts_tx,
  };
  pushNotifiedFIFO(&gNB->L1_tx_out, elt);
}

static void nr_fhi_72_dl_slot_send(nr_fhi_t *fhi, PHY_VARS_gNB *gNB,
                                    int frame_tx, int slot_tx,
                                    openair0_timestamp_t ts_tx)
{
  nr_fhi_72_priv_t *priv = fhi->priv;
  nr_fhi_72_prec(priv, gNB, frame_tx, slot_tx);

  ru_info_t ru_info = {
      .nb_tx = priv->nb_tx,
      .txdataF_BF = priv->txdataF_BF,
      .beam_id = priv->beam_id,
  };
  int ret = priv->dev->trx_fhi_tx_slot(priv->dev, &ru_info, frame_tx, slot_tx, (uint64_t)ts_tx);
  if (ret != 0)
    LOG_E(NR_PHY, "nr_fhi_72: trx_fhi_tx_slot error %d at %d.%d\n", ret, frame_tx, slot_tx);
}

/* Slot notification thread — reads xRAN RX queue and calls ul_slot_ready */
static void *nr_fhi_72_slot_thread(void *arg)
{
  nr_fhi_t *fhi = arg;
  nr_fhi_72_priv_t *priv = fhi->priv;
  PHY_VARS_gNB *gNB = priv->gNB;
  RU_t *ru = priv->ru;
  NR_DL_FRAME_PARMS *fp = &gNB->frame_parms;
  int slots_per_frame = fp->slots_per_frame;

  LOG_I(NR_PHY, "nr_fhi_72: slot notification thread started\n");

  while (!oai_exit) {
    ru_info_t ru_info = {
        .nb_rx = priv->nb_rx,
        .nb_tx = priv->nb_tx,
        .rxdataF = priv->rxdataF,
        .beam_id = priv->beam_id,
        .prach_buf = NULL,
    };

    int frame_rx, slot_rx;
    int ret = priv->dev->trx_fhi_rx_slot(priv->dev, &ru_info, &frame_rx, &slot_rx);
    if (ret != 0) {
      LOG_E(NR_PHY, "nr_fhi_72: trx_fhi_rx_slot error %d\n", ret);
      continue;
    }

    /* PRACH */
    int f_prach = frame_rx, sl_prach = slot_rx;
    priv->dev->trx_fhi_rx_prach(priv->dev, gNB, &ru_info, &f_prach, &sl_prach);

    /* compute TX slot */
    int sl_ahead = ru->sl_ahead;
    int slot_tx = (slot_rx + sl_ahead) % slots_per_frame;
    int frame_tx = (slot_rx > slot_tx) ? (frame_rx + 1) & 1023 : frame_rx;

    /* timestamp_tx: not available without ru_thread proc; pass 0 for now */
    openair0_timestamp_t ts_tx = 0;

    fhi->ul_slot_ready(fhi, gNB, frame_rx, slot_rx, frame_tx, slot_tx, ts_tx);
  }

  return NULL;
}

static int nr_fhi_72_start(nr_fhi_t *fhi, PHY_VARS_gNB *gNB)
{
  nr_fhi_72_priv_t *priv = fhi->priv;
  priv->gNB = gNB;

  /* map buffers into gNB->common_vars so L1 can read/write them */
  NR_DL_FRAME_PARMS *fp = &gNB->frame_parms;
  for (int i = 0; i < priv->nb_rx; i++)
    gNB->common_vars.rxdataF[i] = (c16_t *)priv->rxdataF[i];
  for (int i = 0; i < priv->nb_tx; i++)
    gNB->common_vars.txdataF[i] = (c16_t *)priv->txdataF_BF[i];

  atomic_store(&priv->ready, true);

  /* start transport (opens xRAN sockets, registers callbacks) */
  int ret = priv->dev->trx_start_func(priv->dev);
  AssertFatal(ret == 0, "nr_fhi_72: trx_start_func failed (%d)\n", ret);

  /* spawn slot notification thread */
  threadCreate(&priv->slot_thread, nr_fhi_72_slot_thread, fhi,
               "nr_fhi_72_slot", -1, OAI_PRIORITY_RT_MAX);
  return 0;
}

static void nr_fhi_72_stop(nr_fhi_t *fhi)
{
  nr_fhi_72_priv_t *priv = fhi->priv;
  atomic_store(&priv->ready, false);
  if (priv->dev->trx_end_func)
    priv->dev->trx_end_func(priv->dev);
}

/* ------------------------------------------------------------------ */
/* Initialisation                                                      */
/* ------------------------------------------------------------------ */

int nr_fhi_72_init(PHY_VARS_gNB *gNB, RU_t *ru)
{
  NR_DL_FRAME_PARMS *fp = ru->nr_frame_parms;
  int nb_rx = ru->nb_rx;
  int nb_tx = ru->nb_tx;

  nr_fhi_72_priv_t *priv = calloc(1, sizeof(*priv));
  AssertFatal(priv, "nr_fhi_72: OOM\n");

  priv->ru = ru;
  priv->nb_rx = nb_rx;
  priv->nb_tx = nb_tx;
  atomic_init(&priv->ready, false);

  /* Allocate frequency-domain RX buffers */
  priv->rxdataF = malloc16(nb_rx * sizeof(*priv->rxdataF));
  AssertFatal(priv->rxdataF, "nr_fhi_72: OOM rxdataF\n");
  int rxF_size = RU_RX_SLOT_DEPTH * fp->symbols_per_slot * fp->ofdm_symbol_size;
  for (int i = 0; i < nb_rx; i++)
    priv->rxdataF[i] = malloc16_clear(rxF_size * sizeof(int32_t));

  /* Allocate beamformed TX buffers */
  priv->txdataF_BF = malloc16(nb_tx * sizeof(*priv->txdataF_BF));
  AssertFatal(priv->txdataF_BF, "nr_fhi_72: OOM txdataF_BF\n");
  for (int i = 0; i < nb_tx; i++)
    priv->txdataF_BF[i] = malloc16_clear(fp->samples_per_slot_wCP * sizeof(int32_t));

  /* Allocate beam_id table (symbols_per_frame × nb_tx) */
  int num_sym = fp->symbols_per_slot * fp->slots_per_frame;
  priv->beam_id = malloc16_clear(num_sym * sizeof(*priv->beam_id));
  AssertFatal(priv->beam_id, "nr_fhi_72: OOM beam_id\n");
  for (int i = 0; i < num_sym; i++)
    priv->beam_id[i] = malloc16_clear(nb_tx * sizeof(**priv->beam_id));

  /*
   * Phase-2 bridge: point ru->common.rxdataF / txdataF_BF to our buffers
   * so that init_eNB_afterRU() can wire gNB->common_vars without changes.
   * These indirections are removed when Phase 4 moves buffer ownership.
   */
  ru->common.rxdataF = priv->rxdataF;
  ru->common.txdataF_BF = priv->txdataF_BF;
  ru->common.beam_id = priv->beam_id;

  /* Load the xRAN transport plugin */
  int ret = openair0_transport_load(&ru->ifdevice, &ru->openair0_cfg, &ru->eth_params);
  AssertFatal(ret == 0, "nr_fhi_72: openair0_transport_load failed (%d)\n", ret);

  priv->dev = &ru->ifdevice;

  /* Populate nr_fhi_t ops in the device */
  nr_fhi_t *fhi = &ru->ifdevice.fhi;
  fhi->ul_slot_ready = nr_fhi_72_ul_slot_ready;
  fhi->dl_slot_send  = nr_fhi_72_dl_slot_send;
  fhi->start         = nr_fhi_72_start;
  fhi->stop          = nr_fhi_72_stop;
  fhi->priv          = priv;

  LOG_I(NR_PHY, "nr_fhi_72: initialised (nb_rx %d nb_tx %d)\n", nb_rx, nb_tx);
  return 0;
}
