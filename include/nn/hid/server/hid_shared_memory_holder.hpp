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

struct SharedMemoryType {
  uint64_t storage[8];
};

Result CreateSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  MemoryPermission myPermission, MemoryPermission otherPermission);
void AttachSharedMemory(SharedMemoryType* sharedMemory, size_t size,
  uint32_t handle, bool managed);
void DestroySharedMemory(SharedMemoryType* sharedMemory);
void* MapSharedMemory(SharedMemoryType* sharedMemory,
  MemoryPermission permission);
void UnmapSharedMemory(SharedMemoryType* sharedMemory);
void* GetSharedMemoryAddress(const SharedMemoryType* sharedMemory);
uint32_t GetSharedMemoryHandle(const SharedMemoryType* sharedMemory);

}

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
