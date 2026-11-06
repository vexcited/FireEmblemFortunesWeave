#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/mutex.hpp"

namespace nn::mem {

class NumberLineAllocator {
public:
  enum AllocationMode {
    AllocationMode_FirstFit,
    AllocationMode_BestFit,
  };

  using AllocateFunction = void* (*)(size_t size, void* userData);
  using FreeFunction = void (*)(void* pointer, void* userData);

  NumberLineAllocator() : impl_(nullptr) {
    os::InitializeMutex(&mutex_, false, 0);
    threadSafe_ = false;
  }

  ~NumberLineAllocator() {
    os::FinalizeMutex(&mutex_);
  }

  void Initialize(AllocateFunction allocate, void* allocateData,
    FreeFunction free, void* freeData);
  void Initialize(AllocateFunction allocate, void* allocateData,
    FreeFunction free, void* freeData, bool threadSafe);
  void Finalize();
  void SetAllocationMode(AllocationMode mode);
  AllocationMode GetAllocationMode() const;
  bool AddRange(int first, int count);
  bool RemoveRange(int first, int count);
  bool Allocate(int* first, int count);
  bool Allocate(int* first, int count, int alignment);
  bool Allocate(int* first, int count, void* userData,
    void (*destructor)(void*));
  bool Allocate(int* first, int count, int alignment, void* userData,
    void (*destructor)(void*));
  void Free(int first);
  bool FindUserData(void** userData, int first) const;
  int GetSizeOf(int first) const;
  int GetTotalFreeSize() const;
  int GetAllocatableSize() const;
  void Dump(size_t first, int count) const;

  class Impl;

private:
  Impl* impl_;
  FreeFunction free_;
  void* freeData_;
  mutable os::MutexType mutex_ = {};
  bool threadSafe_;
};

}
