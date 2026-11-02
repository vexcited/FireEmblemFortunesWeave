#pragma once

#include "task/scheduler.hpp"

namespace fw::task {

struct Callable;

struct CallableVTable {
  uintptr_t unknown_00;
  void (*delete_object)(Callable* object);
  Callable* (*clone)(Callable* object);
  void (*copy_to)(Callable* object, void* destination);
  void (*destroy_inline)(Callable* object);
  void (*destroy_heap)(Callable* object);
  uintptr_t (*invoke)(Callable* object);
};

struct Callable {
  CallableVTable* vtable;
};

struct CallableType {
  uintptr_t vtable;
  const char* name;
};

struct FunctionCallback {
  CallableVTable* vtable;
  void (*function)();
  uintptr_t bound_arguments;

  void Delete();
  FunctionCallback* Clone();
  void CopyTo(FunctionCallback* destination);
  void DestroyInline();
  void DestroyHeap();
  void Invoke();
  void* Target(const CallableType* type);
  const CallableType* Type();
};

struct CallbackTask {
  Task task;
  unsigned char unknown_58[8];
  alignas(16) unsigned char storage[0x20];
  Callable* callable;

  void Destroy();
  void Delete();
  uintptr_t Update();
};

struct PersistentCallbackTask {
  CallbackTask callback;

  void Destroy();
  void Delete();
  uint32_t Update();
};

struct CallbackScheduler {
  Scheduler scheduler;
  const char* creation_name;
  uint16_t creation_priority;

  PersistentCallbackTask* Create(
    const char* name, uint16_t priority, void (*function)()
  );
};

extern CallbackScheduler* g_callback_scheduler;
extern TaskVTable g_base_task_vtable;
extern TaskVTable g_callback_task_vtable;
extern TaskVTable g_persistent_callback_task_vtable;
extern CallableVTable g_function_callback_vtable;
extern CallableType g_function_callback_type;
extern const char g_function_callback_type_name[];
extern const char g_invalid_task_name[];

uint32_t DefaultTaskUpdate(Task* task);

static_assert(sizeof(FunctionCallback) == 0x18);
static_assert(offsetof(CallbackTask, storage) == 0x60);
static_assert(offsetof(CallbackTask, callable) == 0x80);
static_assert(sizeof(CallbackTask) == 0x90);
static_assert(offsetof(CallbackScheduler, creation_name) == 0x30);
static_assert(offsetof(CallbackScheduler, creation_priority) == 0x38);

}
