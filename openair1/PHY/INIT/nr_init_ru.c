/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#include "PHY/phy_extern.h"
#include "assertions.h"
#include <math.h>
#include "openair1/PHY/defs_RU.h"
#include "openair1/PHY/defs_nr_common.h"
#include "openair1/PHY/defs_gNB.h"

void nr_phy_init_RU(RU_t *ru)
{
  /* IF7.2 buffers live in nr_fhi_72_priv_t; RU_t.common is unused. */
  if (ru_nr_split(ru) == NR_SPLIT_IF7P2)
    return;

  /* LOCAL_RF and IF5 buffers are owned by nr_fhi_ru_priv_t, allocated by
   * nr_fhi_install_legacy_wrappers() in nr-ru.c.  ru->common.* is set to
   * non-owning aliases there so legacy code (nr_ru_procedures.c, rx_rf,
   * tx_rf, …) continues to work without knowing about the priv struct. */
  if (ru_nr_split(ru) <= NR_SPLIT_IF5)
    return;

  /* IF4p5: allocate all signal buffers directly into ru->common. */
  NR_DL_FRAME_PARMS *fp = ru->nr_frame_parms;
  int nb_tx_streams = ru->nb_tx;
  int nb_rx_streams = ru->nb_rx;
  LOG_I(NR_PHY, "nb_tx_streams %d, nb_rx_streams %d\n", nb_tx_streams, nb_rx_streams);

  const unsigned int num_symbols = fp->symbols_per_slot * fp->slots_per_frame;
  ru->common.beam_id = malloc16_clear(num_symbols * sizeof(*ru->common.beam_id));
  for (int i = 0; i < num_symbols; i++)
    ru->common.beam_id[i] = malloc16_clear(nb_tx_streams * sizeof(**ru->common.beam_id));

  /* IF4p5 has no time-domain local buffers (data exchanged over ethernet). */
  ru->common.txdata = NULL;
  ru->common.rxdata = NULL;

  LOG_D(PHY, "nb_tx %d\n", ru->nb_tx);
  ru->common.rxdata_7_5kHz = (int32_t **)malloc16(ru->nb_rx * sizeof(int32_t *));
  for (int i = 0; i < ru->nb_rx; i++) {
    ru->common.rxdata_7_5kHz[i] = (int32_t *)malloc16_clear(2 * fp->samples_per_subframe * 2 * sizeof(int32_t));
    LOG_D(PHY, "rxdata_7_5kHz[%d] %p for RU %d\n", i, ru->common.rxdata_7_5kHz[i], ru->idx);
  }

  ru->common.txdataF = (int32_t **)malloc16(ru->nb_tx * sizeof(int32_t *));
  for (int i = 0; i < ru->nb_tx; ++i)
    ru->common.txdataF[i] = (int32_t *)malloc16_clear(fp->samples_per_slot_wCP * sizeof(int32_t));

  ru->common.txdataF_BF = (int32_t **)malloc16(nb_tx_streams * sizeof(int32_t *));
  LOG_D(PHY, "[INIT] common.txdata_BF= %p (%lu bytes)\n", ru->common.txdataF_BF, nb_tx_streams * sizeof(int32_t *));
  for (int i = 0; i < nb_tx_streams; i++) {
    ru->common.txdataF_BF[i] = (int32_t *)malloc16_clear(fp->samples_per_slot_wCP * sizeof(int32_t));
    LOG_D(PHY, "txdataF_BF[%d] %p for RU %d\n", i, ru->common.txdataF_BF[i], ru->idx);
  }

  ru->common.rxdataF = (int32_t **)malloc16(nb_rx_streams * sizeof(int32_t *));
  for (int i = 0; i < nb_rx_streams; i++) {
    int size = RU_RX_SLOT_DEPTH * fp->symbols_per_slot * fp->ofdm_symbol_size;
    ru->common.rxdataF[i] = (int32_t *)malloc16_clear(sizeof(**ru->common.rxdataF) * size);
    LOG_D(PHY, "rxdataF[%d] %p for RU %d\n", i, ru->common.rxdataF[i], ru->idx);
  }

  AssertFatal(ru->num_gNB <= NUMBER_OF_gNB_MAX, "gNB instances %d > %d\n", ru->num_gNB, NUMBER_OF_gNB_MAX);
  LOG_D(PHY, "[INIT] %s() ru->num_gNB:%d \n", __FUNCTION__, ru->num_gNB);
}

void nr_phy_free_RU(RU_t *ru)
{
  /* IF7.2 has no RU_t.common buffers (and was not in gNB->RU_list). */
  if (ru_nr_split(ru) == NR_SPLIT_IF7P2)
    return;

  nr_split_type_t split = ru_nr_split(ru);
  LOG_D(PHY, "Freeing RU signal buffers (split %d) nb_tx %d\n", split, ru->nb_tx);
  int nb_tx_streams = ru->nb_tx;
  int nb_rx_streams = ru->nb_rx;

  if (split <= NR_SPLIT_IF5) { /* LOCAL_RF or IF5: free time-domain samples */
    // Hack: undo what is done at allocation
    for (int i = 0; i < nb_tx_streams; i++) {
      int32_t *p = &ru->common.txdata[i][-ru->sf_extension];
      free_and_zero(p);
    }
    free_and_zero(ru->common.txdata);

    for (int i = 0; i < nb_rx_streams; i++)
      free_and_zero(ru->common.rxdata[i]);
    free_and_zero(ru->common.rxdata);
  }

  for (int i = 0; i < ru->nb_rx; i++)
    free_and_zero(ru->common.rxdata_7_5kHz[i]);
  free_and_zero(ru->common.rxdata_7_5kHz);

  for (int i = 0; i < ru->nb_tx; i++)
    free_and_zero(ru->common.txdataF[i]);
  free_and_zero(ru->common.txdataF);

  for (int i = 0; i < nb_tx_streams; i++)
    free_and_zero(ru->common.txdataF_BF[i]);
  free_and_zero(ru->common.txdataF_BF);

  for (int i = 0; i < nb_rx_streams; i++)
    free_and_zero(ru->common.rxdataF[i]);
  free_and_zero(ru->common.rxdataF);

  NR_DL_FRAME_PARMS *fp = ru->nr_frame_parms;
  for (int i = 0; i < fp->symbols_per_slot * fp->slots_per_frame; ++i)
    free_and_zero(ru->common.beam_id[i]);
  free_and_zero(ru->common.beam_id);

  PHY_VARS_gNB *gNB0 = ru->gNB_list[0];
  gNB0->num_RU--;
  DevAssert(gNB0->num_RU >= 0);
}
