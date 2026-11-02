#pragma once

#include <stdint.h>

namespace nn::codec {

typedef enum {
  HYBRID_2_REAL = 2,
  HYBRID_4_CPLX = 4,
  HYBRID_8_CPLX = 8,
  HYBRID_12_CPLX = 12
} HYBRID_RES;

typedef struct {
  int8_t nQmfBands;
  int8_t frameSize;
  int8_t qmfBufferMove;
  uint8_t pResolution[3];
  int32_t mQmfBufferRealSlot[3][13];
  int32_t mQmfBufferImagSlot[3][13];
  int8_t sf_mQmfBuffer;
} HYBRID;

typedef HYBRID* HANDLE_HYBRID;
void fillHybridDelayLine(int32_t** fixpQmfReal, int32_t** fixpQmfImag,
                         int32_t fixpHybridLeftR[12],
                         int32_t fixpHybridLeftI[12],
                         int32_t fixpHybridRightR[12],
                         int32_t fixpHybridRightI[12], HANDLE_HYBRID hHybrid);
void slotBasedHybridAnalysis(int32_t* fixpQmfReal, int32_t* fixpQmfImag,
                             int32_t* fixpHybridReal, int32_t* fixpHybridImag,
                             HANDLE_HYBRID hHybrid);
void slotBasedHybridSynthesis(int32_t* fixpHybridReal, int32_t* fixpHybridImag,
                              int32_t* fixpQmfReal, int32_t* fixpQmfImag,
                              HANDLE_HYBRID hHybrid);
int InitHybridFilterBank(HANDLE_HYBRID hHybrid, int8_t frameSize,
                         int8_t noBands, const uint8_t* pResolution);
struct PS_DEC_COEFFICIENTS {
  int32_t H11r[22];
  int32_t H12r[22];
  int32_t H21r[22];
  int32_t H22r[22];
  int32_t DeltaH11r[22];
  int32_t DeltaH12r[22];
  int32_t DeltaH21r[22];
  int32_t DeltaH22r[22];
  int8_t aaIidIndexMapped[5][34];
  int8_t aaIccIndexMapped[5][34];
};

typedef enum { ppt_none = 0, ppt_mpeg = 1, ppt_drm = 2 } PS_PAYLOAD_TYPE;
typedef struct {
  uint8_t bPsHeaderValid;
  uint8_t bEnableIid;
  uint8_t bEnableIcc;
  uint8_t bEnableExt;
  uint8_t modeIid;
  uint8_t modeIcc;
  uint8_t freqResIid;
  uint8_t freqResIcc;
  uint8_t bFineIidQ;
  uint8_t bFrameClass;
  uint8_t noEnv;
  uint8_t aEnvStartStop[6];
  int8_t abIidDtFlag[5];
  int8_t abIccDtFlag[5];
  int8_t aaIidIndex[5][34];
  int8_t aaIccIndex[5][34];
} MPEG_PS_BS_DATA;

struct PS_DEC {
  int8_t noSubSamples;
  int8_t noChannels;
  int8_t procFrameBased;
  PS_PAYLOAD_TYPE bPsDataAvail[2];
  uint8_t psDecodedPrv;
  uint8_t bsLastSlot;
  uint8_t bsReadSlot;
  uint8_t processSlot;
  int32_t rescal;
  int32_t sf_IntBuffer;
  union {
    MPEG_PS_BS_DATA mpeg;
  } bsData[2];
  union {
    struct {
      int8_t aIidPrevFrameIndex[34];
      int8_t aIccPrevFrameIndex[34];
      uint8_t delayBufIndex;
      uint8_t noSampleDelay;
      uint8_t lastUsb;
      uint8_t aDelayRBufIndexSer[3];
      uint8_t aDelayBufIndexDelayQmf[41];
      int8_t scaleFactorPsDelayBuffer;
      int32_t aaQmfDelayBufReal[197];
      int32_t aaQmfDelayBufImag[197];
      int32_t* pAaRealDelayBufferQmf[14];
      int32_t* pAaImagDelayBufferQmf[14];
      int32_t aaRealDelayBufferQmf[2][23];
      int32_t aaImagDelayBufferQmf[2][23];
      int32_t aaRealDelayBufferSubQmf[2][12];
      int32_t aaImagDelayBufferSubQmf[2][12];
      int32_t aaaRealDelayRBufferSerQmf[23][12];
      int32_t aaaImagDelayRBufferSerQmf[23][12];
      int32_t aaaRealDelayRBufferSerSubQmf[12][12];
      int32_t aaaImagDelayRBufferSerSubQmf[12][12];
      HYBRID hybrid;
      int32_t aPrevNrgBin[20];
      int32_t aPrevPeakDiffBin[20];
      int32_t aPeakDecayFastBin[20];
      int8_t aPowerPrevScal[20];
      int32_t h11rPrev[22];
      int32_t h12rPrev[22];
      int32_t h21rPrev[22];
      int32_t h22rPrev[22];
      PS_DEC_COEFFICIENTS coef;
    } mpeg;
  } specificTo;
};

typedef struct PS_DEC* HANDLE_PS_DEC;
void scalFilterBankValues(
  HANDLE_PS_DEC h_ps_d, int32_t** fixpQmfReal, int32_t** fixpQmfImag, int lsb,
  int scaleFactorLowBandSplitLow, int scaleFactorLowBandSplitHigh,
  int8_t* scaleFactorLowBand_lb, int8_t* scaleFactorLowBand_hb,
  int scaleFactorHighBands, int32_t* scaleFactorHighBand, int32_t noCols);
void rescalFilterBankValues(HANDLE_PS_DEC h_ps_d, int32_t** QmfBufferReal,
                            int32_t** QmfBufferImag, int lsb, int32_t noCols);
void initSlotBasedRotation(HANDLE_PS_DEC h_ps_d, int env, int usb);
void ApplyPsSlot(HANDLE_PS_DEC h_ps_d, int32_t** rIntBufferLeft,
                 int32_t** iIntBufferLeft, int32_t* rIntBufferRight,
                 int32_t* iIntBufferRight);
int ResetPsDec(PS_DEC*);
void ResetPsDeCor(PS_DEC*);
int32_t schur_div(int32_t, int32_t, int);

static_assert(sizeof(HYBRID) == 324);
static_assert(sizeof(MPEG_PS_BS_DATA) == 367);
static_assert(sizeof(PS_DEC_COEFFICIENTS) == 1044);
static_assert(sizeof(PS_DEC) == 8584);
static_assert(__builtin_offsetof(PS_DEC, specificTo) == 760);
static_assert(__builtin_offsetof(PS_DEC,
                                 specificTo.mpeg.pAaRealDelayBufferQmf) ==
              2456);
static_assert(__builtin_offsetof(PS_DEC, specificTo.mpeg.hybrid) == 6600);
static_assert(__builtin_offsetof(PS_DEC, specificTo.mpeg.coef) == 7536);

}
