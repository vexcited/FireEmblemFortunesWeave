#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_ssl_detail_3297f0(__int64 a1, _DWORD* a2, __int64 a3, int a4);
__int64 nn_ssl_detail_5cc2e0(__int64 a1, int a2, _DWORD* a3);

__int64 nn_ssl_detail_3297f0(__int64 a1, _DWORD* a2, __int64 a3, int a4)
{
  __int64 v6;
  unsigned __int16* v7;
  int v8;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    char gap200_[4];
    int v26;
  } v21_;
  _QWORD v27[2];
  struct {
    __int64* v28;
    unsigned int* v29;
  } v28_;

  v6 = a1 + 8;
  {
    v8 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v7 = *(unsigned __int16**)(v6 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v12 = (**(__int64 (***)(unsigned __int16*))v7)(v7);
  {
    v13 = v7[4];
    __asm__ volatile("" ::"r"(v13));
  }
  LODWORD(v14) = v12;
  v15 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  LODWORD(v21_.v24) = 1114112;
  v21_.v21 = 0x1000000000001LL;
  v21_.v22 = 13;
  v21_.v23 = 0x400000002000000LL;
  v28_.v28 = &v21_.v21;
  v28_.v29 = v15;
  *(_QWORD*)v15 = 0xD00010006LL;
  v27[0] = a3;
  v27[1] = 288;
  v21_.v26 = 25;
  v16 = nn_sf_hipc_detail_SetBuffers(&v28_.v28, 1, (__int64)v27,
                                     (__int64)&v21_.v26, v13, 52);
  if ((_DWORD)v16 != 0) {
    LODWORD(v19) = v16;
    v14 = (unsigned int)v14;
  }
  else {
    {
      v17 =
          ((unsigned __int64)&v28_.v29[*((unsigned __int8*)v28_.v28 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v17));
    }
    *(_DWORD*)(v17 + 32) = a4;
    *(_QWORD*)(v17 + 8) = 0;
    *(_DWORD*)v17 = 1310721;
    *(_DWORD*)(v17 + 4) = v8;
    *(_QWORD*)(v17 + 16) = 0x149434653LL;
    *(_QWORD*)(v17 + 24) = 2;
    *(_DWORD*)(v17 + 12) = nn_sf_cmif_GetInlineContext_plt(v16);
    v14 = (unsigned int)v14;
    v18 = nn_sf_hipc_SendSyncRequest_plt(v14, (__int64)v15, 256);
    if (v18 != 0) {
      LODWORD(v19) = v18;
    }
    else {
      v21_.v24 = 0;
      v21_.v25 = 0;
      v21_.v22 = 0;
      v21_.v23 = 0;
      v21_.v21 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v21_.v21, v15);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v19 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v19));
        }
        if ((_DWORD)v19 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v19);
        }
        else {
          *(_DWORD*)a2 = *(_DWORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v21_.v21 + 4LL * BYTE1(v21_.v25) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
        }
      }
      else {
        LODWORD(v19) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v7 + 8LL))(v7, v14);
  return (unsigned int)v19;
}

__int64 nn_ssl_detail_5cc2e0(__int64 a1, int a2, _DWORD* a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    __int64 v18;
  } v17_;

  v5 = a1 + 8;
  {
    v7 = *(_DWORD*)(v5 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v6 = *(_QWORD*)(v5 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  v10 = (**(__int64 (***)(__int64))v6)(v6);
  v11 = v10;
  v12 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v10);
  *(_QWORD*)v12 = 0xD00000006LL;
  v13 = ((unsigned __int64)v12 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v13 + 32) = a2;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)v13 = 1310721;
  *(_DWORD*)(v13 + 4) = v7;
  *(_QWORD*)(v13 + 16) = 0x149434653LL;
  *(_QWORD*)(v13 + 24) = 0;
  *(_DWORD*)(v13 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v14 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v14 != 0) {
    LODWORD(v15) = v14;
  }
  else {
    v17_.v18 = 0;
    memset(v17_.v17, 0, sizeof(v17_.v17));
    nn_sf_hipc_detail_b8c00((__int64)v17_.v17, v12);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v15 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v15));
      }
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
      else {
        *(_DWORD*)a3 = *(_DWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 8LL))(v6, v11);
  return (unsigned int)v15;
}

#pragma GCC visibility pop
