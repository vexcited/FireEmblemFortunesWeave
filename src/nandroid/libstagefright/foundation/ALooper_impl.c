#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ALooper_4ddda0_alt1() __asm__("ALooper_4ddda0");
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86e160(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_ALooper_loop_plt(_QWORD);
__int64 nandroid_ALooper_stop_plt(_QWORD);
__int64 nandroid_AMessage_target_plt(_QWORD);
__int64 nandroid_AReplyToken_setReply_plt(_QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86da90(_QWORD, _QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_RefBase_Destroy_RefBase_plt_86def0(_QWORD);
__int64 nandroid_RefBase_createWeak_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_weakref_type_attemptIncStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_weakref_type_decWeak_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_weakref_type_incWeak_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_clear_plt(_QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_VectorImpl_removeItemsAt_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_libstagefright_4deb80(__int64 result);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_4cd2c0(__int64 result, _QWORD*);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_movie_detail_ThreadManager_GetInstance_plt(_QWORD);
__int64
    nn_movie_detail_ThreadManager__GetThreadCoreMaskByComponentType_plt(_QWORD,
                                                                        _QWORD);
__int64
    nn_movie_detail_ThreadManager__GetThreadPriorityByComponentType_plt(_QWORD,
                                                                        _QWORD);
__int64 nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(_QWORD);
__int64 nn_movie_detail_ThreadManager__StackAllocate_plt(_QWORD, _QWORD,
                                                         _QWORD);
__int64 nn_movie_detail_ThreadManager__StackFree_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_ThreadManager__StaticCreate_plt(_QWORD, _QWORD, _QWORD,
                                                        _QWORD, _QWORD, _QWORD,
                                                        _QWORD, _QWORD, _QWORD,
                                                        _QWORD);
__int64 nn_os_BroadcastConditionVariable_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_FinalizeConditionVariable_plt(_QWORD);
__int64 nn_os_FinalizeMutex_plt(_QWORD);
__int64 nn_os_GetCurrentThread_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_GetThreadId_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SetThreadName_plt(_QWORD, _QWORD);
__int64 nn_os_SetTlsValue_plt(_QWORD, _QWORD);
__int64 nn_os_SignalConditionVariable_plt(_QWORD);
__int64 nn_os_StartThread_plt(_QWORD);
__int64 nn_os_TimedWaitConditionVariable_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_os_WaitConditionVariable_plt(_QWORD, _QWORD);
__int64 nn_os_WaitThread_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e885a0;
extern __int64 SdkData_e885a8;
extern __int64 SdkData_e885b0;
extern void (*SdkData_e88338[493])();
void nandroid_ALooper_Destroy_ALooper_4dd650(void* this_);
__int64 nandroid_ALooper_stop(void* this_);
__int64 ALooper_4dd830(_QWORD* a1);
__int64 nandroid_ALooper_setName(void* this_, const char* a2);
__int64 nandroid_ALooper_registerHandler(__int64 a1, __int64* a2);
__int64 nandroid_ALooper_unregisterHandler(void* this_, int a2);
__int64 nandroid_ALooper_start(void* this_);
__int64 ALooper_4ddda0(__int64 a1);
__int64 nandroid_ALooper_loop(void* this_);
__int64 nandroid_ALooper_awaitResponse(__int64 a1, __int64* a2, __int64* a3);
__int64 nandroid_ALooper_postReply(__int64 a1, _QWORD* a2, __int64 a3);
__int64 nandroid_AString_AString_plt_86d9f0(__int64);
__int64 nandroid_RefBase_RefBase_plt(__int64);
__int64 nandroid_SortedVectorImpl_SortedVectorImpl_plt(__int64,
                                                       unsigned __int64,
                                                       unsigned int);
__int64
nn_os_GetTlsValue_plt_alt1(unsigned int) __asm__("nn_os_GetTlsValue_plt");
__int64 nn_os_InitializeConditionVariable_plt(__int64);
__int64 nn_os_InitializeMutex_plt(__int64, bool, int);
int __cxa_guard_acquire_plt_alt1(__int64) __asm__("__cxa_guard_acquire_plt");
void __cxa_guard_release_plt_alt1(__int64) __asm__("__cxa_guard_release_plt");
__int64 nandroid_ALooper_ALooper(void* this_);

__int64 nandroid_ALooper_ALooper(void* this_)
{
  atomic_uchar* v2;
  unsigned __int8 explicit;
  unsigned int* v4;
  _QWORD** v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  nandroid_RefBase_RefBase_plt((__int64)this_);
  *(_QWORD*)this_ = SdkData_e885a0 + 16;
  nn_os_InitializeMutex_plt((__int64)this_ + 16, false, 0);
  nn_os_InitializeConditionVariable_plt((__int64)this_ + 48);
  nn_os_InitializeConditionVariable_plt((__int64)this_ + 48);
  nandroid_AString_AString_plt_86d9f0((__int64)this_ + 56);
  *((_QWORD*)this_ + 10) = SdkData_e885a8 + 16;
  v2 = (atomic_uchar*)SdkData_e88330;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = (unsigned int*)SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_plt_alt1(SdkData_e88330) != 0) {
    *v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt_alt1(SdkData_e88330);
  }
  v5 = (_QWORD**)nn_os_GetTlsValue_plt_alt1(*v4);
  v6 = SdkRoutine_4c3860(16, 32, v5);
  *((_QWORD*)this_ + 11) = v6;
  *(_QWORD*)(v6 + 16) = v6;
  *(_QWORD*)(*((_QWORD*)this_ + 11) + 24LL) = *((_QWORD*)this_ + 11);
  nn_os_InitializeMutex_plt((__int64)this_ + 96, false, 0);
  nn_os_InitializeConditionVariable_plt((__int64)this_ + 128);
  nn_os_InitializeConditionVariable_plt((__int64)this_ + 128);
  *((_QWORD*)this_ + 17) = 0;
  nandroid_SortedVectorImpl_SortedVectorImpl_plt((__int64)this_ + 144, 0x18u,
                                                 0);
  v7 = SdkData_e885b0;
  *((_QWORD*)this_ + 26) = 0;
  *((_QWORD*)this_ + 23) = 0;
  *((_QWORD*)this_ + 24) = 0;
  *((_BYTE*)this_ + 200) = 0;
  *((_QWORD*)this_ + 18) = v7 + 16;
  if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_plt_alt1(SdkData_e88330) != 0) {
    *v4 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
    __cxa_guard_release_plt_alt1(SdkData_e88330);
  }
  result = nn_os_GetTlsValue_plt_alt1(*v4);
  *((_QWORD*)this_ + 26) = result;
  return result;
}

void nandroid_ALooper_Destroy_ALooper_4dd650(void* this_)
{
  char* v2;
  __int64 v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;

  *(_QWORD*)this_ = SdkData_e885a0 + 16;
  v2 = (char*)this_ + 96;
  nandroid_ALooper_stop_plt(this_);
  *((_QWORD*)this_ + 18) = SdkData_e885b0 + 16;
  nandroid_VectorImpl_finish_vector_plt((char*)this_ + 144);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt((char*)this_ + 144);
  nn_os_FinalizeConditionVariable_plt((char*)this_ + 128);
  nn_os_FinalizeMutex_plt(v2);
  *((_QWORD*)this_ + 10) = SdkData_e885a8 + 16;
  nandroid_libstagefright_4deb80((__int64)this_ + 80);
  v3 = *((_QWORD*)this_ + 11);
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
  nn_movie_detail_FreeMemory(v3, v6);
  nandroid_AString_Destroy_AString_plt((char*)this_ + 56);
  nn_os_FinalizeConditionVariable_plt((char*)this_ + 48);
  nn_os_FinalizeMutex_plt((char*)this_ + 16);
  nandroid_RefBase_Destroy_RefBase_plt_86def0(this_);
}

__int64 nandroid_ALooper_stop(void* this_)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*((_QWORD*)this_ + 24) == 0) {
    return 4294967258LL;
  }
  nn_os_LockMutex_plt((char*)this_ + 16);
  *((_BYTE*)this_ + 200) = 0;
  v2 = nn_os_UnlockMutex_plt((char*)this_ + 16);
  if (*((_QWORD*)this_ + 24) != 0) {
    nn_os_SignalConditionVariable_plt((char*)this_ + 48);
    v3 = nn_os_WaitThread_plt(*((_QWORD*)this_ + 24));
    v4 = *((_QWORD**)this_ + 24);
    v5 = nn_movie_detail_ThreadManager_GetInstance_plt(v3);
    v2 = nn_movie_detail_4cd2c0(v5, v4);
    *((_QWORD*)this_ + 24) = 0;
  }
  if (*((_QWORD*)this_ + 23) != 0) {
    v6 = nn_movie_detail_ThreadManager_GetInstance_plt(v2);
    v7 = nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(v6);
    v8 = *((_QWORD*)this_ + 23);
    if ((v7 & 1) != 0) {
      v9 = nn_movie_detail_ThreadManager_GetInstance_plt(v7);
      nn_movie_detail_ThreadManager__StackFree_plt(v9, v8);
    }
    else {
      nn_movie_detail_FreeMemory(*((_QWORD*)this_ + 23),
                                 *((_QWORD**)this_ + 26));
    }
    *((_QWORD*)this_ + 23) = 0;
  }
  nn_os_LockMutex_plt((char*)this_ + 16);
  nandroid_VectorImpl_clear_plt((char*)this_ + 144);
  nn_os_UnlockMutex_plt((char*)this_ + 16);
  return 0;
}

__int64 ALooper_4dd830(_QWORD* a1)
{
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v7;

  *a1 = SdkData_e885a8 + 16;
  nandroid_libstagefright_4deb80((__int64)a1);
  v2 = a1[1];
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

__int64 nandroid_ALooper_setName(void* this_, const char* a2)
{
  __int64 result;
  __int64 v4;
  _BYTE v5[24];

  nandroid_AString_AString_plt_86da90(v5, a2);
  SdkRoutine_86e160((char*)this_ + 56, v5);
  result = nandroid_AString_Destroy_AString_plt(v5);
  if (*((_BYTE*)this_ + 200) == 1) {
    v4 = *((_QWORD*)this_ + 24);
    result = nandroid_AString_c_str_plt((char*)this_ + 56);
    if (result != 0) {
      return nn_os_SetThreadName_plt(v4, result);
    }
  }
  return result;
}

__int64 nandroid_ALooper_registerHandler(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  nn_os_LockMutex_plt(a1 + 16);
  v4 = *(_QWORD*)(a1 + 136);
  v5 = *a2;
  v16 = a1;
  *(_QWORD*)(a1 + 136) = v4 + 1;
  v6 = nandroid_RefBase_createWeak_plt(a1, &v16);
  *(_DWORD*)(v5 + 16) = v4;
  v7 = v16;
  v8 = v6;
  v17 = v6;
  if (v16 != 0) {
    nandroid_RefBase_weakref_type_incWeak_plt(v6, v5 + 24);
  }
  if (*(_QWORD*)(v5 + 24) != 0) {
    nandroid_RefBase_weakref_type_decWeak_plt(*(_QWORD*)(v5 + 32), v5 + 24);
  }
  v9 = v16;
  *(_QWORD*)(v5 + 24) = v7;
  *(_QWORD*)(v5 + 32) = v8;
  if (v9 != 0) {
    nandroid_RefBase_weakref_type_decWeak_plt(v17, &v16);
  }
  v10 = *(_DWORD*)(*a2 + 16);
  v14 = *a2;
  v11 = nandroid_RefBase_createWeak_plt(v14, &v14);
  LODWORD(v16) = v10;
  v15 = v11;
  v17 = v14;
  v18 = v11;
  if (v14 != 0) {
    nandroid_RefBase_weakref_type_incWeak_plt(v11, &v17);
  }
  nandroid_SortedVectorImpl_add_plt(a1 + 144, &v16);
  if (v17 != 0) {
    nandroid_RefBase_weakref_type_decWeak_plt(v18, &v17);
  }
  if (v14 != 0) {
    nandroid_RefBase_weakref_type_decWeak_plt(v15, &v14);
  }
  v12 = *(_DWORD*)(*a2 + 16);
  nn_os_UnlockMutex_plt(a1 + 16);
  return v12;
}

__int64 nandroid_ALooper_unregisterHandler(void* this_, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  void* v12;
  void* v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;
  __int64 v17;

  nn_os_LockMutex_plt((char*)this_ + 16);
  LODWORD(v14) = a2;
  v15_.v15 = 0;
  v15_.v16 = 0;
  v4 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 144, &v14);
  if (v15_.v15 != 0) {
    nandroid_RefBase_weakref_type_decWeak_plt(v15_.v16, &v15_.v15);
  }
  if ((v4 & 0x8000000000000000LL) == 0) {
    v5 = *((_QWORD*)this_ + 19) + 24 * v4;
    v7 = *(_QWORD*)(v5 + 8);
    v6 = (__int64*)(v5 + 8);
    v17 = 0;
    if (v7 == 0) {
      goto LABEL_15;
    }
    if ((nandroid_RefBase_weakref_type_attemptIncStrong_plt(v6[1], &v17) & 1) !=
        0) {
      v17 = *v6;
      v8 = v17;
      if (v17 == 0) {
      LABEL_15:
        nandroid_VectorImpl_removeItemsAt_plt((char*)this_ + 144, v4, 1);
        if (v17 != 0) {
          nandroid_RefBase_decStrong_plt(v17, &v17);
        }
        return nn_os_UnlockMutex_plt((char*)this_ + 16);
      }
    }
    else {
      v8 = v17;
      if (v17 == 0) {
        goto LABEL_15;
      }
    }
    v14 = this_;
    v9 = nandroid_RefBase_createWeak_plt(this_, &v14);
    v10 = v14;
    v11 = v9;
    v15_.v15 = v9;
    *(_DWORD*)(v8 + 16) = 0;
    if (v10 != nullptr) {
      nandroid_RefBase_weakref_type_incWeak_plt(v9, v8 + 24);
    }
    if (*(_QWORD*)(v8 + 24) != 0) {
      nandroid_RefBase_weakref_type_decWeak_plt(*(_QWORD*)(v8 + 32), v8 + 24);
    }
    v12 = v14;
    *(_QWORD*)(v8 + 24) = v10;
    *(_QWORD*)(v8 + 32) = v11;
    if (v12 != nullptr) {
      nandroid_RefBase_weakref_type_decWeak_plt(v15_.v15, &v14);
    }
    goto LABEL_15;
  }
  return nn_os_UnlockMutex_plt((char*)this_ + 16);
}

__int64 nandroid_ALooper_start(void* this_)
{
  __int64 v2;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = nn_os_LockMutex_plt((char*)this_ + 16);
  v3 = (__int64*)((char*)this_ + 192);
  if (*((_QWORD*)this_ + 24) != 0) {
    v4 = -38;
    goto LABEL_16;
  }
  v5 = nn_movie_detail_ThreadManager_GetInstance_plt(v2);
  v6 = nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(v5);
  if ((v6 & 1) == 0) {
    v8 = SdkRoutine_4c3860(4096, 0x8000, *((_QWORD***)this_ + 26));
    v9 = v8;
    *((_QWORD*)this_ + 23) = v8;
    if (v8 != 0) {
      goto LABEL_5;
    }
  LABEL_10:
    v4 = -12;
    goto LABEL_16;
  }
  v7 = nn_movie_detail_ThreadManager_GetInstance_plt(v6);
  v8 = nn_movie_detail_ThreadManager__StackAllocate_plt(v7, 0x8000, 4096);
  v9 = v8;
  *((_QWORD*)this_ + 23) = v8;
  if (v8 == 0) {
    goto LABEL_10;
  }
LABEL_5:
  v10 = nn_movie_detail_ThreadManager_GetInstance_plt(v8);
  v11 = nn_movie_detail_ThreadManager__GetThreadPriorityByComponentType_plt(v10,
                                                                            4);
  v12 = nandroid_AString_c_str_plt((char*)this_ + 56);
  v13 = nn_movie_detail_ThreadManager_GetInstance_plt(v12);
  v14 = nn_movie_detail_ThreadManager__GetThreadCoreMaskByComponentType_plt(v13,
                                                                            4);
  v15 = nn_movie_detail_ThreadManager__StaticCreate_plt(
      4, (char*)this_ + 192, ALooper_4ddda0_alt1, this_, v9, 0x8000, v11, v12,
      v14, this_);
  if ((_DWORD)v15 != 0 || (v15 = *v3, *v3 == 0)) {
    if (*((_QWORD*)this_ + 23) != 0) {
      v16 = nn_movie_detail_ThreadManager_GetInstance_plt(v15);
      v17 = nn_movie_detail_ThreadManager__IsStackAllocatorConfigured_plt(v16);
      v18 = *((_QWORD*)this_ + 23);
      if ((v17 & 1) != 0) {
        v19 = nn_movie_detail_ThreadManager_GetInstance_plt(v17);
        nn_movie_detail_ThreadManager__StackFree_plt(v19, v18);
      }
      else {
        nn_movie_detail_FreeMemory(*((_QWORD*)this_ + 23),
                                   *((_QWORD**)this_ + 26));
      }
      *((_QWORD*)this_ + 23) = 0;
    }
    v4 = 0x80000000;
  }
  else {
    nn_os_StartThread_plt(v15);
    v4 = 0;
    *((_BYTE*)this_ + 200) = 1;
  }
LABEL_16:
  nn_os_UnlockMutex_plt((char*)this_ + 16);
  return v4;
}

__int64 ALooper_4ddda0(__int64 a1)
{
  __int64 v1;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  __int64 result;
  int v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 208);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v7 = v1;
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    v1 = v7;
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
      v1 = v7;
    }
  }
  nn_os_SetTlsValue_plt(*(unsigned int*)v4, v1);
  do {
    result = nandroid_ALooper_loop_plt(a1);
  } while ((result & 1) != 0);
  return result;
}

__int64 nandroid_ALooper_loop(void* this_)
{
  __int64 v2;
  unsigned int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v18)();
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  __int64 v31;

  v27 = 0;
  v2 = nn_os_LockMutex_plt((char*)this_ + 16);
  v3 = *((unsigned __int8*)this_ + 200);
  if (v3 != 1) {
    goto LABEL_6;
  }
  v4 = *((__int64**)this_ + 11);
  v5 = (__int64*)v4[3];
  if (v5 == v4) {
    nn_os_WaitConditionVariable_plt((char*)this_ + 48, (char*)this_ + 16);
    goto LABEL_6;
  }
  v6 = *v5;
  v7 = nn_os_GetSystemTick_plt(v2);
  v8 = nn_os_ConvertToTimeSpan_plt(v7);
  if (v6 > v8 / 1000) {
    nn_os_TimedWaitConditionVariable_plt((char*)this_ + 48, (char*)this_ + 16,
                                         1000 * (v6 - v8 / 1000));
  LABEL_6:
    nn_os_UnlockMutex_plt((char*)this_ + 16);
    return v3;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)this_ + 11) + 24LL) + 8LL);
  v11 = v27;
  if (v10 != 0) {
    v8 = nandroid_RefBase_incStrong_plt(v10, &v27);
  }
  if (v11 != v27) {
    nandroid_sp_report_race_plt(v8);
  }
  v12 = *((_QWORD*)this_ + 11);
  v27 = v10;
  v13 = *(_QWORD**)(v12 + 24);
  v15 = v13[2];
  v14 = v13[3];
  *(_QWORD*)(v15 + 24) = v14;
  *(_QWORD*)(v14 + 16) = v15;
  v16 = v13[1];
  if (v16 != 0) {
    nandroid_RefBase_decStrong_plt(v16, v13 + 1);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v18 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v18 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v18) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v19 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v18);
  nn_movie_detail_FreeMemory((__int64)v13, v19);
  nn_os_UnlockMutex_plt((char*)this_ + 16);
  v31 = 0;
  nn_os_LockMutex_plt((char*)this_ + 16);
  LODWORD(v28) = nandroid_AMessage_target_plt(v27);
  v29_.v29 = 0;
  v29_.v30 = 0;
  v20 = nandroid_SortedVectorImpl_indexOf_plt((char*)this_ + 144, &v28);
  v21 = v20;
  if (v29_.v29 != 0) {
    v20 = nandroid_RefBase_weakref_type_decWeak_plt(v29_.v30, &v29_.v29);
  }
  if (v21 < 0) {
  LABEL_29:
    nn_os_UnlockMutex_plt((char*)this_ + 16);
    v26 = v31;
    if (v31 == 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v22 = *((_QWORD*)this_ + 19) + 24 * v21;
  v24 = *(_QWORD*)(v22 + 8);
  v23 = (__int64*)(v22 + 8);
  v28 = 0;
  if (v24 != 0) {
    v20 = nandroid_RefBase_weakref_type_attemptIncStrong_plt(v23[1], &v28);
    if ((v20 & 1) != 0) {
      v28 = *v23;
    }
  }
  v25 = v31;
  if (v31 != 0) {
    v20 = nandroid_RefBase_decStrong_plt(v31, &v31);
  }
  if (v25 != v31) {
    nandroid_sp_report_race_plt(v20);
  }
  v31 = v28;
  if (v28 == 0) {
    nandroid_VectorImpl_removeItemsAt_plt((char*)this_ + 144, v21, 1);
    goto LABEL_29;
  }
  nn_os_UnlockMutex_plt((char*)this_ + 16);
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v31 + 48LL))(v31, &v27);
  v26 = v31;
  if (v31 != 0) {
  LABEL_30:
    nandroid_RefBase_decStrong_plt(v26, &v31);
  }
LABEL_31:
  if (v27 != 0) {
    nandroid_RefBase_decStrong_plt(v27, &v27);
  }
  return v3;
}

__int64 nandroid_ALooper_awaitResponse(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *(_QWORD*)(a1 + 192);
  if (v3 != 0 &&
      (v7 = nn_os_GetCurrentThread_plt(a1),
       (v8 = nn_os_GetThreadId_plt(v7)) == nn_os_GetThreadId_plt(v3))) {
    return 0;
  }
  else {
    v10 = nn_os_LockMutex_plt(a1 + 96);
    v11 = *a2;
    if (*(_BYTE*)(*a2 + 40) != 1) {
      goto LABEL_15;
    }
  LABEL_5:
    v12 = *a3;
    v13 = (_QWORD*)(v11 + 32);
    v14 = *(_QWORD*)(v11 + 32);
    if (v14 != 0) {
      v10 = nandroid_RefBase_incStrong_plt(*(_QWORD*)(v11 + 32), a3);
    }
    if (v12 != 0) {
      v10 = nandroid_RefBase_decStrong_plt(v12, a3);
    }
    if (v12 != *a3) {
      nandroid_sp_report_race_plt(v10);
    }
    *a3 = v14;
    v15 = *v13;
    if (*v13 != 0) {
      v16 = nandroid_RefBase_decStrong_plt(*v13, v11 + 32);
      if (v15 != *v13) {
        nandroid_sp_report_race_plt(v16);
      }
      *v13 = 0;
    }
    while (1) {
    LABEL_15:
      if ((*(_BYTE*)(v11 + 40) & 1) != 0) {
        v9 = 0;
        goto LABEL_21;
      }
      nn_os_LockMutex_plt(a1 + 16);
      v17 = *(_QWORD*)(a1 + 192);
      nn_os_UnlockMutex_plt(a1 + 16);
      if (v17 == 0) {
        break;
      }
      v10 = nn_os_WaitConditionVariable_plt(a1 + 128, a1 + 96);
      v11 = *a2;
      if (*(_BYTE*)(*a2 + 40) == 1) {
        goto LABEL_5;
      }
    }
    v9 = -2;
  LABEL_21:
    nn_os_UnlockMutex_plt(a1 + 96);
  }
  return v9;
}

__int64 nandroid_ALooper_postReply(__int64 a1, _QWORD* a2, __int64 a3)
{
  unsigned int v6;

  nn_os_LockMutex_plt(a1 + 96);
  v6 = nandroid_AReplyToken_setReply_plt(*a2, a3);
  if (v6 == 0) {
    nn_os_BroadcastConditionVariable_plt(a1 + 128);
  }
  nn_os_UnlockMutex_plt(a1 + 96);
  return v6;
}

#pragma GCC visibility pop
