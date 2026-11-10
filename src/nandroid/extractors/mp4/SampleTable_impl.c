#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MPEG4Extractor_4ec9b0(__int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD);
__int64 nandroid_SampleIterator_getSampleSizeDirect_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_U32_AT_plt(_QWORD);
__int64 nandroid_VectorImpl_Destroy_VectorImpl_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88908;
extern __int64 SdkData_e88d28;
extern void (*SdkData_e88338[493])();
void nandroid_SampleTable_Destroy_SampleTable_568240(void* this_);
__int64 nandroid_SampleTable_setSampleToChunkParams(void* this_, __int64 a2,
                                                    unsigned __int64 a3);
__int64 nandroid_SampleTable_getMaxSampleSize(void* this_, unsigned __int64* a2,
                                              unsigned __int64* a3);

void nandroid_SampleTable_Destroy_SampleTable_568240(void* this_)
{
  __int64 v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;

  v2 = *((_QWORD*)this_ + 25);
  *(_QWORD*)this_ = SdkData_e88d28 + 16;
  v3 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v2, v6);
  *((_QWORD*)this_ + 25) = 0;
  v7 = *((_QWORD*)this_ + 22);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v8 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v7, v8);
  *((_QWORD*)this_ + 22) = 0;
  v9 = *((_QWORD*)this_ + 15);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v9, v10);
  *((_QWORD*)this_ + 15) = 0;
  v11 = *((_QWORD*)this_ + 19);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v11, v12);
  *((_QWORD*)this_ + 19) = 0;
  v13 = *((_QWORD*)this_ + 17);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v14 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v13, v14);
  *((_QWORD*)this_ + 17) = 0;
  v15 = *((_QWORD*)this_ + 16);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v5 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v16 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  nn_movie_detail_FreeMemory(v15, v16);
  v17 = *((_QWORD*)this_ + 24);
  *((_QWORD*)this_ + 16) = 0;
  if (v17 != 0) {
    *(_QWORD*)(v17 + 56) = SdkData_e88908 + 16;
    nandroid_VectorImpl_finish_vector_plt(v17 + 56);
    nandroid_VectorImpl_Destroy_VectorImpl_plt(v17 + 56);
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v5 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v18 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
    nn_movie_detail_FreeMemory(v17, v18);
  }
  *((_QWORD*)this_ + 24) = 0;
  nn_os_FinalizeMutex_plt((char*)this_ + 24);
  nandroid_RefBase_Destroy_RefBase_plt_86def0(this_);
}

__int64 nandroid_SampleTable_setSampleToChunkParams(void* this_, __int64 a2,
                                                    unsigned __int64 a3)
{
  __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  void* v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  void* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;

  result = 4294966289LL;
  if ((a2 & 0x8000000000000000LL) == 0 &&
      (*((_QWORD*)this_ + 9) & 0x8000000000000000LL) != 0) {
    v5 = a3 - 8;
    *((_QWORD*)this_ + 9) = a2;
    if (a3 < 8) {
      return 4294966289LL;
    }
    v6 = *((_QWORD*)this_ + 2);
    v20 = 0;
    v7 = this_;
    if ((*(__int64 (**)(__int64, __int64, __int64*, __int64))(
            *(_QWORD*)v6 + 16LL))(v6, a2, &v20, 8) < 8) {
      return 4294966292LL;
    }
    if ((unsigned int)nandroid_U32_AT_plt(&v20) != 0) {
      return 4294966289LL;
    }
    v8 = nandroid_U32_AT_plt((char*)&v20 + 4);
    *((_DWORD*)v7 + 20) = v8;
    if (v8 > v5 / 0xC) {
      return 4294966289LL;
    }
    if (v8 > 0x10AAAA9) {
      return 4294966288LL;
    }
    v9 = *((_QWORD*)v7 + 26) + 12LL * v8;
    *((_QWORD*)v7 + 26) = v9;
    if (v9 > 0xC800000) {
      return 4294966288LL;
    }
    if (v8 != 0) {
      v10 = MPEG4Extractor_4ec9b0(12LL * v8);
      *((_QWORD*)v7 + 25) = v10;
      if (v10 == 0) {
        return 4294966288LL;
      }
      v11 = *((_DWORD*)v7 + 20);
      v12 = v7;
      if (-12LL * (unsigned int)(v11 - 1) + 0x7FFFFFFFFFFFFFF7LL <
          (signed __int64)*((_QWORD*)v7 + 9)) {
        return 4294966289LL;
      }
      if (v11 != 0) {
        v13 = 0;
        v14 = 0;
        while (1) {
          v15 = *((_QWORD*)v12 + 2);
          v19 = 0;
          v18 = 0;
          if ((*(__int64 (**)(__int64, __int64, __int64*, __int64))(
                  *(_QWORD*)v15 + 16LL))(v15, v13 + *((_QWORD*)v12 + 9) + 8,
                                         &v18, 12) != 12) {
            break;
          }
          if ((unsigned int)nandroid_U32_AT_plt(&v18) == 0) {
            return 4294966288LL;
          }
          *(_DWORD*)(*((_QWORD*)v7 + 25) + v13) = nandroid_U32_AT_plt(&v18) - 1;
          *(_DWORD*)(*((_QWORD*)v7 + 25) + v13 + 4) =
              nandroid_U32_AT_plt((char*)&v18 + 4);
          v16 = nandroid_U32_AT_plt(&v19);
          ++v14;
          v12 = v7;
          result = 0;
          v17 = *((_QWORD*)v7 + 25) + v13;
          v13 += 12;
          *(_DWORD*)(v17 + 8) = v16;
          if (v14 >= *((unsigned int*)v7 + 20)) {
            return result;
          }
        }
        return 4294966292LL;
      }
    }
    return 0;
  }
  return result;
}

__int64 nandroid_SampleTable_getMaxSampleSize(void* this_, unsigned __int64* a2,
                                              unsigned __int64* a3)
{
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned __int64 v12;

  *a3 = 0;
  nn_os_LockMutex_plt((char*)this_ + 24);
  *a2 = 0;
  if (*((_DWORD*)this_ + 26) != 0) {
    v6 = 0;
    while (1) {
      v7 = *((_QWORD*)this_ + 24);
      v12 = 0;
      v8 = nandroid_SampleIterator_getSampleSizeDirect_plt(v7, v6, &v12);
      if (v8 != 0) {
        break;
      }
      v9 = v12;
      if (v12 > *a2) {
        *a2 = v12;
      }
      ++v6;
      *a3 += v9;
      if (v6 >= *((_DWORD*)this_ + 26)) {
        goto LABEL_7;
      }
    }
    v10 = v8;
  }
  else {
  LABEL_7:
    v10 = 0;
  }
  nn_os_UnlockMutex_plt((char*)this_ + 24);
  return v10;
}

#pragma GCC visibility pop
