#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD);
__int64 nandroid_RefBase_RefBase_plt(_QWORD);
__int64 nandroid_StreamSource_Destroy_StreamSource_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_ClearLightEvent_plt(_QWORD);
__int64 nn_os_FinalizeLightEvent_plt(_QWORD);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_InitializeLightEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_TimedWaitLightEvent_plt(_QWORD, _QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e885d0;
extern __int64 SdkData_e885d8;
extern __int64 SdkData_e885e0;
extern void (*SdkData_e88338[493])();
__int64 nandroid_StreamSource_StreamSource_4dfad0(__int64* a1, __int64* a2,
                                                  __int64 a3);
__int64 nandroid_StreamSource_StreamSource_4dfb70(__int64 a1, __int64 a2);
void nandroid_StreamSource_Destroy_StreamSource_4dfc00(void* this_,
                                                       __int64* a2);
void nandroid_StreamSource_Destroy_StreamSource_4dfcd0(void* this_);
void nandroid_StreamSource_Destroy_StreamSource_4dfd10(void* this_);
void nandroid_StreamSource_Destroy_StreamSource_4dfd50(void* this_);
void nandroid_StreamSource_Destroy_StreamSource_4dfdf0(void* this_);
__int64 nandroid_StreamSource_readAt(void* this_, __int64 a2, void* a3,
                                     __int64 a4);
__int64 nandroid_StreamSource_getSize(void* this_, __int64* a2);

__int64 nandroid_StreamSource_StreamSource_4dfad0(__int64* a1, __int64* a2,
                                                  __int64 a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v3 = a1;
  *a1 = SdkData_e885d0 + 16;
  v4 = a2[1];
  *a1 = v4;
  *(__int64*)((char*)a1 + *(_QWORD*)(v4 - 24)) = a2[2];
  a1[1] = 0;
  v5 = *a2;
  *a1 = *a2;
  *(__int64*)((char*)a1 + *(_QWORD*)(v5 - 24)) = a2[3];
  a1[2] = 0x7FFFFFFFFFFFFFFFLL;
  a1[3] = a3;
  nn_os_InitializeLightEvent_plt(a1 + 4, 0, 1);
  *((_WORD*)v3 + 36) = 0;
  v3 += 9;
  *(__int64*)((char*)v3 + 4) = 0;
  v3[2] = 0;
  *((_DWORD*)v3 + 6) = 0;
  *(v3 - 3) = 0;
  *(v3 - 2) = 0;
  *(v3 - 1) = 0;
  return nn_os_InitializeMutex_plt(v3, 1, 0);
}

__int64 nandroid_StreamSource_StreamSource_4dfb70(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = a1;
  nandroid_RefBase_RefBase_plt(a1 + 104);
  v4 = SdkData_e885d8 + 24;
  *(_QWORD*)(v2 + 104) = SdkData_e885d8 + 184;
  *(_QWORD*)v2 = v4;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 16) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD*)(v2 + 24) = a2;
  nn_os_InitializeLightEvent_plt(v2 + 32, 0, 1);
  *(_WORD*)(v2 + 72) = 0;
  v2 += 72;
  *(_QWORD*)(v2 + 4) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_DWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 - 24) = 0;
  *(_QWORD*)(v2 - 16) = 0;
  *(_QWORD*)(v2 - 8) = 0;
  return nn_os_InitializeMutex_plt(v2, 1, 0);
}

void nandroid_StreamSource_Destroy_StreamSource_4dfc00(void* this_, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD* v9;

  v2 = *a2;
  *(_QWORD*)this_ = *a2;
  *(_QWORD*)((char*)this_ + *(_QWORD*)(v2 - 24)) = a2[3];
  nn_os_FinalizeMutex_plt((char*)this_ + 72);
  nn_os_FinalizeLightEvent_plt((char*)this_ + 32);
  v5 = a2[1];
  *(_QWORD*)this_ = v5;
  *(_QWORD*)((char*)this_ + *(_QWORD*)(v5 - 24)) = a2[2];
  v6 = *((_QWORD*)this_ + 1);
  if (v6 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v8 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    nn_movie_detail_FreeMemory(v6, v9);
  }
}

void nandroid_StreamSource_Destroy_StreamSource_4dfcd0(void* this_)
{

  nandroid_StreamSource_Destroy_StreamSource_plt(this_, SdkData_e885e0);
  nandroid_RefBase_Destroy_RefBase_plt_86def0((char*)this_ + 104);
}

void nandroid_StreamSource_Destroy_StreamSource_4dfd10(void* this_)
{
  char* v1;

  v1 = (char*)this_ + *(_QWORD*)(*(_QWORD*)this_ - 24LL);
  nandroid_StreamSource_Destroy_StreamSource_plt(v1, SdkData_e885e0);
  nandroid_RefBase_Destroy_RefBase_plt_86def0(v1 + 104);
}

void nandroid_StreamSource_Destroy_StreamSource_4dfd50(void* this_)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  nandroid_StreamSource_Destroy_StreamSource_plt(this_, SdkData_e885e0);
  nandroid_RefBase_Destroy_RefBase_plt_86def0((char*)this_ + 104);
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

void nandroid_StreamSource_Destroy_StreamSource_4dfdf0(void* this_)
{
  char* v1;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v6;

  v1 = (char*)this_ + *(_QWORD*)(*(_QWORD*)this_ - 24LL);
  nandroid_StreamSource_Destroy_StreamSource_plt(v1, SdkData_e885e0);
  nandroid_RefBase_Destroy_RefBase_plt_86def0(v1 + 104);
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
  nn_movie_detail_FreeMemory((__int64)v1, v5);
}

__int64 nandroid_StreamSource_readAt(void* this_, __int64 a2, void* a3,
                                     __int64 a4)
{
  __int64 v4;
  unsigned int (***v9)(_QWORD, void*);

  v4 = 0;
  if (a3 != nullptr && a4 != 0) {
    nn_os_LockMutex_plt((char*)this_ + 72);
    if (a2 != *((_QWORD*)this_ + 6) &&
            ((*((_QWORD*)this_ + 6) = a2,
              nn_os_ClearLightEvent_plt((char*)this_ + 32),
              (*(unsigned int (**)(_QWORD, _QWORD))(**((_QWORD**)this_ + 3) +
                                                    8LL))(
                  *((_QWORD*)this_ + 3), *((_QWORD*)this_ + 6)) != 0) ||
             (nn_os_TimedWaitLightEvent_plt((char*)this_ + 32, 1000000000) &
              1) == 0) ||
        (*((_QWORD*)this_ + 8) = 0,
         v9 = *((unsigned int (****)(_QWORD, void*))this_ + 3),
         *((_QWORD*)this_ + 7) = a4, (**v9)(v9, a3) != 0)) {
      v4 = 0;
    }
    else {
      v4 = *((_QWORD*)this_ + 8);
      *((_QWORD*)this_ + 6) += v4;
    }
    nn_os_UnlockMutex_plt((char*)this_ + 72);
  }
  return v4;
}

__int64 nandroid_StreamSource_getSize(void* this_, __int64* a2)
{
  if (a2 == nullptr) {
    return 2147483656LL;
  }
  *a2 = *((_QWORD*)this_ + 2);
  return 0;
}

#pragma GCC visibility pop
