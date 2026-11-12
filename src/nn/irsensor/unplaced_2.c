#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nn_irsensor_743330(__int64 a1, __int64 a2, int a3, __int64* a4);

__int64 nn_irsensor_743330(__int64 a1, __int64 a2, int a3, __int64* a4)
{
  __int64 v6;
  __int64 v7;
  unsigned int* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

  v6 = a1 + 8;
  v7 = *(unsigned int*)(v6 + 4);
  v11 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v6);
  *(_QWORD*)v11 = 0x8000001400000006LL;
  v11[2] = 1;
  v12 = ((unsigned __int64)v11 + 35) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v12 = 0x149434653LL;
  *(_QWORD*)(v12 + 8) = 306;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = a2;
  *(_DWORD*)(v12 + 16) = a3;
  v13 = *a4;
  v14 = a4[1];
  v15 = a4[3];
  *(_QWORD*)(v12 + 48) = a4[2];
  *(_QWORD*)(v12 + 56) = v15;
  *(_QWORD*)(v12 + 32) = v13;
  *(_QWORD*)(v12 + 40) = v14;
  *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt(v11);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v7, v11, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v19_.v20 = 0;
    memset(v19_.v19, 0, sizeof(v19_.v19));
    nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v11);
    if (*(_DWORD*)((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v17 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
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

#pragma GCC visibility pop
