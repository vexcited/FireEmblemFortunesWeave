#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::os {

struct MemoryInfo {
  uint64_t total_memory_size;
  uint64_t used_memory_size;
  uint64_t resource_value_10;
  uint64_t resource_value_18;
  uint64_t initial_memory_usage;
  uint64_t total_thread_stack_size;
  uint32_t thread_count;
  uint32_t reserved;
};

struct UserExceptionInfo;

void QueryMemoryInfo(MemoryInfo* output);
void SetHostArgc(int count);
int GetHostArgc();
void SetHostArgv(char** arguments);
char** GetHostArgv();
void SetUserExceptionHandler(void (*handler)(UserExceptionInfo*),
  void* stack, size_t stack_size, UserExceptionInfo* info);

namespace detail {

struct DebugImplByHorizon {
  static void QueryMemoryInfo(MemoryInfo* output);
};

extern void (*g_UserExceptionHandler)(UserExceptionInfo*);
extern void* g_UserExceptionStackTop;
extern void* g_UserExceptionStackBottom;
extern UserExceptionInfo* g_UserExceptionInfo;

}
}
