#include "nn/audio/adpcm_header.hpp"

namespace nn::audio {
namespace {

struct DspAdpcmHeader {
  uint32_t sampleCount;
  uint32_t nibbleCount;
  uint32_t sampleRate;
  uint16_t loopFlag;
  uint16_t format;
  int32_t loopStartOffset;
  int32_t loopEndOffset;
  uint32_t currentOffset;
  int16_t coefficients[16];
  uint16_t gain;
  uint16_t predScale;
  int16_t history[2];
  uint16_t loopPredScale;
  int16_t loopHistory[2];
};

static_assert(offsetof(DspAdpcmHeader, coefficients) == 28);
static_assert(offsetof(DspAdpcmHeader, loopPredScale) == 68);

// Each 8 byte frame holds a header byte and 14 samples in 16 nibbles.
int ConvertNibbleToSample(int nibble) {
  return nibble / 16 * 14 + nibble % 16 - 2;
}

}

void ParseAdpcmHeader(AdpcmHeaderInfo* info, const void* header,
  size_t size) {
  const DspAdpcmHeader* dsp = static_cast<const DspAdpcmHeader*>(header);
  for (int i = 0; i < 16; ++i) {
    info->coefficients[i] = dsp->coefficients[i];
  }
  info->loopContext.predScale = dsp->loopPredScale;
  info->loopContext.history[0] = dsp->loopHistory[0];
  info->loopContext.history[1] = dsp->loopHistory[1];
  info->sampleCount = dsp->sampleCount;
  info->sampleRate = dsp->sampleRate;
  info->loop = dsp->loopFlag != 0;
  info->loopBeginSamplePosition = ConvertNibbleToSample(dsp->loopStartOffset);
  info->loopEndSamplePosition = ConvertNibbleToSample(dsp->loopEndOffset);
}

}
