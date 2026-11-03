/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/dynamic_bits.hpp"
#include "nn/codec/tns.hpp"

namespace nn::codec {

struct PSY_OUT_CHANNEL {
  int sfbCnt;
  int sfbPerGroup;
  int maxSfbPerGroup;
  int lastWindowSequence;
  int windowShape;
  int groupingMask;
  int sfbOffsets[61];
  int mdctScale;
  int groupLen[4];
  TNS_INFO tnsInfo;
  int noiseNrg[60];
  int isBook[60];
  int isScale[60];
  int32_t* mdctSpectrum;
  int32_t* sfbEnergy;
  int32_t* sfbSpreadEnergy;
  int32_t* sfbThresholdLdData;
  int32_t* sfbMinSnrLdData;
  int32_t* sfbEnergyLdData;
};

struct QC_OUT_CHANNEL {
  int32_t mdctSpectrum[1024];
  int16_t quantSpec[1024];
  uint32_t maxValueInSfb[60];
  int scf[60];
  int globalGain;
  SECTION_DATA sectionData;
  int32_t sfbFormFactorLdData[60];
  int32_t sfbThresholdLdData[60];
  int32_t sfbMinSnrLdData[60];
  int32_t sfbEnergyLdData[60];
  int32_t sfbEnergy[60];
  int32_t sfbWeightedEnergyLdData[60];
  int32_t sfbEnFacLd[60];
  int32_t sfbSpreadEnergy[60];
};

static_assert(sizeof(PSY_OUT_CHANNEL) == 2144);
static_assert(sizeof(QC_OUT_CHANNEL) == 9552);
static_assert(__builtin_offsetof(PSY_OUT_CHANNEL, mdctSpectrum) == 2096);
static_assert(__builtin_offsetof(QC_OUT_CHANNEL, scf) == 6384);
static_assert(__builtin_offsetof(QC_OUT_CHANNEL, globalGain) == 6624);
static_assert(__builtin_offsetof(QC_OUT_CHANNEL, sfbFormFactorLdData) == 7632);

void FDKaacEnc_CalcFormFactor(QC_OUT_CHANNEL* qcOutChannel[(2)],
                              PSY_OUT_CHANNEL* psyOutChannel[(2)],
                              const int nChannels);

void FDKaacEnc_EstimateScaleFactors(PSY_OUT_CHANNEL* psyOutChannel[],
                                    QC_OUT_CHANNEL* qcOutChannel[],
                                    const int invQuant,
                                    const int dZoneQuantEnable,
                                    const int nChannels);

}
