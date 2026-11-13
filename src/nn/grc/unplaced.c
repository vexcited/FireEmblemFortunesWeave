#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_grc_1da764(__int64 a1, __int64 a2);

__int64 nn_grc_1da764(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  unsigned int v9;
  unsigned int* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    __int64 v17;
  } v16_;

  v4 = a1 + 8;
  {
    v6 = *(_DWORD*)(v4 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v5 = *(_QWORD*)(v4 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  v8 = (**(__int64 (***)(__int64))v5)(v5);
  v9 = v8;
  v10 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  *(_QWORD*)v10 = 0x2C00000006LL;
  v11 = ((unsigned __int64)v10 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v11 + 16) = 0x149434653LL;
  *(_QWORD*)(v11 + 24) = 100;
  memset_plt(v11 + 32, 0, 0x80u);
  v12 = memcpy_plt(v11 + 32, a2, 0x80u);
  *(_QWORD*)(v11 + 8) = 0;
  *(_DWORD*)v11 = 9437185;
  *(_DWORD*)(v11 + 4) = v6;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt(v12);
  v13 = nn_sf_hipc_SendSyncRequest_plt(v9, (__int64)v10, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v16_.v17 = 0;
    memset(v16_.v16, 0, sizeof(v16_.v16));
    nn_sf_hipc_detail_b8c00((__int64)v16_.v16, v10);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v14 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v14));
      }
      if ((_DWORD)v14 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v14);
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 8LL))(v5, v9);
  return (unsigned int)v14;
}

#pragma GCC visibility pop
