#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotSupported = 2,
  NvError_BadAddress = 3,
  NvError_InsufficientMemory = 6,
};

struct NvWsiDisplayCaps {
  uint32_t reserved00;
  uint32_t reserved04;
  uint8_t reserved08;
  uint8_t reserved09;
  uint32_t reserved0c;
  uint8_t reserved10;
  uint8_t reserved11;
  uint8_t reserved12;
  uint8_t reserved13;
  uint8_t reserved14;
  uint8_t reserved15;
  uint8_t reserved16;
};

// Backend objects start with the function that frees them.
struct NvWsiNativeObject {
  void (*destroy)(NvWsiNativeObject* object);
};

struct NvWsiBackend {
  void* reserved[3];
  uint8_t (*probe)(void* nativeDisplay);
  uint8_t (*supportsWindow)(void* nativeWindow);
  uint8_t (*supportsPixmap)(void* nativePixmap, uint32_t format);
  NvError (*open)(struct NvWsiContext* context, void** pOutHandle);
  void (*close)(void* handle);
  NvError (*createWindow)(void* handle, void* nativeWindow, void* attributes,
    uint32_t width, uint32_t height, uint32_t format,
    NvWsiNativeObject** pOutWindow);
  NvError (*createPixmap)(void* handle, void* nativePixmap, uint32_t format,
    NvWsiNativeObject** pOutPixmap);
  NvError (*getFormatInfo)(void* backend, void* format, void* pOutInfo);
  void (*getDisplayCaps)(void* backend, NvWsiDisplayCaps* pOutCaps);
  void* (*getGpuMapping)(void* backend, void* buffer, void* userData);
  NvError (*setGpuMapping)(void* backend, void* buffer, void* mapping,
    void* userData);
};

// The context doubles as the display, its backend is opened by the first
// reference and closed by the last.
struct NvWsiContext {
  void* nativeContext;
  const NvWsiBackend* backend;
  void* backendContext;
  uint32_t refs;
  void* nativeDisplay;
  void* callback0;
  void* callback1;
  void* userData;
  uint8_t isDumpEnabled;
  uint8_t reserved41[7];
  uint8_t isFillEnabled;
  uint32_t fillValue;
};

static_assert(sizeof(NvWsiContext) == 0x50);

struct NvWsiBackendRegistry {
  const NvWsiBackend* backends[6];
  const NvWsiBackend* defaultBackend;
  int32_t count;
};

extern "C" {

void* NvOsAlloc(uint64_t size);
void NvOsFree(void* pointer);
void* memset(void* destination, int value, uint64_t size);
int strcmp(const char* first, const char* second);
unsigned long strtoul(const char* string, char** pEnd, int base);
NvError NvOsGetConfigU32(const char* name, uint32_t* pOutValue);
NvError NvOsGetConfigString(const char* name, char* value, uint32_t size);

}

[[gnu::visibility("hidden")]] extern NvWsiBackendRegistry g_NvWsiBackends;

[[gnu::visibility("hidden")]] const NvWsiBackend* NvWsiNullBackend();
[[gnu::visibility("hidden")]] const NvWsiBackend* NvWsiDefaultBackend();
[[gnu::visibility("hidden")]] NvError NvWsiWrapWindow(NvWsiContext* context,
  NvWsiNativeObject* window, void* attributes, void* pOutSurface);
[[gnu::visibility("hidden")]] NvError NvWsiWrapPixmap(NvWsiContext* context,
  NvWsiNativeObject* pixmap, void* pOutSurface);

namespace {

// Asks for the backend named by the NV_WINSYS setting.
const uintptr_t NvWsiNativeDisplayFromConfig = 0xa000;
const uint32_t NvWsiConfigValueSize = 100;
const uint32_t NvWsiFillValueSize = 91;

[[gnu::always_inline]] inline void Unref(NvWsiContext* context) {
  if (--context->refs != 0) {
    return;
  }

  context->backend->close(context->backendContext);
  context->backend = nullptr;
  context->backendContext = nullptr;
  context->nativeDisplay = nullptr;
}

}

extern "C" void NvWsiContextDestroy(NvWsiContext* context) {
  NvOsFree(context);
}

extern "C" void* NvWsiGetGpuMapping(NvWsiContext* context, void* buffer) {
  if (context->backend->getGpuMapping == nullptr) {
    return nullptr;
  }

  return context->backend->getGpuMapping(context->backendContext, buffer,
    context->userData);
}

extern "C" NvError NvWsiSetGpuMapping(NvWsiContext* context, void* buffer,
  void* mapping) {
  if (context->backend->setGpuMapping == nullptr) {
    return NvError_NotSupported;
  }

  return context->backend->setGpuMapping(context->backendContext, buffer,
    mapping, context->userData);
}

extern "C" void* NvWsiGetNativeDisplay(NvWsiContext* context) {
  return context->nativeDisplay;
}

extern "C" void NvWsiGetDisplayCaps(NvWsiContext* context,
  NvWsiDisplayCaps* pOutCaps) {
  pOutCaps->reserved00 = 0;
  pOutCaps->reserved04 = 1;
  pOutCaps->reserved08 = 0;
  pOutCaps->reserved09 = 0;
  pOutCaps->reserved0c = 1;
  pOutCaps->reserved10 = 0;
  pOutCaps->reserved11 = 0;
  pOutCaps->reserved12 = 1;
  pOutCaps->reserved13 = 1;
  pOutCaps->reserved14 = 0;
  pOutCaps->reserved15 = 0;
  pOutCaps->reserved16 = 0;
  if (context->backend->getDisplayCaps == nullptr) {
    return;
  }

  context->backend->getDisplayCaps(context->backendContext, pOutCaps);
}

extern "C" NvError NvWsiGetFormatInfo(NvWsiContext* context, void* format,
  void* pOutInfo) {
  if (context->backend->getFormatInfo == nullptr) {
    return NvError_NotSupported;
  }

  return context->backend->getFormatInfo(context->backendContext, format,
    pOutInfo);
}

extern "C" void NvWsiSetCallbacks(NvWsiContext* context, void* callback0,
  void* callback1, void* userData) {
  context->callback0 = callback0;
  context->callback1 = callback1;
  context->userData = userData;
}

extern "C" NvError NvWsiContextCreate(NvWsiContext** pOutContext,
  void* nativeContext) {
  auto* context = static_cast<NvWsiContext*>(
    NvOsAlloc(sizeof(NvWsiContext)));
  if (context == nullptr) {
    return NvError_InsufficientMemory;
  }

  memset(context, 0, sizeof(NvWsiContext));
  context->nativeContext = nativeContext;

  uint32_t dump;
  if (NvOsGetConfigU32("NVWSI_DUMP", &dump) == NvSuccess) {
    context->isDumpEnabled = dump != 0;
  }

  char fill[NvWsiFillValueSize];
  if (NvOsGetConfigString("NVWSI_FILL", fill, sizeof(fill)) == NvSuccess) {
    context->isFillEnabled = 1;
    context->fillValue = strtoul(fill, nullptr, 16);
  }

  if (g_NvWsiBackends.defaultBackend == nullptr) {
    g_NvWsiBackends.backends[g_NvWsiBackends.count++] = NvWsiNullBackend();
    const NvWsiBackend* backend = NvWsiDefaultBackend();
    g_NvWsiBackends.defaultBackend = backend;
    g_NvWsiBackends.backends[g_NvWsiBackends.count++] = backend;
  }

  *pOutContext = context;
  return NvSuccess;
}

// The original calls strcmp for the setting.
extern "C" [[gnu::noinline, clang::no_builtin("strcmp")]] NvError
NvWsiNativeDisplayRef(
  NvWsiContext* context, void* nativeDisplay) {
  if (context->refs++ != 0) {
    return NvSuccess;
  }

  if (reinterpret_cast<uintptr_t>(nativeDisplay) ==
    NvWsiNativeDisplayFromConfig) {
    char value[NvWsiConfigValueSize];
    if (NvOsGetConfigString("NV_WINSYS", value, sizeof(value)) ==
      NvSuccess && strcmp(value, "null") == 0) {
      context->backend = NvWsiNullBackend();
    }

    nativeDisplay = nullptr;
  }

  if (context->backend == nullptr && nativeDisplay == nullptr) {
    context->backend = g_NvWsiBackends.defaultBackend;
  }

  if (context->backend == nullptr) {
    for (int64_t i = 0; i < g_NvWsiBackends.count; i++) {
      if (g_NvWsiBackends.backends[i]->probe(nativeDisplay) != 0) {
        context->backend = g_NvWsiBackends.backends[i];
        break;
      }
    }
  }

  NvError result = NvError_BadAddress;
  if (context->backend != nullptr) {
    context->nativeDisplay = nativeDisplay;
    result = context->backend->open(context, &context->backendContext);
    if (result == NvSuccess) {
      return NvSuccess;
    }
  }

  context->refs = 0;
  context->backend = nullptr;
  return result;
}

extern "C" void NvWsiNativeDisplayUnref(NvWsiContext* context) {
  Unref(context);
}

extern "C" NvError NvWsiWindowCreate(NvWsiContext* context,
  void* nativeWindow, void* attributes, uint32_t width, uint32_t height,
  uint32_t format, void* pOutSurface) {
  NvWsiNativeObject* window = nullptr;
  if (context->backend->supportsWindow == nullptr ||
    context->backend->supportsWindow(nativeWindow) == 0) {
    return NvError_NotSupported;
  }

  NvError result = NvWsiNativeDisplayRef(context, context->nativeDisplay);
  if (result != NvSuccess) {
    return result;
  }

  result = context->backend->createWindow(context->backendContext,
    nativeWindow, attributes, width, height, format, &window);
  if (result == NvSuccess) {
    result = NvWsiWrapWindow(context, window, attributes, pOutSurface);
    if (result == NvSuccess) {
      return NvSuccess;
    }

    window->destroy(window);
  }

  Unref(context);
  return result;
}

extern "C" NvError NvWsiPixmapCreate(NvWsiContext* context,
  void* nativePixmap, uint32_t format, void* pOutSurface) {
  NvWsiNativeObject* pixmap = nullptr;
  if (context->backend->supportsPixmap == nullptr ||
    context->backend->supportsPixmap(nativePixmap, format) == 0) {
    return NvError_NotSupported;
  }

  NvError result = NvWsiNativeDisplayRef(context, context->nativeDisplay);
  if (result != NvSuccess) {
    return result;
  }

  result = context->backend->createPixmap(context->backendContext,
    nativePixmap, format, &pixmap);
  if (result == NvSuccess) {
    result = NvWsiWrapPixmap(context, pixmap, pOutSurface);
    if (result == NvSuccess) {
      return NvSuccess;
    }

    pixmap->destroy(pixmap);
  }

  Unref(context);
  return result;
}
