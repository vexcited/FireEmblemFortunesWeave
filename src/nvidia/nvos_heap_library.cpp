#include <stddef.h>
#include <stdint.h>

#include "nn/os/mutex.hpp"

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_InsufficientMemory = 6,
  NvError_LibraryNotFound = 0x30008,
};

struct NvOsHeap;

// The backing heap is created on first use, over the memory given to the
// allocator.
struct NvOsHeapAllocator {
  uint8_t reserved00[0x28];
  NvOsHeap* heap;
  uint8_t reserved30;
  uint8_t hasCallbacks;
  uint8_t reserved32[6];
  void* base;
  size_t size;
  uint8_t reserved48[0x18];
  void* allocCallback;
  void* freeCallback;
  void* callbackContext;
};

struct NvOsLibrarySymbol {
  const char* name;
  void* address;
};

struct NvOsLibrary {
  const char* name;
  size_t symbolCount;
  const NvOsLibrarySymbol* symbols;
};

struct NvOsExitHandler {
  void (*handler)(void*);
  NvOsExitHandler* next;
};

struct NvOsExitHandlerList {
  NvOsExitHandler* last;
  NvOsExitHandler* first;
};

extern "C" int strcmp(const char* first, const char* second);

[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvOsHeapMutex;
[[gnu::visibility("hidden")]] extern NvOsLibrary g_NvOsLibraries[];
[[gnu::visibility("hidden")]] extern nn::os::MutexType g_NvOsExitMutex;
[[gnu::visibility("hidden")]] extern NvOsExitHandlerList g_NvOsExitHandlers;

[[gnu::visibility("hidden")]] NvOsHeap* NvOsHeapCreate(
  NvOsHeapAllocator* allocator, void* base, size_t size, uint32_t flags);
[[gnu::visibility("hidden")]] void* NvOsHeapAlloc(NvOsHeap* heap,
  size_t size);
[[gnu::visibility("hidden")]] void* NvOsHeapRealloc(NvOsHeap* heap,
  void* pointer, size_t size);
[[gnu::visibility("hidden")]] void* NvOsHeapAllocAlign(NvOsHeap* heap,
  size_t alignment, size_t size);
[[gnu::visibility("hidden")]] void NvOsHeapPrintStatistics(NvOsHeap* heap);
[[gnu::visibility("hidden")]] int32_t NvOsLibraryFind(const char* name);

namespace {

[[gnu::always_inline]] inline NvOsHeap* GetHeap(
  NvOsHeapAllocator* allocator) {
  if (allocator->heap == nullptr) {
    nn::os::LockMutex(&g_NvOsHeapMutex);
    if (allocator->heap == nullptr) {
      allocator->heap = NvOsHeapCreate(allocator, allocator->base,
        allocator->size, 1);
    }

    nn::os::UnlockMutex(&g_NvOsHeapMutex);
  }

  return allocator->heap;
}

}

// A failed allocation dumps the heap statistics.
extern "C" void* NvOsHeapAllocatorAlloc(NvOsHeapAllocator* allocator,
  size_t size) {
  void* pointer = NvOsHeapAlloc(GetHeap(allocator), size);
  if (pointer == nullptr) {
    NvOsHeapPrintStatistics(GetHeap(allocator));
  }

  return pointer;
}

extern "C" void NvOsHeapAllocatorPrintStatistics(
  NvOsHeapAllocator* allocator) {
  NvOsHeapPrintStatistics(GetHeap(allocator));
}

extern "C" void* NvOsHeapAllocatorRealloc(NvOsHeapAllocator* allocator,
  void* pointer, size_t size) {
  void* result = NvOsHeapRealloc(GetHeap(allocator), pointer, size);
  if (result == nullptr) {
    NvOsHeapPrintStatistics(GetHeap(allocator));
  }

  return result;
}

extern "C" void* NvOsHeapAllocatorAllocAlign(NvOsHeapAllocator* allocator,
  size_t alignment, size_t size) {
  void* pointer = NvOsHeapAllocAlign(GetHeap(allocator), alignment, size);
  if (pointer == nullptr) {
    NvOsHeapPrintStatistics(GetHeap(allocator));
  }

  return pointer;
}

extern "C" void NvOsHeapAllocatorSetCallbacks(NvOsHeapAllocator* allocator,
  void* allocCallback, void* freeCallback, void* context) {
  GetHeap(allocator);
  allocator->allocCallback = allocCallback;
  allocator->freeCallback = freeCallback;
  allocator->callbackContext = context;
  allocator->hasCallbacks = 1;
}

// Libraries are linked in statically, loading one looks it up by name.
extern "C" NvError NvOsLibraryLoad(const char* name,
  NvOsLibrary** pOutLibrary) {
  const int32_t index = NvOsLibraryFind(name);
  if (index == -1) {
    return NvError_LibraryNotFound;
  }

  NvOsLibrary* library = &g_NvOsLibraries[static_cast<uint32_t>(index)];
  if (library->name == nullptr) {
    return NvError_LibraryNotFound;
  }

  *pOutLibrary = library;
  return NvSuccess;
}

// A zero symbol count unregisters the library.
extern "C" NvError NvOsHosRegisterLibrary(const char* name, size_t symbolCount,
  const NvOsLibrarySymbol* symbols) {
  const int32_t index = NvOsLibraryFind(name);
  if (index == -1) {
    return NvError_InsufficientMemory;
  }

  NvOsLibrary* library = &g_NvOsLibraries[static_cast<uint32_t>(index)];
  if (symbolCount == 0) {
    library->symbolCount = 0;
    library->symbols = nullptr;
    library->name = nullptr;
    return NvSuccess;
  }

  library->name = name;
  library->symbolCount = symbolCount;
  library->symbols = symbols;
  return NvSuccess;
}

extern "C" void* NvOsLibraryGetSymbol(const NvOsLibrary* library,
  const char* name) {
  for (size_t i = 0; i < library->symbolCount; i++) {
    if (strcmp(name, library->symbols[i].name) == 0) {
      return library->symbols[i].address;
    }
  }

  return nullptr;
}

// Handlers are kept from first to last, append puts the new one last.
extern "C" void NvOsRegisterExitHandler(void (*handler)(void*),
  NvOsExitHandler* node, uint8_t append) {
  nn::os::LockMutex(&g_NvOsExitMutex);

  if (node->next == nullptr) {
    node->handler = handler;

    NvOsExitHandler* last = g_NvOsExitHandlers.last;
    NvOsExitHandler* first = g_NvOsExitHandlers.first;
    if (last == nullptr || first == nullptr) {
      node->next = nullptr;
      g_NvOsExitHandlers.last = node;
      g_NvOsExitHandlers.first = node;
    }
    else if (append != 0) {
      node->next = nullptr;
      last->next = node;
      g_NvOsExitHandlers.last = node;
    }
    else {
      node->next = first;
      g_NvOsExitHandlers.first = node;
    }
  }

  nn::os::UnlockMutex(&g_NvOsExitMutex);
}
