#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::sf::hipc {

struct PortProcessor {
  uintptr_t* vtable;
};

struct PortProcessorState {
  PortProcessor* processor;
  uintptr_t reserved;
  uintptr_t* filter_vtable;
};

extern PortProcessorState RegisteredPortProcessor;

void InitializeHipcServiceResolution();
void FinalizeHipcServiceResolution();
PortProcessor* GetPortProcessor(const char* name);
uint32_t ConnectToHipcService(uint32_t* handle, const char* name) asm(
  "_ZN2nn2sf4hipc20ConnectToHipcServiceEPNS_3svc6HandleEPKc");
void* GetMessageBufferOnTls();
uint32_t SendSyncRequest(uint32_t handle, void* buffer, size_t size) asm(
  "_ZN2nn2sf4hipc15SendSyncRequestENS_3svc6HandleEPvm");
void CloseClientSessionHandle(uint32_t handle) asm(
  "_ZN2nn2sf4hipc24CloseClientSessionHandleENS_3svc6HandleE");

}
