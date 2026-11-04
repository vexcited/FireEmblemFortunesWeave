#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio {

struct AuxBufferInfo {
  struct Position {
    uint32_t readOffset;
    uint32_t writeOffset;
    uint32_t lostSampleCount;
    uint32_t totalSampleCount;
    uint8_t reserved[48];
  };

  Position cpu;
  Position dsp;
};

static_assert(sizeof(AuxBufferInfo) == 128);

namespace common {

class SampleCounter {
public:
  SampleCounter(uint32_t* cpuCount, uint32_t* dspCount)
    : m_pCpuCount(cpuCount), m_pDspCount(dspCount) {}

  static SampleCounter MakeAccumulatedSampleCounter(AuxBufferInfo* info);
  static SampleCounter MakeLostSampleCounter(AuxBufferInfo* info);
  void Reset();
  uint32_t GetCount() const;

private:
  uint32_t* m_pCpuCount;
  uint32_t* m_pDspCount;
};

}

int32_t* InitializeAuxBufferInfo(AuxBufferInfo** info, void* buffer,
  int size);
void FinalizeAuxBuffer(AuxBufferInfo* info);
void ResetAuxBuffer(AuxBufferInfo* info);
uint32_t ReadAuxBuffer(AuxBufferInfo* info, int32_t* buffer,
  uint32_t sampleCount, int32_t* output, uint32_t count);
uint32_t WriteAuxBuffer(AuxBufferInfo* info, int32_t* buffer,
  uint32_t sampleCount, const int32_t* input, uint32_t count);
int GetAuxBufferLostSampleCount(const AuxBufferInfo* info);
void ResetAuxBufferLostSampleCount(AuxBufferInfo* info);

}
