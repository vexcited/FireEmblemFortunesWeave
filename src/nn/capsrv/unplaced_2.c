#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nn_capsrv_2c8278(__int64 a1, _QWORD* a2, __int64 a3);

__int64 nn_capsrv_2c8278(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int* v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    __int64 v15;
  } v14_;

  v5 = a1 + 8;
  v6 = *(unsigned int*)(v5 + 4);
  v9 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v5);
  *(_QWORD*)v9 = 0xA00000006LL;
  v10 = ((unsigned __int64)v9 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v10 + 16) = a3;
  *(_QWORD*)v10 = 0x149434653LL;
  *(_QWORD*)(v10 + 8) = 2003;
  *(_DWORD*)(v10 + 12) = nn_sf_cmif_GetInlineContext_plt(v9);
  v11 = nn_sf_hipc_SendSyncRequest_plt(v6, v9, 256);
  if (v11 != 0) {
    LODWORD(v12) = v11;
  }
  else {
    v14_.v15 = 0;
    memset(v14_.v14, 0, sizeof(v14_.v14));
    nn_sf_hipc_detail_b8c00((__int64)v14_.v14, v9);
    if (*(_DWORD*)((v14_.v14[0] + 4LL * BYTE1(v14_.v15) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v12 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v14_.v14[0] + 4LL * BYTE1(v14_.v15) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v12 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v12);
      }
      else {
        *a2 = *(__int64*)((char*)((__int64*)0xCLL) +
                          ((v14_.v14[0] + 4LL * BYTE1(v14_.v15) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v12) = 108554;
    }
  }
  return (unsigned int)v12;
}

#pragma GCC visibility pop
