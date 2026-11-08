#include <stddef.h>
#include <stdlib.h>

using NvnGenericFunction = void (*)();

struct NvnBootstrapTable {
  NvnGenericFunction (*getProcAddress)(void* device, const char* name);
  void* (*devtoolsBootstrap)();
};

namespace nv {

using AllocateFunction = void* (*)(size_t size, size_t alignment,
  void* userData);
using FreeFunction = void (*)(void* address, void* userData);
using ReallocateFunction = void* (*)(void* address, size_t size,
  void* userData);

}

[[gnu::visibility("hidden")]] extern bool g_IsNvnBootstrapped;
[[gnu::visibility("hidden")]] extern const NvnBootstrapTable*
  g_pNvnBootstrapTable;
[[gnu::visibility("hidden")]] extern nv::AllocateFunction
  g_DevtoolsAllocate;
[[gnu::visibility("hidden")]] extern nv::FreeFunction g_DevtoolsFree;
[[gnu::visibility("hidden")]] extern nv::ReallocateFunction
  g_DevtoolsReallocate;
[[gnu::visibility("hidden")]] extern void* g_pDevtoolsUserData;

[[gnu::visibility("hidden")]] const NvnBootstrapTable* NvnGetBootstrapTable();
[[gnu::visibility("hidden")]] NvnGenericFunction NvnGetProcAddressInternal(
  void* device, const char* name);
[[gnu::visibility("hidden")]] void* DevtoolsAllocate(size_t size,
  size_t alignment, void* userData);
[[gnu::visibility("hidden")]] void DevtoolsFree(void* address,
  void* userData);
[[gnu::visibility("hidden")]] void* DevtoolsReallocate(void* address,
  size_t size, void* userData);
[[gnu::visibility("hidden")]] void SetDevtoolsAllocatorImpl(
  nv::AllocateFunction allocate, nv::FreeFunction free,
  nv::ReallocateFunction reallocate, void* userData);

extern "C" NvnGenericFunction nvnBootstrapLoader(const char* name) {
  g_IsNvnBootstrapped = true;

  const NvnBootstrapTable* table = g_pNvnBootstrapTable;
  if (table == nullptr) {
    table = NvnGetBootstrapTable();
    g_pNvnBootstrapTable = table;
    if (table == nullptr) {
      return nullptr;
    }
  }

  return table->getProcAddress(nullptr, name);
}

extern "C" NvnGenericFunction nvnBootstrapLoaderInternal(const char* name) {
  return NvnGetProcAddressInternal(nullptr, name);
}

extern "C" void* nvnDevtoolsBootstrap() {
  const NvnBootstrapTable* table = NvnGetBootstrapTable();
  if (table == nullptr) {
    return nullptr;
  }

  return table->devtoolsBootstrap();
}

namespace nv {

// Must be set once, before the first bootstrap.
void SetGraphicsDevtoolsAllocator(AllocateFunction allocate,
  FreeFunction free, ReallocateFunction reallocate, void* userData) {
  if (g_IsNvnBootstrapped == 1 || g_DevtoolsAllocate != nullptr ||
    g_DevtoolsFree != nullptr || g_DevtoolsReallocate != nullptr ||
    allocate == nullptr || free == nullptr || reallocate == nullptr) {
    abort();
  }

  g_DevtoolsAllocate = allocate;
  g_DevtoolsFree = free;
  g_DevtoolsReallocate = reallocate;
  g_pDevtoolsUserData = userData;
  SetDevtoolsAllocatorImpl(DevtoolsAllocate, DevtoolsFree,
    DevtoolsReallocate, userData);
}

void GetGraphicsDevtoolsAllocator(AllocateFunction* pOutAllocate,
  FreeFunction* pOutFree, ReallocateFunction* pOutReallocate,
  void** pOutUserData) {
  *pOutAllocate = g_DevtoolsAllocate;
  *pOutFree = g_DevtoolsFree;
  *pOutReallocate = g_DevtoolsReallocate;
  *pOutUserData = g_pDevtoolsUserData;
}

}
