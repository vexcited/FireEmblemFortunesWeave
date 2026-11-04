#include <string.h>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {

bool AcquireMemoryPool(AudioRendererConfig* config, MemoryPoolType* pool,
  void* address, size_t size) {
  pool->_pMemoryPoolInfo =
    config->_pMemoryPoolManager->Acquire(address, size);
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  return pool->_pMemoryPoolInfo != nullptr;
}

void ReleaseMemoryPool(AudioRendererConfig* config, MemoryPoolType* pool) {
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  config->_pMemoryPoolManager->Release(pool->_pMemoryPoolInfo);
  pool->_pMemoryPoolInfo = nullptr;
}

bool RequestAttachMemoryPool(MemoryPoolType* pool) {
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  return pool->_pMemoryPoolInfo->Attach();
}

bool RequestDetachMemoryPool(MemoryPoolType* pool) {
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  return pool->_pMemoryPoolInfo->Detach();
}

bool IsMemoryPoolAttached(const MemoryPoolType* pool) {
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  return pool->_pMemoryPoolInfo->IsAttached();
}

int GetReleasedMemoryPoolCount(const AudioRendererConfig* config) {
  return config->_pMemoryPoolManager->GetFreeCount();
}

void* GetMemoryPoolAddress(const MemoryPoolType* pool) {
  return pool->_pMemoryPoolInfo->GetAddress();
}

size_t GetMemoryPoolSize(const MemoryPoolType* pool) {
  return pool->_pMemoryPoolInfo->GetSize();
}

void CopyMemoryPoolData(const MemoryPoolType* pool, void* destination,
  const void* source, size_t size) {
  // The release build keeps the range queries of the dropped assertions.
  pool->_pMemoryPoolInfo->GetSize();
  pool->_pMemoryPoolInfo->GetAddress();
  memcpy(destination, source, size);
}

MemoryPoolType::State GetMemoryPoolState(const MemoryPoolType* pool) {
  detail::CheckResourceExclusion(pool->_pMemoryPoolInfo);
  switch (pool->_pMemoryPoolInfo->GetState()) {
    case MemoryPoolInfo::State_Allocated:
      return MemoryPoolType::State_Detached;
    case MemoryPoolInfo::State_RequestDetach:
      return MemoryPoolType::State_RequestDetach;
    case MemoryPoolInfo::State_Detached:
      return MemoryPoolType::State_Detached;
    case MemoryPoolInfo::State_RequestAttach:
      return MemoryPoolType::State_RequestAttach;
    case MemoryPoolInfo::State_Attached:
      return MemoryPoolType::State_Attached;
    case MemoryPoolInfo::State_Released:
      return MemoryPoolType::State_Detached;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
