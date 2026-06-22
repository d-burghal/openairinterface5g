/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#ifndef _ORAN_ISOLATE_H_
#define _ORAN_ISOLATE_H_

#include <stdio.h>

#include <pthread.h>
#include <stdint.h>

#include "xran_fh_o_du.h"
#include "openair1/PHY/defs_nr_common.h"
#include "openair1/PHY/NR_TRANSPORT/nr_transport_proto.h"
#include "radio/COMMON/ru_info.h"

void print_fhi_counters(ru_info_t *ru, const int frame, const int slot);

/** @brief Reads RX data PUSCH of next slot.
 *
 * @param ru pointer to structure keeping pointers to OAI data.
 * @param frame output of the frame which has been read.
 * @param slot output of the slot which has been read. */
int xran_fh_rx_read_slot(ru_info_t *ru, int *frame, int *slot);
/** @brief Reads RX data PRACH of next slot.
 *
 * @param ru pointer to structure keeping pointers to OAI data.
 * @param frame input for F_RELEASE, output for K_RELEASE.
 * @param slot input for F_RELEASE, output for K_RELEASE. */
int xran_fh_rx_prach_read_slot(PHY_VARS_gNB *gNB, ru_info_t *ru, int *frame, int *slot);
/** @brief Writes TX data (PDSCH) of given slot. */
int xran_fh_tx_send_slot(ru_info_t *ru, int frame, int slot, uint64_t timestamp);

#endif /* _ORAN_ISOLATE_H_ */
