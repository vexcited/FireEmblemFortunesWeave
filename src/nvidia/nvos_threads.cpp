#include "nn/os/condition_variable.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/thread_api.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_InsufficientMemory = 6,
};

// The os thread comes first, the stack is freed with it unless the caller
// gave one.
struct NvOsThread {
  alignas(16) uint8_t thread[0x1c0];
  void* stack;
  uint8_t isUserStack;
};

static_assert(sizeof(NvOsThread) == 0x1d0);

struct NvOsThreadAttributes {
  void* stack;
  size_t stackSize;
  int32_t priorityClass;
  int32_t priority;
  int32_t idealCore;
  uint64_t affinityMask;
  const char* name;
};

extern "C" {

void* NvOsAlloc(uint64_t size);
void* NvOsAllocAlign(uint64_t alignment, uint64_t size);
void NvOsFree(void* pointer);
void* memset(void* destination, int value, uint64_t size);

}

namespace {

const size_t NvOsThreadDefaultStackSize = 0x20000;
const size_t NvOsThreadStackAlignment = 0x1000;

}

extern "C" NvError NvOsThreadCreateWithAttr(void (*function)(void*),
  void* argument, NvOsThread** pOutThread,
  const NvOsThreadAttributes* attributes) {
  void* stack = attributes->stack;
  const size_t stackSize = attributes->stackSize != 0 ?
    attributes->stackSize : NvOsThreadDefaultStackSize;
  uint8_t isUserStack = 1;

  if (stack == nullptr) {
    stack = NvOsAllocAlign(NvOsThreadStackAlignment, stackSize);
    if (stack == nullptr) {
      return NvError_InsufficientMemory;
    }

    isUserStack = 0;
  }

  int32_t priority;
  switch (attributes->priorityClass) {
    case 1:
      priority = 16;
      break;
    case 2:
      priority = 0;
      break;
    case 3:
      priority = attributes->priority;
      break;
    case 4:
      priority = 31;
      break;
    default:
      priority = attributes->priorityClass - 4;
      break;
  }

  auto* thread = static_cast<NvOsThread*>(NvOsAlloc(sizeof(NvOsThread)));
  if (thread != nullptr) {
    memset(thread, 0, sizeof(NvOsThread));
    thread->stack = stack;

    auto* osThread = reinterpret_cast<nn::os::ThreadType*>(thread->thread);
    if (nn::os::CreateThread(osThread, function, argument, stack, stackSize,
      priority).IsSuccess()) {
      *pOutThread = thread;

      const int32_t idealCore = attributes->idealCore;
      uint64_t mask = attributes->affinityMask;
      thread->isUserStack = isUserStack;
      if (mask == 0) {
        mask = nn::os::GetThreadAvailableCoreMask();
      }

      if (mask != 0) {
        nn::os::SetThreadCoreMask(osThread, idealCore, mask);
      }

      nn::os::StartThread(osThread);
      if (attributes->name != nullptr) {
        nn::os::SetThreadName(osThread, attributes->name);
      }

      return NvSuccess;
    }

    NvOsFree(thread);
  }

  if (isUserStack == 0) {
    NvOsFree(stack);
  }

  return NvError_InsufficientMemory;
}

extern "C" NvError NvOsThreadSetName(nn::os::ThreadType* thread,
  const char* name) {
  nn::os::SetThreadName(thread, name);
  return NvSuccess;
}

extern "C" NvError NvOsConditionBroadcast(
  nn::os::ConditionVariableType* condition) {
  nn::os::BroadcastConditionVariable(condition);
  return NvSuccess;
}

extern "C" NvError NvOsConditionSignal(
  nn::os::ConditionVariableType* condition) {
  nn::os::SignalConditionVariable(condition);
  return NvSuccess;
}

extern "C" NvError NvOsConditionWait(nn::os::ConditionVariableType* condition,
  nn::os::MutexType* mutex) {
  nn::os::WaitConditionVariable(condition, mutex);
  return NvSuccess;
}
