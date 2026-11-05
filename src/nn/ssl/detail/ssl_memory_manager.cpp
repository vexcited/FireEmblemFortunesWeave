#include <string.h>

#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

namespace {

constexpr int HeapOption = 4;

}

lmem::detail::HeapHead* SslMemoryManager::g_Heap;
size_t SslMemoryManager::g_HeapStartFreeSize;
SslMemoryManager::SfAllocator SslMemoryManager::g_SfAllocator;
char* SslMemoryManager::g_pHeapHead;
size_t SslMemoryManager::g_HeapSize;

Result SslMemoryManager::Initialize(char* heap, size_t heapSize) {
  if (heap == nullptr || heapSize == 0) {
    return ResultInternalError();
  }

  if (g_Heap != nullptr) {
    return Result{};
  }

  g_Heap = lmem::CreateExpHeap(heap, heapSize, HeapOption);
  g_HeapStartFreeSize = lmem::GetExpHeapTotalFreeSize(g_Heap);
  g_SfAllocator.pHeap = g_Heap;
  os::InitializeMutex(&g_SfAllocator.mutex, false, 0);
  g_pHeapHead = heap;
  g_HeapSize = heapSize;
  return Result{};
}

void SslMemoryManager::Finalize() {
  os::FinalizeMutex(&g_SfAllocator.mutex);
  g_SfAllocator.pHeap = nullptr;

  // The leak check on the free size is compiled out of release builds.
  static_cast<void>(lmem::GetExpHeapTotalFreeSize(g_Heap));
  lmem::DestroyExpHeap(g_Heap);
  g_Heap = nullptr;
  memset(g_pHeapHead, 0, g_HeapSize);
}

void* SslMemoryManager::AllocateChunk(size_t size, uint64_t id) {
  static_cast<void>(id);
  return lmem::AllocateFromExpHeap(g_Heap, size);
}

void SslMemoryManager::Free(void* pointer, uint64_t id) {
  static_cast<void>(id);
  lmem::FreeToExpHeap(g_Heap, pointer);
}

size_t SslMemoryManager::GetTotalFreeSize() {
  if (g_Heap == nullptr) {
    return 0;
  }

  return lmem::GetExpHeapTotalFreeSize(g_Heap);
}

SslMemoryManager::SfAllocator* SslMemoryManager::GetSfAllocator() {
  return &g_SfAllocator;
}

}
