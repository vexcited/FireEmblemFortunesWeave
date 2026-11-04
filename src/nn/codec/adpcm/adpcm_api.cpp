#include "nn/codec/adpcm.hpp"

namespace nn::codec {

void DecodeAdpcm(int16_t* output, AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount) {
  adpcm::DecodeAdpcmImpl(output, context, parameter, data, dataSize,
    sampleCount);
}

void GetAdpcmLoopContext(AdpcmContext* context,
  const AdpcmParameter* parameter, const void* data, size_t dataSize,
  int sampleCount) {
  adpcm::GetAdpcmLoopContextImpl(context, parameter, data, dataSize,
    sampleCount);
}

int GetAdpcmSampleCount(size_t dataSize) {
  return adpcm::GetAdpcmSampleCountImpl(dataSize);
}

size_t GetAdpcmDataSize(int sampleCount) {
  return adpcm::GetAdpcmDataSizeImpl(sampleCount);
}

}
