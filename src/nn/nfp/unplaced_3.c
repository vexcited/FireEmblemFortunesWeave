#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_nfp_584130(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5);

__int64 nn_nfp_584130(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  __int64 v5;
  int v6;
  __int64 v11;
  unsigned int v12;
  unsigned int* v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    __int64 v19;
  } v18_;

  {
    v6 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v5 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  v11 = (**(__int64 (***)(__int64))v5)(v5);
  v12 = v11;
  v13 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v11);
  *(_QWORD*)v13 = 0x1000000006LL;
  v14 = ((unsigned __int64)v13 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v14 + 24) = a5;
  *(_QWORD*)(v14 + 32) = a2;
  *(_DWORD*)(v14 + 40) = a3;
  *(_DWORD*)(v14 + 44) = a4;
  *(_DWORD*)v14 = 2097153;
  *(_DWORD*)(v14 + 4) = v6;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0x149434653LL;
  *(_DWORD*)(v14 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v13);
  v15 = nn_sf_hipc_SendSyncRequest_plt(v12, (__int64)v13, 256);
  if (v15 != 0) {
    LODWORD(v16) = v15;
  }
  else {
    v18_.v19 = 0;
    memset(v18_.v18, 0, sizeof(v18_.v18));
    nn_sf_hipc_detail_b8c00((__int64)v18_.v18, v13);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v18_.v18[0] + 4LL * BYTE1(v18_.v19) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v16 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v18_.v18[0] + 4LL * BYTE1(v18_.v19) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v16));
      }
      if ((_DWORD)v16 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v16);
      }
    }
    else {
      LODWORD(v16) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 8LL))(v5, v12);
  return (unsigned int)v16;
}

#pragma GCC visibility pop
