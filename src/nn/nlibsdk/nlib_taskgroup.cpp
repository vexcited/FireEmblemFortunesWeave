#include <stddef.h>
#include <stdint.h>

#include <atomic>

#include "nn/os/semaphore.hpp"

extern "C" {

struct nlib_threadpool_;
typedef void (*nlib_thread_func)(void* argument);

void* nnmem_nlib_malloc(size_t size);
void nnmem_nlib_free(void* pointer);
int nnmem_nlib_yield();
int nnmem_nlib_ticktime(int64_t* pOutTime);
int nnmem_nlib_semaphore_init(nn::os::SemaphoreType* semaphore, int count);
int nnmem_nlib_semaphore_destroy(nn::os::SemaphoreType* semaphore);
int nnmem_nlib_semaphore_wait(nn::os::SemaphoreType* semaphore);
int nnmem_nlib_semaphore_trywait_for(nn::os::SemaphoreType* semaphore,
  int64_t duration);
int nnmem_nlib_semaphore_post(nn::os::SemaphoreType* semaphore,
  int* pOutPreviousCount);
int nnmem_nlib_threadpool_submit(nlib_threadpool_* pool,
  nlib_thread_func function, void* argument, int flags);

}

namespace {

constexpr int ENoMem = 12;
constexpr int EInval = 22;
constexpr int ETimedOut = 110;

// A task to submit once the group becomes empty.
struct Continuation {
  Continuation* next;
  nlib_threadpool_* pool;
  nlib_thread_func function;
  void* argument;
  int flags;
};

struct TaskGroup {
  std::atomic<int32_t> count;
  std::atomic<Continuation*> continuations;
  nn::os::SemaphoreType semaphore;
};

struct GroupTask {
  TaskGroup* group;
  nlib_thread_func function;
  void* argument;
};

void FreeContinuations(Continuation* continuation) {
  while (continuation != nullptr) {
    Continuation* next = continuation->next;
    nnmem_nlib_free(continuation);
    continuation = next;
  }
}

}

extern "C" {

int nnmem_nlib_taskgroup_leave(TaskGroup* group);

int nnmem_nlib_taskgroup_create(TaskGroup** pOutGroup) {
  if (pOutGroup == nullptr) {
    return EInval;
  }

  TaskGroup* group = static_cast<TaskGroup*>(
    nnmem_nlib_malloc(sizeof(TaskGroup)));
  if (group == nullptr) {
    return ENoMem;
  }

  group->count.store(0, std::memory_order_release);
  group->continuations.store(nullptr, std::memory_order_release);
  int error = nnmem_nlib_semaphore_init(&group->semaphore, 0);
  if (error != 0) {
    nnmem_nlib_free(group);
    return error;
  }

  *pOutGroup = group;
  return 0;
}

int nnmem_nlib_taskgroup_destroy(TaskGroup* group) {
  if (group == nullptr) {
    return EInval;
  }

  group->continuations.store(reinterpret_cast<Continuation*>(0xdeadbeef),
    std::memory_order_release);
  nnmem_nlib_semaphore_destroy(&group->semaphore);
  nnmem_nlib_free(group);
  return 0;
}

int nnmem_nlib_taskgroup_enter(TaskGroup* group) {
  if (group == nullptr) {
    return EInval;
  }

  group->count.fetch_add(1, std::memory_order_relaxed);
  return 0;
}

// The last task leaving submits the continuations, retrying after a yield
// while the pool is out of memory.
int nnmem_nlib_taskgroup_leave(TaskGroup* group) {
  if (group == nullptr) {
    return EInval;
  }
  if (group->count.fetch_sub(1, std::memory_order_relaxed) > 1) {
    return 0;
  }

  Continuation* continuation =
    group->continuations.exchange(nullptr, std::memory_order_relaxed);
  nnmem_nlib_semaphore_post(&group->semaphore, nullptr);

  Continuation* submitted = nullptr;
  while (continuation != nullptr) {
    Continuation* next = continuation->next;
    int error = nnmem_nlib_threadpool_submit(continuation->pool,
      continuation->function, continuation->argument, continuation->flags);
    if (error == 0) {
      continuation->next = submitted;
      submitted = continuation;
      continuation = next;
      continue;
    }
    if (error != ENoMem) {
      FreeContinuations(continuation);
      FreeContinuations(submitted);
      return error;
    }
    FreeContinuations(submitted);
    submitted = nullptr;
    nnmem_nlib_yield();
  }

  FreeContinuations(submitted);
  return 0;
}

int nnmem_nlib_taskgroup_wait(TaskGroup* group) {
  if (group == nullptr) {
    return EInval;
  }

  std::atomic_thread_fence(std::memory_order_acquire);
  while (group->count.load(std::memory_order_acquire) > 0) {
    nnmem_nlib_semaphore_wait(&group->semaphore);
  }
  return 0;
}

// The elapsed time since the start is added to the duration on each step.
int nnmem_nlib_taskgroup_wait_for(TaskGroup* group, int64_t duration) {
  if (group == nullptr) {
    return EInval;
  }

  int64_t now = 0;
  int64_t start = 0;
  int error = nnmem_nlib_ticktime(&start);
  std::atomic_thread_fence(std::memory_order_acquire);
  if (error != 0) {
    while (group->count.load(std::memory_order_acquire) > 0) {
      if (nnmem_nlib_semaphore_trywait_for(&group->semaphore, duration) ==
        ETimedOut) {
        return ETimedOut;
      }
    }
    return 0;
  }

  while (group->count.load(std::memory_order_acquire) > 0) {
    error = nnmem_nlib_semaphore_trywait_for(&group->semaphore, duration);
    if (error == ETimedOut) {
      return error;
    }
    error = nnmem_nlib_ticktime(&now);
    duration += error == 0 ? start - now : 0;
  }
  return 0;
}

}

namespace {

void RunGroupTask(void* argument) {
  GroupTask* task = static_cast<GroupTask*>(argument);
  task->function(task->argument);
  nnmem_nlib_taskgroup_leave(task->group);
  nnmem_nlib_free(task);
}

}

extern "C" {

int nnmem_nlib_taskgroup_submit(TaskGroup* group, nlib_threadpool_* pool,
  nlib_thread_func function, void* argument, int flags) {
  if (group == nullptr) {
    return EInval;
  }

  group->count.fetch_add(1, std::memory_order_relaxed);
  GroupTask* task = static_cast<GroupTask*>(
    nnmem_nlib_malloc(sizeof(GroupTask)));
  int error;
  if (task == nullptr) {
    error = ENoMem;
  }
  else {
    task->function = function;
    task->argument = argument;
    task->group = group;
    error = nnmem_nlib_threadpool_submit(pool, RunGroupTask, task, flags);
    if (error == 0) {
      return 0;
    }
    nnmem_nlib_free(task);
  }
  nnmem_nlib_taskgroup_leave(group);
  return error;
}

// A group that empties while the continuation is pushed is entered and left
// again so that the continuation still runs.
int nnmem_nlib_taskgroup_then(TaskGroup* group, nlib_threadpool_* pool,
  nlib_thread_func function, void* argument, int flags) {
  if (group == nullptr) {
    return EInval;
  }

  Continuation* continuation = static_cast<Continuation*>(
    nnmem_nlib_malloc(sizeof(Continuation)));
  if (continuation == nullptr) {
    return ENoMem;
  }
  continuation->pool = pool;
  continuation->function = function;
  continuation->argument = argument;
  continuation->flags = flags;

  Continuation* head = group->continuations.load(std::memory_order_acquire);
  while (group->count.load(std::memory_order_acquire) != 0) {
    continuation->next = head;
    if (group->continuations.compare_exchange_strong(head, continuation)) {
      if (group->count.load(std::memory_order_acquire) == 0) {
        group->count.fetch_add(1, std::memory_order_relaxed);
        nnmem_nlib_taskgroup_leave(group);
      }
      return 0;
    }
  }

  int error = nnmem_nlib_threadpool_submit(pool, function, argument, flags);
  nnmem_nlib_free(continuation);
  return error;
}

}
