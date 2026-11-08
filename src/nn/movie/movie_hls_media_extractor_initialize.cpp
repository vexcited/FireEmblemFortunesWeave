#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

Result IsInitialized();

namespace detail {

// The original keeps these callbacks in a guarded static that nothing else
// writes, so HLS extraction without memory always fails with them.
struct HlsAllocatorCallbacks {
  HlsAllocatorCallbacks() : callbacks() {}

  AllocatorCallbacks callbacks;
};

inline AllocatorCallbacks* GetHlsAllocatorCallbacks() {
  static HlsAllocatorCallbacks s_Callbacks;
  return &s_Callbacks.callbacks;
}

}

namespace {

constexpr Result ResultAlreadyInitialized = {0x3f500};
constexpr Result ResultOutOfMemory = {0x3f700};
constexpr Result ResultInvalidAlignment = {0x40b00};
constexpr Result ResultCacheSizeTooLarge = {0x7f300};

constexpr size_t ManagementMemorySize = 0x20000;

}

void HlsMediaExtractor::Finalize() {
  detail::MediaExtractorHolder* holder = m_pHolder;
  if (holder == nullptr || holder->pImpl == nullptr) {
    return;
  }

  detail::MediaExtractorImpl* impl = holder->pImpl;
  NN_ABORT_UNLESS_RESULT_SUCCESS(impl->Finalize());
  detail::AllocatorInfo allocatorInfo = holder->allocatorInfo;
  impl->~MediaExtractorImpl();
  detail::FreeMemory(impl, &allocatorInfo);
  holder->pImpl = nullptr;
  detail::FreeMemory(holder, &allocatorInfo);
  m_pHolder = nullptr;
  if (allocatorInfo.type != detail::AllocatorType_StandardAllocator) {
    return;
  }

  mem::StandardAllocator* allocator = allocatorInfo.allocator;
  if (allocatorInfo.CalculateLeakedMemory() != 0) {
    allocator->Dump();
  }

  allocator->Finalize();
}

Result HlsMediaExtractor::Initialize(void* memory, size_t memorySize,
  size_t cacheSize, HlsMediaExtractorConfig* config) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(IsInitialized());
  const detail::AllocatorCallbacks* callbacks =
    detail::GetHlsAllocatorCallbacks();
  if (memorySize == 0 && callbacks->allocate == nullptr) {
    return ResultInvalidArgument;
  }

  if (m_pHolder != nullptr && m_pHolder->pImpl != nullptr) {
    return ResultAlreadyInitialized;
  }

  detail::AllocatorInfo allocatorInfo = {};
  allocatorInfo.reserved = 1;
  if (memory != nullptr) {
    if (cacheSize > memorySize ||
      cacheSize + ManagementMemorySize > memorySize) {
      return ResultCacheSizeTooLarge;
    }

    if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
      return ResultInvalidAlignment;
    }

    m_Allocator.Initialize(memory, memorySize);
    allocatorInfo.size = m_Allocator.GetTotalFreeSize();
    allocatorInfo.allocator = &m_Allocator;
    allocatorInfo.type = detail::AllocatorType_StandardAllocator;
  }
  else {
    allocatorInfo.pCallbacks = detail::GetHlsAllocatorCallbacks();
    allocatorInfo.type = detail::AllocatorType_Callback;
  }

  auto* holder = static_cast<detail::MediaExtractorHolder*>(
    detail::AllocateMemory(sizeof(detail::MediaExtractorHolder),
      &allocatorInfo));
  if (holder == nullptr) {
    return ResultOutOfMemory;
  }

  new (holder) detail::MediaExtractorHolder();
  holder->allocatorInfo = allocatorInfo;
  m_pHolder = holder;
  void* storage = detail::AllocateMemory(sizeof(detail::MediaExtractorImpl),
    &holder->allocatorInfo);
  if (storage == nullptr) {
    holder->pImpl = nullptr;
    return ResultOutOfMemory;
  }

  auto* impl = new (storage) detail::MediaExtractorImpl(true);
  holder->pImpl = impl;
  Result result = impl->Initialize(&holder->allocatorInfo, cacheSize,
    config->pConnections, config->connectionCount, this);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  result = impl->GetTaskCompletedEvent(&holder->pTaskCompletedEvent);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  result = impl->SetPreferredPixels(m_PreferredPixels);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  return detail::ToPublicResult(impl->SetMinBandwidthSamples(
    m_MinBandwidthSamples));
}

}
