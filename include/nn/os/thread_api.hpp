#pragma once

#include "nn/os/thread_manager.hpp"
#include "nn/result.hpp"

namespace nn::os {

Result CreateThread(ThreadType* thread, void (*entry)(void*), void* argument,
  void* stack, size_t size, int priority);
void DestroyThread(ThreadType* thread);
void StartThread(ThreadType* thread);
void WaitThread(ThreadType* thread);
void SetThreadName(ThreadType* thread, const char* name);
int GetThreadPriority(const ThreadType* thread);
int ChangeThreadPriority(ThreadType* thread, int priority);
void SetThreadCoreMask(ThreadType* thread, int ideal_core, uint64_t affinity);

}
