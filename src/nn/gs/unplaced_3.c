#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_47f460(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void SdkRoutine_484fc0(PSEUDO_X8, __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gs_47ada0();
__int64 nn_os_SdkAllocateTlsSlot_plt(_QWORD, _QWORD);
extern __int64 SdkData_e88140;
extern void (*SdkData_e88148[555])();
__int64 nn_gs_47f180(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5);

__int64 nn_gs_47f180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  unsigned int* v19;
  _QWORD* v20;
  __int64 result;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  __int64 v25;
  void(__attribute__((noreturn)) * v26)();
  void(__attribute__((noreturn)) * v27)();
  __int64 v28[39];

  v5 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_uint* volatile)a1, (unsigned int*)&v5, 2u, memory_order_acquire,
      memory_order_acquire);
  if (v5 != 0) {
    LODWORD(v28[0]) = 131315;
    nn_diag_detail_AbortImpl_plt_858db0(v28);
  }
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 16) = a3;
  *(_QWORD*)(a1 + 24) = a4;
  *(_QWORD*)(a1 + 32) = a5;
  *(_QWORD*)(a1 + 40) = 4096;
  atomic_store(1u, (unsigned int*)a1);
  v11 = a1 + 72;
  *(_QWORD*)(a1 + 72) = a1;
  *(_QWORD*)(a1 + 80) = v11;
  *(_QWORD*)(a1 + 128) = a1 + 80;
  SdkRoutine_47f460((void*)((__int64)v28), v11);
  v12 = (_QWORD*)(a1 + 536);
  v13 = memcpy_plt(a1 + 536, v28, 312);
  v14 = 13;
  do {
    v15 = v14 >> 1;
    v16 = &v12[3 * (v14 >> 1)];
    if (*v16 <= 0x37u) {
      v12 = v16 + 3;
      v15 = v14 + ~v15;
    }
    v14 = v15;
  } while (v15 != 0);
  if (v12 == (_QWORD*)(a1 + 848)) {
  LABEL_9:
    nn_diag_detail_AbortImpl_plt_856170(v13);
  }
  while ((*(_BYTE*)v12 & 7) != 0) {
    v12 += 3;
    if (v12 == (_QWORD*)(a1 + 848)) {
      goto LABEL_9;
    }
  }
  v17 = v12[1];
  v18 = 0;
  *(_QWORD*)(a1 + 872) = v12[2];
  *(_QWORD*)(a1 + 864) = v17;
  v19 = (unsigned int*)(a1 + 880);
  atomic_compare_exchange_strong_explicit(
      (atomic_uint* volatile)(a1 + 880), (unsigned int*)&v18, 2u,
      memory_order_acquire, memory_order_acquire);
  if (v18 != 0) {
    LODWORD(v28[0]) = 131315;
    nn_diag_detail_AbortImpl_plt_858db0(v28);
  }
  *(_QWORD*)(a1 + 888) = a2;
  *(_QWORD*)(a1 + 896) = a3;
  *(_QWORD*)(a1 + 904) = a4;
  *(_QWORD*)(a1 + 912) = a5;
  *(_QWORD*)(a1 + 920) = 4096;
  atomic_store(1u, v19);
  *(_QWORD*)(a1 + 952) = v19;
  *(_QWORD*)(a1 + 960) = a1 + 952;
  SdkRoutine_484fc0((void*)(v28), a1 + 952);
  v20 = (_QWORD*)(a1 + 1272);
  result = memcpy_plt(a1 + 1272, v28, 216);
  v22 = 9;
  do {
    v23 = v22 >> 1;
    v24 = &v20[3 * (v22 >> 1)];
    if (*v24 <= 0x37u) {
      v20 = v24 + 3;
      v23 = v22 + ~v23;
    }
    v22 = v23;
  } while (v23 != 0);
  if (v20 == (_QWORD*)(a1 + 1488)) {
  LABEL_18:
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  while ((*(_BYTE*)v20 & 7) != 0) {
    v20 += 3;
    if (v20 == (_QWORD*)(a1 + 1488)) {
      goto LABEL_18;
    }
  }
  v25 = v20[1];
  *(_QWORD*)(a1 + 1512) = v20[2];
  *(_QWORD*)(a1 + 1504) = v25;
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88140,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire_plt(SdkData_e88140);
    if ((_DWORD)result != 0) {
      v26 = SdkData_e88148[0];
      v27 = SdkData_e88148[0];
      *(_DWORD*)((char*)SdkData_e88148[0] +
                 (unsigned __int64)((__int64*)0x4LL)) = 0;
      *(_BYTE*)v26 = 0;
      *(_BYTE*)v26 =
          (unsigned int)nn_os_SdkAllocateTlsSlot_plt(
              (char*)((__int64*)0x4LL) + (_QWORD)v27, nn_gs_47ada0) == 0;
      result = __cxa_guard_release_plt(SdkData_e88140);
    }
  }
  if (atomic_load_explicit((atomic_uint* volatile)a1, memory_order_acquire) !=
      1) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  atomic_store(0x1000u, (unsigned __int64*)(a1 + 40));
  if (atomic_load_explicit((atomic_uint* volatile)(a1 + 880),
                           memory_order_acquire) != 1) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  atomic_store(0x1000u, (unsigned __int64*)(a1 + 920));
  return result;
}

#pragma GCC visibility pop
