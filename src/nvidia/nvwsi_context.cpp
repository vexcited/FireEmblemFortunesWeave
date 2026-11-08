#include <stdint.h>

enum NvError : int32_t {
  NvError_NotSupported = 2,
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

struct NvWsiBackend {
  void* reserved[10];
  NvError (*getFormatInfo)(void* backend, void* format, void* pOutInfo);
  void (*getDisplayCaps)(void* backend, NvWsiDisplayCaps* pOutCaps);
  void* (*getGpuMapping)(void* backend, void* buffer, void* userData);
  NvError (*setGpuMapping)(void* backend, void* buffer, void* mapping,
    void* userData);
};

struct NvWsiContext {
  void* reserved00;
  const NvWsiBackend* backend;
  void* backendContext;
  void* reserved18;
  void* nativeDisplay;
  void* callback0;
  void* callback1;
  void* userData;
};

extern "C" void NvOsFree(void* pointer);

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
