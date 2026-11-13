#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_notification_5933c0(__int64 a1, _WORD* a2, __int64 a3, __int64* a4);

__int64 nn_notification_5933c0(__int64 a1, _WORD* a2, __int64 a3, __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v24_;
  __int64 v29;
  struct {
    _QWORD* v30;
    unsigned int* v31;
  } v30_;
  _QWORD v32[4];

  {
    v6 = *a4;
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = a4[1];
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = a1 + 8;
  {
    v9 = *(unsigned __int16**)(v8 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *(_DWORD*)(v8 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = v7;
  v12 = v6;
  v14 = (**(__int64 (***)(unsigned __int16*))v9)(v9);
  {
    v15 = v9[4];
    __asm__ volatile("" ::"r"(v15));
  }
  LODWORD(v16) = v14;
  v17 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v14);
  LODWORD(v32[3]) = 1310720;
  v30_.v31 = v17;
  v32[0] = 0x20000000000001LL;
  v32[1] = 12;
  v32[2] = 0x800000200000000LL;
  v30_.v30 = v32;
  *(_QWORD*)v17 = 0xC00200006LL;
  v24_.v24 = a3;
  v24_.v25 = 64;
  v24_.v26 = v12;
  v24_.v27 = v11;
  v29 = 0x500000015LL;
  v18 = nn_sf_hipc_detail_SetBuffers(&v30_.v30, 2, (__int64)&v24_.v24,
                                     (__int64)&v29, v15, 48);
  if ((_DWORD)v18 != 0) {
    LODWORD(v21) = v18;
    v16 = (unsigned int)v16;
  }
  else {
    {
      v19 =
          ((unsigned __int64)&v30_.v31[*((unsigned __int8*)v30_.v30 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v19));
    }
    *(_QWORD*)(v19 + 8) = 0;
    *(_DWORD*)v19 = 1048577;
    *(_DWORD*)(v19 + 4) = v10;
    *(_QWORD*)(v19 + 16) = 0x149434653LL;
    *(_QWORD*)(v19 + 24) = 500;
    *(_DWORD*)(v19 + 12) = nn_sf_cmif_GetInlineContext_plt(v18);
    v16 = (unsigned int)v16;
    v20 = nn_sf_hipc_SendSyncRequest_plt(v16, (__int64)v17, 256);
    if (v20 != 0) {
      LODWORD(v21) = v20;
    }
    else {
      v24_.v27 = 0;
      v24_.v28 = 0;
      v24_.v25 = 0;
      v24_.v26 = 0;
      v24_.v24 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v24_.v24, v17);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v21 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v21));
        }
        if ((_DWORD)v21 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v21);
        }
        else {
          *a2 = *(_WORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
        }
      }
      else {
        LODWORD(v21) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v9 + 8LL))(v9, v16);
  return (unsigned int)v21;
}

#pragma GCC visibility pop
