#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_BadValue = 11,
  NvError_ConfigVarNotFound = 0x30006,
};

extern "C" int vsnprintf(char* buffer, size_t size, const char* format,
  va_list arguments);
extern "C" uint32_t NvUStrtoul(const char* string, char** pEnd, int32_t base);

// Directories are not supported, the calls end in a stub returning
// NvError_NotImplemented that the linker folded with another function.
[[gnu::visibility("hidden")]] NvError NvOsDirectoryNotImplemented(
  const char* path, void* pOutDirectory);
[[gnu::visibility("hidden")]] NvError NvOsDirectoryNotImplemented(
  void* directory, char* name, size_t size);
[[gnu::visibility("hidden")]] NvError NvOsDirectoryNotImplemented(
  const char* path);
[[gnu::visibility("hidden")]] void NvOsDirectoryRelease(void* directory);

// Also a stub answering 1, folded with the directory one.
[[gnu::visibility("hidden")]] NvError NvOsConfigCheck(const char* name,
  uint32_t* pOutValue);

[[gnu::visibility("hidden")]] NvError NvOsConfigQuery(const char* name,
  char* value, uint32_t size);
[[gnu::visibility("hidden")]] NvError NvOsSysConfigQuery(const char* name,
  char* value, uint32_t size);
[[gnu::visibility("hidden")]] NvError NvOsConfigGetString(const char* name,
  char* value, uint32_t size);

namespace {

// The query answers 1 when the name has to be read from the store.
const int32_t NvOsConfigStored = 1;

}

extern "C" NvError NvOsOpendir(const char* path, void* pOutDirectory) {
  return NvOsDirectoryNotImplemented(path, pOutDirectory);
}

extern "C" void NvOsClosedir(void* directory) {
  if (directory != nullptr) {
    NvOsDirectoryRelease(directory);
  }
}

extern "C" NvError NvOsReaddir(void* directory, char* name, size_t size) {
  return NvOsDirectoryNotImplemented(directory, name, size);
}

extern "C" NvError NvOsMkdir(const char* path) {
  return NvOsDirectoryNotImplemented(path);
}

extern "C" NvError NvOsGetConfigU32(const char* name, uint32_t* pOutValue) {
  const NvError check = NvOsConfigCheck(name, pOutValue);
  if (check != NvOsConfigStored) {
    return check;
  }

  char value[16] = {};
  char* end = nullptr;

  NvError result = NvOsConfigQuery(name, value, sizeof(value));
  if (result == NvOsConfigStored) {
    result = NvOsConfigGetString(name, value, sizeof(value));
  }

  if (result != NvSuccess) {
    return NvError_ConfigVarNotFound;
  }

  value[sizeof(value) - 1] = '\0';
  *pOutValue = NvUStrtoul(value, &end, 0);
  return end == value ? NvError_BadValue : NvSuccess;
}

extern "C" NvError NvOsGetConfigString(const char* name, char* value,
  uint32_t size) {
  NvError result = NvOsConfigQuery(name, value, size);
  if (result == NvOsConfigStored) {
    result = NvOsConfigGetString(name, value, size);
  }

  return result == NvSuccess ? NvSuccess : NvError_ConfigVarNotFound;
}

extern "C" NvError NvOsGetSysConfigString(const char* name, char* value,
  uint32_t size) {
  NvError result = NvOsSysConfigQuery(name, value, size);
  if (result == NvOsConfigStored) {
    result = NvOsConfigGetString(name, value, size);
  }

  return result == NvSuccess ? NvSuccess : NvError_ConfigVarNotFound;
}

extern "C" int NvOsSnprintf(char* buffer, size_t size, const char* format,
  ...) {
  va_list arguments;
  va_start(arguments, format);
  const int result = vsnprintf(buffer, size, format, arguments);
  va_end(arguments);
  return result;
}
