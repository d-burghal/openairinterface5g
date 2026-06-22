/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#ifndef NR_FHI_72_H
#define NR_FHI_72_H

#include "radio/COMMON/common_lib.h"
#include "openair1/PHY/defs_gNB.h"
#include "openair1/PHY/defs_RU.h"

/**
 * Initialise the split-7.2 nr_fhi_t implementation.
 *
 * Allocates nr_fhi_72_priv_t (including rxdataF / txdataF_BF buffers),
 * loads the O-RAN xRAN transport via openair0_transport_load(), and
 * populates ru->ifdevice.fhi with the split-7.2 ops.
 *
 * On return the caller should set:
 *   gNB->fhi = &ru->ifdevice.fhi;
 *
 * @param gNB  gNB instance (for back-pointer and frame_parms)
 * @param ru   RU_t whose ifdevice, openair0_cfg and eth_params are used
 * @return  0 on success, non-zero on failure
 */
int nr_fhi_72_init(PHY_VARS_gNB *gNB, RU_t *ru);

#endif /* NR_FHI_72_H */
