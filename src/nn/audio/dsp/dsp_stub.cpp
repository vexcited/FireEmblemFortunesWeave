#include "nn/audio/commands.hpp"
#include "nn/audio/dsp/dsp.hpp"

namespace nn::audio {

struct DeviceSinkCommand;

}

namespace nn::audio::dsp {

// This build renders on the CPU, so the DSP entry points do nothing.
Result Start() {
  return Result{0};
}

void Stop() {
}

void InitializeProcessSession(uint32_t processId, int sessionId,
  bool isUserProcess) {
}

void FinalizeProcessSession(uint32_t processId, int sessionId) {
}

void WaitForUnmap() {
}

void UnmapUserPointer(uint32_t processId, std::optional<int> sessionId,
  CpuAddr address, size_t size) {
}

DspAddr MapUserPointer(uint32_t processId, std::optional<int> sessionId,
  CpuAddr address, size_t size) {
  return DspAddr(address);
}

void InvalidateDspCache(uint32_t processId, std::optional<int> sessionId,
  uint64_t address, size_t size) {
}

void SendCommandBuffer(int sessionId, uint64_t address, size_t size,
  int processTimeMax, bool isFirstFrame, uint64_t appletResourceUserId) {
}

void Wait() {
}

uint32_t GetRemainCommandCount(int sessionId) {
  return 0;
}

void ClearRemainCommandCount(int sessionId) {
}

os::Tick GetRenderingStartTick(int sessionId) {
  return os::GetSystemTick();
}

void Signal() {
}

void Wake() {
}

void Sleep() {
}

void DumpMappedPointer() {
}

void StoreDataCache(const void* address, size_t size) {
}

void FlushDataCache(const void* address, size_t size) {
}

void InvalidateDataCache(void* address, size_t size) {
}

template<>
void CommandListProcessor::ProcessCommand(const DeviceSinkCommand* command) {
}

}
