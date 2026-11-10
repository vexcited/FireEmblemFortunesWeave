#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AnotherPacketSource_getBufferedDurationUs_l_plt(_QWORD,
                                                                 _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88da8;
extern __int64 SdkData_e88dc0;
extern void (*SdkData_e88338[493])();
__int64 AnotherPacketSource_575940(_QWORD* a1);
__int64 AnotherPacketSource_576250(__int64 a1, __int64* a2);
__int64 nandroid_AnotherPacketSource_getEstimatedDurationUs(void* this_);
__int64 nandroid_AnotherPacketSource_getBufferedDurationUs_l(void* this_,
                                                             int* a2);
__int64 nandroid_AnotherPacketSource_isTargetDurationAvailable(void* this_);
__int64 nandroid_AnotherPacketSource_getBufferedBytes(void* this_);
__int64 AnotherPacketSource_578830(_QWORD* a1);
__int64 AnotherPacketSource_5788c0(_QWORD* a1);

__int64 AnotherPacketSource_575940(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;

  *a1 = SdkData_e88da8 + 16;
  v2 = a1[1];
  v3 = *(_QWORD*)(v2 + 24);
  v4 = (atomic_uchar*)SdkData_e88330;
  v5 = SdkData_e88338[0];
  if (v3 != v2) {
    do {
      v6 = *(_QWORD*)(v3 + 24);
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
  *(_QWORD*)(v2 + 16) = v2;
  v8 = a1[1];
  *(_QWORD*)(v8 + 24) = v8;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory(v8, v9);
}

__int64 AnotherPacketSource_576250(__int64 a1, __int64* a2)
{
  __int64 v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD** v6;
  _QWORD* v7;
  __int64 result;
  __int64 v9;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
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
  v7 = (_QWORD*)SdkRoutine_4c3860(16, 24, v6);
  result = *a2;
  *v7 = *a2;
  if (result != 0) {
    result = nandroid_RefBase_incStrong_plt(result, v7);
  }
  v7[2] = v3;
  v9 = *(_QWORD*)(v3 + 8);
  v7[1] = v9;
  *(_QWORD*)(v9 + 16) = v7;
  *(_QWORD*)(v3 + 8) = v7;
  return result;
}

__int64 nandroid_AnotherPacketSource_getEstimatedDurationUs(void* this_)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  nn_os_LockMutex_plt((char*)this_ + 24);
  v2 = *((__int64**)this_ + 13);
  v3 = (__int64*)v2[2];
  if (v3 == v2) {
    v4 = 0;
    goto LABEL_23;
  }
  if (*(_QWORD*)(*((_QWORD*)this_ + 2) + 24LL) != *((_QWORD*)this_ + 2)) {
    v4 = nandroid_AnotherPacketSource_getBufferedDurationUs_l_plt(this_, &v15);
    goto LABEL_23;
  }
  v15 = *v3;
  nandroid_RefBase_incStrong_plt(v15, &v15);
  v14 = 0;
  nandroid_ABuffer_meta_plt((void*)(&v13));
  nandroid_AMessage_findInt64_plt(v13, "timeUs", &v14);
  v5 = v13;
  if (v13 != 0) {
    v5 = nandroid_RefBase_decStrong_plt(v13, &v13);
  }
  if (v14 < 0) {
    v4 = 0;
    v10 = v15;
    if (v15 == 0) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  v6 = *(_QWORD**)(*((_QWORD*)this_ + 13) + 8LL);
  v7 = v15;
  v8 = *v6;
  if (*v6 != 0) {
    v5 = nandroid_RefBase_incStrong_plt(*v6, &v15);
  }
  if (v7 != 0) {
    v5 = nandroid_RefBase_decStrong_plt(v7, &v15);
  }
  if (v7 != v15) {
    nandroid_sp_report_race_plt(v5);
  }
  v15 = v8;
  v13 = 0;
  nandroid_ABuffer_meta_plt((void*)(&v12));
  nandroid_AMessage_findInt64_plt(v12, "timeUs", &v13);
  if (v12 != 0) {
    nandroid_RefBase_decStrong_plt(v12, &v12);
  }
  v9 = v13 - v14;
  if (v13 - v14 < 0) {
    v9 = v14 - v13;
  }
  if (v13 >= 0) {
    v4 = v9;
  }
  else {
    v4 = 0;
  }
  v10 = v15;
  if (v15 != 0) {
  LABEL_22:
    nandroid_RefBase_decStrong_plt(v10, &v15);
  }
LABEL_23:
  nn_os_UnlockMutex_plt((char*)this_ + 24);
  return v4;
}

__int64 nandroid_AnotherPacketSource_getBufferedDurationUs_l(void* this_,
                                                             int* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char v10;
  char v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;

  if (a2 != nullptr) {
    *a2 = *((_DWORD*)this_ + 28);
  }
  v3 = *((_QWORD*)this_ + 13);
  v4 = *(_QWORD*)(v3 + 16);
  if (v4 != v3) {
    v5 = -1;
    v6 = 1;
    v7 = 0;
    v8 = -1;
    while (1) {
      while (1) {
        v17 = 0;
        v16 = 0;
        nandroid_ABuffer_meta_plt((void*)(&v15));
        v10 = 0;
        if ((nandroid_AMessage_findInt64_plt(v15, "timeUs", &v17) & 1) != 0) {
          nandroid_ABuffer_meta_plt((void*)(&v14));
          v11 = nandroid_AMessage_findInt32_plt(v14, "discontinuity", &v16);
          if (v14 != 0) {
            nandroid_RefBase_decStrong_plt(v14, &v14);
          }
          v10 = v11 ^ 1;
        }
        if (v15 != 0) {
          nandroid_RefBase_decStrong_plt(v15, &v15);
        }
        if ((v10 & 1) != 0) {
          break;
        }
        v9 = v5 + v6;
        v8 = -1;
        v5 = -1;
        v7 += v9;
        v4 = *(_QWORD*)(v4 + 16);
        v6 = 1;
        if (v4 == *((_QWORD*)this_ + 13)) {
          return v5 - v8 + v7;
        }
      }
      if ((v8 & 0x8000000000000000LL) != 0) {
        break;
      }
      if (v17 < v8) {
        goto LABEL_15;
      }
    LABEL_16:
      if ((__int64)v17 <= v5) {
        v12 = v5;
      }
      else {
        v12 = v17;
      }
      if (v5 >= 0) {
        v5 = v12;
      }
      else {
        v5 = v17;
      }
      v4 = *(_QWORD*)(v4 + 16);
      v6 = -(__int64)v8;
      if (v4 == *((_QWORD*)this_ + 13)) {
        return v5 - v8 + v7;
      }
    }
    if ((v17 & 0x8000000000000000LL) != 0) {
      goto LABEL_16;
    }
  LABEL_15:
    v8 = v17;
    goto LABEL_16;
  }
  return 0;
}

__int64 nandroid_AnotherPacketSource_isTargetDurationAvailable(void* this_)
{
  __int64 v2;
  char v3;
  int v5;

  nn_os_LockMutex_plt((char*)this_ + 24);
  v2 = *((_QWORD*)this_ + 16);
  if (v2 != 0) {
    v5 = 0;
    v3 = nandroid_AMessage_findInt32_plt(v2, "targetDuration", &v5);
  }
  else {
    v3 = 0;
  }
  nn_os_UnlockMutex_plt((char*)this_ + 24);
  return v3 & 1;
}

__int64 nandroid_AnotherPacketSource_getBufferedBytes(void* this_)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  nn_os_LockMutex_plt((char*)this_ + 24);
  v2 = *((__int64**)this_ + 13);
  v3 = (__int64*)v2[2];
  if (v3 == v2) {
    v4 = 0;
  }
  else {
    v4 = 0;
    do {
      v5 = *v3;
      v3 = (__int64*)v3[2];
      v4 += *(_QWORD*)(v5 + 48);
    } while (v3 != v2);
  }
  nn_os_UnlockMutex_plt((char*)this_ + 24);
  return v4;
}

__int64 AnotherPacketSource_578830(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  AnotherPacketSource_575940(a1);
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
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

__int64 AnotherPacketSource_5788c0(_QWORD* a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD* v4;
  int v6;

  *a1 = SdkData_e88dc0 + 16;
  nandroid_VectorImpl_finish_vector_plt(a1);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(a1);
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
  return nn_movie_detail_FreeMemory((__int64)a1, v4);
}

#pragma GCC visibility pop
