#include "nn/codec/aac_memory_allocator.hpp"

#include <string.h>

#include "nn/os/mutex.hpp"

namespace nn::codec {
namespace {

os::MutexType g_Mutex = {1};
lmem::detail::HeapHead* g_Heap;

class ScopedLock {
public:
  ScopedLock() { os::LockMutex(&g_Mutex); }
  ~ScopedLock() { os::UnlockMutex(&g_Mutex); }
};

inline unsigned int AlignSize(unsigned int size, MEMORY_SECTION section) {
  return section == SECT_DATA_EXTERN ? size : (size + 3) & ~3u;
}

}

void InitializeAacMemoryAllocator(void* buffer, size_t size,
  const util::optional<lmem::FrameHeapState>& state) {
  os::LockMutex(&g_Mutex);
  if (buffer != nullptr && g_Heap == nullptr) {
    g_Heap = lmem::CreateFrameHeap(buffer, size, 0);
  }

  // Restoring a saved state first reserves the whole heap so the state
  // covers every block allocated before it was saved.
  if (state) {
    lmem::AllocateFromFrameHeap(g_Heap,
      lmem::GetFrameHeapAllocatableSize(g_Heap, 4), 4);
    lmem::RestoreFrameHeapState(g_Heap, *state);
  }
  os::UnlockMutex(&g_Mutex);
}

lmem::FrameHeapState FinalizeAacMemoryAllocator() {
  os::LockMutex(&g_Mutex);
  const lmem::FrameHeapState state = lmem::GetFrameHeapState(g_Heap);
  if (g_Heap != nullptr) {
    lmem::DestroyFrameHeap(g_Heap);
    g_Heap = nullptr;
  }
  os::UnlockMutex(&g_Mutex);
  return state;
}

// FDK allocations come from a frame heap that is released as a whole by
// FinalizeAacMemoryAllocator, so the free functions do nothing.
void* FDKcalloc(unsigned int count, unsigned int size) {
  ScopedLock lock;
  const size_t allocationSize = count * size;
  void* pointer = lmem::AllocateFromFrameHeap(g_Heap, allocationSize, 8);
  memset(pointer, 0, allocationSize);
  return pointer;
}

void* FDKmalloc(unsigned int size) {
  ScopedLock lock;
  return lmem::AllocateFromFrameHeap(g_Heap, size, 8);
}

void FDKfree(void* pointer) {
}

void* FDKaalloc(unsigned int size, unsigned int alignment) {
  ScopedLock lock;
  void* pointer = lmem::AllocateFromFrameHeap(g_Heap, size, alignment);
  memset(pointer, 0, size);
  return pointer;
}

void FDKafree(void* pointer) {
}

void* FDKcalloc_L(unsigned int count, unsigned int size,
  MEMORY_SECTION section) {
  const unsigned int alignedSize = AlignSize(size, section);
  ScopedLock lock;
  const size_t allocationSize = alignedSize * count;
  void* pointer = lmem::AllocateFromFrameHeap(g_Heap, allocationSize, 8);
  memset(pointer, 0, allocationSize);
  return pointer;
}

void FDKfree_L(void* pointer) {
}

void* FDKaalloc_L(unsigned int size, unsigned int alignment,
  MEMORY_SECTION section) {
  const unsigned int alignedSize = AlignSize(size, section);
  ScopedLock lock;
  void* pointer = lmem::AllocateFromFrameHeap(g_Heap, alignedSize, alignment);
  memset(pointer, 0, alignedSize);
  return pointer;
}

void FDKafree_L(void* pointer) {
}

}
