#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 mkvparser_Track_Destroy_Track_plt_871470(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
__int64 libwebm_mkvparser_55da60(__int64 a1);
__int64* libwebm_mkvparser_55daf0(__int64* result);
void libwebm_mkvparser_55dc80(__int64 a1, __int64 a2);

__int64 libwebm_mkvparser_55da60(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  mkvparser_Track_Destroy_Track_plt_871470(a1);
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
  v4 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return nn_movie_detail_FreeMemory(a1, v4);
}

__int64* libwebm_mkvparser_55daf0(__int64* result)
{
  __int64 v1;
  __int64* v2;
  atomic_uchar* v3;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;

  v1 = *result;
  v2 = result;
  v3 = (atomic_uchar*)SdkData_e88330;
  v4 = SdkData_e88338[0];
  if (*result != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    result = (__int64*)nn_movie_detail_FreeMemory(v1, v5);
  }
  v6 = v2[1];
  if (v6 != 0) {
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    result = (__int64*)nn_movie_detail_FreeMemory(v6, v7);
  }
  v8 = v2[2];
  if (v8 != 0) {
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    result = (__int64*)nn_movie_detail_FreeMemory(v8, v9);
  }
  v10 = v2[3];
  if (v10 != 0) {
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v11 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    return (__int64*)nn_movie_detail_FreeMemory(v10, v11);
  }
  return result;
}

void libwebm_mkvparser_55dc80(__int64 a1, __int64 a2)
{
  __int64 v2;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  _QWORD* v7;

  if (a2 != 0) {
    v2 = *(_QWORD*)(a2 + 104);
    v4 = (atomic_uchar*)SdkData_e88330;
    v5 = SdkData_e88338[0];
    if (v2 != 0) {
      libwebm_mkvparser_55daf0(*(__int64**)(a2 + 104));
      if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v5 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
      nn_movie_detail_FreeMemory(v2, v6);
    }
    *(_QWORD*)(a2 + 104) = 0;
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v5 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v7 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
    nn_movie_detail_FreeMemory(a2, v7);
  }
}

#pragma GCC visibility pop
