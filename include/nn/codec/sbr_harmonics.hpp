/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/sbr_transient.hpp"

namespace nn::codec {

typedef struct {
  int nEnvelopes;
  int borders[5 + 1];
  FREQ_RES freqRes[5];
  int shortEnv;
  int nNoiseEnvelopes;
  int bordersNoise[2 + 1];
} SBR_FRAME_INFO;
typedef struct {
  int32_t thresHoldDiff;
  int32_t thresHoldDiffGuide;
  int32_t thresHoldTone;
  int32_t invThresHoldTone;
  int32_t thresHoldToneGuide;
  int32_t sfmThresSbr;
  int32_t sfmThresOrig;
  int32_t decayGuideOrig;
  int32_t decayGuideDiff;
  int32_t derivThresMaxLD64;
  int32_t derivThresBelowLD64;
  int32_t derivThresAboveLD64;
} THRES_HOLDS;

typedef struct {
  int deltaTime;
  THRES_HOLDS thresHolds;
  int maxComp;
} DETECTOR_PARAMETERS_MH;

typedef struct {
  int32_t* guideVectorDiff;
  int32_t* guideVectorOrig;
  uint8_t* guideVectorDetected;
} GUIDE_VECTORS;

typedef struct {
  int qmfNoChannels;
  int nSfb;
  int sampleFreq;
  int previousTransientFlag;
  int previousTransientFrame;
  int previousTransientPos;

  int noVecPerFrame;
  int transientPosOffset;

  int move;
  int totNoEst;
  int noEstPerFrame;
  int timeSlots;

  uint8_t* guideScfb;
  uint8_t* prevEnvelopeCompensation;
  uint8_t* detectionVectors[4];
  int32_t tonalityDiff[4 / 2][48];
  int32_t sfmOrig[4 / 2][48];
  int32_t sfmSbr[4 / 2][48];
  const DETECTOR_PARAMETERS_MH* mhParams;
  GUIDE_VECTORS guideVectors[4];
} SBR_MISSING_HARMONICS_DETECTOR;

typedef SBR_MISSING_HARMONICS_DETECTOR* HANDLE_SBR_MISSING_HARMONICS_DETECTOR;

void FDKsbrEnc_SbrMissingHarmonicsDetectorQmf(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR h_sbrMHDet, int32_t** pQuotaBuffer,
  int** pSignBuffer, int8_t* indexVector, const SBR_FRAME_INFO* pFrameInfo,
  const uint8_t* pTranInfo, int* pAddHarmonicsFlag,
  uint8_t* pAddHarmonicsScaleFactorBands, const uint8_t* freqBandTable,
  int nSfb, uint8_t* envelopeCompensation, int32_t* pNrgVector);

int FDKsbrEnc_InitSbrMissingHarmonicsDetector(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR hSbrMHDet, int sampleFreq,
  int frameSize, int nSfb, int qmfNoChannels, int totNoEst, int move,
  int noEstPerFrame, unsigned int sbrSyntaxFlags);

int FDKsbrEnc_ResetSbrMissingHarmonicsDetector(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR hSbrMissingHarmonicsDetector, int nSfb);

int32_t FDKsbrEnc_LSI_divide_scale_fract(int32_t, int32_t, int32_t);
static_assert(sizeof(SBR_FRAME_INFO) == 68);
static_assert(sizeof(THRES_HOLDS) == 48);
static_assert(sizeof(DETECTOR_PARAMETERS_MH) == 56);
static_assert(sizeof(GUIDE_VECTORS) == 24);
static_assert(sizeof(SBR_MISSING_HARMONICS_DETECTOR) == 1352);
static_assert(__builtin_offsetof(SBR_MISSING_HARMONICS_DETECTOR, mhParams) ==
              1248);
static_assert(__builtin_offsetof(SBR_MISSING_HARMONICS_DETECTOR,
                                 guideVectors) == 1256);

}
