#include "nn/os/startup_support.hpp"

#include "nn/os/startup.hpp"

extern "C" uint32_t svcGetInfo(uint64_t*, uint32_t, uint32_t, uint64_t);

namespace nn::os::detail {

int HostArgumentCount = 1;
extern const char DefaultProgramName[] = "";
char* DefaultArguments[] = {const_cast<char*>(DefaultProgramName), nullptr};
char** HostArguments = DefaultArguments;
uint64_t InitialMemoryUsage;

void (*g_UserExceptionHandler)(UserExceptionInfo*);
void* g_UserExceptionStackTop;
void* g_UserExceptionStackBottom;
UserExceptionInfo* g_UserExceptionInfo;

[[noreturn]] void AbortMemoryQuery(const uint32_t* result)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static_assert(sizeof(MemoryInfo) == 56);
static_assert(offsetof(MemoryInfo, initial_memory_usage) == 32);
static_assert(offsetof(MemoryInfo, thread_count) == 48);

template <class T>
static T ResourceField(size_t offset) {
  T value;
  __builtin_memcpy(&value, g_OsResourceManagerStorage + offset, sizeof(value));
  return value;
}

void DebugImplByHorizon::QueryMemoryInfo(MemoryInfo* output) {
  uint64_t value = 0;
  uint32_t result = svcGetInfo(&value, 22, 0xffff8001, 0);

  if (result != 0) {
    AbortMemoryQuery(&result);
  }

  uint64_t used = value;
  result = svcGetInfo(&value, 21, 0xffff8001, 0);

  if (result != 0) {
    AbortMemoryQuery(&result);
  }

  uint64_t initial = InitialMemoryUsage;

  if (initial == 0) {
    initial = used -
      (ResourceField<uint64_t>(0x428) + ResourceField<uint64_t>(0x180));
    InitialMemoryUsage = initial;
  }

  output->total_memory_size = value;
  output->used_memory_size = used;
  output->initial_memory_usage = initial;
  output->resource_value_10 = ResourceField<uint64_t>(0x428);
  output->resource_value_18 = ResourceField<uint64_t>(0x430);
  output->total_thread_stack_size = ResourceField<uint64_t>(0x300);
  output->thread_count = ResourceField<uint32_t>(0x308);
}

}

namespace nn::os {

void QueryMemoryInfo(MemoryInfo* output) {
  detail::DebugImplByHorizon::QueryMemoryInfo(output);
}

void SetHostArgc(int count) {
  detail::HostArgumentCount = count;
}

int GetHostArgc() {
  return detail::HostArgumentCount;
}

void SetHostArgv(char** arguments) {
  detail::HostArguments = arguments;
}

char** GetHostArgv() {
  return detail::HostArguments;
}

void SetUserExceptionHandler(void (*handler)(UserExceptionInfo*),
  void* stack, size_t stack_size, UserExceptionInfo* info) {
  detail::g_UserExceptionHandler = handler;
  detail::g_UserExceptionStackTop = handler ? stack : nullptr;
  detail::g_UserExceptionStackBottom = handler ?
    reinterpret_cast<void*>(uintptr_t(stack) + stack_size) : nullptr;
  detail::g_UserExceptionInfo = handler ? info : nullptr;
}

}
