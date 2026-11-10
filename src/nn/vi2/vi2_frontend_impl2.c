#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_5e7c50(PSEUDO_X8, __int64);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gs_TimedWaitNativeSync_plt(_QWORD, _QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_858be0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_TimedWaitAny_plt(_QWORD, _QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(_QWORD);
__int64 nn_vi2_5e5e40(__int64, unsigned int);
__int64 nn_vi2_5e6180(__int64, unsigned int*);
__int64 nn_vi2_5e6400(__int64);
__int64 nn_vi2_5e66a0(__int64, unsigned int);
__int64 nn_vi2_5e6950(__int64, __int64, unsigned int);
__int64 nn_vi2_5e6a80(__int64, unsigned __int64*, unsigned __int64*);
__int64 vi2_frontend_5e7b00_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("vi2_frontend_5e7b00");
__int64 vi2_frontend_5e7d80_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("vi2_frontend_5e7d80");
__int64 vi2_frontend_5e80a0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("vi2_frontend_5e80a0");
__int64 vi2_frontend_5e8340_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("vi2_frontend_5e8340");
__int64 vi2_frontend_5e84e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("vi2_frontend_5e84e0");
__int64 vi2_frontend_5e72f0(__int64 a1, __int64 a2, __int64 a3);
void vi2_frontend_5e7320(__int64 a1);
__int64 vi2_frontend_5e7410(__int64 a1, unsigned int a2, int a3);
__int64 vi2_frontend_5e7490(__int64 a1, unsigned int a2);
__int64 vi2_frontend_5e74e0(__int64 a1, unsigned int a2, unsigned int* a3);
__int64 vi2_frontend_5e75b0(__int64 a1, _DWORD* a2, unsigned int a3);
__int64 vi2_frontend_5e75d0(__int64 a1, _DWORD* a2, __int64* a3);
__int64 vi2_frontend_5e76f0(__int64 a1, _DWORD* a2, __int64* a3);
__int64 vi2_frontend_5e77d0(__int64 result, int a2);
__int64 vi2_frontend_5e7800(__int64 result, unsigned __int16 a2, int a3,
                            __int16 a4, int a5);
__int64 vi2_frontend_5e7860(__int64 result, int a2);
__int64 vi2_frontend_5e7890(__int64 result, unsigned __int16 a2, int a3);
__int64 vi2_frontend_5e78c0(__int64 result, unsigned __int16 a2, __int64 a3);
__int64 vi2_frontend_5e7930(__int64 result);
__int64 vi2_frontend_5e7950(__int64 result, unsigned __int8 a2);
__int64 vi2_frontend_5e79a0(__int64 result);
__int64 vi2_frontend_5e79c0(__int64 result, float a2, float a3, float a4);
__int64 vi2_frontend_5e7a10(__int64 result);
__int64 vi2_frontend_5e7a60(__int64 result, _WORD* a2, _WORD* a3);
bool vi2_frontend_5e7a80(__int64 a1, _WORD* a2, _WORD* a3, _WORD* a4,
                         _WORD* a5);
__int64 vi2_frontend_5e7af0(__int64 result, __int16 a2);
__int64 vi2_frontend_5e7b00(__int64 a1, __int64* a2, unsigned int a3, char a4);
__int64 vi2_frontend_5e7d80(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4);
__int64 vi2_frontend_5e7f40(__int64 a1, __int64 a2, unsigned int a3,
                            __int64 a4);
__int64 vi2_frontend_5e80a0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
bool vi2_frontend_5e8340(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 vi2_frontend_5e84e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5);
__int64 vi2_frontend_5e85e0(__int64 result, unsigned int a2, _QWORD* a3);
__int64 vi2_frontend_5e87d0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 vi2_frontend_5e8920(unsigned int* a1, unsigned int* a2, _QWORD* a3,
                            __int64 a4);
__int64 vi2_frontend_5e8af0(_QWORD* a1, __int64 a2, unsigned int a3,
                            unsigned int a4);
__int64 vi2_frontend_5e8c00(unsigned __int64 a1, __int64 a2);
__int64 vi2_frontend_5e8d20(__int64 a1, unsigned __int64* a2);
__int64 vi2_frontend_5e8e40(_QWORD* a1, __int64 a2, __int64 a3,
                            unsigned __int64 a4);
__int64 vi2_frontend_5e9100(__int64 a1, _DWORD* a2, _QWORD* a3, __int64 a4);

__int64 vi2_frontend_5e72f0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3;

  v3 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_uchar* volatile)(a1 + 24), (unsigned __int8*)&v3, 1u,
      memory_order_acquire, memory_order_acquire);
  if (v3 != 0) {
    return 626;
  }
  *(_QWORD*)(a1 + 32) = a2;
  *(_QWORD*)(a1 + 40) = a3;
  return 0;
}

void vi2_frontend_5e7320(__int64 a1)
{
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  atomic_store(0, (unsigned __int8*)(a1 + 24));
}

__int64 vi2_frontend_5e7410(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;

  if (a2 >= 0xF) {
    a1 = nn_diag_detail_AbortImpl_plt_856170(a1);
    goto LABEL_6;
  }
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v3 + 32LL * a2;
  v6 = *(unsigned __int8*)(v4 + 176);
  v5 = v4 + 176;
  if (v6 != 0) {
  LABEL_6:
    a1 = nn_diag_detail_AbortImpl_plt_856170(a1);
  LABEL_7:
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  *(_DWORD*)(v5 + 4) = a3;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_BYTE*)v5 = 1;
  v7 = *(unsigned int*)(v3 + 660);
  v8 = ((_BYTE)v7 + 1) & 0xF;
  if (v8 == *(_DWORD*)(v3 + 656)) {
    goto LABEL_7;
  }
  *(_DWORD*)(v3 + 660) = v8;
  *(_DWORD*)(v3 + 4 * v7 + 664) = a2;
  return 0;
}

__int64 vi2_frontend_5e7490(__int64 a1, unsigned int a2)
{
  __int64 v2;
  _QWORD v4[2];

  v2 = *(_QWORD*)(a1 + 16);
  v4[0] = 0;
  v4[1] = 0;
  return vi2_frontend_5e7b00_alt1(v2, v4, a2, 1);
}

__int64 vi2_frontend_5e74e0(__int64 a1, unsigned int a2, unsigned int* a3)
{
  __int64 v4;
  __int64* v6;
  unsigned int* v7;
  __int64 (*v8)(unsigned int*, __int64);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[2];

  v4 = *(_QWORD*)(a1 + 16);
  v14[0] = 0;
  v14[1] = 0;
  vi2_frontend_5e7b00_alt1(v4, v14, a2, 1);
  while ((nn_gs_TimedWaitNativeSync_plt(v14, 1000000000) & 1) == 0)
    ;
  v6 = *(__int64**)(a1 + 8);
  v7 = *((unsigned int**)a3 + 3);
  v8 = *((__int64 (**)(unsigned int*, __int64))a3 + 4);
  v9 = *((_QWORD*)a3 + 5);
  v10 = *v6;
  v11 = a3[1];
  v12 = *(_QWORD*)(*v6 + 24);
  if (*a3 != 0) {
    (*(void (**)(__int64, __int64))(v10 + 160))(v12, v11);
    (*(void (**)(_QWORD, _QWORD))(*v6 + 136))(*(_QWORD*)(*v6 + 24), *a3);
  }
  else {
    (*(void (**)(__int64, __int64))(v10 + 176))(v12, v11);
  }
  *(_QWORD*)a3 = 0;
  v8(v7, v9);
  return v8(a3, v9);
}

__int64 vi2_frontend_5e75b0(__int64 a1, _DWORD* a2, unsigned int a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 16);
  *a2 = *(_DWORD*)(v3 + 32LL * a3 + 180);
  return 0;
}

__int64 vi2_frontend_5e75d0(__int64 a1, _DWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(_DWORD*)(v3 + 24) != 0) {
    return 5234;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v16 = 0;
  result = vi2_frontend_5e7d80_alt1(v3, &v16, v5, 1);
  if ((_DWORD)result == 0) {
    v8 = *(unsigned int*)(v3 + 656);
    if ((_DWORD)v8 == *(_DWORD*)(v3 + 660)) {
      *(_QWORD*)(v3 + 168) &= ~v16;
      return 3698;
    }
    else {
      v9 = *(unsigned int*)(v3 + 4 * v8 + 664);
      *(_DWORD*)(v3 + 656) = ((_BYTE)v8 + 1) & 0xF;
      v10 = v3 + 32 * v9;
      v11 = *(_QWORD*)(v10 + 200);
      v15[0] = *(_QWORD*)(v10 + 192);
      v15[1] = v11;
      v12 = v16;
      *(_BYTE*)(v10 + 176) = 2;
      *(_QWORD*)(v10 + 184) = v12;
      v13 = nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(v15);
      *a2 = v9;
      *a3 = v13;
      a3[1] = v14;
      return 0;
    }
  }
  return result;
}

__int64 vi2_frontend_5e76f0(__int64 a1, _DWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(_DWORD*)(v3 + 24) != 0) {
    v7 = 5234;
    goto LABEL_6;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v16 = 0;
  v7 = vi2_frontend_5e7d80_alt1(v3, &v16, v5, 1);
  if (v7 != 0) {
  LABEL_6:
    LODWORD(v15[0]) = v7;
    nn_diag_detail_AbortImpl_plt_858db0(v15);
  LABEL_7:
    *(_QWORD*)(v3 + 168) &= ~v16;
    LODWORD(v15[0]) = 3698;
    nn_diag_detail_AbortImpl_plt_858db0(v15);
    __udf(0);
  }
  v8 = *(unsigned int*)(v3 + 656);
  if ((_DWORD)v8 == *(_DWORD*)(v3 + 660)) {
    goto LABEL_7;
  }
  v9 = *(unsigned int*)(v3 + 4 * v8 + 664);
  *(_DWORD*)(v3 + 656) = ((_BYTE)v8 + 1) & 0xF;
  v10 = v3 + 32 * v9;
  v11 = *(_QWORD*)(v10 + 200);
  v15[0] = *(_QWORD*)(v10 + 192);
  v15[1] = v11;
  v12 = v16;
  *(_BYTE*)(v10 + 176) = 2;
  *(_QWORD*)(v10 + 184) = v12;
  result = nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(v15);
  *a2 = v9;
  *a3 = result;
  a3[1] = v14;
  return result;
}

__int64 vi2_frontend_5e77d0(__int64 result, int a2)
{
  char v2;

  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    if ((unsigned int)a2 >= 0x3C) {
      v2 = 60;
    }
    else {
      v2 = a2;
    }
    if (a2 < 1) {
      v2 = 1;
    }
    *(_BYTE*)(*(_QWORD*)(result + 16) + 113LL) = v2;
  }
  return result;
}

__int64 vi2_frontend_5e7800(__int64 result, unsigned __int16 a2, int a3,
                            __int16 a4, int a5)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;

  if ((*(_BYTE*)(result + 40) & 2) != 0) {
    v5 = *(_QWORD*)(result + 16);
    v6 = *(_QWORD*)(v5 + 56);
    if (a4 != 0 && (_WORD)a5 != 0) {
      v7 = v6 | 2;
      v8 = a2 | ((unsigned __int16)a3 << 16) |
           ((unsigned __int64)(unsigned __int16)(a2 + a4 - 1) << 32) |
           ((unsigned __int64)(unsigned int)(a3 + a5 - 1) << 48);
    }
    else {
      v7 = v6 & 0xFFFFFFFFFFFFFFFDLL;
      v8 = 0;
    }
    *(_QWORD*)(v5 + 48) = v8;
    *(_QWORD*)(v5 + 56) = v7;
  }
  return result;
}

__int64 vi2_frontend_5e7860(__int64 result, int a2)
{
  __int64 v2;

  v2 = 0x40000;
  if (a2 != 0) {
    v2 = 0;
  }
  *(_QWORD*)(*(_QWORD*)(result + 16) + 56LL) =
      *(_QWORD*)(*(_QWORD*)(result + 16) + 56LL) & 0xFFFFFFFFFFF8FFFFLL | v2;
  return result;
}

__int64 vi2_frontend_5e7890(__int64 result, unsigned __int16 a2, int a3)
{
  __int64 v3;
  unsigned __int64 v4;

  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    v3 = *(_QWORD*)(result + 16);
    v4 = a2 | ((unsigned __int64)*(unsigned int*)(v3 + 92) << 32) |
         (unsigned int)(a3 << 16);
    *(_QWORD*)(v3 + 80) |= 1uLL;
    *(_QWORD*)(v3 + 88) = v4;
  }
  return result;
}

__int64 vi2_frontend_5e78c0(__int64 result, unsigned __int16 a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;

  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    v3 = *(_QWORD*)(result + 16);
    v4 = *(unsigned int*)(v3 + 88) | ((unsigned __int64)a2 << 32) | (a3 << 48);
    *(_QWORD*)(v3 + 80) |= 2uLL;
    *(_QWORD*)(v3 + 88) = v4;
  }
  return result;
}

__int64 vi2_frontend_5e7930(__int64 result)
{
  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    *(_QWORD*)(*(_QWORD*)(result + 16) + 80LL) &= ~0x40uLL;
  }
  return result;
}

__int64 vi2_frontend_5e7950(__int64 result, unsigned __int8 a2)
{
  bool v2;
  __int64 v3;

  v2 = a2 > 0xFu || ((1 << a2) & 0xC007) == 0;
  if (!v2 && (*(_BYTE*)(result + 40) & 8) != 0) {
    v3 = *(_QWORD*)(result + 16);
    *(_QWORD*)(v3 + 96) = *(_QWORD*)(v3 + 96) & 0xFFFFFFFFFFFFF0FFLL |
                          ((unsigned __int64)(a2 & 0xF) << 8);
    *(_QWORD*)(v3 + 80) |= 0x80uLL;
  }
  return result;
}

__int64 vi2_frontend_5e79a0(__int64 result)
{
  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    *(_QWORD*)(*(_QWORD*)(result + 16) + 80LL) &= ~0x80uLL;
  }
  return result;
}

__int64 vi2_frontend_5e79c0(__int64 result, float a2, float a3, float a4)
{
  __int64 v4;

  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    v4 = *(_QWORD*)(result + 16);
    if (*(_BYTE*)(v4 + 140) == 0 || *(float*)(v4 + 144) != a2 ||
        *(float*)(v4 + 148) != a3 || *(float*)(v4 + 152) != a4) {
      *(_WORD*)(v4 + 141) = 0;
      *(_BYTE*)(v4 + 143) = 0;
      *(float*)(v4 + 144) = a2;
      *(float*)(v4 + 148) = a3;
      *(float*)(v4 + 152) = a4;
      *(_BYTE*)(v4 + 136) = 1;
      *(_BYTE*)(v4 + 140) = 1;
    }
  }
  return result;
}

__int64 vi2_frontend_5e7a10(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    v1 = *(_QWORD*)(result + 16);
    if ((*(_BYTE*)(v1 + 140) & 1) != 0 || *(float*)(v1 + 144) != 0.0 ||
        *(float*)(v1 + 148) != 0.0 || *(float*)(v1 + 152) != 0.0) {
      *(_QWORD*)(v1 + 140) = 0;
      *(_QWORD*)(v1 + 148) = 0;
      *(_BYTE*)(v1 + 136) = 1;
    }
  }
  return result;
}

__int64 vi2_frontend_5e7a60(__int64 result, _WORD* a2, _WORD* a3)
{
  *a2 = *(_WORD*)(result + 48);
  *a3 = *(_WORD*)(result + 50);
  return result;
}

bool vi2_frontend_5e7a80(__int64 a1, _WORD* a2, _WORD* a3, _WORD* a4, _WORD* a5)
{
  __int64 v5;

  v5 = *(_QWORD*)(a1 + 16);
  *a2 = *(_QWORD*)(v5 + 48);
  *a3 = WORD1(*(_QWORD*)(v5 + 48));
  *a4 = *(_DWORD*)(v5 + 52) - *(_DWORD*)(v5 + 48) + 1;
  *a5 = HIWORD(*(_QWORD*)(v5 + 48)) - WORD1(*(_QWORD*)(v5 + 48)) + 1;
  return (*(_BYTE*)(v5 + 56) & 2) != 0;
}

__int64 vi2_frontend_5e7af0(__int64 result, __int16 a2)
{
  *(_WORD*)(result + 56) = a2;
  return result;
}

__int64 vi2_frontend_5e7b00(__int64 a1, __int64* a2, unsigned int a3, char a4)
{
  __int64 v4;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  _QWORD v22[8];
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v23_;
  __int64 v31;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = a1 + 32LL * a3;
  v7 = *(_QWORD*)(v4 + 184);
  v8 = *(_DWORD*)(a1 + 24) != 0 || (a4 & 1) == 0;
  if (!v8 && (*(_BYTE*)(a1 + 28) & 1) == 0) {
    v23_.v29 = 0;
    v23_.v30 = 0;
    v23_.v27 = 0;
    v23_.v28 = 0;
    v23_.v25 = 0;
    v23_.v26 = 0;
    v23_.v23 = 0;
    v23_.v24 = 0;
    SdkRoutine_5e7c50((void*)(&v23_.v23), a1),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v23_.v23;
    v10 = v23_.v24 & 0xFFFFFFFFFFFFFFFELL;
    v22[4] = v23_.v27;
    v22[5] = v23_.v28;
    v11 = *(_QWORD*)(a1 + 16);
    v31 = 0;
    v23_.v23 = 0;
    v23_.v24 = 0;
    v22[0] = v9;
    v22[1] = v10;
    v12 = __clz(__rbit64(v7));
    v22[6] = v23_.v29;
    v22[7] = v23_.v30;
    v22[2] = v23_.v25;
    v22[3] = v23_.v26;
    v13 = (*(__int64 (**)(_QWORD, __int64*, __int64*, __int64, _QWORD,
                          _QWORD*))(**(_QWORD**)v11 + 288LL))(
        *(_QWORD*)(**(_QWORD**)v11 + 24LL), &v31, &v23_.v23, v11, v12, v22),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 != 0) {
      *(_DWORD*)(a1 + 24) = v13;
    }
    else {
      v14 = *(_QWORD*)(a1 + 168);
      v15 = v31;
      v16 = v23_.v23;
      v17 = v23_.v24;
      *(_BYTE*)(a1 + 28) = 1;
      v7 &= ~(1LL << v12);
      *(_QWORD*)(a1 + 32) = v16;
      *(_QWORD*)(a1 + 40) = v17;
      *(_QWORD*)(a1 + 160) = v15;
      *(_QWORD*)(a1 + 168) = v14 & ~(1LL << v12);
    }
  }
  v18 = *(_QWORD*)(v4 + 192);
  v19 = *(_QWORD*)(v4 + 200);
  *(_BYTE*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 180) = 0;
  *(_QWORD*)(v4 + 188) = 0;
  *(_QWORD*)(v4 + 196) = 0;
  *(_DWORD*)(v4 + 204) = 0;
  v23_.v23 = v18;
  v23_.v24 = v19;
  result = nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(&v23_.v23),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *a2 = result;
  a2[1] = v21;
  if (v7 != 0) {
    *(_QWORD*)(a1 + 168) &= ~v7;
  }
  return result;
}

__int64 vi2_frontend_5e7d80(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  void (*v23)(__int64*, __int64);
  __int64 v24;

  v4 = *(_QWORD*)(a1 + 168);
  if (a4 != 0) {
    v9 = 0;
    v10 = a4;
    v11 = *(_QWORD*)(a1 + 160) & ~v4;
    while (v11 != 0) {
      --v10;
      v12 = v11 & -v11;
      v11 ^= v12;
      v9 |= v12;
      if (v10 == 0) {
        goto LABEL_7;
      }
    }
    while (1) {
      nn_vi2_5e5e40(a3, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12LL));
      v14 = *(_QWORD*)(a1 + 16);
      v23 = nullptr;
      v15 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)v14 + 272LL))(
          *(_QWORD*)(**(_QWORD**)v14 + 24LL), &v23);
      if (v15 != 0) {
        v16 = *(_QWORD*)(a1 + 160);
        *(_DWORD*)(a1 + 24) = v15;
      }
      else {
        v16 = (unsigned __int64)v23;
        *(_QWORD*)(a1 + 160) = v23;
      }
      v4 = *(_QWORD*)(a1 + 168);
      v9 = 0;
      v17 = a4;
      v18 = v16 & ~v4;
      while (v18 != 0) {
        --v17;
        v19 = v18 & -(__int64)v18;
        v18 ^= v19;
        v9 |= v19;
        if (v17 == 0) {
          goto LABEL_7;
        }
      }
      if (*(_DWORD*)(a1 + 24) != 0) {
        return 5234;
      }
      v20 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12LL);
      nn_os_SdkMutexType_Lock_plt(a3 + 640);
      v21 = *(_QWORD*)(a3 + 648);
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 72), 1u,
                                  memory_order_relaxed);
        nn_os_SdkMutexType_Unlock_plt(a3 + 640);
        vi2_frontend_5e7f40(a3 + 248, v21, v20, 1000000000);
        if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 72),
                                      0xFFFFFFFFFFFFFFFFLL,
                                      memory_order_release) == 1) {
          __builtin_arm_dmb(9u);
          v22 = *(_QWORD*)(v21 + 64);
          v23 = *(void (**)(__int64*, __int64))(v21 + 56);
          v24 = v22;
          v23(&v24, v21);
        }
      }
      else {
        nn_os_SdkMutexType_Unlock_plt(a3 + 640);
        vi2_frontend_5e7f40(a3 + 248, 0, v20, 1000000000);
      }
    }
  }
  else {
    v9 = 0;
  LABEL_7:
    *(_QWORD*)(a1 + 168) = v9 | v4;
    *a2 = v9;
    return 0;
  }
}

__int64 vi2_frontend_5e7f40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  _QWORD v16[5];
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19[2];
  __int64 v20;

  v17 = 0;
  v18 = nullptr;
  v19[0] = 1;
  v19[1] = a3;
  memset(v16, 0, sizeof(v16));
  v12 = 0;
  v14 = 0;
  v11 = 0;
  nn_os_InitializeEvent_plt(v16, 0, 0);
  v17 = (__int64)&v17;
  v18 = &v17;
  nn_os_SignalEvent_plt(v16);
  v15 = 0;
  v13 = 0;
  nn_vi2_5e6a80(a1 + 16, &v11, v19);
  v20 = 0;
  if (a2 == 0) {
    v7 = vi2_frontend_5e8340_alt1(&v20, a1 + 16, &v11, a4);
    nn_os_SdkMutexType_Lock_plt(a1 + 16);
    if (&v17 == (__int64*)(a1 + 152)) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v7 = vi2_frontend_5e80a0_alt1(&v20, a2, a1, a1 + 16, &v11, a4);
  nn_os_SdkMutexType_Lock_plt(a1 + 16);
  if (&v17 != (__int64*)(a1 + 152)) {
  LABEL_3:
    v8 = v18;
    v9 = *v18;
    *(_QWORD*)(v17 + 8) = v18;
    *v8 = v17;
    *(_QWORD*)(v9 + 8) = &v17;
    v17 = v9;
  }
LABEL_4:
  nn_os_SignalEvent_plt(v16);
  v15 = 0;
  v13 = 0;
  v11 = 0;
  v12 = 0;
  nn_os_SdkMutexType_Unlock_plt(a1 + 16);
  nn_os_FinalizeEvent_plt(v16);
  return v7 & 1;
}

__int64 vi2_frontend_5e80a0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  unsigned int v12;
  unsigned int v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  _QWORD* v28;
  unsigned int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[7];
  __int64 v36;
  _QWORD v37[7];
  __int64 v38;
  _QWORD v39[6];

  if (a6 <= 0) {
    return vi2_frontend_5e84e0_alt1(a1, a2, a3, a4, a5);
  }
  nn_os_SdkMutexType_Lock_plt(a4);
  v12 = atomic_load((unsigned int*)(a5 + 16));
  if (v12 == 2) {
    *a1 = *(_QWORD*)(a5 + 24);
    nn_os_SdkMutexType_Unlock_plt(a4);
    return 1;
  }
  v15 = nn_os_SdkMutexType_Unlock_plt(a4);
  v16 = nn_os_GetSystemTick_plt(v15);
  v17 = nn_os_ConvertToTick_plt(a6);
  memset(v39, 0, sizeof(v39));
  nn_os_InitializeMultiWait_plt(v39);
  v38 = 0;
  memset(v37, 0, sizeof(v37));
  nn_os_InitializeMultiWaitHolder_plt_8591f0(v37, a2);
  v38 = 1;
  nn_os_LinkMultiWaitHolder_plt(v39, v37);
  v36 = 0;
  memset(v35, 0, sizeof(v35));
  nn_os_InitializeMultiWaitHolder_plt_858be0(v35, a5 + 32);
  v36 = 2;
  nn_os_LinkMultiWaitHolder_plt(v39, v35);
  v18 = nn_os_TimedWaitAny_plt(v39, a6);
  if (v18 == 0) {
  LABEL_17:
    v13 = 0;
  LABEL_19:
    nn_os_UnlinkMultiWaitHolder_plt(v35);
    v36 = 0;
    nn_os_FinalizeMultiWaitHolder_plt(v35);
    nn_os_UnlinkMultiWaitHolder_plt(v37);
    v38 = 0;
    nn_os_FinalizeMultiWaitHolder_plt(v37);
    nn_os_FinalizeMultiWait_plt(v39);
    return v13;
  }
  v19 = v17 + v16;
  v20 = v18;
  while (1) {
    v23 = nn_os_GetSystemTick_plt(v18);
    v24 = nn_os_ConvertToTimeSpan_plt(v19 - v23);
    v25 = *(_QWORD*)(v20 + 56);
    v26 = v24;
    if (v25 != 2) {
      break;
    }
    nn_os_SdkMutexType_Lock_plt(a4);
    v21 = a4;
    v22 = atomic_load((unsigned int*)(a5 + 16));
    if (v22 == 2) {
      *a1 = *(_QWORD*)(a5 + 24);
      nn_os_SdkMutexType_Unlock_plt(a4);
      v13 = 1;
      goto LABEL_19;
    }
  LABEL_8:
    nn_os_SdkMutexType_Unlock_plt(v21);
    v18 = nn_os_TimedWaitAny_plt(v39, v26 & ~(v26 >> 63));
    v20 = v18;
    if (v18 == 0) {
      goto LABEL_17;
    }
  }
  if (v25 == 1) {
    nn_os_SdkMutexType_Lock_plt(a3);
    v27 = nn_os_TryWaitSystemEvent_plt(a2);
    v21 = a3;
    if ((v27 & 1) != 0) {
      nn_os_ClearSystemEvent_plt(a2);
      v28 = *(_QWORD**)(a3 + 8);
      v21 = a3;
      if (v28 != nullptr) {
        v30 = *v28;
        v29 = (unsigned int*)(v28 + 1);
        if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
                *(_QWORD*)v30 + 120LL))(*(_QWORD*)(*(_QWORD*)v30 + 24LL), v29,
                                        128) != 0) {
          nn_vi2_5e6400(a4);
        }
        else {
          nn_vi2_5e6180(a4, v29);
        }
        v21 = a3;
      }
    }
    goto LABEL_8;
  }
  v31 = nn_detail_UnexpectedDefaultImpl_plt_857150(v24);
  return vi2_frontend_5e8340_alt1(v31, v32, v33, v34);
}

bool vi2_frontend_5e8340(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  _QWORD v19[7];
  __int64 v20;
  _QWORD v21[6];

  nn_os_SdkMutexType_Lock_plt(a2);
  v8 = atomic_load((unsigned int*)(a3 + 16));
  v9 = v8 == 2;
  if (a4 <= 0) {
    if (v8 == 2) {
      *a1 = *(_QWORD*)(a3 + 24);
    }
    nn_os_SdkMutexType_Unlock_plt(a2);
  }
  else if (v8 == 2) {
    *a1 = *(_QWORD*)(a3 + 24);
    nn_os_SdkMutexType_Unlock_plt(a2);
    return true;
  }
  else {
    v10 = nn_os_SdkMutexType_Unlock_plt(a2);
    v11 = nn_os_GetSystemTick_plt(v10);
    v12 = nn_os_ConvertToTick_plt(a4);
    memset(v21, 0, sizeof(v21));
    nn_os_InitializeMultiWait_plt(v21);
    v20 = 0;
    memset(v19, 0, sizeof(v19));
    nn_os_InitializeMultiWaitHolder_plt_858be0(v19, a3 + 32);
    v20 = 2;
    nn_os_LinkMultiWaitHolder_plt(v21, v19);
    v13 = nn_os_TimedWaitAny_plt(v21, a4);
    if (v13 != 0) {
      v14 = v12 + v11;
      while (1) {
        v15 = nn_os_GetSystemTick_plt(v13);
        v16 = nn_os_ConvertToTimeSpan_plt(v14 - v15);
        nn_os_SdkMutexType_Lock_plt(a2);
        v17 = atomic_load((unsigned int*)(a3 + 16));
        if (v17 == 2) {
          break;
        }
        nn_os_SdkMutexType_Unlock_plt(a2);
        v13 = nn_os_TimedWaitAny_plt(v21, v16 & ~(v16 >> 63));
        if (v13 == 0) {
          goto LABEL_11;
        }
      }
      *a1 = *(_QWORD*)(a3 + 24);
      nn_os_SdkMutexType_Unlock_plt(a2);
      v9 = true;
    }
    else {
    LABEL_11:
      v9 = false;
    }
    nn_os_UnlinkMultiWaitHolder_plt(v19);
    v20 = 0;
    nn_os_FinalizeMultiWaitHolder_plt(v19);
    nn_os_FinalizeMultiWait_plt(v21);
  }
  return v9;
}

__int64 vi2_frontend_5e84e0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5)
{
  unsigned int v10;
  _QWORD* v11;
  unsigned int* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;

  nn_os_SdkMutexType_Lock_plt(a4);
  v10 = atomic_load((unsigned int*)(a5 + 16));
  if (v10 == 2) {
    goto LABEL_8;
  }
  nn_os_SdkMutexType_Unlock_plt(a4);
  nn_os_SdkMutexType_Lock_plt(a3);
  if ((nn_os_TryWaitSystemEvent_plt(a2) & 1) != 0) {
    nn_os_ClearSystemEvent_plt(a2);
    v11 = *(_QWORD**)(a3 + 8);
    if (v11 != nullptr) {
      v13 = *v11;
      v12 = (unsigned int*)(v11 + 1);
      if ((*(unsigned int (**)(_QWORD, unsigned int*, __int64))(
              *(_QWORD*)v13 + 120LL))(*(_QWORD*)(*(_QWORD*)v13 + 24LL), v12,
                                      128) != 0) {
        nn_vi2_5e6400(a4);
      }
      else {
        nn_vi2_5e6180(a4, v12);
      }
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a3);
  nn_os_SdkMutexType_Lock_plt(a4);
  v14 = atomic_load((unsigned int*)(a5 + 16));
  if (v14 == 2) {
  LABEL_8:
    v15 = *(_QWORD*)(a5 + 24);
    v16 = 1;
    *a1 = v15;
  }
  else {
    v16 = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(a4);
  return v16;
}

__int64 vi2_frontend_5e85e0(__int64 result, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[8];
    __int64 v26;
    __int64 v27;
  } v25_;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  _QWORD v30[2];
  __int64 v31;

  v3 = result + 32LL * a2;
  v4 = *(_QWORD*)(result + 120);
  v5 = *(_DWORD*)(result + 24);
  v7 = result;
  *(_QWORD*)(result + 120) = 0;
  v25_.v26 = 0;
  v25_.v27 = 0;
  v8 = *(_QWORD*)(v3 + 184);
  if (v5 == 0) {
    memset(v25_.v25, 0, sizeof(v25_.v25));
    result = vi2_frontend_5e87d0(result, v25_.v25, v4);
    if ((_DWORD)result != 0) {
      goto LABEL_4;
    }
    v10 = *(_QWORD*)(v7 + 16);
    v31 = 0;
    v28_.v28 = 0;
    v28_.v29 = 0;
    v11 = *(unsigned int*)(v3 + 180);
    v12 = __clz(__rbit64(v8));
    v13 = a3[1];
    v30[0] = *a3;
    v30[1] = v13;
    result = (*(__int64 (**)(_QWORD, __int64*, __int64*, __int64, _QWORD,
                             __int64, _QWORD*, _QWORD*))(
        **(_QWORD**)v10 + 280LL))(*(_QWORD*)(**(_QWORD**)v10 + 24LL), &v31,
                                  &v28_.v28, v10, v12, v11, v25_.v25, v30);
    if ((_DWORD)result != 0) {
    LABEL_4:
      *(_DWORD*)(v7 + 24) = result;
    }
    else {
      v8 &= ~(1LL << v12);
      v25_.v26 = v28_.v28;
      v25_.v27 = v28_.v29;
      v19 = *(_QWORD*)(v7 + 168) & ~(1LL << v12);
      *(_QWORD*)(v7 + 160) = v31;
      *(_QWORD*)(v7 + 168) = v19;
      if (v4 != 0) {
        v20 = *(_QWORD*)(v7 + 128);
        v21 = nn_os_SdkMutexType_Lock_plt(v4);
        v22 = v25_.v26;
        v23 = v25_.v27;
        *(_WORD*)(v4 + 8) = 1;
        *(_QWORD*)(v4 + 32) = v20;
        *(_QWORD*)(v4 + 40) = 0;
        *(_QWORD*)(v4 + 48) = 0;
        *(_QWORD*)(v4 + 56) = 0;
        *(_QWORD*)(v4 + 64) = 0;
        *(_QWORD*)(v4 + 72) = 0;
        *(_QWORD*)(v4 + 80) = 0;
        *(_QWORD*)(v4 + 88) = 0;
        *(_QWORD*)(v4 + 96) = 0;
        *(_QWORD*)(v4 + 16) = v22;
        *(_QWORD*)(v4 + 24) = v23;
        v24 = nn_os_GetSystemTick_plt(v21);
        *(_QWORD*)(v4 + 104) = v24 - nn_os_ConvertToTick_plt(100000);
        result = nn_os_SdkMutexType_Unlock_plt(v4);
      }
      v4 = 0;
      *(_BYTE*)(v7 + 28) = 0;
    }
  }
  *(_BYTE*)(v3 + 176) = 3;
  v14 = v25_.v27;
  v15 = *(_DWORD*)(v7 + 656);
  *(_QWORD*)(v3 + 192) = v25_.v26;
  *(_QWORD*)(v3 + 200) = v14;
  v16 = *(unsigned int*)(v7 + 660);
  v17 = ((_BYTE)v16 + 1) & 0xF;
  if (v17 == v15) {
    nn_diag_detail_AbortImpl_plt_856170(result);
  }
  *(_DWORD*)(v7 + 660) = v17;
  *(_DWORD*)(v7 + 4 * v16 + 664) = a2;
  v18 = v25_.v27;
  *(_QWORD*)(v7 + 32) = v25_.v26;
  *(_QWORD*)(v7 + 40) = v18;
  ++*(_QWORD*)(v7 + 728);
  if (v4 != 0) {
    nn_os_SdkMutexType_Lock_plt(v4);
    *(_WORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    result = nn_os_SdkMutexType_Unlock_plt(v4);
  }
  if (v8 != 0) {
    *(_QWORD*)(v7 + 168) &= ~v8;
  }
  return result;
}

__int64 vi2_frontend_5e87d0(__int64 a1, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    unsigned __int64 v18;
    __int64 v19;
  } v12_;

  v12_.v18 = 0;
  v12_.v19 = 0;
  v12_.v16 = 0;
  v12_.v17 = 0;
  v12_.v14 = 0;
  v12_.v15 = 0;
  v12_.v12 = 0;
  v12_.v13 = 0;
  SdkRoutine_5e7c50((void*)(&v12_.v12), a1);
  v12_.v13 |= 1uLL;
  if (a3 != 0) {
    if (*(_BYTE*)(a1 + 118) == 1) {
      result = (*(__int64 (**)(_QWORD))(***(_QWORD***)(a1 + 16) + 464LL))(
          *(_QWORD*)(***(_QWORD***)(a1 + 16) + 24LL));
      if ((_DWORD)result != 0) {
        return result;
      }
      *(_BYTE*)(a1 + 118) = 0;
    }
    v12_.v18 = v12_.v18 & 0xFFFFFFFFFFFFFFF0LL |
               ((unsigned __int8)*(_DWORD*)(a3 + 4) + 1) & 0xF;
  }
  if (*(_BYTE*)(a1 + 136) != 1) {
  LABEL_13:
    v8 = v12_.v17;
    a2[4] = v12_.v16;
    a2[5] = v8;
    v9 = v12_.v19;
    a2[6] = v12_.v18;
    a2[7] = v9;
    v10 = v12_.v13;
    *a2 = v12_.v12;
    a2[1] = v10;
    v11 = v12_.v15;
    a2[2] = v12_.v14;
    a2[3] = v11;
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(a1 + 140) == 1) {
    result =
        (*(__int64 (**)(_QWORD, float, float, float))(**(_QWORD**)v7 + 472LL))(
            *(_QWORD*)(**(_QWORD**)v7 + 24LL), *(float*)(a1 + 144),
            *(float*)(a1 + 148), *(float*)(a1 + 152));
    if ((_DWORD)result == 0) {
      goto LABEL_12;
    }
  }
  else {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)v7 + 480LL))(
        *(_QWORD*)(**(_QWORD**)v7 + 24LL));
    if ((_DWORD)result == 0) {
    LABEL_12:
      *(_BYTE*)(a1 + 136) = 0;
      goto LABEL_13;
    }
  }
  return result;
}

__int64 vi2_frontend_5e8920(unsigned int* a1, unsigned int* a2, _QWORD* a3,
                            __int64 a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 i;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  __int64 result;
  unsigned int v22;
  unsigned int v23;

  v4 = a3[14];
  if (v4 == 0) {
    return 6258;
  }
  v5 = a3 + 15;
  for (i = 0; i != v4; ++i) {
    v9 = *((_DWORD*)v5 + i);
    if (v9 != -1) {
      v10 = *((_DWORD*)v5 + i);
      while (1) {
        v11 = __clz(__rbit32(~v9));
        v12 = 1 << v11;
        atomic_compare_exchange_strong_explicit(
            (atomic_uint* volatile)((char*)v5 + 4 * i), (unsigned int*)&v10,
            (1 << v11) | v9, memory_order_acquire, memory_order_acquire);
        if (v10 == v9) {
          break;
        }
        v9 = v10;
        if (v10 == -1) {
          goto LABEL_3;
        }
      }
      v13 = v11 | (32 * i);
      nn_vi2_5e5e40((__int64)a3, v13);
      v15 = a3[14];
      if (v15 != 0) {
        v16 = 0;
        while (1) {
          v17 = *((_DWORD*)v5 + v16);
          if (v17 != -1) {
            break;
          }
        LABEL_11:
          if (++v16 == v15) {
            goto LABEL_20;
          }
        }
        v18 = *((_DWORD*)v5 + v16);
        while (1) {
          v19 = __clz(__rbit32(~v17));
          v20 = 1 << v19;
          atomic_compare_exchange_strong_explicit(
              (atomic_uint* volatile)((char*)v5 + 4 * v16), (unsigned int*)&v18,
              (1 << v19) | v17, memory_order_acquire, memory_order_acquire);
          if (v18 == v17) {
            break;
          }
          v17 = v18;
          if (v18 == -1) {
            goto LABEL_11;
          }
        }
        v22 = v19 | (32 * v16);
        nn_vi2_5e5e40((__int64)a3, v22);
        result = (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD))(
            *a3 + 256LL))(*(_QWORD*)(*a3 + 24LL), a4, v13, v22);
        if ((_DWORD)result == 0) {
          *a1 = v13;
          *a2 = v22;
          return result;
        }
        v23 = result;
        nn_vi2_5e66a0((__int64)(a3 + 33), v22);
        atomic_fetch_and_explicit(
            (atomic_uint* volatile)((char*)v5 + 4 * (v16 & 0x7FFFFFF)), ~v20,
            memory_order_release);
      }
      else {
      LABEL_20:
        v23 = 6258;
      }
      nn_vi2_5e66a0((__int64)(a3 + 33), v13);
      atomic_fetch_and_explicit(
          (atomic_uint* volatile)((char*)v5 + 4 * (i & 0x7FFFFFF)), ~v12,
          memory_order_release);
      return v23;
    }
  LABEL_3:;
  }
  return 6258;
}

__int64 vi2_frontend_5e8af0(_QWORD* a1, __int64 a2, unsigned int a3,
                            unsigned int a4)
{
  __int64 v7;
  __int64 result;
  void (*v9)(__int64*, __int64);
  __int64 v10;

  (*(void (**)(_QWORD))(*a1 + 264LL))(*(_QWORD*)(*a1 + 24LL));
  nn_os_SdkMutexType_Lock_plt(a1 + 80);
  v7 = a1[81];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 72), 1u,
                              memory_order_relaxed);
    nn_os_SdkMutexType_Unlock_plt(a1 + 80);
    nn_vi2_5e6950((__int64)(a1 + 31), v7, a3);
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 72),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v9 = *(void (**)(__int64*, __int64))(v7 + 56);
      v10 = *(_QWORD*)(v7 + 64);
      v9(&v10, v7);
    }
  }
  else {
    nn_os_SdkMutexType_Unlock_plt(a1 + 80);
    nn_vi2_5e6950((__int64)(a1 + 31), 0, a3);
  }
  nn_vi2_5e66a0((__int64)(a1 + 33), a3);
  atomic_fetch_and_explicit(
      (atomic_uint* volatile)((char*)a1 + 4 * (a3 >> 5) + 120), ~(1 << a3),
      memory_order_release);
  result = nn_vi2_5e66a0((__int64)(a1 + 33), a4);
  atomic_fetch_and_explicit(
      (atomic_uint* volatile)((char*)a1 + 4 * (a4 >> 5) + 120), ~(1 << a4),
      memory_order_release);
  return result;
}

__int64 vi2_frontend_5e8c00(unsigned __int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;

  nn_os_SdkMutexType_Lock_plt(a1);
  v4 = 0;
  atomic_compare_exchange_strong_explicit(
      (atomic_ullong* volatile)(a2 + 16), (unsigned __int64*)&v4, a1,
      memory_order_acquire, memory_order_acquire);
  if (v4 != 0) {
    v6 = 626;
    goto LABEL_5;
  }
  v5 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 8) + 240LL))(
      *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), a2, *(_QWORD*)(a1 + 16));
  if (v5 == 0) {
    v9 = *(_QWORD*)(a2 + 24);
    v8 = (_QWORD*)(a2 + 24);
    *v8 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(v9 + 8) = a1 + 32;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) = v8;
    *(_QWORD*)(a1 + 32) = v9;
    v10 = *(_QWORD*)(a1 + 40);
    if (v10 == a1 + 32) {
      v12 = (_QWORD*)(a1 + 48);
      if (*(_QWORD*)(a1 + 48) != 0) {
        (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 208LL))(
            *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), *(_QWORD*)(a1 + 16),
            *(_QWORD*)(a1 + 24));
        v11 = 0;
        goto LABEL_11;
      }
    }
    else {
      v11 = v10 - 24;
      v12 = (_QWORD*)(a1 + 48);
      if (v10 - 24 != *(_QWORD*)(a1 + 48)) {
        (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) +
                                                       200LL))(
            *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), *(_QWORD*)(a1 + 16),
            *(_QWORD*)(a1 + 24), v11);
      LABEL_11:
        v6 = 0;
        *v12 = v11;
        goto LABEL_5;
      }
    }
    v6 = 0;
    goto LABEL_5;
  }
  v6 = v5;
  atomic_store(0, (unsigned __int64*)(a2 + 16));
LABEL_5:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v6;
}

__int64 vi2_frontend_5e8d20(__int64 a1, unsigned __int64* a2)
{
  unsigned __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  nn_os_SdkMutexType_Lock_plt(a1);
  if (a1 != a2[2]) {
    return nn_os_SdkMutexType_Unlock_plt(a1);
  }
  if (a2 + 3 != (unsigned __int64*)(a1 + 32)) {
    v4 = (unsigned __int64*)a2[4];
    v5 = *v4;
    *(_QWORD*)(a2[3] + 8) = v4;
    *v4 = a2[3];
    *(_QWORD*)(v5 + 8) = a2 + 3;
    a2[3] = v5;
  }
  (*(void (**)(_QWORD, unsigned __int64*))(**(_QWORD**)(a1 + 8) + 248LL))(
      *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), a2);
  atomic_store(0, a2 + 2);
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 == a1 + 32) {
    v8 = (_QWORD*)(a1 + 48);
    if (*(_QWORD*)(a1 + 48) != 0) {
      (*(void (**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 208LL))(
          *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), *(_QWORD*)(a1 + 16),
          *(_QWORD*)(a1 + 24));
      v7 = 0;
      goto LABEL_11;
    }
  }
  else {
    v7 = v6 - 24;
    v8 = (_QWORD*)(a1 + 48);
    if (v6 - 24 != *(_QWORD*)(a1 + 48)) {
      (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) +
                                                     200LL))(
          *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL), *(_QWORD*)(a1 + 16),
          *(_QWORD*)(a1 + 24), v7);
    LABEL_11:
      *v8 = v7;
      return nn_os_SdkMutexType_Unlock_plt(a1);
    }
  }
  return nn_os_SdkMutexType_Unlock_plt(a1);
}

__int64 vi2_frontend_5e8e40(_QWORD* a1, __int64 a2, __int64 a3,
                            unsigned __int64 a4)
{
  __int64 v5;
  __int64 result;

  v5 = *(_QWORD*)(a2 + 16);
  if (v5 != 0) {
    vi2_frontend_5e8d20(v5, (unsigned __int64*)a2);
  }
  *(_QWORD*)(a2 + 840) = 0;
  *(_QWORD*)(a2 + 784) = 0;
  *(_QWORD*)(a2 + 792) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 56) = 0;
  *(_DWORD*)(a2 + 64) = 0;
  *(_QWORD*)(a2 + 88) = 0;
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 112) = 0;
  *(_QWORD*)(a2 + 120) = 0;
  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  *(_QWORD*)(a2 + 144) = 0;
  *(_BYTE*)(a2 + 68) = 0;
  memset_plt((void*)(a2 + 200), nullptr, 576, a4);
  result = vi2_frontend_5e8af0(a1, a2, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12));
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  return result;
}

__int64 vi2_frontend_5e9100(__int64 a1, _DWORD* a2, _QWORD* a3, __int64 a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];
  __int64 v14;

  if (*(_DWORD*)(a4 + 64) != 0) {
    return 5234;
  }
  v14 = 0;
  result = vi2_frontend_5e7d80(a4 + 40, &v14, a1, 1);
  if ((_DWORD)result == 0) {
    v8 = *(unsigned int*)(a4 + 696);
    if ((_DWORD)v8 == *(_DWORD*)(a4 + 700)) {
      *(_QWORD*)(a4 + 208) &= ~v14;
      return 3698;
    }
    else {
      v9 = *(unsigned int*)(a4 + 4 * v8 + 704);
      *(_DWORD*)(a4 + 696) = ((_BYTE)v8 + 1) & 0xF;
      v10 = a4 + 32 * v9;
      v11 = *(_QWORD*)(v10 + 240);
      v13[0] = *(_QWORD*)(v10 + 232);
      v13[1] = v11;
      *(_BYTE*)(v10 + 216) = 2;
      *(_QWORD*)(v10 + 224) = v14;
      *a2 = v9;
      *a3 = nn_syncpt_sdk_MakeNativeSyncHandleFromSyncPointHandle_plt(v13);
      a3[1] = v12;
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
