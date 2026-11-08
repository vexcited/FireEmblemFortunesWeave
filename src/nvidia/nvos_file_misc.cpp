#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadParameter = 4,
};

struct NvOsFile;
struct NvOsStatType {
  uint64_t size;
  uint32_t type;
};

struct NvOsLeakAllocator {
  void* reserved[3];
  void (*free)(NvOsLeakAllocator* allocator, void* pointer);
};

extern "C" {

[[gnu::visibility("hidden")]] NvError NvOsFcloseExImpl(NvOsFile* file);
[[gnu::visibility("hidden")]] NvError NvOsFreadImpl(NvOsFile* file,
  void* buffer, size_t size, size_t* pOutBytes, uint32_t timeout);
[[gnu::visibility("hidden")]] NvError NvOsStatImpl(const char* path,
  NvOsStatType* pOutStat);

// Leak tracking blocks keep their size and real base before the user part
// and get poisoned on both sides when freed.
void NvOsFreeLeak(NvOsLeakAllocator* allocator, void* pointer) {
  if (pointer == nullptr) {
    return;
  }

  auto* header = static_cast<uint64_t*>(pointer);
  const uint64_t size = header[-3];
  void* base = reinterpret_cast<void*>(header[-2]);
  constexpr uint64_t Poison = 0xdeaddeaddeaddeadull;
  header[-1] = Poison;
  *reinterpret_cast<uint64_t*>(static_cast<uint8_t*>(pointer) + size) =
    Poison;
  allocator->free(allocator, base);
}

NvError NvOsFcloseEx(NvOsFile* file) {
  if (file == nullptr) {
    return NvError_BadParameter;
  }

  return NvOsFcloseExImpl(file);
}

NvError NvOsFread(NvOsFile* file, void* buffer, size_t size,
  size_t* pOutBytes) {
  size_t bytes = 0;
  return NvOsFreadImpl(file, buffer, size, pOutBytes != nullptr ? pOutBytes :
    &bytes, 0xffffffff);
}

NvError NvOsFgetc(NvOsFile* file, uint8_t* pOutCharacter) {
  size_t bytes = 0;
  return NvOsFreadImpl(file, pOutCharacter, 1, &bytes, 0xffffffff);
}

NvError NvOsStat(const char* path, NvOsStatType* pOutStat) {
  pOutStat->type = 0;
  pOutStat->size = 0;
  return NvOsStatImpl(path, pOutStat);
}

int NvOsVsnprintf(char* buffer, size_t size, const char* format,
  va_list arguments) {
  return vsnprintf(buffer, size, format, arguments);
}

}
