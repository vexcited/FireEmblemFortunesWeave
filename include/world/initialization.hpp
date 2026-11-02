#pragma once

#include "world/queue.hpp"

namespace fw::world {

struct JobContextStorage {
  JobContext context;
  void* workers_capacity_end;
  void* heap;
  void* active_heap;
};

void InitializeJobContext(JobContextStorage* storage, uint64_t requested_cores);

static_assert(offsetof(JobContextStorage, workers_capacity_end) == 0x830);
static_assert(offsetof(JobContextStorage, heap) == 0x838);
static_assert(offsetof(JobContextStorage, active_heap) == 0x840);
static_assert(sizeof(JobContextStorage) == 0x848);

extern uintptr_t g_job_heap_vtable;
extern uintptr_t g_worker_vtable;
extern processing::SharedControlVTable g_queue_control_vtable;

}
