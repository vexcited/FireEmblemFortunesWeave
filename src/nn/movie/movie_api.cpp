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
