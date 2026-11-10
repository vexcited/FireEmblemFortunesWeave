#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88a38;
extern void (*SdkData_e88338[493])();
__int64 NuCachedSource2_514860(_QWORD* a1);

__int64 NuCachedSource2_514860(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88a38 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 16);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 16);
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(v4) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(v4);
      }
      v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v3, v7);
      v2 = a1[1];
      v3 = v6;
    } while (v6 != v2);
  }
  *(_QWORD*)(v2 + 8) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 16) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

#pragma GCC visibility pop
