#pragma once

#include <stddef.h>

namespace nn::mem {

class NumberLineAllocator {
public:
  enum AllocationMode {
    AllocationMode_FirstFit,
    AllocationMode_BestFit,
  };

  using AllocateFunction = void* (*)(size_t size, void* userData);
  using FreeFunction = void (*)(void* pointer, void* userData);

  NumberLineAllocator() : impl_(nullptr) {}

  void Initialize(AllocateFunction allocate, void* allocateData,
    FreeFunction free, void* freeData, bool threadSafe);
  void Finalize();
  void SetAllocationMode(AllocationMode mode);
  bool AddRange(int first, int count);
  bool Allocate(int* first, int count);
  bool Allocate(int* first, int count, int alignment);
  void Free(int first);

private:
  void* impl_;
  void* reserved_[2];
};

}
