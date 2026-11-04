#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::os {

enum MemoryPermission {
  MemoryPermission_None = 0,
  MemoryPermission_ReadOnly = 1,
  MemoryPermission_WriteOnly = 2,
  MemoryPermission_ReadWrite = 3,
};

struct TransferMemoryType {
  uint8_t state;
  uint8_t reserved[63];
};

static_assert(sizeof(TransferMemoryType) == 64);

Result CreateTransferMemory(TransferMemoryType* transferMemory, void* address,
  size_t size, MemoryPermission permission);
uint32_t DetachTransferMemory(TransferMemoryType* transferMemory);
void DestroyTransferMemory(TransferMemoryType* transferMemory);
void FlushDataCache(const void* address, size_t size);

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
