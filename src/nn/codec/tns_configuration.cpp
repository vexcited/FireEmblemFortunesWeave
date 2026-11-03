#include "nn/codec/tns_configuration.hpp"

namespace nn::codec {
using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using SCHAR = int8_t;
using INT = int32_t;
using LONG = int32_t;
void FDKmemcpy(void*, const void*, unsigned int);
int32_t fDivNorm(int32_t, int32_t, int32_t*);
int32_t fLog2(int32_t, int, int*);
int32_t fMultNorm(int32_t, int32_t, int32_t*);
struct PsyBandConfiguration {
  int count;
  int active;
  int active_lfe;
  int offsets[52];
};
static_assert(__builtin_offsetof(PsyBandConfiguration, offsets) == 12);
static constexpr int32_t fixed(double value) {
  double scaled = value * 2147483648.0 + (value >= 0 ? 0.5 : -0.5);
  return scaled >= 2147483647.0    ? 2147483647
         : scaled <= -2147483648.0 ? (-2147483647 - 1)
                                   : int32_t(scaled);
}

static constexpr int16_t fixed16(double value) {
  double scaled = value * 32768.0 + (value >= 0 ? 0.5 : -0.5);
  return scaled >= 32767 ? 32767 : scaled <= -32768 ? -32768 : int16_t(scaled);
}

static int CountLeadingBits(int32_t value) {
  return value ? __builtin_clrsb(value) : 0;
}

static int32_t fAbs(int32_t value) {
  return value < 0 ? int32_t(0U - uint32_t(value)) : value;
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return int32_t((int64_t(a) * b) >> 32);
}

static int32_t fMult(int32_t a, int32_t b) {
  return int32_t(uint32_t(fMultDiv2(a, b)) << 1);
}

static int32_t fPow2(int32_t value) {
  return fMult(value, value);
}

static int32_t fPow2Div2(int32_t value) {
  return fMultDiv2(value, value);
}

static int32_t fMultAddDiv2(int32_t value, int16_t a, int32_t b) {
  return int32_t(uint32_t(value) + uint32_t((int64_t(a) * b) >> 16));
}

static int32_t scaleValue(int32_t value, int shift) {
  return shift >= 0 ? int32_t(uint32_t(value) << (shift & 31))
                    : value >> (-shift & 31);
}

static int32_t scaleValueSaturate(int32_t value, int shift) {
  if (shift <= 0) {
    return shift < -31 ? 0 : value >> -shift;
  }
  if (value && CountLeadingBits(value) < shift) {
    return value > 0 ? 2147483647 : (-2147483647 - 1);
  }
  return int32_t(uint32_t(value) << (shift & 31));
}

static const FIXP_SGL pow2Coeff[8] = {
  fixed16(0.693147180559945309417232121458177),
  fixed16(0.240226506959100712333551263163332),
  fixed16(0.0555041086648215799531422637686218),
  fixed16(0.00961812910762847716197907157365887),
  fixed16(0.00133335581464284434234122219879962),
  fixed16(1.54035303933816099544370973327423e-4),
  fixed16(1.52527338040598402800254390120096e-5),
  fixed16(1.32154867901443094884037582282884e-6)};
FIXP_DBL f2Pow(const FIXP_DBL exp_m, const INT exp_e, INT* result_e) {
  FIXP_DBL frac_part, result_m;
  INT int_part;
  if (exp_e > 0) {
    INT exp_bits = 32 - 1 - exp_e;
    int_part = exp_m >> exp_bits;
    frac_part = exp_m - (FIXP_DBL)(int_part << exp_bits);
    frac_part = frac_part << exp_e;
  }
  else {
    int_part = 0;
    frac_part = exp_m >> -exp_e;
  }
  if (frac_part > fixed(0.5f)) {
    int_part = int_part + 1;
    frac_part = frac_part + fixed(-1.0f);
  }
  if (frac_part < fixed(-0.5f)) {
    int_part = int_part - 1;
    frac_part = -(fixed(-1.0f) - frac_part);
  }
  {
    FIXP_DBL p;
    p = frac_part;
    result_m = fixed(1.0f / 2.0f);
    for (INT i = 0; i < 5; i++) {
      result_m = fMultAddDiv2(result_m, pow2Coeff[i], p);
      p = fMult(p, frac_part);
    }
  }
  *result_e = int_part + 1;
  return result_m;
}

FIXP_DBL f2Pow(const FIXP_DBL exp_m, const INT exp_e) {
  FIXP_DBL result_m;
  INT result_e;
  result_m = f2Pow(exp_m, exp_e, &result_e);
  result_e = fixMin(32 - 1, fixMax(-(32 - 1), result_e));
  return scaleValue(result_m, result_e);
}

FIXP_DBL fPow(FIXP_DBL base_m, INT base_e, FIXP_DBL exp_m, INT exp_e,
              INT* result_e) {
  INT ans_lg2_e, baselg2_e;
  FIXP_DBL base_lg2, ans_lg2, result;
  base_lg2 = fLog2(base_m, base_e, &baselg2_e);
  {
    INT leadingBits;
    leadingBits = CountLeadingBits(fAbs(exp_m));
    exp_m = exp_m << leadingBits;
    exp_e -= leadingBits;
  }
  ans_lg2 = fMult(base_lg2, exp_m);
  ans_lg2_e = exp_e + baselg2_e;
  result = f2Pow(ans_lg2, ans_lg2_e, result_e);
  return result;
}

static const FIXP_DBL acfWindowLong[12 + 3 + 1] = {
  0x7fffffff, 0x7fb80000, 0x7ee00000, 0x7d780000, 0x7b800000, 0x78f80000,
  0x75e00000, 0x72380000, 0x6e000000, 0x69380000, 0x63e00000, 0x5df80000,
  0x57800000, 0x50780000, 0x48e00000, 0x40b80000};
static const FIXP_DBL acfWindowShort[4 + 3 + 1] = {
  0x7fffffff, 0x7e000000, 0x78000000, 0x6e000000,
  0x60000000, 0x4e000000, 0x38000000, 0x1e000000};
typedef struct {
  INT bitRateFrom[2];
  INT bitRateTo[2];
  TNS_PARAMETER_TABULATED paramTab[2];
} TNS_INFO_TAB;
static const TNS_INFO_TAB tnsInfoTab[] = {
  {{16000, 13500},
   {32000, 28000},
   {{{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 12},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.2f / (float)(1 << (1))))},
     1},
    {{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 12},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.2f / (float)(1 << (1))))},
     1}}},
  {{32001, 28001},
   {60000, 52000},
   {{{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 10},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.0f / (float)(1 << (1))))},
     1},
    {{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 10},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.0f / (float)(1 << (1))))},
     1}}},
  {{60001, 52001},
   {384000, 384000},
   {{{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 8},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.0f / (float)(1 << (1))))},
     1},
    {{1, 1},
     {1437, 1500},
     {1400, 600},
     {12, 8},
     {0, 0},
     {3, 1},
     {(fixed(0.4f / (float)(1 << (1)))), (fixed(1.0f / (float)(1 << (1))))},
     1}}}};
typedef struct {
  INT samplingRate;
  SCHAR maxBands[2];
} TNS_MAX_TAB_ENTRY;
static const TNS_MAX_TAB_ENTRY tnsMaxBandsTab1024[] = {
  {96000, {31, 9}},  {88200, {31, 9}},  {64000, {34, 10}}, {48000, {40, 14}},
  {44100, {42, 14}}, {32000, {51, 14}}, {24000, {46, 14}}, {22050, {46, 14}},
  {16000, {42, 14}}, {12000, {42, 14}}, {11025, {42, 14}}, {8000, {39, 14}}};
static const TNS_MAX_TAB_ENTRY tnsMaxBandsTab480[] = {{48000, {31, -1}},
                                                      {44100, {32, -1}},
                                                      {32000, {37, -1}},
                                                      {24000, {30, -1}},
                                                      {22050, {30, -1}}};
static const TNS_MAX_TAB_ENTRY tnsMaxBandsTab512[] = {{48000, {31, -1}},
                                                      {44100, {32, -1}},
                                                      {32000, {37, -1}},
                                                      {24000, {31, -1}},
                                                      {22050, {31, -1}}};
static const TNS_PARAMETER_TABULATED*
FDKaacEnc_GetTnsParam(const INT bitRate, const INT channels, const INT sbrLd) {
  int i;
  const TNS_PARAMETER_TABULATED* tnsConfigTab = nullptr;
  for (i = 0; i < (int)(sizeof(tnsInfoTab) / sizeof(TNS_INFO_TAB)); i++) {
    if ((bitRate >= tnsInfoTab[i].bitRateFrom[sbrLd ? 1 : 0]) &&
        bitRate <= tnsInfoTab[i].bitRateTo[sbrLd ? 1 : 0]) {
      tnsConfigTab = &tnsInfoTab[i].paramTab[(channels == 1) ? 0 : 1];
    }
  }
  return tnsConfigTab;
}

static INT getTnsMaxBands(const INT sampleRate, const INT granuleLength,
                          const INT isShortBlock) {
  int i;
  INT numBands = -1;
  const TNS_MAX_TAB_ENTRY* pMaxBandsTab = nullptr;
  int maxBandsTabSize = 0;
  switch (granuleLength) {
    case 1024:
      pMaxBandsTab = tnsMaxBandsTab1024;
      maxBandsTabSize = sizeof(tnsMaxBandsTab1024) / sizeof(TNS_MAX_TAB_ENTRY);
      break;
    case 480:
      pMaxBandsTab = tnsMaxBandsTab480;
      maxBandsTabSize = sizeof(tnsMaxBandsTab480) / sizeof(TNS_MAX_TAB_ENTRY);
      break;
    case 512:
      pMaxBandsTab = tnsMaxBandsTab512;
      maxBandsTabSize = sizeof(tnsMaxBandsTab512) / sizeof(TNS_MAX_TAB_ENTRY);
      break;
    default:
      numBands = -1;
  }
  if (pMaxBandsTab != nullptr) {
    for (i = 0; i < maxBandsTabSize; i++) {
      numBands = pMaxBandsTab[i].maxBands[(!isShortBlock) ? 0 : 1];
      if (sampleRate >= pMaxBandsTab[i].samplingRate) {
        break;
      }
    }
  }
  return numBands;
}

INT FDKaacEnc_FreqToBandWithRounding(const INT freq, const INT fs,
                                     const INT numOfBands,
                                     const INT* bandStartOffset) {
  INT lineNumber, band;
  lineNumber = (freq * bandStartOffset[numOfBands] * 4 / fs + 1) / 2;
  if (lineNumber >= bandStartOffset[numOfBands])
    return numOfBands;
  for (band = 0; band < numOfBands; band++) {
    if (bandStartOffset[band + 1] > lineNumber)
      break;
  }
  if (lineNumber - bandStartOffset[band] >
      bandStartOffset[band + 1] - lineNumber) {
    band++;
  }
  return (band);
}

static void FDKaacEnc_CalcGaussWindow(FIXP_DBL* win, const int winSize,
                                      const INT samplingRate,
                                      const INT transformResolution,
                                      const FIXP_DBL timeResolution,
                                      const INT timeResolution_e) {
  INT i, e1, e2, gaussExp_e;
  FIXP_DBL gaussExp_m;
  gaussExp_m = fMultNorm(
    timeResolution,
    fMult(fixed(3.1416f / (float)(1 << (2))),
          fDivNorm((FIXP_DBL)(samplingRate),
                   (FIXP_DBL)(LONG)(transformResolution * 1000.f), &e1)),
    &e2);
  gaussExp_m = -fPow2Div2(gaussExp_m);
  gaussExp_e = 2 * (e1 + e2 + timeResolution_e + (2));
  for (i = 0; i < winSize; i++) {
    win[i] = fPow(fixed(2.7183 / (float)(1 << (2))), (2),
                  fMult(gaussExp_m, fPow2((i * fixed(1.f / (float)(1 << (4))) +
                                           fixed(.5f / (float)(1 << (4)))))),
                  gaussExp_e + 2 * (4), &e1);
    win[i] = scaleValueSaturate(win[i], e1);
  }
}

int FDKaacEnc_InitTnsConfiguration(INT bitRate, INT sampleRate, INT channels,
                                   INT blockType, INT granuleLength,
                                   INT isLowDelay, INT ldSbrPresent,
                                   TNS_CONFIG* tC, PSY_CONFIGURATION* pC,
                                   INT active, INT) {
  int i;
  if (channels <= 0)
    return (int)1;
  const auto* bands = reinterpret_cast<const PsyBandConfiguration*>(pC);
  tC->isLowDelay = isLowDelay;
  tC->tnsActive = (active) ? 1 : 0;
  tC->maxOrder = (blockType == 2) ? 5 : 12;
  if (bitRate < 16000)
    tC->maxOrder -= 2;
  tC->coefRes = (blockType == 2) ? 3 : 4;
  tC->lpcStopBand =
    getTnsMaxBands(sampleRate, granuleLength, (blockType == 2) ? 1 : 0);
  if (tC->lpcStopBand < 0) {
    return (int)1;
  }
  tC->lpcStopBand = fixMin(tC->lpcStopBand, bands->active);
  tC->lpcStopLine = bands->offsets[tC->lpcStopBand];
  switch (granuleLength) {
    case 1024:
      tC->lpcStartBand[1] = (blockType == 2) ? 0
                                             : ((sampleRate <= 8000)   ? 2
                                                : (sampleRate < 18783) ? 4
                                                                       : 8);
      tC->lpcStartLine[1] = bands->offsets[tC->lpcStartBand[1]];
      i = tC->lpcStopBand;
      while (bands->offsets[i] > (tC->lpcStartLine[1] +
                                  (tC->lpcStopLine - tC->lpcStartLine[1]) / 4))
        i--;
      tC->lpcStartBand[0] = i;
      tC->lpcStartLine[0] = bands->offsets[i];
      tC->confTab.threshOn[0] = 1437;
      tC->confTab.threshOn[1] = 1500;
      tC->confTab.tnsLimitOrder[0] = tC->maxOrder;
      tC->confTab.tnsLimitOrder[1] = tC->maxOrder - 7;
      tC->confTab.tnsFilterDirection[0] = 0;
      tC->confTab.tnsFilterDirection[1] = 0;
      tC->confTab.acfSplit[0] = -1;
      tC->confTab.acfSplit[1] = -1;
      tC->confTab.filterEnabled[0] = 1;
      tC->confTab.filterEnabled[1] = 1;
      tC->confTab.seperateFiltersAllowed = 1;
      if (blockType == 2) {
        FDKmemcpy(tC->acfWindow[0], acfWindowShort,
                  fixMin(sizeof(acfWindowShort), sizeof(tC->acfWindow[0])));
        FDKmemcpy(tC->acfWindow[1], acfWindowShort,
                  fixMin(sizeof(acfWindowShort), sizeof(tC->acfWindow[0])));
      }
      else {
        FDKmemcpy(tC->acfWindow[0], acfWindowLong,
                  fixMin(sizeof(acfWindowLong), sizeof(tC->acfWindow[0])));
        FDKmemcpy(tC->acfWindow[1], acfWindowLong,
                  fixMin(sizeof(acfWindowLong), sizeof(tC->acfWindow[0])));
      }
      break;
    case 480:
    case 512: {
      const TNS_PARAMETER_TABULATED* pCfg =
        FDKaacEnc_GetTnsParam(bitRate, channels, ldSbrPresent);
      if (pCfg != nullptr) {
        FDKmemcpy(&(tC->confTab), pCfg, sizeof(tC->confTab));
        tC->lpcStartBand[0] = FDKaacEnc_FreqToBandWithRounding(
          pCfg->filterStartFreq[0], sampleRate, bands->count, bands->offsets);
        tC->lpcStartLine[0] = bands->offsets[tC->lpcStartBand[0]];
        tC->lpcStartBand[1] = FDKaacEnc_FreqToBandWithRounding(
          pCfg->filterStartFreq[1], sampleRate, bands->count, bands->offsets);
        tC->lpcStartLine[1] = bands->offsets[tC->lpcStartBand[1]];
        FDKaacEnc_CalcGaussWindow(tC->acfWindow[0], tC->maxOrder + 1,
                                  sampleRate, granuleLength,
                                  pCfg->tnsTimeResolution[0], (1));
        FDKaacEnc_CalcGaussWindow(tC->acfWindow[1], tC->maxOrder + 1,
                                  sampleRate, granuleLength,
                                  pCfg->tnsTimeResolution[1], (1));
      }
      else {
        tC->tnsActive = 0;
      }
    } break;
    default:
      tC->tnsActive = 0;
  }
  return 0;
}
}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  See licenses/fdk-aac/LICENSE.txt and TNS_CONFIGURATION_CHANGES.md.
*/
