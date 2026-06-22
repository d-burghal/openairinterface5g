/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#ifndef RU_INFO_H
#define RU_INFO_H

#include <stdint.h>
#include "openair1/PHY/impl_defs_nr.h"
#include "openair1/PHY/TOOLS/tools_defs.h"

/*
 * Information bundle passed between the OAI NR layer and the xRAN transport
 * wrappers (xran_fh_rx_read_slot, xran_fh_tx_send_slot, …).
 *
 * Defined here — with only OAI headers — so that nr_fhi_72.c can use it
 * without pulling in any xRAN SDK headers.
 */
typedef struct ru_info_s {
  /* UL receive buffers */
  int nb_rx;
  int32_t **rxdataF;

  /* DL transmit buffers */
  int nb_tx;
  int32_t **txdataF_BF;

  /* Analogue beam IDs: [symbol_in_frame][port] */
  uint16_t **beam_id;

  /* PRACH receive buffer (NULL when not used) */
  c16_t (*prach_buf)[NUMBER_OF_NR_RU_PRACH_OCCASIONS_MAX][NR_PRACH_SEQ_LEN_L];
  int nb_prach_rx;
  int start_prach_rx;
} ru_info_t;

#endif /* RU_INFO_H */
