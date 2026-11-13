#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_ldn_detail_6b2190(__int64 a1, _QWORD* a2, _BYTE* a3);

__int64 nn_ldn_detail_6b2190(__int64 a1, _QWORD* a2, _BYTE* a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    __int64 v21;
  } v20_;

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
  *(_QWORD*)v12 = 0xC00000006LL;
  v13 = ((unsigned __int64)v12 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)v13 = 1048577;
  *(_DWORD*)(v13 + 4) = v7;
  *(_QWORD*)(v13 + 16) = 0x149434653LL;
  *(_QWORD*)(v13 + 24) = 13;
  *(_DWORD*)(v13 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v14 = v11;
  v15 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v15 != 0) {
    LODWORD(v17) = v15;
  }
  else {
    v20_.v21 = 0;
    memset(v20_.v20, 0, sizeof(v20_.v20));
    nn_sf_hipc_detail_b8c00((__int64)v20_.v20, v12);
    {
      v16 = (v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v16));
    }
    if (*(_DWORD*)((char*)((__int64*)0xCLL) + v16 + 4) == 1329808979) {
      {
        v17 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v17));
      }
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
      else {
        {
          v18 = *(__int64*)((char*)((__int64*)0x30LL) +
                            ((v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v18));
        }
        *a2 = *(__int64*)((char*)((__int64*)0x28LL) +
                          ((v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        a2[1] = v18;
        *a3 = *(_BYTE*)(v16 + 32);
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 8LL))(v6, v14);
  return (unsigned int)v17;
}

#pragma GCC visibility pop
