#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::codec {

struct QMF_SCALE_FACTOR {
  int32_t lb_scale;
  int32_t ov_lb_scale;
  int32_t hb_scale;
  int32_t ov_hb_scale;
};

struct SBR_CALCULATE_ENVELOPE {
  int32_t filtBuffer[48];
  int32_t filtBufferNoise[48];
  int8_t filtBuffer_e[48];
  int8_t filtBufferNoise_e;
  int32_t startUp;
  int32_t phaseIndex;
  int32_t prevTranEnv;
  int32_t harmFlagsPrev[3];
  uint8_t harmIndex;
};

struct FREQ_BAND_DATA {
  uint8_t nSfb[2];
  uint8_t nNfb;
  uint8_t numMaster;
  uint8_t lowSubband;
  uint8_t highSubband;
  uint8_t limiterBandTable[13];
  uint8_t noLimiterBands;
  uint8_t nInvfBands;
  uint8_t *freqBandTable[2];
  uint8_t freqBandTableLo[25];
  uint8_t freqBandTableHi[49];
  uint8_t freqBandTableNoise[6];
  uint8_t v_k_master[49];
};

struct SBR_HEADER_DATA_BS {
  uint8_t startFreq;
  uint8_t stopFreq;
  uint8_t freqScale;
  uint8_t alterScale;
  uint8_t noise_bands;
  uint8_t limiterBands;
  uint8_t limiterGains;
  uint8_t interpolFreq;
  uint8_t smoothingLength;
};

struct SBR_HEADER_DATA_BS_INFO {
  uint8_t ampResolution;
  uint8_t xover_band;
  uint8_t sbr_preprocessing;
};

struct SBR_HEADER_DATA {
  int32_t syncState;
  uint8_t status;
  uint8_t frameErrorFlag;
  uint8_t numberTimeSlots;
  uint8_t numberOfAnalysisBands;
  uint8_t timeStep;
  uint32_t sbrProcSmplRate;
  SBR_HEADER_DATA_BS bs_data;
  SBR_HEADER_DATA_BS_INFO bs_info;
  FREQ_BAND_DATA freqBandData;
};

struct FRAME_INFO {
  uint8_t frameClass;
  uint8_t nEnvelopes;
  uint8_t borders[6];
  uint8_t freqRes[5];
  int8_t tranEnv;
  uint8_t nNoiseEnvelopes;
  uint8_t bordersNoise[3];
};

struct SBR_FRAME_DATA {
  int32_t nScaleFactors;
  FRAME_INFO frameInfo;
  uint8_t domain_vec[5];
  uint8_t domain_vec_noise[2];
  int32_t sbr_invf_mode[5];
  int32_t coupling;
  int32_t ampResolutionCurrentFrame;
  uint8_t addHarmonics[48];
  int16_t iEnvelope[240];
  int16_t sbrNoiseFloorLevel[10];
};

struct ENV_CALC_NRGS {
  int32_t nrgRef[48];
  int32_t nrgEst[48];
  int32_t nrgGain[48];
  int32_t noiseLevel[48];
  int32_t nrgSine[48];
  int8_t nrgRef_e[48];
  int8_t nrgEst_e[48];
  int8_t nrgGain_e[48];
  int8_t noiseLevel_e[48];
  int8_t nrgSine_e[48];
};

static_assert(sizeof(QMF_SCALE_FACTOR) == 16);
static_assert(sizeof(SBR_CALCULATE_ENVELOPE) == 464);
static_assert(offsetof(SBR_CALCULATE_ENVELOPE, startUp) == 436);
static_assert(offsetof(SBR_CALCULATE_ENVELOPE, harmIndex) == 460);
static_assert(sizeof(FREQ_BAND_DATA) == 176);
static_assert(sizeof(SBR_HEADER_DATA) == 208);
static_assert(offsetof(SBR_HEADER_DATA, freqBandData) == 32);
static_assert(sizeof(SBR_FRAME_DATA) == 608);
static_assert(offsetof(SBR_FRAME_DATA, iEnvelope) == 108);
static_assert(sizeof(ENV_CALC_NRGS) == 1200);

void calculateSbrEnvelope(QMF_SCALE_FACTOR *, SBR_CALCULATE_ENVELOPE *,
                          SBR_HEADER_DATA *, SBR_FRAME_DATA *, int32_t **,
                          int32_t **, int, int32_t *, unsigned int, int);
void aliasingReduction(int32_t *, ENV_CALC_NRGS *, int32_t *, int);
void rescaleSubbandSamples(int32_t **, int32_t **, int, int, int, int, int);
int32_t maxSubbandSample(int32_t **, int32_t **, int, int, int, int);
int32_t fDivNorm(int32_t, int32_t, int32_t *);
int createSbrEnvelopeCalc(SBR_CALCULATE_ENVELOPE *, SBR_HEADER_DATA *, int,
                         unsigned int);
void resetSbrEnvelopeCalc(SBR_CALCULATE_ENVELOPE *);
int deleteSbrEnvelopeCalc(SBR_CALCULATE_ENVELOPE *);

}
