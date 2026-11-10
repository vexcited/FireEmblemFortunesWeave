#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85e050(unsigned __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88708;
extern __int64 SdkData_e88740;
extern void (*SdkData_e88338[493])();
_QWORD* nandroid_extractors_4e7430();
void nandroid_extractors_4e7460(__int64 a1, _QWORD* a2);
__int64 nandroid_extractors_4e7490(__int64 a1, __int64* a2);
__int64 nandroid_extractors_4e7540();

_QWORD* nandroid_extractors_4e7430()
{
  _QWORD* result;

  result = (_QWORD*)SdkRoutine_85e050(0x10u);
  *result = SdkData_e88708 + 16;
  return result;
}

void nandroid_extractors_4e7460(__int64 a1, _QWORD* a2)
{
  *a2 = SdkData_e88708 + 16;
}

__int64 nandroid_extractors_4e7490(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v7;

  v2 = *a2;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v7 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v7 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  return nn_movie_detail_FreeMemory(v2, v5);
}

__int64 nandroid_extractors_4e7540() { return SdkData_e88740; }

#pragma GCC visibility pop
