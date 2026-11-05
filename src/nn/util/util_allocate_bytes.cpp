#include <stddef.h>

namespace nn::util::detail {

using AllocateFunction = void* (*)(size_t size);
using DeallocateFunction = void (*)(void* pointer);

void* AllocateBytes(AllocateFunction allocate, size_t size) {
  return allocate(size);
}

void DeallocateBytes(DeallocateFunction deallocate, void* pointer) {
  deallocate(pointer);
}

// The size is kept in a 16 byte header in front of the returned block.
void* AllocateBytesWithSizeEmbedded(AllocateFunction allocate, size_t size) {
  size_t* header = static_cast<size_t*>(allocate(size + 16));
  if (header == nullptr) {
    return nullptr;
  }
  *header = size;
  return reinterpret_cast<char*>(header) + 16;
}

void DeallocateBytesWithSizeEmbedded(DeallocateFunction deallocate,
  void* pointer) {
  if (pointer != nullptr) {
    deallocate(static_cast<char*>(pointer) - 16);
  }
}

size_t GetEmbeddedSize(const void* pointer) {
  return *reinterpret_cast<const size_t*>(
    static_cast<const char*>(pointer) - 16);
}

}
