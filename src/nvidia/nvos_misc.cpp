#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/os/event.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/tls.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
};

enum NvOsEventType : int32_t {
  NvOsEventType_SystemEvent = 1,
  NvOsEventType_UserEvent = 3,
};

struct NvOsEvent {
  NvOsEventType type;
  uint32_t reserved04;
  nn::os::EventType userEvent;
};

struct NvOsSystemEvent {
  NvOsEventType type;
  uint32_t reserved04;
  uint64_t reserved08;
  nn::os::SystemEventType systemEvent;
};

struct NvUHashTable {
  uint64_t (*hash)(const void* key);
  bool (*compare)(const void* left, const void* right);
  void* buckets;
  uint32_t count;
  uint64_t reserved20[5];
};

struct NvOsFile;
struct NvOsStat;

extern "C" void* NvOsAlloc(size_t size);
extern "C" int NvOsSnprintf(char* buffer, uint32_t size, const char* format,
  ...);

[[gnu::visibility("hidden")]] extern uint32_t g_NvOsVerboseLevel;
[[gnu::visibility("hidden")]] extern nn::os::TlsSlot g_NvOsTlsSlot;

[[gnu::visibility("hidden")]] NvError NvOsThreadCreateImpl(
  void (*function)(void*), void* argument, void** pOutThread, int priority);
[[gnu::visibility("hidden")]] void NvOsHeapFree(void* heap, void* pointer);
[[gnu::visibility("hidden")]] NvError NvOsFopenImpl(const char* path,
  uint32_t flags, NvOsFile** pOutFile);
[[gnu::visibility("hidden")]] void NvOsFcloseImpl(NvOsFile* file);
[[gnu::visibility("hidden")]] NvError NvOsFstatImpl(NvOsFile* file,
  NvOsStat* pOutStat);
[[gnu::visibility("hidden")]] NvError NvOsFwriteImpl(NvOsFile* file,
  const void* data, size_t size);
[[gnu::visibility("hidden")]] NvError NvOsFseekImpl(NvOsFile* file,
  int64_t offset, int origin);
[[gnu::visibility("hidden")]] NvError NvOsFtellImpl(NvOsFile* file,
  uint64_t* pOutPosition);
[[gnu::visibility("hidden")]] NvError NvOsFflushImpl(NvOsFile* file);
[[gnu::visibility("hidden")]] NvError NvOsFremoveImpl(const char* path);
[[gnu::visibility("hidden")]] NvError NvOsFtruncateImpl(NvOsFile* file,
  uint64_t size);

extern "C" int32_t NvOsSetVerboseLevel(uint32_t level) {
  if (level > 4) {
    return -1;
  }

  g_NvOsVerboseLevel = level;
  return 0;
}

extern "C" int32_t NvOsGetVerboseLevel(uint32_t* pOutLevel) {
  if (pOutLevel == nullptr) {
    return -1;
  }

  *pOutLevel = g_NvOsVerboseLevel;
  return 0;
}

extern "C" NvError NvOsThreadCreate(void (*function)(void*), void* argument,
  void** pOutThread) {
  return NvOsThreadCreateImpl(function, argument, pOutThread, 1);
}

extern "C" NvError NvOsInterruptPriorityThreadCreate(void (*function)(void*),
  void* argument, void** pOutThread) {
  return NvOsThreadCreateImpl(function, argument, pOutThread, 2);
}

// Opening for writing also asks for creation.
extern "C" NvError NvOsFopen(const char* path, uint32_t flags,
  NvOsFile** pOutFile) {
  return NvOsFopenImpl(path, ((flags >> 2) & 2) | flags, pOutFile);
}

extern "C" void NvOsFclose(NvOsFile* file) {
  if (file != nullptr) {
    NvOsFcloseImpl(file);
  }
}

extern "C" NvError NvOsFwrite(NvOsFile* file, const void* data,
  size_t size) {
  return NvOsFwriteImpl(file, data, size);
}

extern "C" NvError NvOsFseek(NvOsFile* file, int64_t offset, int origin) {
  return NvOsFseekImpl(file, offset, origin);
}

extern "C" NvError NvOsFtell(NvOsFile* file, uint64_t* pOutPosition) {
  return NvOsFtellImpl(file, pOutPosition);
}

extern "C" NvError NvOsFstat(NvOsFile* file, NvOsStat* pOutStat) {
  struct Stat {
    uint64_t size;
    uint32_t type;
  };

  *reinterpret_cast<Stat*>(pOutStat) = {};
  return NvOsFstatImpl(file, pOutStat);
}

extern "C" NvError NvOsFflush(NvOsFile* file) {
  return NvOsFflushImpl(file);
}

extern "C" NvError NvOsFsync(NvOsFile* file) {
  return NvOsFflushImpl(file);
}

extern "C" NvError NvOsFremove(const char* path) {
  return NvOsFremoveImpl(path);
}

extern "C" NvError NvOsFtruncate(NvOsFile* file, uint64_t size) {
  return NvOsFtruncateImpl(file, size);
}

extern "C" bool NvUScalarCompare(uintptr_t left, uintptr_t right) {
  return left == right;
}

extern "C" bool NvUStrCompare(const char* left, const char* right) {
  return strcmp(left, right) == 0;
}

extern "C" void NvUHashInit(NvUHashTable* table,
  uint64_t (*hash)(const void* key),
  bool (*compare)(const void* left, const void* right)) {
  table->hash = hash;
  table->compare = compare;
  table->buckets = nullptr;
  table->count = 0;
  for (uint64_t& value : table->reserved20) {
    value = 0;
  }
}

extern "C" void* NvUAlloc0(size_t size) {
  void* pointer = NvOsAlloc(size);
  if (pointer != nullptr) {
    memset(pointer, 0, size);
  }

  return pointer;
}

extern "C" void NvOsHeapAllocatorFree(void* allocator, void* pointer) {
  NvOsHeapFree(*reinterpret_cast<void**>(static_cast<uint8_t*>(allocator) +
    0x28), pointer);
}

extern "C" void NvOsEventClear(NvOsEvent* event) {
  if (event->type == NvOsEventType_UserEvent) {
    nn::os::ClearEvent(&event->userEvent);
  }
  else if (event->type == NvOsEventType_SystemEvent) {
    nn::os::ClearSystemEvent(
      &reinterpret_cast<NvOsSystemEvent*>(event)->systemEvent);
  }
}

extern "C" NvError NvOsUserEventSignal(NvOsEvent* event) {
  if (event->type != NvOsEventType_UserEvent) {
    return NvError_BadParameter;
  }

  nn::os::SignalEvent(&event->userEvent);
  return NvSuccess;
}

extern "C" void* NvOsTlsGet(uint32_t index) {
  void** values = reinterpret_cast<void**>(nn::os::GetTlsValue(g_NvOsTlsSlot));
  if (values == nullptr) {
    return nullptr;
  }

  return values[index];
}

extern "C" uint8_t NvOsHosIsUsingCoreCallbacks(const uint8_t* pConfig) {
  return pConfig[0x80];
}

extern "C" int NvOsGetProcessInfo(char* buffer, uint32_t size) {
  return NvOsSnprintf(buffer, size, "(unknown process)");
}

extern "C" nn::os::ThreadType* NvOsGetCurrentThreadId() {
  return nn::os::GetCurrentThread();
}

extern "C" char* NvOsStrcpy(char* destination, const char* source) {
  return strcpy(destination, source);
}

extern "C" char* NvOsStrncpy(char* destination, const char* source,
  size_t size) {
  return strncpy(destination, source, size);
}

extern "C" size_t NvOsStrlen(const char* string) {
  return strlen(string);
}

extern "C" void* NvOsMemcpy(void* destination, const void* source,
  size_t size) {
  return memcpy(destination, source, size);
}

extern "C" int NvOsMemcmp(const void* left, const void* right, size_t size) {
  return memcmp(left, right, size);
}

extern "C" void* NvOsMemset(void* destination, int value, size_t size) {
  return memset(destination, value, size);
}
