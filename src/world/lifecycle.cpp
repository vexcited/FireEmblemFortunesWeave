#include "world/lifecycle.hpp"

namespace fw::world {

uint32_t CreateThread(
  void* thread, void (*entry)(void*), void* argument, void* stack,
  size_t stack_size, int32_t priority
);
uint32_t CreateThreadOnCore(
  void* thread, void (*entry)(void*), void* argument, void* stack,
  size_t stack_size, int32_t priority, int32_t core
);
void SetThreadCoreMask(void* thread, int32_t core, uint64_t mask);
void SetThreadName(void* thread, const char* name);
void WaitThread(void* thread);
void DestroyThread(void* thread);
void RegisterWorker(void* registry, Worker* worker);
void UnregisterWorker(void* registry, uint64_t id);
uintptr_t GetTlsValue(int32_t slot);
void SetTlsValue(int32_t slot, uintptr_t value);
void LockMutex(void* mutex);
void UnlockMutex(void* mutex);
void BroadcastCondition(void* condition);
void SignalLightEvent(void* event);
void FinalizeLightEvent(void* event);
void DestroyJobHeap(void* heap);
void DestroyMemoryResource(void* resource);

namespace {

struct JobHeap {
  uintptr_t vtable;
  size_t alignment;
  size_t size;
  void* memory;
  unsigned char metadata[144];
  void* heap;
};

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

void Release(processing::SharedControl* control) {
  if (control != nullptr && __atomic_fetch_sub(
    &control->shared_owners, uint64_t{1}, __ATOMIC_ACQ_REL
  ) == 0) {
    control->vtable->destroy_object(control);
    processing::ReleaseWeak(control);
  }
}

void ClearWorkers(JobContext* context, Worker** begin, Worker** end) {
  while (end != begin) {
    Worker* worker = *--end;
    *end = nullptr;

    if (worker != nullptr) {
      DestroyWorker(worker);
      Free(worker);
    }
  }

  context->workers_end = begin;
}

}

void InitializeWorker(void* storage, uint64_t id, size_t stack_size) {
  Worker* worker = static_cast<Worker*>(storage);
  worker->stack_size = (stack_size + 4095) & ~size_t{4095};
  void* replacement = memory::g_heap_manager->Allocate(
    worker->stack_size, 4096, 0
  );
  void* previous = worker->stack;
  worker->stack = replacement;

  if (previous != nullptr) {
    Free(previous);
  }

  ThreadSettings settings = g_thread_settings(id);
  uint32_t result;

  if (settings.use_initial_core == 1) {
    result = CreateThreadOnCore(
      worker->thread, WorkerEntry, worker, worker->stack, worker->stack_size,
      settings.priority, settings.initial_core
    );
  }
  else {
    result = CreateThread(
      worker->thread, WorkerEntry, worker, worker->stack, worker->stack_size,
      settings.priority
    );
  }

  if (result == 0) {
    if (settings.use_core_mask == 1) {
      SetThreadCoreMask(
        worker->thread, settings.ideal_core, settings.core_mask
      );
    }

    bool allocated = (settings.name.words[0] & 1) != 0;
    size_t length = allocated ? settings.name.words[1] :
      static_cast<uint8_t>(settings.name.words[0]) >> 1;

    if (length != 0) {
      const char* name = allocated ?
        reinterpret_cast<const char*>(settings.name.words[2]) :
        reinterpret_cast<const char*>(&settings.name) + 1;
      SetThreadName(worker->thread, name);
    }

    worker->id = id;
    RegisterWorker(g_worker_registry, worker);
    worker->registered = 1;
  }

  if ((settings.name.words[0] & 1) != 0 && settings.name.words[2] != 0) {
    Free(reinterpret_cast<void*>(settings.name.words[2]));
  }
}

void WorkerEntry(void* storage) {
  Worker* worker = static_cast<Worker*>(storage);
  GetTlsValue(*g_worker_tls_slot);
  SetTlsValue(*g_worker_tls_slot, worker->id);
  worker->vtable->run(worker);
  GetTlsValue(*g_worker_tls_slot);
  SetTlsValue(*g_worker_tls_slot, 0);
}

void DestroyWorker(Worker* worker) {
  WaitThread(worker->thread);
  worker->registered = 0;
  UnregisterWorker(g_worker_registry, worker->id);
  worker->id = 0;
  DestroyThread(worker->thread);
  void* stack = worker->stack;
  worker->stack = nullptr;

  if (stack != nullptr) {
    Free(stack);
  }

  worker->stack_size = 0;
  Release(worker->control);
  stack = worker->stack;
  worker->stack = nullptr;
  worker->vtable = &g_worker_base_vtable;

  if (stack != nullptr) {
    Free(stack);
  }
}

void DeleteWorker(Worker* worker) {
  DestroyWorker(worker);
  Free(worker);
}

void RunWorker(Worker* worker) {
  for (Job* job = TakeJob(worker->queue, worker->index); job != nullptr;
       job = TakeJob(worker->queue, worker->index)) {
    uint32_t index = worker->index;
    job->vtable->run(job, index);
    TicketSlot* slot = &job->context->slots[job->ticket & 63];
    uint64_t bit = (uint64_t{1} << (index & 63)) & 0xffff;
    uint64_t mask = bit * 0x1000100000000;
    uint64_t previous = __atomic_fetch_xor(
      &slot->state, mask, __ATOMIC_ACQ_REL
    );

    if (((previous >> 32) & 0xffff) == bit) {
      slot->job->vtable->complete(slot->job);
      SignalLightEvent(slot->event);
      Job* completed = slot->job;
      slot->job = nullptr;

      if (completed != nullptr) {
        completed->vtable->delete_object(completed);
      }

      __atomic_store_n(&slot->state, uint64_t{0}, __ATOMIC_RELEASE);
    }
  }
}

void DestroyJobContext(JobContextStorage* storage) {
  JobContext* context = &storage->context;
  JobQueue* queue = context->queue;
  LockMutex(queue->mutex);

  if ((queue->stopped & 1) == 0) {
    queue->stopped = 1;
    BroadcastCondition(queue->work_condition);
  }

  UnlockMutex(queue->mutex);
  ClearWorkers(
    context, static_cast<Worker**>(context->workers_begin),
    static_cast<Worker**>(context->workers_end)
  );

  JobHeap* heap = static_cast<JobHeap*>(storage->heap);
  storage->heap = nullptr;

  if (heap != nullptr) {
    DestroyJobHeap(heap->heap);
    void* memory = heap->memory;
    heap->memory = nullptr;

    if (memory != nullptr) {
      Free(memory);
      memory = heap->memory;
      heap->size = 0;
      heap->memory = nullptr;

      if (memory != nullptr) {
        Free(memory);
      }
    }
    else {
      heap->size = 0;
      heap->memory = nullptr;
    }

    DestroyMemoryResource(heap);
    Free(heap);
  }

  if (context->workers_begin != nullptr) {
    if (context->workers_begin != context->workers_end) {
      ClearWorkers(
        context, static_cast<Worker**>(context->workers_begin),
        static_cast<Worker**>(context->workers_end)
      );
    }

    if (context->workers_begin != nullptr) {
      Free(context->workers_begin);
    }
  }

  for (size_t i = 64; i != 0; --i) {
    TicketSlot* slot = &context->slots[i - 1];
    FinalizeLightEvent(slot->event);
    Job* job = slot->job;
    slot->job = nullptr;

    if (job != nullptr) {
      job->vtable->delete_object(job);
    }
  }

  Release(reinterpret_cast<processing::SharedControl*>(context->unknown_18));
}

void DestroyQueueObject(processing::SharedControl* control) {
  DestroyQueue(reinterpret_cast<JobQueue*>(control + 1));
}

void DeleteQueueControl(processing::SharedControl* control) {
  Free(control);
}

}
