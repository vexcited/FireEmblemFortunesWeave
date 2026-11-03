#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct AuxInfoDsp {
  uint32_t read;
  uint32_t write;
  uint32_t lost;
  uint32_t accumulated;
  uint8_t reserved_10[48];
};

struct AuxBufferInfo {
  uint8_t reserved_00[8];
  uint32_t lost_base;
  uint32_t accumulated_base;
  uint8_t reserved_10[48];
  AuxInfoDsp dsp;
};

namespace common {

struct SampleCounter {
  uint32_t* base;
  uint32_t* current;

  void Add(uint32_t count);
  void Reset();
  uint32_t GetCount() const;
  static SampleCounter MakeLostSampleCounter(AuxBufferInfo* info);
  static SampleCounter MakeAccumulatedSampleCounter(AuxBufferInfo* info);
};

}

namespace dsp {

void FlushDataCache(const void* pointer, size_t size);
void InvalidateDataCache(void* pointer, size_t size);
uint32_t ReadAuxBufferDsp(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t* output, uint32_t count, uint32_t offset,
  uint32_t advance);
uint32_t WriteAuxBufferDsp(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, const int32_t* input, uint32_t count, uint32_t offset,
  uint32_t advance);
void ReadAuxBufferDspGrouped(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t** output, int channels, uint32_t count);
void WriteAuxBufferDspGrouped(AuxBufferInfo* info, uintptr_t buffer,
  uint32_t capacity, int32_t** input, int channels, uint32_t count);
void ResetAuxBufferDsp(AuxInfoDsp* info);

}
}
