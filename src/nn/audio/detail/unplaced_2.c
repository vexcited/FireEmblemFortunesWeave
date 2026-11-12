#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1eb350(__int64*, __int64*);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_audio_1ee2e0();
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_cmif_GetInlineContext_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(_QWORD);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
extern _UNKNOWN SdkData_f15f50;
extern _UNKNOWN SdkData_f16348;
extern __int64 SdkData_f16340;
extern __int64 SdkData_f16350;
extern __int64 SdkData_f16358;
extern int SdkData_f1634c;
__int64 nn_audio_detail_1eb250(__int64 a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4);
__int64 nn_audio_detail_1ec6a0(__int64 a1, __int64* a2, __int64* a3,
                               __int64* a4);
__int64 nn_audio_detail_1ecea0(__int64 a1, __int64* a2, _DWORD* a3);

__int64 nn_audio_detail_1eb250(__int64 a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4)
{
  int v4;
  int v6;
  __int64 v7[3];
  __int64 v8;

  memset_plt((void*)&SdkData_f15f50, nullptr, 1040, a4);
  v7[2] = 0;
  v7[0] = (__int64)&SdkData_f15f50;
  v7[1] = (__int64)"aud:u";
  nn_os_SdkMutexType_Lock_plt(&SdkData_f16348);
  if (SdkData_f1634c != 0) {
    if (SdkData_f16350 == 0) {
      SdkData_f16358 = (__int64)&SdkData_f15f50;
      SdkData_f16350 = (__int64)nn_audio_1ee2e0;
    }
    ++SdkData_f1634c;
  }
  else {
    v8 = 0;
    v4 = SdkRoutine_1eb350(v7, &v8);
    if (v4 != 0) {
      v6 = v4;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_f16348);
      LODWORD(v7[0]) = v6;
      nn_diag_detail_AbortImpl_plt_858db0(v7);
    }
    SdkData_f16358 = (__int64)&SdkData_f15f50;
    SdkData_f1634c = 1;
    SdkData_f16340 = v8;
    SdkData_f16350 = (__int64)nn_audio_1ee2e0;
  }
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f16348);
}

__int64 nn_audio_detail_1ec6a0(__int64 a1, __int64* a2, __int64* a3,
                               __int64* a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  struct {
    __int64 v25;
    int v26;
  } v25_;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v27_;
  struct {
    _QWORD* v33;
    unsigned int* v34;
  } v33_;
  _QWORD v35[4];

  v6 = a2[1];
  v8 = *a3;
  v7 = a3[1];
  v9 = a1 + 8;
  v10 = *a2;
  v11 = *a4;
  v12 = a4[1];
  v13 = *(unsigned int*)(v9 + 4);
  v14 = v12;
  v15 = v11;
  v16 = v7;
  v17 = v8;
  v18 = v6;
  v19 = v10;
  v20 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v9);
  LODWORD(v35[3]) = 1245184;
  v33_.v33 = v35;
  v33_.v34 = v20;
  v35[0] = 0x210000000000001LL;
  v35[1] = 8;
  v35[2] = 0xB00050200000000LL;
  *(_QWORD*)v20 = 0x802100006LL;
  v27_.v27 = v19;
  v27_.v28 = v18;
  v27_.v29 = v17;
  v27_.v30 = v16;
  v27_.v31 = v15;
  v27_.v32 = v14;
  v25_.v25 = 0x600000006LL;
  v25_.v26 = 5;
  v21 = nn_sf_hipc_detail_SetBuffers(&v33_.v33, 3, (__int64)&v27_.v27,
                                     (__int64)&v25_.v25, 0, 32);
  if ((_DWORD)v21 != 0 ||
      (v22 = ((unsigned __int64)&v33_
                  .v34[*((unsigned __int8*)v33_.v33 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v22 = 0x149434653LL, *(_QWORD*)(v22 + 8) = 4,
       *(_DWORD*)(v22 + 12) = nn_sf_cmif_GetInlineContext_plt(v21),
       LODWORD(v21) = nn_sf_hipc_SendSyncRequest_plt(v13, v20, 256),
       (_DWORD)v21 != 0)) {
    LODWORD(v23) = v21;
  }
  else {
    v27_.v30 = 0;
    v27_.v31 = 0;
    v27_.v28 = 0;
    v27_.v29 = 0;
    v27_.v27 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v27_.v27, v20);
    if (*(_DWORD*)((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v23 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v27_.v27 + 4LL * BYTE1(v27_.v31) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v23 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v23);
      }
    }
    else {
      LODWORD(v23) = 108554;
    }
  }
  return (unsigned int)v23;
}

__int64 nn_audio_detail_1ecea0(__int64 a1, __int64* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;
  int v23;
  _QWORD v24[2];
  struct {
    __int64* v25;
    unsigned int* v26;
  } v25_;

  v6 = a2[1];
  v7 = a1 + 8;
  v8 = *a2;
  v9 = *(unsigned int*)(v7 + 4);
  v10 = a3;
  v11 = v6;
  v12 = v8;
  v13 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v7);
  LODWORD(v18_.v21) = 851968;
  v18_.v18 = 0x10000000000001LL;
  v18_.v19 = 8;
  v18_.v20 = 0x500000200000000LL;
  v25_.v25 = &v18_.v18;
  v25_.v26 = v13;
  *(_QWORD*)v13 = 0x800100006LL;
  v24[0] = v12;
  v24[1] = v11;
  v23 = 5;
  v14 = nn_sf_hipc_detail_SetBuffers(&v25_.v25, 1, (__int64)v24, (__int64)&v23,
                                     0, 32);
  if ((_DWORD)v14 != 0 ||
      (v15 = ((unsigned __int64)&v25_
                  .v26[*((unsigned __int8*)v25_.v25 + 23) + 3] +
              3) &
             0xFFFFFFFFFFFFFFF0LL,
       *(_QWORD*)v15 = 0x149434653LL, *(_QWORD*)(v15 + 8) = 2,
       *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt(v14),
       LODWORD(v14) = nn_sf_hipc_SendSyncRequest_plt(v9, v13, 256),
       (_DWORD)v14 != 0)) {
    LODWORD(v16) = v14;
  }
  else {
    v18_.v21 = 0;
    v18_.v22 = 0;
    v18_.v19 = 0;
    v18_.v20 = 0;
    v18_.v18 = 0;
    nn_sf_hipc_detail_b8c00((__int64)&v18_.v18, v13);
    if (*(_DWORD*)((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                   0xFFFFFFFFFFFFFFF0LL) == 1329808979) {
      v16 = *(__int64*)((char*)((__int64*)0x4LL) +
                        ((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                         0xFFFFFFFFFFFFFFF0LL) +
                        4);
      if ((_DWORD)v16 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v16);
      }
      else {
        *v10 = *(_DWORD*)((char*)((__int64*)0xCLL) +
                          ((v18_.v18 + 4LL * BYTE1(v18_.v22) + 15) &
                           0xFFFFFFFFFFFFFFF0LL) +
                          4);
      }
    }
    else {
      LODWORD(v16) = 108554;
    }
  }
  return (unsigned int)v16;
}

#pragma GCC visibility pop
