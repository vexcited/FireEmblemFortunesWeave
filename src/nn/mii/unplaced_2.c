#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_mii_4bdbe0(__int64 a1, _DWORD* a2, __int64* a3, int a4);

__int64 nn_mii_4bdbe0(__int64 a1, _DWORD* a2, __int64* a3, int a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    char gap40_[4];
    int v29;
  } v24_;
  _QWORD v30[2];
  struct {
    __int64* v31;
    unsigned int* v32;
  } v31_;

  v6 = a1 + 8;
  {
    v7 = 92 * a3[1];
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *a3;
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v10 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v12 = v7;
  v13 = v8;
  {
    v9 = *(unsigned __int16**)(v6 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  v15 = (**(__int64 (***)(unsigned __int16*))v9)(v9);
  {
    v16 = v9[4];
    __asm__ volatile("" ::"r"(v16));
  }
  LODWORD(v17) = v15;
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v15);
  LODWORD(v24_.v27) = 1179648;
  v24_.v24 = 0x100000000000001LL;
  v24_.v25 = 13;
  v24_.v26 = 0x500020000000000LL;
  v31_.v31 = &v24_.v24;
  v31_.v32 = v18;
  *(_QWORD*)v18 = 0xD01000006LL;
  v30[0] = v13;
  v30[1] = v12;
  v24_.v29 = 6;
  v19 = nn_sf_hipc_detail_SetBuffers(&v31_.v31, 1, (__int64)v30,
                                     (__int64)&v24_.v29, v16, 52);
  if ((_DWORD)v19 != 0) {
    LODWORD(v22) = v19;
    v17 = (unsigned int)v17;
  }
  else {
    {
      v20 =
          ((unsigned __int64)&v31_.v32[*((unsigned __int8*)v31_.v31 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v20));
    }
    *(_DWORD*)(v20 + 32) = a4;
    *(_QWORD*)(v20 + 8) = 0;
    *(_DWORD*)v20 = 1310721;
    *(_DWORD*)(v20 + 4) = v10;
    *(_QWORD*)(v20 + 16) = 0x149434653LL;
    *(_QWORD*)(v20 + 24) = 3;
    *(_DWORD*)(v20 + 12) = nn_sf_cmif_GetInlineContext_plt(v19);
    v17 = (unsigned int)v17;
    v21 = nn_sf_hipc_SendSyncRequest_plt(v17, (__int64)v18, 256);
    if (v21 != 0) {
      LODWORD(v22) = v21;
    }
    else {
      v24_.v27 = 0;
      v24_.v28 = 0;
      v24_.v25 = 0;
      v24_.v26 = 0;
      v24_.v24 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v24_.v24, v18);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v22 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v22));
        }
        if ((_DWORD)v22 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v22);
        }
        else {
          *(_DWORD*)a2 = *(_DWORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
        }
      }
      else {
        LODWORD(v22) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v9 + 8LL))(v9, v17);
  return (unsigned int)v22;
}

#pragma GCC visibility pop
