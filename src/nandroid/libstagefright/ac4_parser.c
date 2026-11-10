#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e888c0;
extern void (*SdkData_e88338[493])();
__int64 nandroid_AC4Parser_AC4Parser(void* this_);

__int64 nandroid_AC4Parser_AC4Parser(void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  __int64 result;
  char* v5;
  int v6;

  *(_QWORD*)this_ = SdkData_e888c0 + 16;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  result = nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = result;
  v5 = (char*)this_ + 16;
  *((_QWORD*)v5 + 2) = 0;
  *((_QWORD*)v5 - 1) = v5;
  return result;
}

#pragma GCC visibility pop
