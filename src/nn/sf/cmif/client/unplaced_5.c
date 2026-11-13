#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1ca428(__int64 result, int, int, __int64, int*);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_sf_cmif_client_2b4680();
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
extern _UNKNOWN SdkData_f28a70;
extern __int64 SdkData_f28c70;
int __cxa_guard_acquire_plt(__int64);
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
void __cxa_guard_release_plt(__int64);
__int64 nn_sf_cmif_client_e6d90(__int64 a1, __int64 a2, __int64* a3,
                                __int64 a4);
__int64 nn_sf_cmif_client_ece00(__int64 a1, __int64* a2, __int64 a3);
__int64 nn_sf_cmif_client_efbc0(__int64 a1, __int64 a2);
__int64 nn_sf_cmif_client_f0720(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                __int64 a9, __int64 a10, unsigned int a11,
                                unsigned int a12);
__int64 nn_sf_cmif_client_1b9ef0(__int64 a1, __int64** a2, __int64 a3,
                                 __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                                 int a8, unsigned int a9, __int64* a10);
__int64 nn_sf_cmif_client_1ca644(__int64 a1, _BYTE* a2, __int64 a3, char a4);
__int64 nn_sf_cmif_client_1cc274(__int64 a1, __int64 a2, __int64* a3);
__int64 nn_sf_cmif_client_1cc764(__int64 a1, __int64 a2, _QWORD* a3);
__int64 nn_sf_cmif_client_1d3240(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_sf_cmif_client_1d4b50(__int64 a1, __int64 a2, int a3, int a4);
__int64 nn_sf_cmif_client_1d7c34(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4);
__int64 nn_sf_cmif_client_1d835c(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4);
__int64 nn_sf_cmif_client_1da334(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 unsigned int a5);
__int64 nn_sf_cmif_client_2b27d0(__int64 a1, __int64* a2, int a3, int a4,
                                 int a5);
__attribute__((swiftcall)) void nn_sf_cmif_client_2b45f0(PSEUDO_X8 x8_);
__int64 nn_sf_cmif_client_2c36a0(__int64 a1, __int64* a2, __int64* a3);
__int64 nn_sf_cmif_client_328d10(__int64 a1, _DWORD* a2, _DWORD* a3,
                                 __int64* a4, __int64* a5);
__int64 nn_sf_cmif_client_329d80(__int64 a1, __int64** a2, __int64 a3,
                                 _DWORD* a4, __int64* a5, __int64 a6,
                                 __int64 a7, __int64 a8, __int64 a9,
                                 __int64 a10, __int64 a11, unsigned int a12,
                                 __int64* a13);
__int64 nn_sf_cmif_client_32a150(__int64 a1, int a2, __int64 a3);
__int64 nn_sf_cmif_client_32a360(__int64 a1, __int64** a2, __int64 a3,
                                 _DWORD* a4, __int64* a5, __int64 a6,
                                 __int64 a7, __int64 a8, __int64 a9,
                                 __int64 a10, __int64 a11, int a12, __int64 a13,
                                 unsigned int a14, __int64* a15);
__int64 nn_sf_cmif_client_40e750(__int64 a1, _DWORD* a2, __int64* a3, int a4);
__int64 nn_sf_cmif_client_496830(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, int a10, unsigned int a11);
__int64 nn_sf_cmif_client_57ea10(__int64 a1, __int64 a2, int a3,
                                 unsigned int a4);
__int64 nn_sf_cmif_client_584460(__int64 a1, __int64 a2, int a3, __int64 a4,
                                 __int64 a5, unsigned int a6);
__int64 nn_sf_cmif_client_584800(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 int a5, unsigned int a6);
__int64 nn_sf_cmif_client_58a2e0(__int64 a1, __int64 a2, __int64 a3);
__int64 nn_sf_cmif_client_58bd60(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 unsigned int a5);
__int64 nn_sf_cmif_client_5cda10(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                                 __int64 a5, __int64 a6, _DWORD* a7, int a8,
                                 __int64 a9, __int64 a10, unsigned int a11);
__int64 nn_sf_cmif_client_761590(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int16 a6, int a7,
                                 unsigned int a8);

__int64 nn_sf_cmif_client_e6d90(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int16* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int* v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    char gap40_[4];
    int v30;
  } v25_;
  _QWORD v31[2];
  struct {
    __int64* v32;
    unsigned int* v33;
  } v32_;

  {
    v7 = a3[1];
    __asm__ volatile("" ::"r"(v7));
  }
  v8 = a1 + 8;
  {
    v9 = *a3;
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v11 = *(_DWORD*)(v8 + 16);
    __asm__ volatile("" ::"r"(v11));
  }
  v12 = a4;
  v13 = v7;
  v14 = v9;
  {
    v10 = *(unsigned __int16**)(v8 + 8);
    __asm__ volatile("" ::"r"(v10));
  }
  v16 = (**(__int64 (***)(unsigned __int16*))v10)(v10);
  {
    v17 = v10[4];
    __asm__ volatile("" ::"r"(v17));
  }
  LODWORD(v18) = v16;
  v19 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v16);
  LODWORD(v25_.v28) = 1376256;
  v25_.v25 = 0x10000000000001LL;
  v25_.v26 = 16;
  v25_.v27 = 0x500000200000000LL;
  v32_.v32 = &v25_.v25;
  v32_.v33 = v19;
  *(_QWORD*)v19 = 0x1000100006LL;
  v31[0] = v14;
  v31[1] = v13;
  v25_.v30 = 69;
  v20 = nn_sf_hipc_detail_SetBuffers(&v32_.v32, 1, (__int64)v31,
                                     (__int64)&v25_.v30, v17, 64);
  if ((_DWORD)v20 != 0) {
    LODWORD(v23) = v20;
    v18 = (unsigned int)v18;
  }
  else {
    {
      v21 =
          ((unsigned __int64)&v32_.v33[*((unsigned __int8*)v32_.v32 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(v21 + 24) = 1;
    *(_QWORD*)(v21 + 32) = a2;
    *(_QWORD*)(v21 + 40) = v12;
    *(_DWORD*)v21 = 2097153;
    *(_DWORD*)(v21 + 4) = v11;
    *(_QWORD*)(v21 + 8) = 0;
    *(_QWORD*)(v21 + 16) = 0x149434653LL;
    *(_DWORD*)(v21 + 12) = nn_sf_cmif_GetInlineContext_plt(v20);
    v18 = (unsigned int)v18;
    v22 = nn_sf_hipc_SendSyncRequest_plt(v18, (__int64)v19, 256);
    if (v22 != 0) {
      LODWORD(v23) = v22;
    }
    else {
      v25_.v28 = 0;
      v25_.v29 = 0;
      v25_.v26 = 0;
      v25_.v27 = 0;
      v25_.v25 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v25_.v25, v19);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v23 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v25_.v25 + 4LL * BYTE1(v25_.v29) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v23));
        }
        if ((_DWORD)v23 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v23);
        }
      }
      else {
        LODWORD(v23) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v10 + 8LL))(v10, v18);
  return (unsigned int)v23;
}

__int64 nn_sf_cmif_client_ece00(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  unsigned __int64 v19;
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

  {
    v6 = a2[1];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = a1 + 8;
  {
    v8 = *a2;
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v10 = *(_DWORD*)(v7 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v11 = a3;
  v12 = v6;
  v13 = v8;
  {
    v9 = *(unsigned __int16**)(v7 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  v14 = (**(__int64 (***)(unsigned __int16*))v9)(v9);
  {
    v15 = v9[4];
    __asm__ volatile("" ::"r"(v15));
  }
  LODWORD(v16) = v14;
  v17 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v14);
  LODWORD(v23_.v26) = 1245184;
  v23_.v23 = 0x10000000000001LL;
  v23_.v24 = 14;
  v23_.v25 = 0x500000200000000LL;
  v29_.v29 = &v23_.v23;
  v29_.v30 = v17;
  *(_QWORD*)v17 = 0xE00100006LL;
  v28[0] = v13;
  v28[1] = v12;
  v33 = 5;
  v18 = nn_sf_hipc_detail_SetBuffers(&v29_.v29, 1, (__int64)v28, (__int64)&v33,
                                     v15, 56);
  if ((_DWORD)v18 != 0) {
    LODWORD(v21) = v18;
    v16 = (unsigned int)v16;
  }
  else {
    {
      v19 =
          ((unsigned __int64)&v29_.v30[*((unsigned __int8*)v29_.v29 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v19));
    }
    *(_QWORD*)(v19 + 24) = 0;
    *(_QWORD*)(v19 + 32) = v11;
    *(_DWORD*)v19 = 1572865;
    *(_DWORD*)(v19 + 4) = v10;
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 16) = 0x149434653LL;
    *(_DWORD*)(v19 + 12) = nn_sf_cmif_GetInlineContext_plt(v18);
    v16 = (unsigned int)v16;
    v20 = nn_sf_hipc_SendSyncRequest_plt(v16, (__int64)v17, 256);
    if (v20 != 0) {
      LODWORD(v21) = v20;
    }
    else {
      v23_.v26 = 0;
      v23_.v27 = 0;
      v23_.v24 = 0;
      v23_.v25 = 0;
      v23_.v23 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v23_.v23, v17);
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
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v9 + 8LL))(v9, v16);
  return (unsigned int)v21;
}

__int64 nn_sf_cmif_client_efbc0(__int64 a1, __int64 a2)
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
  unsigned int v15;
  int v16;
  struct {
    _QWORD v18[3];
    __int64 v19;
    __int64 v20;
  } v18_;

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
  *(_QWORD*)v10 = 0xC00000006LL;
  v11 = ((unsigned __int64)v10 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v11 + 8) = 0;
  *(_DWORD*)v11 = 1048577;
  *(_DWORD*)(v11 + 4) = v6;
  *(_QWORD*)(v11 + 16) = 0x149434653LL;
  *(_QWORD*)(v11 + 24) = 0;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v10);
  v12 = v9;
  v13 = nn_sf_hipc_SendSyncRequest_plt(v9, (__int64)v10, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v18_.v19 = 0;
    v18_.v20 = 0;
    memset(v18_.v18, 0, sizeof(v18_.v18));
    nn_sf_hipc_detail_b8c00((__int64)v18_.v18, v10);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v18_.v18[0] + 4LL * BYTE1(v18_.v20) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v14 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v18_.v18[0] + 4LL * BYTE1(v18_.v20) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v14));
      }
      if ((_DWORD)v14 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v14);
      }
      else {
        {
          v15 = *(_DWORD*)a2;
          __asm__ volatile("" ::"r"(v15));
        }
        *(_DWORD*)a2 = *(_DWORD*)(v18_.v18[0] + 4LL * BYTE3(v18_.v19));
        {
          v16 = *(unsigned __int8*)(a2 + 4);
          __asm__ volatile("" ::"r"(v16));
        }
        *(_BYTE*)(a2 + 4) = 1;
        if (v16 == 1) {
          nn_os_CloseNativeHandle_plt(v15);
        }
        LODWORD(v14) = 0;
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 8LL))(v5, v12);
  return (unsigned int)v14;
}

__int64 nn_sf_cmif_client_f0720(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                __int64 a9, __int64 a10, unsigned int a11,
                                unsigned int a12)
{
  unsigned __int16* v12;
  int v13;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned int v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v33_;
  struct {
    _QWORD* v39;
    unsigned int* v40;
  } v39_;
  struct {
    _QWORD v41[3];
    int v42;
  } v41_;

  {
    v12 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v13));
  }
  v20 = (**(__int64 (***)(unsigned __int16*))v12)(v12);
  {
    v21 = v12[4];
    __asm__ volatile("" ::"r"(v21));
  }
  v30 = v20;
  v22 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v20);
  v41_.v42 = 1900544;
  v39_.v39 = v41_.v41;
  v39_.v40 = v22;
  v41_.v41[0] = 0x120000000000001LL;
  v41_.v41[1] = 18;
  v41_.v41[2] = 0xB00080200000000LL;
  *(_QWORD*)v22 = 0x1201200006LL;
  v33_.v33 = a3;
  v33_.v34 = a4;
  v33_.v35 = a5;
  v33_.v36 = a6;
  v33_.v37 = a7;
  v33_.v38 = a8;
  v31_.v31 = 0x4500000046LL;
  v31_.v32 = 69;
  v23 = nn_sf_hipc_detail_SetBuffers(&v39_.v39, 3, (__int64)&v33_.v33,
                                     (__int64)&v31_.v31, v21, 72);
  if ((_DWORD)v23 != 0) {
    LODWORD(v27) = v23;
    v25 = v30;
  }
  else {
    {
      v24 =
          ((unsigned __int64)&v39_.v40[*((unsigned __int8*)v39_.v39 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v24));
    }
    *(_QWORD*)(v24 + 24) = a12;
    *(_QWORD*)(v24 + 40) = a9;
    *(_QWORD*)(v24 + 48) = a10;
    *(_QWORD*)(v24 + 32) = a11;
    *(_DWORD*)v24 = 2621441;
    *(_DWORD*)(v24 + 4) = v13;
    *(_QWORD*)(v24 + 8) = 0;
    *(_QWORD*)(v24 + 16) = 0x149434653LL;
    *(_DWORD*)(v24 + 12) = nn_sf_cmif_GetInlineContext_plt(v23);
    v25 = v30;
    v26 = nn_sf_hipc_SendSyncRequest_plt(v30, (__int64)v22, 256);
    if (v26 != 0) {
      LODWORD(v27) = v26;
    }
    else {
      v33_.v36 = 0;
      v33_.v37 = 0;
      v33_.v34 = 0;
      v33_.v35 = 0;
      v33_.v33 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v33_.v33, v22);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v27 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v27));
        }
        if ((_DWORD)v27 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v27);
        }
        else {
          *a2 = *(_QWORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
        }
      }
      else {
        LODWORD(v27) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v12 + 8LL))(v12, v25);
  return (unsigned int)v27;
}

__int64 nn_sf_cmif_client_1b9ef0(__int64 a1, __int64** a2, __int64 a3,
                                 __int64 a4, __int64 a5, __int64 a6, __int64 a7,
                                 int a8, unsigned int a9, __int64* a10)
{
  unsigned __int16* v10;
  int v11;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  unsigned int* v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 (***v29)(_QWORD);
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v34;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v36_;
  __int64 v41;
  struct {
    _QWORD* v42;
    unsigned int* v43;
  } v42_;
  struct {
    _QWORD v44[3];
    int v45;
  } v44_;

  {
    v10 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v34 = *a2;
    __asm__ volatile("" ::"r"(v34));
  }
  v17 = (**(__int64 (***)(unsigned __int16*))v10)(v10);
  {
    v18 = v10[4];
    __asm__ volatile("" ::"r"(v18));
  }
  v19 = v17;
  v20 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v17);
  v44_.v45 = 1376256;
  v42_.v42 = v44_.v44;
  v42_.v43 = v20;
  v44_.v44[0] = 0x2000000000101LL;
  v44_.v44[1] = 0x28000000DLL;
  v44_.v44[2] = 0x800000004000300LL;
  *(_QWORD*)v20 = 0x8000000D00020006LL;
  v20[2] = 2;
  v36_.v36 = a3;
  v36_.v37 = a4;
  v36_.v38 = a5;
  v36_.v39 = a6;
  v41 = 0x1900000019LL;
  v21 = nn_sf_hipc_detail_SetBuffers(&v42_.v42, 2, (__int64)&v36_.v36,
                                     (__int64)&v41, v18, 52);
  if ((_DWORD)v21 != 0) {
    LODWORD(v26) = v21;
    v27 = 0;
    goto LABEL_11;
  }
  {
    v22 = *(_DWORD*)a7;
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(unsigned __int8*)(a7 + 4);
    __asm__ volatile("" ::"r"(v23));
  }
  *(_DWORD*)a7 = 0;
  *(_BYTE*)(a7 + 4) = 0;
  v42_.v43[*((unsigned __int8*)v42_.v42 + 17)] = v22;
  {
    v24 = ((unsigned __int64)&v42_.v43[*((unsigned __int8*)v42_.v42 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
    __asm__ volatile("" ::"r"(v24));
  }
  *(_QWORD*)(v24 + 24) = a9;
  *(_DWORD*)(v24 + 32) = a8;
  *(_DWORD*)v24 = 1310721;
  *(_DWORD*)(v24 + 4) = v11;
  *(_QWORD*)(v24 + 8) = 0;
  *(_QWORD*)(v24 + 16) = 0x149434653LL;
  *(_DWORD*)(v24 + 12) = nn_sf_cmif_GetInlineContext_plt(v21);
  v25 = nn_sf_hipc_SendSyncRequest_plt(v19, (__int64)v20, 256);
  if (v25 != 0) {
    LODWORD(v26) = v25;
    v27 = 0;
    if (v23 != 0) {
      goto LABEL_10;
    }
  }
  else {
    v36_.v39 = 0;
    v36_.v40 = 0;
    v36_.v37 = 0;
    v36_.v38 = 0;
    v36_.v36 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v36_.v36, v20);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v36_.v36 + 4LL * BYTE1(v36_.v40) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v26 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v36_.v36 + 4LL * BYTE1(v36_.v40) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v26));
      }
      if ((_DWORD)v26 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v26);
        v27 = 0;
        if ((v23 & 1) == 0) {
          goto LABEL_11;
        }
      }
      else {
        v27 = *(_DWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v36_.v36 + 4LL * BYTE1(v36_.v40) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
        if ((v23 & 1) == 0) {
          goto LABEL_11;
        }
      }
    LABEL_10:
      nn_os_CloseNativeHandle_plt(v22);
      goto LABEL_11;
    }
    v27 = 0;
    LODWORD(v26) = 108554;
    if ((v23 & 1) != 0) {
      goto LABEL_10;
    }
  }
LABEL_11:
  (*(void (**)(unsigned __int16*, _QWORD))(*(_QWORD*)v10 + 8LL))(v10, v19);
  if ((_DWORD)v26 == 0) {
    {
      v28 = *a10;
      __asm__ volatile("" ::"r"(v28));
    }
    if (v27 != 0) {
      v29 = (__int64 (***)(_QWORD))(
          *(__int64 (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      {
        v30 = (**v29)(v29);
        __asm__ volatile("" ::"r"(v30));
      }
      *(_QWORD*)(v30 + 8) = v10;
      *(_DWORD*)(v30 + 16) = v27;
      *(_BYTE*)v30 = 1;
    }
    else {
      *a10 = 0;
      if (v28 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
      }
    }
    {
      v31 = *a10;
      __asm__ volatile("" ::"r"(v31));
    }
    *a10 = 0;
    {
      v32 = *v34;
      __asm__ volatile("" ::"r"(v32));
    }
    *v34 = v31;
    if (v32 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
    }
  }
  return (unsigned int)v26;
}

__int64 nn_sf_cmif_client_1ca644(__int64 a1, _BYTE* a2, __int64 a3, char a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  char v19;
  unsigned int v20;
  int v21;
  int v23;
  struct {
    _QWORD v24[4];
    __int64 v25;
  } v24_;
  __int64 v28;

  v6 = a1 + 8;
  {
    v8 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = a4 & 1;
  {
    v7 = *(_QWORD*)(v6 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v12 = (**(__int64 (***)(__int64))v7)(v7);
  v13 = v12;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  *(_QWORD*)v14 = 0xD00000006LL;
  v15 = ((unsigned __int64)v14 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE*)(v15 + 32) = v9;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 1114113;
  *(_DWORD*)(v15 + 4) = v8;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 1;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v14);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v24_.v25 = 0;
    memset(v24_.v24, 0, sizeof(v24_.v24));
    nn_sf_hipc_detail_b8c00((__int64)v24_.v24, v14);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v24_.v24[0] + 4LL * BYTE1(v24_.v25) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v17 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v24_.v24[0] + 4LL * BYTE1(v24_.v25) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v17));
      }
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
      else {
        *a2 =
            (*(_BYTE(*)[4])0x20LL)[(v24_.v24[0] + 4LL * BYTE1(v24_.v25) + 15) &
                                   0xFFFFFFFFFFFFFFF0LL];
        v28 = 0;
        v23 = 1;
        SdkRoutine_1ca428((__int64)v24_.v24, 1, 0, (__int64)&v28, &v23);
        v18 = v28;
        v19 = BYTE4(v28);
        LODWORD(v28) = 0;
        BYTE4(v28) = 0;
        {
          v20 = *(_DWORD*)a3;
          __asm__ volatile("" ::"r"(v20));
        }
        *(_DWORD*)a3 = v18;
        {
          v21 = *(unsigned __int8*)(a3 + 4);
          __asm__ volatile("" ::"r"(v21));
        }
        *(_BYTE*)(a3 + 4) = v19;
        if (v21 == 1) {
          nn_os_CloseNativeHandle_plt(v20);
          if (BYTE4(v28) == 1) {
            nn_os_CloseNativeHandle_plt(v28);
          }
        }
        LODWORD(v17) = 0;
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v13);
  return (unsigned int)v17;
}

__int64 nn_sf_cmif_client_1cc274(__int64 a1, __int64 a2, __int64* a3)
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
  int v19;
  __int64 v20;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
  } v22_;
  _QWORD v27[2];
  struct {
    __int64* v28;
    unsigned int* v29;
  } v28_;
  int v32;

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
  LODWORD(v22_.v25) = 1376256;
  v22_.v22 = 0x11000000000001LL;
  v22_.v23 = 14;
  v22_.v24 = 0x700000402000000LL;
  v28_.v28 = &v22_.v22;
  v28_.v29 = v16;
  *(_QWORD*)v16 = 0xE00110006LL;
  v27[0] = v11;
  v27[1] = v10;
  v32 = 33;
  v17 = nn_sf_hipc_detail_SetBuffers(&v28_.v28, 1, (__int64)v27, (__int64)&v32,
                                     v14, 56);
  if ((_DWORD)v17 != 0) {
    LODWORD(v20) = v17;
    v15 = (unsigned int)v15;
  }
  else {
    {
      v18 =
          ((unsigned __int64)&v28_.v29[*((unsigned __int8*)v28_.v28 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(v18 + 24) = 10;
    *(_QWORD*)(v18 + 32) = a2;
    *(_DWORD*)v18 = 1572865;
    *(_DWORD*)(v18 + 4) = v9;
    *(_QWORD*)(v18 + 8) = 0;
    *(_QWORD*)(v18 + 16) = 0x149434653LL;
    *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v17);
    v15 = (unsigned int)v15;
    v19 = nn_sf_hipc_SendSyncRequest_plt(v15, (__int64)v16, 256);
    if (v19 != 0) {
      LODWORD(v20) = v19;
    }
    else {
      v22_.v25 = 0;
      v22_.v26 = 0;
      v22_.v23 = 0;
      v22_.v24 = 0;
      v22_.v22 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v22_.v22, v16);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v20));
        }
        if ((_DWORD)v20 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
        }
      }
      else {
        LODWORD(v20) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v8 + 8LL))(v8, v15);
  return (unsigned int)v20;
}

__int64 nn_sf_cmif_client_1cc764(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v8;
  unsigned int v9;
  unsigned int* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  char v16;
  unsigned int v17;
  int v18;
  int v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    __int64 v23;
  } v22_;

  v3 = a1 + 8;
  {
    v5 = *(_DWORD*)(v3 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = *(_QWORD*)(v3 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v8 = (**(__int64 (***)(__int64))v4)(v4);
  v9 = v8;
  v10 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  *(_QWORD*)v10 = 0xC00000006LL;
  v11 = ((unsigned __int64)v10 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v11 + 8) = 0;
  *(_DWORD*)v11 = 1048577;
  *(_DWORD*)(v11 + 4) = v5;
  *(_QWORD*)(v11 + 16) = 0x149434653LL;
  *(_QWORD*)(v11 + 24) = 1;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v10);
  v12 = v9;
  v13 = nn_sf_hipc_SendSyncRequest_plt(v9, (__int64)v10, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v22_.v23 = 0;
    memset(v22_.v22, 0, sizeof(v22_.v22));
    nn_sf_hipc_detail_b8c00((__int64)v22_.v22, v10);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v14 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v14));
      }
      if ((_DWORD)v14 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v14);
      }
      else {
        *a3 = *(_QWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
        v21 = 0;
        v20 = 1;
        SdkRoutine_1ca428((__int64)v22_.v22, 1, 0, (__int64)&v21, &v20);
        v15 = v21;
        v16 = BYTE4(v21);
        LODWORD(v21) = 0;
        BYTE4(v21) = 0;
        {
          v17 = *(_DWORD*)a2;
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)a2 = v15;
        {
          v18 = *(unsigned __int8*)(a2 + 4);
          __asm__ volatile("" ::"r"(v18));
        }
        *(_BYTE*)(a2 + 4) = v16;
        if (v18 == 1) {
          nn_os_CloseNativeHandle_plt(v17);
          if (BYTE4(v21) == 1) {
            nn_os_CloseNativeHandle_plt(v21);
          }
        }
        LODWORD(v14) = 0;
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 8LL))(v4, v12);
  return (unsigned int)v14;
}

__int64 nn_sf_cmif_client_1d3240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
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

  v3 = a1 + 8;
  {
    v5 = *(_DWORD*)(v3 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = *(_QWORD*)(v3 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v8 = (**(__int64 (***)(__int64))v4)(v4);
  v9 = v8;
  v10 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  *(_QWORD*)v10 = 0x2E00000006LL;
  v11 = ((unsigned __int64)v10 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v11 + 16) = 0x149434653LL;
  *(_QWORD*)(v11 + 24) = 0;
  memset_plt(v11 + 32, 0, 0x88u);
  v12 = memcpy_plt(v11 + 40, a2, 0x80u);
  *(_QWORD*)(v11 + 32) = a3;
  *(_QWORD*)(v11 + 8) = 0;
  *(_DWORD*)v11 = 9961473;
  *(_DWORD*)(v11 + 4) = v5;
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
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 8LL))(v4, v9);
  return (unsigned int)v14;
}

__int64 nn_sf_cmif_client_1d4b50(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    __int64 v21;
  } v20_;

  v6 = a1 + 8;
  {
    v8 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v7 = *(_QWORD*)(v6 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v12 = (**(__int64 (***)(__int64))v7)(v7);
  v13 = v12;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  *(_QWORD*)v14 = 0x1E00000006LL;
  v15 = ((unsigned __int64)v14 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 1;
  memset_plt(v15 + 32, 0, 0x48u);
  v16 = memcpy_plt(v15 + 40, a2, 0x40u);
  *(_DWORD*)(v15 + 32) = a3;
  *(_DWORD*)(v15 + 36) = a4;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 5767169;
  *(_DWORD*)(v15 + 4) = v8;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt(v16);
  v17 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
  if (v17 != 0) {
    LODWORD(v18) = v17;
  }
  else {
    v20_.v21 = 0;
    memset(v20_.v20, 0, sizeof(v20_.v20));
    nn_sf_hipc_detail_b8c00((__int64)v20_.v20, v14);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v18 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v20_.v20[0] + 4LL * BYTE1(v20_.v21) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v18));
      }
      if ((_DWORD)v18 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v18);
      }
    }
    else {
      LODWORD(v18) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v13);
  return (unsigned int)v18;
}

__int64 nn_sf_cmif_client_1d7c34(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4)
{
  __int64 v4;
  int v5;
  __int64 v9;
  unsigned int v10;
  unsigned int* v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    __int64 v18;
  } v17_;

  {
    v5 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v9 = (**(__int64 (***)(__int64))v4)(v4);
  v10 = v9;
  v11 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v9);
  *(_QWORD*)v11 = 0x2E00000006LL;
  v12 = ((unsigned __int64)v11 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v12 + 16) = 0x149434653LL;
  *(_QWORD*)(v12 + 24) = a4;
  memset_plt(v12 + 40, 0, 0x80u);
  *(_QWORD*)(v12 + 32) = a2;
  v13 = memcpy_plt(v12 + 40, a3, 0x80u);
  *(_QWORD*)(v12 + 8) = 0;
  *(_DWORD*)v12 = 9961473;
  *(_DWORD*)(v12 + 4) = v5;
  *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt(v13);
  v14 = nn_sf_hipc_SendSyncRequest_plt(v10, (__int64)v11, 256);
  if (v14 != 0) {
    LODWORD(v15) = v14;
  }
  else {
    v17_.v18 = 0;
    memset(v17_.v17, 0, sizeof(v17_.v17));
    nn_sf_hipc_detail_b8c00((__int64)v17_.v17, v11);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v15 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v15));
      }
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 8LL))(v4, v10);
  return (unsigned int)v15;
}

__int64 nn_sf_cmif_client_1d835c(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4)
{
  __int64 v4;
  int v5;
  __int64 v9;
  unsigned int v10;
  unsigned int* v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  char v16;
  unsigned int v17;
  int v18;
  int v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    __int64 v23;
  } v22_;

  {
    v5 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v9 = (**(__int64 (***)(__int64))v4)(v4);
  v10 = v9;
  v11 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v9);
  *(_QWORD*)v11 = 0xE00000006LL;
  v12 = ((unsigned __int64)v11 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v12 + 24) = a4;
  *(_QWORD*)(v12 + 32) = a3;
  *(_DWORD*)v12 = 1572865;
  *(_DWORD*)(v12 + 4) = v5;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0x149434653LL;
  *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v11);
  v13 = nn_sf_hipc_SendSyncRequest_plt(v10, (__int64)v11, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v22_.v23 = 0;
    memset(v22_.v22, 0, sizeof(v22_.v22));
    nn_sf_hipc_detail_b8c00((__int64)v22_.v22, v11);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v14 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v14));
      }
      if ((_DWORD)v14 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v14);
      }
      else {
        v21 = 0;
        v20 = 1;
        SdkRoutine_1ca428((__int64)v22_.v22, 1, 0, (__int64)&v21, &v20);
        v15 = v21;
        v16 = BYTE4(v21);
        LODWORD(v21) = 0;
        BYTE4(v21) = 0;
        {
          v17 = *(_DWORD*)a2;
          __asm__ volatile("" ::"r"(v17));
        }
        *(_DWORD*)a2 = v15;
        {
          v18 = *(unsigned __int8*)(a2 + 4);
          __asm__ volatile("" ::"r"(v18));
        }
        *(_BYTE*)(a2 + 4) = v16;
        if (v18 == 1) {
          nn_os_CloseNativeHandle_plt(v17);
          if (BYTE4(v21) == 1) {
            nn_os_CloseNativeHandle_plt(v21);
          }
        }
        LODWORD(v14) = 0;
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 8LL))(v4, v10);
  return (unsigned int)v14;
}

__int64 nn_sf_cmif_client_1da334(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 unsigned int a5)
{
  __int64 v5;
  int v6;
  __int64 v11;
  unsigned int v12;
  unsigned int* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

  {
    v6 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v5 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  v11 = (**(__int64 (***)(__int64))v5)(v5);
  v12 = v11;
  v13 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v11);
  *(_QWORD*)v13 = 0x8000002000000006LL;
  v13[2] = 1;
  v14 = ((unsigned __int64)v13 + 35) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v14 + 16) = 0x149434653LL;
  *(_QWORD*)(v14 + 24) = a5;
  memset_plt(v14 + 32, 0, 0x50u);
  *(_QWORD*)(v14 + 96) = a2;
  v15 = memcpy_plt(v14 + 32, a3, 0x40u);
  *(_QWORD*)(v14 + 104) = a4;
  *(_QWORD*)(v14 + 8) = 0;
  *(_DWORD*)v14 = 6291457;
  *(_DWORD*)(v14 + 4) = v6;
  *(_DWORD*)(v14 + 12) = nn_sf_cmif_GetInlineContext_plt(v15);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v12, (__int64)v13, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v19_.v20 = 0;
    memset(v19_.v19, 0, sizeof(v19_.v19));
    nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v13);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v17 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v17));
      }
      if ((_DWORD)v17 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 8LL))(v5, v12);
  return (unsigned int)v17;
}

__int64 nn_sf_cmif_client_2b27d0(__int64 a1, __int64* a2, int a3, int a4,
                                 int a5)
{
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v14;
  unsigned int v15;
  unsigned int* v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  struct {
    _QWORD v23[4];
    __int64 v24;
  } v23_;

  v7 = a1 + 8;
  {
    v9 = *(_DWORD*)(v7 + 16);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v8 = *(_QWORD*)(v7 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  v14 = (**(__int64 (***)(__int64))v8)(v8);
  v15 = v14;
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v14);
  *(_QWORD*)v16 = 0x1200000006LL;
  v17 = ((unsigned __int64)v16 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 16) = 0x149434653LL;
  *(_QWORD*)(v17 + 24) = 0;
  {
    v18 = *a2;
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v19 = *((_DWORD*)a2 + 2);
    __asm__ volatile("" ::"r"(v19));
  }
  *(_DWORD*)(v17 + 48) = a4;
  *(_DWORD*)(v17 + 52) = a5;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 32) = v18;
  *(_DWORD*)(v17 + 40) = v19;
  *(_DWORD*)(v17 + 44) = a3;
  *(_DWORD*)v17 = 2621441;
  *(_DWORD*)(v17 + 4) = v9;
  *(_DWORD*)(v17 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v16);
  v20 = nn_sf_hipc_SendSyncRequest_plt(v15, (__int64)v16, 256);
  if (v20 != 0) {
    LODWORD(v21) = v20;
  }
  else {
    v23_.v24 = 0;
    memset(v23_.v23, 0, sizeof(v23_.v23));
    nn_sf_hipc_detail_b8c00((__int64)v23_.v23, v16);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v21 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
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
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v8 + 8LL))(v8, v15);
  return (unsigned int)v21;
}

__attribute__((swiftcall)) void nn_sf_cmif_client_2b45f0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  int v3;
  _QWORD* v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f28a70,
                            memory_order_acquire) &
       1) == 0) {
    v4 = a1;
    v3 = __cxa_guard_acquire_plt((__int64)&SdkData_f28a70);
    a1 = v4;
    if (v3 != 0) {
      nn_sf_cmif_client_2b4680();
      __cxa_guard_release_plt((__int64)&SdkData_f28a70);
      a1 = v4;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_f28c70;
  *a1 = SdkData_f28c70;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__int64 nn_sf_cmif_client_2c36a0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    __int64 v25;
  } v24_;

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
  *(_QWORD*)v12 = 0x1C00000006LL;
  v13 = ((unsigned __int64)v12 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 88) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 16) = 0x149434653LL;
  *(_QWORD*)(v13 + 24) = 0;
  {
    v14 = *a2;
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = a2[1];
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v16 = a2[3];
    __asm__ volatile("" ::"r"(v16));
  }
  *(_QWORD*)(v13 + 48) = a2[2];
  *(_QWORD*)(v13 + 56) = v16;
  *(_QWORD*)(v13 + 32) = v14;
  *(_QWORD*)(v13 + 40) = v15;
  {
    v18 = a3[2];
    __asm__ volatile("" ::"r"(v18));
  }
  {
    v17 = a3[3];
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v20 = *a3;
    __asm__ volatile("" ::"r"(v20));
  }
  {
    v19 = a3[1];
    __asm__ volatile("" ::"r"(v19));
  }
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 80) = v18;
  *(_QWORD*)(v13 + 88) = v17;
  *(_QWORD*)(v13 + 64) = v20;
  *(_QWORD*)(v13 + 72) = v19;
  *(_DWORD*)v13 = 5242881;
  *(_DWORD*)(v13 + 4) = v7;
  *(_DWORD*)(v13 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v21 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v21 != 0) {
    LODWORD(v22) = v21;
  }
  else {
    v24_.v25 = 0;
    memset(v24_.v24, 0, sizeof(v24_.v24));
    nn_sf_hipc_detail_b8c00((__int64)v24_.v24, v12);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v24_.v24[0] + 4LL * BYTE1(v24_.v25) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v22 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v24_.v24[0] + 4LL * BYTE1(v24_.v25) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v22));
      }
      if ((_DWORD)v22 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v22);
      }
    }
    else {
      LODWORD(v22) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 8LL))(v6, v11);
  return (unsigned int)v22;
}

__int64 nn_sf_cmif_client_328d10(__int64 a1, _DWORD* a2, _DWORD* a3,
                                 __int64* a4, __int64* a5)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int* v21;
  __int64 v22;
  unsigned __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v30_;
  __int64 v35;
  struct {
    _QWORD* v36;
    unsigned int* v37;
  } v36_;
  _QWORD v38[4];

  {
    v7 = a4[1];
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *a5;
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = a5[1];
    __asm__ volatile("" ::"r"(v9));
  }
  v10 = a1 + 8;
  {
    v11 = *a4;
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(unsigned __int16**)(v10 + 8);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_DWORD*)(v10 + 16);
    __asm__ volatile("" ::"r"(v13));
  }
  v14 = v9;
  v15 = v8;
  v16 = v7;
  v17 = v11;
  v18 = (**(__int64 (***)(unsigned __int16*))v12)(v12);
  {
    v19 = v12[4];
    __asm__ volatile("" ::"r"(v19));
  }
  LODWORD(v20) = v18;
  v21 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v18);
  LODWORD(v38[3]) = 1310720;
  v36_.v37 = v21;
  v38[0] = 0x110000000000001LL;
  v38[1] = 12;
  v38[2] = 0x800050200000000LL;
  v36_.v36 = v38;
  *(_QWORD*)v21 = 0xC01100006LL;
  v30_.v30 = v17;
  v30_.v31 = v16;
  v30_.v32 = v15;
  v30_.v33 = v14;
  v35 = 0x500000006LL;
  v22 = nn_sf_hipc_detail_SetBuffers(&v36_.v36, 2, (__int64)&v30_.v30,
                                     (__int64)&v35, v19, 48);
  if ((_DWORD)v22 != 0) {
    LODWORD(v26) = v22;
    v20 = (unsigned int)v20;
  }
  else {
    {
      v23 =
          ((unsigned __int64)&v36_.v37[*((unsigned __int8*)v36_.v36 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v23));
    }
    *(_QWORD*)(v23 + 8) = 0;
    *(_DWORD*)v23 = 1048577;
    *(_DWORD*)(v23 + 4) = v13;
    *(_QWORD*)(v23 + 16) = 0x149434653LL;
    *(_QWORD*)(v23 + 24) = 0;
    *(_DWORD*)(v23 + 12) = nn_sf_cmif_GetInlineContext_plt(v22);
    v20 = (unsigned int)v20;
    v24 = nn_sf_hipc_SendSyncRequest_plt(v20, (__int64)v21, 256);
    if (v24 != 0) {
      LODWORD(v26) = v24;
    }
    else {
      v30_.v33 = 0;
      v30_.v34 = 0;
      v30_.v31 = 0;
      v30_.v32 = 0;
      v30_.v30 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v30_.v30, v21);
      v25 = (v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if (*(_DWORD*)((char*)((__int64*)0xCLL) + v25 + 4) == 1329808979) {
        {
          v26 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v26));
        }
        if ((_DWORD)v26 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v26);
        }
        else {
          *(_DWORD*)a2 = *(_DWORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
          *(_DWORD*)a3 = *(_DWORD*)(v25 + 36);
        }
      }
      else {
        LODWORD(v26) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v12 + 8LL))(v12, v20);
  return (unsigned int)v26;
}

__int64 nn_sf_cmif_client_329d80(__int64 a1, __int64** a2, __int64 a3,
                                 _DWORD* a4, __int64* a5, __int64 a6,
                                 __int64 a7, __int64 a8, __int64 a9,
                                 __int64 a10, __int64 a11, unsigned int a12,
                                 __int64* a13)
{
  __int64 v13;
  int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int* v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  int v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  __int64 (***v44)(_QWORD);
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v51;
  unsigned int v52;
  int v54;
  int v55;
  struct {
    _QWORD v56[3];
    __int64 v57;
    __int64 v58;
  } v56_;

  {
    v13 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v17 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v51 = *a2;
    __asm__ volatile("" ::"r"(v51));
  }
  v18 = (**(__int64 (***)(__int64))v13)(v13);
  v19 = v18;
  v20 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v18);
  *(_QWORD*)v20 = 0x8000002C00000006LL;
  v20[2] = 4;
  {
    v21 = *(_DWORD*)a6;
    __asm__ volatile("" ::"r"(v21));
  }
  *(_DWORD*)a6 = 0;
  {
    v22 = *(unsigned __int8*)(a6 + 4);
    __asm__ volatile("" ::"r"(v22));
  }
  *(_BYTE*)(a6 + 4) = 0;
  {
    v23 = *(_DWORD*)a7;
    __asm__ volatile("" ::"r"(v23));
  }
  *(_DWORD*)a7 = 0;
  v55 = v22;
  {
    v24 = *(unsigned __int8*)(a7 + 4);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_BYTE*)(a7 + 4) = 0;
  v52 = v21;
  v20[3] = v21;
  v20[4] = v23;
  v25 = ((unsigned __int64)v20 + 35) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v25 + 144) = 0;
  *(_QWORD*)(v25 + 152) = 0;
  *(_QWORD*)(v25 + 128) = 0;
  *(_QWORD*)(v25 + 136) = 0;
  *(_QWORD*)(v25 + 112) = 0;
  *(_QWORD*)(v25 + 120) = 0;
  *(_QWORD*)(v25 + 96) = 0;
  *(_QWORD*)(v25 + 104) = 0;
  *(_QWORD*)(v25 + 80) = 0;
  *(_QWORD*)(v25 + 88) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  v54 = v24;
  *(_QWORD*)(v25 + 16) = 0x149434653LL;
  *(_QWORD*)(v25 + 24) = a12;
  {
    v26 = *a5;
    __asm__ volatile("" ::"r"(v26));
  }
  {
    v27 = a5[1];
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = a5[3];
    __asm__ volatile("" ::"r"(v28));
  }
  *(_QWORD*)(v25 + 48) = a5[2];
  *(_QWORD*)(v25 + 56) = v28;
  *(_QWORD*)(v25 + 32) = v26;
  *(_QWORD*)(v25 + 40) = v27;
  {
    v29 = a5[4];
    __asm__ volatile("" ::"r"(v29));
  }
  {
    v30 = a5[5];
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = a5[7];
    __asm__ volatile("" ::"r"(v31));
  }
  *(_QWORD*)(v25 + 80) = a5[6];
  *(_QWORD*)(v25 + 88) = v31;
  *(_QWORD*)(v25 + 64) = v29;
  *(_QWORD*)(v25 + 72) = v30;
  {
    v32 = a5[8];
    __asm__ volatile("" ::"r"(v32));
  }
  {
    v33 = a5[9];
    __asm__ volatile("" ::"r"(v33));
  }
  {
    v34 = a5[10];
    __asm__ volatile("" ::"r"(v34));
  }
  {
    v35 = a5[11];
    __asm__ volatile("" ::"r"(v35));
  }
  *(_QWORD*)(v25 + 8) = 0;
  *(_QWORD*)(v25 + 96) = v32;
  *(_QWORD*)(v25 + 104) = v33;
  *(_QWORD*)(v25 + 112) = v34;
  *(_QWORD*)(v25 + 120) = v35;
  *(_QWORD*)(v25 + 144) = a10;
  *(_QWORD*)(v25 + 152) = a11;
  *(_QWORD*)(v25 + 128) = a8;
  *(_QWORD*)(v25 + 136) = a9;
  *(_DWORD*)v25 = 9437185;
  *(_DWORD*)(v25 + 4) = v17;
  *(_DWORD*)(v25 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v20);
  v36 = nn_sf_hipc_SendSyncRequest_plt(v19, (__int64)v20, 256);
  if (v36 != 0) {
    LODWORD(v39) = v36;
    v40 = 0;
    if (v54 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v56_.v57 = 0;
    v56_.v58 = 0;
    memset(v56_.v56, 0, sizeof(v56_.v56));
    nn_sf_hipc_detail_b8c00((__int64)v56_.v56, v20);
    {
      v37 = v56_.v56[0];
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v38 = (v56_.v56[0] + 4LL * BYTE1(v56_.v58) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v38));
    }
    if (*(_DWORD*)((char*)((__int64*)0xCLL) + v38 + 4) == 1329808979) {
      {
        v39 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v56_.v56[0] + 4LL * BYTE1(v56_.v58) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v39));
      }
      if ((_DWORD)v39 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v39);
        v40 = 0;
        if (v54 == 0) {
          goto LABEL_12;
        }
      LABEL_11:
        nn_os_CloseNativeHandle_plt(v23);
        goto LABEL_12;
      }
      *(_DWORD*)a4 = *(_DWORD*)&(
          *(_BYTE(*)[4])0x20LL)[(v56_.v56[0] + 4LL * BYTE1(v56_.v58) + 15) &
                                0xFFFFFFFFFFFFFFF0LL];
      {
        v40 = *(_DWORD*)(v38 + 36);
        __asm__ volatile("" ::"r"(v40));
      }
      {
        v41 = *(_DWORD*)a3;
        __asm__ volatile("" ::"r"(v41));
      }
      *(_DWORD*)a3 = *(_DWORD*)(v37 + 4LL * BYTE3(v56_.v57));
      {
        v42 = *(unsigned __int8*)(a3 + 4);
        __asm__ volatile("" ::"r"(v42));
      }
      *(_BYTE*)(a3 + 4) = 1;
      if (v42 == 1) {
        nn_os_CloseNativeHandle_plt(v41);
      }
      LODWORD(v39) = 0;
      if (v54 != 0) {
        goto LABEL_11;
      }
    }
    else {
      v40 = 0;
      LODWORD(v39) = 108554;
      if (v54 != 0) {
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  if (v55 != 0) {
    nn_os_CloseNativeHandle_plt(v52);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 8LL))(v13, v19);
    if ((_DWORD)v39 != 0) {
      return (unsigned int)v39;
    }
  }
  else {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 8LL))(v13, v19);
    if ((_DWORD)v39 != 0) {
      return (unsigned int)v39;
    }
  }
  {
    v43 = *a13;
    __asm__ volatile("" ::"r"(v43));
  }
  if (v40 != 0) {
    v44 = (__int64 (***)(_QWORD))(
        *(__int64 (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    {
      v45 = (**v44)(v44);
      __asm__ volatile("" ::"r"(v45));
    }
    *(_QWORD*)(v45 + 8) = v13;
    *(_DWORD*)(v45 + 16) = v40;
    *(_BYTE*)v45 = 1;
  }
  else {
    *a13 = 0;
    if (v43 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
    }
  }
  {
    v46 = *a13;
    __asm__ volatile("" ::"r"(v46));
  }
  *a13 = 0;
  {
    v47 = *v51;
    __asm__ volatile("" ::"r"(v47));
  }
  *v51 = v46;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  return (unsigned int)v39;
}

__int64 nn_sf_cmif_client_32a150(__int64 a1, int a2, __int64 a3)
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
  int v16;
  __int64 v17;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v19_;
  _QWORD v24[2];
  struct {
    __int64* v25;
    unsigned int* v26;
  } v25_;
  int v29;

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
  LODWORD(v19_.v22) = 1114112;
  v19_.v19 = 0x1000000000001LL;
  v19_.v20 = 13;
  v19_.v21 = 0x400000002000000LL;
  v25_.v25 = &v19_.v19;
  v25_.v26 = v13;
  *(_QWORD*)v13 = 0xD00010006LL;
  v24[0] = a3;
  v24[1] = 288;
  v29 = 25;
  v14 = nn_sf_hipc_detail_SetBuffers(&v25_.v25, 1, (__int64)v24, (__int64)&v29,
                                     v11, 52);
  if ((_DWORD)v14 != 0) {
    LODWORD(v17) = v14;
    v12 = (unsigned int)v12;
  }
  else {
    {
      v15 =
          ((unsigned __int64)&v25_.v26[*((unsigned __int8*)v25_.v25 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v15));
    }
    *(_DWORD*)(v15 + 32) = a2;
    *(_QWORD*)(v15 + 8) = 0;
    *(_DWORD*)v15 = 1310721;
    *(_DWORD*)(v15 + 4) = v7;
    *(_QWORD*)(v15 + 16) = 0x149434653LL;
    *(_QWORD*)(v15 + 24) = 0;
    *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt(v14);
    v12 = (unsigned int)v12;
    v16 = nn_sf_hipc_SendSyncRequest_plt(v12, (__int64)v13, 256);
    if (v16 != 0) {
      LODWORD(v17) = v16;
    }
    else {
      v19_.v22 = 0;
      v19_.v23 = 0;
      v19_.v20 = 0;
      v19_.v21 = 0;
      v19_.v19 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v19_.v19, v13);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v17 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v19_.v19 + 4LL * BYTE1(v19_.v23) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v17));
        }
        if ((_DWORD)v17 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v17);
        }
      }
      else {
        LODWORD(v17) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v6 + 8LL))(v6, v12);
  return (unsigned int)v17;
}

__int64 nn_sf_cmif_client_32a360(__int64 a1, __int64** a2, __int64 a3,
                                 _DWORD* a4, __int64* a5, __int64 a6,
                                 __int64 a7, __int64 a8, __int64 a9,
                                 __int64 a10, __int64 a11, int a12, __int64 a13,
                                 unsigned int a14, __int64* a15)
{
  __int64 v15;
  __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  __int64 (***v45)(_QWORD);
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v52;
  unsigned int v53;
  int v54;
  int v56;
  int v57;
  struct {
    _QWORD v58[3];
    __int64 v59;
    __int64 v60;
  } v58_;

  {
    v15 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v15));
  }
  {
    v52 = *a2;
    __asm__ volatile("" ::"r"(v52));
  }
  {
    v54 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v54));
  }
  v19 = (**(__int64 (***)(__int64))v15)(v15);
  v20 = v19;
  v21 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v19);
  *(_QWORD*)v21 = 0x8000003000000006LL;
  v21[2] = 5;
  {
    v22 = *(_DWORD*)a6;
    __asm__ volatile("" ::"r"(v22));
  }
  *(_DWORD*)a6 = 0;
  {
    v23 = *(unsigned __int8*)(a6 + 4);
    __asm__ volatile("" ::"r"(v23));
  }
  *(_BYTE*)(a6 + 4) = 0;
  {
    v24 = *(unsigned __int8*)(a7 + 4);
    __asm__ volatile("" ::"r"(v24));
  }
  {
    v25 = *(_DWORD*)a7;
    __asm__ volatile("" ::"r"(v25));
  }
  *(_DWORD*)a7 = 0;
  *(_BYTE*)(a7 + 4) = 0;
  v53 = v22;
  v56 = v24;
  v57 = v23;
  v21[5] = v22;
  v21[6] = v25;
  v26 = ((unsigned __int64)v21 + 43) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v26 + 160) = 0;
  *(_QWORD*)(v26 + 168) = 0;
  *(_QWORD*)(v26 + 144) = 0;
  *(_QWORD*)(v26 + 152) = 0;
  *(_QWORD*)(v26 + 128) = 0;
  *(_QWORD*)(v26 + 136) = 0;
  *(_QWORD*)(v26 + 112) = 0;
  *(_QWORD*)(v26 + 120) = 0;
  *(_QWORD*)(v26 + 96) = 0;
  *(_QWORD*)(v26 + 104) = 0;
  *(_QWORD*)(v26 + 80) = 0;
  *(_QWORD*)(v26 + 88) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 40) = 0;
  *(_QWORD*)(v26 + 16) = 0x149434653LL;
  *(_QWORD*)(v26 + 24) = a14;
  {
    v27 = *a5;
    __asm__ volatile("" ::"r"(v27));
  }
  {
    v28 = a5[1];
    __asm__ volatile("" ::"r"(v28));
  }
  {
    v29 = a5[3];
    __asm__ volatile("" ::"r"(v29));
  }
  *(_QWORD*)(v26 + 48) = a5[2];
  *(_QWORD*)(v26 + 56) = v29;
  *(_QWORD*)(v26 + 32) = v27;
  *(_QWORD*)(v26 + 40) = v28;
  {
    v30 = a5[4];
    __asm__ volatile("" ::"r"(v30));
  }
  {
    v31 = a5[5];
    __asm__ volatile("" ::"r"(v31));
  }
  {
    v32 = a5[7];
    __asm__ volatile("" ::"r"(v32));
  }
  *(_QWORD*)(v26 + 80) = a5[6];
  *(_QWORD*)(v26 + 88) = v32;
  *(_QWORD*)(v26 + 64) = v30;
  *(_QWORD*)(v26 + 72) = v31;
  {
    v33 = a5[8];
    __asm__ volatile("" ::"r"(v33));
  }
  {
    v34 = a5[9];
    __asm__ volatile("" ::"r"(v34));
  }
  {
    v35 = a5[10];
    __asm__ volatile("" ::"r"(v35));
  }
  {
    v36 = a5[11];
    __asm__ volatile("" ::"r"(v36));
  }
  *(_QWORD*)(v26 + 152) = a10;
  *(_QWORD*)(v26 + 160) = a11;
  *(_QWORD*)(v26 + 8) = 0;
  *(_QWORD*)(v26 + 96) = v33;
  *(_QWORD*)(v26 + 104) = v34;
  *(_QWORD*)(v26 + 112) = v35;
  *(_QWORD*)(v26 + 120) = v36;
  *(_QWORD*)(v26 + 136) = a8;
  *(_QWORD*)(v26 + 144) = a9;
  *(_QWORD*)(v26 + 168) = a13;
  *(_DWORD*)(v26 + 128) = a12;
  *(_DWORD*)v26 = 10485761;
  *(_DWORD*)(v26 + 4) = v54;
  *(_DWORD*)(v26 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v21);
  v37 = nn_sf_hipc_SendSyncRequest_plt(v20, (__int64)v21, 256);
  if (v37 != 0) {
    LODWORD(v40) = v37;
    v41 = 0;
    if (v56 != 0) {
      goto LABEL_11;
    }
  }
  else {
    v58_.v59 = 0;
    v58_.v60 = 0;
    memset(v58_.v58, 0, sizeof(v58_.v58));
    nn_sf_hipc_detail_b8c00((__int64)v58_.v58, v21);
    {
      v38 = v58_.v58[0];
      __asm__ volatile("" ::"r"(v38));
    }
    {
      v39 = (v58_.v58[0] + 4LL * BYTE1(v58_.v60) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v39));
    }
    if (*(_DWORD*)((char*)((__int64*)0xCLL) + v39 + 4) == 1329808979) {
      {
        v40 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v58_.v58[0] + 4LL * BYTE1(v58_.v60) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v40));
      }
      if ((_DWORD)v40 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v40);
        v41 = 0;
        if (v56 == 0) {
          goto LABEL_12;
        }
      LABEL_11:
        nn_os_CloseNativeHandle_plt(v25);
        goto LABEL_12;
      }
      *(_DWORD*)a4 = *(_DWORD*)&(
          *(_BYTE(*)[4])0x20LL)[(v58_.v58[0] + 4LL * BYTE1(v58_.v60) + 15) &
                                0xFFFFFFFFFFFFFFF0LL];
      {
        v41 = *(_DWORD*)(v39 + 36);
        __asm__ volatile("" ::"r"(v41));
      }
      {
        v42 = *(_DWORD*)a3;
        __asm__ volatile("" ::"r"(v42));
      }
      *(_DWORD*)a3 = *(_DWORD*)(v38 + 4LL * BYTE3(v58_.v59));
      {
        v43 = *(unsigned __int8*)(a3 + 4);
        __asm__ volatile("" ::"r"(v43));
      }
      *(_BYTE*)(a3 + 4) = 1;
      if (v43 == 1) {
        nn_os_CloseNativeHandle_plt(v42);
      }
      LODWORD(v40) = 0;
      if (v56 != 0) {
        goto LABEL_11;
      }
    }
    else {
      v41 = 0;
      LODWORD(v40) = 108554;
      if (v56 != 0) {
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  if (v57 != 0) {
    nn_os_CloseNativeHandle_plt(v53);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 8LL))(v15, v20);
    if ((_DWORD)v40 != 0) {
      return (unsigned int)v40;
    }
  }
  else {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 8LL))(v15, v20);
    if ((_DWORD)v40 != 0) {
      return (unsigned int)v40;
    }
  }
  {
    v44 = *a15;
    __asm__ volatile("" ::"r"(v44));
  }
  if (v41 != 0) {
    v45 = (__int64 (***)(_QWORD))(
        *(__int64 (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    {
      v46 = (**v45)(v45);
      __asm__ volatile("" ::"r"(v46));
    }
    *(_QWORD*)(v46 + 8) = v15;
    *(_DWORD*)(v46 + 16) = v41;
    *(_BYTE*)v46 = 1;
  }
  else {
    *a15 = 0;
    if (v44 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
    }
  }
  {
    v47 = *a15;
    __asm__ volatile("" ::"r"(v47));
  }
  *a15 = 0;
  {
    v48 = *v52;
    __asm__ volatile("" ::"r"(v48));
  }
  *v52 = v47;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
  }
  return (unsigned int)v40;
}

__int64 nn_sf_cmif_client_40e750(__int64 a1, _DWORD* a2, __int64* a3, int a4)
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

  {
    v6 = a3[1];
    __asm__ volatile("" ::"r"(v6));
  }
  v7 = a1 + 8;
  {
    v8 = *a3;
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v10 = *(_DWORD*)(v7 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v12 = v6;
  v13 = v8;
  {
    v9 = *(unsigned __int16**)(v7 + 8);
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
  v24_.v24 = 0x10000000000001LL;
  v24_.v25 = 13;
  v24_.v26 = 0x500000200000000LL;
  v31_.v31 = &v24_.v24;
  v31_.v32 = v18;
  *(_QWORD*)v18 = 0xD00100006LL;
  v30[0] = v13;
  v30[1] = v12;
  v24_.v29 = 5;
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
    *(_QWORD*)(v20 + 24) = 0;
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

__int64 nn_sf_cmif_client_496830(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, int a10, unsigned int a11)
{
  unsigned __int16* v11;
  int v12;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  unsigned int* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v38_;
  __int64 v43;
  struct {
    _QWORD* v44;
    unsigned int* v45;
  } v44_;
  struct {
    _QWORD v46[3];
    int v47;
  } v46_;

  {
    v11 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v12));
  }
  v18 = (**(__int64 (***)(unsigned __int16*))v11)(v11);
  {
    v19 = v11[4];
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = v18;
  v21 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v18);
  v46_.v47 = 1966080;
  v44_.v44 = v46_.v46;
  v44_.v45 = v21;
  v46_.v46[0] = 0x22000000000101LL;
  v46_.v46[1] = 0x280000010LL;
  v46_.v46[2] = 0xE00000804000300LL;
  *(_QWORD*)v21 = 0x8000001000220006LL;
  v21[2] = 2;
  v38_.v38 = a4;
  v38_.v39 = a5;
  v38_.v40 = a6;
  v38_.v41 = a7;
  v43 = 0x2100000021LL;
  v22 = nn_sf_hipc_detail_SetBuffers(&v44_.v44, 2, (__int64)&v38_.v38,
                                     (__int64)&v43, v19, 64);
  if ((_DWORD)v22 != 0) {
    LODWORD(v32) = v22;
    goto LABEL_19;
  }
  {
    v23 = *(_DWORD*)a8;
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = *(unsigned __int8*)(a8 + 4);
    __asm__ volatile("" ::"r"(v24));
  }
  *(_DWORD*)a8 = 0;
  *(_BYTE*)(a8 + 4) = 0;
  v44_.v45[*((unsigned __int8*)v44_.v44 + 17)] = v23;
  {
    v25 = &v44_.v45[*((unsigned __int8*)v44_.v44 + 23)];
    __asm__ volatile("" ::"r"(v25));
  }
  v26 = ((unsigned __int64)v25 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v27 = (__int64)v25 - v26 + 64;
  if (v27 == -1 || v27 == 15) {
    v29 = v26 + 32;
    *(_DWORD*)(v26 + 36) = 0;
  }
  else {
    *(_QWORD*)(v26 + 32) = 0;
    *(_QWORD*)(v26 + 40) = 0;
    v29 = v26 + 32;
  }
  *(_QWORD*)(v26 + 16) = 0x149434653LL;
  *(_QWORD*)(v26 + 24) = a11;
  *(_QWORD*)(v29 + 8) = a9;
  *(_DWORD*)(v26 + 32) = a10;
  *(_QWORD*)(v29 - 24) = 0;
  *(_DWORD*)(v29 - 32) = 2097153;
  *(_DWORD*)(v29 - 28) = v12;
  *(_DWORD*)(v26 + 12) = nn_sf_cmif_GetInlineContext_plt(v22);
  v30 = nn_sf_hipc_SendSyncRequest_plt(v20, (__int64)v21, 256);
  if (v30 != 0) {
    LODWORD(v32) = v30;
    if (v24 == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v38_.v41 = 0;
  v38_.v42 = 0;
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38 = 0;
  nn_sf_hipc_detail_b8c00((__int64)&v38_.v38, v21);
  v31 = v38_.v38;
  if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                 ((v38_.v38 + 4LL * BYTE1(v38_.v42) + 15) &
                  0xFFFFFFFFFFFFFFF0LL) +
                 4) != 1329808979) {
    LODWORD(v32) = 108554;
    if ((v24 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  {
    v32 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                      ((v38_.v38 + 4LL * BYTE1(v38_.v42) + 15) &
                       0xFFFFFFFFFFFFFFF0LL));
    __asm__ volatile("" ::"r"(v32));
  }
  if ((_DWORD)v32 != 0) {
    nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v32);
    if ((v24 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  *(_DWORD*)a2 = *(_DWORD*)&(
      *(_BYTE(*)[4])0x20LL)[(v38_.v38 + 4LL * BYTE1(v38_.v42) + 15) &
                            0xFFFFFFFFFFFFFFF0LL];
  {
    v33 = *(_DWORD*)a3;
    __asm__ volatile("" ::"r"(v33));
  }
  *(_DWORD*)a3 = *(_DWORD*)(v31 + 4LL * BYTE3(v38_.v41));
  {
    v34 = *(unsigned __int8*)(a3 + 4);
    __asm__ volatile("" ::"r"(v34));
  }
  *(_BYTE*)(a3 + 4) = 1;
  if (v34 == 1) {
    nn_os_CloseNativeHandle_plt(v33);
  }
  LODWORD(v32) = 0;
  if ((v24 & 1) != 0) {
  LABEL_18:
    nn_os_CloseNativeHandle_plt(v23);
  }
LABEL_19:
  (*(void (**)(unsigned __int16*, _QWORD))(*(_QWORD*)v11 + 8LL))(v11, v20);
  return (unsigned int)v32;
}

__int64 nn_sf_cmif_client_57ea10(__int64 a1, __int64 a2, int a3,
                                 unsigned int a4)
{
  __int64 v4;
  int v5;
  __int64 v9;
  unsigned int v10;
  unsigned int* v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    __int64 v17;
  } v16_;

  {
    v5 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = *(_QWORD*)(a1 + 8);
    __asm__ volatile("" ::"r"(v4));
  }
  v9 = (**(__int64 (***)(__int64))v4)(v4);
  v10 = v9;
  v11 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v9);
  *(_QWORD*)v11 = 0xF00000006LL;
  v12 = ((unsigned __int64)v11 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)(v12 + 24) = a4;
  *(_QWORD*)(v12 + 32) = a2;
  *(_DWORD*)(v12 + 40) = a3;
  *(_DWORD*)v12 = 1835009;
  *(_DWORD*)(v12 + 4) = v5;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0x149434653LL;
  *(_DWORD*)(v12 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v11);
  v13 = nn_sf_hipc_SendSyncRequest_plt(v10, (__int64)v11, 256);
  if (v13 != 0) {
    LODWORD(v14) = v13;
  }
  else {
    v16_.v17 = 0;
    memset(v16_.v16, 0, sizeof(v16_.v16));
    nn_sf_hipc_detail_b8c00((__int64)v16_.v16, v11);
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
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 8LL))(v4, v10);
  return (unsigned int)v14;
}

__int64 nn_sf_cmif_client_584460(__int64 a1, __int64 a2, int a3, __int64 a4,
                                 __int64 a5, unsigned int a6)
{
  unsigned __int16* v6;
  int v7;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    char gap40_[4];
    int v27;
  } v22_;
  _QWORD v28[2];
  struct {
    __int64* v29;
    unsigned int* v30;
  } v29_;

  {
    v7 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v6 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  v13 = (**(__int64 (***)(unsigned __int16*))v6)(v6);
  {
    v14 = v6[4];
    __asm__ volatile("" ::"r"(v14));
  }
  LODWORD(v15) = v13;
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v13);
  LODWORD(v22_.v25) = 1310720;
  v22_.v22 = 0x10000000000001LL;
  v22_.v23 = 15;
  v22_.v24 = 0x500000200000000LL;
  v29_.v29 = &v22_.v22;
  v29_.v30 = v16;
  *(_QWORD*)v16 = 0xF00100006LL;
  v28[0] = a4;
  v28[1] = a5;
  v22_.v27 = 5;
  v17 = nn_sf_hipc_detail_SetBuffers(&v29_.v29, 1, (__int64)v28,
                                     (__int64)&v22_.v27, v14, 60);
  if ((_DWORD)v17 != 0) {
    LODWORD(v20) = v17;
    v15 = (unsigned int)v15;
  }
  else {
    {
      v18 =
          ((unsigned __int64)&v29_.v30[*((unsigned __int8*)v29_.v29 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(v18 + 24) = a6;
    *(_QWORD*)(v18 + 32) = a2;
    *(_DWORD*)(v18 + 40) = a3;
    *(_DWORD*)v18 = 1835009;
    *(_DWORD*)(v18 + 4) = v7;
    *(_QWORD*)(v18 + 8) = 0;
    *(_QWORD*)(v18 + 16) = 0x149434653LL;
    *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v17);
    v15 = (unsigned int)v15;
    v19 = nn_sf_hipc_SendSyncRequest_plt(v15, (__int64)v16, 256);
    if (v19 != 0) {
      LODWORD(v20) = v19;
    }
    else {
      v22_.v25 = 0;
      v22_.v26 = 0;
      v22_.v23 = 0;
      v22_.v24 = 0;
      v22_.v22 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v22_.v22, v16);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v20));
        }
        if ((_DWORD)v20 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
        }
      }
      else {
        LODWORD(v20) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v6 + 8LL))(v6, v15);
  return (unsigned int)v20;
}

__int64 nn_sf_cmif_client_584800(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 int a5, unsigned int a6)
{
  unsigned __int16* v6;
  int v7;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned int* v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  struct {
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    char gap40_[4];
    int v27;
  } v22_;
  _QWORD v28[2];
  struct {
    __int64* v29;
    unsigned int* v30;
  } v29_;

  {
    v7 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v6 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  v13 = (**(__int64 (***)(unsigned __int16*))v6)(v6);
  {
    v14 = v6[4];
    __asm__ volatile("" ::"r"(v14));
  }
  LODWORD(v15) = v13;
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v13);
  LODWORD(v22_.v25) = 1310720;
  v22_.v22 = 0x10000000000001LL;
  v22_.v23 = 15;
  v22_.v24 = 0x500000200000000LL;
  v29_.v29 = &v22_.v22;
  v29_.v30 = v16;
  *(_QWORD*)v16 = 0xF00100006LL;
  v28[0] = a3;
  v28[1] = a4;
  v22_.v27 = 5;
  v17 = nn_sf_hipc_detail_SetBuffers(&v29_.v29, 1, (__int64)v28,
                                     (__int64)&v22_.v27, v14, 60);
  if ((_DWORD)v17 != 0) {
    LODWORD(v20) = v17;
    v15 = (unsigned int)v15;
  }
  else {
    {
      v18 =
          ((unsigned __int64)&v29_.v30[*((unsigned __int8*)v29_.v29 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v18));
    }
    *(_QWORD*)(v18 + 24) = a6;
    *(_QWORD*)(v18 + 32) = a2;
    *(_DWORD*)(v18 + 40) = a5;
    *(_DWORD*)v18 = 1835009;
    *(_DWORD*)(v18 + 4) = v7;
    *(_QWORD*)(v18 + 8) = 0;
    *(_QWORD*)(v18 + 16) = 0x149434653LL;
    *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v17);
    v15 = (unsigned int)v15;
    v19 = nn_sf_hipc_SendSyncRequest_plt(v15, (__int64)v16, 256);
    if (v19 != 0) {
      LODWORD(v20) = v19;
    }
    else {
      v22_.v25 = 0;
      v22_.v26 = 0;
      v22_.v23 = 0;
      v22_.v24 = 0;
      v22_.v22 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v22_.v22, v16);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v20));
        }
        if ((_DWORD)v20 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
        }
      }
      else {
        LODWORD(v20) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v6 + 8LL))(v6, v15);
  return (unsigned int)v20;
}

__int64 nn_sf_cmif_client_58a2e0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v16;
  unsigned int v17;
  int* v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  struct {
    _QWORD v24[3];
    __int64 v25;
    __int64 v26;
  } v24_;

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
  *(_QWORD*)(v13 + 24) = 2;
  *(_DWORD*)(v13 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v14 = v11;
  v15 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v15 != 0) {
    LODWORD(v16) = v15;
  }
  else {
    v24_.v25 = 0;
    v24_.v26 = 0;
    memset(v24_.v24, 0, sizeof(v24_.v24));
    nn_sf_hipc_detail_b8c00((__int64)v24_.v24, v12);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v24_.v24[0] + 4LL * BYTE1(v24_.v26) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v16 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v24_.v24[0] + 4LL * BYTE1(v24_.v26) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v16));
      }
      if ((_DWORD)v16 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v16);
      }
      else {
        {
          v17 = *(_DWORD*)a2;
          __asm__ volatile("" ::"r"(v17));
        }
        {
          v18 = (int*)(v24_.v24[0] + 4LL * BYTE3(v24_.v25));
          __asm__ volatile("" ::"r"(v18));
        }
        {
          v19 = *v18;
          __asm__ volatile("" ::"r"(v19));
        }
        {
          v20 = v18[1];
          __asm__ volatile("" ::"r"(v20));
        }
        LODWORD(v18) = *(unsigned __int8*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = 1;
        *(_DWORD*)a2 = v19;
        if ((_DWORD)v18 == 1) {
          nn_os_CloseNativeHandle_plt(v17);
        }
        {
          v21 = *(_DWORD*)a3;
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = *(unsigned __int8*)(a3 + 4);
          __asm__ volatile("" ::"r"(v22));
        }
        *(_DWORD*)a3 = v20;
        *(_BYTE*)(a3 + 4) = 1;
        if (v22 == 1) {
          nn_os_CloseNativeHandle_plt(v21);
        }
        LODWORD(v16) = 0;
      }
    }
    else {
      LODWORD(v16) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 8LL))(v6, v14);
  return (unsigned int)v16;
}

__int64 nn_sf_cmif_client_58bd60(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 unsigned int a5)
{
  unsigned __int16* v5;
  int v6;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;
  _QWORD v25[2];
  struct {
    __int64* v26;
    unsigned int* v27;
    char gap80_[28];
    int v28;
  } v26_;

  {
    v6 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v5 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  v11 = (**(__int64 (***)(unsigned __int16*))v5)(v5);
  {
    v12 = v5[4];
    __asm__ volatile("" ::"r"(v12));
  }
  LODWORD(v13) = v11;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v11);
  LODWORD(v20_.v23) = 1310738;
  v20_.v20 = 0x100000000000001LL;
  v20_.v21 = 3085;
  v20_.v22 = 0x500020000000000LL;
  v26_.v26 = &v20_.v20;
  v26_.v27 = v14;
  *(_QWORD*)v14 = 0xC0D01000006LL;
  v25[0] = a2;
  v25[1] = a3;
  v26_.v28 = 50;
  v15 = nn_sf_hipc_detail_SetBuffers(&v26_.v26, 1, (__int64)v25,
                                     (__int64)&v26_.v28, v12, 52);
  if ((_DWORD)v15 != 0) {
    LODWORD(v18) = v15;
    v13 = (unsigned int)v13;
  }
  else {
    {
      v16 =
          ((unsigned __int64)&v26_.v27[*((unsigned __int8*)v26_.v26 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v16));
    }
    *(_DWORD*)(v16 + 32) = a4;
    *(_QWORD*)(v16 + 8) = 0;
    *(_DWORD*)v16 = 1310721;
    *(_DWORD*)(v16 + 4) = v6;
    *(_QWORD*)(v16 + 16) = 0x149434653LL;
    *(_QWORD*)(v16 + 24) = a5;
    *(_DWORD*)(v16 + 12) = nn_sf_cmif_GetInlineContext_plt(v15);
    v13 = (unsigned int)v13;
    v17 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
    if (v17 != 0) {
      LODWORD(v18) = v17;
    }
    else {
      v20_.v23 = 0;
      v20_.v24 = 0;
      v20_.v21 = 0;
      v20_.v22 = 0;
      v20_.v20 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v20_.v20, v14);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v20_.v20 + 4LL * BYTE1(v20_.v24) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v18 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v20_.v20 + 4LL * BYTE1(v20_.v24) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v18));
        }
        if ((_DWORD)v18 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v18);
        }
      }
      else {
        LODWORD(v18) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v5 + 8LL))(v5, v13);
  return (unsigned int)v18;
}

__int64 nn_sf_cmif_client_5cda10(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4,
                                 __int64 a5, __int64 a6, _DWORD* a7, int a8,
                                 __int64 a9, __int64 a10, unsigned int a11)
{
  unsigned __int16* v11;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned int v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v33_;
  struct {
    _QWORD* v39;
    unsigned int* v40;
  } v39_;
  struct {
    _QWORD v41[3];
    int v42;
  } v41_;

  {
    v11 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v16 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v16));
  }
  v17 = (**(__int64 (***)(unsigned __int16*))v11)(v11);
  {
    v18 = v11[4];
    __asm__ volatile("" ::"r"(v18));
  }
  v30 = v17;
  v19 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v17);
  v41_.v42 = 1572864;
  v39_.v39 = v41_.v41;
  v39_.v40 = v19;
  v41_.v41[0] = 0x210000000000001LL;
  v41_.v41[1] = 13;
  v41_.v41[2] = 0xB00050200000000LL;
  *(_QWORD*)v19 = 0xD02100006LL;
  v33_.v33 = a2;
  v33_.v34 = a3;
  v33_.v35 = a5;
  v33_.v36 = a6;
  v33_.v37 = a9;
  v33_.v38 = a10;
  v31_.v31 = 0x600000006LL;
  v31_.v32 = 5;
  v20 = nn_sf_hipc_detail_SetBuffers(&v39_.v39, 3, (__int64)&v33_.v33,
                                     (__int64)&v31_.v31, v18, 52);
  if ((_DWORD)v20 != 0) {
    LODWORD(v25) = v20;
    v22 = v30;
  }
  else {
    {
      v21 =
          ((unsigned __int64)&v39_.v40[*((unsigned __int8*)v39_.v39 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v21));
    }
    *(_QWORD*)(v21 + 24) = a11;
    *(_DWORD*)(v21 + 32) = a8;
    *(_DWORD*)v21 = 1310721;
    *(_DWORD*)(v21 + 4) = v16;
    *(_QWORD*)(v21 + 8) = 0;
    *(_QWORD*)(v21 + 16) = 0x149434653LL;
    *(_DWORD*)(v21 + 12) = nn_sf_cmif_GetInlineContext_plt(v20);
    v22 = v30;
    v23 = nn_sf_hipc_SendSyncRequest_plt(v30, (__int64)v19, 256);
    if (v23 != 0) {
      LODWORD(v25) = v23;
    }
    else {
      v33_.v36 = 0;
      v33_.v37 = 0;
      v33_.v34 = 0;
      v33_.v35 = 0;
      v33_.v33 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v33_.v33, v19);
      v24 = (v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if (*(_DWORD*)((char*)((__int64*)0xCLL) + v24 + 4) == 1329808979) {
        {
          v25 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v25));
        }
        if ((_DWORD)v25 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v25);
        }
        else {
          *(_DWORD*)a4 = *(_DWORD*)&(
              *(_BYTE(*)[4])0x20LL)[(v33_.v33 + 4LL * BYTE1(v33_.v37) + 15) &
                                    0xFFFFFFFFFFFFFFF0LL];
          *(_DWORD*)a7 = *(_DWORD*)(v24 + 36);
        }
      }
      else {
        LODWORD(v25) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v11 + 8LL))(v11, v22);
  return (unsigned int)v25;
}

__int64 nn_sf_cmif_client_761590(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int16 a6, int a7,
                                 unsigned int a8)
{
  unsigned __int16* v8;
  int v9;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned int v26;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    char gap56_[4];
    int v32;
  } v27_;
  _QWORD v33[2];
  struct {
    __int64* v34;
    unsigned int* v35;
  } v34_;

  {
    v8 = *(unsigned __int16**)(a1 + 8);
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v9));
  }
  v16 = (**(__int64 (***)(unsigned __int16*))v8)(v8);
  {
    v17 = v8[4];
    __asm__ volatile("" ::"r"(v17));
  }
  v26 = v16;
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v16);
  LODWORD(v27_.v30) = 1572864;
  v27_.v27 = 0x11000000000001LL;
  v27_.v28 = 17;
  v27_.v29 = 0x700000402000000LL;
  v34_.v34 = &v27_.v27;
  v34_.v35 = v18;
  *(_QWORD*)v18 = 0x1100110006LL;
  v33[0] = a4;
  v33[1] = a5;
  v27_.v32 = 33;
  v19 = nn_sf_hipc_detail_SetBuffers(&v34_.v34, 1, (__int64)v33,
                                     (__int64)&v27_.v32, v17, 68);
  if ((_DWORD)v19 != 0) {
    LODWORD(v23) = v19;
    v21 = v26;
  }
  else {
    {
      v20 =
          ((unsigned __int64)&v34_.v35[*((unsigned __int8*)v34_.v34 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v20));
    }
    *(_WORD*)(v20 + 36) = WORD2(a2);
    *(_WORD*)(v20 + 46) = 0;
    *(_DWORD*)(v20 + 32) = a2;
    *(_DWORD*)(v20 + 38) = a3;
    *(_WORD*)(v20 + 44) = a6;
    *(_QWORD*)(v20 + 8) = 0;
    *(_WORD*)(v20 + 42) = WORD2(a3);
    *(_DWORD*)(v20 + 48) = a7;
    *(_DWORD*)v20 = 2359297;
    *(_DWORD*)(v20 + 4) = v9;
    *(_QWORD*)(v20 + 16) = 0x149434653LL;
    *(_QWORD*)(v20 + 24) = a8;
    *(_DWORD*)(v20 + 12) = nn_sf_cmif_GetInlineContext_plt(v19);
    v21 = v26;
    v22 = nn_sf_hipc_SendSyncRequest_plt(v26, (__int64)v18, 256);
    if (v22 != 0) {
      LODWORD(v23) = v22;
    }
    else {
      v27_.v30 = 0;
      v27_.v31 = 0;
      v27_.v28 = 0;
      v27_.v29 = 0;
      v27_.v27 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v27_.v27, v18);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v23 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v23));
        }
        if ((_DWORD)v23 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v23);
        }
      }
      else {
        LODWORD(v23) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v8 + 8LL))(v8, v21);
  return (unsigned int)v23;
}

#pragma GCC visibility pop
