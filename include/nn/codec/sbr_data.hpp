#pragma once

#include "nn/codec/sbr_envelope.hpp"

namespace nn::codec {

struct SBR_PREV_FRAME_DATA {
  int16_t sfb_nrg_prev[48];
  int16_t prevNoiseLevel[5];
  int32_t coupling;
  int32_t sbr_invf_mode[5];
  uint8_t ampRes;
  uint8_t stopPos;
  uint8_t frameErrorFlag;
};

void decodeSbrData(SBR_HEADER_DATA*, SBR_FRAME_DATA*, SBR_PREV_FRAME_DATA*,
                   SBR_FRAME_DATA*, SBR_PREV_FRAME_DATA*);
void initSbrPrevFrameData(SBR_PREV_FRAME_DATA*, int);

static_assert(sizeof(SBR_PREV_FRAME_DATA) == 136);
static_assert(__builtin_offsetof(SBR_PREV_FRAME_DATA, coupling) == 108);
static_assert(__builtin_offsetof(SBR_PREV_FRAME_DATA, ampRes) == 132);

}
