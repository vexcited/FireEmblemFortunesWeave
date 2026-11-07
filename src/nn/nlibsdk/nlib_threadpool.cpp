#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <atomic>


extern "C" {

typedef void (*nlib_thread_func)(void* argument);

struct nlib_semaphore {
  uint64_t storage[5];
};

struct nlib_timerspec {
  int64_t dueTime;
  int64_t interval;
};

void* nnmem_nlib_malloc(size_t size);
void nnmem_nlib_free(void* pointer);
int nnmem_nlib_sleep(int64_t duration);
int nnmem_nlib_thread_getconcurrency(unsigned int* pOutConcurrency);
int nnmem_nlib_semaphore_init(nlib_semaphore* semaphore, int count);
int nnmem_nlib_semaphore_destroy(nlib_semaphore* semaphore);
int nnmem_nlib_semaphore_wait(nlib_semaphore* semaphore);
int nnmem_nlib_semaphore_post(nlib_semaphore* semaphore,
  int* pOutPreviousCount);
int nnmem_nlib_timer_create(uint32_t* pOutTimer,
  void (*callback)(uint32_t timer, void* parameter), void* parameter,
  uint32_t flags);
int nnmem_nlib_timer_settime(uint32_t timer, const nlib_timerspec* value,
  nlib_timerspec* pOutOldValue);
int nnmem_nlib_timer_delete(uint32_t timer, int wait,
  void (*finalizer)(uint32_t timer, void* parameter));
int nnmem_nlib_timer_gettime(uint32_t timer, nlib_timerspec* pOutValue);
int nnmem_nlib_ticktime(int64_t* pOutTime);
int nnmem_nlib_epochtime(int64_t* pOutTime);
int nnmem_nlib_thread_create(unsigned long* pOutThread, const void* attribute,
  nlib_thread_func function, void* argument);
int nnmem_nlib_thread_setname(unsigned long thread, const char* name);
int nnmem_nlib_thread_detach(unsigned long thread);
int nnmem_nlib_thread_priority_default(int* pOutPriority);
int nnmem_nlib_thread_setpriority(unsigned long thread, int priority);
int nnmem_nlib_thread_setaffinity(unsigned long thread, uint32_t affinity);
int nnmem_nlib_cond_wait_until(void* condition, void* mutex,
  int64_t deadline);
// Each worker thread keeps its state under this key.
[[gnu::visibility("hidden")]] uint32_t ThreadPoolNotificationKey =
  UINT32_MAX;

}

template <size_t N>
int nnmem_nlib_snprintf(size_t* pOutCount, char (&buffer)[N],
  const char* format, ...);

namespace {

// The SDK threading types differ from the C library headers.
int CallOnce(int* once, void (*function)()) asm("pthread_once");
int CreateKey(uint32_t* pOutKey, void (*destructor)(void*))
  asm("pthread_key_create");
void* GetSpecific(uint32_t key) asm("pthread_getspecific");
int SetSpecific(uint32_t key, const void* value) asm("pthread_setspecific");
int InitializeMutex(void* mutex, const void* attribute)
  asm("pthread_mutex_init");
int DestroyMutex(void* mutex) asm("pthread_mutex_destroy");
int LockMutex(void* mutex) asm("pthread_mutex_lock");
int UnlockMutex(void* mutex) asm("pthread_mutex_unlock");
int InitializeCondition(void* condition, const void* attribute)
  asm("pthread_cond_init");
int DestroyCondition(void* condition) asm("pthread_cond_destroy");
int BroadcastCondition(void* condition) asm("pthread_cond_broadcast");
int TryLockMutex(void* mutex) asm("pthread_mutex_trylock");
int SignalCondition(void* condition) asm("pthread_cond_signal");
int WaitCondition(void* condition, void* mutex) asm("pthread_cond_wait");
unsigned long GetSelf() asm("pthread_self");

constexpr int EBadF = 9;
constexpr int ENoMem = 12;
constexpr int EInval = 22;
constexpr int PriorityCount = 3;
constexpr int PriorityMask = 3;
constexpr int SubmitLongRunning = 4;
constexpr uint32_t TaskLongRunning = 1;
// Tasks on the stack of a waiting caller are not freed by the pool.
constexpr uint32_t TaskNotOwned = 0x80000000;
constexpr size_t DefaultMaximumThreads = 64;
constexpr size_t ApplyTaskCount = 64;
constexpr int DefaultPoolAttempts = 10;
constexpr int64_t DefaultPoolRetryDelay = 10000;
constexpr int ETimedOut = 110;

// Times are in units of 100 nanoseconds.
constexpr int64_t RecentActivity = 320000;
constexpr int64_t IdleTimeout = 10000000;
constexpr int64_t RetiredTimeout = 600000000;
constexpr int64_t SteadyInterval = 16666667;
constexpr int64_t GrowInterval = 10000;
constexpr int64_t ShrinkInterval = 40000;
constexpr int64_t IdleInterval = 333334;
constexpr int64_t RetryInterval = 166667;
constexpr int64_t DrainInterval = 500001;
constexpr int SettimeRetries = 60;

enum WorkerState {
  WorkerIdle = 1,
  WorkerRunning = 2,
  WorkerRetiring = 3,
  WorkerExited = 4,
};

struct ThreadPool;

struct Worker {
  Worker* next;
  int32_t state;
  int64_t lastActiveTime;
  ThreadPool* pool;
  uint32_t isRunning;
  uint32_t isBlocking;
  uint32_t isLongRunning;
};

struct Task {
  Task* next;
  nlib_thread_func function;
  void* argument;
  uint32_t flags;
};

struct TaskQueue {
  Task* head;
  Task* tail;
};

struct ThreadPool {
  uint32_t timer;
  Worker* workers;
  uint32_t mutex[2];
  uint32_t condition[2];
  TaskQueue queues[PriorityCount];
  size_t minimumThreads;
  size_t maximumThreads;
  unsigned int concurrency;
  uint32_t isDestroyed;
};

struct SyncContext {
  nlib_thread_func function;
  void* argument;
  nlib_semaphore semaphore;
};

struct ApplyContext {
  void (*function)(void* argument, size_t index);
  void* argument;
  size_t count;
  size_t next;
  size_t remaining;
  nlib_semaphore semaphore;
};

int g_KeyOnce;
std::atomic<ThreadPool*> g_DefaultPool;
// Retired worker threads wait a while to be handed a new worker.
int32_t g_RetiredCount;
uint32_t g_WorkerNameCount;
Worker* g_HandedWorker;
uint32_t g_RetiredMutex[2] = {1, 0};
uint32_t g_RetiredCondition[2] = {1, 0};

void InitializeKey() {
  if (CreateKey(&ThreadPoolNotificationKey, nullptr) == 0) {
    SetSpecific(ThreadPoolNotificationKey, nullptr);
  }
}

// A worker that waits on the pool lock is not counted as running.
void SetBlocking(bool isBlocking) {
  if (ThreadPoolNotificationKey != UINT32_MAX) {
    Worker* worker = static_cast<Worker*>(
      GetSpecific(ThreadPoolNotificationKey));
    if (worker != nullptr) {
      worker->isBlocking = isBlocking;
    }
  }
}

void Lock(ThreadPool* pool) {
  SetBlocking(true);
  LockMutex(pool->mutex);
  SetBlocking(false);
}

void Append(TaskQueue* queue, Task* first, Task* last) {
  Task* tail = queue->tail;
  if (tail != nullptr) {
    queue->tail = last;
    tail->next = first;
  }
  else {
    queue->head = first;
    queue->tail = last;
  }
}

void FreeTasks(Task* task) {
  while (task != nullptr) {
    Task* next = task->next;
    if ((task->flags & TaskNotOwned) == 0) {
      nnmem_nlib_free(task);
    }
    task = next;
  }
}

Task* PopTask(ThreadPool* pool, Worker* worker) {
  for (int i = 0; i < PriorityCount; ++i) {
    TaskQueue* queue = &pool->queues[i];
    Task* task = queue->head;
    if (task != nullptr) {
      worker->state = WorkerRunning;
      Task* next = task->next;
      if (next != nullptr) {
        queue->head = next;
        task->next = nullptr;
      }
      else {
        queue->head = nullptr;
        queue->tail = nullptr;
      }
      return task;
    }
  }
  return nullptr;
}

// A retired thread keeps waiting for a handed worker until its deadline.
void RunWorker(void* argument) {
  Worker* worker = static_cast<Worker*>(argument);
  unsigned long self = GetSelf();
  nnmem_nlib_thread_setname(self, "nlib_tp_worker");
  for (;;) {
    SetSpecific(ThreadPoolNotificationKey, worker);
    worker->state = WorkerIdle;
    ThreadPool* pool = worker->pool;
    Lock(pool);
    while (worker->state != WorkerRetiring) {
      Task* task = PopTask(pool, worker);
      if (task != nullptr) {
        UnlockMutex(pool->mutex);
        nnmem_nlib_ticktime(&worker->lastActiveTime);
        worker->isLongRunning = task->flags & TaskLongRunning;
        task->function(task->argument);
        if ((task->flags & TaskNotOwned) == 0) {
          nnmem_nlib_free(task);
        }
        int priority = 0;
        if (nnmem_nlib_thread_priority_default(&priority) == 0) {
          nnmem_nlib_thread_setpriority(self, priority);
        }
        nnmem_nlib_thread_setaffinity(self, UINT32_MAX);
        Lock(pool);
      }
      else {
        if (worker->state != WorkerIdle) {
          nnmem_nlib_ticktime(&worker->lastActiveTime);
          worker->state = WorkerIdle;
        }
        SetBlocking(true);
        WaitCondition(pool->condition, pool->mutex);
        SetBlocking(false);
      }
    }
    UnlockMutex(pool->mutex);

    int64_t deadline = 0;
    if (nnmem_nlib_epochtime(&deadline) != 0) {
      return;
    }
    deadline += RetiredTimeout;
    SetBlocking(true);
    LockMutex(g_RetiredMutex);
    SetBlocking(false);
    ++g_RetiredCount;
    Worker* handed;
    for (;;) {
      handed = g_HandedWorker;
      if (handed != nullptr) {
        break;
      }
      if (nnmem_nlib_cond_wait_until(g_RetiredCondition, g_RetiredMutex,
        deadline) == ETimedOut) {
        worker->state = WorkerExited;
        --g_RetiredCount;
        UnlockMutex(g_RetiredMutex);
        return;
      }
    }
    g_HandedWorker = nullptr;
    UnlockMutex(g_RetiredMutex);
    worker = handed;
  }
}

void AddWorker(ThreadPool* pool, Worker* worker) {
  worker->next = pool->workers;
  pool->workers = worker;
}

// A retired thread takes the worker over when one is waiting.
int StartWorker(ThreadPool* pool) {
  Worker* worker = static_cast<Worker*>(nnmem_nlib_malloc(sizeof(Worker)));
  if (worker == nullptr) {
    return ENoMem;
  }
  unsigned long thread = 0;
  *worker = {};
  worker->pool = pool;
  std::atomic_thread_fence(std::memory_order_acquire);
  if (g_RetiredCount >= 1 && g_HandedWorker == nullptr &&
    TryLockMutex(g_RetiredMutex) == 0) {
    if (g_RetiredCount >= 1 && g_HandedWorker == nullptr) {
      g_HandedWorker = worker;
      AddWorker(pool, worker);
      SignalCondition(g_RetiredCondition);
      UnlockMutex(g_RetiredMutex);
      return 0;
    }
    UnlockMutex(g_RetiredMutex);
  }

  int error = nnmem_nlib_thread_create(&thread, nullptr, RunWorker, worker);
  if (error != 0) {
    nnmem_nlib_free(worker);
    return error;
  }
  char name[32] = {};
  nnmem_nlib_snprintf(nullptr, name, "tp%u",
    __atomic_add_fetch(&g_WorkerNameCount, 1, __ATOMIC_RELAXED));
  nnmem_nlib_thread_setname(thread, name);
  nnmem_nlib_thread_detach(thread);
  AddWorker(pool, worker);
  return 0;
}

void RemoveWorker(ThreadPool* pool, Worker* previous, Worker* worker,
  Worker* next) {
  if (previous != nullptr) {
    previous->next = next;
  }
  else {
    pool->workers = next;
  }
  nnmem_nlib_free(worker);
}

void FinalizePool(uint32_t timer, void* parameter) {
  ThreadPool* pool = static_cast<ThreadPool*>(parameter);
  DestroyCondition(pool->condition);
  DestroyMutex(pool->mutex);
  nnmem_nlib_free(pool);
}

}

namespace nn::nlibsdk {

// The timer callback of a pool. It starts workers up to the minimum, adds one
// when all are busy, retires one idle for a second or when there are too
// many, and reschedules itself. A destroyed pool retires every worker and is
// freed once the list is empty.
void ManageThreadPoolWorkers(uint32_t timer, void* parameter) {
  ThreadPool* pool = static_cast<ThreadPool*>(parameter);
  Worker* worker = pool->workers;
  Worker* previous = nullptr;
  if (pool->isDestroyed == 0) {
    int64_t now = 0;
    if (nnmem_nlib_ticktime(&now) != 0) {
      now = INT64_MAX;
    }
    size_t count = 0;
    size_t idle = 0;
    size_t blocked = 0;
    size_t busy = 0;
    while (worker != nullptr) {
      Worker* next = worker->next;
      if (worker->state == WorkerExited) {
        RemoveWorker(pool, previous, worker, next);
      }
      else {
        ++count;
        if (worker->state == WorkerIdle) {
          ++idle;
        }
        if (worker->isBlocking != 0) {
          ++blocked;
        }
        else if (worker->isLongRunning != 0) {
          ++busy;
        }
        else if (worker->isRunning != 0 &&
          worker->lastActiveTime + RecentActivity >= now) {
          ++busy;
        }
        previous = worker;
      }
      worker = next;
    }

    int change = 0;
    if (count < pool->minimumThreads) {
      do {
        if (StartWorker(pool) != 0) {
          break;
        }
        ++count;
        ++change;
      } while (count < pool->minimumThreads);
    }
    else if (pool->minimumThreads < count &&
      (idle > 1 || busy + blocked + pool->concurrency < count)) {
      previous = nullptr;
      worker = pool->workers;
      while (worker != nullptr) {
        Worker* next = worker->next;
        if (worker->state == WorkerExited) {
          RemoveWorker(pool, previous, worker, next);
        }
        else if (worker->state == WorkerIdle &&
          worker->lastActiveTime + IdleTimeout < now) {
          worker->state = WorkerRetiring;
          BroadcastCondition(pool->condition);
          change = -1;
          break;
        }
        else {
          previous = worker;
        }
        worker = next;
      }
      if (worker == nullptr && idle == 0) {
        for (worker = pool->workers; worker != nullptr;
          worker = worker->next) {
          if (worker->state != WorkerRetiring &&
            worker->isLongRunning == 0) {
            worker->state = WorkerRetiring;
            change = -1;
            break;
          }
        }
      }
    }
    else if (idle == 0 && count < pool->maximumThreads &&
      busy + blocked + pool->concurrency > count) {
      if (StartWorker(pool) == 0) {
        ++count;
        change = 1;
      }
    }

    nlib_timerspec spec = {};
    if (pool->minimumThreads == pool->maximumThreads &&
      count == pool->minimumThreads) {
      spec.dueTime = SteadyInterval;
    }
    else if (change != 0) {
      spec.dueTime = change > 0 ? GrowInterval : ShrinkInterval;
    }
    else {
      int64_t interval = IdleInterval;
      if (idle == 0) {
        nnmem_nlib_timer_gettime(timer, &spec);
        if (spec.dueTime < interval) {
          interval = spec.dueTime + GrowInterval;
        }
      }
      spec.dueTime = interval;
    }
    if (nnmem_nlib_timer_settime(timer, &spec, nullptr) == 0) {
      return;
    }
    for (int i = 0;; ++i) {
      if (pool->isDestroyed != 0) {
        break;
      }
      nnmem_nlib_sleep(RetryInterval);
      if (nnmem_nlib_timer_settime(timer, &spec, nullptr) == 0 ||
        i >= SettimeRetries - 1) {
        return;
      }
    }
  }

  for (;;) {
    while (worker != nullptr) {
      Worker* next = worker->next;
      if (worker->state == WorkerExited) {
        RemoveWorker(pool, previous, worker, next);
      }
      else {
        worker->state = WorkerRetiring;
        previous = worker;
      }
      worker = next;
    }
    if (pool->workers == nullptr) {
      break;
    }
    BroadcastCondition(pool->condition);
    nlib_timerspec spec = {DrainInterval, 0};
    if (nnmem_nlib_timer_settime(timer, &spec, nullptr) == 0) {
      return;
    }
    nnmem_nlib_sleep(RetryInterval);
  }
  nnmem_nlib_timer_delete(timer, 0, FinalizePool);
}

}

extern "C" {

int nnmem_nlib_threadpool_create(ThreadPool** pOutPool, size_t minimum,
  size_t maximum) {
  if (pOutPool == nullptr || minimum > maximum ||
    maximum - 1 >= INT32_MAX) {
    return EInval;
  }

  CallOnce(&g_KeyOnce, InitializeKey);
  if (ThreadPoolNotificationKey == UINT32_MAX) {
    return ENoMem;
  }
  ThreadPool* pool = static_cast<ThreadPool*>(
    nnmem_nlib_malloc(sizeof(ThreadPool)));
  if (pool == nullptr) {
    return ENoMem;
  }

  *pOutPool = nullptr;
  memset(pool, 0, sizeof(ThreadPool));
  pool->minimumThreads = minimum;
  pool->maximumThreads = maximum;
  int error = InitializeMutex(pool->mutex, nullptr);
  if (error == 0) {
    error = InitializeCondition(pool->condition, nullptr);
    if (error == 0) {
      error = nnmem_nlib_timer_create(&pool->timer,
        nn::nlibsdk::ManageThreadPoolWorkers, pool, 0);
      if (error == 0) {
        if (nnmem_nlib_thread_getconcurrency(&pool->concurrency) != 0) {
          pool->concurrency = 1;
        }
        nlib_timerspec spec = {1, 0};
        error = nnmem_nlib_timer_settime(pool->timer, &spec, nullptr);
        if (error == 0) {
          *pOutPool = pool;
          return 0;
        }
        nnmem_nlib_timer_delete(pool->timer, 1, nullptr);
      }
      DestroyCondition(pool->condition);
    }
    DestroyMutex(pool->mutex);
  }
  nnmem_nlib_free(pool);
  return error;
}

// The queued tasks are dropped, the workers release the pool.
int nnmem_nlib_threadpool_destroy(ThreadPool* pool) {
  if (pool == nullptr) {
    return 0;
  }
  if (pool->isDestroyed != 0) {
    return EBadF;
  }

  Lock(pool);
  Task* tasks[PriorityCount];
  for (int i = 0; i < PriorityCount; ++i) {
    tasks[i] = pool->queues[i].head;
    pool->queues[i].head = nullptr;
    pool->queues[i].tail = nullptr;
  }
  pool->isDestroyed = 1;
  UnlockMutex(pool->mutex);

  for (int i = 0; i < PriorityCount; ++i) {
    FreeTasks(tasks[i]);
  }
  return 0;
}

}

namespace {

// The default pool is created on first use, retrying ten times with longer
// sleeps. A pool that loses the race is destroyed.
ThreadPool* GetPool(ThreadPool* pool) {
  if (pool != nullptr) {
    return pool;
  }
  pool = g_DefaultPool.load(std::memory_order_acquire);
  if (pool != nullptr) {
    return pool;
  }

  ThreadPool* created = nullptr;
  for (int i = 0;; ++i) {
    pool = g_DefaultPool.load(std::memory_order_acquire);
    if (pool != nullptr) {
      return pool;
    }
    if (nnmem_nlib_threadpool_create(&created, 0,
      DefaultMaximumThreads) == 0) {
      break;
    }
    nnmem_nlib_sleep(i * DefaultPoolRetryDelay);
    if (i == DefaultPoolAttempts - 1) {
      break;
    }
  }
  if (created == nullptr) {
    return g_DefaultPool.load(std::memory_order_acquire);
  }

  ThreadPool* expected = nullptr;
  if (!g_DefaultPool.compare_exchange_strong(expected, created)) {
    nnmem_nlib_threadpool_destroy(created);
    return g_DefaultPool.load(std::memory_order_acquire);
  }
  return g_DefaultPool.load(std::memory_order_relaxed);
}

void RunSyncTask(void* argument) {
  SyncContext* context = static_cast<SyncContext*>(argument);
  context->function(context->argument);
  nnmem_nlib_semaphore_post(&context->semaphore, nullptr);
}

// Each worker task takes indices until the count is reached.
void RunApplyTask(void* argument) {
  ApplyContext* context = static_cast<ApplyContext*>(argument);
  size_t count = context->count;
  for (;;) {
    size_t index = __atomic_fetch_add(&context->next, 1, __ATOMIC_RELAXED);
    if (index >= count) {
      break;
    }
    context->function(context->argument, index);
  }
  if (__atomic_fetch_sub(&context->remaining, 1, __ATOMIC_RELAXED) == 1) {
    nnmem_nlib_semaphore_post(&context->semaphore, nullptr);
  }
}

}

extern "C" {

int nnmem_nlib_threadpool_submit(ThreadPool* pool, nlib_thread_func function,
  void* argument, int flags) {
  pool = GetPool(pool);
  if (pool == nullptr) {
    return ENoMem;
  }
  if (function == nullptr) {
    return EInval;
  }
  if (pool->isDestroyed != 0) {
    return EBadF;
  }
  if ((flags & PriorityMask) == PriorityMask) {
    return EInval;
  }

  Task* task = static_cast<Task*>(nnmem_nlib_malloc(sizeof(Task)));
  if (task == nullptr) {
    return ENoMem;
  }
  task->function = function;
  task->argument = argument;
  task->flags = (flags & SubmitLongRunning) != 0 ? TaskLongRunning : 0;

  Lock(pool);
  task->next = nullptr;
  Append(&pool->queues[flags & PriorityMask], task, task);
  BroadcastCondition(pool->condition);
  UnlockMutex(pool->mutex);
  return 0;
}

// Runs the function for each index on up to 64 tasks queued at once.
int nnmem_nlib_threadpool_apply(ThreadPool* pool, size_t count,
  void (*function)(void* argument, size_t index), void* argument,
  int flags) {
  if (count <= 1) {
    if (count == 1) {
      function(argument, 0);
    }
    return 0;
  }
  int priority = flags & PriorityMask;
  if (priority == PriorityMask) {
    return EInval;
  }

  ApplyContext context = {};
  context.function = function;
  context.argument = argument;
  context.count = count;
  __atomic_store_n(&context.next, 0, __ATOMIC_RELEASE);
  unsigned int concurrency = 0;
  if (nnmem_nlib_thread_getconcurrency(&concurrency) != 0) {
    concurrency = 1;
  }
  size_t workers = count < concurrency ? count : concurrency;
  pool = GetPool(pool);
  size_t maximum = pool->maximumThreads;
  int error = nnmem_nlib_semaphore_init(&context.semaphore, 0);
  if (error != 0) {
    return error;
  }

  if (workers > maximum) {
    workers = maximum;
  }
  Task tasks[ApplyTaskCount];
  memset(tasks, 0, sizeof(tasks));
  size_t taskCount = workers < ApplyTaskCount ? workers : ApplyTaskCount;
  uint32_t taskFlags = TaskNotOwned |
    ((flags & SubmitLongRunning) != 0 ? TaskLongRunning : 0);
  for (size_t i = 0; i < taskCount; ++i) {
    tasks[i].function = RunApplyTask;
    tasks[i].argument = &context;
    tasks[i].flags = taskFlags;
    if (i != 0) {
      tasks[i].next = &tasks[i - 1];
    }
  }

  Lock(pool);
  Append(&pool->queues[priority], &tasks[taskCount - 1], &tasks[0]);
  __atomic_store_n(&context.remaining, taskCount, __ATOMIC_RELEASE);
  BroadcastCondition(pool->condition);
  UnlockMutex(pool->mutex);
  nnmem_nlib_semaphore_wait(&context.semaphore);
  nnmem_nlib_semaphore_destroy(&context.semaphore);
  return 0;
}

int nnmem_nlib_threadpool_submit_sync(ThreadPool* pool,
  nlib_thread_func function, void* argument, int flags) {
  if (function == nullptr) {
    return EInval;
  }
  int priority = flags & PriorityMask;
  if (priority == PriorityMask) {
    return EInval;
  }

  SyncContext context = {};
  int error = nnmem_nlib_semaphore_init(&context.semaphore, 0);
  if (error != 0) {
    return error;
  }
  context.function = function;
  context.argument = argument;
  Task task = {nullptr, RunSyncTask, &context, TaskNotOwned |
    ((flags & SubmitLongRunning) != 0 ? TaskLongRunning : 0)};

  pool = GetPool(pool);
  Lock(pool);
  Append(&pool->queues[priority], &task, &task);
  BroadcastCondition(pool->condition);
  UnlockMutex(pool->mutex);
  error = nnmem_nlib_semaphore_wait(&context.semaphore);
  nnmem_nlib_semaphore_destroy(&context.semaphore);
  return error;
}

}
