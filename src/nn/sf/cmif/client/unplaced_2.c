#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_134260(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76d990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76dac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76dbf0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76de40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_76e030(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76e250(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76e380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76e940(_QWORD, _QWORD);
__int64 SdkRoutine_b8c00(__int64, unsigned int*);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_QueryPointerBufferSize_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
extern _UNKNOWN SdkData_10567d8;
extern __int64 (*SdkData_e7d9b8)();
extern __int64 (*nn_aoc_detail_AddProxyReference_ptr[])();
extern __int64 nn_streamplay_detail_g_UserServiceProxyHeap;
__int64 nn_sf_cmif_client_5c2580(__int64 a1, __int64 a2, __int64 a3,
                                 __int64* a4);
__int64 nn_sf_cmif_client_6f1480(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int16 a7,
                                 unsigned int a8);
__int64 nn_sf_cmif_client_6fa2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 unsigned int a5);
_QWORD* nn_sf_cmif_client_76d580(_QWORD* result);
__int64 nn_sf_cmif_client_76d630(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 unsigned __int8 a4, unsigned int a5);
__int64 nn_sf_cmif_client_76d650(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 unsigned __int8 a4, unsigned int a5);
__int64 nn_sf_cmif_client_76d680(__int64 a1, __int64 a2, unsigned __int8 a3);
__int64 nn_sf_cmif_client_76d6f0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 _QWORD* a4, unsigned int a5);
__int64 nn_sf_cmif_client_76d720(__int64 a1, __int64 a2, unsigned __int8 a3);
__int64 nn_sf_cmif_client_76d730(__int64 a1, __int64 a2, unsigned __int8 a3);
__int64 nn_sf_cmif_client_76d740(__int64 a1, unsigned __int8 a2);
__int64 nn_sf_cmif_client_76d870(__int64 a1, __int64 a2, unsigned __int8 a3);
__int64 nn_sf_cmif_client_76d880(__int64 a1, __int64 a2, _QWORD* a3,
                                 unsigned __int8 a4);
__int64 nn_sf_cmif_client_76d910(__int64 a1, unsigned int a2);
__int64 nn_sf_cmif_client_76d950(__int64 a1, unsigned __int8 a2);

__int64 nn_sf_cmif_client_5c2580(__int64 a1, __int64 a2, __int64 a3,
                                 __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  unsigned __int8 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    int v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v25_;
  struct {
    _QWORD* v31;
    unsigned int* v32;
  } v31_;
  struct {
    _QWORD v33[3];
    int v34;
  } v33_;

  v6 = *a4;
  v7 = a4[1];
  v8 = a1 + 8;
  v9 = v7;
  v10 = v6;
  v13 = v8;
  v14 = atomic_load((unsigned __int8*)(v8 + 1));
  if ((v14 & 1) == 0) {
    v15 = *(unsigned int*)(v8 + 4);
    LOWORD(v33_.v33[0]) = 0;
    v8 = nn_sf_hipc_client_QueryPointerBufferSize_plt(v33_.v33, v15);
    LODWORD(v25_.v25) = v8;
    if ((_DWORD)v8 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
    }
    atomic_store(v33_.v33[0], (unsigned __int16*)(v13 + 2));
    atomic_store(1u, (unsigned __int8*)(v13 + 1));
  }
  v16 = atomic_load((unsigned __int16*)(v13 + 2));
  v17 = *(unsigned int*)(v13 + 4);
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  v33_.v34 = 1114112;
  v31_.v31 = v33_.v33;
  v31_.v32 = v18;
  v33_.v33[0] = 0x12000000000001LL;
  v33_.v33[1] = 8;
  v33_.v33[2] = 0x900000602000000LL;
  *(_QWORD*)v18 = 0x800120006LL;
  v25_.v25 = a2;
  v25_.v26 = 72;
  v25_.v27 = a3;
  v25_.v28 = 72;
  v25_.v29 = v10;
  v25_.v30 = v9;
  v23_.v23 = 0x1900000019LL;
  v23_.v24 = 5;
  v19 = nn_sf_hipc_detail_SetBuffers(&v31_.v31, 3, (__int64)&v25_.v25,
                                     (__int64)&v23_.v23, v16, 32);
  if ((_DWORD)v19 != 0 ||
      (v20 = ((unsigned __int64)&v31_
                  .v32[*((unsigned __int8*)v31_.v31 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v20 = 0x149434653LL, *(_QWORD*)(v20 + 8) = 2,
       *(_DWORD*)(v20 + 12) = nn_sf_cmif_GetInlineContext_plt(v19),
       LODWORD(v19) = nn_sf_hipc_SendSyncRequest_plt(v17, v18, 256),
       (_DWORD)v19 != 0)) {
    LODWORD(v21) = v19;
  }
  else {
    v25_.v28 = 0;
    v25_.v29 = 0;
    v25_.v26 = 0;
    v25_.v27 = 0;
    v25_.v25 = 0;
    SdkRoutine_b8c00((__int64)&v25_.v25, v18);
    if (*(_DWORD*)((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v21 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v21 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v21);
      }
    }
    else {
      LODWORD(v21) = 108554;
    }
  }
  return (unsigned int)v21;
}

__int64 nn_sf_cmif_client_6f1480(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int16 a7,
                                 unsigned int a8)
{
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v25_;
  __int64 v30;
  struct {
    _QWORD* v31;
    unsigned int* v32;
  } v31_;
  struct {
    _QWORD v33[3];
    int v34;
  } v33_;

  v15 = a1;
  v16 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v16 & 1) == 0) {
    v17 = *(unsigned int*)(a1 + 4);
    LOWORD(v33_.v33[0]) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(v33_.v33, v17);
    LODWORD(v25_.v25) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v25_.v25);
    }
    atomic_store(v33_.v33[0], (unsigned __int16*)(v15 + 2));
    atomic_store(1u, (unsigned __int8*)(v15 + 1));
  }
  v18 = atomic_load((unsigned __int16*)(v15 + 2));
  v19 = *(unsigned int*)(v15 + 4);
  v20 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v33_.v34 = 1179648;
  v33_.v33[0] = 0x2000000000001LL;
  v33_.v33[1] = 12;
  v33_.v33[2] = 0x600000002000000LL;
  v31_.v31 = v33_.v33;
  v31_.v32 = v20;
  *(_QWORD*)v20 = 0xC00020006LL;
  v25_.v25 = a3;
  v25_.v26 = a4;
  v25_.v27 = a5;
  v25_.v28 = a6;
  v30 = 0x900000009LL;
  v21 = nn_sf_hipc_detail_SetBuffers(&v31_.v31, 2, (__int64)&v25_.v25,
                                     (__int64)&v30, v18, 48);
  if ((_DWORD)v21 != 0) {
    goto LABEL_11;
  }
  v22 = ((unsigned __int64)&v31_.v32[*((unsigned __int8*)v31_.v31 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v22 = 0x149434653LL;
  *(_QWORD*)(v22 + 8) = a8;
  *(_QWORD*)(v22 + 16) = 0;
  *(_QWORD*)(v22 + 24) = a2;
  *(_WORD*)(v22 + 16) = a7;
  *(_DWORD*)(v22 + 12) = nn_sf_cmif_GetInlineContext_plt(v21);
  LODWORD(v21) = nn_sf_hipc_SendSyncRequest_plt(v19, v20, 256);
  if ((_DWORD)v21 != 0) {
  LABEL_11:
    LODWORD(v23) = v21;
  }
  else {
    v25_.v28 = 0;
    v25_.v29 = 0;
    v25_.v26 = 0;
    v25_.v27 = 0;
    v25_.v25 = 0;
    SdkRoutine_b8c00((__int64)&v25_.v25, v20);
    if (*(_DWORD*)((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v23 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v23 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v23);
      }
    }
    else {
      LODWORD(v23) = 108554;
    }
  }
  return (unsigned int)v23;
}

__int64 nn_sf_cmif_client_6fa2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 unsigned int a5)
{
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v19_;
  _QWORD v24[2];
  struct {
    __int64* v25;
    unsigned int* v26;
  } v25_;
  int v27;

  v9 = a1;
  v10 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v10 & 1) == 0) {
    v11 = *(unsigned int*)(a1 + 4);
    LOWORD(v25_.v25) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(&v25_.v25, v11);
    LODWORD(v19_.v19) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v19_.v19);
    }
    atomic_store((unsigned __int16)v25_.v25, (unsigned __int16*)(v9 + 2));
    atomic_store(1u, (unsigned __int8*)(v9 + 1));
  }
  v12 = atomic_load((unsigned __int16*)(v9 + 2));
  v13 = *(unsigned int*)(v9 + 4);
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v19_.v22) = 1114127;
  v19_.v19 = 0x100000000000001LL;
  v19_.v20 = 3082;
  v19_.v21 = 0x500020000000000LL;
  v25_.v25 = &v19_.v19;
  v25_.v26 = v14;
  *(_QWORD*)v14 = 0xC0A01000006LL;
  v24[0] = a2;
  v24[1] = a3;
  v27 = 50;
  v15 = nn_sf_hipc_detail_SetBuffers(&v25_.v25, 1, (__int64)v24, (__int64)&v27,
                                     v12, 40);
  if ((_DWORD)v15 != 0 ||
      (v16 = ((unsigned __int64)&v25_
                  .v26[*((unsigned __int8*)v25_.v25 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v16 = 0x149434653LL, *(_QWORD*)(v16 + 8) = a5,
       *(_QWORD*)(v16 + 16) = a4,
       *(_DWORD*)(v16 + 12) = nn_sf_cmif_GetInlineContext_plt(v15),
       LODWORD(v15) = nn_sf_hipc_SendSyncRequest_plt(v13, v14, 256),
       (_DWORD)v15 != 0)) {
    LODWORD(v17) = v15;
  }
  else {
    v19_.v22 = 0;
    v19_.v23 = 0;
    v19_.v20 = 0;
    v19_.v21 = 0;
    v19_.v19 = 0;
    SdkRoutine_b8c00((__int64)&v19_.v19, v14);
    if (*(_DWORD*)((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v17 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  return (unsigned int)v17;
}

_QWORD* nn_sf_cmif_client_76d580(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    nn_os_LockMutex_plt(&SdkData_10567d8);
    v2 = nn_lmem_AllocateFromExpHeap_plt_859a90(
        nn_streamplay_detail_g_UserServiceProxyHeap, 32);
    result = (_QWORD*)nn_os_UnlockMutex_plt(&SdkData_10567d8);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = nn_aoc_detail_AddProxyReference_ptr;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e7d9b8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 nn_sf_cmif_client_76d630(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 unsigned __int8 a4, unsigned int a5)
{
  return SdkRoutine_76d990(a1 + 8, a2, a3, a4, a5, 1);
}

__int64 nn_sf_cmif_client_76d650(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 unsigned __int8 a4, unsigned int a5)
{
  return SdkRoutine_76dac0(a1 + 8, a2, a3, a4, a5, 2);
}

__int64 nn_sf_cmif_client_76d680(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  return SdkRoutine_76dbf0(a1 + 8, a2, a3, 6);
}

__int64 nn_sf_cmif_client_76d6f0(__int64 a1, __int64 a2, unsigned __int8 a3,
                                 _QWORD* a4, unsigned int a5)
{
  return SdkRoutine_76de40(a1 + 8, a2, a3, *a4, a4[1], a5, 40);
}

__int64 nn_sf_cmif_client_76d720(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  return SdkRoutine_76e030(a1 + 8, a2, a3, 42);
}

__int64 nn_sf_cmif_client_76d730(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  return SdkRoutine_76e030(a1 + 8, a2, a3, 43);
}

__int64 nn_sf_cmif_client_76d740(__int64 a1, unsigned __int8 a2)
{
  return SdkRoutine_134260(a1 + 8, a2, 70);
}

__int64 nn_sf_cmif_client_76d870(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  return SdkRoutine_76e250(a1 + 8, a2, a3, 200);
}

__int64 nn_sf_cmif_client_76d880(__int64 a1, __int64 a2, _QWORD* a3,
                                 unsigned __int8 a4)
{
  return SdkRoutine_76e380(a1 + 8, a2, *a3, a3[1], a4, 201);
}

__int64 nn_sf_cmif_client_76d910(__int64 a1, unsigned int a2)
{
  return SdkRoutine_76e940(a1 + 8, a2);
}

__int64 nn_sf_cmif_client_76d950(__int64 a1, unsigned __int8 a2)
{
  return SdkRoutine_134260(a1 + 8, a2, 508);
}

#pragma GCC visibility pop
