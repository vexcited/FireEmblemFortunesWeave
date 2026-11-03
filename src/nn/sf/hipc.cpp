#include "nn/sf/hipc.hpp"

#include "rtld/string.hpp"

extern "C" uint32_t svcCloseHandle(uint32_t handle);
extern "C" uint32_t svcSendSyncRequest(uint32_t handle);
extern "C" uint32_t svcSendSyncRequestWithUserBuffer(void* buffer, size_t size,
                                                     uint32_t handle);

namespace nn::sf::hipc {

PortProcessorState RegisteredPortProcessor;

uint32_t InitializeServiceManager() asm("_ZN2nn2sm10InitializeEv");
uint32_t FinalizeServiceManager() asm("_ZN2nn2sm8FinalizeEv");
uint32_t GetServiceHandle(
  uint32_t* handle, const char* name,
  size_t length) asm("_ZN2nn2sm16GetServiceHandleEPNS_3svc6HandleEPKcm");
[[noreturn]] void AbortServiceResult(const uint32_t*) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

void InitializeHipcServiceResolution() {
  uint32_t result = InitializeServiceManager();

  if (result) {
    AbortServiceResult(&result);
  }
}

void FinalizeHipcServiceResolution() {
  uint32_t result = FinalizeServiceManager();

  if (result) {
    AbortServiceResult(&result);
  }
}

PortProcessor* GetPortProcessor(const char* name) {
  PortProcessor* processor = RegisteredPortProcessor.processor;

  if (processor) {
    using Filter = bool (*)(PortProcessor*, const char*);
    auto filter =
      reinterpret_cast<Filter>(RegisteredPortProcessor.filter_vtable[1]);

    if (filter(processor, name)) {
      return RegisteredPortProcessor.processor;
    }

    return nullptr;
  }

  return nullptr;
}

uint32_t ConnectToHipcService(uint32_t* handle, const char* name) {
  PortProcessor* processor = GetPortProcessor(name);

  if (processor) {
    using Connect = uint32_t (*)(PortProcessor*, uint32_t*, const char*);
    return reinterpret_cast<Connect>(processor->vtable[5])(processor, handle,
                                                           name);
  }

  return GetServiceHandle(handle, name, strlen(name));
}

void* GetMessageBufferOnTls() {
  void* buffer;
  asm volatile("mrs %0, tpidrro_el0" : "=r"(buffer));
  return buffer;
}

uint32_t SendSyncRequest(uint32_t handle, void* buffer, size_t size) {
  uint32_t result;

  if (buffer == GetMessageBufferOnTls()) {
    result = svcSendSyncRequest(handle);
  }
  else {
    result = svcSendSyncRequestWithUserBuffer(buffer, size, handle);
  }

  return (result & 0x3fffff) == 0xf601 ? 0x25a0b : result;
}

void CloseClientSessionHandle(uint32_t handle) {
  uint32_t result = svcCloseHandle(handle);

  if (result) {
    AbortServiceResult(&result);
  }
}

}
