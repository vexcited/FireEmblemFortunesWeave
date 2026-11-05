#include <string.h>

#include "nn/audio/aux_buffer.hpp"

namespace nn::os {

void FlushDataCache(const void* address, size_t size);

}

namespace nn::audio {
namespace {

void FlushPosition(const AuxBufferInfo::Position* position) {
  os::FlushDataCache(position, sizeof(AuxBufferInfo::Position));
}

}

uint32_t ReadAuxBuffer(AuxBufferInfo* info, int32_t* buffer,
  uint32_t sampleCount, int32_t* output, uint32_t count) {
  if (sampleCount == 0) {
    return 0;
  }
  FlushPosition(&info->dsp);
  info->cpu.writeOffset = info->dsp.writeOffset;
  common::SampleCounter::MakeAccumulatedSampleCounter(info).Reset();

  uint32_t readOffset = info->cpu.readOffset;
  uint32_t writeOffset = info->cpu.writeOffset;
  uint32_t available = writeOffset - readOffset +
    (writeOffset < readOffset ? sampleCount : 0);
  if (count > available) {
    count = available;
  }
  for (uint32_t remaining = count; remaining != 0;) {
    uint32_t chunk = sampleCount - readOffset;
    if (remaining < chunk) {
      chunk = remaining;
    }
    os::FlushDataCache(buffer + readOffset, chunk * sizeof(int32_t));
    memcpy(output, buffer + readOffset, chunk * sizeof(int32_t));
    output += chunk;
    remaining -= chunk;
    readOffset = (readOffset + chunk) % sampleCount;
  }
  info->cpu.readOffset = (info->cpu.readOffset + count) % sampleCount;
  FlushPosition(&info->cpu);
  return count;
}

uint32_t WriteAuxBuffer(AuxBufferInfo* info, int32_t* buffer,
  uint32_t sampleCount, const int32_t* input, uint32_t count) {
  if (sampleCount == 0) {
    return 0;
  }
  uint32_t writeOffset = info->cpu.writeOffset;
  FlushPosition(&info->dsp);
  info->cpu.readOffset = info->dsp.readOffset;
  common::SampleCounter::MakeAccumulatedSampleCounter(info).Reset();

  uint32_t readOffset = info->cpu.readOffset;
  uint32_t current = info->cpu.writeOffset;
  uint32_t space =
    readOffset - current + (readOffset > current ? 0 : sampleCount);
  if (count > space) {
    count = space;
  }
  for (uint32_t remaining = count; remaining != 0;) {
    uint32_t chunk = sampleCount - writeOffset;
    if (remaining < chunk) {
      chunk = remaining;
    }
    memcpy(buffer + writeOffset, input, chunk * sizeof(int32_t));
    os::FlushDataCache(buffer + writeOffset, chunk * sizeof(int32_t));
    input += chunk;
    remaining -= chunk;
    writeOffset = (writeOffset + chunk) % sampleCount;
  }
  info->cpu.writeOffset = (info->cpu.writeOffset + count) % sampleCount;
  FlushPosition(&info->cpu);
  return count;
}

int32_t* InitializeAuxBufferInfo(AuxBufferInfo** info, void* buffer,
  int size) {
  memset(buffer, 0, size);
  os::FlushDataCache(buffer, size);
  AuxBufferInfo* header = static_cast<AuxBufferInfo*>(buffer);
  header->cpu.readOffset = 0;
  header->cpu.writeOffset = 0;
  header->cpu.lostSampleCount = 0;
  header->cpu.totalSampleCount = 0;
  header->dsp.readOffset = 0;
  header->dsp.writeOffset = 0;
  header->dsp.lostSampleCount = 0;
  header->dsp.totalSampleCount = 0;
  *info = header;
  return reinterpret_cast<int32_t*>(header + 1);
}

void FinalizeAuxBuffer(AuxBufferInfo* info) {
  info->cpu.readOffset = 0;
  info->cpu.writeOffset = 0;
}

void ResetAuxBuffer(AuxBufferInfo* info) {
  info->cpu.readOffset = 0;
  info->cpu.writeOffset = 0;
  info->cpu.totalSampleCount = 0;
}

void ResetAuxBufferLostSampleCount(AuxBufferInfo* info) {
  FlushPosition(&info->dsp);
  common::SampleCounter::MakeLostSampleCounter(info).Reset();
}

int GetAuxBufferLostSampleCount(const AuxBufferInfo* info) {
  FlushPosition(&info->dsp);
  uint32_t cpuCount = info->cpu.lostSampleCount;
  uint32_t dspCount = info->dsp.lostSampleCount;
  uint32_t count = common::SampleCounter(&cpuCount, &dspCount).GetCount();
  return count < 0x7fffffff ? static_cast<int>(count) : 0x7fffffff;
}

}
