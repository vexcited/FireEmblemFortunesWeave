#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memset_plt(void* this_, void*, int);
__int64 movie_thread_manager_4c4c20_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("movie_thread_manager_4c4c20");
__int64 nn_lmem_GetExpHeapAllocatableSize_plt(_QWORD, _QWORD);
__int64 nn_movie_4c5920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_movie_4c5aa0(_QWORD, _QWORD);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_FreeMemory(_QWORD, _QWORD);
__int64
nn_movie_detail_FreeMemory_alt1(__int64 result,
                                _QWORD*) __asm__("nn_movie_detail_FreeMemory");
__int64 nn_os_CreateThread_plt_8592e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD);
__int64 nn_os_GetThreadAvailableCoreMask_plt(_QWORD, _QWORD);
__int64 nn_os_GetThreadAvailableCoreMask_plt_alt1(_QWORD) __asm__(
    "nn_os_GetThreadAvailableCoreMask_plt");
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetThreadCoreMask_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SetThreadName_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_f4ca40;
extern __int64 SdkData_f4ca48;
extern __int64 SdkData_f4ca50;
extern __int64 SdkData_f4caa8[];
__int64* nn_movie_detail_ThreadManager_GetInstance(void* this_);
__int64 movie_thread_manager_4c48e0(__int64* a1, __int64 a2);
_QWORD* movie_thread_manager_4c49e0(_QWORD* a1);
__int64 nn_movie_detail_ThreadManager__StaticCreate(int a1, __int64 a2,
                                                    __int64 a3, __int64 a4,
                                                    __int64 a5, __int64 a6,
                                                    unsigned int a7, __int64 a8,
                                                    __int64 a9, __int64 a10);
__int64 movie_thread_manager_4c4c20(__int64 a1, _QWORD* a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    unsigned int a7, __int64 a8, __int64 a9,
                                    __int64 a10);

__int64* nn_movie_detail_ThreadManager_GetInstance(void* this_)
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4ca40,
                            memory_order_acquire) &
       1) != 0) {
    return SdkData_f4caa8;
  }
  if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_f4ca40) != 0) {
    movie_thread_manager_4c48e0(SdkData_f4caa8, (__int64)&SdkData_f4ca50);
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f4ca40);
  }
  return SdkData_f4caa8;
}

__int64 movie_thread_manager_4c48e0(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  char v24;

  a1[4] = a2;
  *((_DWORD*)a1 + 10) = 0;
  v23 = a2;
  *a1 = a2;
  a1[1] = (__int64)(a1 + 1);
  a1[2] = (__int64)(a1 + 1);
  a1[3] = 0;
  v3 = nn_movie_4c5920(a1 + 6, 0, 0, &v24, &v23);
  a1[10] = 0x1000000010LL;
  v5 = nn_os_GetThreadAvailableCoreMask_plt(v3, v4);
  a1[11] = v5;
  *((_DWORD*)a1 + 24) = 16;
  v7 = nn_os_GetThreadAvailableCoreMask_plt(v5, v6);
  a1[13] = v7;
  a1[14] = 0;
  a1[15] = 0;
  *((_DWORD*)a1 + 32) = 16;
  v9 = nn_os_GetThreadAvailableCoreMask_plt(v7, v8);
  a1[17] = v9;
  a1[18] = 0;
  a1[19] = 0;
  *((_DWORD*)a1 + 40) = 16;
  v11 = nn_os_GetThreadAvailableCoreMask_plt(v9, v10);
  a1[21] = v11;
  a1[22] = 0;
  a1[23] = 0;
  *((_DWORD*)a1 + 48) = 16;
  v13 = nn_os_GetThreadAvailableCoreMask_plt(v11, v12);
  a1[25] = v13;
  a1[26] = 0;
  a1[27] = 0;
  *((_DWORD*)a1 + 56) = 16;
  v15 = nn_os_GetThreadAvailableCoreMask_plt(v13, v14);
  a1[29] = v15;
  a1[30] = 0;
  a1[31] = 0;
  *((_DWORD*)a1 + 64) = 16;
  v17 = nn_os_GetThreadAvailableCoreMask_plt(v15, v16);
  a1[33] = v17;
  a1[34] = 0;
  a1[35] = 0;
  *((_DWORD*)a1 + 72) = 16;
  v19 = nn_os_GetThreadAvailableCoreMask_plt(v17, v18);
  a1[37] = v19;
  a1[38] = 0;
  a1[39] = 0;
  *((_DWORD*)a1 + 80) = 16;
  result = nn_os_GetThreadAvailableCoreMask_plt(v19, v20);
  v22 = *a1;
  a1[41] = result;
  a1[42] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[43] = 0;
  a1[44] = (__int64)(a1 + 44);
  a1[45] = (__int64)(a1 + 44);
  a1[46] = 0;
  a1[47] = v22;
  a1[48] = 0;
  return result;
}

_QWORD* movie_thread_manager_4c49e0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* result;
  _QWORD* v6;
  _QWORD* v7;

  if (a1[46] != 0) {
    v2 = (_QWORD*)a1[45];
    v3 = *(_QWORD**)(a1[44] + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v3;
    *v3 = *v2;
    a1[46] = 0;
    if (v2 != a1 + 44) {
      do {
        v4 = (_QWORD*)v2[1];
        nn_movie_detail_FreeMemory(v2, a1[47]);
        v2 = v4;
      } while (v4 != a1 + 44);
    }
  }
  result = (_QWORD*)nn_movie_4c5aa0(a1 + 6, a1[7]);
  if (a1[3] != 0) {
    result = (_QWORD*)a1[2];
    v6 = *(_QWORD**)(a1[1] + 8LL);
    *(_QWORD*)(*result + 8LL) = v6;
    *v6 = *result;
    a1[3] = 0;
    if (result != a1 + 1) {
      do {
        v7 = (_QWORD*)result[1];
        nn_movie_detail_FreeMemory(result, a1[4]);
        result = v7;
      } while (v7 != a1 + 1);
    }
  }
  return result;
}

__int64 nn_movie_detail_ThreadManager__StaticCreate(int a1, __int64 a2,
                                                    __int64 a3, __int64 a4,
                                                    __int64 a5, __int64 a6,
                                                    unsigned int a7, __int64 a8,
                                                    __int64 a9, __int64 a10)
{
  unsigned int v10;
  __int64 v19;
  __int64 v20;
  int v22;

  v10 = 260352;
  if (SdkData_f4ca48 != 0 &&
      (unsigned __int64)nn_lmem_GetExpHeapAllocatableSize_plt(SdkData_f4ca48,
                                                              16) >= 0x248) {
    v19 = a9;
    v20 = a10;
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f4ca40,
                              memory_order_acquire) &
         1) == 0) {
      v22 = __cxa_guard_acquire_plt(&SdkData_f4ca40);
      v19 = a9;
      v20 = a10;
      if (v22 != 0) {
        movie_thread_manager_4c48e0(SdkData_f4caa8, (__int64)&SdkData_f4ca50);
        fw_rtld_RegisterCrtDestructor();
        __cxa_guard_release_plt(&SdkData_f4ca40);
        v19 = a9;
        v20 = a10;
      }
    }
    v10 = movie_thread_manager_4c4c20_alt1(SdkData_f4caa8, a2, a3, a4, a5, a6,
                                           a7, a8, v19, v20);
    if (v10 == 0) {
      v10 = 0;
      if (*(_QWORD*)a2 != 0) {
        *(_DWORD*)(*(_QWORD*)a2 + 448LL) = a1;
      }
    }
  }
  return v10;
}

__int64 movie_thread_manager_4c4c20(__int64 a1, _QWORD* a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6,
                                    unsigned int a7, __int64 a8, __int64 a9,
                                    __int64 a10)
{
  _QWORD* v18;
  __int64 v20;
  unsigned int v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  bool v34;

  nn_os_SdkMutexType_Lock_plt(a1 + 40);
  v18 = (_QWORD*)nn_movie_detail_AllocateMemory(472, *(_QWORD***)(a1 + 32));
  *v18 = 0;
  memset_plt((void*)(v18 + 2), nullptr, 456);
  v18[1] = a1 + 8;
  v20 = *(_QWORD*)(a1 + 8);
  *v18 = v20;
  *(_QWORD*)(v20 + 8) = v18;
  *(_QWORD*)(a1 + 8) = v18;
  ++*(_QWORD*)(a1 + 24);
  v21 = nn_os_CreateThread_plt_8592e0(v18 + 2, a3, a4, a5, a6, a7);
  v22 = *(_QWORD**)(a1 + 8);
  if (v21 != 0) {
    v23 = (_QWORD*)v22[1];
    *(_QWORD*)(*v22 + 8LL) = v23;
    *v23 = *v22;
    v24 = *(_QWORD**)(a1 + 32);
    --*(_QWORD*)(a1 + 24);
    nn_movie_detail_FreeMemory_alt1((__int64)v22, v24);
  }
  else {
    v25 = v22 + 2;
    *a2 = v25;
    if (a8 != 0) {
      nn_os_SetThreadName_plt(v25, a8);
    }
    if (a9 != 0) {
      nn_os_SetThreadCoreMask_plt(*a2, 0xFFFFFFFFLL, a9);
    }
    v26 = *(_QWORD**)(a1 + 48);
    if (v26 != (_QWORD*)(a1 + 56)) {
      do {
        (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
            *(_QWORD*)v26[4] + 16LL))(v26[4], *a2, a7, a9, a8);
        v32 = (_QWORD*)v26[1];
        if (v32 != nullptr) {
          do {
            v33 = v32;
            v32 = (_QWORD*)*v32;
          } while (v32 != nullptr);
        }
        else {
          do {
            v33 = (_QWORD*)v26[2];
            v34 = v26 == (_QWORD*)*v33;
            v26 = v33;
          } while (!v34);
        }
        v26 = v33;
      } while (v33 != (_QWORD*)(a1 + 56));
    }
    if (a10 != 0) {
      v27 = *(_QWORD*)(a1 + 360);
      v28 = a1 + 352;
      if (v27 == a1 + 352) {
      LABEL_12:
        v29 =
            (_QWORD*)nn_movie_detail_AllocateMemory(48, *(_QWORD***)(a1 + 376));
        *v29 = 0;
        v29[1] = 0;
        v29[2] = 0;
        v29[3] = 0;
        v29[4] = 0;
        v29[5] = 0;
        *((_DWORD*)v29 + 4) = 16;
        v29[3] = nn_os_GetThreadAvailableCoreMask_plt_alt1(v29);
        v29[4] = 0;
        v29[5] = 0;
        v29[1] = v28;
        v31 = *(_QWORD*)(a1 + 352);
        *v29 = v31;
        *(_QWORD*)(v31 + 8) = v29;
        *(_QWORD*)(a1 + 352) = v29;
        ++*(_QWORD*)(a1 + 368);
        v29[4] = a10;
        *(_DWORD*)(*(_QWORD*)(a1 + 352) + 16LL) = a7;
        *(_QWORD*)(*(_QWORD*)(a1 + 352) + 24LL) = a9;
        *(_QWORD*)(*(_QWORD*)(a1 + 352) + 40LL) = *a2;
      }
      else {
        while (a10 != *(_QWORD*)(v27 + 32)) {
          v27 = *(_QWORD*)(v27 + 8);
          if (v27 == v28) {
            goto LABEL_12;
          }
        }
        *(_DWORD*)(v27 + 16) = a7;
        *(_QWORD*)(v27 + 24) = a9;
        *(_QWORD*)(v27 + 40) = *a2;
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 40);
  return v21;
}

#pragma GCC visibility pop
