#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_time_5da550(__int64 a1, __int64 a2, __int64 a3);

__int64 nn_time_5da550(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned __int16* v6;
  int v7;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v23_;
  _QWORD v28[2];
  struct {
    __int64* v29;
    unsigned int* v30;
  } v29_;
  int v33;

  v5 = a1 + 8;
  {
    v7 = *(_DWORD*)(v5 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v6 = *(unsigned __int16**)(v5 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  v10 = (**(__int64 (***)(unsigned __int16*))v6)(v6);
  {
    v11 = v6[4];
    __asm__ volatile("" ::"r"(v11));
  }
  LODWORD(v12) = v10;
  v13 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v10);
  LODWORD(v23_.v26) = 1703936;
  v23_.v23 = 0x100000000000001LL;
  v23_.v24 = 21;
  v23_.v25 = 0x500020000000000LL;
  v29_.v29 = &v23_.v23;
  v29_.v30 = v13;
  *(_QWORD*)v13 = 0x1501000006LL;
  v28[0] = a2;
  v28[1] = 0x4000;
  v33 = 22;
  v14 = nn_sf_hipc_detail_SetBuffers(&v29_.v29, 1, (__int64)v28, (__int64)&v33,
                                     v11, 84);
  if ((_DWORD)v14 != 0) {
    LODWORD(v21) = v14;
    v12 = (unsigned int)v12;
  }
  else {
    {
      v15 =
          ((unsigned __int64)&v29_.v30[*((unsigned __int8*)v29_.v29 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v15));
    }
    *(_QWORD*)(v15 + 16) = 0x149434653LL;
    *(_QWORD*)(v15 + 24) = 4;
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_DWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 32) = *(_QWORD*)a3;
    {
      v16 = *(_QWORD*)(a3 + 8);
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(_QWORD*)(a3 + 16);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = *(_QWORD*)(a3 + 24);
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_DWORD*)(a3 + 32);
      __asm__ volatile("" ::"r"(v19));
    }
    *(_QWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 40) = v16;
    *(_DWORD*)(v15 + 64) = v19;
    *(_QWORD*)(v15 + 48) = v17;
    *(_QWORD*)(v15 + 56) = v18;
    *(_DWORD*)v15 = 3407873;
    *(_DWORD*)(v15 + 4) = v7;
    *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt(v14);
    v12 = (unsigned int)v12;
    v20 = nn_sf_hipc_SendSyncRequest_plt(v12, (__int64)v13, 256);
    if (v20 != 0) {
      LODWORD(v21) = v20;
    }
    else {
      v23_.v26 = 0;
      v23_.v27 = 0;
      v23_.v24 = 0;
      v23_.v25 = 0;
      v23_.v23 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v23_.v23, v13);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v23_.v23 + 4LL * BYTE1(v23_.v27) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v21 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v23_.v23 + 4LL * BYTE1(v23_.v27) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v21));
        }
        if ((_DWORD)v21 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v21);
        }
      }
      else {
        LODWORD(v21) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v6 + 8LL))(v6, v12);
  return (unsigned int)v21;
}

#pragma GCC visibility pop
