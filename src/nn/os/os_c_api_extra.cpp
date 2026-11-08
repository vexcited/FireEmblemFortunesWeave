#include <stddef.h>
#include <stdint.h>

#include "nn/os/system_event.hpp"
#include "nn/os/thread_api.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/time.hpp"
#include "nn/os/tls.hpp"

enum nnosBreakReason : int32_t {};

namespace nn::os::detail {

void BreakImpl(nnosBreakReason reason, uintptr_t argument, size_t size);

}

namespace nn::os {

void SleepThread(TimeSpan time);

}

namespace nn::os::detail {

struct ThreadLocalAllocator {
  void* reserved;
  void* (*allocate)(size_t size, size_t alignment);
  void (*free)(void* address, size_t size);
};

[[gnu::visibility("hidden")]] extern ThreadLocalAllocator
  g_ThreadLocalAllocator;

}

namespace {

constexpr nn::TimeSpan OneDay = {86400ll * 1000 * 1000 * 1000};

[[gnu::always_inline]] inline int ToInnerValue(nn::Result result) {
  return result.value & 0x3fffff;
}

}

using nn::os::detail::g_ThreadLocalAllocator;

extern "C" {

int nnosCreateThread(nn::os::ThreadType* thread, void (*entry)(void*),
  void* argument, void* stack, size_t stackSize, int priority) {
  return ToInnerValue(nn::os::CreateThread(thread, entry, argument, stack,
    stackSize, priority));
}

int nnosCreateThreadWithCoreNumber(nn::os::ThreadType* thread,
  void (*entry)(void*), void* argument, void* stack, size_t stackSize,
  int priority, int coreNumber) {
  return ToInnerValue(nn::os::CreateThread(thread, entry, argument, stack,
    stackSize, priority, coreNumber));
}

int nnosCreateSystemEvent(nn::os::SystemEventType* event,
  nn::os::EventClearMode clearMode, bool isInterProcess) {
  return ToInnerValue(nn::os::CreateSystemEvent(event, clearMode,
    isInterProcess));
}

int nnosAllocateTlsSlot(nn::os::TlsSlot* pOutSlot,
  void (*destructor)(uintptr_t)) {
  return ToInnerValue(nn::os::SdkAllocateTlsSlot(pOutSlot, destructor));
}

void* nnosAllocateMemoryForThreadLocal(size_t size) {
  return g_ThreadLocalAllocator.allocate(size, 16);
}

void nnosFreeMemoryForThreadLocal(void* address, size_t size) {
  if (address != nullptr) {
    g_ThreadLocalAllocator.free(address, size);
  }
}

[[noreturn]] void nnosBreak(nnosBreakReason reason, uintptr_t argument,
  size_t size) {
  nn::os::detail::BreakImpl(reason, argument, size);
  for (;;) {
    nn::os::SleepThread(OneDay);
  }
}

}
