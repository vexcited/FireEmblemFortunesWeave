#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/shared_memory.hpp"
#include "nn/result.hpp"

namespace nn::hid::server {

struct SharedMemoryFormat;

Result InitializeSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory,
  size_t size);
void AttachSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory,
  size_t size, uint32_t handle, bool managed);
void FinalizeSharedMemoryForRingLifo(os::SharedMemoryType* sharedMemory);
void FinalizeSharedMemoryFormat(SharedMemoryFormat* pFormat);

class SharedMemoryHolder {
 public:
  SharedMemoryHolder();
  SharedMemoryHolder(SharedMemoryHolder&& other);

  Result Initialize();
  void Attach(uint32_t handle, bool managed);
  void Finalize();
  bool IsMapped() const;
  uint32_t GetSharedMemoryHandle() const;
  SharedMemoryFormat* GetAddress() const;

 private:
  bool m_IsOwner;
  bool m_IsCreated;
  bool m_IsMapped;
  os::SharedMemoryType m_SharedMemory;
  SharedMemoryFormat* m_pAddress;
};

}
