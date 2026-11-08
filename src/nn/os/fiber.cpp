#include "nn/diag/diag_abort.hpp"
#include "nn/os/stack_guard.hpp"
#include "nn/os/thread_info.hpp"

namespace nn::os {

namespace detail {

struct FiberImplByHorizon {
  static void Initialize(FiberType* fiber);
  static bool MapAliasStack(void** alias, const void* stack, size_t size);
  static void UnmapAliasStack(const void* alias, const void* stack,
    size_t size);
};

void DispatchFiberContext(FiberContextForHorizon** current,
  FiberContextForHorizon** next);

extern uint8_t g_OsResourceManagerStorage[];

[[gnu::visibility("hidden")]] bool MapStackAlias(const void* alias,
  const void* stack, size_t size);
[[gnu::visibility("hidden")]] void UnmapStackAlias(const void* alias,
  const void* stack, size_t size);

namespace {

constexpr size_t FiberStackGuardManagerOffset = 0xb8;

}

[[gnu::noinline]] bool FiberImplByHorizon::MapAliasStack(void** alias,
  const void* stack, size_t size) {
  auto* pManager = reinterpret_cast<StackGuardManager*>(
    g_OsResourceManagerStorage + FiberStackGuardManagerOffset);
  void* address = nullptr;
  const int result = pManager->MapAtRandomAddress(&address, MapStackAlias,
    UnmapStackAlias, stack, size);
  if (result == 0) {
    *alias = address;
  }

  return result == 0;
}

}

namespace {

enum FiberState : uint8_t {
  FiberState_NotInitialized,
  FiberState_Ready,
  FiberState_Running,
  FiberState_Exited,
  FiberState_Detached,
};

ThreadType* GetCurrentThreadFromTls() {
  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  return *reinterpret_cast<ThreadType**>(tls + 0x1f8);
}

}

void InitializeFiber(FiberType* fiber, FiberType* (*function)(void*),
  void* argument, void* stack, size_t stackSize, int option) {
  fiber->function = function;
  fiber->argument = argument;
  fiber->originalStack = stack;
  fiber->stack = stack;
  fiber->stackSize = stackSize;
  fiber->state = FiberState_Ready;
  fiber->isStackAliased = false;

  if ((option & 1) == 0) {
    void* alias = nullptr;

    if (detail::FiberImplByHorizon::MapAliasStack(&alias, stack, stackSize)) {
      fiber->isStackAliased = true;
      fiber->stack = alias;
    }
  }

  detail::FiberImplByHorizon::Initialize(fiber);
}

void FinalizeFiber(FiberType* fiber) {
  if (fiber->isStackAliased) {
    detail::FiberImplByHorizon::UnmapAliasStack(fiber->stack,
      fiber->originalStack, fiber->stackSize);
    fiber->isStackAliased = false;
    fiber->stack = fiber->originalStack;
  }

  fiber->state = FiberState_NotInitialized;
}

void SwitchToFiber(FiberType* fiber) {
  if (fiber == nullptr) {
    fiber = static_cast<FiberType*>(GetCurrentThreadFromTls()->initial_fiber);
  }
  else {
    switch (fiber->state) {
      case FiberState_Ready:
        break;
      case FiberState_Running:
        NN_ABORT_UNLESS(false);
      case FiberState_Detached:
        NN_ABORT_UNLESS(false);
      default:
        NN_ABORT_UNLESS(false);
    }
  }

  ThreadType* thread = GetCurrentThreadFromTls();
  auto* current = static_cast<FiberType*>(thread->current_fiber);

  if (current != nullptr) {
    current->state = FiberState_Ready;
    fiber->state = FiberState_Running;
    thread->current_fiber = fiber;
    detail::DispatchFiberContext(&current->context, &fiber->context);
    return;
  }

  FiberType initial;
  initial.state = FiberState_Ready;
  initial.isStackAliased = false;
  initial.function = nullptr;
  initial.argument = nullptr;
  initial.originalStack = thread->stack;
  initial.stack = thread->stack;
  initial.stackSize = thread->stack_size;

  fiber->state = FiberState_Running;
  thread->current_fiber = fiber;
  thread->initial_fiber = &initial;
  detail::DispatchFiberContext(&initial.context, &fiber->context);
  thread->current_fiber = nullptr;
  thread->initial_fiber = nullptr;
}

}
