/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include <stdint.h>

namespace nn::codec {

typedef struct {
  int bitRate;
  int nChannels;
  int sampleFreq;
  int transFac;
  int standardBitrate;
} CODEC_PARAM;
typedef enum {
  SBR_MONO,
  SBR_LEFT_RIGHT,
  SBR_COUPLING,
  SBR_SWITCH_LRC
} SBR_STEREO_MODE;
typedef enum { FREQ_RES_LOW = 0, FREQ_RES_HIGH } FREQ_RES;
typedef struct sbrConfiguration {

  CODEC_PARAM codecSettings;
  int SendHeaderDataTime;
  int useWaveCoding;
  int crcSbr;
  int dynBwSupported;
  int parametricCoding;
  int downSampleFactor;
  FREQ_RES freq_res_fixfix[2];
  uint8_t fResTransIsLow;

  int tran_thr;
  int noiseFloorOffset;
  unsigned int useSpeechConfig;

  int sbrFrameSize;
  int sbr_data_extra;
  int amp_res;
  int ana_max_level;
  int tran_fc;
  int tran_det_mode;
  int spread;
  int stat;
  int e;
  SBR_STEREO_MODE stereoMode;
  int deltaTAcrossFrames;
  int32_t dF_edge_1stEnv;
  int32_t dF_edge_incr;
  int sbr_invf_mode;
  int sbr_xpos_mode;
  int sbr_xpos_ctrl;
  int sbr_xpos_level;
  int startFreq;
  int stopFreq;
  int useSaPan;
  int dynBwEnabled;
  int bParametricStereo;

  uint8_t freqScale;
  int alterScale;
  int sbr_noise_bands;

  int sbr_limiter_bands;
  int sbr_limiter_gains;
  int sbr_interpol_freq;
  int sbr_smoothing_length;
  uint8_t init_amp_res_FF;
  int32_t threshold_AmpRes_FF_m;
  int8_t threshold_AmpRes_FF_e;
} sbrConfiguration, *sbrConfigurationPtr;
typedef struct {
  int32_t transients[32 + (32 / 2)];
  int32_t thresholds[64];
  int32_t tran_thr;
  int32_t split_thr_m;
  int split_thr_e;
  int32_t prevLowBandEnergy;
  int32_t prevHighBandEnergy;
  int tran_fc;
  int no_cols;
  int no_rows;
  int mode;

  int frameShift;
  int tran_off;
} SBR_TRANSIENT_DETECTOR;

typedef SBR_TRANSIENT_DETECTOR* HANDLE_SBR_TRANSIENT_DETECTOR;

typedef struct {
  int transientCandidates[32 + 2];
  int nTimeSlots;
  int lookahead;
  int startBand;
  int stopBand;

  int32_t dBf_m[64];
  int dBf_e[64];

  int32_t energy_timeSlots[32 + 2];
  int energy_timeSlots_scale[32 + 2];

  int32_t delta_energy[32 + 2];
  int delta_energy_scale[32 + 2];

  int32_t lowpass_energy[32 + 2];
  int lowpass_energy_scale[32 + 2];

} FAST_TRAN_DETECTOR;
typedef FAST_TRAN_DETECTOR* HANDLE_FAST_TRAN_DET;

void FDKsbrEnc_frameSplitter(
  int32_t** Energies, int* scaleEnergies,
  HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTransientDetector, uint8_t* freqBandTable,
  uint8_t* tran_vector, int YBufferWriteOffset, int YBufferSzShift, int nSfb,
  int timeStep, int no_cols, int32_t* tonality);

void FDKsbrEnc_transientDetect(HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTran,
                               int32_t** Energies, int* scaleEnergies,
                               uint8_t* transient_info, int YBufferWriteOffset,
                               int YBufferSzShift, int timeStep,
                               int frameMiddleBorder);

int FDKsbrEnc_InitSbrTransientDetector(
  HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTransientDetector,
  unsigned int sbrSyntaxFlags, int frameSize, int sampleFreq,
  sbrConfigurationPtr params, int tran_fc, int no_cols, int no_rows,
  int YBufferWriteOffset, int YBufferSzShift, int frameShift, int tran_off);

int FDKsbrEnc_InitSbrFastTransientDetector(
  HANDLE_FAST_TRAN_DET h_sbrFastTransientDetector,
  const int time_slots_per_frame, const int bandwidth_qmf_slot,
  const int no_qmf_channels, const int sbr_qmf_1st_band);

void FDKsbrEnc_fastTransientDetect(
  const HANDLE_FAST_TRAN_DET h_sbrFastTransientDetector,
  const int32_t* const* Energies, const int* const scaleEnergies,
  const int YBufferWriteOffset, uint8_t* const tran_vector);

int32_t FDKabs(int32_t);
int32_t fLog2(int32_t, int);
int32_t fDivNorm(int32_t, int32_t);

static_assert(sizeof(SBR_TRANSIENT_DETECTOR) == 492);
static_assert(sizeof(FAST_TRAN_DETECTOR) == 1480);
static_assert(__builtin_offsetof(SBR_TRANSIENT_DETECTOR, tran_thr) == 448);
static_assert(__builtin_offsetof(SBR_TRANSIENT_DETECTOR, frameShift) == 484);
static_assert(__builtin_offsetof(FAST_TRAN_DETECTOR, dBf_m) == 152);
static_assert(__builtin_offsetof(FAST_TRAN_DETECTOR, energy_timeSlots) == 664);
static_assert(__builtin_offsetof(sbrConfiguration, tran_thr) == 56);
static_assert(__builtin_offsetof(sbrConfiguration, tran_det_mode) == 88);

}
