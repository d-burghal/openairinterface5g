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

#define RRC_SL_PRECONFIG
#define RRC_SL_PRECONFIG_C

#include "oai_asn1.h"
#include "NR_SL-PreconfigurationNR-r16.h"
#include "common/utils/LOG/log.h"
#include "sl_preconfig_paramvalues_gNB.h"
#include "common/config/config_userapi.h"
#include "openair2/RRC/NR_UE/rrc_defs.h"
#include "openair2/RRC/NR_UE/rrc_vars.h"
#include "LAYER2/NR_MAC_UE/mac_proto.h"
#include "RRC/NAS/nas_config.h"
#include "nr_rrc_config.h"
#include "executables/nr-uesoftmodem.h"
#include "LAYER2/nr_rlc/nr_rlc_oai_api.h"
#include "LAYER2/nr_pdcp/nr_pdcp_oai_api.h"

#define GNSS_SUPPORT 0

#define SL_SYNC_SOURCE_NONE  0 //No sync source selected
#define SL_SYNC_SOURCE_GNBENB 1 // GNB/ENB as sync source
#define SL_SYNC_SOURCE_GNSS 2 // GPS as sync source
#define SL_SYNC_SOURCE_SYNC_REF_UE 3 // another SYNC REF UE as sync source
#define SL_SYNC_SOURCE_LOCAL_TIMING 4 //UE acts as sync source

void prepare_nr_sl_SyncConfig_gNB(NR_SL_SyncConfig_r16_t *sl_syncconfig)
{

  // Hysteris when evaluating SyncRef UE
  sl_syncconfig->sl_SyncRefMinHyst_r16 = NULL;

  // Hysteris when evaluating SyncRef UE
  sl_syncconfig->sl_SyncRefDiffHyst_r16 = NULL;

  // Filtering for SL RSRP
  sl_syncconfig->sl_filterCoefficient_r16 = NULL;

  // SSB Periodicity within 16 frames.
  sl_syncconfig->sl_SSB_TimeAllocation1_r16 = calloc(1, sizeof(NR_SL_SSB_TimeAllocation_r16_t));
  sl_syncconfig->sl_SSB_TimeAllocation1_r16->sl_NumSSB_WithinPeriod_r16 = calloc(1, sizeof(long));
  sl_syncconfig->sl_SSB_TimeAllocation1_r16->sl_TimeOffsetSSB_r16 = calloc(1, sizeof(long));
  sl_syncconfig->sl_SSB_TimeAllocation1_r16->sl_TimeInterval_r16 = calloc(1, sizeof(long));
  sl_syncconfig->sl_SSB_TimeAllocation2_r16 = NULL;
  sl_syncconfig->sl_SSB_TimeAllocation3_r16 = NULL;

  //SLSS Id
  sl_syncconfig->sl_SSID_r16 = NULL;

  // Threshold to be used in coverage
  sl_syncconfig->txParameters_r16.syncTxThreshIC_r16 = NULL;

  // Threshold to be used when Out of coverage
  sl_syncconfig->txParameters_r16.syncTxThreshOoC_r16 = NULL;

  // Syncconfig is used when UE is synced to GNSS if set, else if UE is synced to eNB/gNB
  sl_syncconfig->gnss_Sync_r16 = calloc(1, sizeof(long));
  *sl_syncconfig->gnss_Sync_r16 = 0; // GNSS

  char aprefix[MAX_OPTNAME_SIZE*2 + 8];
  paramdef_t SL_SYNCCFGPARAMS[] = SL_SYNCPARAMS_DESC(sl_syncconfig);
  paramlist_def_t SL_SYNCFGParamList = {SL_CONFIG_STRING_SL_SYNCCONFIG_LIST, NULL, 0};
  sprintf(aprefix, "%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0);
  config_getlist(&SL_SYNCFGParamList, NULL, 0, aprefix);
  LOG_D(RRC, "NUM SL-SYNCCFG elem in cfg file:%d\n", SL_SYNCFGParamList.numelt);
  sprintf(aprefix, "%s.[%i].%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0, SL_CONFIG_STRING_SL_SYNCCONFIG_LIST, 0);
  config_get(SL_SYNCCFGPARAMS, sizeof(SL_SYNCCFGPARAMS) / sizeof(paramdef_t), aprefix);

}

static void prepare_NR_SL_ResourcePool(NR_SL_ResourcePool_r16_t *sl_res_pool,
                                       uint16_t is_txpool,
                                       uint16_t is_sl_syncsource)
{

  // PSCCH configuration
  sl_res_pool->sl_PSCCH_Config_r16 = calloc(1, sizeof(*sl_res_pool->sl_PSCCH_Config_r16));
  sl_res_pool->sl_PSCCH_Config_r16->present = NR_SetupRelease_SL_PSCCH_Config_r16_PR_setup;
  sl_res_pool->sl_PSCCH_Config_r16->choice.setup = calloc(1, sizeof(NR_SL_PSCCH_Config_r16_t));
  // Indicates number of symbols for PSCCH in a resource pool
  sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_TimeResourcePSCCH_r16 = calloc(1, sizeof(long));

  // Indicates number of PRBs for PSCCH in a resource pool
  sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_FreqResourcePSCCH_r16 = calloc(1, sizeof(long));

  // Inititation during PSCCH DMRS Sequence generation
  sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_DMRS_ScrambleID_r16 = calloc(1, sizeof(long));
  *sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_DMRS_ScrambleID_r16 = 0;

  // num reserve bits used for first stage SCI
  sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_NumReservedBits_r16 = calloc(1, sizeof(long));
  *sl_res_pool->sl_PSCCH_Config_r16->choice.setup->sl_NumReservedBits_r16 = 2;

  // PSSCH Configuration
  sl_res_pool->sl_PSSCH_Config_r16 = calloc(1, sizeof(NR_SetupRelease_SL_PSSCH_Config_r16_t));
  sl_res_pool->sl_PSSCH_Config_r16->present = NR_SetupRelease_SL_PSSCH_Config_r16_PR_setup;
  sl_res_pool->sl_PSSCH_Config_r16->choice.setup = calloc(1, sizeof(NR_SL_PSSCH_Config_r16_t));

  sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_BetaOffsets2ndSCI_r16 =
                      calloc(1, sizeof(*sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_BetaOffsets2ndSCI_r16));
  for(int i = 0; i < 4; i++) {
    long *p = calloc(1, sizeof(long));
    *p = i << 2; // valid values: 0...15, for the moment choose 0,4,8,12
    ASN_SEQUENCE_ADD(&sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_BetaOffsets2ndSCI_r16->list, p);
  }

  sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_PSSCH_DMRS_TimePatternList_r16 =
                      calloc(1, sizeof(*sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_PSSCH_DMRS_TimePatternList_r16));
  for(int i = 0; i < 3; i++) {
    long *p = calloc(1, sizeof(long));
    *p = 2 + i; // valid values: 2..4
    ASN_SEQUENCE_ADD(&sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_PSSCH_DMRS_TimePatternList_r16->list, p);
  }

  // This should be added to configuration file
  sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_Scaling_r16 = calloc(1, sizeof(*sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_Scaling_r16));
  *sl_res_pool->sl_PSSCH_Config_r16->choice.setup->sl_Scaling_r16 = NR_SL_PSSCH_Config_r16__sl_Scaling_r16_f0p5;

  // PSFCH configuration
  sl_res_pool->sl_PSFCH_Config_r16 = calloc(1, sizeof(*sl_res_pool->sl_PSFCH_Config_r16));
  sl_res_pool->sl_PSFCH_Config_r16->present = NR_SetupRelease_SL_PSFCH_Config_r16_PR_setup;
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup = calloc(1, sizeof(NR_SL_PSFCH_Config_r16_t));

  // Period of PSFCH resource in the unit of slots within this resource pool. If set to sl0, no resource for PSFCH,
  //and HARQ feedback for all transmissions in the resource pool is disabled.
  // {sl0, sl1, sl2, sl4}
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_Period_r16 = calloc(1, sizeof(long));

  // Set of PRBs that are actually used for PSFCH transmission and reception (bitmap)
  // 0xFFFFFFFFFFFF  (PRBs bitmap) Multiple of sl_NumSubchannel * sl_PSFCH_Period
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16 = calloc(1, sizeof(*sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16));

  // Number of cyclic shift pairs used for a PSFCH transmission that can be multiplexed in a PRB
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_NumMuxCS_Pair_r16 = calloc(1, sizeof(long));

  // The minimum time gap between PSFCH and the associated PSSCH in the unit of slots {sl2, sl3}
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_MinTimeGapPSFCH_r16 = calloc(1, sizeof(long));

  // Scrambling ID {0..1023} for sequence hopping of the PSFCH used in the resource pool
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_HopID_r16 = calloc(1, sizeof(long));

  // Indicates the number of PSFCH resources available {startSubCH, allocSubCH} for multiplexing HARQ-ACK information in a PSFCH transmission
  sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_CandidateResourceType_r16 = calloc(1, sizeof(long));

  // indicates allowed sync sources which are allowed to use this resource pool
  sl_res_pool->sl_SyncAllowed_r16 = calloc(1, sizeof(NR_SL_SyncAllowed_r16_t));

  // configured resources can be used if UE is directly/indirectly synced to network.
  sl_res_pool->sl_SyncAllowed_r16->gnbEnb_Sync_r16 = NULL;

  // configured resources can be used if UE is directly/indirectly synced to GNSS.
  sl_res_pool->sl_SyncAllowed_r16->gnss_Sync_r16 = calloc(1, sizeof(long));
  *sl_res_pool->sl_SyncAllowed_r16->gnss_Sync_r16 = NR_SL_SyncAllowed_r16__gnss_Sync_r16_true;

  // configured resources can be used if UE is directly/indirectly synced to SYNC REF UE.
  sl_res_pool->sl_SyncAllowed_r16->ue_Sync_r16 = calloc(1, sizeof(long));
  *sl_res_pool->sl_SyncAllowed_r16->ue_Sync_r16 = NR_SL_SyncAllowed_r16__ue_Sync_r16_true;

  //Min freq domain resources used for resource sensing. Size of Subchannels
  sl_res_pool->sl_SubchannelSize_r16 = calloc(1, sizeof(long));

  sl_res_pool->dummy = NULL;

  // lowest RB index of lowest subch in this resource pool
  sl_res_pool->sl_StartRB_Subchannel_r16 = calloc(1, sizeof(long));

  //number of subchannels in this res pool. contiguous PRBs
  sl_res_pool->sl_NumSubchannel_r16 = calloc(1, sizeof(long));


  // 64QAM table is default. in case other MCS tables needs tobe used.
  sl_res_pool->sl_Additional_MCS_Table_r16 = NULL;

  sl_res_pool->sl_ThreshS_RSSI_CBR_r16 = NULL;
  sl_res_pool->sl_TimeWindowSizeCBR_r16 = NULL;
  sl_res_pool->sl_TimeWindowSizeCR_r16 = NULL;
  sl_res_pool->sl_PTRS_Config_r16 = NULL;
  sl_res_pool->sl_UE_SelectedConfigRP_r16 = calloc(1, sizeof(*sl_res_pool->sl_UE_SelectedConfigRP_r16));
  sl_res_pool->sl_UE_SelectedConfigRP_r16->sl_MaxNumPerReserve_r16 = calloc(1, sizeof(*sl_res_pool->sl_UE_SelectedConfigRP_r16->sl_MaxNumPerReserve_r16));
  sl_res_pool->sl_RxParametersNcell_r16 = calloc(1,sizeof(struct NR_SL_ResourcePool_r16__sl_RxParametersNcell_r16));
  sl_res_pool->sl_RxParametersNcell_r16->sl_SyncConfigIndex_r16 = 1;

  sl_res_pool->sl_FilterCoefficient_r16 = NULL;

  //number of contiguous PRBS in this res pool.
  sl_res_pool->sl_RB_Number_r16 = calloc(1, sizeof(long));

  sl_res_pool->sl_PreemptionEnable_r16 = NULL;
  sl_res_pool->sl_PriorityThreshold_UL_URLLC_r16 = NULL;
  sl_res_pool->sl_PriorityThreshold_r16 = NULL;
  sl_res_pool->sl_X_Overhead_r16 = NULL;
  sl_res_pool->sl_PowerControl_r16 = calloc(1, sizeof(*sl_res_pool->sl_PowerControl_r16));
  sl_res_pool->sl_PowerControl_r16->sl_Alpha_PSSCH_PSCCH_r16 = calloc(1, sizeof(*sl_res_pool->sl_PowerControl_r16->sl_Alpha_PSSCH_PSCCH_r16));
  *sl_res_pool->sl_PowerControl_r16->sl_Alpha_PSSCH_PSCCH_r16 = 0;
  sl_res_pool->sl_MinMaxMCS_List_r16 = NULL;

  sl_res_pool->ext1 = calloc(1, sizeof(*sl_res_pool->ext1));
  sl_res_pool->ext1->sl_TimeResource_r16 = calloc(1, sizeof(*sl_res_pool->ext1->sl_TimeResource_r16));
  sl_res_pool->ext1->sl_TimeResource_r16->size = 8;
  sl_res_pool->ext1->sl_TimeResource_r16->bits_unused = 4;
  sl_res_pool->ext1->sl_TimeResource_r16->buf = calloc(sl_res_pool->ext1->sl_TimeResource_r16->size, sizeof(uint8_t));
  // EX: BITMAP 10101010.. indicating every alternating slot supported for sidelink
  for (int i = 0; i<sl_res_pool->ext1->sl_TimeResource_r16->size; i++) {
    if (is_txpool) {
        sl_res_pool->ext1->sl_TimeResource_r16->buf[i] = (is_sl_syncsource) ? 0xF0 //0x88;//0xAA;
                                                                            : 0x0F;//0x11;//0x55;
    } else {
        sl_res_pool->ext1->sl_TimeResource_r16->buf[i] = (is_sl_syncsource) ? 0x0F //0x88;//0xAA;
                                                                            : 0xF0;//0x11;//0x55;
    }
  }

  // mask out unused bits
  sl_res_pool->ext1->sl_TimeResource_r16->buf[sl_res_pool->ext1->sl_TimeResource_r16->size - 1] &= (0 - (1 << (sl_res_pool->ext1->sl_TimeResource_r16->bits_unused)));

  char aprefix[MAX_OPTNAME_SIZE*2 + 8];
  paramdef_t SL_POOLPARAMS[] = SL_RESPOOLPARAMS_DESC(sl_res_pool);
  if (is_txpool)
    sprintf(aprefix, "%s.[%i].%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0, SL_CONFIG_STRING_SL_TX_RPOOL_LIST, 0);
  else
    sprintf(aprefix, "%s.[%i].%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0, SL_CONFIG_STRING_SL_RX_RPOOL_LIST, 0);

  config_get(SL_POOLPARAMS, sizeof(SL_POOLPARAMS) / sizeof(paramdef_t), aprefix);

  struct NR_SL_PSFCH_Config_r16 *nr_sl_psfch_config = sl_res_pool->sl_PSFCH_Config_r16->choice.setup;
  if (*nr_sl_psfch_config->sl_PSFCH_Period_r16 > 0) {
    const uint8_t psfch_periods[] = {0, 1, 2, 4};
    AssertFatal(*nr_sl_psfch_config->sl_PSFCH_Period_r16 < 4, "sl_PSFCH_Period_r16 index must be less than 4\n");
    LOG_D(NR_PHY, "Configuring PSFCH Period %d\n", psfch_periods[*nr_sl_psfch_config->sl_PSFCH_Period_r16]);
    uint8_t psfch_period = psfch_periods[*nr_sl_psfch_config->sl_PSFCH_Period_r16];
    uint16_t prod_numCh_period = *sl_res_pool->sl_NumSubchannel_r16*psfch_period;
    uint16_t num_prbs = (*sl_res_pool->sl_RB_Number_r16 / prod_numCh_period) * prod_numCh_period;
    uint16_t num_bytes = (num_prbs % 8) ? (num_prbs / 8) + 1 : (num_prbs / 8);
    sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->size = num_bytes;

    sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->bits_unused = (num_prbs % 8) ? 8 - (num_prbs % 8) : 0;
    sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->buf = calloc(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->size, sizeof(uint8_t));
    memset(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->buf, 0xFF, num_prbs / 8);
    uint8_t remaining_prbs = 0;
    for (int i = 8 - (num_prbs % 8); i < 8; i++)
      remaining_prbs |= 1 << i;
    if ( num_prbs % 8 != 0 )
      sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16->buf[num_prbs / 8] = remaining_prbs;
    LOG_D(RRC, "M: %d, PRBs %d, size in bytes %d, unused bits %d, full size bytes %d, remaining prbs %d\n", prod_numCh_period, num_prbs, num_bytes, (num_prbs % 8) ? 8 - (num_prbs % 8) : 0, num_prbs / 8, remaining_prbs);
  } else {
    LOG_I(NR_RRC,"Freeing sl_PSFCH_Config_r16\n");
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_CandidateResourceType_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_HopID_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_MinTimeGapPSFCH_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_NumMuxCS_Pair_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_RB_Set_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup->sl_PSFCH_Period_r16);
    free(sl_res_pool->sl_PSFCH_Config_r16->choice.setup);
    free(sl_res_pool->sl_PSFCH_Config_r16);
    sl_res_pool->sl_PSFCH_Config_r16 = NULL;
  }
}

void prepare_NR_SL_BWPConfig(NR_SL_BWP_Config_r16_t *sl_bwp,
                             uint16_t num_tx_pools,
                             uint16_t num_rx_pools,
                             uint16_t sl_syncsource)
{

  sl_bwp->sl_BWP_Generic_r16 = calloc(1, sizeof(NR_SL_BWP_Generic_r16_t));
  sl_bwp->sl_BWP_Generic_r16->sl_BWP_r16 = calloc(1, sizeof(NR_BWP_t));
  // if Cyclicprefix is NULL, then default value Normal cyclic prefix is configured. else EXT CP.
  sl_bwp->sl_BWP_Generic_r16->sl_BWP_r16->cyclicPrefix = NULL;

  // Value can be between symbols 7 to 14
  sl_bwp->sl_BWP_Generic_r16->sl_LengthSymbols_r16 = calloc(1, sizeof(long));

  // Value can be between symbols 0 to 7
  sl_bwp->sl_BWP_Generic_r16->sl_StartSymbol_r16 = calloc(1, sizeof(long));

  sl_bwp->sl_BWP_Generic_r16->sl_PSBCH_Config_r16 = calloc(1, sizeof(NR_SL_PSBCH_Config_r16_t));
  // PSBCH CONFIG contains PO and alpha for PSBCH powercontrol.
  sl_bwp->sl_BWP_Generic_r16->sl_PSBCH_Config_r16->present = NR_SetupRelease_SL_PSBCH_Config_r16_PR_release;
  sl_bwp->sl_BWP_Generic_r16->sl_PSBCH_Config_r16->choice.release = 0;

  sl_bwp->sl_BWP_Generic_r16->sl_TxDirectCurrentLocation_r16 = NULL;

  char aprefix[MAX_OPTNAME_SIZE*2 + 8];
  paramdef_t SL_BWPPARAMS[] = SL_BWPPARAMS_DESC(sl_bwp);
  paramlist_def_t SL_BWPParamList = {SL_CONFIG_STRING_SL_BWP_LIST, NULL, 0};
  sprintf(aprefix, "%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0);
  config_getlist(&SL_BWPParamList, NULL, 0, aprefix);
  LOG_D(RRC, "NUM SL-BWP elem in cfg file:%d\n", SL_BWPParamList.numelt);
  sprintf(aprefix, "%s.[%i].%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0, SL_CONFIG_STRING_SL_BWP_LIST, 0);
  config_get(SL_BWPPARAMS, sizeof(SL_BWPPARAMS) / sizeof(paramdef_t), aprefix);

  sl_bwp->sl_BWP_PoolConfig_r16 = calloc(1, sizeof(NR_SL_BWP_PoolConfig_r16_t));

  paramlist_def_t SL_RxPoolParamList = {SL_CONFIG_STRING_SL_RX_RPOOL_LIST, NULL, 0};
  sprintf(aprefix, "%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0);
  config_getlist(&SL_RxPoolParamList, NULL, 0, aprefix);
  LOG_D(RRC, "NUM Rx RPOOLs in cfg file:%d\n", SL_RxPoolParamList.numelt);
  AssertFatal(SL_RxPoolParamList.numelt <= 1 && num_rx_pools <= 1, "Only Max 1 RX Respool Supported now\n");

  if (num_rx_pools || SL_RxPoolParamList.numelt) {
    // Receiving resource pool.
    NR_SL_ResourcePool_r16_t *respool = calloc(1, sizeof(*respool));
    sl_bwp->sl_BWP_PoolConfig_r16->sl_RxPool_r16 = calloc(1, sizeof(*sl_bwp->sl_BWP_PoolConfig_r16->sl_RxPool_r16));
    ASN_SEQUENCE_ADD(&sl_bwp->sl_BWP_PoolConfig_r16->sl_RxPool_r16->list, respool);
    // Fill RX resource pool
    prepare_NR_SL_ResourcePool(sl_bwp->sl_BWP_PoolConfig_r16->sl_RxPool_r16->list.array[0], 0, sl_syncsource);
  } else
    sl_bwp->sl_BWP_PoolConfig_r16->sl_RxPool_r16 = NULL;

  paramlist_def_t SL_TxPoolParamList = {SL_CONFIG_STRING_SL_TX_RPOOL_LIST, NULL, 0};
  sprintf(aprefix, "%s.[%i]", SL_CONFIG_STRING_SL_PRECONFIGURATION, 0);
  config_getlist(&SL_TxPoolParamList, NULL, 0, aprefix);
  LOG_D(RRC, "NUM Tx RPOOL in cfg file:%d\n", SL_TxPoolParamList.numelt);
  AssertFatal(SL_TxPoolParamList.numelt <= 1 && num_tx_pools <= 1, "Only Max 1 TX Respool Supported now\n");

  if (num_tx_pools || SL_TxPoolParamList.numelt) {
    //resource pool(s) to transmit NR SL
    sl_bwp->sl_BWP_PoolConfig_r16->sl_TxPoolScheduling_r16 = calloc(1, sizeof(NR_SL_TxPoolDedicated_r16_t));
    NR_SL_TxPoolDedicated_r16_t* sl_TxPoolScheduling_r16 = sl_bwp->sl_BWP_PoolConfig_r16->sl_TxPoolScheduling_r16;
    sl_TxPoolScheduling_r16->sl_PoolToReleaseList_r16 = calloc(1, sizeof(struct NR_SL_TxPoolDedicated_r16__sl_PoolToReleaseList_r16));
    NR_SL_ResourcePoolID_r16_t *nr_sl_ResourcePoolID =  calloc(1, sizeof(NR_SL_ResourcePoolID_r16_t));
    *nr_sl_ResourcePoolID = 1;
    ASN_SEQUENCE_ADD(&sl_TxPoolScheduling_r16->sl_PoolToReleaseList_r16->list, nr_sl_ResourcePoolID);

    sl_TxPoolScheduling_r16->sl_PoolToAddModList_r16 = calloc(1, sizeof(struct NR_SL_TxPoolDedicated_r16__sl_PoolToAddModList_r16));

    NR_SL_ResourcePoolConfig_r16_t *respoolcfg = calloc(1, sizeof(*respoolcfg));
    respoolcfg->sl_ResourcePoolID_r16 = 1;
    respoolcfg->sl_ResourcePool_r16 = calloc(1, sizeof(*respoolcfg->sl_ResourcePool_r16));
    ASN_SEQUENCE_ADD(&sl_TxPoolScheduling_r16->sl_PoolToAddModList_r16->list, respoolcfg);

    // Fill tx resource pool
    prepare_NR_SL_ResourcePool(sl_TxPoolScheduling_r16->sl_PoolToAddModList_r16->list.array[0]->sl_ResourcePool_r16, 1, sl_syncsource);
  } else
    sl_bwp->sl_BWP_PoolConfig_r16->sl_TxPoolScheduling_r16 = NULL;

  sl_bwp->sl_BWP_PoolConfig_r16->sl_TxPoolExceptional_r16 = NULL;
}
