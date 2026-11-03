/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/sbr_harmonics.hpp"
#include "nn/codec/sbr_transposer.hpp"

namespace nn::codec {

typedef struct {
  const int32_t* quantStepsSbr;
  const int32_t* quantStepsOrig;
  const int32_t* nrgBorders;
  int numRegionsSbr;
  int numRegionsOrig;
  int numRegionsNrg;
  INVF_MODE regionSpace[5][5];
  INVF_MODE regionSpaceTransient[5][5];
  int EnergyCompFactor[5];

} DETECTOR_PARAMETERS;

typedef struct {
  int32_t origQuotaMean[2 + 1];
  int32_t sbrQuotaMean[2 + 1];
  int32_t origQuotaMeanStrongest[2 + 1];
  int32_t sbrQuotaMeanStrongest[2 + 1];

  int32_t origQuotaMeanFilt;
  int32_t sbrQuotaMeanFilt;
  int32_t origQuotaMeanStrongestFilt;
  int32_t sbrQuotaMeanStrongestFilt;

  int32_t origQuotaMax;
  int32_t sbrQuotaMax;

  int32_t avgNrg;
} DETECTOR_VALUES;

typedef struct {
  int numberOfStrongest;

  int prevRegionSbr[10];
  int prevRegionOrig[10];

  int freqBandTableInvFilt[10];
  int noDetectorBands;
  int noDetectorBandsMax;

  const DETECTOR_PARAMETERS* detectorParams;

  INVF_MODE prevInvfMode[10];
  DETECTOR_VALUES detectorValues[10];

  int32_t nrgAvg;
  int32_t wmQmf[10];
} SBR_INV_FILT_EST;

typedef SBR_INV_FILT_EST* HANDLE_SBR_INV_FILT_EST;

typedef struct {
  int32_t prevNoiseLevels[4][10];
  int32_t noiseFloorOffset[10];
  const int32_t* smoothFilter;
  int32_t ana_max_level;
  int32_t weightFac;
  int freqBandTableQmf[10 + 1];
  int noNoiseBands;
  int noiseBands;
  int timeSlots;
  INVF_MODE diffThres;
} SBR_NOISE_FLOOR_ESTIMATE;

typedef SBR_NOISE_FLOOR_ESTIMATE* HANDLE_SBR_NOISE_FLOOR_ESTIMATE;

void FDKsbrEnc_qmfInverseFilteringDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                           int32_t** quotaMatrix,
                                           int32_t* nrgVector,
                                           int8_t* indexVector, int startIndex,
                                           int stopIndex, int transientFlag,
                                           INVF_MODE* infVec);

int FDKsbrEnc_initInvFiltDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                  int* freqBandTableDetector,
                                  int numDetectorBands,
                                  unsigned int useSpeechConfig);

int FDKsbrEnc_resetInvFiltDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                   int* freqBandTableDetector,
                                   int numDetectorBands);

void FDKsbrEnc_sbrNoiseFloorEstimateQmf(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate,
  const SBR_FRAME_INFO* frame_info, int32_t* noiseLevels,
  int32_t** quotaMatrixOrig, int8_t* indexVector, int missingHarmonicsFlag,
  int startIndex, unsigned int numberOfEstimatesPerFrame, int transientFrame,
  INVF_MODE* pInvFiltLevels, unsigned int sbrSyntaxFlags);

int FDKsbrEnc_InitSbrNoiseFloorEstimate(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate, int ana_max_level,
  const uint8_t* freqBandTable, int nSfb, int noiseBands, int noiseFloorOffset,
  int timeSlots, unsigned int useSpeechConfig);

int FDKsbrEnc_resetSbrNoiseFloorEstimate(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate,
  const uint8_t* freqBandTable, int nSfb);

void FDKsbrEnc_Shellsort_fract(int32_t*, int);
static_assert(sizeof(DETECTOR_PARAMETERS) == 256);
static_assert(sizeof(DETECTOR_VALUES) == 76);
static_assert(sizeof(SBR_INV_FILT_EST) == 992);
static_assert(__builtin_offsetof(SBR_INV_FILT_EST, detectorParams) == 136);
static_assert(__builtin_offsetof(SBR_INV_FILT_EST, detectorValues) == 184);
static_assert(sizeof(SBR_NOISE_FLOOR_ESTIMATE) == 280);
static_assert(__builtin_offsetof(SBR_NOISE_FLOOR_ESTIMATE, smoothFilter) ==
              200);
static_assert(__builtin_offsetof(SBR_NOISE_FLOOR_ESTIMATE, diffThres) == 272);

}
