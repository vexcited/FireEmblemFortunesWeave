#include "nn/os/condition_variable.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/thread_api.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
};

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
