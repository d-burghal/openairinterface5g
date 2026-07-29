/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */
 
#include "nr_mac_common.h"

// Records bandList position (0-based) to index into featureSetCombinations
typedef struct {
  bool matched;
  int pos;
  NR_FeatureSetCombinationId_t featureSetCombination;
} band_combination_match_t;

// Find the BandCombination whose bandList matches the input
static const band_combination_match_t find_band_combination(const NR_UE_NR_Capability_t *cap, int band, nr_rat_type_t type)
{
  band_combination_match_t match = {0};
  NR_BandCombinationList_t *bcl = cap->rf_Parameters.supportedBandCombinationList;
  if (!bcl)
    return match;

  for (int i = 0; i < bcl->list.count; i++) {
    const NR_BandCombination_t *bc = bcl->list.array[i];
    int count = bc->bandList.list.count;
    switch (type) {
      case NR_SA:
        if (count == 1) {
          const NR_BandParameters_t *bp = bc->bandList.list.array[0];
          if (bp->present == NR_BandParameters_PR_nr && bp->choice.nr && bp->choice.nr->bandNR == band) {
            match.matched = true;
            match.pos = 0;
            match.featureSetCombination = bc->featureSetCombination;
            return match;
          }
        } 
        break;
      case EN_DC:
      case NR_DC:
        if (count == 2) { // NR + EUTRA or NR + NR
          for (int j = 0; j < 2; j++) {
            const NR_BandParameters_t *bp = bc->bandList.list.array[j];
            if (bp->present == NR_BandParameters_PR_nr && bp->choice.nr && bp->choice.nr->bandNR == band) {
              if (j == 1 && match.matched)
                match.matched = false;  // multiple CC in the same band not supported yet
              else {
                match.matched = true;
                match.pos = j;
                match.featureSetCombination = bc->featureSetCombination;
              }
            }
          }
          if (match.matched)
            return match;
        }
        break;
      default:
        AssertFatal(false, "Unsupported NR RAT type\n");
    }
  }
  return match;
}

NR_feature_set_ids_t get_feature_set_ids (const NR_UE_NR_Capability_t *cap, int band, nr_rat_type_t type)
{
  NR_feature_set_ids_t ids = {0};
  band_combination_match_t band_comb = find_band_combination(cap, band, type);
  if (!band_comb.matched)
    return ids;
  if (!cap->featureSetCombinations || !cap->featureSets)
    return ids;

  int fsc_idx = band_comb.featureSetCombination;
  if (fsc_idx < 0 || fsc_idx >= cap->featureSetCombinations->list.count) {
    LOG_E(NR_MAC, "Invalid featureSetCombination index %d\n", fsc_idx);
    return ids;
  }
  const NR_FeatureSetCombination_t *fsc = cap->featureSetCombinations->list.array[fsc_idx];
  if (band_comb.pos < 0 || band_comb.pos >= fsc->list.count) {
    LOG_E(NR_MAC, "Invalid FeatureSetsPerBand index %d\n", band_comb.pos);
    return ids;
  }
  const NR_FeatureSetsPerBand_t *fspb = fsc->list.array[band_comb.pos];
  if (fspb->list.count != 1) {
    LOG_E(NR_MAC, "Cannot handle more than 1 FeatureSet\n");
    return ids;
  }
  const NR_FeatureSet_t *fs = fspb->list.array[0];
  if (fs->present != NR_FeatureSet_PR_nr || !fs->choice.nr) {
    LOG_E(NR_MAC, "FeatureSet is not NR\n");
    return ids;    
  }
  // 0 = not valid, 1 and more = position in the list
  long downlinkSetNR = fs->choice.nr->downlinkSetNR;
  long uplinkSetNR = fs->choice.nr->uplinkSetNR;
  if (cap->featureSets->featureSetsDownlink) {
    long idx = downlinkSetNR - 1;
    if (idx >= 0 && idx < cap->featureSets->featureSetsDownlink->list.count) {
      const NR_FeatureSetDownlink_t *fsd = cap->featureSets->featureSetsDownlink->list.array[idx];
      if (fsd->featureSetListPerDownlinkCC.list.count == 1)
        ids.dl_feature_set_percc_id = *(fsd->featureSetListPerDownlinkCC.list.array[0]);
      else
        LOG_E(NR_MAC, "Multiple carriers in FeatureSetDownlink not supported\n");
    }
  }
  if (cap->featureSets->featureSetsUplink) {
    long idx = uplinkSetNR - 1;
    if (idx >= 0 && idx < cap->featureSets->featureSetsUplink->list.count) {
      const NR_FeatureSetUplink_t *fsd = cap->featureSets->featureSetsUplink->list.array[idx];
      if (fsd->featureSetListPerUplinkCC.list.count == 1)
        ids.ul_feature_set_percc_id = *(fsd->featureSetListPerUplinkCC.list.array[0]);
      else
        LOG_E(NR_MAC, "Multiple carriers in FeatureSetUplink not supported\n");
    }
  }
  return ids;
}
