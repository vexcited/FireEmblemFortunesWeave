/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/sbr_frequency.hpp"

namespace nn::codec {

extern const uint16_t FDK_sbrDecoder_sbr_whFactorsIndex[9];
extern const int32_t FDK_sbrDecoder_sbr_whFactorsTable[9][6];

enum INVF_MODE {
  INVF_OFF,
  INVF_LOW_LEVEL,
  INVF_MID_LEVEL,
  INVF_HIGH_LEVEL,
  INVF_SWITCHED
};

struct WHITENING_FACTORS {
  int32_t off;
  int32_t transitionLevel;
  int32_t lowLevel;
  int32_t midLevel;
  int32_t highLevel;
};

struct TRANSPOSER_SETTINGS {
  uint8_t nCols;
  uint8_t noOfPatches;
  uint8_t lbStartPatching;
  uint8_t lbStopPatching;
  uint8_t bwBorders[10];
  PATCH_PARAM patchParam[6];
  WHITENING_FACTORS whFactors;
  uint8_t overlap;
};

struct SBR_LPP_TRANS {
  TRANSPOSER_SETTINGS *pSettings;
  int32_t bwVectorOld[6];
  int32_t lpcFilterStatesReal[2][32];
  int32_t lpcFilterStatesImag[2][32];
};

struct ACORR_COEFS {
  int32_t r00r;
  int32_t r11r;
  int32_t r22r;
  int32_t r01r;
  int32_t r02r;
  int32_t r12r;
  int32_t r01i;
  int32_t r02i;
  int32_t r12i;
  int32_t det;
  int det_scale;
};

static_assert(sizeof(TRANSPOSER_SETTINGS) == 76);
static_assert(offsetof(TRANSPOSER_SETTINGS, patchParam) == 14);
static_assert(offsetof(TRANSPOSER_SETTINGS, whFactors) == 52);
static_assert(offsetof(TRANSPOSER_SETTINGS, overlap) == 72);
static_assert(sizeof(SBR_LPP_TRANS) == 544);
static_assert(offsetof(SBR_LPP_TRANS, lpcFilterStatesReal) == 32);
static_assert(sizeof(ACORR_COEFS) == 44);

void lppTransposer(SBR_LPP_TRANS *, QMF_SCALE_FACTOR *, int32_t **,
                   int32_t *, int32_t **, int, int, int, int, int,
                   INVF_MODE *, INVF_MODE *);
int createLppTransposer(SBR_LPP_TRANS *, TRANSPOSER_SETTINGS *, int,
                        uint8_t *, int, int, int, int, uint8_t *, int,
                        unsigned int, int, int);
int resetLppTransposer(SBR_LPP_TRANS *, uint8_t, uint8_t *, uint8_t,
                       uint8_t *, uint8_t, uint8_t, unsigned int);
int autoCorr2nd_real(ACORR_COEFS *, const int32_t *, int);
int autoCorr2nd_cplx(ACORR_COEFS *, const int32_t *, const int32_t *, int);

}
