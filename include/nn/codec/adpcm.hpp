#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::codec {

struct AdpcmParameter {
  int16_t coefficients[16];
};

struct AdpcmContext {
  uint16_t header;
  int16_t history[2];
};

void DecodeAdpcm(int16_t* output, AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount);
void GetAdpcmLoopContext(AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount);
int GetAdpcmSampleCount(size_t dataSize);
size_t GetAdpcmDataSize(int sampleCount);

namespace adpcm {

void DecodeAdpcmImpl(int16_t* output, AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount);
void GetAdpcmLoopContextImpl(AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount);
int GetAdpcmSampleCountImpl(size_t dataSize);
size_t GetAdpcmDataSizeImpl(int sampleCount);

}
}
