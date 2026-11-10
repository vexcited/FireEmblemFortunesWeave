#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* nn_gs_481a60_alt1(_QWORD*, __int64,
                          __int64 (*)(unsigned __int64, __int64, __int64),
                          __int64, __int64, unsigned __int64, unsigned __int64,
                          __int64) __asm__("nn_gs_481a60");
__int64 SdkRoutine_47c140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_47c140_alt1(__int64 result, __int64, unsigned __int64,
                               unsigned __int64*) __asm__("SdkRoutine_47c140");
__int64 SdkRoutine_47c6a0(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_47ca40(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_47cde0(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47d1a0(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_47d540(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47d900(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47dcc0(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47e040(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_47e3a0(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47e720(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47eaa0(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_47ee20(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_481920(unsigned __int64*, unsigned __int64*, __int64,
                          atomic_ullong*);
__int64 SdkRoutine_4882e0(void);
__int64 SdkRoutine_488680(void);
__int64 SdkRoutine_488780(void);
__int64 SdkRoutine_488880(void);
__int64 SdkRoutine_489580(void);
__int64 SdkRoutine_489680(void);
__int64 SdkRoutine_489780(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_489880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_48a9c0(__int64 result, __int64, unsigned __int64, _QWORD**);
__int64 SdkRoutine_48ad60(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_48b120(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_48b4e0(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_48b880(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_48bc40(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_48c000(__int64 result, __int64, __int64, __int64);
__int64 SdkRoutine_48c3c0(__int64 result, __int64, unsigned __int64, __int64);
__int64 SdkRoutine_48c760(__int64 result, __int64, __int64, __int64);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gpu_sdk_BootWithRemoteMemory_plt(_QWORD);
__int64 nn_gs_47b000_alt1(_QWORD, _QWORD) __asm__("nn_gs_47b000");
__int64 nn_gs_47b780_alt1(_QWORD, _QWORD) __asm__("nn_gs_47b780");
__int64 nn_gs_47bc80_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_47bc80");
__int64 nn_gs_47bda0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_47bda0");
__int64 nn_gs_47bda0_alt2(_QWORD*, __int64, __int64) __asm__("nn_gs_47bda0");
__int64 nn_gs_4806d0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_gs_4806d0");
__int64 nn_gs_480920_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_480920");
__int64 nn_gs_489e80_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_gs_489e80");
__int64 nn_gs_48a320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gs_48a500_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_gs_48a500");
__int64 nn_gs_48a6b0_alt1(_QWORD*, __int64, __int64) __asm__("nn_gs_48a6b0");
__int64 nn_gs_48ce20_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_48ce20");
__int64 nn_gs_48d560_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_48d560");
__int64 nn_gs_48d7f0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_gs_48d7f0");
__int64 nn_gs_48fae0(_QWORD, _QWORD);
__int64 nn_gs__476d90();
__int64 nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt(void);
__int64 nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt_alt1(
    _QWORD) __asm__("nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt");
__int64 nn_gs_sdk_BootGraphicsFrameManagement_plt(_QWORD);
__int64 nn_gs_sdk_BootNativeMemoryManagement_plt(_QWORD);
__int64 nn_gsv_BootWithRemoteMemory_plt(_QWORD);
__int64 nn_gsv_GetUserSession_plt(_QWORD);
__int64 nn_gsv_shim_detail_InitializeInterModuleImageContext_plt(_QWORD);
__int64 nn_nvsrv_BootWithRemoteMemory_plt(_QWORD, _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_TryLock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_syncpt_sdk_InitializeEx_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_util_IntrusiveRbTreeImpl_InsertColor(__int64 result, __int64*);
__int64 nn_util_IntrusiveRbTreeImpl_Remove(_QWORD, _QWORD);
extern _UNKNOWN SdkData_f39b3c;
extern _UNKNOWN SdkData_f3a000;
extern _UNKNOWN nn_gs_sdk_g_GraphicsAllocator;
extern __int64 SdkData_e86f90;
extern __int64 SdkData_f39b40;
extern __int64 SdkData_f39b48;
extern __int64 SdkData_f3d010;
extern int nn_gs_sdk_g_GraphicsSystemState;
extern void (*SdkData_e87798[4])();
unsigned int* nn_sm_detail_CloseSession(unsigned int* result);
__int64 nn_gs_sdk_BootGraphicsSystem(__int64 this_, __int64 a2);
__int64 nn_gs_47ace0(__int64 a1, __int64 a2);
__int64 nn_gs_47ada0(__int64 result);
__int64 nn_gs_47b000(__int64 a1, _QWORD* a2);
__int64 nn_gs_47b780(__int64 a1, _QWORD* a2);
__int64 nn_gs_47bc80(_QWORD* a1, unsigned __int64 a2, __int64 a3);
__int64 nn_gs_47bda0(__int64* a1, unsigned __int64 a2, __int64 a3);
__int64 nn_gs_47f8a0(__int64 result, char* a2, __int64 a3, __int64 a4, char a5);
__int64* nn_gs_4806d0(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                      __int64* a5);
bool nn_gs_480920(__int64* a1, __int64* a2);
__int64 nn_gs_481640(unsigned __int64* a1, atomic_uint* volatile* a2,
                     __int64 a3, unsigned __int64* a4);
_QWORD* nn_gs_481a60(_QWORD* a1, __int64 a2,
                     __int64 (*a3)(unsigned __int64, __int64, __int64),
                     __int64 a4, __int64 a5, unsigned __int64 a6,
                     unsigned __int64 a7, __int64 a8);
__int64 nn_gs_4881d0(_QWORD* a1);
__int64 nn_gs_489460(_QWORD* a1);
__int64 nn_gs_489e80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                     __int64 a5);
__int64 nn_gs_48a500(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                     __int64 a5, unsigned __int64 a6);
__int64 nn_gs_48a6b0(__int64* a1, unsigned __int64 a2, _QWORD** a3);
__int64 nn_gs_48ce20(_QWORD* a1, unsigned __int64 a2, __int64 a3);
__int64 nn_gs_48d060(_QWORD* a1);
__int64 nn_gs_48d380(__int64 a1, __int64 a2);
__int64 nn_gs_48d480(__int64 a1, __int64 a2);
__int64 nn_gs_48d560(__int64 a1, _QWORD* a2, __int64 a3);
__int64 nn_gs_48d7f0(__int64 a1, _QWORD* a2, __int64 a3);
unsigned int* nn_gs_48f4a0(unsigned int* result);
__int64 nn_gs_48fa30(__int64 a1);
__int64 nn_gs_48fbe0();

__int64 nn_gs_sdk_BootGraphicsSystem(__int64 this_, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v3 = this_;
  if (atomic_load_explicit(
          (atomic_uint* volatile)&nn_gs_sdk_g_GraphicsSystemState,
          memory_order_acquire) != 1) {
    nn_os_SdkMutexType_Lock_plt(&SdkData_f39b3c);
    if (atomic_load_explicit(
            (atomic_uint* volatile)&nn_gs_sdk_g_GraphicsSystemState,
            memory_order_acquire) != 1) {
      atomic_store((unsigned __int64)nn_gs__476d90,
                   (unsigned __int64*)SdkData_e87798[0]);
      v4 = nn_gsv_BootWithRemoteMemory_plt(1);
      nn_gsv_shim_detail_InitializeInterModuleImageContext_plt(v4);
      nn_nvsrv_BootWithRemoteMemory_plt(1, SdkData_e86f90);
      nn_syncpt_sdk_InitializeEx_plt(&SdkData_f3a000, 12288, 1);
      v5 = nn_gs_sdk_BootNativeMemoryManagement_plt(2);
      nn_gs_sdk_BootGraphicsFrameManagement_plt(v5);
      nn_gpu_sdk_BootWithRemoteMemory_plt(1);
      SdkData_f39b40 = v3;
      SdkData_f39b48 = a2;
      atomic_store(1u, (unsigned int*)&nn_gs_sdk_g_GraphicsSystemState);
    }
    this_ = nn_os_SdkMutexType_Unlock_plt(&SdkData_f39b3c);
  }
  if (SdkData_f39b40 != v3 || SdkData_f39b48 != a2) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  return this_;
}

__int64 nn_gs_47ace0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v9;

  v8 = 0;
  v9 = 0;
  v2 = nn_gs_489e80_alt1(&nn_gs_sdk_g_GraphicsAllocator, &v9, &v8, a1, a2);
  v3 = v9;
  v4 = v2;
  v5 = SdkData_f3d010;
  v6 = nn_os_GetSystemTick_plt(v2);
  if (nn_os_ConvertToTimeSpan_plt(v6 - v5) >= 3000000000LL) {
    atomic_compare_exchange_strong_explicit(
        (atomic_ullong* volatile)&SdkData_f3d010, (unsigned __int64*)&v5, v6,
        memory_order_relaxed, memory_order_relaxed);
  }
  if ((v4 & 1) != 0) {
    return v3;
  }
  else {
    return 0;
  }
}

__int64 nn_gs_47ada0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[13];

  if (result == 0) {
    return result;
  }
  v1 = *(_QWORD*)(result + 176);
  v2 = result;
  nn_gs_47b000_alt1(v1 + 128, result);
  v3 = *(_QWORD**)v2;
  *(_QWORD*)v2 = 0;
  if (v3 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(v1 + 88) & 1) != 0) {
      v4 = *(_QWORD*)(v1 + 96);
      v5 = *(_QWORD**)(v4 + 8);
      *v5 = v3;
      *(_QWORD*)(v4 + 8) = v3;
      v3[1] = v5;
      *v3 = v4;
      nn_os_SdkMutexType_Unlock_plt(v1 + 88);
    }
    else {
      v6 = *(_QWORD*)(v1 + 112);
      *v3 = v6;
      v7 = v6;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v7,
          (unsigned __int64)v3, memory_order_release, memory_order_relaxed);
      if (v7 != v6) {
        v8 = v7;
        do {
          *v3 = v7;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v8,
              (unsigned __int64)v3, memory_order_release, memory_order_relaxed);
          v9 = v8 == v7;
          v7 = v8;
        } while (!v9);
      }
    }
  }
  v10 = *(_QWORD**)(v2 + 104);
  *(_QWORD*)(v2 + 104) = 0;
  if (v10 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(v1 + 968) & 1) != 0) {
      v11 = *(_QWORD*)(v1 + 976);
      v12 = *(_QWORD**)(v11 + 8);
      *v12 = v10;
      *(_QWORD*)(v11 + 8) = v10;
      v10[1] = v12;
      *v10 = v11;
      nn_os_SdkMutexType_Unlock_plt(v1 + 968);
    }
    else {
      v13 = *(_QWORD*)(v1 + 992);
      *v10 = v13;
      v14 = v13;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v14,
          (unsigned __int64)v10, memory_order_release, memory_order_relaxed);
      if (v14 != v13) {
        v15 = v14;
        do {
          *v10 = v14;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v15,
              (unsigned __int64)v10, memory_order_release,
              memory_order_relaxed);
          v9 = v15 == v14;
          v14 = v15;
        } while (!v9);
      }
    }
  }
  nn_gs_47b780_alt1(v1 + 960, v2 + 104);
  memset(v23, 0, sizeof(v23));
  if ((v2 & 0xFFF) == 0) {
    goto LABEL_20;
  }
  if ((v2 & 0x3FF) != 0) {
    v16 = nn_gs_47bda0_alt1(v1 + 128, v2, v23);
    if ((v16 & 1) != 0) {
      goto LABEL_21;
    }
    nn_diag_detail_AbortImpl_plt_856170(v16);
  LABEL_20:
    nn_gs_47bc80_alt1(v1 + 72, v2, v23);
  LABEL_21:
    result = nn_gs_47b000_alt1(v1 + 128, v23);
    v17 = (_QWORD*)v23[0];
    v23[0] = 0;
    if (v17 == nullptr) {
      return result;
    }
    goto LABEL_22;
  }
  SdkRoutine_47c140(*(_QWORD*)(v1 + 80), v1 + 88, v2, v23, v1 + 120);
  result = nn_gs_47b000_alt1(v1 + 128, v23);
  v17 = (_QWORD*)v23[0];
  v23[0] = 0;
  if (v17 == nullptr) {
    return result;
  }
LABEL_22:
  result = nn_os_SdkMutexType_TryLock_plt(v1 + 88);
  if ((result & 1) != 0) {
    v18 = *(_QWORD*)(v1 + 96);
    v19 = *(_QWORD**)(v18 + 8);
    *v19 = v17;
    *(_QWORD*)(v18 + 8) = v17;
    v17[1] = v19;
    *v17 = v18;
    return nn_os_SdkMutexType_Unlock_plt(v1 + 88);
  }
  else {
    v20 = *(_QWORD*)(v1 + 112);
    *v17 = v20;
    v21 = v20;
    atomic_compare_exchange_strong_explicit(
        (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v21,
        (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
    if (v21 != v20) {
      v22 = v21;
      do {
        *v17 = v21;
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v22,
            (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
        v9 = v22 == v21;
        v21 = v22;
      } while (!v9);
    }
  }
  return result;
}

__int64 nn_gs_47b000(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 result;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;

  v2 = (_QWORD*)a2[1];
  a2[1] = 0;
  if (v2 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 8) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 16);
      v6 = *(_QWORD**)(v5 + 8);
      *v6 = v2;
      *(_QWORD*)(v5 + 8) = v2;
      v2[1] = v6;
      *v2 = v5;
      nn_os_SdkMutexType_Unlock_plt(a1 + 8);
    }
    else {
      v7 = *(_QWORD*)(a1 + 32);
      *v2 = v7;
      v8 = v7;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 32), (unsigned __int64*)&v8,
          (unsigned __int64)v2, memory_order_release, memory_order_relaxed);
      if (v8 != v7) {
        v9 = v8;
        do {
          *v2 = v8;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 32), (unsigned __int64*)&v9,
              (unsigned __int64)v2, memory_order_release, memory_order_relaxed);
          v10 = v9 == v8;
          v8 = v9;
        } while (!v10);
      }
    }
  }
  v11 = (_QWORD*)a2[2];
  a2[2] = 0;
  if (v11 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 40) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 48);
      v13 = *(_QWORD**)(v12 + 8);
      *v13 = v11;
      *(_QWORD*)(v12 + 8) = v11;
      v11[1] = v13;
      *v11 = v12;
      nn_os_SdkMutexType_Unlock_plt(a1 + 40);
    }
    else {
      v14 = *(_QWORD*)(a1 + 64);
      *v11 = v14;
      v15 = v14;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 64), (unsigned __int64*)&v15,
          (unsigned __int64)v11, memory_order_release, memory_order_relaxed);
      if (v15 != v14) {
        v16 = v15;
        do {
          *v11 = v15;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 64), (unsigned __int64*)&v16,
              (unsigned __int64)v11, memory_order_release,
              memory_order_relaxed);
          v10 = v16 == v15;
          v15 = v16;
        } while (!v10);
      }
    }
  }
  v17 = (_QWORD*)a2[3];
  a2[3] = 0;
  if (v17 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 72) & 1) != 0) {
      v18 = *(_QWORD*)(a1 + 80);
      v19 = *(_QWORD**)(v18 + 8);
      *v19 = v17;
      *(_QWORD*)(v18 + 8) = v17;
      v17[1] = v19;
      *v17 = v18;
      nn_os_SdkMutexType_Unlock_plt(a1 + 72);
    }
    else {
      v20 = *(_QWORD*)(a1 + 96);
      *v17 = v20;
      v21 = v20;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 96), (unsigned __int64*)&v21,
          (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
      if (v21 != v20) {
        v22 = v21;
        do {
          *v17 = v21;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 96), (unsigned __int64*)&v22,
              (unsigned __int64)v17, memory_order_release,
              memory_order_relaxed);
          v10 = v22 == v21;
          v21 = v22;
        } while (!v10);
      }
    }
  }
  v23 = (_QWORD*)a2[4];
  a2[4] = 0;
  if (v23 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 104) & 1) != 0) {
      v24 = *(_QWORD*)(a1 + 112);
      v25 = *(_QWORD**)(v24 + 8);
      *v25 = v23;
      *(_QWORD*)(v24 + 8) = v23;
      v23[1] = v25;
      *v23 = v24;
      nn_os_SdkMutexType_Unlock_plt(a1 + 104);
    }
    else {
      v26 = *(_QWORD*)(a1 + 128);
      *v23 = v26;
      v27 = v26;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 128), (unsigned __int64*)&v27,
          (unsigned __int64)v23, memory_order_release, memory_order_relaxed);
      if (v27 != v26) {
        v28 = v27;
        do {
          *v23 = v27;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 128), (unsigned __int64*)&v28,
              (unsigned __int64)v23, memory_order_release,
              memory_order_relaxed);
          v10 = v28 == v27;
          v27 = v28;
        } while (!v10);
      }
    }
  }
  v29 = (_QWORD*)a2[5];
  a2[5] = 0;
  if (v29 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 136) & 1) != 0) {
      v30 = *(_QWORD*)(a1 + 144);
      v31 = *(_QWORD**)(v30 + 8);
      *v31 = v29;
      *(_QWORD*)(v30 + 8) = v29;
      v29[1] = v31;
      *v29 = v30;
      nn_os_SdkMutexType_Unlock_plt(a1 + 136);
    }
    else {
      v32 = *(_QWORD*)(a1 + 160);
      *v29 = v32;
      v33 = v32;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 160), (unsigned __int64*)&v33,
          (unsigned __int64)v29, memory_order_release, memory_order_relaxed);
      if (v33 != v32) {
        v34 = v33;
        do {
          *v29 = v33;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 160), (unsigned __int64*)&v34,
              (unsigned __int64)v29, memory_order_release,
              memory_order_relaxed);
          v10 = v34 == v33;
          v33 = v34;
        } while (!v10);
      }
    }
  }
  v35 = (_QWORD*)a2[6];
  a2[6] = 0;
  if (v35 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 168) & 1) != 0) {
      v36 = *(_QWORD*)(a1 + 176);
      v37 = *(_QWORD**)(v36 + 8);
      *v37 = v35;
      *(_QWORD*)(v36 + 8) = v35;
      v35[1] = v37;
      *v35 = v36;
      nn_os_SdkMutexType_Unlock_plt(a1 + 168);
    }
    else {
      v38 = *(_QWORD*)(a1 + 192);
      *v35 = v38;
      v39 = v38;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 192), (unsigned __int64*)&v39,
          (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
      if (v39 != v38) {
        v40 = v39;
        do {
          *v35 = v39;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 192), (unsigned __int64*)&v40,
              (unsigned __int64)v35, memory_order_release,
              memory_order_relaxed);
          v10 = v40 == v39;
          v39 = v40;
        } while (!v10);
      }
    }
  }
  v41 = (_QWORD*)a2[7];
  a2[7] = 0;
  if (v41 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 200) & 1) != 0) {
      v42 = *(_QWORD*)(a1 + 208);
      v43 = *(_QWORD**)(v42 + 8);
      *v43 = v41;
      *(_QWORD*)(v42 + 8) = v41;
      v41[1] = v43;
      *v41 = v42;
      nn_os_SdkMutexType_Unlock_plt(a1 + 200);
    }
    else {
      v44 = *(_QWORD*)(a1 + 224);
      *v41 = v44;
      v45 = v44;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 224), (unsigned __int64*)&v45,
          (unsigned __int64)v41, memory_order_release, memory_order_relaxed);
      if (v45 != v44) {
        v46 = v45;
        do {
          *v41 = v45;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 224), (unsigned __int64*)&v46,
              (unsigned __int64)v41, memory_order_release,
              memory_order_relaxed);
          v10 = v46 == v45;
          v45 = v46;
        } while (!v10);
      }
    }
  }
  v47 = (_QWORD*)a2[8];
  a2[8] = 0;
  if (v47 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 232) & 1) != 0) {
      v48 = *(_QWORD*)(a1 + 240);
      v49 = *(_QWORD**)(v48 + 8);
      *v49 = v47;
      *(_QWORD*)(v48 + 8) = v47;
      v47[1] = v49;
      *v47 = v48;
      nn_os_SdkMutexType_Unlock_plt(a1 + 232);
    }
    else {
      v50 = *(_QWORD*)(a1 + 256);
      *v47 = v50;
      v51 = v50;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 256), (unsigned __int64*)&v51,
          (unsigned __int64)v47, memory_order_release, memory_order_relaxed);
      if (v51 != v50) {
        v52 = v51;
        do {
          *v47 = v51;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 256), (unsigned __int64*)&v52,
              (unsigned __int64)v47, memory_order_release,
              memory_order_relaxed);
          v10 = v52 == v51;
          v51 = v52;
        } while (!v10);
      }
    }
  }
  v53 = (_QWORD*)a2[9];
  a2[9] = 0;
  if (v53 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 264) & 1) != 0) {
      v54 = *(_QWORD*)(a1 + 272);
      v55 = *(_QWORD**)(v54 + 8);
      *v55 = v53;
      *(_QWORD*)(v54 + 8) = v53;
      v53[1] = v55;
      *v53 = v54;
      nn_os_SdkMutexType_Unlock_plt(a1 + 264);
    }
    else {
      v56 = *(_QWORD*)(a1 + 288);
      *v53 = v56;
      v57 = v56;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 288), (unsigned __int64*)&v57,
          (unsigned __int64)v53, memory_order_release, memory_order_relaxed);
      if (v57 != v56) {
        v58 = v57;
        do {
          *v53 = v57;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 288), (unsigned __int64*)&v58,
              (unsigned __int64)v53, memory_order_release,
              memory_order_relaxed);
          v10 = v58 == v57;
          v57 = v58;
        } while (!v10);
      }
    }
  }
  v59 = (_QWORD*)a2[10];
  a2[10] = 0;
  if (v59 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 296) & 1) != 0) {
      v60 = *(_QWORD*)(a1 + 304);
      v61 = *(_QWORD**)(v60 + 8);
      *v61 = v59;
      *(_QWORD*)(v60 + 8) = v59;
      v59[1] = v61;
      *v59 = v60;
      nn_os_SdkMutexType_Unlock_plt(a1 + 296);
    }
    else {
      v62 = *(_QWORD*)(a1 + 320);
      *v59 = v62;
      v63 = v62;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 320), (unsigned __int64*)&v63,
          (unsigned __int64)v59, memory_order_release, memory_order_relaxed);
      if (v63 != v62) {
        v64 = v63;
        do {
          *v59 = v63;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 320), (unsigned __int64*)&v64,
              (unsigned __int64)v59, memory_order_release,
              memory_order_relaxed);
          v10 = v64 == v63;
          v63 = v64;
        } while (!v10);
      }
    }
  }
  result = a1;
  v66 = (_QWORD*)a2[11];
  v67 = a2;
  v68 = result;
  v67[11] = 0;
  if (v66 != nullptr) {
    result = nn_os_SdkMutexType_TryLock_plt(result + 328);
    if ((result & 1) != 0) {
      v69 = *(_QWORD*)(v68 + 336);
      v70 = *(_QWORD**)(v69 + 8);
      *v70 = v66;
      *(_QWORD*)(v69 + 8) = v66;
      v66[1] = v70;
      *v66 = v69;
      result = nn_os_SdkMutexType_Unlock_plt(v68 + 328);
    }
    else {
      v71 = *(_QWORD*)(v68 + 352);
      *v66 = v71;
      v72 = v71;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v68 + 352), (unsigned __int64*)&v72,
          (unsigned __int64)v66, memory_order_release, memory_order_relaxed);
      if (v72 != v71) {
        v73 = v72;
        do {
          *v66 = v72;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v68 + 352), (unsigned __int64*)&v73,
              (unsigned __int64)v66, memory_order_release,
              memory_order_relaxed);
          v10 = v73 == v72;
          v72 = v73;
        } while (!v10);
      }
    }
  }
  v74 = (_QWORD*)v67[12];
  v67[12] = 0;
  if (v74 != nullptr) {
    result = nn_os_SdkMutexType_TryLock_plt(v68 + 360);
    if ((result & 1) != 0) {
      v75 = *(_QWORD*)(v68 + 368);
      v76 = *(_QWORD**)(v75 + 8);
      *v76 = v74;
      *(_QWORD*)(v75 + 8) = v74;
      v74[1] = v76;
      *v74 = v75;
      return nn_os_SdkMutexType_Unlock_plt(v68 + 360);
    }
    else {
      v77 = *(_QWORD*)(v68 + 384);
      *v74 = v77;
      v78 = v77;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v68 + 384), (unsigned __int64*)&v78,
          (unsigned __int64)v74, memory_order_release, memory_order_relaxed);
      if (v78 != v77) {
        v79 = v78;
        do {
          *v74 = v78;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v68 + 384), (unsigned __int64*)&v79,
              (unsigned __int64)v74, memory_order_release,
              memory_order_relaxed);
          v10 = v79 == v78;
          v78 = v79;
        } while (!v10);
      }
    }
  }
  return result;
}

__int64 nn_gs_47b780(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  v2 = (_QWORD*)a2[1];
  a2[1] = 0;
  if (v2 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 40) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 48);
      v6 = *(_QWORD**)(v5 + 8);
      *v6 = v2;
      *(_QWORD*)(v5 + 8) = v2;
      v2[1] = v6;
      *v2 = v5;
      nn_os_SdkMutexType_Unlock_plt(a1 + 40);
    }
    else {
      v7 = *(_QWORD*)(a1 + 64);
      *v2 = v7;
      v8 = v7;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 64), (unsigned __int64*)&v8,
          (unsigned __int64)v2, memory_order_release, memory_order_relaxed);
      if (v8 != v7) {
        v9 = v8;
        do {
          *v2 = v8;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 64), (unsigned __int64*)&v9,
              (unsigned __int64)v2, memory_order_release, memory_order_relaxed);
          v10 = v9 == v8;
          v8 = v9;
        } while (!v10);
      }
    }
  }
  v11 = (_QWORD*)a2[2];
  a2[2] = 0;
  if (v11 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 72) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 80);
      v13 = *(_QWORD**)(v12 + 8);
      *v13 = v11;
      *(_QWORD*)(v12 + 8) = v11;
      v11[1] = v13;
      *v11 = v12;
      nn_os_SdkMutexType_Unlock_plt(a1 + 72);
    }
    else {
      v14 = *(_QWORD*)(a1 + 96);
      *v11 = v14;
      v15 = v14;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 96), (unsigned __int64*)&v15,
          (unsigned __int64)v11, memory_order_release, memory_order_relaxed);
      if (v15 != v14) {
        v16 = v15;
        do {
          *v11 = v15;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 96), (unsigned __int64*)&v16,
              (unsigned __int64)v11, memory_order_release,
              memory_order_relaxed);
          v10 = v16 == v15;
          v15 = v16;
        } while (!v10);
      }
    }
  }
  v17 = (_QWORD*)a2[3];
  a2[3] = 0;
  if (v17 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 104) & 1) != 0) {
      v18 = *(_QWORD*)(a1 + 112);
      v19 = *(_QWORD**)(v18 + 8);
      *v19 = v17;
      *(_QWORD*)(v18 + 8) = v17;
      v17[1] = v19;
      *v17 = v18;
      nn_os_SdkMutexType_Unlock_plt(a1 + 104);
    }
    else {
      v20 = *(_QWORD*)(a1 + 128);
      *v17 = v20;
      v21 = v20;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 128), (unsigned __int64*)&v21,
          (unsigned __int64)v17, memory_order_release, memory_order_relaxed);
      if (v21 != v20) {
        v22 = v21;
        do {
          *v17 = v21;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 128), (unsigned __int64*)&v22,
              (unsigned __int64)v17, memory_order_release,
              memory_order_relaxed);
          v10 = v22 == v21;
          v21 = v22;
        } while (!v10);
      }
    }
  }
  v23 = (_QWORD*)a2[4];
  a2[4] = 0;
  if (v23 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 136) & 1) != 0) {
      v24 = *(_QWORD*)(a1 + 144);
      v25 = *(_QWORD**)(v24 + 8);
      *v25 = v23;
      *(_QWORD*)(v24 + 8) = v23;
      v23[1] = v25;
      *v23 = v24;
      nn_os_SdkMutexType_Unlock_plt(a1 + 136);
    }
    else {
      v26 = *(_QWORD*)(a1 + 160);
      *v23 = v26;
      v27 = v26;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 160), (unsigned __int64*)&v27,
          (unsigned __int64)v23, memory_order_release, memory_order_relaxed);
      if (v27 != v26) {
        v28 = v27;
        do {
          *v23 = v27;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 160), (unsigned __int64*)&v28,
              (unsigned __int64)v23, memory_order_release,
              memory_order_relaxed);
          v10 = v28 == v27;
          v27 = v28;
        } while (!v10);
      }
    }
  }
  v29 = (_QWORD*)a2[5];
  a2[5] = 0;
  if (v29 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 168) & 1) != 0) {
      v30 = *(_QWORD*)(a1 + 176);
      v31 = *(_QWORD**)(v30 + 8);
      *v31 = v29;
      *(_QWORD*)(v30 + 8) = v29;
      v29[1] = v31;
      *v29 = v30;
      nn_os_SdkMutexType_Unlock_plt(a1 + 168);
    }
    else {
      v32 = *(_QWORD*)(a1 + 192);
      *v29 = v32;
      v33 = v32;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 192), (unsigned __int64*)&v33,
          (unsigned __int64)v29, memory_order_release, memory_order_relaxed);
      if (v33 != v32) {
        v34 = v33;
        do {
          *v29 = v33;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 192), (unsigned __int64*)&v34,
              (unsigned __int64)v29, memory_order_release,
              memory_order_relaxed);
          v10 = v34 == v33;
          v33 = v34;
        } while (!v10);
      }
    }
  }
  v35 = (_QWORD*)a2[6];
  a2[6] = 0;
  if (v35 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 200) & 1) != 0) {
      v36 = *(_QWORD*)(a1 + 208);
      v37 = *(_QWORD**)(v36 + 8);
      *v37 = v35;
      *(_QWORD*)(v36 + 8) = v35;
      v35[1] = v37;
      *v35 = v36;
      nn_os_SdkMutexType_Unlock_plt(a1 + 200);
    }
    else {
      v38 = *(_QWORD*)(a1 + 224);
      *v35 = v38;
      v39 = v38;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 224), (unsigned __int64*)&v39,
          (unsigned __int64)v35, memory_order_release, memory_order_relaxed);
      if (v39 != v38) {
        v40 = v39;
        do {
          *v35 = v39;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 224), (unsigned __int64*)&v40,
              (unsigned __int64)v35, memory_order_release,
              memory_order_relaxed);
          v10 = v40 == v39;
          v39 = v40;
        } while (!v10);
      }
    }
  }
  result = a1;
  v42 = (_QWORD*)a2[7];
  v43 = a2;
  v44 = result;
  v43[7] = 0;
  if (v42 != nullptr) {
    result = nn_os_SdkMutexType_TryLock_plt(result + 232);
    if ((result & 1) != 0) {
      v45 = *(_QWORD*)(v44 + 240);
      v46 = *(_QWORD**)(v45 + 8);
      *v46 = v42;
      *(_QWORD*)(v45 + 8) = v42;
      v42[1] = v46;
      *v42 = v45;
      result = nn_os_SdkMutexType_Unlock_plt(v44 + 232);
    }
    else {
      v47 = *(_QWORD*)(v44 + 256);
      *v42 = v47;
      v48 = v47;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v44 + 256), (unsigned __int64*)&v48,
          (unsigned __int64)v42, memory_order_release, memory_order_relaxed);
      if (v48 != v47) {
        v49 = v48;
        do {
          *v42 = v48;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v44 + 256), (unsigned __int64*)&v49,
              (unsigned __int64)v42, memory_order_release,
              memory_order_relaxed);
          v10 = v49 == v48;
          v48 = v49;
        } while (!v10);
      }
    }
  }
  v50 = (_QWORD*)v43[8];
  v43[8] = 0;
  if (v50 != nullptr) {
    result = nn_os_SdkMutexType_TryLock_plt(v44 + 264);
    if ((result & 1) != 0) {
      v51 = *(_QWORD*)(v44 + 272);
      v52 = *(_QWORD**)(v51 + 8);
      *v52 = v50;
      *(_QWORD*)(v51 + 8) = v50;
      v50[1] = v52;
      *v50 = v51;
      return nn_os_SdkMutexType_Unlock_plt(v44 + 264);
    }
    else {
      v53 = *(_QWORD*)(v44 + 288);
      *v50 = v53;
      v54 = v53;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v44 + 288), (unsigned __int64*)&v54,
          (unsigned __int64)v50, memory_order_release, memory_order_relaxed);
      if (v54 != v53) {
        v55 = v54;
        do {
          *v50 = v54;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v44 + 288), (unsigned __int64*)&v55,
              (unsigned __int64)v50, memory_order_release,
              memory_order_relaxed);
          v10 = v55 == v54;
          v54 = v55;
        } while (!v10);
      }
    }
  }
  return result;
}

__int64 nn_gs_47bc80(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 result;
  __int64 v10;

  nn_os_SdkMutexType_Lock_plt(a1 + 97);
  v6 = (_QWORD*)a1[98];
  if (v6 == nullptr) {
  LABEL_11:
    v10 = nn_os_SdkMutexType_Unlock_plt(a1 + 97);
    result = nn_diag_detail_AbortImpl_plt_856170(v10);
    goto LABEL_12;
  }
  while (1) {
    v8 = v6 - 3;
    v7 = *(v6 - 3);
    if (a2 >= v7) {
      break;
    }
  LABEL_3:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_11;
    }
  }
  if (v7 < a2) {
    ++v6;
    goto LABEL_3;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 97);
  nn_os_SdkMutexType_Lock_plt(a1 + 97);
  nn_util_IntrusiveRbTreeImpl_Remove(a1 + 98, v8 + 3);
  nn_os_SdkMutexType_Unlock_plt(a1 + 97);
  (*(void (**)(unsigned __int64, _QWORD))(*a1 + 16LL))(a2,
                                                       *(_QWORD*)(*a1 + 32LL));
  if (((unsigned __int16)v8 & 0x3FF) == 0) {
    return SdkRoutine_47c140(a1[1], a1 + 2, v8, a3, a1 + 6);
  }
  result = nn_gs_47bda0_alt1(a1 + 7, v8, a3);
  if ((result & 1) == 0) {
  LABEL_12:
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  return result;
}

__int64 nn_gs_47bda0(__int64* a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = 72;
  if ((a2 & 0xC00) != 0) {
    v3 = 0;
  }
  switch (*(__int64*)((char*)((__int64*)0xCLL) +
                      (v3 | a2 & 0xFFFFFFFFFFFFFC00LL) + 4) &
          0xF) {
  case 0LL:
    if ((a2 & 0xF) != 0) {
      result = 0;
    }
    else {
      SdkRoutine_47c6a0(*a1, (__int64)(a1 + 1), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    break;
  case 1LL:
    if ((a2 & 0x1F) != 0) {
      result = 0;
    }
    else {
      SdkRoutine_47ca40(*a1, (__int64)(a1 + 5), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    break;
  case 2LL:
    HIDWORD(v7) = -1431655765 * (a2 & 0x3FF);
    LODWORD(v7) = HIDWORD(v7);
    if ((unsigned int)(v7 >> 4) <= 0x5555555) {
      SdkRoutine_47cde0(*a1, (__int64)(a1 + 9), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 3LL:
    if ((a2 & 0x3F) != 0) {
      result = 0;
    }
    else {
      SdkRoutine_47d1a0(*a1, (__int64)(a1 + 13), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    break;
  case 4LL:
    HIDWORD(v5) = -858993459 * (a2 & 0x3FF);
    LODWORD(v5) = HIDWORD(v5);
    if ((unsigned int)(v5 >> 4) <= 0x3333333) {
      SdkRoutine_47d540(*a1, (__int64)(a1 + 17), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 5LL:
    HIDWORD(v8) = -1431655765 * (a2 & 0x3FF);
    LODWORD(v8) = HIDWORD(v8);
    if ((unsigned int)(v8 >> 5) <= 0x2AAAAAA) {
      SdkRoutine_47d900(*a1, (__int64)(a1 + 21), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 6LL:
    HIDWORD(v9) = -1227133513 * (a2 & 0x3FF);
    LODWORD(v9) = HIDWORD(v9);
    if ((unsigned int)(v9 >> 4) <= 0x2492492) {
      SdkRoutine_47dcc0(*a1, (__int64)(a1 + 25), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 7LL:
    if ((a2 & 0x7F) != 0) {
      result = 0;
    }
    else {
      SdkRoutine_47e040(*a1, (__int64)(a1 + 29), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    break;
  case 8LL:
    HIDWORD(v11) = 954437177 * (a2 & 0x3FF);
    LODWORD(v11) = HIDWORD(v11);
    if ((unsigned int)(v11 >> 4) <= 0x1C71C71) {
      SdkRoutine_47e3a0(*a1, (__int64)(a1 + 33), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 9LL:
    HIDWORD(v6) = -858993459 * (a2 & 0x3FF);
    LODWORD(v6) = HIDWORD(v6);
    if ((unsigned int)(v6 >> 5) <= 0x1999999) {
      SdkRoutine_47e720(*a1, (__int64)(a1 + 37), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 0xALL:
    HIDWORD(v10) = -1431655765 * (a2 & 0x3FF);
    LODWORD(v10) = HIDWORD(v10);
    if ((unsigned int)(v10 >> 6) <= 0x1555555) {
      SdkRoutine_47eaa0(*a1, (__int64)(a1 + 41), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 0xBLL:
    if ((_BYTE)a2 != 0) {
      result = 0;
    }
    else {
      SdkRoutine_47ee20(*a1, (__int64)(a1 + 45), a2, a3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      result = 1;
    }
    break;
  default:
    nn_diag_detail_AbortImpl_plt_856170(a1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return result;
  }
  return result;
}

__int64 nn_gs_47f8a0(__int64 result, char* a2, __int64 a3, __int64 a4, char a5)
{
  char* v8;
  char* v9;
  char* v10;
  char* v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  char* v84;
  char* v85;
  unsigned __int64 v86;
  char* v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  char v98;
  char* v99;
  unsigned __int64 v100;
  char* v101;
  unsigned __int64 v102;
  char* v103;
  char* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  char* v125;
  bool v127;
  __int64 v128;
  char* v129;
  char* v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  char* v134;
  __int64 v135;
  char* v136;
  char* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  char* v151;
  char* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  signed __int64 v180;
  bool v181;
  __int64 v182;
  char* v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  char* v186;
  char* v187;
  __int64 v188;
  __int64 v189;
  char* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  char* v197;
  char* v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  char* v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  bool v207;
  __int64 v208;
  char* v209;
  unsigned __int64 v210;
  char* v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  unsigned __int64 v216;
  bool v217;
  __int64 v218;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64 v300;
  unsigned __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 vars38;
  __int64 vars38a;
  __int64 vars40;
  __int64 vars40a;
  __int64 vars48;
  __int64 vars50;
  __int64 _D8;

  v8 = (char*)result;
LABEL_2:
  v9 = a2 - 24;
  v10 = a2 - 48;
  v11 = a2 - 72;
  v12 = v8;
  while (1) {
    v13 = a2 - v12;
    v8 = v12;
    v14 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v12) >> 3);
    if ((__int64)v14 > 2) {
      break;
    }
    if (v14 < 2) {
      return result;
    }
    if (v14 == 2) {
      if (*((_QWORD*)a2 - 1) < *((_QWORD*)v12 + 2)) {
        v281 = *((_QWORD*)v12 + 1);
        v315 = *((_QWORD*)v12 + 2);
        v247 = *(_QWORD*)v12;
        v113 = *((_QWORD*)a2 - 3);
        v114 = *((_QWORD*)a2 - 1);
        *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
        *((_QWORD*)v12 + 2) = v114;
        *(_QWORD*)v12 = v113;
        *((_QWORD*)a2 - 2) = v281;
        *((_QWORD*)a2 - 1) = v315;
        *((_QWORD*)a2 - 3) = v247;
      }
      return result;
    }
  LABEL_10:
    if (v13 <= 575) {
      v125 = v12 + 24;
      v127 = v12 == a2 || v125 == a2;
      if ((a5 & 1) != 0) {
        if (!v127) {
          v128 = 0;
          v129 = v12;
          do {
            v131 = *((_QWORD*)v129 + 5);
            v132 = *((_QWORD*)v129 + 2);
            v129 = v125;
            if (v131 < v132) {
              v250 = *(_QWORD*)v125;
              v284 = *((_QWORD*)v125 + 1);
              v133 = v128;
              do {
                v134 = &v12[v133];
                v135 = *(_QWORD*)&v12[v133 + 8];
                *((_QWORD*)v134 + 3) = *(_QWORD*)&v12[v133];
                *((_QWORD*)v134 + 4) = v135;
                *((_QWORD*)v134 + 5) = *(_QWORD*)&v12[v133 + 16];
                if (v133 == 0) {
                  v130 = v12;
                  goto LABEL_123;
                }
                v133 -= 24;
              } while (v131 < *((_QWORD*)v134 - 1));
              v130 = &v12[v133 + 24];
            LABEL_123:
              *((_QWORD*)v130 + 2) = v131;
              *(_QWORD*)v130 = v250;
              *((_QWORD*)v130 + 1) = v284;
            }
            v125 = v129 + 24;
            v128 += 24;
          } while (v129 + 24 != a2);
        }
      }
      else if (!v127) {
        do {
          v149 = *((_QWORD*)v8 + 5);
          v150 = *((_QWORD*)v8 + 2);
          v8 = v125;
          if (v149 < v150) {
            v253 = *(_QWORD*)v125;
            v287 = *((_QWORD*)v125 + 1);
            v151 = v125;
            do {
              v152 = v151;
              v153 = *((_QWORD*)v151 - 3);
              v151 -= 24;
              v154 = *((_QWORD*)v152 - 2);
              v155 = *((_QWORD*)v152 - 1);
              *(_QWORD*)v152 = v153;
              *((_QWORD*)v152 + 1) = v154;
              *((_QWORD*)v152 + 2) = v155;
            } while (v149 < *((_QWORD*)v152 - 4));
            *((_QWORD*)v151 + 2) = v149;
            *(_QWORD*)v151 = v253;
            *((_QWORD*)v151 + 1) = v287;
          }
          v125 = v8 + 24;
        } while (v8 + 24 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v12 != a2) {
        v136 = a2;
        v137 = a2;
        if (v12 != a2) {
          v178 = a2 - v12;
          v179 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v12) >> 3);
          if (a2 - v12 >= 25 && (unsigned __int64)v178 >= 0x30) {
            v201 = (unsigned __int64)(v179 - 2) >> 1;
            v202 = v201;
            do {
              if (v201 >= v202) {
                v203 = (2 * (v202 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v204 = &v12[24 * v203];
                if ((__int64)(2 * v202 + 2) < v179) {
                  v205 = *((_QWORD*)v204 + 2);
                  v206 = *((_QWORD*)v204 + 5);
                  v207 = v205 >= v206;
                  if (v205 >= v206) {
                    v208 = 0;
                  }
                  else {
                    v208 = 24;
                  }
                  if (!v207) {
                    v203 = 2 * v202 + 2;
                  }
                  v204 += v208;
                }
                v209 = &v12[24 * v202];
                v210 = *((_QWORD*)v209 + 2);
                if (*((_QWORD*)v204 + 2) >= v210) {
                  vars38a = *(_QWORD*)v209;
                  vars40a = *((_QWORD*)v209 + 1);
                  do {
                    v211 = v204;
                    v212 = *(_QWORD*)v204;
                    v213 = *((_QWORD*)v211 + 2);
                    *((_QWORD*)v209 + 1) = *((_QWORD*)v211 + 1);
                    *((_QWORD*)v209 + 2) = v213;
                    *(_QWORD*)v209 = v212;
                    if ((__int64)v201 < v203) {
                      break;
                    }
                    v214 = 2 * v203 + 2;
                    v203 = (2 * v203) | 1;
                    v204 = &v12[24 * v203];
                    if (v214 < v179) {
                      v215 = *((_QWORD*)v204 + 2);
                      v216 = *((_QWORD*)v204 + 5);
                      v217 = v215 >= v216;
                      v218 = v215 >= v216 ? 0LL : 24LL;
                      v204 += v218;
                      if (!v217) {
                        v203 = v214;
                      }
                    }
                    v209 = v211;
                  } while (*((_QWORD*)v204 + 2) >= v210);
                  *((_QWORD*)v211 + 2) = v210;
                  *(_QWORD*)v211 = vars38a;
                  *((_QWORD*)v211 + 1) = vars40a;
                }
              }
              v181 = (__int64)v202-- <= 0;
            } while (!v181);
          }
          if (v178 >= 25) {
            v180 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)v178 >> 3);
            do {
              v182 = 0;
              v183 = v12;
              vars38 = *(_QWORD*)v12;
              vars40 = *((_QWORD*)v12 + 1);
              vars48 = *((_QWORD*)v12 + 2);
              do {
                v190 = &v183[24 * v182];
                v191 = (2 * v182) | 1;
                v182 = 2 * v182 + 2;
                v187 = v190 + 24;
                if (v182 < v180) {
                  v184 = *((_QWORD*)v190 + 5);
                  v185 = *((_QWORD*)v190 + 8);
                  v186 = v190 + 48;
                  if (v184 >= v185) {
                    v182 = v191;
                  }
                  else {
                    v187 = v186;
                  }
                }
                else {
                  v182 = v191;
                }
                v188 = *(_QWORD*)v187;
                v189 = *((_QWORD*)v187 + 2);
                *((_QWORD*)v183 + 1) = *((_QWORD*)v187 + 1);
                *((_QWORD*)v183 + 2) = v189;
                *(_QWORD*)v183 = v188;
                v183 = v187;
              } while (v182 <= (__int64)((unsigned __int64)(v180 - 2) >> 1));
              v136 -= 24;
              if (v187 == v136) {
                *((_QWORD*)v187 + 1) = vars40;
                *((_QWORD*)v187 + 2) = vars48;
                *(_QWORD*)v187 = vars38;
              }
              else {
                v192 = *(_QWORD*)v136;
                v193 = *((_QWORD*)v136 + 2);
                *((_QWORD*)v187 + 1) = *((_QWORD*)v136 + 1);
                *((_QWORD*)v187 + 2) = v193;
                *(_QWORD*)v187 = v192;
                *(_QWORD*)v136 = vars38;
                *((_QWORD*)v136 + 1) = vars40;
                *((_QWORD*)v136 + 2) = vars48;
                v194 = v187 - v12 + 24;
                if (v194 >= 25) {
                  v195 = (-2LL - 0x5555555555555555LL *
                                     ((unsigned __int64)v194 >> 3)) >>
                         1;
                  v196 = *((_QWORD*)v187 + 2);
                  v197 = &v12[24 * v195];
                  if (*((_QWORD*)v197 + 2) < v196) {
                    vars50 = *(_QWORD*)v187;
                    _D8 = *((_QWORD*)v187 + 1);
                    do {
                      v198 = v197;
                      v199 = *(_QWORD*)v197;
                      v200 = *((_QWORD*)v198 + 2);
                      *((_QWORD*)v187 + 1) = *((_QWORD*)v198 + 1);
                      *((_QWORD*)v187 + 2) = v200;
                      *(_QWORD*)v187 = v199;
                      if (v195 == 0) {
                        break;
                      }
                      v195 = (v195 - 1) >> 1;
                      v187 = v198;
                      v197 = &v12[24 * v195];
                    } while (*((_QWORD*)v197 + 2) < v196);
                    *((_QWORD*)v198 + 2) = v196;
                    *(_QWORD*)v198 = vars50;
                    *((_QWORD*)v198 + 1) = _D8;
                  }
                }
              }
              v181 = v180-- <= 2;
            } while (!v181);
          }
          return (__int64)a2;
        }
        return (__int64)v137;
      }
      return result;
    }
    v15 = &v12[24 * (v14 >> 1)];
    v16 = *((_QWORD*)a2 - 1);
    if ((unsigned __int64)v13 < 0xC01) {
      v20 = *((_QWORD*)v12 + 2);
      if (v20 < *((_QWORD*)v15 + 2)) {
        if (v16 < v20) {
          v259 = *((_QWORD*)v15 + 1);
          v293 = *((_QWORD*)v15 + 2);
          v225 = *(_QWORD*)v15;
          v21 = *(_QWORD*)v9;
          v22 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v22;
          *(_QWORD*)v15 = v21;
          goto LABEL_37;
        }
        v267 = *((_QWORD*)v15 + 1);
        v301 = *((_QWORD*)v15 + 2);
        v233 = *(_QWORD*)v15;
        v47 = *(_QWORD*)v12;
        v48 = *((_QWORD*)v12 + 2);
        *((_QWORD*)v15 + 1) = *((_QWORD*)v12 + 1);
        *((_QWORD*)v15 + 2) = v48;
        *(_QWORD*)v15 = v47;
        *((_QWORD*)v12 + 1) = v267;
        *((_QWORD*)v12 + 2) = v301;
        *(_QWORD*)v12 = v233;
        if (*((_QWORD*)a2 - 1) < v301) {
          v259 = *((_QWORD*)v12 + 1);
          v293 = *((_QWORD*)v12 + 2);
          v225 = *(_QWORD*)v12;
          v49 = *(_QWORD*)v9;
          v50 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v12 + 2) = v50;
          *(_QWORD*)v12 = v49;
        LABEL_37:
          *((_QWORD*)a2 - 2) = v259;
          *((_QWORD*)a2 - 1) = v293;
          *(_QWORD*)v9 = v225;
        }
      LABEL_38:
        --a4;
        if ((a5 & 1) == 0) {
          goto LABEL_62;
        }
        goto LABEL_39;
      }
      if (v16 >= v20) {
        goto LABEL_38;
      }
      v262 = *((_QWORD*)v12 + 1);
      v296 = *((_QWORD*)v12 + 2);
      v228 = *(_QWORD*)v12;
      v27 = *(_QWORD*)v9;
      v28 = *((_QWORD*)a2 - 1);
      *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
      *((_QWORD*)v12 + 2) = v28;
      *(_QWORD*)v12 = v27;
      *((_QWORD*)a2 - 2) = v262;
      *((_QWORD*)a2 - 1) = v296;
      *(_QWORD*)v9 = v228;
      if (*((_QWORD*)v12 + 2) >= *((_QWORD*)v15 + 2)) {
        goto LABEL_38;
      }
      v263 = *((_QWORD*)v15 + 1);
      v297 = *((_QWORD*)v15 + 2);
      v229 = *(_QWORD*)v15;
      v29 = *(_QWORD*)v12;
      v30 = *((_QWORD*)v12 + 2);
      *((_QWORD*)v15 + 1) = *((_QWORD*)v12 + 1);
      *((_QWORD*)v15 + 2) = v30;
      *(_QWORD*)v15 = v29;
      *((_QWORD*)v12 + 1) = v263;
      *((_QWORD*)v12 + 2) = v297;
      *(_QWORD*)v12 = v229;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_39;
      }
    LABEL_62:
      v51 = *((_QWORD*)v12 + 2);
      if (*((_QWORD*)v12 - 1) < v51) {
        goto LABEL_63;
      }
      v221 = *(_QWORD*)v12;
      v223 = *((_QWORD*)v12 + 1);
      if (v51 >= *((_QWORD*)a2 - 1)) {
        v101 = v12 + 24;
        do {
          v12 = v101;
          if (v101 >= a2) {
            break;
          }
          v102 = *((_QWORD*)v101 + 2);
          v101 += 24;
        } while (v51 >= v102);
      }
      else {
        v99 = v12;
        do {
          v100 = *((_QWORD*)v99 + 5);
          v12 = v99 + 24;
          v99 += 24;
        } while (v51 >= v100);
      }
      v103 = a2;
      if (v12 < a2) {
        v104 = a2;
        do {
          v105 = *((_QWORD*)v104 - 1);
          v103 = v104 - 24;
          v104 -= 24;
        } while (v51 < v105);
      }
      while (v12 < v103) {
        v280 = *((_QWORD*)v12 + 1);
        v314 = *((_QWORD*)v12 + 2);
        v246 = *(_QWORD*)v12;
        v106 = *(_QWORD*)v103;
        v107 = *((_QWORD*)v103 + 2);
        *((_QWORD*)v12 + 1) = *((_QWORD*)v103 + 1);
        *((_QWORD*)v12 + 2) = v107;
        *(_QWORD*)v12 = v106;
        *((_QWORD*)v103 + 1) = v280;
        *((_QWORD*)v103 + 2) = v314;
        *(_QWORD*)v103 = v246;
        do {
          v108 = *((_QWORD*)v12 + 5);
          v12 += 24;
        } while (v51 >= v108);
        do {
          v109 = *((_QWORD*)v103 - 1);
          v103 -= 24;
        } while (v51 < v109);
      }
      v110 = v12 - 24;
      if (v8 != v12 - 24) {
        v111 = *(_QWORD*)v110;
        v112 = *((_QWORD*)v12 - 1);
        *((_QWORD*)v8 + 1) = *((_QWORD*)v12 - 2);
        *((_QWORD*)v8 + 2) = v112;
        *(_QWORD*)v8 = v111;
      }
      a5 = 0;
      *((_QWORD*)v12 - 1) = v51;
      *(_QWORD*)v110 = v221;
      *((_QWORD*)v12 - 2) = v223;
    }
    else {
      v17 = *((_QWORD*)v15 + 2);
      if (v17 >= *((_QWORD*)v12 + 2)) {
        if (v16 < v17) {
          v260 = *((_QWORD*)v15 + 1);
          v294 = *((_QWORD*)v15 + 2);
          v226 = *(_QWORD*)v15;
          v23 = *(_QWORD*)v9;
          v24 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v24;
          *(_QWORD*)v15 = v23;
          *((_QWORD*)a2 - 2) = v260;
          *((_QWORD*)a2 - 1) = v294;
          *(_QWORD*)v9 = v226;
          if (*((_QWORD*)v15 + 2) < *((_QWORD*)v12 + 2)) {
            v261 = *((_QWORD*)v12 + 1);
            v295 = *((_QWORD*)v12 + 2);
            v227 = *(_QWORD*)v12;
            v25 = *(_QWORD*)v15;
            v26 = *((_QWORD*)v15 + 2);
            *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
            *((_QWORD*)v12 + 2) = v26;
            *(_QWORD*)v12 = v25;
            *((_QWORD*)v15 + 1) = v261;
            *((_QWORD*)v15 + 2) = v295;
            *(_QWORD*)v15 = v227;
          }
        }
      }
      else {
        if (v16 >= v17) {
          v264 = *((_QWORD*)v12 + 1);
          v298 = *((_QWORD*)v12 + 2);
          v230 = *(_QWORD*)v12;
          v31 = *(_QWORD*)v15;
          v32 = *((_QWORD*)v15 + 2);
          *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
          *((_QWORD*)v12 + 2) = v32;
          *(_QWORD*)v12 = v31;
          *((_QWORD*)v15 + 1) = v264;
          *((_QWORD*)v15 + 2) = v298;
          *(_QWORD*)v15 = v230;
          if (*((_QWORD*)a2 - 1) >= v298) {
            goto LABEL_29;
          }
          v258 = *((_QWORD*)v15 + 1);
          v292 = *((_QWORD*)v15 + 2);
          v224 = *(_QWORD*)v15;
          v33 = *(_QWORD*)v9;
          v34 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v15 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v15 + 2) = v34;
          *(_QWORD*)v15 = v33;
        }
        else {
          v258 = *((_QWORD*)v12 + 1);
          v292 = *((_QWORD*)v12 + 2);
          v224 = *(_QWORD*)v12;
          v18 = *(_QWORD*)v9;
          v19 = *((_QWORD*)a2 - 1);
          *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)v12 + 2) = v19;
          *(_QWORD*)v12 = v18;
        }
        *((_QWORD*)a2 - 2) = v258;
        *((_QWORD*)a2 - 1) = v292;
        *(_QWORD*)v9 = v224;
      }
    LABEL_29:
      v35 = *((_QWORD*)v15 - 1);
      v36 = *((_QWORD*)a2 - 4);
      v37 = (__int64*)(v15 - 24);
      if (v35 >= *((_QWORD*)v12 + 5)) {
        if (v36 < v35) {
          v265 = *((_QWORD*)v15 - 2);
          v299 = *((_QWORD*)v15 - 1);
          v231 = *v37;
          v43 = *(_QWORD*)v10;
          v44 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v15 - 2) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v15 - 1) = v44;
          *v37 = v43;
          *((_QWORD*)a2 - 5) = v265;
          *((_QWORD*)a2 - 4) = v299;
          *(_QWORD*)v10 = v231;
          if (*((_QWORD*)v15 - 1) < *((_QWORD*)v12 + 5)) {
            v232 = *((_QWORD*)v12 + 3);
            v266 = *((_QWORD*)v12 + 4);
            v300 = *((_QWORD*)v12 + 5);
            v45 = *v37;
            v46 = *((_QWORD*)v15 - 1);
            *((_QWORD*)v12 + 4) = *((_QWORD*)v15 - 2);
            *((_QWORD*)v12 + 5) = v46;
            *((_QWORD*)v12 + 3) = v45;
            *((_QWORD*)v15 - 2) = v266;
            *((_QWORD*)v15 - 1) = v300;
            *v37 = v232;
          }
        }
      }
      else {
        if (v36 >= v35) {
          v234 = *((_QWORD*)v12 + 3);
          v268 = *((_QWORD*)v12 + 4);
          v302 = *((_QWORD*)v12 + 5);
          v52 = *v37;
          v53 = *((_QWORD*)v15 - 1);
          *((_QWORD*)v12 + 4) = *((_QWORD*)v15 - 2);
          *((_QWORD*)v12 + 5) = v53;
          *((_QWORD*)v12 + 3) = v52;
          *((_QWORD*)v15 - 2) = v268;
          *((_QWORD*)v15 - 1) = v302;
          *v37 = v234;
          if (*((_QWORD*)a2 - 4) >= *((_QWORD*)v15 - 1)) {
            goto LABEL_43;
          }
          v269 = *((_QWORD*)v15 - 2);
          v303 = *((_QWORD*)v15 - 1);
          v235 = *v37;
          v54 = *(_QWORD*)v10;
          v55 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v15 - 2) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v15 - 1) = v55;
          *v37 = v54;
          v38 = v235;
          v39 = v269;
          v40 = v303;
        }
        else {
          v38 = *((_QWORD*)v12 + 3);
          v39 = *((_QWORD*)v12 + 4);
          v40 = *((_QWORD*)v12 + 5);
          v41 = *(_QWORD*)v10;
          v42 = *((_QWORD*)a2 - 4);
          *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 5);
          *((_QWORD*)v12 + 5) = v42;
          *((_QWORD*)v12 + 3) = v41;
        }
        *((_QWORD*)a2 - 5) = v39;
        *((_QWORD*)a2 - 4) = v40;
        *(_QWORD*)v10 = v38;
      }
    LABEL_43:
      v56 = *((_QWORD*)v15 + 5);
      v57 = *((_QWORD*)a2 - 7);
      if (v56 >= *((_QWORD*)v12 + 8)) {
        if (v57 < v56) {
          v270 = *((_QWORD*)v15 + 4);
          v304 = *((_QWORD*)v15 + 5);
          v236 = *((_QWORD*)v15 + 3);
          v63 = *(_QWORD*)v11;
          v64 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v15 + 4) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v15 + 5) = v64;
          *((_QWORD*)v15 + 3) = v63;
          *((_QWORD*)a2 - 8) = v270;
          *((_QWORD*)a2 - 7) = v304;
          *(_QWORD*)v11 = v236;
          if (*((_QWORD*)v15 + 5) < *((_QWORD*)v12 + 8)) {
            v237 = *((_QWORD*)v12 + 6);
            v271 = *((_QWORD*)v12 + 7);
            v305 = *((_QWORD*)v12 + 8);
            v65 = *((_QWORD*)v15 + 3);
            v66 = *((_QWORD*)v15 + 5);
            *((_QWORD*)v12 + 7) = *((_QWORD*)v15 + 4);
            *((_QWORD*)v12 + 8) = v66;
            *((_QWORD*)v12 + 6) = v65;
            *((_QWORD*)v15 + 4) = v271;
            *((_QWORD*)v15 + 5) = v305;
            *((_QWORD*)v15 + 3) = v237;
          }
        }
      }
      else {
        if (v57 >= v56) {
          v238 = *((_QWORD*)v12 + 6);
          v272 = *((_QWORD*)v12 + 7);
          v306 = *((_QWORD*)v12 + 8);
          v67 = *((_QWORD*)v15 + 3);
          v68 = *((_QWORD*)v15 + 5);
          *((_QWORD*)v12 + 7) = *((_QWORD*)v15 + 4);
          *((_QWORD*)v12 + 8) = v68;
          *((_QWORD*)v12 + 6) = v67;
          *((_QWORD*)v15 + 4) = v272;
          *((_QWORD*)v15 + 5) = v306;
          *((_QWORD*)v15 + 3) = v238;
          if (*((_QWORD*)a2 - 7) >= *((_QWORD*)v15 + 5)) {
            goto LABEL_52;
          }
          v273 = *((_QWORD*)v15 + 4);
          v307 = *((_QWORD*)v15 + 5);
          v239 = *((_QWORD*)v15 + 3);
          v69 = *(_QWORD*)v11;
          v70 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v15 + 4) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v15 + 5) = v70;
          *((_QWORD*)v15 + 3) = v69;
          v58 = v239;
          v59 = v273;
          v60 = v307;
        }
        else {
          v58 = *((_QWORD*)v12 + 6);
          v59 = *((_QWORD*)v12 + 7);
          v60 = *((_QWORD*)v12 + 8);
          v61 = *(_QWORD*)v11;
          v62 = *((_QWORD*)a2 - 7);
          *((_QWORD*)v12 + 7) = *((_QWORD*)a2 - 8);
          *((_QWORD*)v12 + 8) = v62;
          *((_QWORD*)v12 + 6) = v61;
        }
        *((_QWORD*)a2 - 8) = v59;
        *((_QWORD*)a2 - 7) = v60;
        *(_QWORD*)v11 = v58;
      }
    LABEL_52:
      v71 = *((_QWORD*)v15 + 2);
      v72 = *((_QWORD*)v15 + 5);
      if (v71 >= *((_QWORD*)v15 - 1)) {
        if (v72 < v71) {
          v275 = *((_QWORD*)v15 + 1);
          v309 = *((_QWORD*)v15 + 2);
          v241 = *(_QWORD*)v15;
          v74 = *((_QWORD*)v15 + 5);
          *((_QWORD*)v15 + 1) = *((_QWORD*)v15 + 4);
          *((_QWORD*)v15 + 2) = v74;
          v75 = *((_QWORD*)v15 + 2);
          *(_QWORD*)v15 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 + 4) = v275;
          *((_QWORD*)v15 + 5) = v309;
          v76 = *((_QWORD*)v15 - 1);
          *((_QWORD*)v15 + 3) = v241;
          if (v75 < v76) {
            v276 = *((_QWORD*)v15 - 2);
            v310 = *((_QWORD*)v15 - 1);
            v242 = *v37;
            v77 = *((_QWORD*)v15 + 1);
            *v37 = *(_QWORD*)v15;
            *((_QWORD*)v15 - 2) = v77;
            *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 2);
            *((_QWORD*)v15 + 1) = v276;
            *((_QWORD*)v15 + 2) = v310;
            *(_QWORD*)v15 = v242;
          }
        }
      }
      else {
        if (v72 >= v71) {
          v277 = *((_QWORD*)v15 - 2);
          v311 = *((_QWORD*)v15 - 1);
          v243 = *v37;
          v78 = *((_QWORD*)v15 + 1);
          *v37 = *(_QWORD*)v15;
          *((_QWORD*)v15 - 2) = v78;
          *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 2);
          *((_QWORD*)v15 + 1) = v277;
          *((_QWORD*)v15 + 2) = v311;
          *(_QWORD*)v15 = v243;
          if (*((_QWORD*)v15 + 5) >= *((_QWORD*)v15 + 2)) {
            goto LABEL_61;
          }
          v274 = *((_QWORD*)v15 + 1);
          v308 = *((_QWORD*)v15 + 2);
          v240 = *(_QWORD*)v15;
          v79 = *((_QWORD*)v15 + 4);
          *(_QWORD*)v15 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 + 1) = v79;
          *((_QWORD*)v15 + 2) = *((_QWORD*)v15 + 5);
        }
        else {
          v274 = *((_QWORD*)v15 - 2);
          v308 = *((_QWORD*)v15 - 1);
          v240 = *v37;
          v73 = *((_QWORD*)v15 + 4);
          *v37 = *((_QWORD*)v15 + 3);
          *((_QWORD*)v15 - 2) = v73;
          *((_QWORD*)v15 - 1) = *((_QWORD*)v15 + 5);
        }
        *((_QWORD*)v15 + 4) = v274;
        *((_QWORD*)v15 + 5) = v308;
        *((_QWORD*)v15 + 3) = v240;
      }
    LABEL_61:
      v278 = *((_QWORD*)v12 + 1);
      v312 = *((_QWORD*)v12 + 2);
      v244 = *(_QWORD*)v12;
      v80 = *(_QWORD*)v15;
      v81 = *((_QWORD*)v15 + 2);
      *((_QWORD*)v12 + 1) = *((_QWORD*)v15 + 1);
      *((_QWORD*)v12 + 2) = v81;
      *(_QWORD*)v12 = v80;
      *((_QWORD*)v15 + 1) = v278;
      *((_QWORD*)v15 + 2) = v312;
      *(_QWORD*)v15 = v244;
      --a4;
      if ((a5 & 1) == 0) {
        goto LABEL_62;
      }
    LABEL_39:
      v51 = *((_QWORD*)v12 + 2);
    LABEL_63:
      v82 = 0;
      v220 = *(_QWORD*)v12;
      v222 = *((_QWORD*)v12 + 1);
      do {
        v83 = &v12[v82];
        v82 += 24;
      } while (*((_QWORD*)v83 + 5) < v51);
      v84 = &v12[v82];
      v85 = a2;
      if (v82 == 24) {
        v88 = a2;
        while (v84 < v88) {
          v89 = *((_QWORD*)v88 - 1);
          v87 = v88 - 24;
          v88 -= 24;
          if (v89 < v51) {
            goto LABEL_71;
          }
        }
        v87 = v88;
        v12 = v84;
      }
      else {
        do {
          v86 = *((_QWORD*)v85 - 1);
          v87 = v85 - 24;
          v85 -= 24;
        } while (v86 >= v51);
      LABEL_71:
        v12 = v84;
        if (v84 < v87) {
          v90 = v87;
          do {
            v279 = *((_QWORD*)v12 + 1);
            v313 = *((_QWORD*)v12 + 2);
            v245 = *(_QWORD*)v12;
            v91 = *(_QWORD*)v90;
            v92 = *((_QWORD*)v90 + 2);
            *((_QWORD*)v12 + 1) = *((_QWORD*)v90 + 1);
            *((_QWORD*)v12 + 2) = v92;
            *(_QWORD*)v12 = v91;
            *((_QWORD*)v90 + 1) = v279;
            *((_QWORD*)v90 + 2) = v313;
            *(_QWORD*)v90 = v245;
            do {
              v93 = *((_QWORD*)v12 + 5);
              v12 += 24;
            } while (v93 < v51);
            do {
              v94 = *((_QWORD*)v90 - 1);
              v90 -= 24;
            } while (v94 >= v51);
          } while (v12 < v90);
        }
      }
      v95 = v12 - 24;
      if (v8 != v12 - 24) {
        v96 = *(_QWORD*)v95;
        v97 = *((_QWORD*)v12 - 1);
        *((_QWORD*)v8 + 1) = *((_QWORD*)v12 - 2);
        *((_QWORD*)v8 + 2) = v97;
        *(_QWORD*)v8 = v96;
      }
      *((_QWORD*)v12 - 1) = v51;
      *(_QWORD*)v95 = v220;
      *((_QWORD*)v12 - 2) = v222;
      if (v84 < v87) {
        goto LABEL_82;
      }
      v98 = nn_gs_480920_alt1(v8, v12 - 24, a3);
      result = nn_gs_480920_alt1(v12, a2, a3);
      if ((result & 1) != 0) {
        a2 = v12 - 24;
        if ((v98 & 1) == 0) {
          goto LABEL_2;
        }
        return result;
      }
      if ((v98 & 1) == 0) {
      LABEL_82:
        result = nn_gs_47f8a0(v8, v12 - 24, a3, a4, a5 & 1);
        a5 = 0;
      }
    }
  }
  if (v14 != 3) {
    if (v14 == 4) {
      v122 = *((_QWORD*)v12 + 5);
      v123 = *((_QWORD*)v12 + 8);
      if (v122 >= *((_QWORD*)v12 + 2)) {
        if (v123 < v122) {
          v140 = *((_QWORD*)v12 + 8);
          v142 = *((_QWORD*)v12 + 4);
          v141 = *((_QWORD*)v12 + 5);
          *((_QWORD*)v12 + 4) = *((_QWORD*)v12 + 7);
          *((_QWORD*)v12 + 5) = v140;
          v144 = *((_QWORD*)v12 + 2);
          v143 = *((_QWORD*)v12 + 3);
          *((_QWORD*)v12 + 8) = v141;
          v146 = *((_QWORD*)v12 + 5);
          v145 = *((_QWORD*)v12 + 6);
          *((_QWORD*)v12 + 6) = v143;
          *((_QWORD*)v12 + 7) = v142;
          *((_QWORD*)v12 + 3) = v145;
          if (v146 < v144) {
            v286 = *((_QWORD*)v12 + 1);
            v319 = *((_QWORD*)v12 + 2);
            v252 = *(_QWORD*)v12;
            v147 = *((_QWORD*)v12 + 4);
            v148 = *((_QWORD*)v12 + 5);
            *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
            *((_QWORD*)v12 + 1) = v147;
            *((_QWORD*)v12 + 2) = v148;
            *((_QWORD*)v12 + 3) = v252;
            *((_QWORD*)v12 + 4) = v286;
            *((_QWORD*)v12 + 5) = v319;
          }
        }
      }
      else if (v123 >= v122) {
        v289 = *((_QWORD*)v12 + 1);
        v321 = *((_QWORD*)v12 + 2);
        v255 = *(_QWORD*)v12;
        v160 = *((_QWORD*)v12 + 4);
        v161 = *((_QWORD*)v12 + 5);
        *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
        *((_QWORD*)v12 + 1) = v160;
        *((_QWORD*)v12 + 2) = v161;
        *((_QWORD*)v12 + 3) = v255;
        *((_QWORD*)v12 + 4) = v289;
        *((_QWORD*)v12 + 5) = v321;
        if (v123 < *((_QWORD*)v12 + 5)) {
          v163 = *((_QWORD*)v12 + 3);
          v162 = *((_QWORD*)v12 + 4);
          v164 = *((_QWORD*)v12 + 5);
          v165 = *((_QWORD*)v12 + 7);
          v166 = *((_QWORD*)v12 + 8);
          *((_QWORD*)v12 + 3) = *((_QWORD*)v12 + 6);
          *((_QWORD*)v12 + 4) = v165;
          *((_QWORD*)v12 + 5) = v166;
          *((_QWORD*)v12 + 6) = v163;
          *((_QWORD*)v12 + 7) = v162;
          *((_QWORD*)v12 + 8) = v164;
        }
      }
      else {
        v283 = *((_QWORD*)v12 + 1);
        v317 = *((_QWORD*)v12 + 2);
        v249 = *(_QWORD*)v12;
        v124 = *((_QWORD*)v12 + 7);
        *(_QWORD*)v12 = *((_QWORD*)v12 + 6);
        *((_QWORD*)v12 + 1) = v124;
        *((_QWORD*)v12 + 2) = *((_QWORD*)v12 + 8);
        *((_QWORD*)v12 + 6) = v249;
        *((_QWORD*)v12 + 7) = v283;
        *((_QWORD*)v12 + 8) = v317;
      }
      if (*((_QWORD*)a2 - 1) >= *((_QWORD*)v12 + 8)) {
        return result;
      }
      v256 = *((_QWORD*)v12 + 6);
      v290 = *((_QWORD*)v12 + 7);
      v322 = *((_QWORD*)v12 + 8);
      v167 = *(_QWORD*)v9;
      v168 = *((_QWORD*)a2 - 1);
      *((_QWORD*)v12 + 7) = *((_QWORD*)a2 - 2);
      *((_QWORD*)v12 + 8) = v168;
      *((_QWORD*)v12 + 6) = v167;
      *((_QWORD*)a2 - 2) = v290;
      *((_QWORD*)a2 - 1) = v322;
      *(_QWORD*)v9 = v256;
      if (*((_QWORD*)v12 + 8) >= *((_QWORD*)v12 + 5)) {
        return result;
      }
      v169 = *((_QWORD*)v12 + 8);
      v171 = *((_QWORD*)v12 + 4);
      v170 = *((_QWORD*)v12 + 5);
      *((_QWORD*)v12 + 4) = *((_QWORD*)v12 + 7);
      *((_QWORD*)v12 + 5) = v169;
      v173 = *((_QWORD*)v12 + 2);
      v172 = *((_QWORD*)v12 + 3);
      *((_QWORD*)v12 + 8) = v170;
      v175 = *((_QWORD*)v12 + 5);
      v174 = *((_QWORD*)v12 + 6);
      *((_QWORD*)v12 + 6) = v172;
      *((_QWORD*)v12 + 7) = v171;
      *((_QWORD*)v12 + 3) = v174;
      if (v175 >= v173) {
        return result;
      }
    LABEL_153:
      v291 = *((_QWORD*)v12 + 1);
      v323 = *((_QWORD*)v12 + 2);
      v257 = *(_QWORD*)v12;
      v176 = *((_QWORD*)v12 + 4);
      v177 = *((_QWORD*)v12 + 5);
      *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
      *((_QWORD*)v12 + 1) = v176;
      *((_QWORD*)v12 + 2) = v177;
      *((_QWORD*)v12 + 3) = v257;
      *((_QWORD*)v12 + 4) = v291;
      *((_QWORD*)v12 + 5) = v323;
      return result;
    }
    if (v14 == 5) {
      return nn_gs_4806d0_alt1(v12, v12 + 24, v12 + 48, v12 + 72, a2 - 24, a3);
    }
    goto LABEL_10;
  }
  v115 = *((_QWORD*)v12 + 5);
  v116 = *((_QWORD*)a2 - 1);
  if (v115 >= *((_QWORD*)v12 + 2)) {
    if (v116 >= v115) {
      return result;
    }
    v251 = *((_QWORD*)v12 + 3);
    v285 = *((_QWORD*)v12 + 4);
    v318 = *((_QWORD*)v12 + 5);
    v138 = *(_QWORD*)v9;
    v139 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 5) = v139;
    *((_QWORD*)v12 + 3) = v138;
    *((_QWORD*)a2 - 2) = v285;
    *((_QWORD*)a2 - 1) = v318;
    *(_QWORD*)v9 = v251;
    if (*((_QWORD*)v12 + 5) >= *((_QWORD*)v12 + 2)) {
      return result;
    }
    goto LABEL_153;
  }
  if (v116 >= v115) {
    v288 = *((_QWORD*)v12 + 1);
    v320 = *((_QWORD*)v12 + 2);
    v254 = *(_QWORD*)v12;
    v156 = *((_QWORD*)v12 + 4);
    v157 = *((_QWORD*)v12 + 5);
    *(_QWORD*)v12 = *((_QWORD*)v12 + 3);
    *((_QWORD*)v12 + 1) = v156;
    *((_QWORD*)v12 + 2) = v157;
    *((_QWORD*)v12 + 3) = v254;
    *((_QWORD*)v12 + 4) = v288;
    *((_QWORD*)v12 + 5) = v320;
    if (*((_QWORD*)a2 - 1) >= *((_QWORD*)v12 + 5)) {
      return result;
    }
    v119 = *((_QWORD*)v12 + 3);
    v120 = *((_QWORD*)v12 + 4);
    v121 = *((_QWORD*)v12 + 5);
    v158 = *(_QWORD*)v9;
    v159 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 4) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 5) = v159;
    *((_QWORD*)v12 + 3) = v158;
  }
  else {
    v282 = *((_QWORD*)v12 + 1);
    v316 = *((_QWORD*)v12 + 2);
    v248 = *(_QWORD*)v12;
    v117 = *(_QWORD*)v9;
    v118 = *((_QWORD*)a2 - 1);
    *((_QWORD*)v12 + 1) = *((_QWORD*)a2 - 2);
    *((_QWORD*)v12 + 2) = v118;
    *(_QWORD*)v12 = v117;
    v119 = v248;
    v120 = v282;
    v121 = v316;
  }
  *((_QWORD*)a2 - 2) = v120;
  *((_QWORD*)a2 - 1) = v121;
  *(_QWORD*)v9 = v119;
  return result;
}

__int64* nn_gs_4806d0(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                      __int64* a5)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
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
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;

  v5 = a2[2];
  v6 = a3[2];
  if (v5 >= result[2]) {
    if (v6 < v5) {
      v12 = *a2;
      v13 = a2[1];
      v14 = a2[2];
      v16 = a3[1];
      v15 = a3[2];
      *a2 = *a3;
      a2[1] = v16;
      a2[2] = v15;
      a3[1] = v13;
      a3[2] = v14;
      *a3 = v12;
      if (a2[2] < (unsigned __int64)result[2]) {
        v18 = a2[1];
        v17 = a2[2];
        v19 = *result;
        v20 = result[1];
        *result = *a2;
        result[1] = v18;
        v21 = result[2];
        result[2] = v17;
        *a2 = v19;
        a2[1] = v20;
        a2[2] = v21;
      }
    }
  }
  else {
    if (v6 < v5) {
      v8 = a3[1];
      v7 = a3[2];
      v9 = *result;
      v10 = result[1];
      *result = *a3;
      result[1] = v8;
      v11 = result[2];
      result[2] = v7;
    LABEL_9:
      a3[1] = v10;
      a3[2] = v11;
      *a3 = v9;
      goto LABEL_10;
    }
    v22 = *result;
    v23 = result[1];
    v24 = result[2];
    v26 = a2[1];
    v25 = a2[2];
    *result = *a2;
    result[1] = v26;
    result[2] = v25;
    a2[1] = v23;
    a2[2] = v24;
    *a2 = v22;
    if (a3[2] < v24) {
      v28 = a3[1];
      v27 = a3[2];
      v9 = *a2;
      v10 = a2[1];
      *a2 = *a3;
      a2[1] = v28;
      v11 = a2[2];
      a2[2] = v27;
      goto LABEL_9;
    }
  }
LABEL_10:
  if (a4[2] < (unsigned __int64)a3[2]) {
    v29 = *a3;
    v30 = a3[1];
    v31 = a3[2];
    v33 = a4[1];
    v32 = a4[2];
    *a3 = *a4;
    a3[1] = v33;
    a3[2] = v32;
    a4[1] = v30;
    a4[2] = v31;
    *a4 = v29;
    if (a3[2] < (unsigned __int64)a2[2]) {
      v34 = *a2;
      v35 = a2[1];
      v36 = a2[2];
      v38 = a3[1];
      v37 = a3[2];
      *a2 = *a3;
      a2[1] = v38;
      a2[2] = v37;
      a3[1] = v35;
      a3[2] = v36;
      *a3 = v34;
      if (a2[2] < (unsigned __int64)result[2]) {
        v40 = a2[1];
        v39 = a2[2];
        v41 = *result;
        v42 = result[1];
        *result = *a2;
        result[1] = v40;
        v43 = result[2];
        result[2] = v39;
        *a2 = v41;
        a2[1] = v42;
        a2[2] = v43;
      }
    }
  }
  if (a5[2] < (unsigned __int64)a4[2]) {
    v44 = *a4;
    v45 = a4[1];
    v46 = a4[2];
    v48 = a5[1];
    v47 = a5[2];
    *a4 = *a5;
    a4[1] = v48;
    a4[2] = v47;
    a5[1] = v45;
    a5[2] = v46;
    *a5 = v44;
    if (a4[2] < (unsigned __int64)a3[2]) {
      v49 = *a3;
      v50 = a3[1];
      v51 = a3[2];
      v53 = a4[1];
      v52 = a4[2];
      *a3 = *a4;
      a3[1] = v53;
      a3[2] = v52;
      a4[1] = v50;
      a4[2] = v51;
      *a4 = v49;
      if (a3[2] < (unsigned __int64)a2[2]) {
        v54 = *a2;
        v55 = a2[1];
        v56 = a2[2];
        v58 = a3[1];
        v57 = a3[2];
        *a2 = *a3;
        a2[1] = v58;
        a2[2] = v57;
        a3[1] = v55;
        a3[2] = v56;
        *a3 = v54;
        if (a2[2] < (unsigned __int64)result[2]) {
          v60 = a2[1];
          v59 = a2[2];
          v61 = *result;
          v62 = result[1];
          *result = *a2;
          result[1] = v60;
          v63 = result[2];
          result[2] = v59;
          *a2 = v61;
          a2[1] = v62;
          a2[2] = v63;
        }
      }
    }
  }
  return result;
}

bool nn_gs_480920(__int64* a1, __int64* a2)
{
  signed __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  int v73;
  unsigned __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;

  v2 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v9 = a1[5];
      v10 = *(a2 - 1);
      v11 = a2 - 3;
      if (v9 < a1[2]) {
        if (v10 >= v9) {
          v59 = *a1;
          v58 = a1[1];
          v60 = a1[2];
          v61 = a1[4];
          v62 = a1[5];
          *a1 = a1[3];
          a1[1] = v61;
          a1[2] = v62;
          a1[3] = v59;
          a1[4] = v58;
          a1[5] = v60;
          if (*(a2 - 1) >= (unsigned __int64)a1[5]) {
            return true;
          }
          v64 = *(a2 - 2);
          v63 = *(a2 - 1);
          v14 = a1[3];
          v15 = a1[4];
          a1[3] = *v11;
          a1[4] = v64;
          v16 = a1[5];
          a1[5] = v63;
        }
        else {
          v13 = *(a2 - 2);
          v12 = *(a2 - 1);
          v14 = *a1;
          v15 = a1[1];
          *a1 = *v11;
          a1[1] = v13;
          v16 = a1[2];
          a1[2] = v12;
        }
        *(a2 - 2) = v15;
        *(a2 - 1) = v16;
        *v11 = v14;
        return true;
      }
      if (v10 >= v9) {
        return true;
      }
      v33 = a1[3];
      v34 = a1[4];
      v35 = a1[5];
      v37 = *(a2 - 2);
      v36 = *(a2 - 1);
      a1[3] = *v11;
      a1[4] = v37;
      a1[5] = v36;
      *(a2 - 2) = v34;
      *(a2 - 1) = v35;
      *v11 = v33;
      if (a1[5] >= (unsigned __int64)a1[2]) {
        return true;
      }
      break;
    case 4LL:
      v25 = a1[5];
      v26 = a1[2];
      v27 = a1[8];
      if (v25 >= v26) {
        if (v27 < v25) {
          v49 = a1[3];
          v48 = a1[4];
          v50 = a1[7];
          v51 = a1[5];
          v52 = a1[6];
          a1[5] = a1[8];
          a1[6] = v49;
          a1[7] = v48;
          a1[8] = v51;
          a1[3] = v52;
          a1[4] = v50;
          if (a1[5] < v26) {
            v54 = *a1;
            v53 = a1[1];
            v55 = a1[2];
            v56 = a1[4];
            v57 = a1[5];
            *a1 = a1[3];
            a1[1] = v56;
            a1[2] = v57;
            a1[3] = v54;
            a1[4] = v53;
            a1[5] = v55;
          }
        }
      }
      else if (v27 >= v25) {
        v79 = *a1;
        v80 = a1[2];
        v81 = a1[3];
        v82 = a1[4];
        v83 = a1[5];
        a1[4] = a1[1];
        a1[5] = v80;
        *a1 = v81;
        a1[1] = v82;
        a1[2] = v83;
        a1[3] = v79;
        if (v27 < a1[5]) {
          v85 = a1[3];
          v84 = a1[4];
          v86 = a1[5];
          v87 = a1[7];
          v88 = a1[8];
          a1[3] = a1[6];
          a1[4] = v87;
          a1[5] = v88;
          a1[6] = v85;
          a1[7] = v84;
          a1[8] = v86;
        }
      }
      else {
        v28 = a1[7];
        v30 = a1[1];
        v29 = a1[2];
        v31 = *a1;
        *a1 = a1[6];
        a1[1] = v28;
        v32 = a1[8];
        a1[6] = v31;
        a1[7] = v30;
        a1[8] = v29;
        a1[2] = v32;
      }
      if (*(a2 - 1) >= (unsigned __int64)a1[8]) {
        return true;
      }
      v89 = a2 - 3;
      v90 = a1[6];
      v91 = a1[7];
      v92 = a1[8];
      v94 = *(a2 - 2);
      v93 = *(a2 - 1);
      a1[6] = *(a2 - 3);
      a1[7] = v94;
      a1[8] = v93;
      v89[1] = v91;
      v89[2] = v92;
      *v89 = v90;
      if (a1[8] >= (unsigned __int64)a1[5]) {
        return true;
      }
      v95 = a1[8];
      v97 = a1[4];
      v96 = a1[5];
      a1[4] = a1[7];
      a1[5] = v95;
      v99 = a1[2];
      v98 = a1[3];
      a1[8] = v96;
      v101 = a1[5];
      v100 = a1[6];
      a1[6] = v98;
      a1[7] = v97;
      a1[3] = v100;
      if (v101 >= v99) {
        return true;
      }
      break;
    case 5LL:
      nn_gs_4806d0(a1, a1 + 3, a1 + 6, a1 + 9, a2 - 3);
      return true;
    default:
      goto LABEL_13;
    }
    v103 = *a1;
    v102 = a1[1];
    v104 = a1[2];
    v105 = a1[4];
    v106 = a1[5];
    *a1 = a1[3];
    a1[1] = v105;
    a1[2] = v106;
    a1[3] = v103;
    a1[4] = v102;
    a1[5] = v104;
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    if (*(a2 - 1) < (unsigned __int64)a1[2]) {
      v4 = *(a2 - 2);
      v3 = *(a2 - 1);
      v5 = *a1;
      v6 = a1[1];
      *a1 = *(a2 - 3);
      a1[1] = v4;
      v7 = a1[2];
      a1[2] = v3;
      *(a2 - 3) = v5;
      *(a2 - 2) = v6;
      *(a2 - 1) = v7;
      return true;
    }
    return true;
  }
LABEL_13:
  v17 = a1[5];
  v18 = a1[2];
  v19 = a1[8];
  v20 = a1 + 6;
  if (v17 >= v18) {
    if (v19 < v17) {
      v38 = a1[7];
      v40 = a1[4];
      v39 = a1[5];
      v41 = a1[3];
      a1[3] = *v20;
      a1[4] = v38;
      v42 = a1[8];
      a1[8] = v39;
      *v20 = v41;
      a1[7] = v40;
      a1[5] = v42;
      if (a1[5] < v18) {
        v44 = *a1;
        v43 = a1[1];
        v45 = a1[2];
        v46 = a1[4];
        v47 = a1[5];
        *a1 = a1[3];
        a1[1] = v46;
        a1[2] = v47;
        a1[3] = v44;
        a1[4] = v43;
        a1[5] = v45;
      }
    }
  }
  else {
    if (v19 >= v17) {
      v65 = *a1;
      v66 = a1[2];
      v67 = a1[3];
      v68 = a1[4];
      v69 = a1[5];
      a1[4] = a1[1];
      a1[5] = v66;
      *a1 = v67;
      a1[1] = v68;
      a1[2] = v69;
      a1[3] = v65;
      if (v19 >= a1[5]) {
        goto LABEL_34;
      }
      v70 = a1[7];
      v23 = a1[4];
      v22 = a1[5];
      v24 = a1[3];
      a1[3] = *v20;
      a1[4] = v70;
      a1[5] = a1[8];
    }
    else {
      v21 = a1[7];
      v23 = a1[1];
      v22 = a1[2];
      v24 = *a1;
      *a1 = *v20;
      a1[1] = v21;
      a1[2] = a1[8];
    }
    *v20 = v24;
    a1[7] = v23;
    a1[8] = v22;
  }
LABEL_34:
  v71 = a1 + 9;
  if (a1 + 9 == a2) {
    return true;
  }
  v72 = 0;
  v73 = 0;
  while (1) {
    v74 = v71[2];
    if (v74 < v20[2]) {
      break;
    }
  LABEL_43:
    v20 = v71;
    v71 += 3;
    v72 += 24;
    if (v71 == a2) {
      return true;
    }
  }
  v107 = *v71;
  v108 = v71[1];
  v75 = v72;
  do {
    v76 = (__int64*)((char*)a1 + v75);
    v77 = *(__int64*)((char*)a1 + v75 + 56);
    v76[9] = *(__int64*)((char*)a1 + v75 + 48);
    v76[10] = v77;
    v76[11] = *(__int64*)((char*)a1 + v75 + 64);
    if (v75 == -48) {
      ++v73;
      a1[2] = v74;
      *a1 = v107;
      a1[1] = v108;
      if (v73 != 8) {
        goto LABEL_43;
      }
      return v71 + 3 == a2;
    }
    v75 -= 24;
  } while (v74 < v76[5]);
  v78 = (__int64*)((char*)a1 + v75 + 72);
  ++v73;
  v78[2] = v74;
  *v78 = v107;
  v78[1] = v108;
  if (v73 != 8) {
    goto LABEL_43;
  }
  return v71 + 3 == a2;
}

__int64 nn_gs_481640(unsigned __int64* a1, atomic_uint* volatile* a2,
                     __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  unsigned __int64 explicit;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  atomic_ullong* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  atomic_uint* volatile v25;
  unsigned __int64 v26;
  __int64 (*v27)(unsigned __int64, __int64, __int64);
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;

  v4 = *a4;
  v44 = 0;
  *a4 = 0;
  if (v4 != 0) {
    explicit = atomic_load_explicit((atomic_ullong* volatile)(v4 + 24),
                                    memory_order_acquire);
    if (explicit == 0) {
    LABEL_6:
      nn_diag_detail_AbortImpl_plt_856170(a1);
    }
    v10 = explicit;
    while (1) {
      v11 = (explicit - 1) & explicit;
      atomic_compare_exchange_strong((atomic_ullong* volatile)(v4 + 24), &v10,
                                     v11);
      if (v10 == explicit) {
        break;
      }
      explicit = v10;
      if (v10 == 0) {
        goto LABEL_6;
      }
    }
    v12 = (v4 & 0xFFFFFFFFFFFFF000LL) + (__clz(__rbit64(explicit)) << 10);
    v44 = v12;
    if (v11 != 0) {
      v13 = (_QWORD*)*a4;
      *a4 = v4;
      if (v13 != nullptr) {
        if ((nn_os_SdkMutexType_TryLock_plt(a3) & 1) != 0) {
          v14 = *(_QWORD*)(a3 + 8);
          v15 = *(_QWORD**)(v14 + 8);
          *v15 = v13;
          *(_QWORD*)(v14 + 8) = v13;
          v13[1] = v15;
          *v13 = v14;
          nn_os_SdkMutexType_Unlock_plt(a3);
        }
        else {
          v16 = *(_QWORD*)(a3 + 24);
          *v13 = v16;
          v17 = v16;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a3 + 24), (unsigned __int64*)&v17,
              (unsigned __int64)v13, memory_order_release,
              memory_order_relaxed);
          if (v17 != v16) {
            v18 = v17;
            do {
              *v13 = v17;
              atomic_compare_exchange_strong_explicit(
                  (atomic_ullong* volatile)(a3 + 24), (unsigned __int64*)&v18,
                  (unsigned __int64)v13, memory_order_release,
                  memory_order_relaxed);
              v19 = v18 == v17;
              v17 = v18;
            } while (!v19);
          }
        }
        v12 = v44;
      }
    }
    if (v12 != 0) {
      goto LABEL_45;
    }
  }
  v20 = (atomic_ullong*)(a3 + 24);
  v43 = 0;
  if ((SdkRoutine_481920(&v44, &v43, a3, (atomic_ullong*)(a3 + 24)) & 1) == 0) {
    v25 = *a2;
    if (atomic_load_explicit(*a2, memory_order_acquire) != 1) {
      return 0;
    }
    v26 = atomic_load_explicit((atomic_uint* volatile)((char*)v25 + 40),
                               memory_order_acquire);
    v27 = *((__int64 (**)(unsigned __int64, __int64, __int64))v25 + 1);
    v28 = *((_QWORD*)v25 + 4);
    v45 = 0;
    v29 = nn_gs_481a60_alt1(&v45, (__int64)v25 + 48, v27, v28, 1, 0x1000u, v26,
                            4096);
    if (((unsigned __int8)v29 & 1) == 0) {
      return 0;
    }
    v30 = 40;
    if ((v45 & 0xFFF) != 0) {
      v30 = 0;
    }
    v21 = v30 + v45;
    *(_QWORD*)(v21 + 16) = 0;
    *(_QWORD*)(v21 + 24) = 0;
    *(_QWORD*)v21 = 0;
    *(_QWORD*)(v21 + 8) = 0;
    atomic_store(0, (unsigned __int64*)(v21 + 16));
    v31 = *(_QWORD*)(v21 + 24);
    v32 = v31;
    atomic_compare_exchange_strong_explicit(
        (atomic_ullong* volatile)(v21 + 24), (unsigned __int64*)&v32, 0xFu,
        memory_order_relaxed, memory_order_relaxed);
    if (v32 != v31) {
      v33 = v32;
      do {
        atomic_compare_exchange_strong_explicit(
            (atomic_ullong* volatile)(v21 + 24), (unsigned __int64*)&v33, 0xFu,
            memory_order_relaxed, memory_order_relaxed);
        v19 = v33 == v32;
        v32 = v33;
      } while (!v19);
    }
    v43 = v21;
    v34 = atomic_load_explicit((atomic_ullong* volatile)(v21 + 24),
                               memory_order_acquire);
    if (v34 == 0) {
    LABEL_34:
      nn_diag_detail_AbortImpl_plt_856170(v29);
    }
    v35 = v34;
    while (1) {
      v36 = (v34 - 1) & v34;
      atomic_compare_exchange_strong((atomic_ullong* volatile)(v21 + 24), &v35,
                                     v36);
      if (v35 == v34) {
        break;
      }
      v34 = v35;
      if (v35 == 0) {
        goto LABEL_34;
      }
    }
    v38 = v21 & 0xFFFFFFFFFFFFF000LL;
    v39 = __clz(__rbit64(v34));
    if (v36 == 0) {
      v21 = 0;
    }
    v43 = v21;
    v44 = v38 + (v39 << 10);
    if (v21 == 0) {
      goto LABEL_44;
    }
    goto LABEL_19;
  }
  v21 = v43;
  if (v43 != 0) {
  LABEL_19:
    v22 = (_QWORD*)*a4;
    *a4 = v21;
    if (v22 != nullptr) {
      if ((nn_os_SdkMutexType_TryLock_plt(a3) & 1) != 0) {
        v23 = *(_QWORD*)(a3 + 8);
        v24 = *(_QWORD**)(v23 + 8);
        *v24 = v22;
        *(_QWORD*)(v23 + 8) = v22;
        v22[1] = v24;
        *v22 = v23;
        nn_os_SdkMutexType_Unlock_plt(a3);
      }
      else {
        v40 = *(_QWORD*)v20;
        *v22 = *(_QWORD*)v20;
        v41 = v40;
        atomic_compare_exchange_strong_explicit(
            v20, (unsigned __int64*)&v41, (unsigned __int64)v22,
            memory_order_release, memory_order_relaxed);
        if (v41 != v40) {
          v42 = v41;
          do {
            *v22 = v41;
            atomic_compare_exchange_strong_explicit(
                v20, (unsigned __int64*)&v42, (unsigned __int64)v22,
                memory_order_release, memory_order_relaxed);
            v19 = v42 == v41;
            v41 = v42;
          } while (!v19);
        }
      }
    }
  }
LABEL_44:
  v12 = v44;
LABEL_45:
  *a1 = v12;
  return 1;
}

_QWORD* nn_gs_481a60(_QWORD* a1, __int64 a2,
                     __int64 (*a3)(unsigned __int64, __int64, __int64),
                     __int64 a4, __int64 a5, unsigned __int64 a6,
                     unsigned __int64 a7, __int64 a8)
{
  _QWORD* v16;
  _QWORD* result;
  unsigned __int64 explicit;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  _QWORD* v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;

  nn_os_SdkMutexType_Lock_plt(a2);
  v16 = *(_QWORD**)(a2 + 8);
  if (v16 == nullptr) {
    v16 = (_QWORD*)atomic_exchange_explicit((atomic_ullong* volatile)(a2 + 16),
                                            0, memory_order_acquire);
    *(_QWORD*)(a2 + 8) = v16;
    if (v16 == nullptr) {
      nn_os_SdkMutexType_Unlock_plt(a2);
      result = (_QWORD*)a3(a7, a8, a4);
      if (result == nullptr) {
        return result;
      }
      v27 = a7 / a6;
      v16 = result;
      if ((int)(a7 / a6) < 1) {
        v28 = 0;
      }
      else {
        if ((unsigned int)v27 >= 0x40) {
          *result = 0;
          result[1] = result;
          result[2] = -1;
          result[3] = -1;
          result[4] = 0;
          goto LABEL_25;
        }
        v28 = ~(-1LL << v27);
      }
      *result = 0;
      result[1] = result;
      result[2] = v28;
      result[3] = v28;
      result[4] = 0;
      if (v27 < 2) {
        goto LABEL_4;
      }
    LABEL_25:
      if (v27 <= 2) {
        v27 = 2;
      }
      v29 = v27 - 1;
      v30 = v27 - 2;
      v31 = (v27 - 1) & 7;
      if (v30 >= 7) {
        v33 = a6;
        v34 = -(__int64)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        v32 = 1;
        do {
          v35 = (_QWORD*)((char*)result + v33);
          v32 += 8;
          v33 += 8 * a6;
          *v35 = 0;
          v35[1] = result;
          v36 = (_QWORD*)((char*)v35 + a6);
          *v36 = 0;
          v36[1] = result;
          v37 = (_QWORD*)((char*)v36 + a6);
          *v37 = 0;
          v37[1] = result;
          v38 = (_QWORD*)((char*)v37 + a6);
          *v38 = 0;
          v38[1] = result;
          v39 = (_QWORD*)((char*)v38 + a6);
          *v39 = 0;
          v39[1] = result;
          v40 = (_QWORD*)((char*)v39 + a6);
          *v40 = 0;
          v40[1] = result;
          v41 = (_QWORD*)((char*)v40 + a6);
          *v41 = 0;
          v41[1] = result;
          v42 = (_QWORD*)((char*)v41 + a6);
          *v42 = 0;
          v42[1] = result;
        } while (v34 + v32 != 1);
      }
      else {
        v32 = 1;
      }
      if (v31 != 0) {
        v43 = (_QWORD*)((char*)result + v32 * a6 + 8);
        do {
          *(v43 - 1) = 0;
          *v43 = result;
          v43 = (_QWORD*)((char*)v43 + a6);
          --v31;
        } while (v31 != 0);
      }
      goto LABEL_4;
    }
  }
  *(_QWORD*)(a2 + 8) = v16[4];
  v16[4] = 0;
  result = (_QWORD*)nn_os_SdkMutexType_Unlock_plt(a2);
LABEL_4:
  explicit = atomic_load_explicit((atomic_ullong* volatile)(v16 + 3),
                                  memory_order_acquire);
  if (explicit == 0) {
  LABEL_8:
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  v19 = explicit;
  while (1) {
    v20 = __clz(__rbit64(explicit));
    v21 = explicit & ~(1LL << v20);
    atomic_compare_exchange_strong((atomic_ullong* volatile)(v16 + 3), &v19,
                                   v21);
    if (v19 == explicit) {
      break;
    }
    explicit = v19;
    if (v19 == 0) {
      goto LABEL_8;
    }
  }
  v22 = (_QWORD*)((char*)v16 + v20 * a6);
  *v22 = a5;
  if (v21 != 0) {
    if ((nn_os_SdkMutexType_TryLock_plt(a2) & 1) != 0) {
      v16[4] = *(_QWORD*)(a2 + 8);
      *(_QWORD*)(a2 + 8) = v16;
      nn_os_SdkMutexType_Unlock_plt(a2);
    }
    else {
      v23 = *(_QWORD*)(a2 + 16);
      v16[4] = v23;
      v24 = v23;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a2 + 16), (unsigned __int64*)&v24,
          (unsigned __int64)v16, memory_order_release, memory_order_relaxed);
      if (v24 != v23) {
        v25 = v24;
        do {
          v16[4] = v24;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a2 + 16), (unsigned __int64*)&v25,
              (unsigned __int64)v16, memory_order_release,
              memory_order_relaxed);
          v26 = v25 == v24;
          v24 = v25;
        } while (!v26);
      }
    }
  }
  result = (_QWORD*)(((char*)0x0LL) + 1);
  *a1 = v22;
  return result;
}

__int64 nn_gs_4881d0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[4];
  char* v8;
  _QWORD* v9;
  __int64* v10;
  _QWORD* v11;
  _BYTE* v12;
  char** v13;
  __int64 v14;

  v1 = *a1;
  v7[0] = 0;
  v10 = &v14;
  v11 = &v9;
  v12 = v7;
  v13 = &v8;
  v14 = v1;
  v8 = (char*)a1 + 403;
  v9 = a1 + 45;
  SdkRoutine_4882e0();
  v3 = *a1;
  v7[0] = 0;
  v10 = &v14;
  v11 = &v9;
  v12 = v7;
  v13 = &v8;
  v14 = v3;
  v8 = (char*)a1 + 402;
  v9 = a1 + 41;
  SdkRoutine_488680();
  v4 = *a1;
  v7[0] = 0;
  v10 = &v14;
  v11 = &v9;
  v12 = v7;
  v13 = &v8;
  v14 = v4;
  v8 = (char*)a1 + 401;
  v9 = a1 + 37;
  SdkRoutine_488780();
  v5 = *a1;
  v7[0] = 0;
  v10 = &v14;
  v11 = &v9;
  v12 = v7;
  v13 = &v8;
  v14 = v5;
  v8 = (char*)(a1 + 50);
  v9 = a1 + 33;
  return SdkRoutine_488880();
}

__int64 nn_gs_489460(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v8[4];
  char* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD v12[2];
  _BYTE* v13;
  char** v14;

  v2 = a1 + 25;
  v1 = *a1;
  v8[0] = 0;
  v12[0] = &v11;
  v12[1] = &v10;
  v13 = v8;
  v14 = &v9;
  v10 = a1 + 33;
  v11 = v1;
  v9 = (char*)(a1 + 38);
  SdkRoutine_489580();
  v4 = *a1;
  v8[0] = 0;
  v12[0] = &v11;
  v12[1] = &v10;
  v13 = v8;
  v14 = &v9;
  v9 = (char*)a1 + 303;
  v10 = a1 + 29;
  v11 = v4;
  SdkRoutine_489680();
  v5 = *a1;
  v8[0] = 0;
  v12[0] = &v11;
  v12[1] = &v10;
  v13 = v8;
  v14 = &v9;
  v10 = v2;
  v11 = v5;
  v9 = (char*)a1 + 302;
  SdkRoutine_489780(v2, a1 + 28, 0, v12);
  v6 = *a1;
  v8[0] = 0;
  v12[0] = &v11;
  v12[1] = &v10;
  v9 = (char*)a1 + 301;
  v13 = v8;
  v14 = &v9;
  v10 = a1 + 21;
  v11 = v6;
  return SdkRoutine_489880(a1 + 21, a1 + 24, 0, v12);
}

__int64 nn_gs_489e80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                     __int64 a5)
{
  __int64 v5;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  char v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64* v30;
  char v31;
  char v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 (*v37)(_QWORD, _QWORD, _QWORD, _QWORD);
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 (*v42)(_QWORD, _QWORD, _QWORD, _QWORD);
  char v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v54;
  _QWORD v55[2];
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 (*v66)(_QWORD, _QWORD, _QWORD, _QWORD);
  __int64 v67;

  v5 = a5 - 1;
  v11 = (a5 - 1 + a4) & -a5;
  v12 = nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt();
  v13 = v12;
  if (v11 <= 0x100) {
    if (v12 != 0) {
      v14 = (_QWORD*)(a1 + 536);
      v15 = 13;
      v54 = nullptr;
      v55[0] = 0;
      do {
        v16 = v15 >> 1;
        v17 = &v14[3 * (v15 >> 1)];
        if (*v17 < a4) {
          v14 = v17 + 3;
          v16 = v15 + ~v16;
        }
        v15 = v16;
      } while (v16 != 0);
      if (v14 != (_QWORD*)(a1 + 848)) {
        while ((*v14 & v5) != 0) {
          v14 += 3;
          if (v14 == (_QWORD*)(a1 + 848)) {
            goto LABEL_15;
          }
        }
        v35 = (_QWORD*)v14[1];
        v34 = v14[2];
      LABEL_39:
        v54 = v35;
        v55[0] = v34;
        v22 = ((__int64 (*)(_QWORD*, __int64, __int64, __int64))v35)(v55, a2,
                                                                     a3, v13);
        return v22 & 1;
      }
    LABEL_15:
      v22 = nn_gs_48a320(a1 + 72, a2, a3, v12, a4, a5);
    }
    else {
      v23 = (_QWORD*)(a1 + 536);
      v24 = 13;
      v64 = 0;
      v65 = 0;
      v62 = 0;
      v63 = 0;
      v60 = 0;
      v61 = 0;
      v58 = 0;
      v59 = 0;
      v56 = 0;
      v57 = 0;
      v55[0] = 0;
      v55[1] = 0;
      v54 = nullptr;
      v66 = nullptr;
      v67 = 0;
      do {
        v25 = v24 >> 1;
        v26 = &v23[3 * (v24 >> 1)];
        if (*v26 < a4) {
          v23 = v26 + 3;
          v25 = v24 + ~v25;
        }
        v24 = v25;
      } while (v25 != 0);
      if (v23 == (_QWORD*)(a1 + 848)) {
      LABEL_31:
        v31 = nn_gs_48a320(a1 + 72, a2, a3, &v54, a4, a5);
      }
      else {
        while ((*v23 & v5) != 0) {
          v23 += 3;
          if (v23 == (_QWORD*)(a1 + 848)) {
            goto LABEL_31;
          }
        }
        v37 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))v23[1];
        v36 = v23[2];
        v66 = v37;
        v67 = v36;
        v31 = v37(&v67, a2, a3, &v54);
      }
      v22 = v31;
      nn_gs_47b000(a1 + 128, &v54);
      v38 = v54;
      v54 = nullptr;
      if (v38 != nullptr) {
        if ((nn_os_SdkMutexType_TryLock_plt(a1 + 88) & 1) != 0) {
          v39 = *(_QWORD*)(a1 + 96);
          v40 = *(_QWORD**)(v39 + 8);
          *v40 = v38;
          *(_QWORD*)(v39 + 8) = v38;
          v38[1] = v40;
          *v38 = v39;
          nn_os_SdkMutexType_Unlock_plt(a1 + 88);
        }
        else {
          v46 = *(_QWORD*)(a1 + 112);
          *v38 = v46;
          v47 = v46;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v47,
              (unsigned __int64)v38, memory_order_release,
              memory_order_relaxed);
          if (v47 != v46) {
            v48 = v47;
            do {
              *v38 = v47;
              atomic_compare_exchange_strong_explicit(
                  (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v48,
                  (unsigned __int64)v38, memory_order_release,
                  memory_order_relaxed);
              v49 = v48 == v47;
              v47 = v48;
            } while (!v49);
          }
        }
      }
    }
    return v22 & 1;
  }
  if (v12 == 0) {
    v27 = (_QWORD*)(a1 + 1272);
    v28 = 9;
    v60 = 0;
    v61 = 0;
    v58 = 0;
    v59 = 0;
    v56 = 0;
    v57 = 0;
    v55[0] = 0;
    v55[1] = 0;
    v54 = nullptr;
    v66 = nullptr;
    v67 = 0;
    do {
      v29 = v28 >> 1;
      v30 = &v27[3 * (v28 >> 1)];
      if (*v30 < a4) {
        v27 = v30 + 3;
        v29 = v28 + ~v29;
      }
      v28 = v29;
    } while (v29 != 0);
    if (v27 == (_QWORD*)(a1 + 1488)) {
    LABEL_35:
      v32 = nn_gs_48a500_alt1(a1 + 952, a2, a3, &v54, a4, a5);
      v33 = v54;
      v22 = v32;
      v54 = nullptr;
      if (v33 == nullptr) {
      LABEL_56:
        nn_gs_47b780(a1 + 960, &v54);
        return v22 & 1;
      }
    }
    else {
      while ((*v27 & v5) != 0) {
        v27 += 3;
        if (v27 == (_QWORD*)(a1 + 1488)) {
          goto LABEL_35;
        }
      }
      v42 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))v27[1];
      v41 = v27[2];
      v66 = v42;
      v67 = v41;
      v43 = v42(&v67, a2, a3, &v54);
      v33 = v54;
      v22 = v43;
      v54 = nullptr;
      if (v33 == nullptr) {
        goto LABEL_56;
      }
    }
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 968) & 1) != 0) {
      v44 = *(_QWORD*)(a1 + 976);
      v45 = *(_QWORD**)(v44 + 8);
      *v45 = v33;
      *(_QWORD*)(v44 + 8) = v33;
      v33[1] = v45;
      *v33 = v44;
      nn_os_SdkMutexType_Unlock_plt(a1 + 968);
    }
    else {
      v50 = *(_QWORD*)(a1 + 992);
      *v33 = v50;
      v51 = v50;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 992), (unsigned __int64*)&v51,
          (unsigned __int64)v33, memory_order_release, memory_order_relaxed);
      if (v51 != v50) {
        v52 = v51;
        do {
          *v33 = v51;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 992), (unsigned __int64*)&v52,
              (unsigned __int64)v33, memory_order_release,
              memory_order_relaxed);
          v49 = v52 == v51;
          v51 = v52;
        } while (!v49);
      }
    }
    goto LABEL_56;
  }
  v18 = (_QWORD*)(a1 + 1272);
  v19 = 9;
  v54 = nullptr;
  v55[0] = 0;
  do {
    v20 = v19 >> 1;
    v21 = &v18[3 * (v19 >> 1)];
    if (*v21 < a4) {
      v18 = v21 + 3;
      v20 = v19 + ~v20;
    }
    v19 = v20;
  } while (v20 != 0);
  if (v18 != (_QWORD*)(a1 + 1488)) {
    while ((*v18 & v5) != 0) {
      v18 += 3;
      if (v18 == (_QWORD*)(a1 + 1488)) {
        goto LABEL_19;
      }
    }
    v35 = (_QWORD*)v18[1];
    v34 = v18[2];
    v13 = v12 + 104;
    goto LABEL_39;
  }
LABEL_19:
  v22 = nn_gs_48a500_alt1(a1 + 952, a2, a3, v12 + 104, a4, a5);
  return v22 & 1;
}

__int64 nn_gs_48a500(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                     __int64 a5, unsigned __int64 a6)
{
  __int64 v11;
  atomic_uint* volatile v12;
  __int64 (*v13)(unsigned __int64, unsigned __int64, _QWORD);
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v26;
  __int64* v27;

  v27 = nullptr;
  v26 = 0;
  if (a6 <= 0x1000) {
    v11 = 4096;
  }
  else {
    v11 = a6;
  }
  if (((*(__int64 (**)(__int64, __int64**, __int64*))(a1 + 552))(a1 + 560, &v27,
                                                                 &v26) &
       1) == 0) {
    return 0;
  }
  v12 = *(atomic_uint* volatile*)a1;
  if (atomic_load_explicit(*(atomic_uint* volatile*)a1, memory_order_acquire) !=
          1 ||
      (v13 = *((__int64 (**)(unsigned __int64, unsigned __int64, _QWORD))v12 +
               1)) == nullptr ||
      (v14 = (a5 + v11 - 1) & -v11,
       (v15 = v13((v14 + 4095) & 0xFFFFFFFFFFFFF000LL,
                  (v11 + 4095) & 0xFFFFFFFFFFFFF000LL, *((_QWORD*)v12 + 4))) ==
           0)) {
    v24 = nn_gs_48a6b0_alt1((_QWORD*)(a1 + 8), (__int64)v27, a4);
    if ((v24 & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v24);
    }
    return 0;
  }
  v16 = v27;
  v17 = v15;
  *v27 = v15;
  v16[1] = v14;
  *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v16 + 4) = 0;
  nn_os_SdkMutexType_Lock_plt(a1 + 536);
  v18 = *(__int64**)(a1 + 544);
  v19 = (__int64**)(a1 + 544);
  v20 = v16 + 3;
  if (v18 != nullptr) {
    v21 = *v16;
    do {
      while (1) {
        v22 = (__int64**)v18;
        v23 = *(v18 - 3);
        if (v21 < v23) {
          break;
        }
        if (v23 >= v21) {
          nn_diag_detail_AbortImpl_plt_856170(v19);
        }
        v18 = v22[1];
        if (v18 == nullptr) {
          *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v16) = (__int64)v22;
          *v20 = 0;
          v16[4] = 0;
          *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v16) = 1;
          v22[1] = v20;
          goto LABEL_20;
        }
      }
      v18 = *v22;
    } while (*v22 != nullptr);
    *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v16) = (__int64)v22;
    *v20 = 0;
    v16[4] = 0;
    *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v16) = 1;
    *v22 = v20;
  }
  else {
    *(_OWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v20 + 4) =
        (__typeof__(*(_OWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v20 + 4))){0};
    *v20 = 0;
    *(_DWORD*)((char*)((__int64*)0x30LL) + (_QWORD)v16) = 1;
    *v19 = v20;
  }
LABEL_20:
  nn_util_IntrusiveRbTreeImpl_InsertColor((__int64)v19, v20);
  nn_os_SdkMutexType_Unlock_plt(a1 + 536);
  *a2 = v17;
  *a3 = v14;
  return 1;
}

__int64 nn_gs_48a6b0(__int64* a1, unsigned __int64 a2, _QWORD** a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;

  v3 = *(__int64*)((char*)((__int64*)0x38LL) + (a2 & 0xFFFFFFFFFFFFF000LL)) &
       0xF;
  if (v3 <= 3) {
    if ((*(__int64*)((char*)((__int64*)0x38LL) + (a2 & 0xFFFFFFFFFFFFF000LL)) &
         0xFuLL) > 1) {
      if (v3 == 2) {
        HIDWORD(v8) = -1227133513 * (a2 & 0xFFF);
        LODWORD(v8) = HIDWORD(v8);
        if ((unsigned int)(v8 >> 6) <= 0x924924) {
          SdkRoutine_48b120(*a1, (__int64)(a1 + 9), a2, (__int64)a3);
          return 1;
        }
        else {
          return 0;
        }
      }
      else {
        if (v3 != 3) {
          goto LABEL_40;
        }
        if ((a2 & 0x1FF) != 0) {
          return 0;
        }
        else {
          SdkRoutine_48b4e0(*a1, (__int64)(a1 + 13), a2, (__int64)a3);
          return 1;
        }
      }
    }
    else if (v3 != 0) {
      if (v3 != 1) {
        goto LABEL_40;
      }
      HIDWORD(v6) = -1030792151 * (a2 & 0xFFF);
      LODWORD(v6) = HIDWORD(v6);
      if ((unsigned int)(v6 >> 4) <= 0xA3D70A) {
        SdkRoutine_48ad60(*a1, (__int64)(a1 + 5), a2, (__int64)a3);
        return 1;
      }
      else {
        return 0;
      }
    }
    else if ((a2 & 0x3F) != 0) {
      return 0;
    }
    else {
      SdkRoutine_48a9c0(*a1, (__int64)(a1 + 1), a2, a3);
      return 1;
    }
  }
  else if ((*(__int64*)((char*)((__int64*)0x38LL) +
                        (a2 & 0xFFFFFFFFFFFFF000LL)) &
            0xFuLL) <= 5) {
    if (v3 == 4) {
      HIDWORD(v9) = 954437177 * (a2 & 0xFFF);
      LODWORD(v9) = HIDWORD(v9);
      if ((unsigned int)(v9 >> 6) <= 0x71C71C) {
        SdkRoutine_48b880(*a1, (__int64)(a1 + 17), a2, (__int64)a3);
        return 1;
      }
      else {
        return 0;
      }
    }
    else {
      if (v3 != 5) {
        goto LABEL_40;
      }
      HIDWORD(v7) = 1022611261 * (a2 & 0xFFF);
      LODWORD(v7) = HIDWORD(v7);
      if ((unsigned int)(v7 >> 5) <= 0x618618) {
        SdkRoutine_48bc40(*a1, (__int64)(a1 + 21), a2, (__int64)a3);
        return 1;
      }
      else {
        return 0;
      }
    }
  }
  else {
    switch (v3) {
    case 6uLL:
      HIDWORD(v10) = -84215045 * (a2 & 0xFFF);
      LODWORD(v10) = HIDWORD(v10);
      if ((unsigned int)(v10 >> 4) <= 0x505050) {
        SdkRoutine_48c000(*a1, (__int64)(a1 + 25), a2, (__int64)a3);
        return 1;
      }
      else {
        return 0;
      }
    case 7uLL:
    LABEL_29:
      if ((a2 & 0x3FF) != 0) {
        return 0;
      }
      else {
        SdkRoutine_48c3c0(*a1, (__int64)(a1 + 29), a2, (__int64)a3);
        return 1;
      }
    case 8uLL:
      HIDWORD(v4) = -50529027 * (a2 & 0xFFF);
      LODWORD(v4) = HIDWORD(v4);
      if ((unsigned int)(v4 >> 4) > 0x303030) {
        return 0;
      }
      SdkRoutine_48c760(*a1, (__int64)(a1 + 33), a2, (__int64)a3);
      return 1;
    default:
    LABEL_40:
      nn_diag_detail_AbortImpl_plt_856170(a1);
      goto LABEL_29;
    }
  }
}

__int64 nn_gs_48ce20(_QWORD* a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;

  nn_os_SdkMutexType_Lock_plt(a1 + 67);
  v6 = (_QWORD*)a1[68];
  if (v6 == nullptr) {
  LABEL_9:
    v10 = nn_os_SdkMutexType_Unlock_plt(a1 + 67);
    result = nn_diag_detail_AbortImpl_plt_856170(v10);
    goto LABEL_10;
  }
  while (1) {
    v8 = (__int64)(v6 - 3);
    v7 = *(v6 - 3);
    if (a2 >= v7) {
      break;
    }
  LABEL_3:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_9;
    }
  }
  if (v7 < a2) {
    ++v6;
    goto LABEL_3;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 67);
  nn_os_SdkMutexType_Lock_plt(a1 + 67);
  nn_util_IntrusiveRbTreeImpl_Remove(a1 + 68, v8 + 24);
  nn_os_SdkMutexType_Unlock_plt(a1 + 67);
  (*(void (**)(unsigned __int64, _QWORD))(*a1 + 16LL))(a2,
                                                       *(_QWORD*)(*a1 + 32LL));
  result = nn_gs_48a6b0_alt1(a1 + 1, v8, a3);
  if ((result & 1) == 0) {
  LABEL_10:
    nn_diag_detail_AbortImpl_plt_856170(result);
    __udf(0);
  }
  return result;
}

__int64 nn_gs_48d060(_QWORD* a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64* v4;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v1 = *a1;
  v2 = *(_QWORD*)a1[1];
  v3 = *(_QWORD*)a1[2];
  if (v3 == 2) {
    v6 = nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt_alt1(*a1);
    v7 = v2 & 0xFFF;
    if (v6 != 0) {
      v8 = v6;
      if ((v2 & 0xFFF) == 0) {
        return nn_gs_48ce20_alt1(v1 + 952, v2, v8 + 104);
      }
      result = nn_gs_48a6b0_alt1((_QWORD*)(v1 + 960), v2, v6 + 104);
      if ((result & 1) != 0) {
        return result;
      }
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v24 = nullptr;
    if (v7 != 0) {
      v9 = nn_gs_48a6b0_alt1((_QWORD*)(v1 + 960), v2, (__int64)&v24);
      if ((v9 & 1) == 0) {
        goto LABEL_44;
      }
      v10 = v24;
      v24 = nullptr;
      if (v10 == nullptr) {
        return nn_gs_47b780(v1 + 960, &v24);
      }
    }
    else {
      nn_gs_48ce20_alt1(v1 + 952, v2, &v24);
      v10 = v24;
      v24 = nullptr;
      if (v10 == nullptr) {
        return nn_gs_47b780(v1 + 960, &v24);
      }
    }
    if ((nn_os_SdkMutexType_TryLock_plt(v1 + 968) & 1) != 0) {
      v12 = *(_QWORD*)(v1 + 976);
      v13 = *(_QWORD**)(v12 + 8);
      *v13 = v10;
      *(_QWORD*)(v12 + 8) = v10;
      v10[1] = v13;
      *v10 = v12;
      nn_os_SdkMutexType_Unlock_plt(v1 + 968);
    }
    else {
      v21 = *(_QWORD*)(v1 + 992);
      *v10 = v21;
      v22 = v21;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v22,
          (unsigned __int64)v10, memory_order_release, memory_order_relaxed);
      if (v22 != v21) {
        v23 = v22;
        do {
          *v10 = v22;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 992), (unsigned __int64*)&v23,
              (unsigned __int64)v10, memory_order_release,
              memory_order_relaxed);
          v20 = v23 == v22;
          v22 = v23;
        } while (!v20);
      }
    }
    return nn_gs_47b780(v1 + 960, &v24);
  }
  if (v3 != 1) {
    result = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
  LABEL_43:
    v9 = nn_diag_detail_AbortImpl_plt_856170(result);
  LABEL_44:
    nn_diag_detail_AbortImpl_plt_856170(v9);
    __udf(0);
  }
  v4 = (unsigned __int64*)
      nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData_plt_alt1(*a1);
  if (v4 == nullptr) {
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v24 = nullptr;
    if ((v2 & 0xFFF) != 0) {
      if ((v2 & 0x3FF) == 0) {
        SdkRoutine_47c140_alt1(*(_QWORD*)(v1 + 80), v1 + 88, v2,
                               (unsigned __int64*)&v24);
        result = nn_gs_47b000(v1 + 128, &v24);
        v14 = v24;
        v24 = nullptr;
        if (v14 == nullptr) {
          return result;
        }
        goto LABEL_28;
      }
      v11 = nn_gs_47bda0_alt2((_QWORD*)(v1 + 128), v2, (__int64)&v24);
      if ((v11 & 1) == 0) {
        nn_diag_detail_AbortImpl_plt_856170(v11);
        return nn_gs_48ce20_alt1(v1 + 952, v2, v8 + 104);
      }
    }
    else {
      nn_gs_47bc80_alt1(v1 + 72, v2, &v24);
    }
    result = nn_gs_47b000(v1 + 128, &v24);
    v14 = v24;
    v24 = nullptr;
    if (v14 == nullptr) {
      return result;
    }
  LABEL_28:
    result = nn_os_SdkMutexType_TryLock_plt(v1 + 88);
    if ((result & 1) != 0) {
      v15 = *(_QWORD*)(v1 + 96);
      v16 = *(_QWORD**)(v15 + 8);
      *v16 = v14;
      *(_QWORD*)(v15 + 8) = v14;
      v14[1] = v16;
      *v14 = v15;
      return nn_os_SdkMutexType_Unlock_plt(v1 + 88);
    }
    else {
      v17 = *(_QWORD*)(v1 + 112);
      *v14 = v17;
      v18 = v17;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v18,
          (unsigned __int64)v14, memory_order_release, memory_order_relaxed);
      if (v18 != v17) {
        v19 = v18;
        do {
          *v14 = v18;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(v1 + 112), (unsigned __int64*)&v19,
              (unsigned __int64)v14, memory_order_release,
              memory_order_relaxed);
          v20 = v19 == v18;
          v18 = v19;
        } while (!v20);
      }
    }
    return result;
  }
  if ((v2 & 0xFFF) == 0) {
    return nn_gs_47bc80_alt1(v1 + 72, v2, v4);
  }
  if ((v2 & 0x3FF) == 0) {
    return SdkRoutine_47c140_alt1(*(_QWORD*)(v1 + 80), v1 + 88, v2, v4);
  }
  result = nn_gs_47bda0_alt2((_QWORD*)(v1 + 128), v2, (__int64)v4);
  if ((result & 1) == 0) {
    goto LABEL_43;
  }
  return result;
}

__int64 nn_gs_48d380(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD v9[7];

  if ((a2 & 0xFFF) == 0) {
    nn_os_SdkMutexType_Lock_plt(a1 + 776);
    v6 = *(_QWORD**)(a1 + 784);
    memset(&v9[1], 0, 48);
    for (v9[0] = a2; v6 != nullptr; v6 = (_QWORD*)*v6) {
      v7 = *(v6 - 3);
      if (v9[0] >= v7) {
        if (v7 >= v9[0]) {
          nn_os_SdkMutexType_Unlock_plt(a1 + 776);
          return *(v6 - 2);
        }
        ++v6;
      }
    }
    v8 = nn_os_SdkMutexType_Unlock_plt(a1 + 776);
    v4 = nn_diag_detail_AbortImpl_plt_856170(v8);
  LABEL_14:
    nn_diag_detail_AbortImpl_plt_856170(v4);
    __udf(0);
  }
  v9[0] = 0;
  if ((a2 & 0x3FF) != 0) {
    v4 = nn_gs_48d560_alt1(a1 + 56, v9, a2);
    if ((v4 & 1) != 0) {
      return v9[0];
    }
    goto LABEL_14;
  }
  return 1024;
}

__int64 nn_gs_48d480(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD v9[7];

  if ((a2 & 0xFFF) != 0) {
    v9[0] = 0;
    v4 = nn_gs_48d7f0_alt1(a1 + 8, v9, a2);
    if ((v4 & 1) != 0) {
      return v9[0];
    }
  LABEL_12:
    nn_diag_detail_AbortImpl_plt_856170(v4);
    __udf(0);
  }
  nn_os_SdkMutexType_Lock_plt(a1 + 536);
  v6 = *(_QWORD**)(a1 + 544);
  memset(&v9[1], 0, 48);
  v9[0] = a2;
  if (v6 == nullptr) {
  LABEL_11:
    v8 = nn_os_SdkMutexType_Unlock_plt(a1 + 536);
    v4 = nn_diag_detail_AbortImpl_plt_856170(v8);
    goto LABEL_12;
  }
  while (1) {
    v7 = *(v6 - 3);
    if (v9[0] >= v7) {
      break;
    }
  LABEL_6:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_11;
    }
  }
  if (v7 < v9[0]) {
    ++v6;
    goto LABEL_6;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 536);
  return *(v6 - 2);
}

__int64 nn_gs_48d560(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = 72;
  if ((a3 & 0xC00) != 0) {
    v3 = 0;
  }
  switch (*(__int64*)((char*)((__int64*)0xCLL) +
                      (v3 | a3 & 0xFFFFFFFFFFFFFC00LL) + 4) &
          0xF) {
  case 0LL:
    if ((a3 & 0xF) != 0) {
      result = 0;
    }
    else {
      *a2 = 16;
      result = 1;
    }
    break;
  case 1LL:
    if ((a3 & 0x1F) != 0) {
      result = 0;
    }
    else {
      *a2 = 32;
      result = 1;
    }
    break;
  case 2LL:
    HIDWORD(v7) = -1431655765 * (a3 & 0x3FF);
    LODWORD(v7) = HIDWORD(v7);
    if ((unsigned int)(v7 >> 4) < 0x5555556) {
      *a2 = 48;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 3LL:
    if ((a3 & 0x3F) != 0) {
      result = 0;
    }
    else {
      *a2 = 64;
      result = 1;
    }
    break;
  case 4LL:
    HIDWORD(v5) = -858993459 * (a3 & 0x3FF);
    LODWORD(v5) = HIDWORD(v5);
    if ((unsigned int)(v5 >> 4) < 0x3333334) {
      *a2 = 80;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 5LL:
    HIDWORD(v8) = -1431655765 * (a3 & 0x3FF);
    LODWORD(v8) = HIDWORD(v8);
    if ((unsigned int)(v8 >> 5) < 0x2AAAAAB) {
      *a2 = 96;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 6LL:
    HIDWORD(v9) = -1227133513 * (a3 & 0x3FF);
    LODWORD(v9) = HIDWORD(v9);
    if ((unsigned int)(v9 >> 4) < 0x2492493) {
      *a2 = 112;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 7LL:
    if ((a3 & 0x7F) != 0) {
      result = 0;
    }
    else {
      *a2 = 128;
      result = 1;
    }
    break;
  case 8LL:
    HIDWORD(v11) = 954437177 * (a3 & 0x3FF);
    LODWORD(v11) = HIDWORD(v11);
    if ((unsigned int)(v11 >> 4) < 0x1C71C72) {
      *a2 = 144;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 9LL:
    HIDWORD(v6) = -858993459 * (a3 & 0x3FF);
    LODWORD(v6) = HIDWORD(v6);
    if ((unsigned int)(v6 >> 5) < 0x199999A) {
      *a2 = 160;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 0xALL:
    HIDWORD(v10) = -1431655765 * (a3 & 0x3FF);
    LODWORD(v10) = HIDWORD(v10);
    if ((unsigned int)(v10 >> 6) < 0x1555556) {
      *a2 = 192;
      result = 1;
    }
    else {
      result = 0;
    }
    break;
  case 0xBLL:
    if ((_BYTE)a3 != 0) {
      result = 0;
    }
    else {
      *a2 = 256;
      result = 1;
    }
    break;
  default:
    nn_diag_detail_AbortImpl_plt_856170(a1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return result;
  }
  return result;
}

__int64 nn_gs_48d7f0(__int64 a1, _QWORD* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;

  v3 = *(__int64*)((char*)((__int64*)0x38LL) + (a3 & 0xFFFFFFFFFFFFF000LL)) &
       0xF;
  if (v3 <= 3) {
    if ((*(__int64*)((char*)((__int64*)0x38LL) + (a3 & 0xFFFFFFFFFFFFF000LL)) &
         0xFuLL) > 1) {
      if (v3 == 2) {
        HIDWORD(v8) = -1227133513 * (a3 & 0xFFF);
        LODWORD(v8) = HIDWORD(v8);
        if ((unsigned int)(v8 >> 6) < 0x924925) {
          *a2 = 448;
          return 1;
        }
        else {
          return 0;
        }
      }
      else {
        if (v3 != 3) {
          goto LABEL_40;
        }
        if ((a3 & 0x1FF) != 0) {
          return 0;
        }
        else {
          *a2 = 512;
          return 1;
        }
      }
    }
    else if (v3 != 0) {
      if (v3 != 1) {
        goto LABEL_40;
      }
      HIDWORD(v6) = -1030792151 * (a3 & 0xFFF);
      LODWORD(v6) = HIDWORD(v6);
      if ((unsigned int)(v6 >> 4) < 0xA3D70B) {
        *a2 = 400;
        return 1;
      }
      else {
        return 0;
      }
    }
    else if ((a3 & 0x3F) != 0) {
      return 0;
    }
    else {
      *a2 = 64;
      return 1;
    }
  }
  else if ((*(__int64*)((char*)((__int64*)0x38LL) +
                        (a3 & 0xFFFFFFFFFFFFF000LL)) &
            0xFuLL) <= 5) {
    if (v3 == 4) {
      HIDWORD(v9) = 954437177 * (a3 & 0xFFF);
      LODWORD(v9) = HIDWORD(v9);
      if ((unsigned int)(v9 >> 6) < 0x71C71D) {
        *a2 = 576;
        return 1;
      }
      else {
        return 0;
      }
    }
    else {
      if (v3 != 5) {
        goto LABEL_40;
      }
      HIDWORD(v7) = 1022611261 * (a3 & 0xFFF);
      LODWORD(v7) = HIDWORD(v7);
      if ((unsigned int)(v7 >> 5) < 0x618619) {
        *a2 = 672;
        return 1;
      }
      else {
        return 0;
      }
    }
  }
  else {
    switch (v3) {
    case 6uLL:
      HIDWORD(v10) = -84215045 * (a3 & 0xFFF);
      LODWORD(v10) = HIDWORD(v10);
      if ((unsigned int)(v10 >> 4) < 0x505051) {
        *a2 = 816;
        return 1;
      }
      else {
        return 0;
      }
    case 7uLL:
    LABEL_29:
      if ((a3 & 0x3FF) != 0) {
        return 0;
      }
      else {
        *a2 = 1024;
        return 1;
      }
    case 8uLL:
      HIDWORD(v4) = -50529027 * (a3 & 0xFFF);
      LODWORD(v4) = HIDWORD(v4);
      if ((unsigned int)(v4 >> 4) >= 0x303031) {
        return 0;
      }
      *a2 = 1360;
      return 1;
    default:
    LABEL_40:
      nn_diag_detail_AbortImpl_plt_856170(a1);
      goto LABEL_29;
    }
  }
}

unsigned int* nn_gs_48f4a0(unsigned int* result)
{
  if (*((_BYTE*)result + 16) == 1) {
    return nn_sm_detail_CloseSession(result + 5);
  }
  return result;
}

__int64 nn_gs_48fa30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  unsigned int v11;

  v2 = nn_os_SdkMutexType_Lock_plt(a1);
  v11 = 0;
  v3 = nn_gsv_GetUserSession_plt(v2);
  v10 = &v11;
  v4 = nn_gs_48fae0(v3, &v10);
  if (v4 == 0) {
    v5 = v11;
    v11 = 0;
    nn_os_SdkMutexType_Lock_plt(a1 + 24);
    if (*(_BYTE*)(a1 + 16) == 1) {
      v7 = nn_os_SdkMutexType_Unlock_plt(a1 + 24);
      v8 = nn_diag_detail_AbortImpl_plt_856170(v7);
      return nn_gs_48fae0(v8, v9);
    }
    *(_DWORD*)(a1 + 20) = v5;
    *(_BYTE*)(a1 + 16) = 1;
    nn_os_SdkMutexType_Unlock_plt(a1 + 24);
    *(_QWORD*)(a1 + 8) = a1 + 20;
  }
  if (v11 != 0) {
    nn_os_CloseNativeHandle_plt(v11);
  }
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v4;
}

__int64 nn_gs_48fbe0() { return fw_rtld_RegisterCrtDestructor(); }

#pragma GCC visibility pop
