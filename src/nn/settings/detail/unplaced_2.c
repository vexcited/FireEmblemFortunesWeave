#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_QueryPointerBufferSize_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nn_settings_detail_1df220(__int64 a1, _QWORD* a2, __int64 a3,
                                  __int64* a4);
__int64 nn_settings_detail_4bf6c0(__int64 a1, __int64 a2, int a3);
__int64 nn_settings_detail_5c3520(__int64 a1, _DWORD* a2, __int64* a3);

__int64 nn_settings_detail_1df220(__int64 a1, _QWORD* a2, __int64 a3,
                                  __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  int v29;

  v6 = a4[1];
  v7 = a1 + 8;
  v8 = *a4;
  v9 = *(unsigned int*)(v7 + 4);
  v10 = v6;
  v11 = v8;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v7);
  LODWORD(v19_.v22) = 983040;
  v19_.v19 = 0x100000000000001LL;
  v19_.v20 = 10;
  v19_.v21 = 0x500020000000000LL;
  v25_.v25 = &v19_.v19;
  v25_.v26 = v14;
  *(_QWORD*)v14 = 0xA01000006LL;
  v24[0] = v11;
  v24[1] = v10;
  v29 = 6;
  v15 = nn_sf_hipc_detail_SetBuffers(&v25_.v25, 1, (__int64)v24, (__int64)&v29,
                                     0, 40);
  if ((_DWORD)v15 != 0 ||
      (v16 = ((unsigned __int64)&v25_
                  .v26[*((unsigned __int8*)v25_.v25 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v16 = 0x149434653LL, *(_QWORD*)(v16 + 8) = 1,
       *(_QWORD*)(v16 + 16) = a3,
       *(_DWORD*)(v16 + 12) = nn_sf_cmif_GetInlineContext_plt(v15),
       LODWORD(v15) = nn_sf_hipc_SendSyncRequest_plt(v9, v14, 256),
       (_DWORD)v15 != 0)) {
    LODWORD(v17) = v15;
  }
  else {
    v19_.v22 = 0;
    v19_.v23 = 0;
    v19_.v20 = 0;
    v19_.v21 = 0;
    v19_.v19 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v19_.v19, v14);
    if (*(_DWORD*)((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v17 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
      else {
        *a2 = *(__int64*)((char*)((__int64*)0xCLL) +
                          ((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  return (unsigned int)v17;
}

__int64 nn_settings_detail_4bf6c0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int* v9;
  unsigned __int64 v10;
  int v11;
  int* v12;
  _DWORD* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v23[4];
    __int64 v24;
  } v23_;

  v5 = a1 + 8;
  v6 = *(unsigned int*)(v5 + 4);
  v9 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v5);
  *(_QWORD*)v9 = 0x900000006LL;
  v10 = ((unsigned __int64)v9 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v10 + 16) = a3;
  *(_QWORD*)v10 = 0x149434653LL;
  *(_QWORD*)(v10 + 8) = 14;
  *(_DWORD*)(v10 + 12) = nn_sf_cmif_GetInlineContext_plt(v9);
  v11 = nn_sf_hipc_SendSyncRequest_plt(v6, v9, 256);
  if (v11 != 0) {
    LODWORD(v15) = v11;
  }
  else {
    v23_.v24 = 0;
    memset(v23_.v23, 0, sizeof(v23_.v23));
    nn_sf_hipc_detail_b8c00((__int64)v23_.v23, v9);
    v12 = (int*)((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
                 0xFFFFFFFFFFFFFFF0LL);
    v14 = *v12;
    v13 = v12 + 4;
    if (v14 == 1329808979) {
      v15 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
      else {
        v16 = *(_QWORD*)v13;
        v17 = *((_QWORD*)v13 + 1);
        v18 = *((_QWORD*)v13 + 3);
        *(_QWORD*)(a2 + 16) = *((_QWORD*)v13 + 2);
        *(_QWORD*)(a2 + 24) = v18;
        *(_QWORD*)a2 = v16;
        *(_QWORD*)(a2 + 8) = v17;
        v19 = *((_QWORD*)v13 + 4);
        v20 = *((_QWORD*)v13 + 5);
        v21 = *((_QWORD*)v13 + 6);
        *(_WORD*)(a2 + 56) = *((_WORD*)v13 + 28);
        *(_QWORD*)(a2 + 40) = v20;
        *(_QWORD*)(a2 + 48) = v21;
        *(_QWORD*)(a2 + 32) = v19;
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  return (unsigned int)v15;
}

__int64 nn_settings_detail_5c3520(__int64 a1, _DWORD* a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  unsigned __int8 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v21_;
  _QWORD v26[2];
  struct {
    __int64* v27;
    unsigned int* v28;
  } v27_;
  int v31;

  v5 = a3[1];
  v6 = a1 + 8;
  v7 = *a3;
  v8 = 8 * v5;
  v9 = v7;
  v11 = v6;
  v12 = atomic_load((unsigned __int8*)(v6 + 1));
  if ((v12 & 1) == 0) {
    v13 = *(unsigned int*)(v6 + 4);
    LOWORD(v27_.v27) = 0;
    v6 = nn_sf_hipc_client_QueryPointerBufferSize_plt(&v27_.v27, v13);
    LODWORD(v21_.v21) = v6;
    if ((_DWORD)v6 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v21_.v21);
    }
    atomic_store((unsigned __int16)v27_.v27, (unsigned __int16*)(v11 + 2));
    atomic_store(1u, (unsigned __int8*)(v11 + 1));
  }
  v14 = atomic_load((unsigned __int16*)(v11 + 2));
  v15 = *(unsigned int*)(v11 + 4);
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v6);
  LODWORD(v21_.v24) = 851979;
  v21_.v22 = 3081;
  v21_.v23 = 0x200000000000000LL;
  v21_.v21 = 1;
  v27_.v27 = &v21_.v21;
  v27_.v28 = v16;
  *(_QWORD*)v16 = 0xC0900000006LL;
  v26[0] = v9;
  v26[1] = v8;
  v31 = 10;
  v17 = nn_sf_hipc_detail_SetBuffers(&v27_.v27, 1, (__int64)v26, (__int64)&v31,
                                     v14, 32);
  if ((_DWORD)v17 != 0 ||
      (v18 = ((unsigned __int64)&v27_
                  .v28[*((unsigned __int8*)v27_.v27 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v18 = 0x149434653LL, *(_QWORD*)(v18 + 8) = 1,
       *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v17),
       LODWORD(v17) = nn_sf_hipc_SendSyncRequest_plt(v15, v16, 256),
       (_DWORD)v17 != 0)) {
    LODWORD(v19) = v17;
  }
  else {
    v21_.v24 = 0;
    v21_.v25 = 0;
    v21_.v22 = 0;
    v21_.v23 = 0;
    v21_.v21 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v21_.v21, v16);
    if (*(_DWORD*)((v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v19 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v19 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v19);
      }
      else {
        *a2 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                         ((v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                          0xFFFFFFFFFFFFFFF0LL) +
                         4);
      }
    }
    else {
      LODWORD(v19) = 108554;
    }
  }
  return (unsigned int)v19;
}

#pragma GCC visibility pop
