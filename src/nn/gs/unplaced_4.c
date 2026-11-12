#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_47c140(__int64 result, __int64, unsigned __int64,
                          unsigned __int64*);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_gs_47bda0(__int64*, unsigned __int64, __int64);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_util_IntrusiveRbTreeImpl_InsertColor(__int64 result, __int64*);
__int64 nn_gs_48a320(__int64 a1, __int64* a2, __int64* a3, unsigned __int64* a4,
                     __int64 a5, unsigned __int64 a6);

__int64 nn_gs_48a320(__int64 a1, __int64* a2, __int64* a3, unsigned __int64* a4,
                     __int64 a5, unsigned __int64 a6)
{
  __int64 v11;
  atomic_uint* volatile v12;
  __int64 (*v13)(unsigned __int64, unsigned __int64, _QWORD);
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v26;
  unsigned __int64 v27;

  v27 = 0;
  v26 = 0;
  if (a6 <= 0x1000) {
    v11 = 4096;
  }
  else {
    v11 = a6;
  }
  if (((*(__int64 (**)(__int64, unsigned __int64*, __int64*))(a1 + 792))(
           a1 + 800, &v27, &v26) &
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
    if ((v27 & 0x3FF) != 0) {
      v24 = nn_gs_47bda0((__int64*)(a1 + 56), v27, (__int64)a4);
      if ((v24 & 1) == 0) {
        nn_diag_detail_AbortImpl_plt_856170(v24);
      }
    }
    else {
      SdkRoutine_47c140(*(_QWORD*)(a1 + 8), a1 + 16, v27, a4);
    }
    return 0;
  }
  v16 = (_QWORD*)v27;
  v17 = v15;
  *(_QWORD*)v27 = v15;
  v16[1] = v14;
  *(_DWORD*)((char*)((__int64*)0xCLL) + (_QWORD)v16 + 4) = 0;
  nn_os_SdkMutexType_Lock_plt(a1 + 776);
  v18 = *(__int64**)(a1 + 784);
  v19 = (__int64**)(a1 + 784);
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
          goto LABEL_23;
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
LABEL_23:
  nn_util_IntrusiveRbTreeImpl_InsertColor((__int64)v19, v20);
  nn_os_SdkMutexType_Unlock_plt(a1 + 776);
  *a2 = v17;
  *a3 = v14;
  return 1;
}

#pragma GCC visibility pop
