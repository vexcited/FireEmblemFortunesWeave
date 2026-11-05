#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/memory_permission.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct TransferMemoryType {
  enum State : uint8_t {
    State_NotInitialized,
    State_Initialized,
    State_Mapped,
    State_Detached,
  };

  uint8_t state;
  bool isHandleManaged;
  bool isAllocated;
  void* address;
  size_t size;
  uint32_t handle;
  uint8_t reserved_1c[0x20];
  detail::InternalCriticalSection lock;
};

static_assert(sizeof(TransferMemoryType) == 64);

Result CreateTransferMemory(TransferMemoryType* transferMemory, void* address,
  size_t size, MemoryPermission permission);
void AttachTransferMemory(TransferMemoryType* transferMemory, size_t size,
  uint32_t handle, bool managed);
uint32_t DetachTransferMemory(TransferMemoryType* transferMemory);
void DestroyTransferMemory(TransferMemoryType* transferMemory);
Result MapTransferMemory(void** address, TransferMemoryType* transferMemory,
  MemoryPermission permission);
Result MapTransferMemoryAligned(void** address,
  TransferMemoryType* transferMemory, MemoryPermission permission);
void UnmapTransferMemory(TransferMemoryType* transferMemory);
void FlushDataCache(const void* address, size_t size);

namespace detail {

struct TransferMemoryImplByHorizon {
  static Result Create(uint32_t* handle, void* address, size_t size,
    MemoryPermission permission);
  static void Close(uint32_t handle);
  static Result Map(void** address, uint32_t handle, size_t size,
    MemoryPermission permission);
  static Result MapAligned(void** address, uint32_t handle, size_t size,
    MemoryPermission permission);
  static void Unmap(uint32_t handle, void* address, size_t size);
};

}

class TransferMemory {
public:
  ~TransferMemory() {
    if (m_TransferMemory.state != 0) {
      DestroyTransferMemory(&m_TransferMemory);
    }
  }

  TransferMemoryType* GetBase() {
    return &m_TransferMemory;
  }

private:
  TransferMemoryType m_TransferMemory;
};

}
