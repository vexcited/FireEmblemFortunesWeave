#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::ro {

struct Module;

Result InitializeWithPortName(const char* name);

[[gnu::visibility("hidden")]] Result LoadModuleImpl(Module* pOutModule,
  const void* image, void* buffer, size_t bufferSize, int flag,
  bool isNotReferenced);
[[gnu::visibility("hidden")]] Result LookupSymbolImpl(uintptr_t* pOutAddress,
  const char* name, uintptr_t caller);

Result Initialize() {
  return InitializeWithPortName("ldr:ro");
}

Result LoadModule(Module* pOutModule, const void* image, void* buffer,
  size_t bufferSize, int flag) {
  return LoadModuleImpl(pOutModule, image, buffer, bufferSize, flag, false);
}

Result LoadModule(Module* pOutModule, const void* image, void* buffer,
  size_t bufferSize, int flag, bool isNotReferenced) {
  return LoadModuleImpl(pOutModule, image, buffer, bufferSize, flag,
    isNotReferenced);
}

Result LookupSymbol(uintptr_t* pOutAddress, const char* name) {
  return LookupSymbolImpl(pOutAddress, name, 0);
}

// The next symbol is searched after the module of the caller.
Result LookupNextSymbol(uintptr_t* pOutAddress, const char* name) {
  return LookupSymbolImpl(pOutAddress, name,
    reinterpret_cast<uintptr_t>(__builtin_return_address(0)));
}

}

extern "C" {

[[gnu::visibility("hidden")]] extern const uint8_t g_RoDataStart[];
[[gnu::visibility("hidden")]] extern const uint8_t g_RoDataEnd[];

const void* nndetailRoGetRoDataStart() {
  return g_RoDataStart;
}

const void* nndetailRoGetRoDataEnd() {
  return g_RoDataEnd;
}

}
