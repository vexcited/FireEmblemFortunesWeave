#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/managers.hpp"
#include "nn/os/thread_manager.hpp"
#include "nn/result.hpp"

namespace nn::os {

constexpr uint8_t ThreadState_Started = 3;

struct FiberType;

namespace detail {

struct FiberContextForHorizon;

struct DebugImplByHorizon {
  static void GetCurrentStackInfo(uintptr_t* stack, size_t* stackSize);
};

}

struct FiberType {
  uint8_t reserved_00[0x20];
  uint8_t state;
  bool isStackAliased;
  FiberType* (*function)(void*);
  void* argument;
  void* originalStack;
  void* stack;
  size_t stackSize;
  detail::FiberContextForHorizon* context;
};

static_assert(sizeof(FiberType) == 0x58);

void InitializeFiber(FiberType* fiber, FiberType* (*function)(void*),
  void* argument, void* stack, size_t stackSize, int flags);
void FinalizeFiber(FiberType* fiber);
FiberType* GetCurrentFiber();
void SwitchToFiber(FiberType* fiber);

Result CreateThread(ThreadType* thread, void (*entry)(void*), void* argument,
  void* stack, size_t size, int priority, int idealCore);
void SetThreadNamePointer(ThreadType* thread, const char* name);
const char* GetThreadNamePointer(const ThreadType* thread);
int GetThreadCurrentPriority(const ThreadType* thread);
void YieldThread();
bool TryWaitThread(ThreadType* thread);
int GetCurrentCoreNumber();
int GetCurrentProcessorNumber();
void GetThreadCoreMask(int* idealCore, uint64_t* affinity,
  const ThreadType* thread);
uint64_t GetThreadId(const ThreadType* thread);
int SuspendThread(ThreadType* thread);
int ResumeThread(ThreadType* thread);
int GetThreadSuspendCount(const ThreadType* thread);
void GetThreadContext(ThreadContextInfoAarch64* context,
  const ThreadType* thread);
void GetThreadStackInfo(uintptr_t* stack, size_t* stackSize,
  const ThreadType* thread);
void GetCurrentStackInfo(uintptr_t* stack, size_t* stackSize);
int64_t GetIdleTickCount();
int64_t GetThreadTickCount();
int GetFreeThreadCount();
void SetDyingMessageRegion(uintptr_t address, size_t size);
Result AllocateTlsSlot(TlsSlot* slot, void (*destructor)(uintptr_t));
int GetUsedTlsSlotCount();

}
