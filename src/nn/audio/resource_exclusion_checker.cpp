#include <atomic>

#include "nn/audio/renderer_config.hpp"

namespace nn::audio::detail {

struct ResourceExclusionChecker {
  void Reset() {
    isUsed = false;
    regionAddress = nullptr;
    regionSize = 0;
    handle = nullptr;
    enterCount = 0;
    leaveCount = 0;
  }

  std::atomic<bool> isUsed;
  void* handle;
  void* regionAddress;
  size_t regionSize;
  std::atomic<int> enterCount;
  std::atomic<int> leaveCount;
};

static_assert(sizeof(ResourceExclusionChecker) == 40);

struct ResourceExclusionCheckerManager {
  static constexpr int CheckerCountMax = 2;

  os::SdkMutexType mutex;
  ResourceExclusionChecker checkers[CheckerCountMax];
};

[[gnu::visibility("hidden")]]
ResourceExclusionCheckerManager g_ResourceExclusionCheckerManager;

ResourceExclusionChecker* AcquireResourceExclusionChecker() {
  if (!g_IsResourceExclusionCheckEnabled) {
    return nullptr;
  }
  auto& manager = g_ResourceExclusionCheckerManager;
  manager.mutex.Lock();
  ResourceExclusionChecker* result = nullptr;
  for (auto& checker : manager.checkers) {
    if (!checker.isUsed) {
      checker.Reset();
      checker.isUsed = true;
      result = &checker;
      break;
    }
  }
  manager.mutex.Unlock();
  return result;
}

void ReleaseResourceExclusionChecker(ResourceExclusionChecker* checker) {
  const bool isEnabled = g_IsResourceExclusionCheckEnabled;
  if (checker == nullptr || isEnabled == false) {
    return;
  }
  auto& manager = g_ResourceExclusionCheckerManager;
  manager.mutex.Lock();
  checker->Reset();
  manager.mutex.Unlock();
}

ResourceExclusionChecker* FindResourceExclusionCheckerFromRegionInConfigImpl(
  void* region) {
  auto& manager = g_ResourceExclusionCheckerManager;
  manager.mutex.Lock();
  ResourceExclusionChecker* result = nullptr;
  uintptr_t address = reinterpret_cast<uintptr_t>(region);
  for (auto& checker : manager.checkers) {
    uintptr_t begin = reinterpret_cast<uintptr_t>(checker.regionAddress);
    if (checker.isUsed && begin != 0 && checker.regionSize != 0 &&
      begin <= address && address <= begin + checker.regionSize - 1) {
      result = &checker;
      break;
    }
  }
  manager.mutex.Unlock();
  return result;
}

ResourceExclusionChecker* FindResourceExclusionCheckerFromInternalHandleImpl(
  void* handle) {
  auto& manager = g_ResourceExclusionCheckerManager;
  manager.mutex.Lock();
  ResourceExclusionChecker* result = nullptr;
  for (auto& checker : manager.checkers) {
    if (checker.isUsed && checker.handle == handle) {
      result = &checker;
      break;
    }
  }
  manager.mutex.Unlock();
  return result;
}

}
