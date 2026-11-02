#pragma once

#include "world/initialization.hpp"

namespace fw::world {

struct Worker;

struct WorkerVTable {
  void* (*get_thread)(Worker* worker);
  const void* (*get_thread_const)(const Worker* worker);
  void (*destroy)(Worker* worker);
  void (*delete_object)(Worker* worker);
  void (*run)(Worker* worker);
};

struct Worker {
  WorkerVTable* vtable;
  uint64_t id;
  size_t stack_size;
  void* stack;
  unsigned char thread[448];
  uint8_t registered;
  unsigned char unknown_1e1[3];
  uint32_t index;
  JobQueue* queue;
  processing::SharedControl* control;
};

struct ThreadSettings {
  text::String name;
  int32_t priority;
  uint32_t unknown_1c;
  uint8_t use_initial_core;
  uint8_t use_core_mask;
  unsigned char unknown_22[2];
  int32_t initial_core;
  int32_t ideal_core;
  uint32_t unknown_2c;
  uint64_t core_mask;
};

void InitializeWorker(void* worker, uint64_t id, size_t stack_size);
void WorkerEntry(void* worker);
void DestroyWorker(Worker* worker);
void DeleteWorker(Worker* worker);
void RunWorker(Worker* worker);
void DestroyJobContext(JobContextStorage* storage);
void DestroyQueueObject(processing::SharedControl* control);
void DeleteQueueControl(processing::SharedControl* control);

extern ThreadSettings (*g_thread_settings)(uint64_t id);
extern void* g_worker_registry;
extern int32_t* g_worker_tls_slot;
extern WorkerVTable g_worker_base_vtable;

static_assert(sizeof(Worker) == 504);
static_assert(offsetof(Worker, registered) == 0x1e0);
static_assert(offsetof(Worker, index) == 0x1e4);
static_assert(offsetof(Worker, queue) == 0x1e8);
static_assert(offsetof(Worker, control) == 0x1f0);
static_assert(sizeof(ThreadSettings) == 56);
static_assert(offsetof(ThreadSettings, use_initial_core) == 32);
static_assert(offsetof(ThreadSettings, core_mask) == 48);

}
