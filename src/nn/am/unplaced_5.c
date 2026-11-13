#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c96e4(__int64);
__int64 SdkRoutine_1c9760(__int64, __int64);
__int64 SdkRoutine_1c9854(__int64, int);
__int64 SdkRoutine_1d3d5c(__int64);
__int64 SdkRoutine_1d3d98(_DWORD*);
__int64 SdkRoutine_1db688();
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_am_1c6580(__int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_GetCurrentProcessHandle_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(__int64, const char*);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(__int64);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    __int64, __int64, unsigned int);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
extern _UNKNOWN SdkData_efd020;
extern _UNKNOWN SdkData_efd040;
extern _UNKNOWN SdkData_efd080;
extern _UNKNOWN SdkData_efed60;
extern _UNKNOWN SdkData_efeea8;
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr)();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_efd028;
extern __int64 SdkData_efd030;
extern __int64 SdkData_efd038;
extern __int64 SdkData_efd048;
extern __int64 SdkData_efd050;
extern __int64 SdkData_efd088;
extern __int64 SdkData_efd090;
extern __int64 SdkData_efd3a0[822];
extern __int64 SdkData_efed50;
extern __int64 SdkData_efeea0;
extern __int64 SdkData_efeeb0;
extern __int64 SdkData_efeeb8;
extern __int64 nn_am_detail_g_ApplicationProxy;
extern __int64 nn_am_detail_g_PerformanceFunctions;
extern int SdkData_efd024;
extern int SdkData_efd044;
extern int SdkData_efd084;
extern int SdkData_efed8c;
extern int SdkData_efeeac;
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
__int64 nn_am_eb880(__int64 a1, _DWORD* a2);
__int64 nn_am_1c8ec4(void* this_);
__int64 nn_am_1cb390(__int64 a1, char a2, char a3, char a4);
__int64 nn_am_1cd048(__int64 a1, _BYTE* a2, __int64* a3);
__int64 nn_am_1cdbb8(__int64 a1, __int64 a2, __int64* a3, char a4, __int64* a5);
__int64 nn_am_1ce1cc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                     __int64 a6, __int64 a7, unsigned int a8);
__int64 nn_am_1d2c28(__int64 a1, __int64 a2, _QWORD* a3);
__int64 nn_am_1d3878(__int64 a1, _WORD* a2);
__int64 nn_am_1d3a78(__int64 a1, _DWORD* a2, char a3);
__int64 nn_am_1d6cd4(__int64 a1, int a2, int a3, int a4, int a5, int a6);
__int64 nn_am_1db018(__int64 a1, _BYTE* a2, int a3, int a4);

__int64 nn_am_eb880(__int64 a1, _DWORD* a2)
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
  struct {
    _QWORD v16[4];
    __int64 v17;
  } v16_;

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
  *(_QWORD*)(v11 + 24) = 16;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v10);
  v12 = v9;
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
      else {
        *(_DWORD*)a2 = *(_DWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 8LL))(v5, v12);
  return (unsigned int)v14;
}

__int64 nn_am_1c8ec4(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efeea8);
  if (SdkData_efeeac != 0) {
    if (SdkData_efeeb0 == 0) {
      SdkData_efeeb0 = (__int64)SdkRoutine_1db688;
      SdkData_efeeb8 = (__int64)SdkData_efd3a0;
    }
    ++SdkData_efeeac;
  }
  else {
    SdkRoutine_1c96e4((__int64)SdkData_efd3a0);
    {
      v1 = SdkData_efd3a0[0];
      __asm__ volatile("" ::"r"(v1));
    }
    v2 = SdkRoutine_1c9760((__int64)&SdkData_efed50, (__int64)&SdkData_efed50);
    nn_sf_hipc_InitializeHipcServiceResolution_plt(v2);
    LODWORD(v21) = 0;
    v3 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v21, "appletAE");
    if ((_DWORD)v3 != 0 ||
        (v4 = v21, LODWORD(v22) = 0,
         (_DWORD)(v3 =
                      nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                          (__int64)&SdkData_efed50, (__int64)&v22, v21)) !=
             0)) {
      v17 = v3;
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
      SdkData_efed50 = SdkData_e86d80 + 16;
      SdkRoutine_1d3d5c((__int64)&SdkData_efed50);
      SdkRoutine_1d3d98(SdkData_efd3a0);
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
      LODWORD(v22) = v17;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v22);
    }
    v5 = v1 + 144;
    v6 = (int)v22;
    v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v1 + 144) +
                                                     16LL))(v1 + 144, 56, 8);
    v8 = v7;
    if (v7 != 0) {
      *(_QWORD*)(v7 + 16) = &SdkData_efed50;
      *(_DWORD*)(v7 + 24) = v6;
      *(_DWORD*)(v7 + 28) = 0;
      *(_QWORD*)(v7 + 48) = v5;
      *(_DWORD*)(v7 + 40) = 1;
      *(_BYTE*)(v7 + 8) = 1;
      *(_QWORD*)v7 = nn_sf_hipc_client_AddDomainProxyReference_ptr;
      *(_QWORD*)(v7 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr;
    }
    v9 = SdkRoutine_1c9854((__int64)&SdkData_efed60, v4);
    ++SdkData_efed8c;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
    SdkData_efeeac = 1;
    SdkData_efeea0 = v8;
    SdkData_efeeb0 = (__int64)SdkRoutine_1db688;
    SdkData_efeeb8 = (__int64)SdkData_efd3a0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
  v10 = nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd020);
  if (SdkData_efd024 != 0) {
    if (SdkData_efd028 == 0) {
      SdkData_efd028 = 0;
      SdkData_efd030 = 0;
    }
    ++SdkData_efd024;
  }
  else {
    v20 = 0;
    while (1) {
      v11 = SdkData_efeea0;
      LODWORD(v21) = nn_os_GetCurrentProcessHandle_plt(v10);
      BYTE4(v21) = 0;
      v22 = &v20;
      v12 = (*(__int64 (**)(__int64, __int64**, _QWORD, __int64*))(
          *(_QWORD*)v11 + 80LL))(v11, &v22, 0, &v21);
      if (BYTE4(v21) == 1) {
        nn_os_CloseNativeHandle_plt(v21);
      }
      if ((v12 & 0x3FFFFF) != 0x19280) {
        break;
      }
      v10 = nn_os_SleepThread_plt(10000000);
    }
    if (v12 != 0) {
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd020);
      LODWORD(v22) = v12;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v22);
    }
    *(_OWORD*)&SdkData_efd028 = (__typeof__(*(_OWORD*)&SdkData_efd028)){0};
    SdkData_efd024 = 1;
    nn_am_detail_g_ApplicationProxy = v20;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd020);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd040);
  if (SdkData_efd044 != 0) {
    if (SdkData_efd048 == 0) {
      SdkData_efd048 = 0;
      SdkData_efd050 = 0;
    }
    ++SdkData_efd044;
  }
  else {
    v21 = 0;
    v22 = &v21;
    v13 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_ApplicationProxy + 96LL))(
        nn_am_detail_g_ApplicationProxy, &v22);
    if (v13 != 0) {
      v18 = v13;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd040);
      LODWORD(v22) = v18;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v22);
    }
    SdkData_efd044 = 1;
    SdkData_efd048 = 0;
    SdkData_efd050 = 0;
    SdkData_efd038 = v21;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd040);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd080);
  if (SdkData_efd084 != 0) {
    if (SdkData_efd088 == 0) {
      SdkData_efd088 = 0;
      SdkData_efd090 = 0;
    }
    ++SdkData_efd084;
  }
  else {
    v21 = 0;
    v22 = &v21;
    v14 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_ApplicationProxy + 104LL))(
        nn_am_detail_g_ApplicationProxy, &v22);
    if (v14 != 0) {
      v19 = v14;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd080);
      LODWORD(v22) = v19;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v22);
    }
    SdkData_efd084 = 1;
    SdkData_efd088 = 0;
    SdkData_efd090 = 0;
    nn_am_detail_g_PerformanceFunctions = v21;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd080);
  v15 = nn_am_detail_g_ApplicationProxy;
  if (nn_am_detail_g_ApplicationProxy != 0) {
    (**(void (***)(__int64))nn_am_detail_g_ApplicationProxy)(
        nn_am_detail_g_ApplicationProxy);
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return nn_am_1c6580(v15);
}

__int64 nn_am_1cb390(__int64 a1, char a2, char a3, char a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  char v9;
  char v10;
  char v11;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

  v6 = a1 + 8;
  {
    v8 = *(_DWORD*)(v6 + 16);
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = a4 & 1;
  v10 = a3 & 1;
  v11 = a2 & 1;
  {
    v7 = *(_QWORD*)(v6 + 8);
    __asm__ volatile("" ::"r"(v7));
  }
  v12 = (**(__int64 (***)(__int64))v7)(v7);
  v13 = v12;
  v14 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  *(_QWORD*)v14 = 0xD00000006LL;
  v15 = ((unsigned __int64)v14 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE*)(v15 + 32) = v11;
  *(_BYTE*)(v15 + 33) = v10;
  *(_BYTE*)(v15 + 34) = v9;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 1245185;
  *(_DWORD*)(v15 + 4) = v8;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 13;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v14);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v19_.v20 = 0;
    memset(v19_.v19, 0, sizeof(v19_.v19));
    nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v14);
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
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v13);
  return (unsigned int)v17;
}

__int64 nn_am_1cd048(__int64 a1, _BYTE* a2, __int64* a3)
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
  LODWORD(v22_.v25) = 1114112;
  v22_.v22 = 0x100000000000001LL;
  v22_.v23 = 12;
  v22_.v24 = 0x500020000000000LL;
  v28_.v28 = &v22_.v22;
  v28_.v29 = v16;
  *(_QWORD*)v16 = 0xC01000006LL;
  v27[0] = v11;
  v27[1] = v10;
  v32 = 6;
  v17 = nn_sf_hipc_detail_SetBuffers(&v28_.v28, 1, (__int64)v27, (__int64)&v32,
                                     v14, 48);
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
    *(_QWORD*)(v18 + 8) = 0;
    *(_DWORD*)v18 = 1048577;
    *(_DWORD*)(v18 + 4) = v9;
    *(_QWORD*)(v18 + 16) = 0x149434653LL;
    *(_QWORD*)(v18 + 24) = 5;
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
        else {
          *a2 = (*(_BYTE(*)[4])0x20LL)[(v22_.v22 + 4LL * BYTE1(v22_.v26) + 15) &
                                       0xFFFFFFFFFFFFFFF0LL];
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

__int64 nn_am_1cdbb8(__int64 a1, __int64 a2, __int64* a3, char a4, __int64* a5)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned int* v21;
  __int64 v22;
  unsigned int* v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v32;
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v34_;
  __int64 v39;
  struct {
    _QWORD* v40;
    unsigned int* v41;
  } v40_;
  _QWORD v42[4];

  {
    v7 = *a5;
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = a5[1];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = a1 + 8;
  {
    v10 = 16 * a3[1];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *a3;
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(unsigned __int16**)(v9 + 8);
    __asm__ volatile("" ::"r"(v12));
  }
  v13 = v8;
  v14 = v7;
  v15 = a4 & 1;
  v16 = v10;
  v17 = v11;
  {
    v32 = *(_DWORD*)(v9 + 16);
    __asm__ volatile("" ::"r"(v32));
  }
  v18 = (**(__int64 (***)(unsigned __int16*))v12)(v12);
  {
    v19 = v12[4];
    __asm__ volatile("" ::"r"(v19));
  }
  v20 = v18;
  v21 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v18);
  LODWORD(v42[3]) = 1572864;
  v40_.v41 = v21;
  v42[0] = 0x20000000000001LL;
  v42[1] = 16;
  v42[2] = 0x800000200000000LL;
  v40_.v40 = v42;
  *(_QWORD*)v21 = 0x1000200006LL;
  v34_.v34 = v17;
  v34_.v35 = v16;
  v34_.v36 = v14;
  v34_.v37 = v13;
  v39 = 0x500000005LL;
  v22 = nn_sf_hipc_detail_SetBuffers(&v40_.v40, 2, (__int64)&v34_.v34,
                                     (__int64)&v39, v19, 64);
  if ((_DWORD)v22 != 0) {
    LODWORD(v30) = v22;
    v28 = v20;
  }
  else {
    {
      v23 = &v40_.v41[*((unsigned __int8*)v40_.v40 + 23)];
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = ((unsigned __int64)v23 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v25 = (__int64)v23 - v24 + 64;
    if (v25 == -1 || v25 == 15) {
      v27 = v24 + 32;
      *(_DWORD*)(v24 + 33) = 0;
      *(_DWORD*)(v24 + 36) = 0;
    }
    else {
      *(_QWORD*)(v24 + 32) = 0;
      v27 = v24 + 32;
      *(_QWORD*)(v24 + 40) = 0;
    }
    *(_QWORD*)(v24 + 16) = 0x149434653LL;
    *(_QWORD*)(v24 + 24) = 30;
    *(_QWORD*)(v27 + 8) = a2;
    *(_BYTE*)(v24 + 32) = v15;
    *(_QWORD*)(v27 - 24) = 0;
    *(_DWORD*)(v27 - 32) = 2097153;
    *(_DWORD*)(v27 - 28) = v32;
    *(_DWORD*)(v24 + 12) = nn_sf_cmif_GetInlineContext_plt(v22);
    v28 = v20;
    v29 = nn_sf_hipc_SendSyncRequest_plt(v20, (__int64)v21, 256);
    if (v29 != 0) {
      LODWORD(v30) = v29;
    }
    else {
      v34_.v37 = 0;
      v34_.v38 = 0;
      v34_.v35 = 0;
      v34_.v36 = 0;
      v34_.v34 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v34_.v34, v21);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v34_.v34 + 4LL * BYTE1(v34_.v38) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v30 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v34_.v34 + 4LL * BYTE1(v34_.v38) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v30));
        }
        if ((_DWORD)v30 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v30);
        }
      }
      else {
        LODWORD(v30) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v12 + 8LL))(v12, v28);
  return (unsigned int)v30;
}

__int64 nn_am_1ce1cc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                     __int64 a6, __int64 a7, unsigned int a8)
{
  unsigned __int16* v8;
  int v9;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int* v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int v27;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v28_;
  __int64 v33;
  struct {
    _QWORD* v34;
    unsigned int* v35;
  } v34_;
  struct {
    _QWORD v36[3];
    int v37;
  } v36_;

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
  v27 = v16;
  v18 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v16);
  v36_.v37 = 3538944;
  v34_.v35 = v18;
  v36_.v36[0] = 0x20000000000001LL;
  v36_.v36[1] = 46;
  v36_.v36[2] = 0x800000200000000LL;
  v34_.v34 = v36_.v36;
  *(_QWORD*)v18 = 0x2E00200006LL;
  v28_.v28 = a3;
  v28_.v29 = a4;
  v28_.v30 = a6;
  v28_.v31 = a7;
  v33 = 0x500000005LL;
  v19 = nn_sf_hipc_detail_SetBuffers(&v34_.v34, 2, (__int64)&v28_.v28,
                                     (__int64)&v33, v17, 184);
  if (v19 != 0) {
    LODWORD(v24) = v19;
    v22 = v27;
  }
  else {
    {
      v20 =
          ((unsigned __int64)&v34_.v35[*((unsigned __int8*)v34_.v34 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v20));
    }
    *(_QWORD*)(v20 + 16) = 0x149434653LL;
    *(_QWORD*)(v20 + 24) = a8;
    memset_plt(v20 + 32, 0, 0x88u);
    v21 = memcpy_plt(v20 + 40, a2, 0x80u);
    *(_QWORD*)(v20 + 8) = 0;
    *(_BYTE*)(v20 + 32) = a5;
    *(_DWORD*)v20 = 9961473;
    *(_DWORD*)(v20 + 4) = v9;
    *(_DWORD*)(v20 + 12) = nn_sf_cmif_GetInlineContext_plt(v21);
    v22 = v27;
    v23 = nn_sf_hipc_SendSyncRequest_plt(v27, (__int64)v18, 256);
    if (v23 != 0) {
      LODWORD(v24) = v23;
    }
    else {
      v28_.v31 = 0;
      v28_.v32 = 0;
      v28_.v29 = 0;
      v28_.v30 = 0;
      v28_.v28 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v28_.v28, v18);
      if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                     ((v28_.v28 + 4LL * BYTE1(v28_.v32) + 15) &
                      0xFFFFFFFFFFFFFFF0LL) +
                     4) == 1329808979) {
        {
          v24 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v28_.v28 + 4LL * BYTE1(v28_.v32) + 15) &
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
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v8 + 8LL))(v8, v22);
  return (unsigned int)v24;
}

__int64 nn_am_1d2c28(__int64 a1, __int64 a2, _QWORD* a3)
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
  unsigned __int64 v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    __int64 v18;
  } v17_;

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
  *(_QWORD*)(v11 + 24) = 4;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v10);
  v12 = v9;
  v13 = nn_sf_hipc_SendSyncRequest_plt(v9, (__int64)v10, 256);
  if (v13 != 0) {
    LODWORD(v15) = v13;
  }
  else {
    v17_.v18 = 0;
    memset(v17_.v17, 0, sizeof(v17_.v17));
    nn_sf_hipc_detail_b8c00((__int64)v17_.v17, v10);
    {
      v14 = (v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v14));
    }
    if (*(_DWORD*)((char*)((__int64*)0xCLL) + v14 + 4) == 1329808979) {
      {
        v15 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                           0xFFFFFFFFFFFFFFF0LL));
        __asm__ volatile("" ::"r"(v15));
      }
      if ((_DWORD)v15 != 0) {
        nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v15);
      }
      else {
        memcpy_plt(a2, v14 + 32, 0x80u);
        *a3 = *(_QWORD*)(v14 + 160);
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 8LL))(v4, v12);
  return (unsigned int)v15;
}

__int64 nn_am_1d3878(__int64 a1, _WORD* a2)
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
  struct {
    _QWORD v16[4];
    __int64 v17;
  } v16_;

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
  *(_QWORD*)(v11 + 24) = 40;
  *(_DWORD*)(v11 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v10);
  v12 = v9;
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
      else {
        *a2 = *(_WORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v16_.v16[0] + 4LL * BYTE1(v16_.v17) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
      }
    }
    else {
      LODWORD(v14) = 108554;
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 8LL))(v5, v12);
  return (unsigned int)v14;
}

__int64 nn_am_1d3a78(__int64 a1, _DWORD* a2, char a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    __int64 v18;
  } v17_;

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
  *(_QWORD*)v12 = 0xD00000006LL;
  v13 = ((unsigned __int64)v12 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_BYTE*)(v13 + 32) = a3;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)v13 = 1114113;
  *(_DWORD*)(v13 + 4) = v7;
  *(_QWORD*)(v13 + 16) = 0x149434653LL;
  *(_QWORD*)(v13 + 24) = 0;
  *(_DWORD*)(v13 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v14 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v14 != 0) {
    LODWORD(v15) = v14;
  }
  else {
    v17_.v18 = 0;
    memset(v17_.v17, 0, sizeof(v17_.v17));
    nn_sf_hipc_detail_b8c00((__int64)v17_.v17, v12);
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
      else {
        *(_DWORD*)a2 = *(_DWORD*)&(
            *(_BYTE(*)[4])0x20LL)[(v17_.v17[0] + 4LL * BYTE1(v17_.v18) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL];
      }
    }
    else {
      LODWORD(v15) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 8LL))(v6, v11);
  return (unsigned int)v15;
}

__int64 nn_am_1d6cd4(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v15;
  unsigned int v16;
  unsigned int* v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  struct {
    _QWORD v23[4];
    __int64 v24;
  } v23_;

  v8 = a1 + 8;
  {
    v9 = *(_QWORD*)(v8 + 8);
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *(_DWORD*)(v8 + 16);
    __asm__ volatile("" ::"r"(v10));
  }
  v15 = (**(__int64 (***)(__int64))v9)(v9);
  v16 = v15;
  v17 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v15);
  *(_QWORD*)v17 = 0x1100000006LL;
  v18 = ((unsigned __int64)v17 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v18 + 32) = a2;
  *(_DWORD*)(v18 + 36) = a3;
  *(_DWORD*)(v18 + 40) = a4;
  *(_DWORD*)(v18 + 44) = a5;
  *(_QWORD*)(v18 + 8) = 0;
  *(_QWORD*)(v18 + 16) = 0x149434653LL;
  *(_QWORD*)(v18 + 24) = 2003;
  *(_DWORD*)(v18 + 48) = a6;
  *(_DWORD*)v18 = 2359297;
  *(_DWORD*)(v18 + 4) = v10;
  *(_DWORD*)(v18 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v17);
  v19 = nn_sf_hipc_SendSyncRequest_plt(v16, (__int64)v17, 256);
  if (v19 != 0) {
    LODWORD(v20) = v19;
  }
  else {
    v23_.v24 = 0;
    memset(v23_.v23, 0, sizeof(v23_.v23));
    nn_sf_hipc_detail_b8c00((__int64)v23_.v23, v17);
    if (*(_DWORD*)((char*)((__int64*)0xCLL) +
                   ((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
                    0xFFFFFFFFFFFFFFF0LL) +
                   4) == 1329808979) {
      {
        v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                          ((v23_.v23[0] + 4LL * BYTE1(v23_.v24) + 15) &
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
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 8LL))(v9, v16);
  return (unsigned int)v20;
}

__int64 nn_am_1db018(__int64 a1, _BYTE* a2, int a3, int a4)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v12;
  unsigned int v13;
  unsigned int* v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

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
  *(_QWORD*)v14 = 0xE00000006LL;
  v15 = ((unsigned __int64)v14 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD*)(v15 + 32) = a3;
  *(_DWORD*)(v15 + 36) = a4;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 1572865;
  *(_DWORD*)(v15 + 4) = v8;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 1030;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v14);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v13, (__int64)v14, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
  }
  else {
    v19_.v20 = 0;
    memset(v19_.v19, 0, sizeof(v19_.v19));
    nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v14);
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
      else {
        *a2 =
            (*(_BYTE(*)[4])0x20LL)[(v19_.v19[0] + 4LL * BYTE1(v19_.v20) + 15) &
                                   0xFFFFFFFFFFFFFFF0LL];
      }
    }
    else {
      LODWORD(v17) = 108554;
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 8LL))(v7, v13);
  return (unsigned int)v17;
}

#pragma GCC visibility pop
