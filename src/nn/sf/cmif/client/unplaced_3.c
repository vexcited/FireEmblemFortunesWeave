#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nvidia_5f9020(PSEUDO_X8, int*);
__attribute__((swiftcall)) void nvidia_5f90c0(PSEUDO_X8, __int64**);
__int64 NvOsAtomicCompareExchange32_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsGetConfigU32_plt(_QWORD, _QWORD);
__int64 SdkRoutine_5f9580(unsigned __int8**, int, __int64, __int64,
                          unsigned __int64, __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_client_QueryPointerBufferSize_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 strcmp_plt(void* this_, const char*, const char*);
extern _UNKNOWN SdkData_103f138;
extern __int64 SdkData_103f140;
extern __int64 SdkData_103f148;
extern char SdkData_103f130;
extern char SdkData_103f131;
extern char SdkData_103f132;
extern int SdkData_103f134;
__int64 nn_sf_cmif_client_2b5200(__int64 a1, _DWORD* a2, __int64 a3, int a4,
                                 __int64* a5);
__int64 nn_sf_cmif_client_2c5280(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, int a7,
                                 unsigned int a8);
__int64 nn_sf_cmif_client_2c5450(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 int a9, unsigned int a10);
__int64 nn_sf_cmif_client_2c562c(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 int a9, unsigned int a10);
__int64 nn_sf_cmif_client_400b70(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 nn_sf_cmif_client_5fa020(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, __int64 a10, _DWORD* a11,
                                 unsigned int a12);
__int64 nn_sf_cmif_client_5fa220(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, __int64 a10, _DWORD* a11,
                                 unsigned int a12);
__int64 nn_sf_cmif_client_5fa4e0(void* a1, __int64 a2, const char* a3);
__int64 nn_sf_cmif_client_5fa590(int* a1);
__int64 nn_sf_cmif_client_6fc1a0(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4);
__int64 nn_sf_cmif_client_73b650(__int64 a1, _BYTE* a2, _QWORD* a3);
__int64 nn_sf_cmif_client_73b8e0(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 __int64 a5, int a6, unsigned int a7);

__int64 nn_sf_cmif_client_2b5200(__int64 a1, _DWORD* a2, __int64 a3, int a4,
                                 __int64* a5)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v24_;
  _QWORD v29[2];
  struct {
    __int64* v30;
    unsigned int* v31;
  } v30_;
  int v34;

  v7 = a5[1];
  v8 = a1 + 8;
  v9 = *a5;
  v10 = *(unsigned int*)(v8 + 4);
  v11 = v7;
  v12 = v9;
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v8);
  LODWORD(v24_.v27) = 0x100000;
  v24_.v24 = 0x10000000000101LL;
  v24_.v25 = 0x280000009LL;
  v24_.v26 = 0x700000400000300LL;
  v30_.v30 = &v24_.v24;
  v30_.v31 = v16;
  *(_QWORD*)v16 = 0x8000000900100006LL;
  v16[2] = 2;
  v29[0] = v12;
  v29[1] = v11;
  v34 = 5;
  v17 = nn_sf_hipc_detail_SetBuffers(&v30_.v30, 1, (__int64)v29, (__int64)&v34,
                                     0, 36);
  if ((_DWORD)v17 != 0) {
    LODWORD(v22) = v17;
    return (unsigned int)v22;
  }
  v18 = *(_DWORD*)a3;
  v19 = *(unsigned __int8*)(a3 + 4);
  *(_DWORD*)a3 = 0;
  *(_BYTE*)(a3 + 4) = 0;
  v30_.v31[*((unsigned __int8*)v30_.v30 + 17)] = v18;
  v20 = ((unsigned __int64)&v30_.v31[*((unsigned __int8*)v30_.v30 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v20 = 0x149434653LL;
  *(_QWORD*)(v20 + 8) = 0;
  *(_DWORD*)(v20 + 16) = a4;
  *(_DWORD*)(v20 + 12) = nn_sf_cmif_GetInlineContext_plt(v17);
  v21 = nn_sf_hipc_SendSyncRequest_plt(v10, v16, 256);
  if (v21 != 0) {
    LODWORD(v22) = v21;
    if (v19 == 0) {
      return (unsigned int)v22;
    }
    goto LABEL_10;
  }
  v24_.v27 = 0;
  v24_.v28 = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v24 = 0;
  nn_sf_hipc_detail_b8c00((__int64)&v24_.v24, v16);
  if (*(_DWORD*)((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                 0xFFFFFFFFFFFFFFF0LL) != 1329808979) {
    LODWORD(v22) = 108554;
    if ((v19 & 1) == 0) {
      return (unsigned int)v22;
    }
    goto LABEL_10;
  }
  v22 = *(__int64*)((char*)((__int64*)0x4LL) +
                    ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                     0xFFFFFFFFFFFFFFF0LL) +
                    4);
  if ((_DWORD)v22 != 0) {
    nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v22);
    if ((v19 & 1) == 0) {
      return (unsigned int)v22;
    }
    goto LABEL_10;
  }
  *a2 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v24_.v24 + 4LL * BYTE1(v24_.v28) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4);
  if ((v19 & 1) != 0) {
  LABEL_10:
    nn_os_CloseNativeHandle_plt(v18);
  }
  return (unsigned int)v22;
}

__int64 nn_sf_cmif_client_2c5280(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, int a7,
                                 unsigned int a8)
{
  __int64 v8;
  unsigned int* v16;
  int v17;
  unsigned __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v30_;
  _QWORD v35[2];
  struct {
    __int64* v36;
    unsigned int* v37;
  } v36_;
  int v38;

  v8 = *(unsigned int*)(a1 + 4);
  v16 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v30_.v33) = 2359296;
  v30_.v30 = 0x10000000000101LL;
  v30_.v31 = 0x18000001CLL;
  v30_.v32 = 0x800000500000003LL;
  v36_.v36 = &v30_.v30;
  v36_.v37 = v16;
  *(_QWORD*)v16 = 0x8000001C00100006LL;
  v16[2] = 1;
  v35[0] = a3;
  v35[1] = a4;
  v38 = 69;
  v17 = nn_sf_hipc_detail_SetBuffers(&v36_.v36, 1, (__int64)v35, (__int64)&v38,
                                     0, 112);
  if (v17 != 0) {
    goto LABEL_9;
  }
  v19 = ((unsigned __int64)&v36_.v37[*((unsigned __int8*)v36_.v36 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v19 = 0x149434653LL;
  *(_QWORD*)(v19 + 8) = a8;
  memset_plt((void*)(v19 + 16), nullptr, 80);
  v20 = memcpy_plt(v19 + 16, a5, 64);
  *(_QWORD*)(v19 + 88) = a6;
  *(_DWORD*)(v19 + 80) = a7;
  *(_DWORD*)(v19 + 12) = nn_sf_cmif_GetInlineContext_plt(v20);
  v17 = nn_sf_hipc_SendSyncRequest_plt(v8, v16, 256);
  if (v17 != 0) {
  LABEL_9:
    LODWORD(v24) = v17;
  }
  else {
    v30_.v33 = 0;
    v30_.v34 = 0;
    v30_.v31 = 0;
    v30_.v32 = 0;
    v30_.v30 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v30_.v30, v16);
    v21 = (_DWORD*)((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                    0xFFFFFFFFFFFFFFF0LL);
    v23 = *v21;
    v22 = (__int64*)(v21 + 4);
    if (v23 == 1329808979) {
      v24 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v24 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v24);
      }
      else {
        v25 = *v22;
        v26 = v22[1];
        v28 = v22[2];
        v27 = v22[3];
        a2[2] = v28;
        a2[3] = v27;
        *a2 = v25;
        a2[1] = v26;
      }
    }
    else {
      LODWORD(v24) = 108554;
    }
  }
  return (unsigned int)v24;
}

__int64 nn_sf_cmif_client_2c5450(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 int a9, unsigned int a10)
{
  __int64 v10;
  unsigned int* v18;
  int v19;
  unsigned __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v32_;
  struct {
    _QWORD* v37;
    unsigned int* v38;
  } v37_;
  struct {
    _QWORD v39[3];
    int v40;
  } v39_;
  __int64 v41;

  v10 = *(unsigned int*)(a1 + 4);
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v39_.v40 = 2555904;
  v37_.v37 = v39_.v39;
  v37_.v38 = v18;
  v39_.v39[0] = 0x20000000000101LL;
  v39_.v39[1] = 0x18000001CLL;
  v39_.v39[2] = 0xB00000500000003LL;
  *(_QWORD*)v18 = 0x8000001C00200006LL;
  v18[2] = 1;
  v32_.v34 = a3;
  v32_.v35 = a4;
  v32_.v32 = a6;
  v32_.v33 = a7;
  v41 = 0x4500000015LL;
  v19 = nn_sf_hipc_detail_SetBuffers(&v37_.v37, 2, (__int64)&v32_.v32,
                                     (__int64)&v41, 0, 112);
  if (v19 != 0) {
    goto LABEL_9;
  }
  v21 = ((unsigned __int64)&v37_.v38[*((unsigned __int8*)v37_.v37 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v21 = 0x149434653LL;
  *(_QWORD*)(v21 + 8) = a10;
  memset_plt((void*)(v21 + 16), nullptr, 80);
  v22 = memcpy_plt(v21 + 16, a5, 64);
  *(_QWORD*)(v21 + 88) = a8;
  *(_DWORD*)(v21 + 80) = a9;
  *(_DWORD*)(v21 + 12) = nn_sf_cmif_GetInlineContext_plt(v22);
  v19 = nn_sf_hipc_SendSyncRequest_plt(v10, v18, 256);
  if (v19 != 0) {
  LABEL_9:
    LODWORD(v26) = v19;
  }
  else {
    v32_.v35 = 0;
    v32_.v36 = 0;
    v32_.v33 = 0;
    v32_.v34 = 0;
    v32_.v32 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v32_.v32, v18);
    v23 = (_DWORD*)((v32_.v32 + 4LL * BYTE1(v32_.v36) + 15) &
                    0xFFFFFFFFFFFFFFF0LL);
    v25 = *v23;
    v24 = (__int64*)(v23 + 4);
    if (v25 == 1329808979) {
      v26 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v32_.v32 + 4LL * BYTE1(v32_.v36) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v26 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v26);
      }
      else {
        v27 = *v24;
        v28 = v24[1];
        v30 = v24[2];
        v29 = v24[3];
        a2[2] = v30;
        a2[3] = v29;
        *a2 = v27;
        a2[1] = v28;
      }
    }
    else {
      LODWORD(v26) = 108554;
    }
  }
  return (unsigned int)v26;
}

__int64 nn_sf_cmif_client_2c562c(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 int a9, unsigned int a10)
{
  __int64 v10;
  unsigned int* v18;
  int v19;
  unsigned __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v32_;
  struct {
    _QWORD* v37;
    unsigned int* v38;
  } v37_;
  struct {
    _QWORD v39[3];
    int v40;
  } v39_;
  __int64 v41;

  v10 = *(unsigned int*)(a1 + 4);
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v39_.v40 = 2359296;
  v39_.v39[0] = 0x20000000000001LL;
  v39_.v39[1] = 28;
  v39_.v39[2] = 0x800000200000000LL;
  v37_.v37 = v39_.v39;
  v37_.v38 = v18;
  *(_QWORD*)v18 = 0x1C00200006LL;
  v32_.v34 = a3;
  v32_.v35 = a4;
  v32_.v32 = a6;
  v32_.v33 = a7;
  v41 = 0x4500000015LL;
  v19 = nn_sf_hipc_detail_SetBuffers(&v37_.v37, 2, (__int64)&v32_.v32,
                                     (__int64)&v41, 0, 112);
  if (v19 != 0) {
    goto LABEL_9;
  }
  v21 = ((unsigned __int64)&v37_.v38[*((unsigned __int8*)v37_.v37 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v21 = 0x149434653LL;
  *(_QWORD*)(v21 + 8) = a10;
  memset_plt((void*)(v21 + 16), nullptr, 80);
  v22 = memcpy_plt(v21 + 16, a5, 64);
  *(_QWORD*)(v21 + 88) = a8;
  *(_DWORD*)(v21 + 80) = a9;
  *(_DWORD*)(v21 + 12) = nn_sf_cmif_GetInlineContext_plt(v22);
  v19 = nn_sf_hipc_SendSyncRequest_plt(v10, v18, 256);
  if (v19 != 0) {
  LABEL_9:
    LODWORD(v26) = v19;
  }
  else {
    v32_.v35 = 0;
    v32_.v36 = 0;
    v32_.v33 = 0;
    v32_.v34 = 0;
    v32_.v32 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v32_.v32, v18);
    v23 = (_DWORD*)((v32_.v32 + 4LL * BYTE1(v32_.v36) + 15) &
                    0xFFFFFFFFFFFFFFF0LL);
    v25 = *v23;
    v24 = (__int64*)(v23 + 4);
    if (v25 == 1329808979) {
      v26 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v32_.v32 + 4LL * BYTE1(v32_.v36) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v26 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v26);
      }
      else {
        v27 = *v24;
        v28 = v24[1];
        v30 = v24[2];
        v29 = v24[3];
        a2[2] = v30;
        a2[3] = v29;
        *a2 = v27;
        a2[1] = v28;
      }
    }
    else {
      LODWORD(v26) = 108554;
    }
  }
  return (unsigned int)v26;
}

__int64 nn_sf_cmif_client_400b70(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int* v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    __int64 v15;
  } v14_;

  v4 = a1 + 8;
  v5 = *(unsigned int*)(v4 + 4);
  v9 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v4);
  *(_QWORD*)v9 = 0x8000000E00000006LL;
  v9[2] = 1;
  v10 = ((unsigned __int64)v9 + 35) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v10 = 0x149434653LL;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = a2;
  *(_QWORD*)(v10 + 32) = a3;
  *(_DWORD*)(v10 + 16) = a4;
  *(_DWORD*)(v10 + 12) = nn_sf_cmif_GetInlineContext_plt(v9);
  v11 = nn_sf_hipc_SendSyncRequest_plt(v5, v9, 256);
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
    }
    else {
      LODWORD(v12) = 108554;
    }
  }
  return (unsigned int)v12;
}

__int64 nn_sf_cmif_client_5fa020(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, __int64 a10, _DWORD* a11,
                                 unsigned int a12)
{
  __int64 v18;
  unsigned __int8 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v27;
  struct {
    __int64 v28;
    int v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v30_;
  struct {
    unsigned __int8* v36;
    unsigned int* v37;
  } v36_;
  struct {
    _QWORD v38[3];
    int v39;
  } v38_;

  v18 = a1;
  v19 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v19 & 1) == 0) {
    v20 = *(unsigned int*)(a1 + 4);
    LOWORD(v38_.v38[0]) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(v38_.v38, v20);
    LODWORD(v30_.v30) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v30_.v30);
    }
    atomic_store(v38_.v38[0], (unsigned __int16*)(v18 + 2));
    atomic_store(1u, (unsigned __int8*)(v18 + 1));
  }
  v21 = atomic_load((unsigned __int16*)(v18 + 2));
  v27 = *(unsigned int*)(v18 + 4);
  v22 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v36_.v36 = (unsigned __int8*)v38_.v38;
  v36_.v37 = v22;
  v38_.v39 = 1835034;
  v38_.v38[0] = 0x122000000000001LL;
  v38_.v38[1] = 3083;
  v38_.v38[2] = 0xF000C0602000000LL;
  *(_QWORD*)v22 = 0xC0B01220006LL;
  v30_.v30 = a4;
  v30_.v31 = a5;
  v30_.v32 = a6;
  v30_.v33 = a7;
  v30_.v34 = a9;
  v30_.v35 = a10;
  v28_.v28 = 0x2200000021LL;
  v28_.v29 = 33;
  v23 = SdkRoutine_5f9580(&v36_.v36, 3, (__int64)&v30_.v30, (__int64)&v28_.v28,
                          v21, 40);
  if ((_DWORD)v23 != 0 ||
      (v24 = ((unsigned __int64)&v36_.v37[v36_.v36[23] + 3] + 3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_DWORD*)(v24 + 16) = a2, *(_DWORD*)(v24 + 20) = a3,
       *(_QWORD*)v24 = 0x149434653LL, *(_QWORD*)(v24 + 8) = a12,
       *(_DWORD*)(v24 + 12) = nn_sf_cmif_GetInlineContext_plt(v23),
       LODWORD(v23) = nn_sf_hipc_SendSyncRequest_plt(v27, v22, 256),
       (_DWORD)v23 != 0)) {
    LODWORD(v25) = v23;
  }
  else {
    v30_.v33 = 0;
    v30_.v34 = 0;
    v30_.v31 = 0;
    v30_.v32 = 0;
    v30_.v30 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v30_.v30, v22);
    if (*(_DWORD*)((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v25 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v25 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v25);
      }
      else {
        *a11 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                          ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v25) = 108554;
    }
  }
  return (unsigned int)v25;
}

__int64 nn_sf_cmif_client_5fa220(__int64 a1, int a2, int a3, __int64 a4,
                                 __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9, __int64 a10, _DWORD* a11,
                                 unsigned int a12)
{
  __int64 v18;
  unsigned __int8 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v27;
  struct {
    __int64 v28;
    int v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v30_;
  struct {
    unsigned __int8* v36;
    unsigned int* v37;
  } v36_;
  struct {
    _QWORD v38[3];
    int v39;
  } v38_;

  v18 = a1;
  v19 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v19 & 1) == 0) {
    v20 = *(unsigned int*)(a1 + 4);
    LOWORD(v38_.v38[0]) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(v38_.v38, v20);
    LODWORD(v30_.v30) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v30_.v30);
    }
    atomic_store(v38_.v38[0], (unsigned __int16*)(v18 + 2));
    atomic_store(1u, (unsigned __int8*)(v18 + 1));
  }
  v21 = atomic_load((unsigned __int16*)(v18 + 2));
  v27 = *(unsigned int*)(v18 + 4);
  v22 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v36_.v36 = (unsigned __int8*)v38_.v38;
  v36_.v37 = v22;
  v38_.v39 = 1835032;
  v38_.v38[0] = 0x211000000000001LL;
  v38_.v38[1] = 4107;
  v38_.v38[2] = 0xD00070402000000LL;
  *(_QWORD*)v22 = 0x100B02110006LL;
  v30_.v30 = a4;
  v30_.v31 = a5;
  v30_.v32 = a6;
  v30_.v33 = a7;
  v30_.v34 = a9;
  v30_.v35 = a10;
  v28_.v28 = 0x2200000021LL;
  v28_.v29 = 34;
  v23 = SdkRoutine_5f9580(&v36_.v36, 3, (__int64)&v30_.v30, (__int64)&v28_.v28,
                          v21, 40);
  if ((_DWORD)v23 != 0 ||
      (v24 = ((unsigned __int64)&v36_.v37[v36_.v36[23] + 3] + 3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_DWORD*)(v24 + 16) = a2, *(_DWORD*)(v24 + 20) = a3,
       *(_QWORD*)v24 = 0x149434653LL, *(_QWORD*)(v24 + 8) = a12,
       *(_DWORD*)(v24 + 12) = nn_sf_cmif_GetInlineContext_plt(v23),
       LODWORD(v23) = nn_sf_hipc_SendSyncRequest_plt(v27, v22, 256),
       (_DWORD)v23 != 0)) {
    LODWORD(v25) = v23;
  }
  else {
    v30_.v33 = 0;
    v30_.v34 = 0;
    v30_.v31 = 0;
    v30_.v32 = 0;
    v30_.v30 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v30_.v30, v22);
    if (*(_DWORD*)((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v25 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v25 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v25);
      }
      else {
        *a11 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                          ((v30_.v30 + 4LL * BYTE1(v30_.v34) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v25) = 108554;
    }
  }
  return (unsigned int)v25;
}

__int64 nn_sf_cmif_client_5fa4e0(void* a1, __int64 a2, const char* a3)
{
  __int64 result;
  const char* v5;
  const char* v6;
  const char* v7;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = strcmp_plt(a1, "nvdrv", a3),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((_DWORD)result != 0) {
    result = strcmp_plt(a1, "nvdrv:a", v5),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((_DWORD)result != 0 &&
        (_DWORD)(result = strcmp_plt(a1, "nvdrv:s", v6)) != 0) {
      result = strcmp_plt(a1, "nvdrv:t", v7),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((_DWORD)result == 0) {
        SdkData_103f134 = 2;
      }
    }
    else {
      SdkData_103f134 = 1;
    }
  }
  else {
    SdkData_103f134 = 0;
  }
  return result;
}

__int64 nn_sf_cmif_client_5fa590(int* a1)
{
  __int64 result;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  int v10;

  result = NvOsAtomicCompareExchange32_plt(&SdkData_103f138, 0, 1);
  if ((_DWORD)result == 0) {
    nvidia_5f9020((void*)((__int64*)&v9), a1);
    v3 = v9;
    v9 = nullptr;
    v4 = (_QWORD*)SdkData_103f140;
    SdkData_103f140 = (__int64)v3;
    if (v4 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
          (void*)(v4), v4);
      if (v9 != nullptr) {
        (*(void (**)(__int64*))(*v9 + 8))(v9);
      }
      v3 = (__int64*)SdkData_103f140;
    }
    if (v3 == nullptr) {
      nn_diag_detail_AbortImpl_plt_856170(0);
    }
    v8 = v3;
    (*(void (**)(__int64*))*v3)(v3);
    nvidia_5f90c0((void*)((__int64*)&v9), &v8);
    v5 = (__int64)v9;
    v9 = nullptr;
    v6 = SdkData_103f148;
    SdkData_103f148 = v5;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      if (v9 != nullptr) {
        (*(void (**)(__int64*))(*v9 + 8))(v9);
      }
    }
    v7 = v8;
    if (v8 != nullptr) {
      v7 = (__int64*)(*(__int64 (**)(__int64*))(*v8 + 8))(v8);
    }
    if (SdkData_103f148 == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v7);
    }
    LODWORD(v9) = 0;
    NvOsGetConfigU32_plt("NV_MEMORY_PROFILER", &v9);
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_103f140 +
                                                96LL))(SdkData_103f140, 1);
    v10 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v10);
    }
    if (SdkData_103f134 == 2) {
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_103f140 +
                                                  96LL))(SdkData_103f140, 16);
      v10 = result;
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
      }
    }
    if (SdkData_103f130 == 1) {
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_103f140 +
                                                  96LL))(SdkData_103f140, 2);
      v10 = result;
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
      }
    }
    if (SdkData_103f131 == 1) {
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_103f140 +
                                                  96LL))(SdkData_103f140, 4);
      v10 = result;
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
      }
    }
    if (SdkData_103f132 == 1) {
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)SdkData_103f140 +
                                                  96LL))(SdkData_103f140, 32);
      v10 = result;
      if ((_DWORD)result != 0) {
        nn_diag_detail_AbortImpl_plt_858db0(&v10);
      }
    }
  }
  return result;
}

__int64 nn_sf_cmif_client_6fc1a0(__int64 a1, __int64 a2, __int64 a3,
                                 unsigned int a4)
{
  __int64 v7;
  unsigned __int8 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v17_;
  int v22;
  _QWORD v23[2];
  struct {
    __int64* v24;
    unsigned int* v25;
  } v24_;

  v7 = a1;
  v8 = atomic_load((unsigned __int8*)(a1 + 1));
  if ((v8 & 1) == 0) {
    v9 = *(unsigned int*)(a1 + 4);
    LOWORD(v24_.v24) = 0;
    a1 = nn_sf_hipc_client_QueryPointerBufferSize_plt(&v24_.v24, v9);
    LODWORD(v17_.v17) = a1;
    if ((_DWORD)a1 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v17_.v17);
    }
    atomic_store((unsigned __int16)v24_.v24, (unsigned __int16*)(v7 + 2));
    atomic_store(1u, (unsigned __int8*)(v7 + 1));
  }
  v10 = atomic_load((unsigned __int16*)(v7 + 2));
  v11 = *(unsigned int*)(v7 + 4);
  v12 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v17_.v20) = 786432;
  v17_.v17 = 0x1000000000001LL;
  v17_.v18 = 8;
  v17_.v19 = 0x400000002000000LL;
  v24_.v24 = &v17_.v17;
  v24_.v25 = v12;
  *(_QWORD*)v12 = 0x800010006LL;
  v23[0] = a2;
  v23[1] = a3;
  v22 = 9;
  v13 = nn_sf_hipc_detail_SetBuffers(&v24_.v24, 1, (__int64)v23, (__int64)&v22,
                                     v10, 32);
  if ((_DWORD)v13 != 0 ||
      (v14 = ((unsigned __int64)&v24_
                  .v25[*((unsigned __int8*)v24_.v24 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v14 = 0x149434653LL, *(_QWORD*)(v14 + 8) = a4,
       *(_DWORD*)(v14 + 12) = nn_sf_cmif_GetInlineContext_plt(v13),
       LODWORD(v13) = nn_sf_hipc_SendSyncRequest_plt(v11, v12, 256),
       (_DWORD)v13 != 0)) {
    LODWORD(v15) = v13;
  }
  else {
    v17_.v20 = 0;
    v17_.v21 = 0;
    v17_.v18 = 0;
    v17_.v19 = 0;
    v17_.v17 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v17_.v17, v12);
    if (*(_DWORD*)((v17_.v17 + 4LL * BYTE1(v17_.v21) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v15 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v17_.v17 + 4LL * BYTE1(v17_.v21) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  return (unsigned int)v15;
}

__int64 nn_sf_cmif_client_73b650(__int64 a1, _BYTE* a2, _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int* v9;
  unsigned __int64 v10;
  int v11;
  int* v12;
  _DWORD* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v22[4];
    __int64 v23;
  } v22_;

  v5 = a1 + 8;
  v6 = *(unsigned int*)(v5 + 4);
  v9 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v5);
  *(_QWORD*)v9 = 0x800000006LL;
  v10 = ((unsigned __int64)v9 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v10 = 0x149434653LL;
  *(_QWORD*)(v10 + 8) = 0;
  *(_DWORD*)(v10 + 12) = nn_sf_cmif_GetInlineContext_plt(v9);
  v11 = nn_sf_hipc_SendSyncRequest_plt(v6, v9, 256);
  if (v11 != 0) {
    LODWORD(v15) = v11;
  }
  else {
    v22_.v23 = 0;
    memset(v22_.v22, 0, sizeof(v22_.v22));
    nn_sf_hipc_detail_b8c00((__int64)v22_.v22, v9);
    v12 = (int*)((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                 0xFFFFFFFFFFFFFFF0LL);
    v14 = *v12;
    v13 = v12 + 4;
    if (v14 == 1329808979) {
      v15 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v22_.v22[0] + 4LL * BYTE1(v22_.v23) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
      else {
        *a2 = *(_BYTE*)v13;
        v16 = *((_QWORD*)v13 + 2);
        *a3 = *((_QWORD*)v13 + 1);
        a3[1] = v16;
        v17 = *((_QWORD*)v13 + 3);
        v18 = *((_QWORD*)v13 + 4);
        v20 = *((_QWORD*)v13 + 5);
        v19 = *((_QWORD*)v13 + 6);
        a3[4] = v20;
        a3[5] = v19;
        a3[2] = v17;
        a3[3] = v18;
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  return (unsigned int)v15;
}

__int64 nn_sf_cmif_client_73b8e0(__int64 a1, __int64 a2, __int64 a3, int a4,
                                 __int64 a5, int a6, unsigned int a7)
{
  __int64 v7;
  unsigned int* v14;
  __int64 v15;
  unsigned int v16;
  int v17;
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
  int v30;

  v7 = *(unsigned int*)(a1 + 4);
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  LODWORD(v22_.v25) = 1114112;
  v22_.v22 = 0x10000000000101LL;
  v22_.v23 = 0x28000000ALL;
  v22_.v24 = 0x700000400000300LL;
  v28_.v28 = &v22_.v22;
  v28_.v29 = v14;
  *(_QWORD*)v14 = 0x8000000A00100006LL;
  v14[2] = 2;
  v27[0] = a2;
  v27[1] = a3;
  v30 = 5;
  v15 = nn_sf_hipc_detail_SetBuffers(&v28_.v28, 1, (__int64)v27, (__int64)&v30,
                                     0, 40);
  if ((_DWORD)v15 != 0) {
    LODWORD(v20) = v15;
    return (unsigned int)v20;
  }
  v16 = *(_DWORD*)a5;
  v17 = *(unsigned __int8*)(a5 + 4);
  *(_DWORD*)a5 = 0;
  *(_BYTE*)(a5 + 4) = 0;
  v28_.v29[*((unsigned __int8*)v28_.v28 + 17)] = v16;
  v18 = ((unsigned __int64)&v28_.v29[*((unsigned __int8*)v28_.v28 + 23) + 3] +
         3) &
        0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD*)v18 = 0x149434653LL;
  *(_QWORD*)(v18 + 8) = a7;
  *(_DWORD*)(v18 + 16) = a4;
  *(_DWORD*)(v18 + 20) = a6;
  *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt(v15);
  v19 = nn_sf_hipc_SendSyncRequest_plt(v7, v14, 256);
  if (v19 != 0) {
    LODWORD(v20) = v19;
    if (v17 == 0) {
      return (unsigned int)v20;
    }
    goto LABEL_9;
  }
  v22_.v25 = 0;
  v22_.v26 = 0;
  v22_.v23 = 0;
  v22_.v24 = 0;
  v22_.v22 = 0;
  nn_sf_hipc_detail_b8c00((__int64)&v22_.v22, v14);
  if (*(_DWORD*)((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                 0xFFFFFFFFFFFFFFF0LL) != 1329808979) {
    LODWORD(v20) = 108554;
    if ((v17 & 1) == 0) {
      return (unsigned int)v20;
    }
  LABEL_9:
    nn_os_CloseNativeHandle_plt(v16);
    return (unsigned int)v20;
  }
  v20 = *(__int64*)((char*)((__int64*)0x4LL) +
                    ((v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                     0xFFFFFFFFFFFFFFF0LL) +
                    4);
  if ((_DWORD)v20 != 0) {
    nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
  }
  if ((v17 & 1) != 0) {
    goto LABEL_9;
  }
  return (unsigned int)v20;
}

#pragma GCC visibility pop
