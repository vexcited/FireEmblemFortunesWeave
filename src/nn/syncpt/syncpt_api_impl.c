#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_AttachWritableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_DetachTransferMemory_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_os_TimedWaitSystemEvent_plt(_QWORD, _QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 syncpt_api_5d2380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 syncpt_api_5d27a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 syncpt_api_5d2c20_alt1(_QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("syncpt_api_5d2c20");
__int64 syncpt_api_5d2db0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 syncpt_api_5d2db0_alt1(__int64, int, unsigned __int64,
                               char) __asm__("syncpt_api_5d2db0");
__int64 syncpt_api_5d2ec0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("syncpt_api_5d2ec0");
__int64 syncpt_api_5d3060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 syncpt_api_5d3160(__int64, unsigned int**, int*);
__int64 syncpt_api_5d3600_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("syncpt_api_5d3600");
__int64 syncpt_api_5d38e0(__int64, __int64, int*, unsigned int, __int64);
__int64 syncpt_api_5d2150(__int64 a1, __int64 a2, _DWORD* a3,
                          unsigned __int64 a4);
unsigned __int64 syncpt_api_5d26a0(__int64 a1, unsigned int a2, __int64 a3,
                                   unsigned __int8 a4);
unsigned __int64 syncpt_api_5d26c0(__int64 a1, unsigned int a2, __int64 a3,
                                   unsigned __int8 a4);
void syncpt_api_5d26e0(__int64 a1, _DWORD* a2, _QWORD* a3, _BYTE* a4,
                       __int64 a5);
void syncpt_api_5d2700(__int64 a1, _DWORD* a2, _QWORD* a3, _BYTE* a4,
                       __int64 a5);
__int64 syncpt_api_5d2720(__int64 a1, _QWORD* a2, _BYTE* a3, int a4);
__int64 syncpt_api_5d2920(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 syncpt_api_5d2a30(__int64 result, __int64 a2);
__int64 syncpt_api_5d2c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 syncpt_api_5d2ec0(__int64 a1, _DWORD* a2, __int64 a3);
__int64 syncpt_api_5d3270(__int64 a1, __int64 a2);
__int64 syncpt_api_5d33f0(__int64 a1, __int64 a2, __int64 a3);
__int64 syncpt_api_5d3600(__int64 a1, __int64 a2, __int64** a3, int* a4,
                          __int64 a5);
__int64 syncpt_api_5d3a30(__int64 a1, _QWORD* a2);
__int64 syncpt_api_5d3c00(__int64 a1, __int64 a2);
void syncpt_api_5d4220(__int64 a1, int* a2, _DWORD* a3, __int64 a4);
__int64 syncpt_api_5d4240(__int64 a1, int a2);
__int64 syncpt_api_5d4250(__int64 a1, int a2);
__int64 syncpt_api_5d4260(__int64 a1, int a2);
__int64 nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle(__int64 a1);

__int64 syncpt_api_5d2150(__int64 a1, __int64 a2, _DWORD* a3,
                          unsigned __int64 a4)
{
  __int64 v5;
  _DWORD* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64* v28;
  _QWORD v29[2];
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  if (a4 >> 12 <= 2) {
    a1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  else if (((unsigned __int16)a3 & 0xFFF) == 0) {
    v5 = a1;
    v34 = 0;
    v35 = 0;
    v32 = 0;
    v33 = 0;
    v30 = 0;
    v31 = 0;
    v29[0] = 0;
    v29[1] = 0;
    LODWORD(v28) = nn_os_CreateTransferMemory_plt(v29, a3, 4096, 3);
    if ((_DWORD)v28 != 0) {
    LABEL_20:
      nn_diag_detail_AbortImpl_plt_858db0(&v28);
      goto LABEL_21;
    }
    v7 = a3 + 1024;
    v8 = nn_os_DetachTransferMemory_plt(v29);
    nn_os_DestroyTransferMemory_plt(v29);
    v34 = 0;
    v35 = 0;
    v32 = 0;
    v33 = 0;
    v30 = 0;
    v31 = 0;
    v29[0] = 0;
    v29[1] = 0;
    LODWORD(v28) = nn_os_CreateTransferMemory_plt(v29, a3 + 1024, 0x2000, 1);
    if ((_DWORD)v28 != 0) {
    LABEL_21:
      v10 = nn_diag_detail_AbortImpl_plt_858db0(&v28);
    LABEL_22:
      v10 = nn_diag_detail_AbortImpl_plt_856170(v10);
    LABEL_23:
      nn_diag_detail_AbortImpl_plt_856170(v10);
      __udf(0);
    }
    v9 = nn_os_DetachTransferMemory_plt(v29);
    nn_os_DestroyTransferMemory_plt(v29);
    v36 = 0;
    v25 = v8;
    v23 = v9;
    v29[0] = (char*)&v36 + 4;
    v28 = &v36;
    v26 = 511;
    v27 = 1;
    v24 = 4096;
    v22 = 0x2000;
    v10 = syncpt_api_5d2380(a2, v29, &v28, &v27, &v26, &v25, &v24, &v23, &v22);
    if ((_DWORD)v10 != 0) {
      goto LABEL_9;
    }
    if (*v7 != 1) {
      goto LABEL_22;
    }
    v11 = a3[1026];
    v12 = ((unsigned int)(v11 + 64) >> 6) - 1;
    if (v12 >= 0x40) {
      goto LABEL_23;
    }
    v13 = a3[1025];
    v14 = (unsigned int)a3[1027];
    v15 = (unsigned int)a3[1029];
    v16 = (unsigned int)a3[1031];
    v17 = (unsigned int)a3[1028];
    v18 = (unsigned int)a3[1030];
    v19 = HIDWORD(v36);
    *(_QWORD*)(v5 + 8) = v12;
    HIDWORD(v36) = 0;
    *(_DWORD*)v5 = v13;
    *(_DWORD*)(v5 + 4) = v11;
    *(_QWORD*)(v5 + 16) = v7;
    *(_QWORD*)(v5 + 24) = (char*)v7 + v14;
    *(_QWORD*)(v5 + 32) = (char*)v7 + v15;
    *(_QWORD*)(v5 + 40) = (char*)v7 + v16;
    *(_QWORD*)(v5 + 48) = (char*)a3 + v17;
    *(_QWORD*)(v5 + 56) = (char*)a3 + v18;
    nn_os_AttachWritableHandleToSystemEvent_plt(v5 + 72, v19, 1, 0);
    v20 = (unsigned int)v36;
    LODWORD(v36) = 0;
    nn_os_AttachReadableHandleToSystemEvent_plt(v5 + 120, v20, 1, 0);
  LABEL_9:
    if ((_DWORD)v36 != 0) {
      nn_os_CloseNativeHandle_plt((unsigned int)v36);
    }
    result = HIDWORD(v36);
    if (HIDWORD(v36) != 0) {
      result = nn_os_CloseNativeHandle_plt(HIDWORD(v36));
    }
    if (v9 != 0) {
      result = nn_os_CloseNativeHandle_plt(v9);
    }
    if (v8 != 0) {
      return nn_os_CloseNativeHandle_plt(v8);
    }
    return result;
  }
  nn_diag_detail_AbortImpl_plt_856170(a1);
  goto LABEL_20;
}

unsigned __int64 syncpt_api_5d26a0(__int64 a1, unsigned int a2, __int64 a3,
                                   unsigned __int8 a4)
{
  return a2 | ((unsigned __int64)a4 << 32);
}

unsigned __int64 syncpt_api_5d26c0(__int64 a1, unsigned int a2, __int64 a3,
                                   unsigned __int8 a4)
{
  return a2 | ((unsigned __int64)a4 << 32);
}

void syncpt_api_5d26e0(__int64 a1, _DWORD* a2, _QWORD* a3, _BYTE* a4,
                       __int64 a5)
{
  *a2 = *(_DWORD*)a5;
  *a3 = *(_QWORD*)(a5 + 8);
  *a4 = *(_BYTE*)(a5 + 4);
}

void syncpt_api_5d2700(__int64 a1, _DWORD* a2, _QWORD* a3, _BYTE* a4,
                       __int64 a5)
{
  *a2 = *(_DWORD*)a5;
  *a3 = *(_QWORD*)(a5 + 8);
  *a4 = *(_BYTE*)(a5 + 4);
}

__int64 syncpt_api_5d2720(__int64 a1, _QWORD* a2, _BYTE* a3, int a4)
{
  __int64 v5;
  __int64 v6;
  __int64 result;
  _BYTE v9[4];
  __int64 v10;

  v6 = *(_QWORD*)(a1 + 176);
  v5 = *(_QWORD*)(a1 + 184);
  v10 = 0;
  v9[0] = 0;
  result = syncpt_api_5d27a0(&v10, v9, v5, v6, (unsigned int)~a4);
  if ((_DWORD)result == 0) {
    *a2 = v10;
    if (v9[0] >= 2u) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(result);
      __udf(0);
    }
    *a3 = v9[0];
  }
  return result;
}

__int64 syncpt_api_5d2920(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4;
  __int64 v7;
  __int64 result;

  v4 = a4 >> 6;
  v7 = 1LL << a4;
  *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v4) =
      *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v4) & ~(1LL << a4) |
      (1LL << a4) & ~*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v4);
  __builtin_arm_dmb(0xBu);
  **(_QWORD**)(a1 + 48) = **(_QWORD**)(a1 + 48) & ~(1LL << v4) |
                          (1LL << v4) & ~**(_QWORD**)(a1 + 32);
  __builtin_arm_dmb(0xBu);
  nn_os_SignalSystemEvent_plt(a2);
  result = nn_os_ClearSystemEvent_plt(a3);
  __builtin_arm_dmb(0xBu);
  if (((*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL * (unsigned int)v4) ^
        atomic_load_explicit(
            (atomic_ullong* volatile)(*(_QWORD*)(a1 + 40) + 8 * v4),
            memory_order_acquire)) &
       v7) != 0) {
    do {
      nn_os_TimedWaitSystemEvent_plt(a3, 1000000000);
      result = nn_os_ClearSystemEvent_plt(a3);
      __builtin_arm_dmb(0xBu);
    } while (((*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v4) ^
               atomic_load_explicit(
                   (atomic_ullong* volatile)(*(_QWORD*)(a1 + 40) + 8 * v4),
                   memory_order_acquire)) &
              v7) != 0);
  }
  return result;
}

__int64 syncpt_api_5d2a30(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int8 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  unsigned __int64 explicit;
  bool v19;
  int v20;
  int v21;
  _BOOL4 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  bool v26;
  bool v27;
  _QWORD v28[2];
  _QWORD v29[5];
  unsigned __int8 v30;
  unsigned __int64 v31;
  unsigned int v32;
  __int64 v33;
  _QWORD v34[9];

  v4 = *(unsigned __int8*)(a2 + 4);
  if (*(_DWORD*)a2 == 0 && v4 == 0) {
    v6 = *(_QWORD*)(a2 + 8);
    if (v6 == 0) {
      return result;
    }
    v7 = -1;
    v8 = *(_QWORD*)(result + 176);
    v9 = result + 192;
    result = *(_QWORD*)(result + 184);
  }
  else {
    if (v4 > 1) {
      v34[7] = v2;
      v34[8] = v3;
      nn_detail_UnexpectedDefaultImpl_plt_857150(result);
      __udf(0);
    }
    v6 = *(_QWORD*)(a2 + 8);
    v7 = ~*(_DWORD*)a2;
    v8 = *(_QWORD*)(result + 176);
    v9 = result + 192;
    result = *(_QWORD*)(result + 184);
  }
  v34[1] = v2;
  v34[2] = v3;
  v10 = *(_QWORD*)(result + 16);
  v11 = *(_DWORD*)(result + 4);
  v12 = v4;
  v13 = v6;
  v14 = v7;
  v15 = v9;
  v33 = v8;
  v34[0] = result;
  v32 = v7;
  v31 = v6;
  v30 = v4;
  if (v10 == 0 || v7 > v11) {
    v17 = v8;
    result = syncpt_api_5d2db0(v8, v7, v6, v4);
    if ((result & 1) != 0) {
      return result;
    }
  LABEL_17:
    v29[0] = v34;
    v29[1] = &v33;
    v29[2] = &v32;
    v29[3] = &v31;
    v29[4] = &v30;
    v28[0] = ~v14 | ((unsigned __int64)v12 << 32);
    v28[1] = v13;
    return syncpt_api_5d2c20_alt1(v17, v15, v29, v28);
  }
  explicit = atomic_load_explicit(
      (atomic_ullong* volatile)(*(_QWORD*)(result + 24) + 8LL * v7),
      memory_order_acquire);
  if (explicit != -1) {
    v19 = explicit >= v6;
    v20 = explicit - v6;
    v21 = !v19;
    v22 = v20 < 0;
    if ((unsigned __int8)v4 == 1) {
      v22 = v21;
    }
    if (v22) {
      v23 = result;
      nn_os_SdkMutexType_Lock_plt(result + 64);
      syncpt_api_5d2920(v23, v23 + 72, v23 + 120, v14);
      result = nn_os_SdkMutexType_Unlock_plt(v23 + 64);
      v24 = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(v23 + 24) + 8LL * v14),
          memory_order_acquire);
      if (v24 != -1) {
        v19 = v24 >= v13;
        v25 = v24 - v13;
        v26 = v19;
        v27 = v25 > -1;
        if (v12 == 1) {
          v27 = v26;
        }
        if (!v27) {
          v17 = v33;
          v14 = v32;
          v12 = v30;
          v13 = v31;
          goto LABEL_17;
        }
      }
    }
  }
  return result;
}

__int64 syncpt_api_5d2c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int64 explicit;
  bool v15;
  int v16;
  int v17;
  _BOOL4 v18;
  unsigned __int64 v19;
  int v20;
  bool v21;
  bool v22;
  unsigned int v23;

  v23 = 0;
  while (1) {
    result = syncpt_api_5d2ec0_alt1(a2, &v23, a1);
    if ((result & 1) != 0) {
      break;
    }
    v9 = **(_QWORD**)a3;
    v10 = **(unsigned int**)(a3 + 16);
    v11 = **(_QWORD**)(a3 + 24);
    v12 = **(unsigned __int8**)(a3 + 32);
    if (*(_QWORD*)(v9 + 16) == 0 || (unsigned int)v10 > *(_DWORD*)(v9 + 4)) {
      result = syncpt_api_5d2db0(**(_QWORD**)(a3 + 8), (unsigned int)v10,
                                 **(_QWORD**)(a3 + 24),
                                 **(unsigned __int8**)(a3 + 32));
      if ((result & 1) != 0) {
        return result;
      }
    }
    else {
      explicit = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(v9 + 24) + 8 * v10),
          memory_order_acquire);
      if (explicit == -1) {
        return result;
      }
      v15 = explicit >= v11;
      v16 = explicit - v11;
      v17 = !v15;
      v18 = v16 < 0;
      if (v12 == 1) {
        v18 = v17;
      }
      if (!v18) {
        return result;
      }
      nn_os_SdkMutexType_Lock_plt(v9 + 64);
      syncpt_api_5d2920(v9, v9 + 72, v9 + 120, v10);
      result = nn_os_SdkMutexType_Unlock_plt(v9 + 64);
      v19 = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(v9 + 24) + 8 * v10),
          memory_order_acquire);
      if (v19 == -1) {
        return result;
      }
      v15 = v19 >= v11;
      v20 = v19 - v11;
      v21 = v15;
      v22 = v20 > -1;
      if (v12 == 1) {
        v22 = v21;
      }
      if (v22) {
        return result;
      }
    }
    nn_os_SleepThread_plt(10000000);
  }
  result = syncpt_api_5d3060(a1, a2, a4, v23);
  atomic_fetch_and_explicit(
      (atomic_ullong* volatile)(a2 +
                                (((unsigned __int64)v23 >> 3) & 0x1FFFFFF8) +
                                8),
      ~(1LL << v23), memory_order_release);
  return result;
}

__int64 syncpt_api_5d2ec0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  unsigned int* v19;
  unsigned int v20;
  unsigned int v21;

  v4 = a1 + 8;
  v3 = *(_QWORD*)a1;
  v21 = 0;
  if (v3 == 0) {
    return 0;
  }
  v5 = a1 + 16;
  v6 = a1 + 80;
  v9 = (__int64*)a1;
  while (1) {
    v10 = 0;
    while (1) {
      v11 = *(_QWORD*)(v4 + 8 * v10);
      if (v11 != -1) {
        break;
      }
    LABEL_4:
      if (++v10 == v3) {
        return 0;
      }
    }
    v12 = *(_QWORD*)(v4 + 8 * v10);
    while (1) {
      v13 = __clz(__rbit64(~v11));
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(v4 + 8 * v10), (unsigned __int64*)&v12,
          (1LL << v13) | v11, memory_order_acquire, memory_order_acquire);
      if (v12 == v11) {
        break;
      }
      v11 = v12;
      if (v12 == -1) {
        goto LABEL_4;
      }
    }
    v14 = (unsigned int)((_DWORD)v10 << 6);
    if ((unsigned int)v14 >= 0x400) {
      nn_diag_detail_AbortImpl_plt_856170(a1);
    }
    v15 = v14 | v13;
    v16 = *(unsigned __int8*)(v5 + v15);
    v21 = v15;
    if (v16 == 0) {
      v20 = 0;
      v19 = &v20;
      if ((unsigned int)syncpt_api_5d3160(a3, &v19, (int*)&v21) != 0) {
        a1 = v20;
        LODWORD(v15) = v21;
        *(_BYTE*)(v5 + v21) = 2;
        if ((_DWORD)a1 == 0) {
        LABEL_15:
          v16 = *(unsigned __int8*)(v5 + (unsigned int)v15);
          goto LABEL_16;
        }
      }
      else {
        v17 = v20;
        v20 = 0;
        nn_os_AttachReadableHandleToSystemEvent_plt(v6 + 48LL * v21, v17, 1, 0);
        a1 = v20;
        LODWORD(v15) = v21;
        *(_BYTE*)(v5 + v21) = 1;
        if ((_DWORD)a1 == 0) {
          goto LABEL_15;
        }
      }
      a1 = nn_os_CloseNativeHandle_plt(a1);
      LODWORD(v15) = v21;
      goto LABEL_15;
    }
  LABEL_16:
    if (v16 == 1) {
      break;
    }
    v3 = *v9;
    v21 = 0;
    if (v3 == 0) {
      return 0;
    }
  }
  *a2 = v15;
  return 1;
}

__int64 syncpt_api_5d3270(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned __int64 v4;
  unsigned int v5;
  __int64* v6;
  __int64 v8;
  unsigned __int64 explicit;
  bool v11;
  int v12;
  int v13;
  _BOOL4 v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned __int64 v19;
  int v20;
  unsigned int v21;
  _BOOL4 v22;

  v2 = *(unsigned __int8*)(a2 + 4);
  if (*(_DWORD*)a2 == 0 && v2 == 0) {
    v4 = *(_QWORD*)(a2 + 8);
    if (v4 == 0) {
      return 1;
    }
    v5 = -1;
    v6 = (__int64*)(a1 + 176);
  }
  else {
    if (v2 > 1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
      __udf(0);
    }
    v4 = *(_QWORD*)(a2 + 8);
    v5 = ~*(_DWORD*)a2;
    v6 = (__int64*)(a1 + 176);
  }
  v8 = v6[1];
  if (*(_QWORD*)(v8 + 16) == 0 || v5 > *(_DWORD*)(v8 + 4)) {
    return syncpt_api_5d2db0_alt1(*v6, v5, v4, v2);
  }
  explicit = atomic_load_explicit(
      (atomic_ullong* volatile)(*(_QWORD*)(v8 + 24) + 8LL * v5),
      memory_order_acquire);
  if (explicit == -1) {
    return 1;
  }
  v11 = explicit >= v4;
  v12 = explicit - v4;
  v13 = !v11;
  v14 = v12 < 0;
  if ((unsigned __int8)v2 == 1) {
    v14 = v13;
  }
  if (!v14) {
    return 1;
  }
  v15 = v2;
  v16 = v4;
  v17 = v5;
  v18 = v5;
  nn_os_SdkMutexType_Lock_plt(v8 + 64);
  syncpt_api_5d2920(v8, v8 + 72, v8 + 120, v18);
  nn_os_SdkMutexType_Unlock_plt(v8 + 64);
  v19 = atomic_load_explicit(
      (atomic_ullong* volatile)(*(_QWORD*)(v8 + 24) + 8 * v17),
      memory_order_acquire);
  if (v19 == -1) {
    return 1;
  }
  v11 = v19 >= v16;
  v20 = v19 - v16;
  v21 = v11;
  v22 = v20 > -1;
  if (v15 == 1) {
    return v21;
  }
  else {
    return v22;
  }
}

__int64 syncpt_api_5d33f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int8 v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  char v23;
  unsigned __int64 explicit;
  bool v25;
  int v26;
  int v27;
  _BOOL4 v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  bool v32;
  bool v33;
  _QWORD v34[2];
  _QWORD v35[5];
  unsigned __int8 v36;
  unsigned __int64 v37;
  unsigned int v38;
  _QWORD v39[3];
  _QWORD v40[7];

  v5 = *(unsigned __int8*)(a2 + 4);
  if (*(_DWORD*)a2 == 0 && v5 == 0) {
    v8 = *(_QWORD*)(a2 + 8);
    if (v8 == 0) {
      return 1;
    }
    v9 = -1;
    v10 = *(_QWORD*)(a1 + 176);
    v11 = a1 + 192;
    v12 = *(_QWORD*)(a1 + 184);
  }
  else {
    if (v5 > 1) {
      v40[5] = v3;
      v40[6] = v4;
      nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
      __udf(0);
    }
    v8 = *(_QWORD*)(a2 + 8);
    v9 = ~*(_DWORD*)a2;
    v10 = *(_QWORD*)(a1 + 176);
    v11 = a1 + 192;
    v12 = *(_QWORD*)(a1 + 184);
  }
  v39[1] = v3;
  v39[2] = v4;
  v14 = *(_QWORD*)(v12 + 16);
  v15 = *(_DWORD*)(v12 + 4);
  v16 = a3;
  v17 = v5;
  v18 = v8;
  v19 = v9;
  v20 = v11;
  v40[0] = v12;
  v39[0] = v10;
  v38 = v9;
  v37 = v8;
  v36 = v5;
  if (v14 == 0 || v9 > v15) {
    v22 = v10;
    if ((syncpt_api_5d2db0_alt1(v10, v9, v8, v5) & 1) != 0) {
    LABEL_32:
      v23 = 1;
      return v23 & 1;
    }
  }
  else {
    explicit = atomic_load_explicit(
        (atomic_ullong* volatile)(*(_QWORD*)(v12 + 24) + 8LL * v9),
        memory_order_acquire);
    if (explicit == -1) {
      goto LABEL_32;
    }
    v25 = explicit >= v8;
    v26 = explicit - v8;
    v27 = !v25;
    v28 = v26 < 0;
    if ((unsigned __int8)v5 == 1) {
      v28 = v27;
    }
    if (!v28) {
      goto LABEL_32;
    }
    v29 = v12;
    nn_os_SdkMutexType_Lock_plt(v12 + 64);
    syncpt_api_5d2920(v29, v29 + 72, v29 + 120, v19);
    nn_os_SdkMutexType_Unlock_plt(v29 + 64);
    v30 = atomic_load_explicit(
        (atomic_ullong* volatile)(*(_QWORD*)(v29 + 24) + 8LL * v19),
        memory_order_acquire);
    if (v30 == -1) {
      goto LABEL_32;
    }
    v25 = v30 >= v18;
    v31 = v30 - v18;
    v32 = v25;
    v33 = v31 > -1;
    if (v17 == 1) {
      v33 = v32;
    }
    if (v33) {
      goto LABEL_32;
    }
    v22 = v39[0];
    v19 = v38;
    v17 = v36;
    v18 = v37;
  }
  v35[0] = v40;
  v35[1] = v39;
  v35[2] = &v38;
  v35[3] = &v37;
  v35[4] = &v36;
  v34[0] = ~v19 | ((unsigned __int64)v17 << 32);
  v34[1] = v18;
  v23 = syncpt_api_5d3600_alt1(v22, v20, v35, v34, v16);
  return v23 & 1;
}

__int64 syncpt_api_5d3600(__int64 a1, __int64 a2, __int64** a3, int* a4,
                          __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v18;
  unsigned __int64 v19;
  bool v20;
  int v21;
  int v22;
  _BOOL4 v23;
  unsigned __int64 v24;
  int v25;
  char v26;
  bool v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 explicit;
  int v40;
  int v41;
  _BOOL4 v42;
  unsigned __int64 v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  char v47;
  bool v48;
  unsigned int v50;

  v10 = nn_os_GetSystemTick_plt(a1);
  v11 = nn_os_ConvertToTick_plt(a5) + v10;
  v50 = 0;
  v12 = syncpt_api_5d2ec0(a2, &v50, a1);
  if ((v12 & 1) != 0) {
  LABEL_25:
    v28 = nn_os_GetSystemTick_plt(v12);
    v29 = __OFSUB__(v11, v28);
    v30 = v11 - v28;
    if ((v30 < 0) ^ v29 | (v30 == 0)) {
      v34 = **a3;
      v35 = *(unsigned int*)a3[2];
      v36 = *a3[3];
      v37 = *(unsigned __int8*)a3[4];
      if (*(_QWORD*)(v34 + 16) == 0 ||
          (unsigned int)v35 > *(_DWORD*)(v34 + 4)) {
        v33 = syncpt_api_5d2db0_alt1(*a3[1], v35, v36, v37);
      }
      else {
        explicit = atomic_load_explicit(
            (atomic_ullong* volatile)(*(_QWORD*)(v34 + 24) + 8 * v35),
            memory_order_acquire);
        if (explicit == -1) {
          goto LABEL_49;
        }
        v20 = explicit >= v36;
        v40 = explicit - v36;
        v41 = !v20;
        v42 = v40 < 0;
        if (v37 == 1) {
          v42 = v41;
        }
        if (!v42 ||
            (v43 = v36, v44 = v37, nn_os_SdkMutexType_Lock_plt(v34 + 64),
             syncpt_api_5d2920(v34, v34 + 72, v34 + 120, v35),
             nn_os_SdkMutexType_Unlock_plt(v34 + 64),
             (v45 = atomic_load_explicit(
                  (atomic_ullong* volatile)(*(_QWORD*)(v34 + 24) + 8 * v35),
                  memory_order_acquire)) == -1)) {
        LABEL_49:
          v33 = 1;
        }
        else {
          v20 = v45 >= v43;
          v46 = v45 - v43;
          v47 = v20;
          v48 = v46 > -1;
          if (v44 == 1) {
            v33 = v47;
          }
          else {
            v33 = v48;
          }
        }
      }
    }
    else {
      v31 = v50;
      v32 = nn_os_ConvertToTimeSpan_plt(v30);
      v33 = syncpt_api_5d38e0(a1, a2, a4, v31, v32);
    }
    atomic_fetch_and_explicit(
        (atomic_ullong* volatile)(a2 +
                                  (((unsigned __int64)v50 >> 3) & 0x1FFFFFF8) +
                                  8),
        ~(1LL << v50), memory_order_release);
  }
  else {
    while (1) {
      v13 = **a3;
      v14 = *(unsigned int*)a3[2];
      v15 = *a3[3];
      v16 = *(unsigned __int8*)a3[4];
      if (*(_QWORD*)(v13 + 16) == 0 ||
          (unsigned int)v14 > *(_DWORD*)(v13 + 4)) {
        v18 = syncpt_api_5d2db0_alt1(*a3[1], v14, *a3[3], v16);
        if ((v18 & 1) != 0) {
          goto LABEL_27;
        }
      }
      else {
        v19 = atomic_load_explicit(
            (atomic_ullong* volatile)(*(_QWORD*)(v13 + 24) + 8 * v14),
            memory_order_acquire);
        if (v19 == -1) {
          goto LABEL_27;
        }
        v20 = v19 >= v15;
        v21 = v19 - v15;
        v22 = !v20;
        v23 = v21 < 0;
        if (v16 == 1) {
          v23 = v22;
        }
        if (!v23) {
          goto LABEL_27;
        }
        nn_os_SdkMutexType_Lock_plt(v13 + 64);
        syncpt_api_5d2920(v13, v13 + 72, v13 + 120, v14);
        v18 = nn_os_SdkMutexType_Unlock_plt(v13 + 64);
        v24 = atomic_load_explicit(
            (atomic_ullong* volatile)(*(_QWORD*)(v13 + 24) + 8 * v14),
            memory_order_acquire);
        if (v24 == -1) {
          goto LABEL_27;
        }
        v20 = v24 >= v15;
        v25 = v24 - v15;
        v26 = v20;
        v27 = v25 > -1;
        if (v16 == 1) {
          v27 = v26;
        }
        if (v27) {
        LABEL_27:
          v33 = 1;
          return v33 & 1;
        }
      }
      if (nn_os_GetSystemTick_plt(v18) >= v11) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
      v12 = syncpt_api_5d2ec0(a2, &v50, a1);
      if ((v12 & 1) != 0) {
        goto LABEL_25;
      }
    }
    v33 = 0;
  }
  return v33 & 1;
}

__int64 syncpt_api_5d3a30(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 result;
  unsigned int v7;

  a2[3] = 0;
  a2[4] = 0;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(_QWORD*)(a1 + 176);
  v7 = 0;
  if ((syncpt_api_5d2ec0(a1 + 192, &v7, v4) & 1) == 0) {
    return 33011;
  }
  v5 = v7;
  result = 0;
  *(_DWORD*)a2 = v7;
  a2[1] = a1 + 48LL * v5 + 272;
  a2[2] = 1;
  a2[3] = 0;
  a2[4] = 0;
  return result;
}

__int64 syncpt_api_5d3c00(__int64 a1, __int64 a2)
{
  unsigned __int64 explicit;
  unsigned __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned int v9;
  bool v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v19;
  unsigned __int64 v20;

  explicit = atomic_load_explicit((atomic_ullong* volatile)(a2 + 16),
                                  memory_order_acquire);
  if ((explicit & 1) != 0) {
    return 1;
  }
  v3 = explicit & 0xFFFFFFFFFFFFFFFCLL;
  v6 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 24),
                            memory_order_acquire);
  v7 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 32),
                            memory_order_acquire);
  v8 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = ~(_DWORD)v6;
    v10 = *(_QWORD*)(a1 + 16) != 0 && *(_DWORD*)(a1 + 4) >= v9;
    if (v10) {
      v11 = atomic_load_explicit(
          (atomic_ullong* volatile)(*(_QWORD*)(a1 + 24) + 8LL * v9),
          memory_order_acquire);
      if (v11 == -1) {
        goto LABEL_16;
      }
      v10 = v11 >= v7;
      v12 = v11 - v7;
      v13 = v6 & 0xFF00000000LL;
      v14 = v10;
      v15 = v12 > -1;
      if (v13 == 0x100000000LL) {
        v15 = v14;
      }
      if (v15) {
        goto LABEL_16;
      }
    }
  }
  if ((nn_os_TryWaitSystemEvent_plt(v8) & 1) != 0) {
  LABEL_16:
    v16 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 16),
                               memory_order_acquire);
    if ((v16 & 0xFFFFFFFFFFFFFFFCLL) == v3 && (v16 & 1) == 0) {
      v20 = v16;
      do {
        atomic_compare_exchange_strong((atomic_ullong* volatile)(a2 + 16), &v20,
                                       v16 | 1);
        if (v20 == v16) {
          break;
        }
        v16 = v20;
      } while ((v20 & 0xFFFFFFFFFFFFFFFCLL) == v3 && (v20 & 1) == 0);
      return 1;
    }
    else {
      return 1;
    }
  }
  else {
    v19 = atomic_load_explicit((atomic_ullong* volatile)(a2 + 16),
                               memory_order_acquire);
    return ((v19 & 0xFFFFFFFFFFFFFFFCLL) != v3) | (unsigned int)(v19 & 1);
  }
}

void syncpt_api_5d4220(__int64 a1, int* a2, _DWORD* a3, __int64 a4)
{
  *a2 = ~*(_DWORD*)a4;
  *a3 = *(_QWORD*)(a4 + 8);
}

__int64 syncpt_api_5d4240(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 syncpt_api_5d4250(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 syncpt_api_5d4260(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle(__int64 a1)
{
  return *(_QWORD*)a1;
}

#pragma GCC visibility pop
