#include "world/initialization.hpp"

extern "C" void* memset(void* destination, int value, size_t size);
extern "C" void* memcpy(void* destination, const void* source, size_t size);

namespace fw::world {

uint32_t GetCurrentCore();
uint64_t GetAvailableCores();
void InitializeLightEvent(void* event, uint32_t clear_mode, bool signaled);
void InitializeMutex(void* mutex, bool recursive, int32_t level);
void InitializeCondition(void* condition);
void* CreateJobHeap(
  void* memory, size_t size, uint32_t options, void* metadata
);
void InitializeWorker(void* worker, uint64_t id, size_t stack_size);
void StartWorkerThread(void* thread);
[[noreturn]] void WorkerVectorLengthError();
[[noreturn]] void AllocationSizeError();

namespace {

struct QueueControl {
  processing::SharedControl control;
  JobQueue queue;
};

static_assert(sizeof(QueueControl) == 192);
static_assert(offsetof(QueueControl, queue) == 24);

template<typename T>
T Read(void* pointer, size_t offset) {
  T result;
  __builtin_memcpy(&result, static_cast<unsigned char*>(pointer) + offset,
                   sizeof(result));
  return result;
}

template<typename T>
void Write(void* pointer, size_t offset, T value) {
  __builtin_memcpy(static_cast<unsigned char*>(pointer) + offset, &value,
                   sizeof(value));
}

void* Offset(void* pointer, size_t offset) {
  return static_cast<unsigned char*>(pointer) + offset;
}

void* Allocate(size_t size, size_t alignment = 16) {
  return memory::g_heap_manager->Allocate(size, alignment, 0);
}

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

void AppendWorker(JobContextStorage* storage, void* worker) {
  JobContext* context = &storage->context;
  uintptr_t begin = reinterpret_cast<uintptr_t>(context->workers_begin);
  uintptr_t end = reinterpret_cast<uintptr_t>(context->workers_end);
  uintptr_t capacity_end = reinterpret_cast<uintptr_t>(
    storage->workers_capacity_end
  );

  if (end < capacity_end) {
    *reinterpret_cast<void**>(end) = worker;
    context->workers_end = reinterpret_cast<void*>(end + 8);
    return;
  }

  uintptr_t bytes = end - begin;
  uint64_t count = static_cast<int64_t>(bytes) >> 3;
  uint64_t required = count + 1;

  if (required >> 61) {
    WorkerVectorLengthError();
  }

  uintptr_t capacity_bytes = capacity_end - begin;
  uint64_t capacity = static_cast<int64_t>(capacity_bytes) >> 2;

  if (capacity < required) {
    capacity = required;
  }

  if (capacity_bytes >= 0x7ffffffffffffff8) {
    capacity = 0x1fffffffffffffff;
  }

  void** replacement = nullptr;

  if (capacity != 0) {
    if (capacity >> 61) {
      AllocationSizeError();
    }

    replacement = static_cast<void**>(Allocate(capacity * 8));
  }

  replacement[count] = worker;
  memcpy(replacement, reinterpret_cast<void*>(begin), bytes);
  context->workers_begin = replacement;
  context->workers_end = replacement + count + 1;
  storage->workers_capacity_end = replacement + capacity;

  if (begin != 0) {
    Free(reinterpret_cast<void*>(begin));
  }

  context->workers_end = replacement + count + 1;
}

}

void InitializeJobContext(
  JobContextStorage* storage, uint64_t requested_cores) {
  JobContext* context = &storage->context;
  context->worker = 0;
  context->unknown_04 = GetCurrentCore();
  context->next_ticket = 0;
  memset(Offset(context, 16), 0, 0x810);

  for (size_t i = 0; i < 64; ++i) {
    TicketSlot* slot = &context->slots[i];

    if (i != 0) {
      slot->state = 0;
      Write<uint16_t>(slot->event, 0, 0);
      Write<uint64_t>(slot->event, 4, 0);
      slot->job = nullptr;
    }

    InitializeLightEvent(slot->event, 1, false);
  }

  context->workers_begin = nullptr;
  context->workers_end = nullptr;
  storage->workers_capacity_end = nullptr;
  void* heap = Allocate(184);
  Write<uintptr_t*>(heap, 0, &g_job_heap_vtable);
  Write<uint64_t>(heap, 8, 64);
  Write<uint64_t>(heap, 16, 0x400000);
  void* backing = Allocate(0x400000, 64);
  Write<void*>(heap, 24, backing);

  for (size_t offset = 32; offset <= 168; offset += 8) {
    Write<uint64_t>(heap, offset, 0);
  }

  void* handle = CreateJobHeap(backing, 0x400000, 4, Offset(heap, 32));
  Write<void*>(heap, 176, handle);
  storage->heap = heap;
  storage->active_heap = heap;
  uint64_t cores = GetAvailableCores() & requested_cores;
  cores &= ~(uint64_t{1} << (context->unknown_04 & 63));
  uint32_t count = __builtin_popcountll(cores);

  if (count >= 5) {
    count = 5;
  }

  auto* owner = static_cast<QueueControl*>(Allocate(192));
  owner->control = {&g_queue_control_vtable, 0, 0};
  owner->queue.context = context;
  owner->queue.expected = count;
  owner->queue.completed = 0;
  Write<uint8_t>(owner, 40, 0);
  Write<uint8_t>(owner, 41, 0);
  Write<uint32_t>(owner, 44, 0);
  Write<uint32_t>(owner, 48, 0);
  Write<uint64_t>(owner, 56, 0);
  Write<uint32_t>(owner, 64, 0);
  InitializeMutex(owner->queue.mutex, false, 0);
  InitializeCondition(owner->queue.idle_condition);
  InitializeCondition(owner->queue.work_condition);

  for (size_t offset = 88; offset <= 176; offset += 8) {
    Write<uint64_t>(owner, offset, 0);
  }

  Write<uint64_t>(owner, 181, 0);
  auto* previous = Read<processing::SharedControl*>(context, 24);
  context->queue = &owner->queue;
  Write<processing::SharedControl*>(context, 24, &owner->control);
  Release(previous);
  uint32_t ordinal = 1;

  for (uint64_t index = 0; index < 64 && ordinal < 16; ++index) {
    int64_t shifted = static_cast<int64_t>(uint64_t{0x100000000} << index);
    uint64_t selected = static_cast<uint64_t>(shifted >> 32);

    if ((cores & selected) == 0) {
      continue;
    }

    void* worker = Allocate(504);
    memset(Offset(worker, 8), 0, 473);
    Write<uintptr_t*>(worker, 0, &g_worker_vtable);
    Write<uint32_t>(worker, 484, ordinal);
    processing::SharedControl* shared = Read<processing::SharedControl*>(
      context, 24
    );
    Write<JobQueue*>(worker, 488, context->queue);
    Write<processing::SharedControl*>(worker, 496, shared);

    if (shared != nullptr) {
      __atomic_fetch_add(&shared->shared_owners, uint64_t{1}, __ATOMIC_RELAXED);
    }

    InitializeWorker(worker, 0x20000000 + (index << 32), 0x40000);
    StartWorkerThread(Offset(worker, 32));
    AppendWorker(storage, worker);
    ++ordinal;
  }
}

}
