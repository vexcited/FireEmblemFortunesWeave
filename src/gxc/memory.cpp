#include "gxc/memory.hpp"

#include <optional>
#include <string>
#include <string_view>

namespace gxc {

namespace {

constexpr int kHeapCount = 4;

struct Allocators {
  AllocateFunction allocate[kHeapCount];
  void* allocateData[kHeapCount];
  FreeFunction free[kHeapCount];
  void* freeData[kHeapCount];
};

std::string s_heapNames[2];
Allocators s_allocators;

}

void SetAllocator(AllocateFunction allocate, void* allocateData,
  FreeFunction free, void* freeData) {
  s_allocators.allocate[0] = allocate;
  s_allocators.allocateData[0] = allocateData;
  s_allocators.free[0] = free;
  s_allocators.freeData[0] = freeData;
}

void* Allocate(size_t size, size_t alignment) {
  return s_allocators.allocate[0](size, alignment,
    s_allocators.allocateData[0]);
}

void Free(void* pointer) {
  s_allocators.free[0](pointer, s_allocators.freeData[0]);
}

int GetDefaultHeap() {
  return 0;
}

std::optional<int> RegisterHeap(std::string_view name) {
  if (name == s_heapNames[0]) {
    return 1;
  }

  if (name == s_heapNames[1]) {
    return 2;
  }

  if (s_heapNames[0].empty()) {
    s_heapNames[0] = name;
    return 1;
  }

  if (s_heapNames[1].empty()) {
    s_heapNames[1] = name;
    return 2;
  }

  return std::nullopt;
}

void SetAllocator(int heap, AllocateFunction allocate, void* allocateData,
  FreeFunction free, void* freeData) {
  s_allocators.allocate[heap] = allocate;
  s_allocators.allocateData[heap] = allocateData;
  s_allocators.free[heap] = free;
  s_allocators.freeData[heap] = freeData;
}

void* Allocate(int heap, size_t size, size_t alignment) {
  if (s_allocators.allocate[heap] == nullptr) {
    heap = 0;
  }

  return s_allocators.allocate[heap](size, alignment,
    s_allocators.allocateData[heap]);
}

void Free(int heap, void* pointer) {
  if (s_allocators.free[heap] == nullptr) {
    heap = 0;
  }

  s_allocators.free[heap](pointer, s_allocators.freeData[heap]);
}

}
