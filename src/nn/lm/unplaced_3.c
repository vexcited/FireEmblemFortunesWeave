#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_lm_4a36b0(__int64 a1, __int64* a2, _QWORD* a3, _DWORD* a4);
__int64 nn_lm_4a41e0(__int64 a1, _QWORD* a2, __int64* a3);

__int64 nn_lm_4a36b0(__int64 a1, __int64* a2, _QWORD* a3, _DWORD* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int16* v11;
  int v12;
  _DWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  unsigned __int64 v24;
  __int64 v25;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    char gap40_[4];
    int v32;
  } v27_;
  _QWORD v33[2];
  struct {
    __int64* v34;
    unsigned int* v35;
  } v34_;

  {
    v8 = a2[1];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = a1 + 8;
  {
    v10 = *a2;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v12 = *(_DWORD*)(v9 + 16);
    __asm__ volatile("" ::"r"(v12));
  }
  v13 = a4;
  v14 = a3;
  v15 = v8;
  v16 = v10;
  {
    v11 = *(unsigned __int16**)(v9 + 8);
    __asm__ volatile("" ::"r"(v11));
  }
  v17 = (**(__int64 (***)(unsigned __int16*))v11)(v11);
  {
    v18 = v11[4];
    __asm__ volatile("" ::"r"(v18));
  }
  LODWORD(v19) = v17;
  v20 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v17);
  LODWORD(v27_.v30) = 1310738;
  v27_.v27 = 0x100000000000001LL;
  v27_.v28 = 3085;
  v27_.v29 = 0x500020000000000LL;
  v34_.v34 = &v27_.v27;
  v34_.v35 = v20;
  *(_QWORD*)v20 = 0xC0D01000006LL;
  v33[0] = v16;
  v33[1] = v15;
  v27_.v32 = 34;
  v21 = nn_sf_hipc_detail_SetBuffers(&v34_.v34, 1, (__int64)v33,
                                     (__int64)&v27_.v32, v18, 48);
  if ((_DWORD)v21 != 0) {
    LODWORD(v25) = v21;
    v19 = (unsigned int)v19;
  }
  else {
    {
      v22 =
          ((unsigned __int64)&v34_.v35[*((unsigned __int8*)v34_.v34 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v22));
    }
    *(_QWORD*)(v22 + 8) = 0;
    *(_DWORD*)v22 = 1048577;
    *(_DWORD*)(v22 + 4) = v12;
    *(_QWORD*)(v22 + 16) = 0x149434653LL;
    *(_QWORD*)(v22 + 24) = 2;
    *(_DWORD*)(v22 + 12) = nn_sf_cmif_GetInlineContext_plt(v21);
    v19 = (unsigned int)v19;
    v23 = nn_sf_hipc_SendSyncRequest_plt(v19, (__int64)v20, 256);
    if (v23 != 0) {
      LODWORD(v25) = v23;
    }
    else {
      v27_.v30 = 0;
      v27_.v31 = 0;
      v27_.v28 = 0;
      v27_.v29 = 0;
      v27_.v27 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v27_.v27, v20);
      v24 = (v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if (*(_DWORD*)((char*)((__int64*)0xCLL) + v24 + 4) == 1329808979) {
        {
          v25 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v25));
        }
        if ((_DWORD)v25 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v25);
        }
        else {
          *v14 = *(__int64*)((char*)((__int64*)0x28LL) +
                             ((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                              0xFFFFFFFFFFFFFFF0LL));
          *(_DWORD*)v13 = *(_DWORD*)(v24 + 32);
        }
      }
      else {
        LODWORD(v25) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v11 + 8LL))(v11, v19);
  return (unsigned int)v25;
}

__int64 nn_lm_4a41e0(__int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int16* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  struct {
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v26_;
  _QWORD v31[2];
  struct {
    __int64* v32;
    unsigned int* v33;
  } v32_;
  int v36;

  {
    v5 = a3[1];
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = a1 + 8;
  {
    v7 = *a3;
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v9 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = v5;
  v11 = v7;
  {
    v8 = *(unsigned __int16**)(v6 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  v13 = (**(__int64 (***)(unsigned __int16*))v8)(v8);
  {
    v14 = v8[4];
    __asm__ volatile("" ::"r"(v14));
  }
  LODWORD(v15) = v13;
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v13);
  LODWORD(v26_.v29) = 1900544;
  v26_.v26 = 0x11000000000001LL;
  v26_.v27 = 22;
  v26_.v28 = 0x700000402000000LL;
  v32_.v32 = &v26_.v26;
  v32_.v33 = v16;
  *(_QWORD*)v16 = 0x1600110006LL;
  v31[0] = v11;
  v31[1] = v10;
  v36 = 33;
  v17 = nn_sf_hipc_detail_SetBuffers(&v32_.v32, 1, (__int64)v31, (__int64)&v36,
                                     v14, 88);
  if ((_DWORD)v17 != 0) {
    LODWORD(v24) = v17;
    v15 = (unsigned int)v15;
  }
  else {
    {
      v18 =
          ((unsigned __int64)&v32_.v33[*((unsigned __int8*)v32_.v32 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(v18 + 16) = 0x149434653LL;
    *(_QWORD*)(v18 + 24) = 3;
    *(_QWORD*)(v18 + 32) = 0;
    *(_QWORD*)(v18 + 40) = 0;
    *(_QWORD*)(v18 + 48) = 0;
    *(_QWORD*)(v18 + 56) = 0;
    *(_QWORD*)(v18 + 64) = 0;
    *(_QWORD*)(v18 + 32) = *a2;
    {
      v19 = a2[1];
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = a2[2];
      __asm__ volatile("" ::"r"(v20));
    }
    {
      v21 = a2[3];
      __asm__ volatile("" ::"r"(v21));
    }
    {
      v22 = a2[4];
      __asm__ volatile("" ::"r"(v22));
    }
    *(_QWORD*)(v18 + 8) = 0;
    *(_QWORD*)(v18 + 40) = v19;
    *(_QWORD*)(v18 + 48) = v20;
    *(_QWORD*)(v18 + 56) = v21;
    *(_QWORD*)(v18 + 64) = v22;
    *(_DWORD*)v18 = 3670017;
    *(_DWORD*)(v18 + 4) = v9;
    *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v17);
    v15 = (unsigned int)v15;
    v23 = nn_sf_hipc_SendSyncRequest_plt(v15, (__int64)v16, 256);
    if (v23 != 0) {
      LODWORD(v24) = v23;
    }
    else {
      v26_.v29 = 0;
      v26_.v30 = 0;
      v26_.v27 = 0;
      v26_.v28 = 0;
      v26_.v26 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v26_.v26, v16);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v26_.v26 + 4LL * BYTE1(v26_.v30) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v24 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v26_.v26 + 4LL * BYTE1(v26_.v30) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v24));
        }
        if ((_DWORD)v24 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v24);
        }
      }
      else {
        LODWORD(v24) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v8 + 8LL))(v8, v15);
  return (unsigned int)v24;
}

#pragma GCC visibility pop
