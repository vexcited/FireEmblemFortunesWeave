#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nn_ec_400710(__int64 a1, __int64* a2, __int64* a3);

__int64 nn_ec_400710(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;
  struct {
    _QWORD* v25;
    unsigned int* v26;
  } v25_;
  _QWORD v27[4];
  __int64 v30;

  v5 = a2[1];
  v6 = *a3;
  v7 = a3[1];
  v8 = a1 + 8;
  v9 = *a2;
  v10 = *(unsigned int*)(v8 + 4);
  v11 = v7;
  v12 = v6;
  v13 = v5;
  v14 = v9;
  v15 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  LODWORD(v27[3]) = 0x100000;
  v27[0] = 0x20000000000001LL;
  v27[1] = 8;
  v27[2] = 0x800000200000000LL;
  v25_.v25 = v27;
  v25_.v26 = v15;
  *(_QWORD*)v15 = 0x800200006LL;
  v20_.v20 = v14;
  v20_.v21 = v13;
  v20_.v22 = v12;
  v20_.v23 = v11;
  v30 = 0x500000005LL;
  v16 = nn_sf_hipc_detail_SetBuffers(&v25_.v25, 2, (__int64)&v20_.v20,
                                     (__int64)&v30, 0, 32);
  if ((_DWORD)v16 != 0 ||
      (v17 = ((unsigned __int64)&v25_
                  .v26[*((unsigned __int8*)v25_.v25 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v17 = 0x149434653LL, *(_QWORD*)(v17 + 8) = 5,
       *(_DWORD*)(v17 + 12) = nn_sf_cmif_GetInlineContext_plt(v16),
       LODWORD(v16) = nn_sf_hipc_SendSyncRequest_plt(v10, v15, 256),
       (_DWORD)v16 != 0)) {
    LODWORD(v18) = v16;
  }
  else {
    v20_.v23 = 0;
    v20_.v24 = 0;
    v20_.v21 = 0;
    v20_.v22 = 0;
    v20_.v20 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v20_.v20, v15);
    if (*(_DWORD*)((v20_.v20 + 4LL * BYTE1(v20_.v24) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v18 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v20_.v20 + 4LL * BYTE1(v20_.v24) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v18 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v18);
      }
    }
    else {
      LODWORD(v18) = 108554;
    }
  }
  return (unsigned int)v18;
}

#pragma GCC visibility pop
