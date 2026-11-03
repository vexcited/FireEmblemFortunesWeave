#pragma once

#include "nn/sm/initialization.hpp"

namespace nn::sm {

uint32_t RegisterService(uint32_t* output, uint32_t spaces, const char* name,
  size_t length, int maximum_sessions, bool light) asm(
  "_ZN2nn2sm15RegisterServiceEPNS_3svc6HandleENS0_15ServiceSpaceSetEPKcmib");
uint32_t UnregisterService(uint32_t spaces, const char* name, size_t length)
  asm("_ZN2nn2sm17UnregisterServiceENS0_15ServiceSpaceSetEPKcm");
uint32_t InitializeForManager();
[[noreturn]] void FinalizeForManager();
uint32_t RegisterProcess(uint64_t process, const void* access_control,
  size_t access_control_size, const void* services, size_t services_size)
  asm("_ZN2nn2sm15RegisterProcessENS_2os9ProcessIdEPKvmS4_m");
uint32_t RegisterProcess2(uint64_t process, const void* access_control,
  size_t access_control_size, const void* services, size_t services_size,
  uint32_t space) asm(
  "_ZN2nn2sm16RegisterProcess2ENS_2os9ProcessIdEPKvmS4_mNS0_12ServiceSpaceE");
uint32_t EnableServiceSpaceNxDebug();
uint32_t UnregisterProcess(uint64_t process)
  asm("_ZN2nn2sm17UnregisterProcessENS_2os9ProcessIdE");

namespace detail {

uint32_t OpenServiceSession(uint32_t* output, const char* name);

}
}
