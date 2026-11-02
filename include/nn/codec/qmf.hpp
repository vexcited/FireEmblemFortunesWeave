#pragma once

#include "nn/codec/sbr_envelope.hpp"

namespace nn::codec {

struct QMF_FILTER_BANK {
  const int16_t* p_filter;

  void* FilterStates;
  int FilterSize;
  const int16_t* t_cos;
  const int16_t* t_sin;
  int filterScale;

  int no_channels;
  int no_col;
  int lsb;
  int usb;

  int outScalefactor;
  int32_t outGain;

  uint32_t flags;
  uint8_t p_stride;
};

void qmfAnalysisFiltering(QMF_FILTER_BANK* anaQmf, int32_t** qmfReal,
                          int32_t** qmfImag, QMF_SCALE_FACTOR* scaleFactor,
                          const int16_t* timeIn, const int stride,
                          int32_t* pWorkBuffer);

void qmfSynthesisFiltering(QMF_FILTER_BANK* synQmf, int32_t** QmfBufferReal,
                           int32_t** QmfBufferImag,
                           const QMF_SCALE_FACTOR* scaleFactor,
                           const int ov_len, int16_t* timeOut, const int stride,
                           int32_t* pWorkBuffer);

int qmfInitAnalysisFilterBank(QMF_FILTER_BANK* h_Qmf, int16_t* pFilterStates,
                              int noCols, int lsb, int usb, int no_channels,
                              int flags);

void qmfAnalysisFilteringSlot(QMF_FILTER_BANK* anaQmf, int32_t* qmfReal,
                              int32_t* qmfImag, const int16_t* timeIn,
                              const int stride, int32_t* pWorkBuffer);

int qmfInitSynthesisFilterBank(QMF_FILTER_BANK* h_Qmf, int32_t* pFilterStates,
                               int noCols, int lsb, int usb, int no_channels,
                               int flags);

void qmfSynthesisFilteringSlot(QMF_FILTER_BANK* synQmf, const int32_t* realSlot,
                               const int32_t* imagSlot,
                               const int scaleFactorLowBand,
                               const int scaleFactorHighBand, int16_t* timeOut,
                               const int stride, int32_t* pWorkBuffer);

void qmfChangeOutScalefactor(QMF_FILTER_BANK* synQmf, int outScalefactor);

void qmfChangeOutGain(QMF_FILTER_BANK* synQmf, int32_t outputGain);

extern const int16_t qmf_phaseshift_cos32[];
extern const int16_t qmf_phaseshift_sin32[];
extern const int16_t qmf_phaseshift_cos64[];
extern const int16_t qmf_phaseshift_sin64[];
extern const int16_t qmf_phaseshift_cos_downsamp32[];
extern const int16_t qmf_phaseshift_sin_downsamp32[];
extern const int16_t qmf_phaseshift_cos32_cldfb[];
extern const int16_t qmf_phaseshift_sin32_cldfb[];
extern const int16_t qmf_phaseshift_cos64_cldfb[];
extern const int16_t qmf_phaseshift_sin64_cldfb[];
extern const int16_t qmf_64[];
extern const int16_t qmf_cldfb_640[];
extern const int16_t qmf_cldfb_320[];

static_assert(sizeof(QMF_FILTER_BANK) == 80);
static_assert(__builtin_offsetof(QMF_FILTER_BANK, t_cos) == 24);
static_assert(__builtin_offsetof(QMF_FILTER_BANK, flags) == 68);
static_assert(__builtin_offsetof(QMF_FILTER_BANK, p_stride) == 72);

}
