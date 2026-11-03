#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::os {

struct ThreadContextInfoAarch64;

uint64_t GetThreadAvailableCoreMask();

struct ThreadListNode {
  ThreadListNode* next;
  ThreadListNode* previous;
};

struct ThreadType {
  ThreadListNode all_threads;
  ThreadListNode waiters;
  uintptr_t reserved_20[4];
  uint8_t state;
  uint8_t stack_is_aliased;
  uint16_t reserved_42;
  int16_t priority;
  uint16_t reserved_46;
  void* original_stack;
  void* stack;
  size_t stack_size;
  void* argument;
  void (*entry)(void*);
  void* current_fiber;
  void* initial_fiber;
  uintptr_t tls_values[32];
  char name_buffer[32];
  const char* name;
  uint32_t critical_section;
  uint32_t condition_variable;
  uint32_t handle;
  uint32_t reserved_1b4;
  uint64_t id;
};

namespace detail {

struct ThreadManagerImplByHorizon {
  explicit ThreadManagerImplByHorizon(ThreadType* initial_thread);
  bool MapAliasStack(void** output, const void* original, size_t size) const;
  bool UnmapAliasStack(const void* alias, const void* original,
    size_t size) const;
  uint32_t CreateThread(ThreadType* thread, void (*entry)(ThreadType*),
    int ideal_core);
  void StartThread(const ThreadType* thread);
  void DestroyThreadUnsafe(ThreadType* thread);
  bool TryWaitForExitThread(ThreadType* thread);
  void WaitForExitThread(ThreadType* thread);
  void YieldThread();
  bool ChangePriority(ThreadType* thread, int priority);
  int GetCurrentPriority(const ThreadType* thread) const;
  void SuspendThreadUnsafe(ThreadType* thread);
  void ResumeThreadUnsafe(ThreadType* thread);
  void GetThreadContextUnsafe(ThreadContextInfoAarch64* output,
    const ThreadType* thread);
  int GetCurrentCoreNumber() const;
  void SetThreadCoreMask(ThreadType* thread, int ideal_core,
    uint64_t affinity) const;
  void GetThreadCoreMask(int* ideal_core, uint64_t* affinity,
    const ThreadType* thread) const;
  uint64_t GetThreadAvailableCoreMask() const;
};

struct ThreadManager {
  uint8_t reserved_00[8];
  ThreadType initial_thread;
  uint32_t critical_section;
  uint32_t reserved_1cc;
  ThreadListNode threads;
  size_t total_stack_size;
  uint32_t thread_count;
  uint32_t reserved_1ec;

  ThreadManager();
  void SetZeroToAllThreadsTlsSafe(int slot);
  void SetInitialThreadNameUnsafe(ThreadType* thread);
  void CleanupThread(ThreadType* thread);
  bool CreateAliasStackUnsafe(ThreadType* thread);
  void DeleteAliasStackUnsafe(ThreadType* thread);
  uint32_t CreateThread(ThreadType* thread, void (*entry)(void*),
    void* argument, void* stack, size_t size, int priority, int ideal_core);
  uint32_t CreateThread(ThreadType* thread, void (*entry)(void*),
    void* argument, void* stack, size_t size, int priority);
  void StartThread(ThreadType* thread);
  bool TryWaitThread(ThreadType* thread);
  void WaitThread(ThreadType* thread);
  void DestroyThread(ThreadType* thread);
  void DestroyThreadObject(ThreadType* thread);
  int SuspendThread(ThreadType* thread);
  int ResumeThread(ThreadType* thread);
  void GetThreadContext(ThreadContextInfoAarch64* output,
    const ThreadType* thread);
};

void SetupThreadObjectUnsafe(ThreadType* thread, void (*entry)(void*),
  void* argument, void* stack, size_t stack_size, int priority);
void ExpandUnsignedValueToAscii(char* output, unsigned long value, int bits);

}
}
