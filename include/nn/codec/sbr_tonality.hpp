/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/sbr_noise.hpp"

namespace nn::codec {

typedef enum {
  XPOS_MDCT,
  XPOS_MDCT_CROSS,
  XPOS_LC,
  XPOS_RESERVED,
  XPOS_SWITCHED
} XPOS_MODE;
typedef struct SBR_CONFIG_DATA {
  unsigned int sbrSyntaxFlags;
  int nChannels;

  int nSfb[2];
  int num_Master;
  int sampleFreq;
  int frameSize;
  int xOverFreq;
  int dynXOverFreq;
  int noQmfBands;
  int noQmfSlots;

  uint8_t* freqBandTable[2];
  uint8_t* v_k_master;

  SBR_STEREO_MODE stereoMode;
  int noEnvChannels;

  int useWaveCoding;
  int useParametricCoding;
  int xposCtrlSwitch;
  int switchTransposers;
  uint8_t initAmpResFF;
  int32_t thresholdAmpResFF_m;
  int8_t thresholdAmpResFF_e;
} SBR_CONFIG_DATA, *HANDLE_SBR_CONFIG_DATA;
typedef struct {
  int sourceStartBand;
  int sourceStopBand;
  int guardStartBand;
  int targetStartBand;
  int targetBandOffs;
  int numBandsInPatch;
} SBR_ENCODER_PATCH_PARAM;

typedef struct {
  int switchInverseFilt;
  int noQmfChannels;
  int bufferLength;
  int stepSize;
  int numberOfEstimates;
  unsigned int numberOfEstimatesPerFrame;
  int lpcLength[2];
  int nextSample;
  int move;
  int frameStartIndex;
  int startIndexMatrix;
  int frameStartIndexInvfEst;
  int prevTransientFlag;
  int transientNextFrame;
  int transientPosOffset;

  int* signMatrix[4];

  int32_t* quotaMatrix[4];

  int32_t nrgVector[4];
  int32_t nrgVectorFreq[64];

  int8_t indexVector[64];
  SBR_ENCODER_PATCH_PARAM patchParam[6];
  int guard;
  int shiftStartSb;
  int noOfPatches;

  SBR_MISSING_HARMONICS_DETECTOR sbrMissingHarmonicsDetector;
  SBR_NOISE_FLOOR_ESTIMATE sbrNoiseFloorEstimate;
  SBR_INV_FILT_EST sbrInvFilt;
} SBR_TON_CORR_EST;

typedef SBR_TON_CORR_EST* HANDLE_SBR_TON_CORR_EST;

void FDKsbrEnc_CalculateTonalityQuotas(HANDLE_SBR_TON_CORR_EST hTonCorr,
                                       int32_t** sourceBufferReal,
                                       int32_t** sourceBufferImag, int usb,
                                       int qmfScale);

void FDKsbrEnc_TonCorrParamExtr(
  HANDLE_SBR_TON_CORR_EST hTonCorr, INVF_MODE* infVec, int32_t* noiseLevels,
  int* missingHarmonicFlag, uint8_t* missingHarmonicsIndex,
  uint8_t* envelopeCompensation, const SBR_FRAME_INFO* frameInfo,
  uint8_t* transientInfo, uint8_t* freqBandTable, int nSfb, XPOS_MODE xposType,
  unsigned int sbrSyntaxFlags);

int FDKsbrEnc_InitTonCorrParamExtr(int frameSize,
                                   HANDLE_SBR_TON_CORR_EST hTonCorr,
                                   HANDLE_SBR_CONFIG_DATA sbrCfg, int timeSlots,
                                   int xposCtrl, int ana_max_level,
                                   int noiseBands, int noiseFloorOffset,
                                   unsigned int useSpeechConfig);

int FDKsbrEnc_ResetTonCorrParamExtr(HANDLE_SBR_TON_CORR_EST hTonCorr,
                                    int xposctrl, int highBandStartSb,
                                    uint8_t* v_k_master, int numMaster, int fs,
                                    uint8_t** freqBandTable, int* nSfb,
                                    int noQmfChannels);

static_assert(sizeof(SBR_ENCODER_PATCH_PARAM) == 24);
static_assert(sizeof(SBR_CONFIG_DATA) == 112);
static_assert(__builtin_offsetof(SBR_CONFIG_DATA, freqBandTable) == 48);
static_assert(__builtin_offsetof(SBR_CONFIG_DATA, v_k_master) == 64);
static_assert(sizeof(SBR_TON_CORR_EST) == 3248);
static_assert(__builtin_offsetof(SBR_TON_CORR_EST, indexVector) == 400);
static_assert(__builtin_offsetof(SBR_TON_CORR_EST, patchParam) == 464);
static_assert(__builtin_offsetof(SBR_TON_CORR_EST,
                                 sbrMissingHarmonicsDetector) == 624);
static_assert(__builtin_offsetof(SBR_TON_CORR_EST, sbrNoiseFloorEstimate) ==
              1976);
static_assert(__builtin_offsetof(SBR_TON_CORR_EST, sbrInvFilt) == 2256);

}
