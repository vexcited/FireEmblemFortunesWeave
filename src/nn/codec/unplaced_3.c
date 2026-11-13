#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_codec_328a40(__int64 a1, __int64** a2, __int64 a3, __int64 a4,
                        int a5, unsigned int a6, __int64* a7);
__int64 nn_codec_371fb0(void* this_, int a2, int a3, int a4, _DWORD* a5,
                        int* a6);

__int64 nn_codec_328a40(__int64 a1, __int64** a2, __int64 a3, __int64 a4,
                        int a5, unsigned int a6, __int64* a7)
{
  __int64 v7;
  int v8;
  __int64 v13;
  unsigned int v14;
  unsigned int* v15;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 (***v23)(_QWORD);
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v28;
  struct {
    _QWORD v30[4];
    __int64 v31;
  } v30_;

  {
    v7 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v28 = *a2;
    __asm__ volatile("" ::"r"(v28));
  }
  v13 = (**(__int64 (***)(__int64))v7)(v7);
  v14 = v13;
  v15 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v13);
  v15[2] = 2;
  *(_QWORD*)v15 = 0x8000000F00000006LL;
  {
    v16 = *(_DWORD*)a4;
    __asm__ volatile("" ::"r"(v16));
  }
  *(_DWORD*)a4 = 0;
  {
    v17 = *(unsigned __int8*)(a4 + 4);
    __asm__ volatile("" ::"r"(v17));
  }
  *(_BYTE*)(a4 + 4) = 0;
  v18 = ((unsigned __int64)v15 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  v15[3] = v16;
  *(_QWORD*)(v18 + 24) = a6;
  *(_QWORD*)(v18 + 32) = a3;
  *(_DWORD*)(v18 + 40) = a5;
  *(_QWORD*)(v18 + 8) = 0;
  *(_QWORD*)(v18 + 16) = 0x149434653LL;
  *(_DWORD*)v18 = 1835009;
  *(_DWORD*)(v18 + 4) = v8;
  *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v15);
  v19 = nn_sf_hipc_SendSyncRequest_plt(v14, (__int64)v15, 256);
  if (v19 != 0) {
    LODWORD(v20) = v19;
    v21 = 0;
    if (v17 != 0) {
      goto LABEL_9;
    }
  }
  else {
    v30_.v31 = 0;
    memset(v30_.v30, 0, sizeof(v30_.v30));
    nn_sf_hipc_detail_b8c00((__int64)v30_.v30, v15);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v30_.v30[0] + 4LL * BYTE1(v30_.v31) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v30_.v30[0] + 4LL * BYTE1(v30_.v31) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v20));
      }
      if ((_DWORD)v20 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
        v21 = 0;
        if (v17 == 0) {
          goto LABEL_10;
        }
      }
      else {
        v21 = *(_DWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v30_.v30[0] + 4LL * BYTE1(v30_.v31) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
        if (v17 == 0) {
          goto LABEL_10;
        }
      }
    LABEL_9:
      nn_os_CloseNativeHandle_plt(v16);
      goto LABEL_10;
    }
    v21 = 0;
    LODWORD(v20) = 108554;
    if (v17 != 0) {
      goto LABEL_9;
    }
  }
LABEL_10:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v14);
  if ((_DWORD)v20 == 0) {
    {
      v22 = *a7;
      __asm__ volatile("" ::"r"(v22));
    }
    if (v21 != 0) {
      v23 = (__int64 (***)(_QWORD))(
          *(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      {
        v24 = (**v23)(v23);
        __asm__ volatile("" ::"r"(v24));
      }
      *(_QWORD*)(v24 + 8) = v7;
      *(_DWORD*)(v24 + 16) = v21;
      *(_BYTE*)v24 = 1;
    }
    else {
      *a7 = 0;
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
      }
    }
    {
      v25 = *a7;
      __asm__ volatile("" ::"r"(v25));
    }
    *a7 = 0;
    {
      v26 = *v28;
      __asm__ volatile("" ::"r"(v26));
    }
    *v28 = v25;
    if (v26 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    }
  }
  return (unsigned int)v20;
}

__int64 nn_codec_371fb0(void* this_, int a2, int a3, int a4, _DWORD* a5,
                        int* a6)
{
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;

  if (a3 != 0) {
    if (a3 >= 0) {
      v6 = a3;
    }
    else {
      v6 = -a3;
    }
    v7 = __clz((unsigned int)(v6)) - 1;
  }
  else {
    v7 = 0;
  }
  v8 = a3 << v7;
  v9 = a4 - v7 + a2;
  v10 = v9 < 1;
  v11 = ((unsigned __int64)(v8 * (__int64)(int)this_) >> 31) & 0xFFFFFFFE;
  v12 = v11 >> ((~(_BYTE)v9) & 63);
  v13 = v11 >> ((-(char)v9) & 63);
  v14 = (v11 - (v12 << ((~(_BYTE)v9) & 63))) << v9;
  if (v9 >= 1) {
    v15 = v12 + 1;
  }
  else {
    v15 = 1;
  }
  if (v10) {
    v14 = v13;
  }
  if (v14 > 0x40000000) {
    v14 |= 0x80000000;
    ++v15;
  }
  if (v14 >= -1073741824) {
    v16 = 0;
  }
  else {
    v14 &= 0x3FFFFFFFu;
    v16 = 1;
  }
  v17 = v14;
  v18 = 1488519168LL * v14;
  v19 = 2LL * v14;
  *(_DWORD*)a5 = v15 - v16;
  v20 = ((v19 * v17) >> 32) & 0xFFFFFFFFFFFFFFFELL;
  return (
      unsigned int)(HIDWORD(v18) +
                    ((unsigned __int64)(515899392LL * (int)v20) >> 32) +
                    ((unsigned __int64)(119209984LL *
                                        (int)(((v19 * v20) >> 32) &
                                              0xFFFFFFFE)) >>
                     32) +
                    ((unsigned __int64)(20643840LL *
                                        (int)(((v19 *
                                                (((__int64)(v19 * v20) >> 32) &
                                                 0xFFFFFFFFFFFFFFFELL)) >>
                                               32) &
                                              0xFFFFFFFE)) >>
                     32) +
                    0x40000000 +
                    ((2883584 *
                      (((__int64)(v19 *
                                  (((__int64)(v19 *
                                              (((__int64)(v19 * v20) >> 32) &
                                               0xFFFFFFFFFFFFFFFELL)) >>
                                    32) &
                                   0xFFFFFFFFFFFFFFFELL)) >>
                        32) &
                       0x3FFFFFFFFFFEuLL)) >>
                     32));
}

#pragma GCC visibility pop
