#include "nn/os/transfer_memory.hpp"

#include "nn/os/thread_manager.hpp"

namespace nn::os {

namespace {

detail::InternalCriticalSection* GetCurrentThreadLock() {
  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  auto* thread = *reinterpret_cast<ThreadType**>(tls + 0x1f8);
  return reinterpret_cast<detail::InternalCriticalSection*>(
    &thread->critical_section);
}

void UnmapTransferMemoryUnsafe(TransferMemoryType* transferMemory) {
  if (transferMemory->state != TransferMemoryType::State_Mapped) {
    return;
  }

  detail::TransferMemoryImplByHorizon::Unmap(transferMemory->handle,
    transferMemory->address, transferMemory->size);

  if (transferMemory->isAllocated) {
    transferMemory->isAllocated = false;
  }

  transferMemory->address = nullptr;
  transferMemory->state = TransferMemoryType::State_Initialized;
}

}

Result CreateTransferMemory(TransferMemoryType* transferMemory, void* address,
  size_t size, MemoryPermission permission) {
  uint32_t handle = 0;
  const Result result = detail::TransferMemoryImplByHorizon::Create(&handle,
    address, size, permission);

  if (result.IsFailure()) {
    return result;
  }

  transferMemory->handle = handle;
  transferMemory->isHandleManaged = true;
  transferMemory->isAllocated = false;
  transferMemory->address = nullptr;
  transferMemory->size = size;
  transferMemory->lock.Initialize();
  transferMemory->state = TransferMemoryType::State_Initialized;
  return result;
}

void AttachTransferMemory(TransferMemoryType* transferMemory, size_t size,
  uint32_t handle, bool managed) {
  transferMemory->handle = handle;
  transferMemory->isHandleManaged = managed;
  transferMemory->isAllocated = false;
  transferMemory->address = nullptr;
  transferMemory->size = size;
  transferMemory->lock.Initialize();
  transferMemory->state = TransferMemoryType::State_Initialized;
}

void DestroyTransferMemory(TransferMemoryType* transferMemory) {
  if (transferMemory->state == TransferMemoryType::State_Mapped) {
    UnmapTransferMemory(transferMemory);
  }

  transferMemory->state = TransferMemoryType::State_NotInitialized;

  if (transferMemory->isHandleManaged) {
    detail::TransferMemoryImplByHorizon::Close(transferMemory->handle);
  }

  transferMemory->isHandleManaged = false;
  transferMemory->address = nullptr;
  transferMemory->size = 0;
  transferMemory->handle = 0;
  transferMemory->lock.Finalize();
}

void UnmapTransferMemory(TransferMemoryType* transferMemory) {
  transferMemory->lock.Enter();
  UnmapTransferMemoryUnsafe(transferMemory);
  transferMemory->lock.Leave();
}

uint32_t DetachTransferMemory(TransferMemoryType* transferMemory) {
  transferMemory->state = TransferMemoryType::State_Detached;
  transferMemory->isHandleManaged = false;
  const uint32_t handle = transferMemory->handle;
  transferMemory->handle = 0;
  return handle;
}

Result MapTransferMemory(void** address, TransferMemoryType* transferMemory,
  MemoryPermission permission) {
  auto* threadLock = GetCurrentThreadLock();
  threadLock->Enter();
  transferMemory->lock.Enter();

  void* mapped = nullptr;
  const Result result = detail::TransferMemoryImplByHorizon::Map(&mapped,
    transferMemory->handle, transferMemory->size, permission);

  if (result.IsSuccess()) {
    transferMemory->isAllocated = true;
    transferMemory->state = TransferMemoryType::State_Mapped;
    transferMemory->address = mapped;
    *address = mapped;
  }

  transferMemory->lock.Leave();
  threadLock->Leave();
  return result;
}

Result MapTransferMemoryAligned(void** address,
  TransferMemoryType* transferMemory, MemoryPermission permission) {
  auto* threadLock = GetCurrentThreadLock();
  threadLock->Enter();
  transferMemory->lock.Enter();

  void* mapped = nullptr;
  const Result result = detail::TransferMemoryImplByHorizon::MapAligned(
    &mapped, transferMemory->handle, transferMemory->size, permission);

  if (result.IsSuccess()) {
    transferMemory->isAllocated = true;
    transferMemory->state = TransferMemoryType::State_Mapped;
    transferMemory->address = mapped;
    *address = mapped;
  }

  transferMemory->lock.Leave();
  threadLock->Leave();
  return result;
}

}
