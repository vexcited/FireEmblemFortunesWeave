#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_b8c00(__int64, unsigned int*);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 cmif_client_message_6f7760(__int64 a1, _BYTE* a2, __int64 a3,
                                   unsigned int a4);
__int64 cmif_client_message_6f7870(__int64 a1, __int64 a2, unsigned int a3);
__int64 cmif_client_message_6f7970(__int64 a1, char a2, __int64 a3,
                                   unsigned int a4);
__int64 cmif_client_message_6f7a80(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, unsigned int a5);
__int64 cmif_client_message_6f7bf0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, unsigned int a5);

__int64 cmif_client_message_6f7760(__int64 a1, _BYTE* a2, __int64 a3,
                                   unsigned int a4)
{
  __int64 v4;
  unsigned int* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    __int64 v14;
  } v13_;

  v4 = *(unsigned int*)(a1 + 4);
  v8 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  *(_QWORD*)v8 = 0xA00000006LL;
  v9 = ((unsigned __int64)v8 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v9 + 16) = a3;
  *(_QWORD*)v9 = 0x149434653LL;
  *(_QWORD*)(v9 + 8) = a4;
  *(_WORD*)(v9 + 20) = WORD2(a3);
  *(_DWORD*)(v9 + 12) = nn_sf_cmif_GetInlineContext_plt(v8);
  v10 = nn_sf_hipc_SendSyncRequest_plt(v4, v8, 256);
  if (v10 != 0) {
    LODWORD(v11) = v10;
  }
  else {
    v13_.v14 = 0;
    memset(v13_.v13, 0, sizeof(v13_.v13));
    SdkRoutine_b8c00((__int64)v13_.v13, v8);
    if (*(_DWORD*)((v13_.v13[0] + 4LL * BYTE1(v13_.v14) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v11 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v13_.v13[0] + 4LL * BYTE1(v13_.v14) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v11 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v11);
      }
      else {
        *a2 = *((_BYTE*)((__int64*)0xCLL) +
                ((v13_.v13[0] + 4LL * BYTE1(v13_.v14) + 15) &
                 0xFFFFFFFFFFFFFFF0LL) +
                4);
      }
    }
    else {
      LODWORD(v11) = 108554;
    }
  }
  return (unsigned int)v11;
}

__int64 cmif_client_message_6f7870(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  unsigned int* v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  struct {
    _QWORD v11[4];
    __int64 v12;
  } v11_;

  v3 = *(unsigned int*)(a1 + 4);
  v6 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  *(_QWORD*)v6 = 0xA00000006LL;
  v7 = ((unsigned __int64)v6 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v7 + 16) = a2;
  *(_QWORD*)v7 = 0x149434653LL;
  *(_QWORD*)(v7 + 8) = a3;
  *(_WORD*)(v7 + 20) = WORD2(a2);
  *(_DWORD*)(v7 + 12) = nn_sf_cmif_GetInlineContext_plt(v6);
  v8 = nn_sf_hipc_SendSyncRequest_plt(v3, v6, 256);
  if (v8 != 0) {
    LODWORD(v9) = v8;
  }
  else {
    v11_.v12 = 0;
    memset(v11_.v11, 0, sizeof(v11_.v11));
    SdkRoutine_b8c00((__int64)v11_.v11, v6);
    if (*(_DWORD*)((v11_.v11[0] + 4LL * BYTE1(v11_.v12) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v9 = *(__int64*)((char*)((__int64*)0x4LL) +
                       ((v11_.v11[0] + 4LL * BYTE1(v11_.v12) + 15) &
                        0xFFFFFFFFFFFFFFF0LL) +
                       4);
      if ((_DWORD)v9 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v9);
      }
    }
    else {
      LODWORD(v9) = 108554;
    }
  }
  return (unsigned int)v9;
}

__int64 cmif_client_message_6f7970(__int64 a1, char a2, __int64 a3,
                                   unsigned int a4)
{
  __int64 v4;
  unsigned int* v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    __int64 v14;
  } v13_;

  v4 = *(unsigned int*)(a1 + 4);
  v8 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  *(_QWORD*)v8 = 0xA00000006LL;
  v9 = ((unsigned __int64)v8 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE*)(v9 + 16) = a2;
  *(_DWORD*)(v9 + 17) = a3;
  *(_QWORD*)v9 = 0x149434653LL;
  *(_QWORD*)(v9 + 8) = a4;
  *(_WORD*)(v9 + 21) = WORD2(a3);
  *(_DWORD*)(v9 + 12) = nn_sf_cmif_GetInlineContext_plt(v8);
  v10 = nn_sf_hipc_SendSyncRequest_plt(v4, v8, 256);
  if (v10 != 0) {
    LODWORD(v11) = v10;
  }
  else {
    v13_.v14 = 0;
    memset(v13_.v13, 0, sizeof(v13_.v13));
    SdkRoutine_b8c00((__int64)v13_.v13, v8);
    if (*(_DWORD*)((v13_.v13[0] + 4LL * BYTE1(v13_.v14) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v11 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v13_.v13[0] + 4LL * BYTE1(v13_.v14) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v11 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v11);
      }
    }
    else {
      LODWORD(v11) = 108554;
    }
  }
  return (unsigned int)v11;
}

__int64 cmif_client_message_6f7a80(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, unsigned int a5)
{
  __int64 v5;
  unsigned int* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v15_;
  int v20;
  _QWORD v21[2];
  struct {
    __int64* v22;
    unsigned int* v23;
  } v22_;

  v5 = *(unsigned int*)(a1 + 4);
  v10 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v15_.v18) = 983040;
  v15_.v15 = 0x10000000000001LL;
  v15_.v16 = 10;
  v15_.v17 = 0x500000200000000LL;
  v22_.v22 = &v15_.v15;
  v22_.v23 = v10;
  *(_QWORD*)v10 = 0xA00100006LL;
  v21[0] = a2;
  v21[1] = a3;
  v20 = 21;
  v11 = nn_sf_hipc_detail_SetBuffers(&v22_.v22, 1, (__int64)v21, (__int64)&v20,
                                     0, 38);
  if ((_DWORD)v11 != 0 ||
      (v12 = ((unsigned __int64)&v22_
                  .v23[*((unsigned __int8*)v22_.v22 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v12 = 0x149434653LL, *(_QWORD*)(v12 + 8) = a5,
       *(_DWORD*)(v12 + 16) = a4, *(_WORD*)(v12 + 20) = WORD2(a4),
       *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt(v11),
       LODWORD(v11) = nn_sf_hipc_SendSyncRequest_plt(v5, v10, 256),
       (_DWORD)v11 != 0)) {
    LODWORD(v13) = v11;
  }
  else {
    v15_.v18 = 0;
    v15_.v19 = 0;
    v15_.v16 = 0;
    v15_.v17 = 0;
    v15_.v15 = 0;
    SdkRoutine_b8c00((__int64)&v15_.v15, v10);
    if (*(_DWORD*)((v15_.v15 + 4LL * BYTE1(v15_.v19) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v13 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v15_.v15 + 4LL * BYTE1(v15_.v19) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v13 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v13);
      }
    }
    else {
      LODWORD(v13) = 108554;
    }
  }
  return (unsigned int)v13;
}

__int64 cmif_client_message_6f7bf0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, unsigned int a5)
{
  __int64 v5;
  unsigned int* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v15_;
  int v20;
  _QWORD v21[2];
  struct {
    __int64* v22;
    unsigned int* v23;
  } v22_;

  v5 = *(unsigned int*)(a1 + 4);
  v10 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v15_.v18) = 983040;
  v15_.v15 = 0x100000000000001LL;
  v15_.v16 = 10;
  v15_.v17 = 0x500020000000000LL;
  v22_.v22 = &v15_.v15;
  v22_.v23 = v10;
  *(_QWORD*)v10 = 0xA01000006LL;
  v21[0] = a2;
  v21[1] = a3;
  v20 = 22;
  v11 = nn_sf_hipc_detail_SetBuffers(&v22_.v22, 1, (__int64)v21, (__int64)&v20,
                                     0, 38);
  if ((_DWORD)v11 != 0 ||
      (v12 = ((unsigned __int64)&v22_
                  .v23[*((unsigned __int8*)v22_.v22 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v12 = 0x149434653LL, *(_QWORD*)(v12 + 8) = a5,
       *(_DWORD*)(v12 + 16) = a4, *(_WORD*)(v12 + 20) = WORD2(a4),
       *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt(v11),
       LODWORD(v11) = nn_sf_hipc_SendSyncRequest_plt(v5, v10, 256),
       (_DWORD)v11 != 0)) {
    LODWORD(v13) = v11;
  }
  else {
    v15_.v18 = 0;
    v15_.v19 = 0;
    v15_.v16 = 0;
    v15_.v17 = 0;
    v15_.v15 = 0;
    SdkRoutine_b8c00((__int64)&v15_.v15, v10);
    if (*(_DWORD*)((v15_.v15 + 4LL * BYTE1(v15_.v19) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v13 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v15_.v15 + 4LL * BYTE1(v15_.v19) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v13 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v13);
      }
    }
    else {
      LODWORD(v13) = 108554;
    }
  }
  return (unsigned int)v13;
}

#pragma GCC visibility pop
