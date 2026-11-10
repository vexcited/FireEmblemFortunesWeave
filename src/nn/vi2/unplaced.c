#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5e5930();
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_ClearEvent_plt(_QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_InitializeEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_858be0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_WaitAny_plt(_QWORD);
__int64 nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(_QWORD);
__int64 nn_vi2_5e6180_alt1(_QWORD, _QWORD) __asm__("nn_vi2_5e6180");
__int64 nn_vi2_5e6400_alt1(_QWORD) __asm__("nn_vi2_5e6400");
__int64 nn_vi2_5e6a80_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_vi2_5e6a80");
__int64 nn_vi2_5e6b80_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("nn_vi2_5e6b80");
__int64 nn_vi2_5e6da0_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_vi2_5e6da0");
__attribute__((swiftcall)) void nn_vi2_5e1874(PSEUDO_X8 x8_, __int64 result,
                                              int a2, __int64 a3);
__int64 nn_vi2_5e5580(__int64* a1, __int64 a2);
__int64 nn_vi2_5e56e0(__int64* a1);
__int64 nn_vi2_5e59a0(__int64 a1);
__int64 nn_vi2_5e5ac0(__int64 a1);
__int64 nn_vi2_5e5be0(__int64 a1);
__int64 nn_vi2_5e5e40(__int64 a1, unsigned int a2);
__int64 nn_vi2_5e5fe0(unsigned __int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int64* a5);
__int64 nn_vi2_5e6180(__int64 a1, unsigned int* a2);
__int64 nn_vi2_5e6400(__int64 a1);
__int64 nn_vi2_5e65a0(__int64 a1, unsigned int a2);
__int64 nn_vi2_5e66a0(__int64 a1, unsigned int a2);
__int64 nn_vi2_5e67a0(__int64 a1, __int64 a2);
__int64 nn_vi2_5e6950(__int64 a1, __int64 a2, unsigned int a3);
__int64 nn_vi2_5e6a80(__int64 a1, unsigned __int64* a2, unsigned __int64* a3);
__int64 nn_vi2_5e6b80(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
__int64 nn_vi2_5e6da0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 nn_vi2_5eb900(__int64 a1, __int64 a2);

__attribute__((swiftcall)) void nn_vi2_5e1874(PSEUDO_X8 x8_, __int64 result,
                                              int a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  a4[6] = 0;
  a4[7] = 0;
  a4[4] = 0;
  a4[5] = 0;
  a4[3] = 0;
  *a4 = 0x1100000000LL;
  a4[1] = ((a2 << 16) - 0x10000) & 0xFFFF0000 |
          (unsigned __int64)(unsigned __int16)(result - 1) | (a3 << 32);
  a4[2] = 0;
  {
    result;
    return;
  }
}

__int64 nn_vi2_5e5580(__int64* a1, __int64 a2)
{
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void (*v12)(__int64*);
  __int64 v13;

  *a1 = a2;
  *((_DWORD*)a1 + 166) = 0;
  *((_BYTE*)a1 + 660) = 0;
  *((_DWORD*)a1 + 167) = -1;
  v4 = (*(__int64 (**)(_QWORD))(a2 + 56))(*(_QWORD*)(a2 + 24));
  if (v4 == 0) {
    v5 = *a1;
    LODWORD(v12) = 0;
    v6 = (*(__int64 (**)(_QWORD, void (**)(__int64*)))(v5 + 72))(
        *(_QWORD*)(v5 + 24), &v12);
    if (v6 != 0) {
      v4 = v6;
    }
    else {
      v7 = (int)v12;
      if ((unsigned int)v12 >= 7) {
        v7 = 7;
      }
      a1[3] = (unsigned int)(v7 + 1);
      a1[4] = 1;
      v4 = nn_vi2_5e56e0(a1);
      if (v4 == 0) {
        a1[1] = *(_QWORD*)(a2 + 32);
        a1[2] = *(_QWORD*)(a2 + 40);
        return v4;
      }
      a1[3] = 0;
      a1[4] = 0;
      *((_DWORD*)a1 + 12) = 2;
      *((_DWORD*)a1 + 13) = 2;
      *((_DWORD*)a1 + 14) = 2;
      *((_DWORD*)a1 + 15) = 2;
      *((_DWORD*)a1 + 16) = 2;
      *((_DWORD*)a1 + 17) = 2;
      *((_DWORD*)a1 + 18) = 2;
      *((_DWORD*)a1 + 19) = 2;
    }
    (*(void (**)(_QWORD))(*a1 + 64))(*(_QWORD*)(*a1 + 24));
  }
  nn_vi2_5e5ac0((__int64)(a1 + 33));
  nn_os_SdkMutexType_Lock_plt(a1 + 80);
  v8 = a1[81];
  a1[81] = 0;
  if (v8 != 0 && atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 72),
                                           0xFFFFFFFFFFFFFFFFLL,
                                           memory_order_release) == 1) {
    __builtin_arm_dmb(9u);
    v9 = *(_QWORD*)(v8 + 64);
    v12 = *(void (**)(__int64*))(v8 + 56);
    v13 = v9;
    v12(&v13);
  }
  v10 = nn_os_SdkMutexType_Unlock_plt(a1 + 80);
  if (*((_DWORD*)a1 + 166) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  *((_BYTE*)a1 + 660) = 0;
  return v4;
}

__int64 nn_vi2_5e56e0(__int64* a1)
{
  __int64 result;
  __int64 v2;
  __int64* v4;
  __int64 (*v5)(__int64, unsigned int*);
  __int64 v6;
  __int64* v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  void (*v16)(__int64*);
  void (*v17)(__int64*, __int64*);
  __int64 v18;
  unsigned int v19;
  unsigned int v20;

  if ((atomic_exchange_explicit((atomic_uchar* volatile)(a1 + 69), 1u,
                                memory_order_acquire) &
       1) != 0) {
    return 2674;
  }
  v2 = *a1;
  a1[79] = 0;
  a1[78] = 0;
  v4 = a1 + 70;
  a1[77] = 0;
  a1[76] = 0;
  a1[75] = 0;
  a1[74] = 0;
  a1[73] = 0;
  a1[72] = 0;
  a1[71] = 0;
  a1[70] = 0;
  v5 = *(__int64 (**)(__int64, unsigned int*))(v2 + 96);
  v6 = *(_QWORD*)(v2 + 24);
  v20 = 0;
  result = v5(v6, &v20);
  if ((_DWORD)result != 0) {
    v7 = v4;
    goto LABEL_16;
  }
  v19 = 0;
  if (v20 >= 0x3FF) {
    v8 = 1023;
  }
  else {
    v8 = v20;
  }
  result = (*(__int64 (**)(_QWORD, unsigned int*, _QWORD))(*a1 + 104))(
      *(_QWORD*)(*a1 + 24), &v19, v8);
  if ((_DWORD)result == 0) {
    v13 = v19;
    v19 = 0;
    v14 = nn_os_AttachReadableHandleToSystemEvent_plt(v4, v13, 1, 0);
    *((_BYTE*)a1 + 608) = 1;
    if ((a1[69] & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v14);
    }
    a1[79] = 1;
    a1[77] = (__int64)SdkRoutine_5e5930;
    a1[78] = (__int64)a1;
    nn_vi2_5e59a0((__int64)(a1 + 33));
    a1[52] = (__int64)a1;
    nn_os_SdkMutexType_Lock_plt(a1 + 31);
    a1[32] = (__int64)(a1 + 52);
    nn_os_SdkMutexType_Unlock_plt(a1 + 31);
    a1[14] = (v8 + 32) >> 5;
    nn_os_SdkMutexType_Lock_plt(a1 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 79), 1u,
                              memory_order_relaxed);
    v15 = a1[81];
    a1[81] = (__int64)v4;
    if (v15 != 0 && atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v15 + 72),
                        0xFFFFFFFFFFFFFFFFLL, memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v16 = *(void (**)(__int64*))(v15 + 56);
      v18 = *(_QWORD*)(v15 + 64);
      v16(&v18);
    }
    nn_os_SdkMutexType_Unlock_plt(a1 + 80);
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 79),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v17 = (void (*)(__int64*, __int64*))a1[77];
      v18 = a1[78];
      v17(&v18, v4);
    }
    v7 = nullptr;
    result = 0;
    v9 = v19;
    if (v19 == 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v7 = v4;
  v9 = v19;
  if (v19 != 0) {
  LABEL_10:
    v10 = result;
    nn_os_CloseNativeHandle_plt(v9);
    result = v10;
  }
LABEL_11:
  if ((_DWORD)result == 0 || v7 == nullptr) {
    return result;
  }
  if (v7 != v4) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
LABEL_16:
  if ((a1[69] & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  if (*((_BYTE*)v7 + 48) == 1) {
    v12 = result;
    nn_os_DestroySystemEvent_plt(v7);
    result = v12;
    *((_BYTE*)v7 + 48) = 0;
  }
  atomic_store(0, (unsigned __int8*)a1 + 552);
  return result;
}

__int64 nn_vi2_5e59a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 i;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;

  nn_os_SdkMutexType_Lock_plt(a1);
  v2 = *(_QWORD*)(a1 + 144);
  v3 = a1 + 136;
  *(_DWORD*)(a1 + 4) |= 1u;
  if (v2 != a1 + 136) {
    do {
      while ((*(_BYTE*)(a1 + 4) & 1) == 0) {
        i = 0;
      LABEL_6:
        nn_os_SignalEvent_plt(v2 - 40);
        *(_QWORD*)(v2 - 48) = i;
        *(_DWORD*)(v2 - 56) = 2;
        v2 = *(_QWORD*)(v2 + 8);
        if (v2 == v3) {
          return nn_os_SdkMutexType_Unlock_plt(a1);
        }
      }
      v5 = v2 - 64;
      v6 = *(_QWORD*)(v2 - 72);
      if (v6 >= 3) {
        v5 = *(_QWORD*)(v2 - 64);
      }
      if (v6 != 0) {
        for (i = 0; i < v6; ++i) {
          v7 = *(unsigned int*)(v5 + 4 * i);
          if ((_DWORD)v7 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v7 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v7) &
                 1) != 0) {
              goto LABEL_6;
            }
            v6 = *(_QWORD*)(v2 - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(v2 - 40);
      *(_QWORD*)(v2 - 48) = 0;
      *(_DWORD*)(v2 - 56) = 1;
      v2 = *(_QWORD*)(v2 + 8);
    } while (v2 != v3);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e5ac0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 i;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;

  nn_os_SdkMutexType_Lock_plt(a1);
  v2 = *(_QWORD*)(a1 + 144);
  v3 = a1 + 136;
  *(_DWORD*)(a1 + 4) &= ~1u;
  if (v2 != a1 + 136) {
    do {
      while ((*(_BYTE*)(a1 + 4) & 1) == 0) {
        i = 0;
      LABEL_6:
        nn_os_SignalEvent_plt(v2 - 40);
        *(_QWORD*)(v2 - 48) = i;
        *(_DWORD*)(v2 - 56) = 2;
        v2 = *(_QWORD*)(v2 + 8);
        if (v2 == v3) {
          return nn_os_SdkMutexType_Unlock_plt(a1);
        }
      }
      v5 = v2 - 64;
      v6 = *(_QWORD*)(v2 - 72);
      if (v6 >= 3) {
        v5 = *(_QWORD*)(v2 - 64);
      }
      if (v6 != 0) {
        for (i = 0; i < v6; ++i) {
          v7 = *(unsigned int*)(v5 + 4 * i);
          if ((_DWORD)v7 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v7 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v7) &
                 1) != 0) {
              goto LABEL_6;
            }
            v6 = *(_QWORD*)(v2 - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(v2 - 40);
      *(_QWORD*)(v2 - 48) = 0;
      *(_DWORD*)(v2 - 56) = 1;
      v2 = *(_QWORD*)(v2 + 8);
    } while (v2 != v3);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e5be0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  void (*v4)(__int64*);
  __int64 v5;

  *(_QWORD*)(a1 + 112) = 0;
  nn_os_SdkMutexType_Lock_plt(a1 + 248);
  *(_QWORD*)(a1 + 256) = 0;
  nn_os_SdkMutexType_Unlock_plt(a1 + 248);
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 48) = 2;
  *(_DWORD*)(a1 + 52) = 2;
  *(_DWORD*)(a1 + 56) = 2;
  *(_DWORD*)(a1 + 60) = 2;
  *(_DWORD*)(a1 + 64) = 2;
  *(_DWORD*)(a1 + 68) = 2;
  *(_DWORD*)(a1 + 72) = 2;
  *(_DWORD*)(a1 + 76) = 2;
  (*(void (**)(_QWORD))(*(_QWORD*)a1 + 64LL))(*(_QWORD*)(*(_QWORD*)a1 + 24LL));
  nn_os_SleepThread_plt(100000000);
  nn_vi2_5e5ac0(a1 + 264);
  nn_os_SdkMutexType_Lock_plt(a1 + 640);
  v2 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)(a1 + 648) = 0;
  if (v2 != 0 && atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 72),
                                           0xFFFFFFFFFFFFFFFFLL,
                                           memory_order_release) == 1) {
    __builtin_arm_dmb(9u);
    v4 = *(void (**)(__int64*))(v2 + 56);
    v5 = *(_QWORD*)(v2 + 64);
    v4(&v5);
  }
  result = nn_os_SdkMutexType_Unlock_plt(a1 + 640);
  if (*(_DWORD*)(a1 + 664) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  *(_BYTE*)(a1 + 660) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  return result;
}

__int64 nn_vi2_5e5e40(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 (*v7)(__int64*, __int64);
  unsigned __int64 i;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 (*v11)(__int64*, __int64);
  __int64 v12;

  nn_os_SdkMutexType_Lock_plt(a1 + 640);
  v4 = *(_QWORD*)(a1 + 648);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 72), 1u,
                              memory_order_relaxed);
    nn_os_SdkMutexType_Unlock_plt(a1 + 640);
    v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    v12 = a2;
    v10 = 0;
    for (result = nn_vi2_5e5fe0(&v10, v4, a1 + 248, a1 + 264,
                                (unsigned __int64*)&v11);
         (result & 1) != 0; result = nn_vi2_5e5fe0(&v10, v4, a1 + 248, a1 + 264,
                                                   (unsigned __int64*)&v11)) {
      nn_vi2_5e65a0(a1 + 264, a2);
      v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
      v12 = a2;
      v10 = 0;
    }
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 72),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v6 = *(_QWORD*)(v4 + 64);
      v11 = *(__int64 (**)(__int64*, __int64))(v4 + 56);
      v12 = v6;
      return v11(&v12, v4);
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a1 + 640);
  LABEL_7:
    v11 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    v12 = a2;
    v10 = 0;
    nn_os_SdkMutexType_Lock_plt(a1 + 264);
    v7 = (__int64 (*)(__int64*, __int64))(((char*)0x0LL) + 1);
    for (i = 0; i < (unsigned __int64)v7; ++i) {
      v9 = *((unsigned int*)&v11 + i + 2);
      if ((_DWORD)v9 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(a1 + 272 + ((v9 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v9) &
             1) != 0) {
          nn_os_SdkMutexType_Unlock_plt(a1 + 264);
          nn_vi2_5e65a0(a1 + 264, a2);
          goto LABEL_7;
        }
        v7 = v11;
      }
    }
    return nn_os_SdkMutexType_Unlock_plt(a1 + 264);
  }
  return result;
}

__int64 nn_vi2_5e5fe0(unsigned __int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int64* a5)
{
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 i;
  unsigned __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned int v21;

  nn_os_SdkMutexType_Lock_plt(a4);
  v10 = *a5;
  v11 = a4 + 8;
  if (*a5 >= 3) {
    v12 = (_QWORD*)a5[1];
  }
  else {
    v12 = a5 + 1;
  }
  if (v10 != 0) {
    for (i = 0; i < v10; ++i) {
      v14 = *((unsigned int*)v12 + i);
      if ((_DWORD)v14 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v14 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v14) &
             1) != 0) {
        LABEL_25:
          *a1 = i;
          v21 = 1;
          goto LABEL_26;
        }
        v10 = *a5;
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a4);
  nn_os_SdkMutexType_Lock_plt(a3);
  if ((nn_os_TryWaitSystemEvent_plt(a2) & 1) != 0) {
    nn_os_ClearSystemEvent_plt(a2);
    v15 = *(__int64**)(a3 + 8);
    if (v15 != nullptr) {
      v17 = *v15;
      v16 = v15 + 1;
      if ((*(unsigned int (**)(_QWORD, _QWORD*, __int64))(
              *(_QWORD*)v17 + 120LL))(*(_QWORD*)(*(_QWORD*)v17 + 24LL), v16,
                                      128) != 0) {
        nn_vi2_5e6400_alt1(a4);
      }
      else {
        nn_vi2_5e6180_alt1(a4, v16);
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a3);
  nn_os_SdkMutexType_Lock_plt(a4);
  v18 = *a5;
  if (*a5 >= 3) {
    v19 = (_QWORD*)a5[1];
  }
  else {
    v19 = a5 + 1;
  }
  if (v18 != 0) {
    for (i = 0; i < v18; ++i) {
      v20 = *((unsigned int*)v19 + i);
      if ((_DWORD)v20 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v20 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v20) &
             1) != 0) {
          goto LABEL_25;
        }
        v18 = *a5;
      }
    }
  }
  v21 = 0;
LABEL_26:
  nn_os_SdkMutexType_Unlock_plt(a4);
  return v21;
}

__int64 nn_vi2_5e6180(__int64 a1, unsigned int* a2)
{
  __int64 i;
  int v5;
  unsigned __int64 j;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  nn_os_SdkMutexType_Lock_plt(a1);
  __builtin_arm_dmb(0xBu);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 8), *a2);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 12), a2[1]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 16), a2[2]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 20), a2[3]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 24), a2[4]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 28), a2[5]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 32), a2[6]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 36), a2[7]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 40), a2[8]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 44), a2[9]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 48), a2[10]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 52), a2[11]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 56), a2[12]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 60), a2[13]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 64), a2[14]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 68), a2[15]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 72), a2[16]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 76), a2[17]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 80), a2[18]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 84), a2[19]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 88), a2[20]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 92), a2[21]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 96), a2[22]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 100), a2[23]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 104), a2[24]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 108), a2[25]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 112), a2[26]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 116), a2[27]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 120), a2[28]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 124), a2[29]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 128), a2[30]);
  atomic_fetch_or((atomic_uint* volatile)(a1 + 132), a2[31]);
  for (i = *(_QWORD*)(a1 + 144); i != a1 + 136; i = *(_QWORD*)(i + 8)) {
    if ((*(_BYTE*)(a1 + 4) & 1) != 0) {
      v7 = i - 64;
      v8 = *(_QWORD*)(i - 72);
      if (v8 >= 3) {
        v7 = *(_QWORD*)(i - 64);
      }
      if (v8 != 0) {
        for (j = 0; j < v8; ++j) {
          v9 = *(unsigned int*)(v7 + 4 * j);
          if ((_DWORD)v9 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v9 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v9) &
                 1) != 0) {
              goto LABEL_7;
            }
            v8 = *(_QWORD*)(i - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(i - 40);
      v5 = 1;
      j = 0;
    }
    else {
      j = 0;
    LABEL_7:
      nn_os_SignalEvent_plt(i - 40);
      v5 = 2;
    }
    *(_QWORD*)(i - 48) = j;
    *(_DWORD*)(i - 56) = v5;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e6400(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 i;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;

  nn_os_SdkMutexType_Lock_plt(a1);
  __builtin_arm_dmb(0xBu);
  v2 = a1 + 136;
  *(_DWORD*)(a1 + 8) = -1;
  *(_DWORD*)(a1 + 12) = -1;
  *(_DWORD*)(a1 + 16) = -1;
  *(_DWORD*)(a1 + 20) = -1;
  *(_DWORD*)(a1 + 24) = -1;
  *(_DWORD*)(a1 + 28) = -1;
  *(_DWORD*)(a1 + 32) = -1;
  *(_DWORD*)(a1 + 36) = -1;
  *(_DWORD*)(a1 + 40) = -1;
  *(_DWORD*)(a1 + 44) = -1;
  *(_DWORD*)(a1 + 48) = -1;
  *(_DWORD*)(a1 + 52) = -1;
  *(_DWORD*)(a1 + 56) = -1;
  *(_DWORD*)(a1 + 60) = -1;
  *(_DWORD*)(a1 + 64) = -1;
  *(_DWORD*)(a1 + 68) = -1;
  *(_DWORD*)(a1 + 72) = -1;
  *(_DWORD*)(a1 + 76) = -1;
  *(_DWORD*)(a1 + 80) = -1;
  *(_DWORD*)(a1 + 84) = -1;
  *(_DWORD*)(a1 + 88) = -1;
  *(_DWORD*)(a1 + 92) = -1;
  *(_DWORD*)(a1 + 96) = -1;
  *(_DWORD*)(a1 + 100) = -1;
  *(_DWORD*)(a1 + 104) = -1;
  *(_DWORD*)(a1 + 108) = -1;
  *(_DWORD*)(a1 + 112) = -1;
  *(_DWORD*)(a1 + 116) = -1;
  *(_DWORD*)(a1 + 120) = -1;
  *(_DWORD*)(a1 + 124) = -1;
  *(_DWORD*)(a1 + 128) = -1;
  *(_DWORD*)(a1 + 132) = -1;
  v3 = *(_QWORD*)(a1 + 144);
  if (v3 != a1 + 136) {
    do {
      while ((*(_BYTE*)(a1 + 4) & 1) == 0) {
        i = 0;
      LABEL_6:
        nn_os_SignalEvent_plt(v3 - 40);
        *(_QWORD*)(v3 - 48) = i;
        *(_DWORD*)(v3 - 56) = 2;
        v3 = *(_QWORD*)(v3 + 8);
        if (v3 == v2) {
          return nn_os_SdkMutexType_Unlock_plt(a1);
        }
      }
      v5 = v3 - 64;
      v6 = *(_QWORD*)(v3 - 72);
      if (v6 >= 3) {
        v5 = *(_QWORD*)(v3 - 64);
      }
      if (v6 != 0) {
        for (i = 0; i < v6; ++i) {
          v7 = *(unsigned int*)(v5 + 4 * i);
          if ((_DWORD)v7 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v7 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v7) &
                 1) != 0) {
              goto LABEL_6;
            }
            v6 = *(_QWORD*)(v3 - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(v3 - 40);
      *(_QWORD*)(v3 - 48) = 0;
      *(_DWORD*)(v3 - 56) = 1;
      v3 = *(_QWORD*)(v3 + 8);
    } while (v3 != v2);
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e65a0(__int64 a1, unsigned int a2)
{
  __int64 i;
  int v5;
  unsigned __int64 j;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  nn_os_SdkMutexType_Lock_plt(a1);
  atomic_fetch_and_explicit((atomic_uint* volatile)(a1 + 8 + 4LL * (a2 >> 5)),
                            ~(1 << a2), memory_order_acquire);
  for (i = *(_QWORD*)(a1 + 144); i != a1 + 136; i = *(_QWORD*)(i + 8)) {
    if ((*(_BYTE*)(a1 + 4) & 1) != 0) {
      v7 = i - 64;
      v8 = *(_QWORD*)(i - 72);
      if (v8 >= 3) {
        v7 = *(_QWORD*)(i - 64);
      }
      if (v8 != 0) {
        for (j = 0; j < v8; ++j) {
          v9 = *(unsigned int*)(v7 + 4 * j);
          if ((_DWORD)v9 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v9 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v9) &
                 1) != 0) {
              goto LABEL_7;
            }
            v8 = *(_QWORD*)(i - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(i - 40);
      v5 = 1;
      j = 0;
    }
    else {
      j = 0;
    LABEL_7:
      nn_os_SignalEvent_plt(i - 40);
      v5 = 2;
    }
    *(_QWORD*)(i - 48) = j;
    *(_DWORD*)(i - 56) = v5;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e66a0(__int64 a1, unsigned int a2)
{
  __int64 i;
  int v5;
  unsigned __int64 j;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  nn_os_SdkMutexType_Lock_plt(a1);
  atomic_fetch_or_explicit((atomic_uint* volatile)(a1 + 8 + 4LL * (a2 >> 5)),
                           1 << a2, memory_order_release);
  for (i = *(_QWORD*)(a1 + 144); i != a1 + 136; i = *(_QWORD*)(i + 8)) {
    if ((*(_BYTE*)(a1 + 4) & 1) != 0) {
      v7 = i - 64;
      v8 = *(_QWORD*)(i - 72);
      if (v8 >= 3) {
        v7 = *(_QWORD*)(i - 64);
      }
      if (v8 != 0) {
        for (j = 0; j < v8; ++j) {
          v9 = *(unsigned int*)(v7 + 4 * j);
          if ((_DWORD)v9 != 0) {
            if (((atomic_load_explicit(
                      (atomic_uint* volatile)(a1 + 8 +
                                              ((v9 >> 3) & 0x1FFFFFFC)),
                      memory_order_acquire) >>
                  v9) &
                 1) != 0) {
              goto LABEL_7;
            }
            v8 = *(_QWORD*)(i - 72);
          }
        }
      }
      nn_os_ClearEvent_plt(i - 40);
      v5 = 1;
      j = 0;
    }
    else {
      j = 0;
    LABEL_7:
      nn_os_SignalEvent_plt(i - 40);
      v5 = 2;
    }
    *(_QWORD*)(i - 48) = j;
    *(_DWORD*)(i - 56) = v5;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e67a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 result;
  void (*v15)(__int64*, __int64);
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v16_.v17 = v2;
  if (*(_DWORD*)(a2 + 28) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  if (*(_DWORD*)(a2 + 32) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  if (*(_DWORD*)(a2 + 36) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  if (*(_DWORD*)(a2 + 40) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  if (*(_DWORD*)(a2 + 44) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  if (*(_DWORD*)(a2 + 48) != 0) {
    nn_diag_detail_AbortImpl_plt_856170(a2);
  }
  v6 = a2 + 8;
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a2 + 8) + 192LL))(
      *(_QWORD*)(**(_QWORD**)(a2 + 8) + 24LL), *(_QWORD*)(a2 + 16));
  v7 = *(_DWORD*)(a2 + 24);
  nn_os_SdkMutexType_Lock_plt(a1 + 640);
  v8 = *(_QWORD*)(a1 + 648);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 72), 1u,
                              memory_order_relaxed);
    nn_os_SdkMutexType_Unlock_plt(a1 + 640);
    nn_vi2_5e6950(a1 + 248, v8, v7);
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 72),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v15 = *(void (**)(__int64*, __int64))(v8 + 56);
      v16_.v16 = *(_QWORD*)(v8 + 64);
      v15(&v16_.v16, v8);
      v9 = (__int64*)(a2 + 56);
      goto LABEL_13;
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a1 + 640);
    nn_vi2_5e6950(a1 + 248, 0, v7);
  }
  v9 = (__int64*)(a2 + 56);
LABEL_13:
  while (1) {
    v12 = *(__int64**)(a2 + 64);
    if (v12 == v9) {
      break;
    }
    v10 = (__int64*)v12[1];
    v11 = *v10;
    *(_QWORD*)(*v12 + 8) = v10;
    *v10 = *v12;
    *(_QWORD*)(v11 + 8) = v12;
    *v12 = v11;
    atomic_store(0, (unsigned __int64*)v12 - 1);
  }
  v13 = *(unsigned int*)(a2 + 24);
  result = nn_vi2_5e66a0(a1 + 264, v13);
  atomic_fetch_and_explicit(
      (atomic_uint* volatile)(a1 + ((v13 >> 3) & 0x1FFFFFFC) + 120),
      ~(1 << v13), memory_order_release);
  *(_DWORD*)(v6 + 16) = 0;
  *(_QWORD*)v6 = 0;
  *(_QWORD*)(v6 + 8) = 0;
  return result;
}

__int64 nn_vi2_5e6950(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64* v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  _QWORD v14[5];
  __int64 v15;
  __int64* v16;
  _QWORD v17[2];

  v15 = 0;
  v16 = nullptr;
  v17[0] = 1;
  v17[1] = a3;
  memset(v14, 0, sizeof(v14));
  v10 = 0;
  v12 = 0;
  v9 = 0;
  nn_os_InitializeEvent_plt(v14, 0, 0);
  v15 = (__int64)&v15;
  v16 = &v15;
  nn_os_SignalEvent_plt(v14);
  v13 = 0;
  v11 = 0;
  nn_vi2_5e6a80_alt1(a1 + 16, &v9, v17);
  v8 = 0;
  if (a2 == 0) {
    nn_vi2_5e6da0_alt1(&v8, a1 + 16, &v9);
    nn_os_SdkMutexType_Lock_plt(a1 + 16);
    if (&v15 == (__int64*)(a1 + 152)) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  nn_vi2_5e6b80_alt1(&v8, a2, a1, a1 + 16, &v9);
  nn_os_SdkMutexType_Lock_plt(a1 + 16);
  if (&v15 != (__int64*)(a1 + 152)) {
  LABEL_3:
    v5 = v16;
    v6 = *v16;
    *(_QWORD*)(v15 + 8) = v16;
    *v5 = v15;
    *(_QWORD*)(v6 + 8) = &v15;
    v15 = v6;
  }
LABEL_4:
  nn_os_SignalEvent_plt(v14);
  v13 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  nn_os_SdkMutexType_Unlock_plt(a1 + 16);
  return nn_os_FinalizeEvent_plt(v14);
}

__int64 nn_vi2_5e6a80(__int64 a1, unsigned __int64* a2, unsigned __int64* a3)
{
  unsigned __int64 v6;
  unsigned __int64 i;
  int v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;

  nn_os_SdkMutexType_Lock_plt(a1);
  v6 = a3[1];
  *a2 = *a3;
  a2[1] = v6;
  if ((*(_BYTE*)(a1 + 4) & 1) != 0) {
    v9 = *a2;
    v10 = (__int64*)(a2 + 1);
    if (*a2 >= 3) {
      v10 = (__int64*)a2[1];
    }
    if (v9 != 0) {
      for (i = 0; i < v9; ++i) {
        v11 = *((unsigned int*)v10 + i);
        if ((_DWORD)v11 != 0) {
          if (((atomic_load_explicit(
                    (atomic_uint* volatile)(a1 + 8 + ((v11 >> 3) & 0x1FFFFFFC)),
                    memory_order_acquire) >>
                v11) &
               1) != 0) {
            goto LABEL_3;
          }
          v9 = *a2;
        }
      }
    }
    nn_os_ClearEvent_plt(a2 + 4);
    v8 = 1;
    i = 0;
  }
  else {
    i = 0;
  LABEL_3:
    nn_os_SignalEvent_plt(a2 + 4);
    v8 = 2;
  }
  a2[3] = i;
  *((_DWORD*)a2 + 4) = v8;
  v13 = a2[9];
  v12 = a2 + 9;
  *v12 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(v13 + 8) = a1 + 136;
  *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8LL) = v12;
  *(_QWORD*)(a1 + 136) = v13;
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 nn_vi2_5e6b80(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  unsigned int v10;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  _QWORD* v17;
  unsigned int* v18;
  __int64 v19;
  _QWORD v20[7];
  __int64 v21;
  _QWORD v22[7];
  __int64 v23;
  _QWORD v24[6];

  nn_os_SdkMutexType_Lock_plt(a4);
  v10 = atomic_load((unsigned int*)(a5 + 16));
  if (v10 == 2) {
    *a1 = *(_QWORD*)(a5 + 24);
    return nn_os_SdkMutexType_Unlock_plt(a4);
  }
  nn_os_SdkMutexType_Unlock_plt(a4);
  memset(v24, 0, sizeof(v24));
  nn_os_InitializeMultiWait_plt(v24);
  v23 = 0;
  memset(v22, 0, sizeof(v22));
  nn_os_InitializeMultiWaitHolder_plt_8591f0(v22, a2);
  v23 = 1;
  nn_os_LinkMultiWaitHolder_plt(v24, v22);
  v21 = 0;
  memset(v20, 0, sizeof(v20));
  nn_os_InitializeMultiWaitHolder_plt_858be0(v20, a5 + 32);
  v21 = 2;
  nn_os_LinkMultiWaitHolder_plt(v24, v20);
  while (1) {
    v14 = nn_os_WaitAny_plt(v24);
    v15 = *(_QWORD*)(v14 + 56);
    if (v15 == 2) {
      break;
    }
    if (v15 != 1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(v14);
      __udf(0);
    }
    nn_os_SdkMutexType_Lock_plt(a3);
    v16 = nn_os_TryWaitSystemEvent_plt(a2);
    v12 = a3;
    if ((v16 & 1) != 0) {
      nn_os_ClearSystemEvent_plt(a2);
      v17 = *(_QWORD**)(a3 + 8);
      v12 = a3;
      if (v17 != nullptr) {
        v19 = *v17;
        v18 = (unsigned int*)(v17 + 1);
        if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
                *(_QWORD*)v19 + 120LL))(*(_QWORD*)(*(_QWORD*)v19 + 24LL), v18,
                                        128) != 0) {
          nn_vi2_5e6400(a4);
        }
        else {
          nn_vi2_5e6180(a4, v18);
        }
        v12 = a3;
      }
    }
  LABEL_5:
    nn_os_SdkMutexType_Unlock_plt(v12);
  }
  nn_os_SdkMutexType_Lock_plt(a4);
  v12 = a4;
  v13 = atomic_load((unsigned int*)(a5 + 16));
  if (v13 != 2) {
    goto LABEL_5;
  }
  *a1 = *(_QWORD*)(a5 + 24);
  nn_os_SdkMutexType_Unlock_plt(a4);
  nn_os_UnlinkMultiWaitHolder_plt(v20);
  v21 = 0;
  nn_os_FinalizeMultiWaitHolder_plt(v20);
  nn_os_UnlinkMultiWaitHolder_plt(v22);
  v23 = 0;
  nn_os_FinalizeMultiWaitHolder_plt(v22);
  return nn_os_FinalizeMultiWait_plt(v24);
}

__int64 nn_vi2_5e6da0(_QWORD* a1, __int64 a2, __int64 a3)
{
  unsigned int v6;
  unsigned int v8;
  unsigned int v9;
  _QWORD v10[7];
  __int64 v11;
  _QWORD v12[6];

  nn_os_SdkMutexType_Lock_plt(a2);
  v6 = atomic_load((unsigned int*)(a3 + 16));
  if (v6 == 2) {
    *a1 = *(_QWORD*)(a3 + 24);
    return nn_os_SdkMutexType_Unlock_plt(a2);
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a2);
    memset(v12, 0, sizeof(v12));
    nn_os_InitializeMultiWait_plt(v12);
    v11 = 0;
    memset(v10, 0, sizeof(v10));
    nn_os_InitializeMultiWaitHolder_plt_858be0(v10, a3 + 32);
    v11 = 2;
    nn_os_LinkMultiWaitHolder_plt(v12, v10);
    nn_os_WaitAny_plt(v12);
    nn_os_SdkMutexType_Lock_plt(a2);
    v8 = atomic_load((unsigned int*)(a3 + 16));
    if (v8 != 2) {
      do {
        nn_os_SdkMutexType_Unlock_plt(a2);
        nn_os_WaitAny_plt(v12);
        nn_os_SdkMutexType_Lock_plt(a2);
        v9 = atomic_load((unsigned int*)(a3 + 16));
      } while (v9 != 2);
    }
    *a1 = *(_QWORD*)(a3 + 24);
    nn_os_SdkMutexType_Unlock_plt(a2);
    nn_os_UnlinkMultiWaitHolder_plt(v10);
    v11 = 0;
    nn_os_FinalizeMultiWaitHolder_plt(v10);
    return nn_os_FinalizeMultiWait_plt(v12);
  }
}

__int64 nn_vi2_5eb900(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD v6[2];

  nn_os_SdkMutexType_Lock_plt(a2);
  v3 = *(_QWORD*)(a2 + 16);
  v4 = *(_QWORD*)(a2 + 24);
  nn_os_SdkMutexType_Unlock_plt(a2);
  v6[0] = v3;
  v6[1] = v4;
  return nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(v6);
}

#pragma GCC visibility pop
