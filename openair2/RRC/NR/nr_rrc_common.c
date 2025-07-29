/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file nr_ rrc_common.c
 * \brief rrc common procedures for gNB
 * \author Navid Nikaein and Raymond Knopp, WEI-TAI CHEN
 * \date 2011 - 2014, 2018
 * \version 1.0
 * \company Eurecom, NTUST
 * \email:  navid.nikaein@eurecom.fr and raymond.knopp@eurecom.fr, kroempa@gmail.com
 */

#include "nr_rrc_extern.h"
#include "LAYER2/NR_MAC_COMMON/nr_mac_extern.h"
#include "COMMON/openair_defs.h"
#include "COMMON/platform_types.h"
#include "RRC/L2_INTERFACE/openair_rrc_L2_interface.h"
#include "LAYER2/RLC/rlc.h"
#include "COMMON/mac_rrc_primitives.h"
#include "common/utils/LOG/log.h"
#include "asn1_msg.h"
#include "common/utils/LOG/vcd_signal_dumper.h"
#include "common/ran_context.h"

#define DEBUG_NR_RRC 1

extern RAN_CONTEXT_t RC;
extern UE_MAC_INST *UE_mac_inst;
extern mui_t rrc_gNB_mui;

//-----------------------------------------------------------------------------
void rrc_init_nr_srb_param(NR_LCHAN_DESC *chan)
{
  chan->transport_block_size = 4;
  chan->max_transport_blocks = 16;
  chan->Delay_class = 1;
  return;
}

void free_nr_sl_resource_pool(NR_SL_ResourcePool_r16_t *sl_ResourcePool_r16) {
  // free sl_PSCCH_Config_r16
  struct NR_SL_PSCCH_Config_r16 *nr_sl_PSCCH_Config = sl_ResourcePool_r16->sl_PSCCH_Config_r16->choice.setup;
  free_and_zero(nr_sl_PSCCH_Config->sl_DMRS_ScrambleID_r16);
  free_and_zero(nr_sl_PSCCH_Config->sl_FreqResourcePSCCH_r16);
  free_and_zero(nr_sl_PSCCH_Config->sl_NumReservedBits_r16);
  free_and_zero(nr_sl_PSCCH_Config->sl_TimeResourcePSCCH_r16);
  free_and_zero(nr_sl_PSCCH_Config);
  free_and_zero(sl_ResourcePool_r16->sl_PSCCH_Config_r16);

  // free sl_PSSCH_Config_r16
  struct NR_SL_PSSCH_Config_r16 *nr_sl_PSSCH_Config = sl_ResourcePool_r16->sl_PSSCH_Config_r16->choice.setup;
  for (int l = 0; l < nr_sl_PSSCH_Config->sl_BetaOffsets2ndSCI_r16->list.count; l++) {
    free_and_zero(nr_sl_PSSCH_Config->sl_BetaOffsets2ndSCI_r16->list.array[l]);
  }
  free_and_zero(nr_sl_PSSCH_Config->sl_BetaOffsets2ndSCI_r16);
  for (int l = 0; l < nr_sl_PSSCH_Config->sl_PSSCH_DMRS_TimePatternList_r16->list.count; l++) {
    free_and_zero(nr_sl_PSSCH_Config->sl_PSSCH_DMRS_TimePatternList_r16->list.array[l]);
  }

  free_and_zero(nr_sl_PSSCH_Config->sl_PSSCH_DMRS_TimePatternList_r16);
  free_and_zero(nr_sl_PSSCH_Config->sl_Scaling_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PSSCH_Config_r16);
  struct NR_SL_PSFCH_Config_r16 *nr_sl_PSFCH_Config = sl_ResourcePool_r16->sl_PSFCH_Config_r16->choice.setup;
  free_and_zero(nr_sl_PSFCH_Config->sl_MinTimeGapPSFCH_r16);
  free_and_zero(nr_sl_PSFCH_Config->sl_NumMuxCS_Pair_r16);
  free_and_zero(nr_sl_PSFCH_Config->sl_PSFCH_CandidateResourceType_r16);
  free_and_zero(nr_sl_PSFCH_Config->sl_PSFCH_HopID_r16);
  free_and_zero(nr_sl_PSFCH_Config->sl_PSFCH_Period_r16);
  free_and_zero(nr_sl_PSFCH_Config->sl_PSFCH_RB_Set_r16);
  free_and_zero(nr_sl_PSFCH_Config);
  free_and_zero(sl_ResourcePool_r16->sl_PSFCH_Config_r16);

  free_and_zero(sl_ResourcePool_r16->sl_SyncAllowed_r16->gnbEnb_Sync_r16);
  free_and_zero(sl_ResourcePool_r16->sl_SyncAllowed_r16->gnss_Sync_r16);
  free_and_zero(sl_ResourcePool_r16->sl_SyncAllowed_r16->ue_Sync_r16);
  free_and_zero(sl_ResourcePool_r16->sl_SyncAllowed_r16);

  free_and_zero(sl_ResourcePool_r16->sl_SubchannelSize_r16);
  free_and_zero(sl_ResourcePool_r16->dummy);
  free_and_zero(sl_ResourcePool_r16->sl_StartRB_Subchannel_r16);
  free_and_zero(sl_ResourcePool_r16->sl_NumSubchannel_r16);

  free_and_zero(sl_ResourcePool_r16->sl_Additional_MCS_Table_r16);
  free_and_zero(sl_ResourcePool_r16->sl_ThreshS_RSSI_CBR_r16);
  free_and_zero(sl_ResourcePool_r16->sl_TimeWindowSizeCBR_r16);
  free_and_zero(sl_ResourcePool_r16->sl_TimeWindowSizeCR_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PTRS_Config_r16);

  free_and_zero(sl_ResourcePool_r16->sl_UE_SelectedConfigRP_r16->sl_MaxNumPerReserve_r16);
  free_and_zero(sl_ResourcePool_r16->sl_UE_SelectedConfigRP_r16->sl_MultiReserveResource_r16);
  free_and_zero(sl_ResourcePool_r16->sl_UE_SelectedConfigRP_r16);

  free_and_zero(sl_ResourcePool_r16->sl_RxParametersNcell_r16->sl_TDD_Configuration_r16);
  free_and_zero(sl_ResourcePool_r16->sl_RxParametersNcell_r16);

  free_and_zero(sl_ResourcePool_r16->sl_FilterCoefficient_r16);
  free_and_zero(sl_ResourcePool_r16->sl_RB_Number_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PreemptionEnable_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PriorityThreshold_UL_URLLC_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PriorityThreshold_r16);
  free_and_zero(sl_ResourcePool_r16->sl_X_Overhead_r16);

  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->dl_Alpha_PSFCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->dl_Alpha_PSSCH_PSCCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->dl_P0_PSFCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->dl_P0_PSSCH_PSCCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->sl_Alpha_PSSCH_PSCCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16->sl_P0_PSSCH_PSCCH_r16);
  free_and_zero(sl_ResourcePool_r16->sl_PowerControl_r16);

  free_and_zero(sl_ResourcePool_r16->sl_MinMaxMCS_List_r16);

  free_and_zero(sl_ResourcePool_r16->ext1->sl_TimeResource_r16->buf);
  free_and_zero(sl_ResourcePool_r16->ext1->sl_TimeResource_r16);

  free_and_zero(sl_ResourcePool_r16);
}

void free_nr_sl_SetupRelease_SL_ConfigDedicatedNR_r16(NR_SetupRelease_SL_ConfigDedicatedNR_r16_t *sl_conf) {
  struct NR_SL_PHY_MAC_RLC_Config_r16 *nr_sl_PHY_MAC_RLC_Config = sl_conf->choice.setup->sl_PHY_MAC_RLC_Config_r16;
  for (int i = 0; i < nr_sl_PHY_MAC_RLC_Config->sl_FreqInfoToAddModList_r16->list.count; i++) {
    NR_SL_FreqConfig_r16_t *sl_FreqInfoToAddMod = nr_sl_PHY_MAC_RLC_Config->sl_FreqInfoToAddModList_r16->list.array[i];
    free_and_zero(sl_FreqInfoToAddMod->frequencyShift7p5khzSL_r16);
    free_and_zero(sl_FreqInfoToAddMod->sl_AbsoluteFrequencySSB_r16);
    free_and_zero(sl_FreqInfoToAddMod->sl_SyncPriority_r16);
    for (int j = 0; j < sl_FreqInfoToAddMod->sl_BWP_ToAddModList_r16->list.count; j++) {
      NR_SL_BWP_Config_r16_t *sl_BWP_Config = sl_FreqInfoToAddMod->sl_BWP_ToAddModList_r16->list.array[j];
      // free sl_BWP_r16
      struct NR_SL_BWP_Generic_r16 *nr_sl_BWP_Generic = sl_BWP_Config->sl_BWP_Generic_r16;
      free_and_zero(nr_sl_BWP_Generic->sl_BWP_r16->cyclicPrefix);
      free_and_zero(nr_sl_BWP_Generic->sl_BWP_r16);

      // free sl_PSBCH_Config_r16
      free_and_zero(nr_sl_BWP_Generic->sl_PSBCH_Config_r16);

      // free sl_BWP_Generic_r16
      free_and_zero(nr_sl_BWP_Generic->sl_StartSymbol_r16);
      free_and_zero(nr_sl_BWP_Generic->sl_LengthSymbols_r16);
      free_and_zero(nr_sl_BWP_Generic->sl_TxDirectCurrentLocation_r16);
      free_and_zero(nr_sl_BWP_Generic);

      for (int k = 0; k < sl_BWP_Config->sl_BWP_PoolConfig_r16->sl_RxPool_r16->list.count; k++) {
        NR_SL_ResourcePool_r16_t *sl_ResourcePool_r16 = sl_BWP_Config->sl_BWP_PoolConfig_r16->sl_RxPool_r16->list.array[k];
        free_nr_sl_resource_pool(sl_ResourcePool_r16);
      }

      for (int k = 0; k < sl_BWP_Config->sl_BWP_PoolConfig_r16->sl_TxPoolScheduling_r16->sl_PoolToAddModList_r16->list.count; k++) {
        NR_SL_ResourcePoolConfig_r16_t *sl_ResourcePoolConfig_r16 = sl_BWP_Config->sl_BWP_PoolConfig_r16->sl_TxPoolScheduling_r16->sl_PoolToAddModList_r16->list.array[k];
        free_nr_sl_resource_pool(sl_ResourcePoolConfig_r16->sl_ResourcePool_r16);
      }
      free_and_zero(sl_BWP_Config);
    }
    free_and_zero(sl_FreqInfoToAddMod->sl_BWP_ToAddModList_r16);
    free_and_zero(sl_FreqInfoToAddMod->sl_AbsoluteFrequencyPointA_r16);
    free_and_zero(sl_FreqInfoToAddMod);
  }
  free_and_zero(nr_sl_PHY_MAC_RLC_Config->sl_FreqInfoToAddModList_r16);
  free_and_zero(nr_sl_PHY_MAC_RLC_Config->sl_CSI_Acquisition_r16);
  free_and_zero(nr_sl_PHY_MAC_RLC_Config->sl_ScheduledConfig_r16->choice.setup->sl_CS_RNTI_r16);
  free_and_zero(nr_sl_PHY_MAC_RLC_Config->sl_ScheduledConfig_r16->choice.setup);
  free_and_zero(nr_sl_PHY_MAC_RLC_Config->sl_ScheduledConfig_r16);
  free_and_zero(nr_sl_PHY_MAC_RLC_Config);
  free_and_zero(sl_conf->choice.setup);
  free_and_zero(sl_conf);
}