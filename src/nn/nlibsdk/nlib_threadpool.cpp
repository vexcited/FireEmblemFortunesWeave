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
// Each worker thread keeps its state under this key.
[[gnu::visibility("hidden")]] uint32_t ThreadPoolNotificationKey =
  UINT32_MAX;

}

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

struct Worker {
  Worker* next;
  int32_t state;
  int64_t lastActiveTime;
  uint8_t reserved[8];
  uint32_t isRunning;
  uint32_t isBlocking;
  uint32_t isWaiting;
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

}

namespace nn::nlibsdk {

// Starts and retires the workers, not reconstructed yet.
void ManageThreadPoolWorkers(uint32_t timer, void* pool);

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
  pool = GetPool(pool);
  size_t maximum = pool->maximumThreads;
  int error = nnmem_nlib_semaphore_init(&context.semaphore, 0);
  if (error != 0) {
    return error;
  }

  size_t workers = count < concurrency ? count : concurrency;
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
