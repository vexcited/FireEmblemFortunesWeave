#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::sm {

uint32_t Initialize();
uint32_t Finalize();
uint32_t GetServiceHandle(uint32_t* output, const char* name, size_t length)
  asm("_ZN2nn2sm16GetServiceHandleEPNS_3svc6HandleEPKcm");

namespace detail {

struct Session {
  uint32_t handle;
};

uint32_t SendSessionRequest(Session* session);
void CloseSession(Session* session);
void DestroySession(void* session);

}
}
