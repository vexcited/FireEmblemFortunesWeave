#include "nn/os/multi_wait.hpp"
#include "nn/os/thread_manager.hpp"

#include <stddef.h>

extern "C" uint32_t svcWaitSynchronization(int* output, const uint32_t* handles,
                                           int count, int64_t timeout);

namespace nn::os::detail {

[[noreturn]] void AbortWaitAny() asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortWaitAnyResult(const uint32_t* result) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

extern const uintptr_t NativeHolderVtable[] asm(
  "_ZTVN2nn2os6detail29MultiWaitHolderOfNativeHandleE");

static_assert(sizeof(Result) == 4);
static_assert(sizeof(Span<uint32_t>) == 16);
static_assert(offsetof(Span<uint32_t>, size) == 8);
static_assert(sizeof(MultiWaitHolderOfNativeHandle) == 64);

static int64_t ReadTime() {
  uint64_t ticks;
  asm volatile("mrs %0, cntpct_el0" : "=r"(ticks) : : "memory");
  return ConvertToTimeSpan({static_cast<int64_t>(ticks)}).nanoseconds;
}

static ThreadType* CurrentThread() {
  uintptr_t tls;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<ThreadType**>(tls + 0x1f8);
}

int MultiWaitHolderOfNativeHandle::IsSignaled() const {
  return 2;
}

bool MultiWaitHolderOfNativeHandle::GetNativeHandle(uint32_t* output) const {
  *output = handle;
  return true;
}

int AddNativeWaitHolder(MultiWaitHolderBase*) {
  return 2;
}

void RemoveNativeWaitHolder(MultiWaitHolderBase*) {
}

Result MultiWaitImplByHorizon::WaitSynchronizationN(int* output, int count,
                                                    uint32_t* handles, int,
                                                    int64_t timeout) {
  int index = 0;
  uint32_t result = svcWaitSynchronization(&index, handles, count, timeout);

  if (!result) {
    *output = index;
  }
  else if ((result & 0x3fffff) == 0xea01) {
    *output = -1;
  }
  else if ((result & 0x3fffff) == 0xec01) {
    *output = -2;
  }
  else {
    AbortWaitAnyResult(&result);
  }

  return {0};
}

int MultiWaitImpl::ConstructObjectsArray(uint32_t* handles,
                                         MultiWaitHolderBase** outputs,
                                         int capacity) {
  int count = 0;

  for (auto* node = holders.previous; node != &holders; node = node->previous) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);
    uint32_t handle = 0;

    if (holder->dispatch->get_native_handle(holder, &handle)) {
      if (count >= capacity) {
        AbortWaitAny();
      }

      handles[count] = handle;
      outputs[count] = holder;
      ++count;
    }
  }

  return count;
}

MultiWaitHolderBase* MultiWaitImpl::RecalcMultiWaitTimeout(TimeSpan* output,
                                                           TimeSpan deadline) {
  MultiWaitHolderBase* earliest = nullptr;
  int64_t end = deadline.nanoseconds;

  for (auto* node = holders.previous; node != &holders;) {
    auto* holder = reinterpret_cast<MultiWaitHolderBase*>(
      reinterpret_cast<uint8_t*>(node) - 8);
    int64_t time = holder->dispatch->get_absolute_time_to_wakeup(holder);

    if (time < end) {
      earliest = holder;
      end = time;
    }

    node = holder->multi_wait_node.previous;
  }

  output->nanoseconds =
    end < wait_time ? 0
                    : static_cast<int64_t>(uint64_t(end) - uint64_t(wait_time));
  return earliest;
}

template <>
Result MultiWaitImpl::InternalWaitAnyImpl<false>(
  MultiWaitHolderBase** output, int* output_index, bool infinite, TimeSpan time,
  uint32_t, Span<uint32_t> handles, int existing_count) {
  MultiWaitHolderBase* objects[64];
  *output_index = -1;
  int added =
    ConstructObjectsArray(handles.data + existing_count,
                          objects + existing_count, 64 - existing_count);
  int total = added + existing_count;
  int64_t now = ReadTime();
  bool indefinite = infinite || (now ^ INT64_MAX) < time.nanoseconds;
  int64_t end =
    indefinite
      ? INT64_MAX
      : static_cast<int64_t>(uint64_t(now) + uint64_t(time.nanoseconds));

  for (;;) {
    wait_time = ReadTime();
    TimeSpan remaining;
    auto* earliest = RecalcMultiWaitTimeout(&remaining, {end});
    int index = 0;
    Result result;

    if (!earliest && indefinite) {
      result =
        platform.WaitSynchronizationN(&index, total, handles.data, 64, -1);
    }
    else if (total || remaining.nanoseconds != 0) {
      int64_t timeout = remaining.nanoseconds < 0 ? 0 : remaining.nanoseconds;
      result =
        platform.WaitSynchronizationN(&index, total, handles.data, 64, timeout);
    }
    else {
      index = -1;
      result = {0};
    }

    if (index == -2) {
      lock.Enter();
      auto* selected = signaled_holder;

      if (selected) {
        *output = selected;
        lock.Leave();
        return result;
      }

      lock.Leave();
      continue;
    }

    if (index == -1) {
      if (!earliest) {
        *output = nullptr;
        return result;
      }

      wait_time = ReadTime();

      if (earliest->dispatch->is_signaled(earliest) == 1) {
        lock.Enter();
        signaled_holder = earliest;
        *output = earliest;
        lock.Leave();
        return result;
      }

      continue;
    }

    if (index == -3) {
      *output = nullptr;
      return result;
    }

    if (index < existing_count) {
      *output_index = index;
      *output = nullptr;
      return result;
    }

    lock.Enter();
    auto* selected = objects[index];
    signaled_holder = selected;
    *output = selected;
    lock.Leave();
    return result;
  }
}

template <>
Result MultiWaitImpl::WaitAnyImpl<false>(MultiWaitHolderBase** output,
                                         int* output_index, bool infinite,
                                         TimeSpan time, uint32_t reply_target,
                                         Span<uint32_t> handles,
                                         int existing_count) {
  signaled_holder = nullptr;
  platform.thread_handle = CurrentThread()->handle;
  auto* initial = AddToEachObjectListAndCheckObjectState();
  lock.Enter();
  auto* selected = signaled_holder ? signaled_holder : initial;
  lock.Leave();
  Result result = {0};

  if (!selected) {
    result = InternalWaitAnyImpl<false>(&selected, output_index, infinite, time,
                                        reply_target, handles, existing_count);
  }

  RemoveFromEachObjectList();
  platform.thread_handle = 0;
  *output = selected;
  return result;
}

}

namespace nn::os {

void InitializeMultiWaitHolder(MultiWaitHolderType* storage, uint32_t handle) {
  auto* holder =
    reinterpret_cast<detail::MultiWaitHolderOfNativeHandle*>(storage);
  holder->owner = nullptr;
  holder->handle = 0;
  holder->reserved = 0;
  holder->multi_wait_node.next = &holder->multi_wait_node;
  holder->multi_wait_node.previous = &holder->multi_wait_node;
  holder->object_node.next = &holder->object_node;
  holder->object_node.previous = &holder->object_node;
  holder->handle = handle;
  holder->user_data = 0;
  holder->dispatch = reinterpret_cast<const detail::MultiWaitHolderDispatch*>(
    detail::NativeHolderVtable + 2);
}

MultiWaitHolderType* WaitAny(MultiWaitType* wait) {
  uint32_t handles[64];
  detail::MultiWaitHolderBase* output = nullptr;
  int index = 0;
  wait->implementation.WaitAnyImpl<false>(&output, &index, true, {INT64_MAX}, 0,
                                          {handles, 64}, 0);
  return reinterpret_cast<MultiWaitHolderType*>(output);
}

MultiWaitHolderType* TryWaitAny(MultiWaitType* wait) {
  uint32_t handles[64];
  detail::MultiWaitHolderBase* output = nullptr;
  int index = 0;
  wait->implementation.WaitAnyImpl<false>(&output, &index, false, {0}, 0,
                                          {handles, 64}, 0);
  return reinterpret_cast<MultiWaitHolderType*>(output);
}

MultiWaitHolderType* TimedWaitAny(MultiWaitType* wait, TimeSpan timeout) {
  uint32_t handles[64];
  detail::MultiWaitHolderBase* output = nullptr;
  int index = 0;
  wait->implementation.WaitAnyImpl<false>(&output, &index, false, timeout, 0,
                                          {handles, 64}, 0);
  return reinterpret_cast<MultiWaitHolderType*>(output);
}

}
