#pragma once

#include <stddef.h>
#include <stdint.h>

#include <optional>

#include "nn/audio/renderer_ipc.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::audio {

enum DspAddr : uint64_t {};

}

namespace nn::audio::dsp {

Result Start();
void Stop();
void InitializeProcessSession(uint32_t processId, int sessionId,
  bool isUserProcess);
void FinalizeProcessSession(uint32_t processId, int sessionId);
void WaitForUnmap();
void UnmapUserPointer(uint32_t processId, std::optional<int> sessionId,
  CpuAddr address, size_t size);
DspAddr MapUserPointer(uint32_t processId, std::optional<int> sessionId,
  CpuAddr address, size_t size);
void InvalidateDspCache(uint32_t processId, std::optional<int> sessionId,
  uint64_t address, size_t size);
void SendCommandBuffer(int sessionId, uint64_t address, size_t size,
  int processTimeMax, bool isFirstFrame, uint64_t appletResourceUserId);
void Wait();
uint32_t GetRemainCommandCount(int sessionId);
void ClearRemainCommandCount(int sessionId);
os::Tick GetRenderingStartTick(int sessionId);
void Signal();
void Wake();
void Sleep();
void DumpMappedPointer();
void StoreDataCache(const void* address, size_t size);
void FlushDataCache(const void* address, size_t size);
void InvalidateDataCache(void* address, size_t size);

}
