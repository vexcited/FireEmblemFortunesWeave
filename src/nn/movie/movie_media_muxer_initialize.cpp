#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

Result IsInitialized();

namespace {

constexpr Result ResultAlreadyInitialized = {0x3f500};
constexpr Result ResultOutOfMemory = {0x3f700};
constexpr Result ResultInvalidAlignment = {0x40b00};

}

void MediaMuxer::Finalize() {
  detail::ThreadManager::GetInstance()->_RemoveThreadConfigurationByInstance(
    this);
  detail::MediaMuxerHolder* holder = m_pHolder;
  if (holder == nullptr || holder->pImpl == nullptr) {
    return;
  }

  detail::MediaMuxerImpl* impl = holder->pImpl;
  NN_ABORT_UNLESS_RESULT_SUCCESS(impl->Finalize());
  detail::AllocatorInfo allocatorInfo = holder->allocatorInfo;
  impl->~MediaMuxerImpl();
  detail::FreeMemory(impl, &allocatorInfo);
  holder->pImpl = nullptr;
  detail::FreeMemory(holder, &allocatorInfo);
  m_pHolder = nullptr;
  if (allocatorInfo.type != detail::AllocatorType_StandardAllocator) {
    return;
  }

  mem::StandardAllocator* allocator = allocatorInfo.allocator;
  if (allocator == nullptr) {
    return;
  }

  if (allocatorInfo.CalculateLeakedMemory() != 0) {
    allocator->Dump();
  }

  allocator->Finalize();
}

Result MediaMuxer::Initialize(void* memory, size_t memorySize,
  MediaWriter* writer, ContainerType containerType) {
  if (memorySize == 0) {
    return ResultInvalidArgument;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(IsInitialized());
  if (m_pHolder != nullptr && m_pHolder->pImpl != nullptr) {
    return ResultAlreadyInitialized;
  }

  if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
    return ResultInvalidAlignment;
  }

  m_Allocator.Initialize(memory, memorySize);
  detail::AllocatorInfo allocatorInfo = {};
  allocatorInfo.allocator = &m_Allocator;
  allocatorInfo.type = detail::AllocatorType_StandardAllocator;
  allocatorInfo.size = m_Allocator.GetTotalFreeSize();
  allocatorInfo.reserved = 1;

  auto* holder = static_cast<detail::MediaMuxerHolder*>(
    detail::AllocateMemory(sizeof(detail::MediaMuxerHolder),
      &allocatorInfo));
  if (holder == nullptr) {
    return ResultOutOfMemory;
  }

  holder->pImpl = nullptr;
  *reinterpret_cast<uint64_t*>(&holder->mutex) = 0;
  holder->allocatorInfo = allocatorInfo;
  m_pHolder = holder;
  void* storage = detail::AllocateMemory(sizeof(detail::MediaMuxerImpl),
    &holder->allocatorInfo);
  if (storage == nullptr) {
    holder->pImpl = nullptr;
    return ResultOutOfMemory;
  }

  auto* impl = new (storage) detail::MediaMuxerImpl();
  holder->pImpl = impl;
  return detail::ToPublicResult(impl->Initialize(&holder->allocatorInfo,
    writer, containerType, this));
}

}
