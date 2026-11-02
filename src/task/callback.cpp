#include "task/callback.hpp"

#include "memory/heap_manager.hpp"

namespace fw::task {
namespace {

void DestroyCallable(CallbackTask* task) {
  Callable* callable = task->callable;

  if (callable == reinterpret_cast<Callable*>(task->storage)) {
    callable->vtable->destroy_inline(callable);
  }
  else if (callable != nullptr) {
    callable->vtable->destroy_heap(callable);
  }
}

struct CallableBox {
  FunctionCallback storage;
  uintptr_t unknown_18;
  Callable* callable;
};

void SetTaskName(Task& task, const char* name) {
  __builtin_memcpy(task.unknown_18, &name, sizeof(name));
}

void CopyCallable(CallableBox& box, CallbackTask* task) {
  Callable* callable = box.callable;

  if (callable == nullptr) {
    task->callable = nullptr;
    return;
  }

  if (callable == reinterpret_cast<Callable*>(&box.storage)) {
    task->callable = reinterpret_cast<Callable*>(task->storage);
    callable->vtable->copy_to(callable, task->storage);
  }
  else {
    task->callable = callable->vtable->clone(callable);
  }

  callable = box.callable;

  if (callable == reinterpret_cast<Callable*>(&box.storage)) {
    callable->vtable->destroy_inline(callable);
  }
  else if (callable != nullptr) {
    callable->vtable->destroy_heap(callable);
  }
}

}

uint32_t DefaultTaskUpdate(Task*) {
  return 1;
}

void CallbackTask::Destroy() {
  task.vtable = &g_callback_task_vtable;
  DestroyCallable(this);
}

void CallbackTask::Delete() {
  Destroy();
  memory::g_heap_manager->GetAllocator(0).Free(this);
}

uintptr_t CallbackTask::Update() {
  if (callable == nullptr) {
    return 0;
  }

  return callable->vtable->invoke(callable);
}

void PersistentCallbackTask::Destroy() {
  callback.task.vtable = &g_persistent_callback_task_vtable;
  DestroyCallable(&callback);
}

void PersistentCallbackTask::Delete() {
  Destroy();
  memory::g_heap_manager->GetAllocator(0).Free(this);
}

uint32_t PersistentCallbackTask::Update() {
  if (callback.callable != nullptr) {
    callback.callable->vtable->invoke(callback.callable);
  }

  return 1;
}

void FunctionCallback::Delete() {
  memory::g_heap_manager->GetAllocator(0).Free(this);
}

FunctionCallback* FunctionCallback::Clone() {
  auto* result = static_cast<FunctionCallback*>(
    memory::g_heap_manager->Allocate(sizeof(FunctionCallback), 16, 0)
  );
  result->vtable = &g_function_callback_vtable;
  result->function = function;
  result->bound_arguments = bound_arguments;
  return result;
}

void FunctionCallback::CopyTo(FunctionCallback* destination) {
  destination->vtable = &g_function_callback_vtable;
  destination->function = function;
  destination->bound_arguments = bound_arguments;
}

void FunctionCallback::DestroyInline() {
}

void FunctionCallback::DestroyHeap() {
  vtable->delete_object(reinterpret_cast<Callable*>(this));
}

void FunctionCallback::Invoke() {
  function();
}

void* FunctionCallback::Target(const CallableType* type) {
  return type->name == g_function_callback_type_name ? &function : nullptr;
}

const CallableType* FunctionCallback::Type() {
  return &g_function_callback_type;
}

PersistentCallbackTask* CallbackScheduler::Create(
  const char* name, uint16_t priority, void (*function)()
) {
  creation_name = name;
  creation_priority = priority;
  Task* previous_current = scheduler.current;
  auto* result = static_cast<PersistentCallbackTask*>(
    memory::g_heap_manager->Allocate(sizeof(PersistentCallbackTask), 16, 0)
  );
  Task& task = result->callback.task;
  task.parent = nullptr;
  task.first_child = nullptr;
  task.next_sibling = nullptr;
  task.previous_sibling = nullptr;
  task.last_child = nullptr;
  CallableBox box;
  box.storage = {&g_function_callback_vtable, function, 0};
  box.callable = reinterpret_cast<Callable*>(&box.storage);
  task.vtable = &g_base_task_vtable;
  task.link = {&task.link, &task.link};
  SetTaskName(task, g_invalid_task_name);
  task.priority = 0;
  task.update_count = 0;
  task.state = 1;
  task.flags = 0;
  task.callback_flag = 1;

  CallbackScheduler* context = g_callback_scheduler;
  SetTaskName(task, context->creation_name);
  task.priority = context->creation_priority;
  task.parent = context->scheduler.current;

  if (task.parent != nullptr) {
    if (task.parent->first_child != nullptr) {
      task.parent->last_child->next_sibling = &task;
      task.previous_sibling = context->scheduler.current->last_child;
      context->scheduler.current->last_child = &task;
    }
    else {
      task.parent->last_child = &task;
      context->scheduler.current->first_child = &task;
    }
  }

  context->scheduler.current = &task;
  task.vtable = &g_persistent_callback_task_vtable;
  CopyCallable(box, &result->callback);
  scheduler.current = previous_current;
  Link* last = task.link.previous;
  task.link.previous = scheduler.pending.previous;
  last->next = &scheduler.pending;
  scheduler.pending.previous->next = &task.link;
  scheduler.pending.previous = last;
  return result;
}

}
