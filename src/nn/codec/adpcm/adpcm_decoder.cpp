#include "nn/codec/adpcm.hpp"

namespace nn::codec::adpcm {
namespace {

constexpr int FrameSize = 8;
constexpr int SamplesPerFrame = 14;
constexpr int NibblesPerFrame = 16;

inline int16_t DecodeSample(int nibble, int scale, int coefficient1,
  int coefficient2, int history1, int history2) {
  // The nibble is sign extended and scaled by 2^(scale + 11) in one shift.
  int value = static_cast<int32_t>(nibble << 28) >> (17 - scale);
  value = (coefficient1 * history1 + coefficient2 * history2 + value + 1024)
    >> 11;

  if (value < -32768) {
    value = -32768;
  }
  if (value > 32767) {
    value = 32767;
  }

  return static_cast<int16_t>(value);
}

}

void DecodeAdpcmImpl(int16_t* output, AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount) {
  if (sampleCount == 0) {
    return;
  }

  const uint8_t* input = static_cast<const uint8_t*>(data);
  uint16_t header = context->header;
  int16_t history1 = context->history[0];
  int16_t history2 = context->history[1];

  int scale = header & 0xf;
  int coefficient1 = parameter->coefficients[((header >> 4) & 0xf) * 2];
  int coefficient2 = parameter->coefficients[((header >> 4) & 0xf) * 2 + 1];

  for (int position = 0; sampleCount > 0;) {
    if (position % NibblesPerFrame == 0) {
      header = *input;
      scale = header & 0xf;
      coefficient1 = parameter->coefficients[(header >> 4) * 2];
      coefficient2 = parameter->coefficients[(header >> 4) * 2 + 1];

      if (sampleCount >= SamplesPerFrame) {
        for (int i = 1; i < FrameSize; ++i) {
          int16_t sample = DecodeSample(input[i] >> 4, scale, coefficient1,
            coefficient2, history1, history2);
          if (output != nullptr) {
            *output++ = sample;
          }
          history2 = history1;
          history1 = sample;

          sample = DecodeSample(input[i] & 0xf, scale, coefficient1,
            coefficient2, history1, history2);
          if (output != nullptr) {
            *output++ = sample;
          }
          history2 = history1;
          history1 = sample;
        }

        input += FrameSize;
        position += NibblesPerFrame;
        sampleCount -= SamplesPerFrame;
        continue;
      }

      ++input;
      position += 2;
    }

    int nibble = (position & 1) != 0 ? *input & 0xf : *input >> 4;
    int16_t sample = DecodeSample(nibble, scale, coefficient1, coefficient2,
      history1, history2);
    if (output != nullptr) {
      *output++ = sample;
    }
    history2 = history1;
    history1 = sample;

    input += position & 1;
    ++position;
    --sampleCount;
  }

  context->header = header;
  context->history[0] = history1;
  context->history[1] = history2;
}

void GetAdpcmLoopContextImpl(AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount) {
  DecodeAdpcmImpl(nullptr, context, parameter, data, dataSize, sampleCount);
}

int GetAdpcmSampleCountImpl(size_t dataSize) {
  const int remainder = dataSize % FrameSize;
  return (dataSize / FrameSize) * SamplesPerFrame
    + (remainder != 0 ? remainder * 2 - 2 : 0);
}

size_t GetAdpcmDataSizeImpl(int sampleCount) {
  const int remainder = sampleCount % SamplesPerFrame;
  return (sampleCount / SamplesPerFrame) * FrameSize
    + (remainder > 0 ? (remainder + 1) / 2 + 1 : 0);
}

}
