#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <memory>
#include <new>

#include "nn/nlibsdk/nlib_globals.hpp"
#include "nn/nlibsdk/posix_tls.hpp"

extern "C" {

typedef uint32_t nlib_timer;
typedef void (*nlib_timer_callback)(nlib_timer timer, void* parameter);
typedef void (*nlib_thread_func)(void* argument);

struct nlib_timerspec {
  int64_t dueTime;
  int64_t interval;
};

void* nnmem_nlib_malloc(size_t size);
void* nnmem_nlib_realloc(void* pointer, size_t size);
void nnmem_nlib_free(void* pointer);
int nnmem_nlib_ticktime(int64_t* pOutTime);
int nnmem_nlib_cond_wait_for(void* condition, void* mutex, int64_t duration);
int nnmem_nlib_thread_create(unsigned long* pOutThread, const void* attribute,
  nlib_thread_func function, void* argument);
int nnmem_nlib_thread_setname(unsigned long thread, const char* name);
int nnmem_nlib_thread_detach(unsigned long thread);

}

namespace {

int LockMutex(void* mutex) asm("pthread_mutex_lock");
int UnlockMutex(void* mutex) asm("pthread_mutex_unlock");
int WaitCondition(void* condition, void* mutex) asm("pthread_cond_wait");
int BroadcastCondition(void* condition) asm("pthread_cond_broadcast");
unsigned long GetSelf() asm("pthread_self");

constexpr int EBadF = 9;
constexpr int ENoMem = 12;
constexpr int EInval = 22;
constexpr size_t BucketCount = 127;
constexpr size_t MinimumHeapCapacity = 8;
// Runs the callback on the timer thread instead of a new thread.
constexpr uint32_t TimerRunInline = 1;

}

namespace nn::nlibsdk::detail {

struct Timer {
  nlib_timer id;
  nlib_timer_callback callback;
  // Null while a deleting caller waits, -1 when nothing is called.
  nlib_timer_callback finalizer;
  void* parameter;
  uint32_t flags;
  size_t heapIndex;
  Timer* hashNext;
  int64_t dueTime;
  nlib_timerspec value;
  uint32_t runningCount;
  uint32_t isDeleted;
};

struct TimerTable {
  Timer** buckets;
  size_t bucketCount;

  ~TimerTable() {
    nnmem_nlib_free(buckets);
  }

  Timer* Find(nlib_timer id) {
    for (Timer* timer = buckets[id % bucketCount]; timer != nullptr;
      timer = timer->hashNext) {
      if (timer->id == id) {
        return timer;
      }
    }
    return nullptr;
  }

  Timer* Remove(nlib_timer id) {
    Timer** link = &buckets[id % bucketCount];
    Timer* timer = *link;
    if (timer == nullptr) {
      return nullptr;
    }
    if (timer->id == id) {
      *link = timer->hashNext;
    }
    else {
      Timer* previous;
      do {
        previous = timer;
        timer = timer->hashNext;
        if (timer == nullptr) {
          return nullptr;
        }
      } while (timer->id != id);
      previous->hashNext = timer->hashNext;
    }
    timer->hashNext = nullptr;
    return timer;
  }
};

// A binary min heap on the due times, each timer knows its index.
struct TimerHeap {
  Timer** data;
  size_t size;
  size_t capacity;

  ~TimerHeap() {
    nnmem_nlib_free(data);
  }

  static size_t Parent(size_t index) {
    return (index + 1) / 2 - 1;
  }

  void Place(size_t index, Timer* timer) {
    data[index] = timer;
    timer->heapIndex = index;
  }

  void SiftUp(size_t index, Timer* timer) {
    while (index != 0) {
      size_t parent = Parent(index);
      Timer* above = data[parent];
      if (above->dueTime <= timer->dueTime) {
        break;
      }
      Place(index, above);
      index = parent;
    }
    Place(index, timer);
  }

  void SiftDown(size_t index, Timer* timer) {
    for (size_t child = index * 2 + 1; child < size;
      child = index * 2 + 1) {
      Timer* below = data[child];
      if (child + 1 < size && below->dueTime > data[child + 1]->dueTime) {
        ++child;
        below = data[child];
      }
      if (timer->dueTime <= below->dueTime) {
        break;
      }
      Place(index, below);
      index = child;
    }
    Place(index, timer);
  }

  bool Contains(Timer* timer) {
    size_t index = timer->heapIndex;
    return index < size && data[index] == timer;
  }

  [[gnu::noinline]] void Update(Timer* timer) {
    if (!Contains(timer)) {
      return;
    }
    size_t index = timer->heapIndex;
    if (index != 0 && data[Parent(index)]->dueTime > timer->dueTime) {
      SiftUp(index, timer);
    }
    else {
      SiftDown(index, timer);
    }
  }

  [[gnu::noinline]] int Push(Timer* timer) {
    if (size == capacity) {
      size_t grown = size * 2;
      if (grown <= MinimumHeapCapacity) {
        grown = MinimumHeapCapacity;
      }
      Timer** grownData = static_cast<Timer**>(
        nnmem_nlib_realloc(data, grown * sizeof(Timer*)));
      if (grownData == nullptr) {
        return ENoMem;
      }
      capacity = grown;
      data = grownData;
    }
    SiftUp(size++, timer);
    return 0;
  }

  void Shrink() {
    if (capacity > MinimumHeapCapacity && size <= capacity / 4) {
      size_t shrunk = capacity / 2;
      Timer** shrunkData = static_cast<Timer**>(
        nnmem_nlib_realloc(data, shrunk * sizeof(Timer*)));
      if (shrunkData != nullptr) {
        data = shrunkData;
        capacity = shrunk;
      }
    }
  }

  void Pop() {
    Timer* last = data[--size];
    Shrink();
    SiftDown(0, last);
  }

  void RemoveAt(size_t index) {
    --size;
    Shrink();
    if (index != size) {
      Timer* last = data[size];
      last->heapIndex = index;
      data[index] = last;
      Update(last);
    }
  }

  void Clear() {
    nnmem_nlib_free(data);
    data = nullptr;
    size = 0;
    capacity = 0;
  }
};

}

namespace {

using nn::nlibsdk::NotifyThreadPool;
using nn::nlibsdk::detail::g_LogTimerData;
using nn::nlibsdk::detail::g_LogTimerState;
using nn::nlibsdk::detail::Timer;
using nn::nlibsdk::detail::TimerHeap;
using nn::nlibsdk::detail::TimerTable;

const nlib_timer_callback NoFinalizer =
  reinterpret_cast<nlib_timer_callback>(-1);

void Lock() {
  NotifyThreadPool(1, 1);
  LockMutex(g_LogTimerData.timerMutex);
  NotifyThreadPool(1, 0);
}

void Unlock() {
  UnlockMutex(g_LogTimerData.timerMutex);
}

void Arm(Timer* timer, int64_t now, int64_t dueTime, int64_t interval) {
  timer->value.dueTime = dueTime;
  timer->value.interval = interval;
  timer->dueTime = now + dueTime;
}

// The timer thread waits for the earliest due time.
void WakeIfFirst(Timer* timer) {
  if (g_LogTimerState.timerHeap->data[0] == timer) {
    BroadcastCondition(g_LogTimerData.timerCondition);
  }
}

void Finalize(Timer* timer) {
  nlib_timer_callback finalizer = timer->finalizer;
  if (finalizer != NoFinalizer) {
    if (finalizer == nullptr) {
      BroadcastCondition(g_LogTimerData.timerIdleCondition);
      return;
    }
    finalizer(timer->id, timer->parameter);
  }
  nnmem_nlib_free(timer);
}

// The last run of a deleted timer finalizes it.
void RunTimer(void* argument) {
  Timer* timer = static_cast<Timer*>(argument);
  if (timer->isDeleted == 0) {
    timer->callback(timer->id, timer->parameter);
  }
  if ((timer->flags & TimerRunInline) != 0) {
    return;
  }
  Lock();
  if (--timer->runningCount != 0 || timer->isDeleted == 0) {
    Unlock();
    return;
  }
  Unlock();
  Finalize(timer);
}

void RunTimerThread(void*) {
  nnmem_nlib_thread_setname(GetSelf(), "nlib_timer");
  Lock();
  while ((g_LogTimerState.isTimerStopping & 1) == 0) {
    TimerHeap* heap = g_LogTimerState.timerHeap;
    if (heap->size == 0) {
      NotifyThreadPool(1, 1);
      WaitCondition(g_LogTimerData.timerCondition, g_LogTimerData.timerMutex);
      NotifyThreadPool(1, 0);
      continue;
    }
    int64_t now = 0;
    nnmem_nlib_ticktime(&now);
    heap = g_LogTimerState.timerHeap;
    int64_t wait = heap->data[0]->dueTime - now;
    if (wait > 0) {
      nnmem_nlib_cond_wait_for(g_LogTimerData.timerCondition,
        g_LogTimerData.timerMutex, wait);
      continue;
    }

    Timer* timer = heap->data[0];
    if (timer->value.interval != 0) {
      now = 0;
      if (nnmem_nlib_ticktime(&now) == 0) {
        timer->dueTime += timer->value.interval;
      }
      else {
        timer->dueTime = now + timer->value.interval;
      }
      g_LogTimerState.timerHeap->Update(timer);
    }
    else {
      heap->Pop();
    }
    ++timer->runningCount;
    Unlock();

    if ((timer->flags & TimerRunInline) != 0) {
      RunTimer(timer);
      Lock();
      if (--timer->runningCount != 0 || timer->isDeleted == 0) {
        continue;
      }
      Unlock();
      Finalize(timer);
    }
    else {
      unsigned long thread = 0;
      if (nnmem_nlib_thread_create(&thread, nullptr, RunTimer, timer) != 0) {
        RunTimer(timer);
      }
      else {
        nnmem_nlib_thread_detach(thread);
      }
    }
    Lock();
  }

  TimerHeap* heap = g_LogTimerState.timerHeap;
  for (size_t i = 0; i < heap->size; ++i) {
    Timer* timer = heap->data[i];
    g_LogTimerState.timerTable->Remove(timer->id);
    if (timer->runningCount == 0) {
      nnmem_nlib_free(timer);
    }
    else {
      timer->isDeleted = 1;
    }
  }
  heap->Clear();
  delete g_LogTimerState.timerTable;
  g_LogTimerState.timerTable = nullptr;
  delete g_LogTimerState.timerHeap;
  g_LogTimerState.timerHeap = nullptr;
  g_LogTimerState.timerThread = 0;
  g_LogTimerState.isTimerStopping = 0;
  Unlock();
}

// Owns the heap until the timer thread starts. Unlike the table, its
// destructor stays out of line in the original.
struct TimerHeapOwner {
  TimerHeap* heap;

  [[gnu::noinline]] ~TimerHeapOwner() {
    TimerHeap* owned = heap;
    heap = nullptr;
    delete owned;
  }
};

// The table, the heap and the timer thread are created on first use.
int StartTimerThread() {
  Lock();
  if (g_LogTimerState.timerThread != 0) {
    Unlock();
    return 0;
  }
  std::unique_ptr<TimerTable> table(new (std::nothrow) TimerTable());
  if (table == nullptr) {
    Unlock();
    return ENoMem;
  }
  Timer** buckets = static_cast<Timer**>(
    nnmem_nlib_malloc(BucketCount * sizeof(Timer*)));
  if (buckets == nullptr) {
    Unlock();
    return ENoMem;
  }
  memset(buckets, 0, BucketCount * sizeof(Timer*));
  table->buckets = buckets;
  table->bucketCount = BucketCount;

  TimerHeapOwner heap = {new (std::nothrow) TimerHeap()};
  int error = ENoMem;
  if (heap.heap != nullptr) {
    error = nnmem_nlib_thread_create(&g_LogTimerState.timerThread, nullptr,
      RunTimerThread, nullptr);
  }
  if (error != 0) {
    Unlock();
    return error;
  }
  nnmem_nlib_thread_detach(g_LogTimerState.timerThread);
  g_LogTimerState.timerTable = table.release();
  g_LogTimerState.timerHeap = heap.heap;
  heap.heap = nullptr;
  Unlock();
  return 0;
}

}

extern "C" {

int nnmem_nlib_timer_create(nlib_timer* pOutTimer,
  nlib_timer_callback callback, void* parameter, uint32_t flags) {
  if (pOutTimer == nullptr || callback == nullptr) {
    return EInval;
  }
  if (g_LogTimerState.timerThread == 0) {
    int error = StartTimerThread();
    if (error != 0) {
      return error;
    }
  }
  Timer* timer = static_cast<Timer*>(nnmem_nlib_malloc(sizeof(Timer)));
  if (timer == nullptr) {
    return ENoMem;
  }
  memset(timer, 0, sizeof(Timer));
  timer->callback = callback;
  timer->parameter = parameter;
  timer->flags = flags;

  Lock();
  nlib_timer id = g_LogTimerData.nextTimerId;
  timer->id = id;
  if (++g_LogTimerData.nextTimerId == 0) {
    g_LogTimerData.nextTimerId = 1;
  }
  TimerTable* table = g_LogTimerState.timerTable;
  Timer** bucket = &table->buckets[id % table->bucketCount];
  timer->hashNext = *bucket;
  *bucket = timer;
  *pOutTimer = id;
  Unlock();
  return 0;
}

int nnmem_nlib_timer_settime(nlib_timer timer, const nlib_timerspec* value,
  nlib_timerspec* pOutOldValue) {
  if (value == nullptr) {
    return EInval;
  }
  int64_t interval = value->interval;
  if (interval < 0) {
    return EInval;
  }
  int64_t dueTime = value->dueTime;
  if (dueTime < 0) {
    return EInval;
  }

  Lock();
  TimerTable* table = g_LogTimerState.timerTable;
  Timer* entry = table != nullptr ? table->Find(timer) : nullptr;
  if (entry == nullptr) {
    Unlock();
    return EBadF;
  }
  if (pOutOldValue != nullptr) {
    *pOutOldValue = entry->value;
  }

  int64_t now = 0;
  TimerHeap* heap = g_LogTimerState.timerHeap;
  bool isActive = (interval | dueTime) != 0;
  if (heap->Contains(entry)) {
    if (isActive) {
      int error = nnmem_nlib_ticktime(&now);
      if (error != 0) {
        Unlock();
        return error;
      }
      Arm(entry, now, dueTime, interval);
      g_LogTimerState.timerHeap->Update(entry);
      WakeIfFirst(entry);
      Unlock();
      return 0;
    }
    heap->RemoveAt(entry->heapIndex);
    Unlock();
    entry->value.dueTime = 0;
    entry->value.interval = 0;
    return 0;
  }
  if (!isActive) {
    Unlock();
    return 0;
  }
  int error = nnmem_nlib_ticktime(&now);
  if (error != 0) {
    Unlock();
    return error;
  }
  Arm(entry, now, dueTime, interval);
  error = g_LogTimerState.timerHeap->Push(entry);
  WakeIfFirst(entry);
  Unlock();
  return error;
}

int nnmem_nlib_timer_gettime(nlib_timer timer, nlib_timerspec* pOutValue) {
  if (pOutValue == nullptr) {
    return EInval;
  }
  Lock();
  Timer* entry = g_LogTimerState.timerTable->Find(timer);
  int error = EBadF;
  if (entry != nullptr) {
    *pOutValue = entry->value;
    error = 0;
  }
  Unlock();
  return error;
}

// Without waiting, a running timer is finalized by its last run.
int nnmem_nlib_timer_delete(nlib_timer timer, int wait,
  nlib_timer_callback finalizer) {
  Lock();
  Timer* entry = g_LogTimerState.timerTable->Remove(timer);
  if (entry == nullptr) {
    Unlock();
    return EBadF;
  }
  TimerHeap* heap = g_LogTimerState.timerHeap;
  if (heap->Contains(entry)) {
    heap->RemoveAt(entry->heapIndex);
  }
  entry->isDeleted = 1;
  if (wait != 0) {
    while (entry->runningCount != 0) {
      NotifyThreadPool(1, 1);
      WaitCondition(g_LogTimerData.timerIdleCondition,
        g_LogTimerData.timerMutex);
      NotifyThreadPool(1, 0);
    }
  }
  else if (entry->runningCount != 0) {
    entry->finalizer = finalizer != nullptr ? finalizer : NoFinalizer;
    Unlock();
    return 0;
  }
  Unlock();
  if (finalizer != nullptr) {
    finalizer(entry->id, entry->parameter);
  }
  nnmem_nlib_free(entry);
  return 0;
}

}
