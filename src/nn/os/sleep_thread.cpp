#include "nn/os/sleep_thread.hpp"

#include "nn/os/thread_manager.hpp"

extern "C" void svcSleepThread(int64_t nanoseconds);

namespace nn::os::detail {

extern uint8_t ResourceManagerStorage[1288]
  asm("_ZN2nn2os6detail26g_OsResourceManagerStorageE");

void TimeoutHelperImplByHorizon::Sleep(TimeSpan time) {
  if (time.nanoseconds) {
    svcSleepThread(time.nanoseconds);
  }
  else {
    reinterpret_cast<ThreadManagerImplByHorizon*>(ResourceManagerStorage + 288)
      ->YieldThread();
  }
}

}

namespace nn::os {

void SleepThread(TimeSpan time) {
  detail::TimeoutHelperImplByHorizon::Sleep(time);
}

}
