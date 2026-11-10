#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gs_47ada0();
__int64 nn_gs_47b000(__int64, _QWORD*);
__int64 nn_gs_48a320(__int64, __int64*, __int64*, __int64, __int64,
                     unsigned __int64);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 nn_os_SdkAllocateTlsSlot_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_TryLock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetTlsValue_plt(_QWORD, _QWORD);
extern __int64 SdkData_e88140;
extern void (*SdkData_e88148[555])();
__int64 nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData(__int64 a1);

__int64 nn_gs_impl_EnsureGraphicsAllocatorThreadLocalData(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  __int64 result;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 (*v17)(_QWORD, _QWORD, _QWORD, _QWORD);
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  _QWORD* v22;
  struct {
    _QWORD v23[13];
    __int64 (*v24)(_QWORD, _QWORD, _QWORD, _QWORD);
  } v23_;
  __int64 v25;
  __int64 v26;

  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88140,
                                  memory_order_acquire);
  v3 = SdkData_e88148[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88140) != 0) {
    *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v3) = 0;
    *(_BYTE*)v3 = 0;
    *(_BYTE*)v3 = (unsigned int)nn_os_SdkAllocateTlsSlot_plt(
                      (char*)((__int64*)0x4LL) + (_QWORD)v3, nn_gs_47ada0) == 0;
    __cxa_guard_release_plt(SdkData_e88140);
  }
  if (*(_BYTE*)v3 != 1) {
    return 0;
  }
  result = nn_os_GetTlsValue_plt(
      *(unsigned int*)((char*)((__int64*)0x4LL) + (_QWORD)v3));
  if (result != 0) {
    if (*(_QWORD*)(result + 176) != a1) {
      return 0;
    }
    return result;
  }
  v5 = (_QWORD*)(a1 + 536);
  v6 = 13;
  v22 = nullptr;
  memset(v23_.v23, 0, sizeof(v23_.v23));
  v26 = 0;
  v23_.v24 = nullptr;
  v25 = 0;
  do {
    v7 = v6 >> 1;
    v8 = &v5[3 * (v6 >> 1)];
    if (*v8 <= 0xB7u) {
      v5 = v8 + 3;
      v7 = v6 + ~v7;
    }
    v6 = v7;
  } while (v7 != 0);
  if (v5 == (_QWORD*)(a1 + 848)) {
  LABEL_15:
    v9 =
        nn_gs_48a320(a1 + 72, (__int64*)&v22, &v26, (__int64)v23_.v23, 184, 8u);
    if ((v9 & 1) == 0) {
      goto LABEL_20;
    }
  }
  else {
    while ((*(_BYTE*)v5 & 7) != 0) {
      v5 += 3;
      if (v5 == (_QWORD*)(a1 + 848)) {
        goto LABEL_15;
      }
    }
    v17 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))v5[1];
    v16 = v5[2];
    v23_.v24 = v17;
    v25 = v16;
    v9 = v17(&v25, &v22, &v26, v23_.v23);
    if ((v9 & 1) == 0) {
    LABEL_20:
      nn_diag_detail_AbortImpl_plt_856170(v9);
    }
  }
  v10 = v22;
  *v22 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[8] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[11] = 0;
  v10[12] = 0;
  v10[13] = 0;
  v10[14] = 0;
  v10[15] = 0;
  v10[16] = 0;
  v10[17] = 0;
  v10[18] = 0;
  v10[19] = 0;
  v11 = *(unsigned int*)((char*)((__int64*)0x4LL) + (_QWORD)v3);
  v10[20] = 0;
  v10[21] = 0;
  v10[22] = a1;
  v12 = v10;
  nn_os_SetTlsValue_plt(v11, v10);
  nn_gs_47b000(a1 + 128, v23_.v23);
  v13 = (_QWORD*)v23_.v23[0];
  v23_.v23[0] = 0;
  if (v13 != nullptr) {
    if ((nn_os_SdkMutexType_TryLock_plt(a1 + 88) & 1) != 0) {
      v14 = *(_QWORD*)(a1 + 96);
      v15 = *(_QWORD**)(v14 + 8);
      *v15 = v13;
      *(_QWORD*)(v14 + 8) = v13;
      v13[1] = v15;
      *v13 = v14;
      nn_os_SdkMutexType_Unlock_plt(a1 + 88);
    }
    else {
      v18 = *(_QWORD*)(a1 + 112);
      *v13 = v18;
      v19 = v18;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v19,
          (unsigned __int64)v13, memory_order_release, memory_order_relaxed);
      if (v19 != v18) {
        v20 = v19;
        do {
          *v13 = v19;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v20,
              (unsigned __int64)v13, memory_order_release,
              memory_order_relaxed);
          v21 = v20 == v19;
          v19 = v20;
        } while (!v21);
      }
    }
  }
  return (__int64)v12;
}

#pragma GCC visibility pop
