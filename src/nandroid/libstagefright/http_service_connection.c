#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD, _QWORD);
__int64 nandroid_RefBase_RefBase_plt(_QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e885c0;
extern __int64 SdkData_e885c8;
extern void (*SdkData_e88338[493])();
__int64* nandroid_HttpServiceConnection_HttpServiceConnection_4dec50(
    __int64* result, __int64* a2, __int64 a3);
__int64 nandroid_HttpServiceConnection_HttpServiceConnection_4dec80(_QWORD* a1,
                                                                    __int64 a2);
void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4decf0(
    void* this_, __int64 a2);
void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4ded10(
    void* this_, __int64 a2);
void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4deda0(
    void* this_, __int64 a2);
__attribute__((swiftcall)) void
nandroid_HttpServiceConnection_makeHTTPConnection(PSEUDO_X8 x8_, void* this_);

__int64* nandroid_HttpServiceConnection_HttpServiceConnection_4dec50(
    __int64* result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;

  v3 = a2[1];
  *result = v3;
  *(__int64*)((char*)result + *(_QWORD*)(v3 - 24)) = a2[2];
  v4 = *a2;
  *result = *a2;
  *(__int64*)((char*)result + *(_QWORD*)(v4 - 24)) = a2[3];
  result[1] = a3;
  result[2] = 0;
  return result;
}

__int64 nandroid_HttpServiceConnection_HttpServiceConnection_4dec80(_QWORD* a1,
                                                                    __int64 a2)
{
  __int64 result;
  __int64 v5;

  result = nandroid_RefBase_RefBase_plt(a1 + 3);
  v5 = SdkData_e885c0 + 104;
  *a1 = SdkData_e885c0 + 24;
  a1[1] = a2;
  a1[2] = 0;
  a1[3] = v5;
  return result;
}

void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4decf0(
    void* this_, __int64 a2)
{
  nandroid_RefBase_Destroy_RefBase_plt_86def0(
      (char*)this_ + *(_QWORD*)(*(_QWORD*)this_ - 24LL) + 24, a2);
}

void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4ded10(
    void* this_, __int64 a2)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  nandroid_RefBase_Destroy_RefBase_plt_86def0((char*)this_ + 24, a2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  nn_movie_detail_FreeMemory((__int64)this_, v5);
}

void nandroid_HttpServiceConnection_Destroy_HttpServiceConnection_4deda0(
    void* this_, __int64 a2)
{
  char* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  v2 = (char*)this_ + *(_QWORD*)(*(_QWORD*)this_ - 24LL);
  nandroid_RefBase_Destroy_RefBase_plt_86def0(v2 + 24, a2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  nn_movie_detail_FreeMemory((__int64)v2, v5);
}

__attribute__((swiftcall)) void

nandroid_HttpServiceConnection_makeHTTPConnection(PSEUDO_X8 x8_, void* this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD** v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;

  ++*((_QWORD*)this_ + 2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v6 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  v7 = SdkRoutine_4c3860(16, 40, v6);
  v9 = *((_QWORD*)this_ + 1);
  v8 = *((_QWORD*)this_ + 2);
  v10 = (_QWORD*)v7;
  nandroid_RefBase_RefBase_plt(v7 + 24);
  v11 = SdkData_e885c8 + 144;
  *v10 = SdkData_e885c8 + 24;
  v10[1] = v9;
  v10[2] = v8;
  v10[3] = v11;
  *a2 = v10;
  {
    nandroid_RefBase_incStrong_plt(v10 + 3, a2);
    return;
  }
}

#pragma GCC visibility pop
