#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_heap_memory_manager.hpp"
#include "nn/movie/movie_result.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/tls.hpp"

namespace nn::movie {

struct LibraryState {
  os::TlsSlot heapSlot;
  os::SdkRecursiveMutexType mutex;
  uint64_t initializeCount;
};

[[gnu::visibility("hidden")]] extern LibraryState g_LibraryState;

namespace {

constexpr Result ResultInitializeCountOverflow = {0x3f900};

}

Result Initialize() {
  g_LibraryState.mutex.Lock();
  if (g_LibraryState.initializeCount == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(os::SdkAllocateTlsSlot(
      &g_LibraryState.heapSlot, nullptr));
    detail::HeapMemoryManager::SetSlot(g_LibraryState.heapSlot);
  }

  Result result = {};
  if (g_LibraryState.initializeCount == UINT64_MAX) {
    result = ResultInitializeCountOverflow;
  }
  else {
    ++g_LibraryState.initializeCount;
  }

  g_LibraryState.mutex.Unlock();
  return result;
}

Result IsInitialized() {
  g_LibraryState.mutex.Lock();
  const Result result = g_LibraryState.initializeCount != 0 ? Result{} :
    ResultNotInitialized;
  g_LibraryState.mutex.Unlock();
  return result;
}

void Finalize() {
  g_LibraryState.mutex.Lock();
  if (g_LibraryState.initializeCount != 0 &&
    --g_LibraryState.initializeCount == 0) {
    os::FreeTlsSlot(g_LibraryState.heapSlot);
  }

  g_LibraryState.mutex.Unlock();
}

}
