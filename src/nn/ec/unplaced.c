#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_account_GetUserId_plt(_QWORD, _QWORD);
__int64 nn_account_LoadNetworkServiceAccountIdTokenCache_plt(_QWORD, _QWORD,
                                                             _QWORD, _QWORD);
__int64 nn_aoc_detail_GetObjectHolder_plt(void);
__int64 nn_applet_CloseLibraryApplet_plt(_QWORD);
__int64 nn_applet_GetLibraryAppletExitReason_plt(_QWORD);
__int64 nn_applet_GetStorageSize_plt(_QWORD);
__int64 nn_applet_JoinLibraryApplet_plt(_QWORD);
__int64 nn_applet_ReadFromStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_applet_StartLibraryApplet_plt(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_ec_3f7370_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_ec_3f7370");
__int64 nn_ec_3f7540_alt1(_QWORD, _QWORD) __asm__("nn_ec_3f7540");
__int64 nn_ec_3f7640_alt1(_QWORD, _QWORD) __asm__("nn_ec_3f7640");
__int64 nn_ec_3f7b90_alt1(_QWORD, _QWORD, _QWORD) __asm__("nn_ec_3f7b90");
__int64 nn_ec_3f8380_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("nn_ec_3f8380");
__int64 nn_ec_3f8d30_alt1(_QWORD) __asm__("nn_ec_3f8d30");
__int64 nn_ec_3fc230_alt1(_QWORD, _QWORD) __asm__("nn_ec_3fc230");
__int64 nn_ec_3fc470_alt1(_QWORD) __asm__("nn_ec_3fc470");
__int64 nn_ec_AsyncData_Initialize_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_ec_BeginConsumeRightData_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_ec_BeginProvidableRightDataInquiry_plt(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD);
__int64
    nn_ec_ConsumableServiceItemRightData_IsServiceProvidableOnLocal_plt(_QWORD);
__int64 nn_ec_EndGetConsumableRightData_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            _QWORD);
__int64 nn_ec_EndProvidableRightDataInquiryWithKeepingUnconsumedRightData_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ec_ShopServiceAccessor_AsyncResponse_GetSize_plt(_QWORD, _QWORD);
__int64 nn_ec_ShopServiceAccessor_AsyncResponse_Get_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_ec_ShopServiceAccessor_Finalize_plt(void);
__int64 nn_ec_ShopServiceAccessor_Request_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD, _QWORD);
__int64 nn_ec_ShopServiceAccessor_Request_plt_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("nn_ec_ShopServiceAccessor_Request_plt");
__int64 nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt(void);
__int64 nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt_alt1(
    _QWORD, _QWORD) __asm__("nn_ec_detail_ShopServiceAccessServer_ProxyStore_"
                            "GetInstance_plt");
__int64 nn_ec_detail_ShopServiceAccessServer_ProxyStore_Initialize_plt(_QWORD,
                                                                       _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_Proxy_Proxy_plt(_QWORD);
__int64 nn_ec_detail_ShopServiceAccessServer_ToResult_plt(_QWORD);
__int64 nn_http_json_Node_Print_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_la_PopFromOutChannel_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_lmem_DestroyUnitHeap_plt(_QWORD);
__int64 nn_mem_StandardAllocator_Allocate_plt_85d030(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Finalize_plt(_QWORD);
__int64 nn_mem_StandardAllocator_Free_plt(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Initialize_plt_85d020(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_StandardAllocator_plt_85d090(_QWORD);
__int64 nn_nifm_GetClientId_plt(void);
__int64 nn_nifm_IsAnyInternetRequestAccepted_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroyTransferMemory_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_util_Base64_FromBase64String_plt_858500(_QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 nn_util_GenerateUuid_plt(void);
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 nn_util_TSNPrintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strlen_plt(_QWORD);
bool SdkRoutine_400d50(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64);
extern _UNKNOWN SdkData_c3b7b0;
extern _UNKNOWN SdkData_f2a760;
extern _UNKNOWN SdkData_f2a770;
extern _UNKNOWN SdkData_f2a7c0;
extern _UNKNOWN SdkData_f2a7c8;
extern _UNKNOWN SdkData_f2a7d0;
extern _UNKNOWN SdkData_f2a868;
extern _UNKNOWN SdkData_f2a870;
extern _UNKNOWN SdkData_f2a910;
extern _UNKNOWN SdkData_f2aa10;
extern _UNKNOWN SdkData_f2aa18;
extern _UNKNOWN SdkData_f2aa20;
extern _UNKNOWN SdkData_f2aab8;
extern _UNKNOWN SdkData_f2aac0;
extern _UNKNOWN SdkData_f2ab60;
extern _UNKNOWN SdkData_f2afe8;
extern _UNKNOWN SdkData_f2aff0;
extern _UNKNOWN SdkData_f2b090;
extern _UNKNOWN SdkData_f2e1a8;
extern __int64 (*SdkData_e63398[])();
extern __int64 (*SdkData_e633f0[])();
extern __int64 SdkData_e87068;
extern __int64 SdkData_e87fe8;
extern __int64 SdkData_e87ff0;
extern __int64 SdkData_e88000;
extern __int64 SdkData_e88008;
extern __int64 SdkData_e88010;
extern __int64 SdkData_e88018;
extern __int64 SdkData_e88020;
extern __int64 SdkData_e88028;
extern __int64 SdkData_e88030;
extern __int64 SdkData_e88038;
extern __int64 SdkData_f2a768;
extern __int64 SdkData_f2a850;
extern __int64 SdkData_f2a860;
extern __int64 SdkData_f2a900;
extern __int64 SdkData_f2a908;
extern __int64 SdkData_f2aaa0;
extern __int64 SdkData_f2aab0;
extern __int64 SdkData_f2ab50;
extern __int64 SdkData_f2ab58;
extern __int64 SdkData_f2afe0;
extern __int64 SdkData_f2b080;
extern __int64 SdkData_f2b088;
extern __int64 SdkData_f2e1a0;
extern int SdkData_f2a86c;
extern int SdkData_f2aabc;
extern int SdkData_f2afec;
extern void (*SdkData_e87fe0[600])();
extern void (*SdkData_e87ff8[597])();
__int64 nn_ec_BeginGetConsumableRightData_3f37d0(__int64 a1, __int64 a2, int a3,
                                                 int a4, __int64 a5,
                                                 __int64 a6);
__int64 nn_ec_BeginGetConsumableRightData_3f38a0(__int64 a1, __int64 a2, int a3,
                                                 int a4, __int64 a5, __int64 a6,
                                                 __int64 a7);
__int64 nn_ec_EndGetConsumableRightData_3f39c0(void* this_, int* a2, void* a3,
                                               __int64 a4, void* a5, void* a6);
__int64 nn_ec_3f3b80(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5);
__int64 nn_ec_EndGetConsumableRightData_3f3e40(void* this_, int* a2, void* a3,
                                               __int64 a4, void* a5, void* a6);
__int64 nn_ec_BeginProvidableRightDataInquiry_3f3f00(__int64 a1, __int64 a2,
                                                     __int64 a3, int a4,
                                                     __int64 a5, __int64 a6);
__int64 nn_ec_BeginProvidableRightDataInquiry_3f4150(__int64 a1, __int64 a2,
                                                     __int64 a3,
                                                     unsigned int a4,
                                                     __int64 a5, __int64 a6,
                                                     __int64 a7);
__int64 nn_ec_EndProvidableRightDataInquiryWithKeepingUnconsumedRightData(
    void* this_, int* a2, void* a3, __int64 a4, void* a5, __int64 a6, void* a7,
    void* a8);
__int64 nn_ec_EndProvidableRightDataInquiry_3f4440(void* this_, int* a2,
                                                   void* a3, __int64 a4,
                                                   void* a5, __int64 a6,
                                                   void* a7, void* a8);
__int64 nn_ec_EndProvidableRightDataInquiry_3f4640(void* this_, int* a2,
                                                   void* a3, __int64 a4,
                                                   void* a5, __int64 a6,
                                                   void* a7, void* a8,
                                                   unsigned __int64 a9);
__int64 nn_ec_BeginConsumeRightData_3f48a0(__int64 a1, __int64 a2, __int64* a3,
                                           int a4, __int64 a5, __int64 a6);
__int64 nn_ec_BeginConsumeRightData_3f51b0(__int64 a1, __int64 a2, __int64 a3,
                                           unsigned int a4, __int64 a5,
                                           __int64 a6, __int64 a7);
__int64 nn_ec_EndConsumeRightData_3f5280(void* this_, int* a2, void* a3,
                                         __int64 a4, void* a5, __int64 a6,
                                         void* a7, void* a8);
__int64 nn_ec_EndConsumeRightData_3f54e0(void* this_, int* a2, void* a3,
                                         __int64 a4, void* a5, __int64 a6,
                                         void* a7, void* a8,
                                         unsigned __int64 a9);
__int64 nn_ec_3f57a0(__int64 result, _QWORD* a2, _QWORD* a3);
__int64 nn_ec_3f6d60(__int64 result, _QWORD* a2, __int64 a3, char a4);
__int64 nn_ec_3f71a0(__int64 result, char a2);
__int64 nn_ec_3f7370(__int64 a1, _QWORD* a2, __int64 a3);
_QWORD* nn_ec_3f7540(_QWORD* result, unsigned int a2);
__int64 nn_ec_3f7640(_QWORD* a1, _QWORD* a2);
__int64 nn_ec_3f7b90(__int64 a1, _QWORD* a2, __int64 a3);
__int64 nn_ec_3f7d00(__int64 result);
__int64 nn_ec_3f7f00(__int64 result);
__int64 nn_ec_3f8100(__int64 result, __int64 a2);
__int64 nn_ec_3f82d0(__int64 a1, __int64 a2);
__int64 nn_ec_3f8380(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_ec_3f84e0(__int64** a1, __int64 a2, unsigned int a3);
__int64 nn_ec_RequestContentsAuthorizationToken_3f8b40(__int64 a1, __int64 a2,
                                                       __int64 a3,
                                                       unsigned __int8* a4,
                                                       unsigned __int8* a5,
                                                       __int64 a6);
__int64 nn_ec_3f8d30(_QWORD* a1);
__int64 nn_ec_RequestContentsAuthorizationToken_3f8e20(__int64 a1, __int64 a2,
                                                       __int64 a3);
__int64 nn_ec_3f97c0();
__int64
nn_ec_InitializeShopServiceAccessorForMicroApplication(void* this_,
                                                       unsigned __int64 a2);
__int64 nn_ec_3fbd90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_ec_3fbe40(__int64 a1);
__int64 nn_ec_3fbeb0(__int64 a1);
__int64 nn_ec_3fbf20(__int64 a1, int a2);
__int64 nn_ec_3fbf50(__int64 a1, int a2);
__int64 nn_ec_3fc230(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 nn_ec_3fc360(__int64 a1);
__int64 nn_ec_3fc430(__int64 a1, int a2);
__int64 nn_ec_3fc470(__int64 a1, int a2);
__int64 nn_ec_FinalizeForShopServiceAccessors(void* this_);
bool nn_ec_detail_VerifySignature(void* this_, const char* a2, const char* a3);
__int64 nn_ec_400f80(__int64 a1, __int64 a2, _QWORD* a3);
unsigned __int64 nn_ec_401fe0(__int64 a1, __int64 a2, unsigned __int8* a3,
                              unsigned __int64 a4);

__int64 nn_ec_BeginGetConsumableRightData_3f37d0(__int64 a1, __int64 a2, int a3,
                                                 int a4, __int64 a5, __int64 a6)
{
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  _QWORD v16[2];

  v12 = nn_mem_StandardAllocator_Allocate_plt_85d030(a6, 256);
  if (v12 != 0) {
    v13 = v12;
    nn_util_SNPrintf_plt(v12, 256,
                         "/v1/rights/"
                         "my?application_id={applicationId}&status=PURCHASED&"
                         "page=%d&per_page=%d",
                         a3, a4);
    v16[0] = 0;
    v16[1] = 0;
    v14 = ((__int64 (*)(__int64, __int64, __int64, _QWORD, __int64, _QWORD*,
                        _QWORD))nn_ec_ShopServiceAccessor_Request_plt)(
        a5, a1, a2, 0, v13, v16, *(_QWORD*)SdkData_e87fe0[0]);
    nn_mem_StandardAllocator_Free_plt(a6, v13);
  }
  else {
    return 46244;
  }
  return v14;
}

__int64 nn_ec_BeginGetConsumableRightData_3f38a0(__int64 a1, __int64 a2, int a3,
                                                 int a4, __int64 a5, __int64 a6,
                                                 __int64 a7)
{
  __int64 v14;
  __int64 v15;
  unsigned int v17;
  _QWORD v19[9];
  _QWORD v20[2];

  memset(v19, 0, sizeof(v19));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v19);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v19, a6, a7);
  v14 = nn_mem_StandardAllocator_Allocate_plt_85d030(v19, 256);
  if (v14 == 0) {
    v17 = 46244;
    if (LOBYTE(v19[0]) != 1) {
      return v17;
    }
    goto LABEL_3;
  }
  v15 = v14;
  nn_util_SNPrintf_plt(
      v14, 256,
      "/v1/rights/"
      "my?application_id={applicationId}&status=PURCHASED&page=%d&per_page=%d",
      a3, a4);
  v20[0] = 0;
  v20[1] = 0;
  v17 = nn_ec_ShopServiceAccessor_Request_plt_alt1(a5, a1, a2, 0, v15, v20,
                                                   *(_QWORD*)SdkData_e87fe0[0]);
  nn_mem_StandardAllocator_Free_plt(v19, v15);
  if (LOBYTE(v19[0]) == 1) {
  LABEL_3:
    nn_mem_StandardAllocator_Finalize_plt(v19);
  }
  return v17;
}

__int64 nn_ec_EndGetConsumableRightData_3f39c0(void* this_, int* a2, void* a3,
                                               __int64 a4, void* a5, void* a6)
{
  int v9;
  __int64 v11;
  _QWORD* v12;
  unsigned int v13;
  int* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;

  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (int)a3;
  v11 = nn_mem_StandardAllocator_Allocate_plt_85d030(a5, 104LL * (int)a3),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v11 != 0) {
    v12 = (_QWORD*)v11;
    v13 = nn_ec_3f3b80((__int64)this_, v11, v9, a4, (__int64)a5),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 == 0 && v9 >= 1 && *(int*)this_ >= 1) {
      v14 = a2 + 16;
      v15 = 1;
      v16 = v12;
      do {
        *((_QWORD*)v14 - 8) = *v16;
        v17 = v16[1];
        v18 = v16[2];
        v19 = v16[4];
        *((_QWORD*)v14 - 5) = v16[3];
        *((_QWORD*)v14 - 4) = v19;
        *((_QWORD*)v14 - 7) = v17;
        *((_QWORD*)v14 - 6) = v18;
        v20 = v16[5];
        v21 = v16[6];
        v22 = v16[8];
        *((_QWORD*)v14 - 1) = v16[7];
        *(_QWORD*)v14 = v22;
        *((_QWORD*)v14 - 3) = v20;
        *((_QWORD*)v14 - 2) = v21;
        v23 = v16[9];
        v24 = v16[10];
        v25 = v16[12];
        *((_QWORD*)v14 + 3) = v16[11];
        *((_QWORD*)v14 + 4) = v25;
        *((_QWORD*)v14 + 1) = v23;
        *((_QWORD*)v14 + 2) = v24;
        v26 = nn_util_GenerateUuid_plt(),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        nn_util_TSNPrintf_plt(v14, 37,
                              "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%"
                              "02x%02x%02x%02x%02x%02x",
                              (unsigned __int8)v26, BYTE1(v26), BYTE2(v26),
                              BYTE3(v26), BYTE4(v26), BYTE5(v26), BYTE6(v26),
                              HIBYTE(v26), (unsigned __int8)v27, BYTE1(v27),
                              BYTE2(v27), BYTE3(v27), BYTE4(v27), BYTE5(v27),
                              BYTE6(v27), HIBYTE(v27)),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_BYTE*)v14 - 9) = 0;
        if (v15 >= v9) {
          break;
        }
        v16 += 13;
        v14 += 26;
      } while (v15++ < *(int*)this_);
    }
    nn_mem_StandardAllocator_Free_plt(a5, v12),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    return 46244;
  }
  return v13;
}

__int64 nn_ec_3f3b80(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v22;
  unsigned int v23;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    int v28;
    int v29;
    __int64 v30;
    __int64 v31;
  } v24_;
  struct {
    _QWORD v32[7];
    __int64 v33;
  } v32_;
  __int64 v34;
  struct {
    char* v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v35_;
  _QWORD v43[15];
  _QWORD v44[17];
  char v45;

  v34 = 0;
  result = nn_ec_ShopServiceAccessor_AsyncResponse_GetSize_plt(a4, &v34);
  if ((_DWORD)result == 0) {
    v11 = nn_mem_StandardAllocator_Allocate_plt_85d030(a5, (int)v34);
    if (v11 != 0) {
      v12 = v11;
      v13 = nn_mem_StandardAllocator_Allocate_plt_85d030(a5, 4096);
      if (v13 != 0) {
        v14 = v13;
        v15 = nn_mem_StandardAllocator_Allocate_plt_85d030(a5, 4096);
        if (v15 != 0) {
          v16 = v15;
          v17 = nn_ec_ShopServiceAccessor_AsyncResponse_Get_plt(a4, v12, v34);
          if (v17 != 0) {
            v23 = v17;
          }
          else {
            v32_.v32[4] = v14;
            v32_.v32[5] = v12;
            v18 = v34;
            v32_.v32[0] = SdkData_e87fe8 + 16;
            v32_.v32[1] = v14;
            v32_.v32[2] = 4096;
            v32_.v32[3] = 0;
            v24_.v30 = v16;
            v24_.v31 = 4096;
            v32_.v32[6] = v34;
            v32_.v33 = 0;
            v24_.v26 = a2;
            v24_.v27 = a1;
            v24_.v28 = a3;
            v24_.v29 = 0;
            v43[14] = 0xFFFFFFFF00000000LL;
            memset(v44, 0, sizeof(v44));
            v43[0] = &v24_.v24;
            v43[1] = 0;
            v24_.v24 = SdkData_e87ff0 + 16;
            v24_.v25 = 0;
            v35_.v35 = *(char**)SdkData_e87ff8[0];
            v43[2] = v35_.v35;
            memset(&v43[3], 0, 88);
            WORD1(v44[16]) =
                nn_http_json_Node_Print_plt(&v35_.v35, v44, 129, 0);
            v35_.v37 = 0;
            v35_.v38 = 0;
            LODWORD(v35_.v41) = 0;
            v35_.v42 = 0;
            v35_.v35 = &v45;
            v35_.v36 = 0;
            v35_.v39 = 0;
            v35_.v40 = 1;
            if (v18 == 0) {
              goto LABEL_13;
            }
            v19 = 0;
            v45 = 0;
            while (1) {
              v20 = *(unsigned __int8*)(v12 + v19);
              if (v20 > 0x20 || ((1LL << v20) & 0x100002600LL) == 0) {
                break;
              }
              v32_.v33 = ++v19;
              if (v18 == v19) {
                goto LABEL_13;
              }
            }
            if (v18 != v19 && *(_BYTE*)(v12 + v19) != 0) {
              nn_ec_3f57a0((__int64)&v35_.v35, v32_.v32, v43);
              v22 = v35_.v41;
              v35_.v38 = v35_.v37;
              if (v35_.v36 != 0) {
                SdkRoutine_857220(v35_.v36, 1);
              }
            }
            else {
            LABEL_13:
              LODWORD(v35_.v41) = 1;
              v22 = 1;
            }
            v23 = 1025179;
            switch (v22) {
            case 0:
              v23 = v24_.v25;
              break;
            case 1:
              v23 = 1024155;
              break;
            case 2:
              break;
            case 3:
            case 8:
            case 9:
            case 10:
            case 12:
            case 13:
            case 14:
            case 15:
              v23 = 1026203;
              break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 11:
            case 17:
              v23 = 1025691;
              break;
            case 16:
              v23 = 1026715;
              break;
            default:
              v23 = 1024667;
              break;
            }
          }
          nn_mem_StandardAllocator_Free_plt(a5, v16);
        }
        else {
          v23 = 46244;
        }
        nn_mem_StandardAllocator_Free_plt(a5, v14);
      }
      else {
        v23 = 46244;
      }
      nn_mem_StandardAllocator_Free_plt(a5, v12);
      return v23;
    }
    else {
      return 46244;
    }
  }
  return result;
}

__int64 nn_ec_EndGetConsumableRightData_3f3e40(void* this_, int* a2, void* a3,
                                               __int64 a4, void* a5, void* a6)
{
  unsigned int v10;
  __int64 result;
  unsigned int v13;
  _QWORD v14[9];

  v10 = (unsigned int)a3;
  memset(v14, 0, sizeof(v14));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v14);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v14, a5, a6);
  result = nn_ec_EndGetConsumableRightData_plt(this_, a2, v10, a4, v14);
  if (LOBYTE(v14[0]) == 1) {
    v13 = result;
    nn_mem_StandardAllocator_Finalize_plt(v14);
    return v13;
  }
  return result;
}

__int64 nn_ec_BeginProvidableRightDataInquiry_3f3f00(__int64 a1, __int64 a2,
                                                     __int64 a3, int a4,
                                                     __int64 a5, __int64 a6)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  char* v18;
  int v19;
  char* v20;
  char v21;
  bool v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  char* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  int v38;
  char v39;
  __int64 v41;
  __int64 v42;
  char v43[24];
  _QWORD v44[13];

  strcpy(v43, "/v1/rights?right_ids=");
  v12 = nn_mem_StandardAllocator_Allocate_plt_85d030(a6, 3721);
  if (v12 != 0) {
    v14 = a4;
    v15 = v12;
    v16 = 37LL * a4;
    v17 = v16 + 21;
    if ((unsigned __int64)(v16 + 21) > 0xE89) {
      v23 = 46244;
      goto LABEL_30;
    }
    v42 = a5;
    v41 = a2;
    if (v17 < 1) {
      v18 = v43;
      if (a4 != 0) {
        goto LABEL_15;
      }
    }
    else {
      if ((_DWORD)v16 == -20) {
        v18 = v43;
        v20 = (char*)v12;
      }
      else {
        v18 = v43;
        v19 = -20 - 37 * a4;
        v20 = (char*)v12;
        do {
          v21 = *v18;
          if (*v18 == 0) {
            break;
          }
          ++v18;
          *v20++ = v21;
          v22 = __CFADD__(v19++, 1);
        } while (!v22);
      }
      *v20 = 0;
      if (a4 != 0) {
      LABEL_15:
        v24 = 0;
        v25 = (int)((_DWORD)v18 + strlen_plt(v18) - (unsigned int)v43);
        v26 = -20 - 37 * a4;
        do {
          if (v24 != 0) {
            *(_BYTE*)(v15 + v25++) = 44;
          }
          v28 = (_QWORD*)(a3 + 104 * v24);
          v29 = v28[11];
          v30 = v28[12];
          v44[10] = v28[10];
          v44[11] = v29;
          v31 = v28[6];
          v32 = v28[7];
          v44[12] = v30;
          v44[6] = v31;
          v44[7] = v32;
          v33 = v28[9];
          v44[8] = v28[8];
          v44[9] = v33;
          v34 = v28[3];
          v44[2] = v28[2];
          v44[3] = v34;
          v35 = v28[5];
          v44[4] = v28[4];
          v44[5] = v35;
          v36 = v28[1];
          v44[0] = *v28;
          v44[1] = v36;
          if (v17 - (int)v25 < 1) {
            v27 = (char*)v44;
          }
          else {
            v37 = (_BYTE*)(v15 + v25);
            if (v17 - (_DWORD)v25 == 1) {
              v27 = (char*)v44;
            }
            else {
              v38 = v26 + v25;
              v27 = (char*)v44;
              do {
                v39 = *v27;
                if (*v27 == 0) {
                  break;
                }
                ++v27;
                *v37++ = v39;
                v22 = __CFADD__(v38++, 1);
              } while (!v22);
            }
            *v37 = 0;
          }
          ++v24;
          v25 += (int)((_DWORD)v27 + strlen_plt(v27) - (unsigned int)v44);
        } while (v24 != v14);
      }
    }
    v44[0] = 0;
    v44[1] = 0;
    v23 = nn_ec_ShopServiceAccessor_Request_plt_alt1(
        v42, a1, v41, 0, v15, v44, *(_QWORD*)SdkData_e87fe0[0]);
  LABEL_30:
    nn_mem_StandardAllocator_Free_plt(a6, v15);
    return v23;
  }
  return 46244;
}

__int64 nn_ec_BeginProvidableRightDataInquiry_3f4150(__int64 a1, __int64 a2,
                                                     __int64 a3,
                                                     unsigned int a4,
                                                     __int64 a5, __int64 a6,
                                                     __int64 a7)
{
  __int64 result;
  unsigned int v15;
  _QWORD v16[9];

  memset(v16, 0, sizeof(v16));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v16);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v16, a6, a7);
  result = nn_ec_BeginProvidableRightDataInquiry_plt(a1, a2, a3, a4, a5, v16);
  if (LOBYTE(v16[0]) == 1) {
    v15 = result;
    nn_mem_StandardAllocator_Finalize_plt(v16);
    return v15;
  }
  return result;
}

__int64 nn_ec_EndProvidableRightDataInquiryWithKeepingUnconsumedRightData(
    void* this_, int* a2, void* a3, __int64 a4, void* a5, __int64 a6, void* a7,
    void* a8)
{
  int v11;
  int v13;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  bool v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  int v53;

  v11 = (int)a5;
  v13 = (int)a3;
  v53 = 0;
  v15 = nn_mem_StandardAllocator_Allocate_plt_85d030(a7, 104LL * (int)a3);
  if (v15 != 0) {
    v16 = v15;
    v17 = nn_ec_3f3b80((__int64)&v53, v15, v13, a6, (__int64)a7);
    if (v17 != 0) {
      v51 = v17;
    }
    else {
      if (v11 >= v13) {
        v18 = (unsigned int)v13;
      }
      else {
        v18 = (unsigned int)v11;
      }
      if ((int)v18 >= 1 && v53 != 0) {
        v19 = 0;
        v20 = 0;
        v21 = a4;
        v22 = v16 + 104LL * v53;
        while (1) {
          v34 = (_QWORD*)(a4 + 104 * v19);
          v35 = v16;
          while (1) {
            v36 = 0;
            do {
              v37 = *(unsigned __int8*)(v21 + v36);
              v38 = *(unsigned __int8*)(v35 + v36);
              v39 = *(_BYTE*)(v21 + v36) != 0 && v37 == v38;
              if (!v39) {
                break;
              }
              v39 = (_DWORD)v36++ == 36;
            } while (!v39);
            if (v37 == v38) {
              break;
            }
            v35 += 104;
            if (v35 == v22) {
              goto LABEL_11;
            }
          }
          if (v35 == v22) {
            goto LABEL_11;
          }
          if (*(_BYTE*)(v35 + 54) == 1) {
            v40 = 64;
            do {
              v41 = *(unsigned __int8*)(v21 + v40);
              v42 = *(unsigned __int8*)(v35 + v40);
              if (*(_BYTE*)(v21 + v40) == 0 || v41 != v42) {
                break;
              }
              v39 = (_DWORD)v40++ == 100;
            } while (!v39);
            if (v41 != v42) {
              goto LABEL_11;
            }
            v44 = v34[5];
            v23 = &a2[26 * v20];
            v45 = v34[7];
            v46 = v34[8];
            ++v20;
            *((_QWORD*)v23 + 6) = v34[6];
            *(_QWORD*)v23 = *v34;
            v47 = v34[1];
            v48 = v34[2];
            v49 = v34[3];
            v50 = v34[4];
            *((_QWORD*)v23 + 7) = v45;
            *((_QWORD*)v23 + 8) = v46;
            *((_QWORD*)v23 + 5) = v44;
            *((_QWORD*)v23 + 3) = v49;
            *((_QWORD*)v23 + 4) = v50;
            *((_QWORD*)v23 + 1) = v47;
            *((_QWORD*)v23 + 2) = v48;
            v30 = v34[9];
            v31 = v34[10];
            v32 = v34[11];
            v33 = v34[12];
            *((_BYTE*)v23 + 55) = 1;
          }
          else {
            v23 = &a2[26 * v20++];
            *(_QWORD*)v23 = *v34;
            v24 = v34[1];
            v25 = v34[2];
            v26 = v34[4];
            *((_QWORD*)v23 + 3) = v34[3];
            *((_QWORD*)v23 + 4) = v26;
            *((_QWORD*)v23 + 1) = v24;
            *((_QWORD*)v23 + 2) = v25;
            v27 = v34[5];
            v28 = v34[6];
            v29 = v34[8];
            *((_QWORD*)v23 + 7) = v34[7];
            *((_QWORD*)v23 + 8) = v29;
            *((_QWORD*)v23 + 5) = v27;
            *((_QWORD*)v23 + 6) = v28;
            v30 = v34[9];
            v31 = v34[10];
            v32 = v34[11];
            v33 = v34[12];
          }
          *((_QWORD*)v23 + 11) = v32;
          *((_QWORD*)v23 + 12) = v33;
          *((_QWORD*)v23 + 9) = v30;
          *((_QWORD*)v23 + 10) = v31;
        LABEL_11:
          ++v19;
          v21 += 104;
          if (v19 == v18) {
            goto LABEL_37;
          }
        }
      }
      v20 = 0;
    LABEL_37:
      v51 = 0;
      *(_DWORD*)this_ = v20;
    }
    nn_mem_StandardAllocator_Free_plt(a7, v16);
  }
  else {
    return 46244;
  }
  return v51;
}

__int64 nn_ec_EndProvidableRightDataInquiry_3f4440(void* this_, int* a2,
                                                   void* a3, __int64 a4,
                                                   void* a5, __int64 a6,
                                                   void* a7, void* a8)
{
  unsigned int v11;
  unsigned int v13;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 i;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v35;

  v11 = (unsigned int)a5;
  v13 = (unsigned int)a3;
  v35 = 0;
  v15 = nn_mem_StandardAllocator_Allocate_plt_85d030(a7, 104LL * (int)a3);
  if (v15 != 0) {
    v16 = v15;
    v17 = nn_ec_EndProvidableRightDataInquiryWithKeepingUnconsumedRightData_plt(
        &v35, v15, v13, a4, v11, a6, a7);
    if (v17 != 0) {
      v21 = v17;
    LABEL_30:
      nn_mem_StandardAllocator_Free_plt(a7, v16);
      return v21;
    }
    v18 = v16;
    v19 = v16 + 104LL * v35;
    if (v35 != 0) {
      v18 = v16;
      if ((v35 & 3) != 0) {
        v20 = v35 & 3;
        v18 = v16;
        while (*(_BYTE*)(v18 + 55) != 0) {
          v18 += 104;
          if (--v20 == 0) {
            goto LABEL_8;
          }
        }
      }
      else {
      LABEL_8:
        if (((v35 - 1LL) & 0x1FFFFFFFFFFFFFFFuLL) < 3) {
        LABEL_9:
          v18 = v16 + 104LL * v35;
        LABEL_27:
          v33 = 0x4EC4EC4EC4EC4EC5LL * ((v18 - v16) >> 3);
          if (v18 != v16) {
            memmove_plt(a2, v16, v18 - v16);
          }
          v21 = 0;
          *(_DWORD*)this_ = v33;
          goto LABEL_30;
        }
        v18 += 208;
        while (1) {
          if (*(_BYTE*)(v18 - 153) == 0) {
            v18 -= 208;
            goto LABEL_21;
          }
          if (*(_BYTE*)(v18 - 49) == 0) {
            v18 -= 104;
            goto LABEL_21;
          }
          if (*(_BYTE*)(v18 + 55) == 0) {
            goto LABEL_21;
          }
          if (*(_BYTE*)(v18 + 159) == 0) {
            break;
          }
          v22 = v18 + 208;
          v18 += 416;
          if (v22 == v19) {
            goto LABEL_9;
          }
        }
        v18 += 104;
      }
    }
  LABEL_21:
    if (v18 != v19) {
      for (i = v18 + 104; i != v19; i += 104) {
        if (*(_BYTE*)(i + 55) != 0) {
          *(_QWORD*)v18 = *(_QWORD*)i;
          v24 = *(_QWORD*)(i + 8);
          v25 = *(_QWORD*)(i + 16);
          v26 = *(_QWORD*)(i + 32);
          *(_QWORD*)(v18 + 24) = *(_QWORD*)(i + 24);
          *(_QWORD*)(v18 + 32) = v26;
          *(_QWORD*)(v18 + 8) = v24;
          *(_QWORD*)(v18 + 16) = v25;
          v27 = *(_QWORD*)(i + 40);
          v28 = *(_QWORD*)(i + 48);
          v29 = *(_QWORD*)(i + 64);
          *(_QWORD*)(v18 + 56) = *(_QWORD*)(i + 56);
          *(_QWORD*)(v18 + 64) = v29;
          *(_QWORD*)(v18 + 40) = v27;
          *(_QWORD*)(v18 + 48) = v28;
          v30 = *(_QWORD*)(i + 72);
          v31 = *(_QWORD*)(i + 80);
          v32 = *(_QWORD*)(i + 96);
          *(_QWORD*)(v18 + 88) = *(_QWORD*)(i + 88);
          *(_QWORD*)(v18 + 96) = v32;
          *(_QWORD*)(v18 + 72) = v30;
          *(_QWORD*)(v18 + 80) = v31;
          v18 += 104;
        }
      }
    }
    goto LABEL_27;
  }
  return 46244;
}

__int64 nn_ec_EndProvidableRightDataInquiry_3f4640(void* this_, int* a2,
                                                   void* a3, __int64 a4,
                                                   void* a5, __int64 a6,
                                                   void* a7, void* a8,
                                                   unsigned __int64 a9)
{
  unsigned int v13;
  unsigned int v15;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 i;
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
  _QWORD v37[9];
  int v38;

  v13 = (unsigned int)a5;
  v15 = (unsigned int)a3;
  memset(v37, 0, sizeof(v37));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v37);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v37, a7, a8);
  v38 = 0;
  v17 = nn_mem_StandardAllocator_Allocate_plt_85d030(v37, 104LL * (int)v15);
  if (v17 == 0) {
    v23 = 46244;
    if (LOBYTE(v37[0]) != 1) {
      return v23;
    }
    goto LABEL_32;
  }
  v18 = v17;
  v19 = nn_ec_EndProvidableRightDataInquiryWithKeepingUnconsumedRightData_plt(
      &v38, v17, v15, a4, v13, a6, v37);
  if (v19 != 0) {
    v23 = v19;
    goto LABEL_31;
  }
  v20 = v18;
  v21 = v18 + 104LL * v38;
  if (v38 == 0) {
    goto LABEL_22;
  }
  v20 = v18;
  if ((v38 & 3) != 0) {
    v22 = v38 & 3;
    v20 = v18;
    while (*(_BYTE*)(v20 + 55) != 0) {
      v20 += 104;
      if (--v22 == 0) {
        goto LABEL_8;
      }
    }
    goto LABEL_22;
  }
LABEL_8:
  if (((v38 - 1LL) & 0x1FFFFFFFFFFFFFFFuLL) >= 3) {
    v20 += 208;
    while (1) {
      if (*(_BYTE*)(v20 - 153) == 0) {
        v20 -= 208;
        goto LABEL_22;
      }
      if (*(_BYTE*)(v20 - 49) == 0) {
        v20 -= 104;
        goto LABEL_22;
      }
      if (*(_BYTE*)(v20 + 55) == 0) {
        goto LABEL_22;
      }
      if (*(_BYTE*)(v20 + 159) == 0) {
        break;
      }
      v24 = v20 + 208;
      v20 += 416;
      if (v24 == v21) {
        goto LABEL_9;
      }
    }
    v20 += 104;
  LABEL_22:
    if (v20 != v21) {
      for (i = v20 + 104; i != v21; i += 104) {
        if (*(_BYTE*)(i + 55) != 0) {
          *(_QWORD*)v20 = *(_QWORD*)i;
          v26 = *(_QWORD*)(i + 8);
          v27 = *(_QWORD*)(i + 16);
          v28 = *(_QWORD*)(i + 32);
          *(_QWORD*)(v20 + 24) = *(_QWORD*)(i + 24);
          *(_QWORD*)(v20 + 32) = v28;
          *(_QWORD*)(v20 + 8) = v26;
          *(_QWORD*)(v20 + 16) = v27;
          v29 = *(_QWORD*)(i + 40);
          v30 = *(_QWORD*)(i + 48);
          v31 = *(_QWORD*)(i + 64);
          *(_QWORD*)(v20 + 56) = *(_QWORD*)(i + 56);
          *(_QWORD*)(v20 + 64) = v31;
          *(_QWORD*)(v20 + 40) = v29;
          *(_QWORD*)(v20 + 48) = v30;
          v32 = *(_QWORD*)(i + 72);
          v33 = *(_QWORD*)(i + 80);
          v34 = *(_QWORD*)(i + 96);
          *(_QWORD*)(v20 + 88) = *(_QWORD*)(i + 88);
          *(_QWORD*)(v20 + 96) = v34;
          *(_QWORD*)(v20 + 72) = v32;
          *(_QWORD*)(v20 + 80) = v33;
          v20 += 104;
        }
      }
    }
    goto LABEL_28;
  }
LABEL_9:
  v20 = v18 + 104LL * v38;
LABEL_28:
  v35 = 0x4EC4EC4EC4EC4EC5LL * ((v20 - v18) >> 3);
  if (v20 != v18) {
    memmove_plt(a2, v18, v20 - v18);
  }
  v23 = 0;
  *(_DWORD*)this_ = v35;
LABEL_31:
  nn_mem_StandardAllocator_Free_plt(v37, v18);
  if (LOBYTE(v37[0]) == 1) {
  LABEL_32:
    nn_mem_StandardAllocator_Finalize_plt(v37);
  }
  return v23;
}

__int64 nn_ec_BeginConsumeRightData_3f48a0(__int64 a1, __int64 a2, __int64* a3,
                                           int a4, __int64 a5, __int64 a6)
{
  __int64 v12;
  __int64* v13;
  int v14;
  __int64 i;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  char v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  char v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  char v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  char v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64* v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  _QWORD* v104;
  __int64 v105;
  __int64 v106;
  _BOOL4 j;
  __int64 v110;
  _QWORD* v111;
  _QWORD* v112;
  bool v113;
  _BOOL4 v114;
  __int64 v117;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  struct {
    __int64 v124;
    unsigned __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
  } v124_;
  _QWORD v132[5];
  __int64* v133;
  struct {
    _QWORD* v134;
    _QWORD* v135;
    __int64 v136;
    __int64 v137;
    unsigned __int64 v138;
    __int64 v139;
    __int64 v140;
  } v134_;
  struct {
    _QWORD v141[2];
    unsigned __int64 v142;
  } v141_;
  struct {
    _QWORD v143[2];
    _QWORD* v144;
    char* v145;
    __int64 v146;
  } v143_;
  char v147;

  v12 = nn_mem_StandardAllocator_Allocate_plt_85d030(a6, 104LL * a4);
  if (v12 != 0) {
    v13 = (__int64*)v12;
    if (a4 < 1) {
      v14 = 0;
    }
    else {
      v14 = 0;
      for (i = (unsigned int)a4; i != 0; --i) {
        if ((nn_ec_ConsumableServiceItemRightData_IsServiceProvidableOnLocal_plt(
                 a3) &
             1) == 0) {
          v16 = &v13[13 * v14++];
          *v16 = *a3;
          v17 = a3[1];
          v18 = a3[2];
          v19 = a3[4];
          v16[3] = a3[3];
          v16[4] = v19;
          v16[1] = v17;
          v16[2] = v18;
          v20 = a3[5];
          v21 = a3[6];
          v22 = a3[8];
          v16[7] = a3[7];
          v16[8] = v22;
          v16[5] = v20;
          v16[6] = v21;
          v23 = a3[9];
          v24 = a3[10];
          v25 = a3[12];
          v16[11] = a3[11];
          v16[12] = v25;
          v16[9] = v23;
          v16[10] = v24;
        }
        a3 += 13;
      }
    }
    v123 = a1;
    v27 = ((__int64)v14 << 7) | 0xF;
    v28 = nn_mem_StandardAllocator_Allocate_plt_85d030(a6, (int)v27);
    if (v28 == 0) {
      v26 = 46244;
      goto LABEL_145;
    }
    v29 = v28;
    v30 = (_QWORD*)nn_mem_StandardAllocator_Allocate_plt_85d030(a6, 4096);
    if (v30 == nullptr) {
      v26 = 46244;
    LABEL_144:
      nn_mem_StandardAllocator_Free_plt(a6, v29);
    LABEL_145:
      nn_mem_StandardAllocator_Free_plt(a6, v13);
      return v26;
    }
    v31 = v30;
    v147 = 0;
    v143_.v146 = 0;
    v143_.v143[0] = v30;
    v143_.v143[1] = 1;
    v143_.v144 = v30;
    v143_.v145 = &v147;
    v30[2] = 0;
    *v30 = 4072;
    v30[1] = 0;
    v32 = nn_mem_StandardAllocator_Allocate_plt_85d030(a6, (int)v27);
    v122 = a2;
    if (v32 == 0) {
      v103 = 0;
      v26 = 46244;
      v111 = v143_.v144;
      v112 = (_QWORD*)v143_.v143[0];
      v113 = v143_.v143[0] == (_QWORD)v143_.v144;
      v114 = v143_.v143[0] == (_QWORD)v143_.v144;
      if (v143_.v143[0] == 0) {
      LABEL_134:
        if (v112 != nullptr && v114) {
          v112[1] = 0;
        }
        if (v143_.v146 != 0) {
          SdkRoutine_857220(v143_.v146, 1);
        }
        v117 = nn_mem_StandardAllocator_Free_plt(a6, v31);
        if (v32 != 0) {
          if (v103 >= v27) {
            nn_diag_detail_AbortImpl_plt_856170(v117);
          }
          v124_.v124 = v29;
          v124_.v125 = v103;
          v26 = nn_ec_ShopServiceAccessor_Request_plt_alt1(
              a5, v123, v122, 1, "/v1/rights/consume", &v124_.v124,
              *(_QWORD*)SdkData_e87fe0[0]);
        }
        goto LABEL_144;
      }
    LABEL_127:
      if (!v113) {
        do {
          v112 = (_QWORD*)v112[2];
          v114 = v112 == v111;
        } while (v112 != nullptr && v112 != v111);
        v143_.v143[0] = v112;
      }
      goto LABEL_134;
    }
    v141_.v141[1] = (int)v27;
    v141_.v142 = 0;
    v134_.v135 = nullptr;
    v133 = v141_.v141;
    v134_.v134 = v143_.v143;
    v134_.v140 = 0x100000144LL;
    v141_.v141[0] = v32;
    v134_.v139 = 512;
    v33 = nn_ec_3f8380(v143_.v143, 0, 0, 512);
    v134_.v136 = v33;
    v134_.v137 = v33 + 16;
    v134_.v138 = v33 + 512;
    *(_QWORD*)v33 = 0;
    *(_BYTE*)(v33 + 8) = 0;
    v34 = v133[2];
    if (v34 < v133[1]) {
      v35 = *v133;
      v133[2] = v34 + 1;
      *(_BYTE*)(v35 + v34) = 123;
    }
    v36 = v134_.v137;
    if (v134_.v137 == v134_.v136) {
      BYTE4(v134_.v140) = 1;
    LABEL_26:
      nn_ec_3f84e0(&v133, (__int64)"rights", 6u);
      v42 = v134_.v137;
      if (v134_.v137 == v134_.v136) {
        BYTE4(v134_.v140) = 1;
        v121 = v29;
        if (v134_.v137 + 16 <= v134_.v138) {
          goto LABEL_37;
        }
        goto LABEL_152;
      }
      v43 = *(_QWORD*)(v134_.v137 - 16);
      if (v43 != 0) {
        v45 = v133[1];
        v44 = v133[2];
        if (*(_BYTE*)(v134_.v137 - 8) == 1) {
          if (v44 >= v45) {
            goto LABEL_36;
          }
          v46 = 44;
        }
        else {
          if (v44 >= v45) {
            goto LABEL_36;
          }
          if ((v43 & 1) != 0) {
            v46 = 58;
          }
          else {
            v46 = 44;
          }
        }
        v47 = *v133;
        v133[2] = v44 + 1;
        *(_BYTE*)(v47 + v44) = v46;
        v43 = *(_QWORD*)(v42 - 16);
      }
    LABEL_36:
      *(_QWORD*)(v42 - 16) = v43 + 1;
      v42 = v134_.v137;
      v121 = v29;
      if (v134_.v137 + 16 > v134_.v138) {
      LABEL_152:
        nn_ec_3f82d0((__int64)&v134_.v134, 1);
        v42 = v134_.v137;
      }
    LABEL_37:
      v120 = ((__int64)v14 << 7) | 0xF;
      v134_.v137 = v42 + 16;
      *(_QWORD*)v42 = 0;
      *(_BYTE*)(v42 + 8) = 1;
      v48 = v133[2];
      if (v48 < v133[1]) {
        v49 = *v133;
        v133[2] = v48 + 1;
        *(_BYTE*)(v49 + v48) = 91;
      }
      if (v14 >= 1) {
        v50 = (unsigned int)v14;
        v51 = v13;
        do {
          v124_.v124 = *v51;
          v52 = v51[1];
          v53 = v51[2];
          v54 = v51[4];
          v124_.v127 = v51[3];
          v124_.v128 = v54;
          v124_.v125 = v52;
          v124_.v126 = v53;
          v55 = v51[5];
          v56 = v51[6];
          v57 = v51[8];
          v124_.v131 = v51[7];
          v132[0] = v57;
          v124_.v129 = v55;
          v124_.v130 = v56;
          v58 = v51[10];
          v59 = v51[11];
          v60 = v51[12];
          v132[1] = v51[9];
          v132[2] = v58;
          v61 = v134_.v137;
          v132[3] = v59;
          v132[4] = v60;
          if (v134_.v137 == v134_.v136) {
            BYTE4(v134_.v140) = 1;
            if (v134_.v137 + 16 <= v134_.v138) {
              goto LABEL_53;
            }
            goto LABEL_101;
          }
          v62 = *(_QWORD*)(v134_.v137 - 16);
          if (v62 != 0) {
            v64 = v133[1];
            v63 = v133[2];
            if (*(_BYTE*)(v134_.v137 - 8) == 1) {
              if (v63 >= v64) {
                goto LABEL_52;
              }
              v65 = 44;
            }
            else {
              if (v63 >= v64) {
                goto LABEL_52;
              }
              if ((v62 & 1) != 0) {
                v65 = 58;
              }
              else {
                v65 = 44;
              }
            }
            v66 = *v133;
            v133[2] = v63 + 1;
            *(_BYTE*)(v66 + v63) = v65;
            v62 = *(_QWORD*)(v61 - 16);
          }
        LABEL_52:
          *(_QWORD*)(v61 - 16) = v62 + 1;
          v61 = v134_.v137;
          if (v134_.v137 + 16 > v134_.v138) {
          LABEL_101:
            nn_ec_3f82d0((__int64)&v134_.v134, 1);
            v61 = v134_.v137;
          }
        LABEL_53:
          v134_.v137 = v61 + 16;
          *(_QWORD*)v61 = 0;
          *(_BYTE*)(v61 + 8) = 0;
          v67 = v133[2];
          if (v67 < v133[1]) {
            v68 = *v133;
            v133[2] = v67 + 1;
            *(_BYTE*)(v68 + v67) = 123;
          }
          v69 = v134_.v137;
          if (v134_.v137 != v134_.v136) {
            v70 = *(_QWORD*)(v134_.v137 - 16);
            if (v70 != 0) {
              v72 = v133[1];
              v71 = v133[2];
              if (*(_BYTE*)(v134_.v137 - 8) == 1) {
                if (v71 < v72) {
                  v73 = 44;
                  goto LABEL_64;
                }
              }
              else if (v71 < v72) {
                if ((v70 & 1) != 0) {
                  v73 = 58;
                }
                else {
                  v73 = 44;
                }
              LABEL_64:
                v74 = *v133;
                v133[2] = v71 + 1;
                *(_BYTE*)(v74 + v71) = v73;
                v70 = *(_QWORD*)(v69 - 16);
              }
            }
            *(_QWORD*)(v69 - 16) = v70 + 1;
            goto LABEL_66;
          }
          BYTE4(v134_.v140) = 1;
        LABEL_66:
          nn_ec_3f84e0(&v133, (__int64)"right_id", 8u);
          v75 = strlen_plt(&v124_.v124);
          v76 = v134_.v137;
          if (v134_.v137 != v134_.v136) {
            v77 = *(_QWORD*)(v134_.v137 - 16);
            if (v77 != 0) {
              v79 = v133[1];
              v78 = v133[2];
              if (*(_BYTE*)(v134_.v137 - 8) == 1) {
                if (v78 < v79) {
                  v80 = 44;
                  goto LABEL_75;
                }
              }
              else if (v78 < v79) {
                if ((v77 & 1) != 0) {
                  v80 = 58;
                }
                else {
                  v80 = 44;
                }
              LABEL_75:
                v81 = *v133;
                v133[2] = v78 + 1;
                *(_BYTE*)(v81 + v78) = v80;
                v77 = *(_QWORD*)(v76 - 16);
              }
            }
            *(_QWORD*)(v76 - 16) = v77 + 1;
            nn_ec_3f84e0(&v133, (__int64)&v124_.v124, v75);
            v82 = v134_.v137;
            if (v134_.v137 != v134_.v136) {
              goto LABEL_77;
            }
            goto LABEL_104;
          }
          BYTE4(v134_.v140) = 1;
          nn_ec_3f84e0(&v133, (__int64)&v124_.v124, v75);
          v82 = v134_.v137;
          if (v134_.v137 != v134_.v136) {
          LABEL_77:
            v83 = *(_QWORD*)(v82 - 16);
            if (v83 != 0) {
              v85 = v133[1];
              v84 = v133[2];
              if (*(_BYTE*)(v82 - 8) == 1) {
                if (v84 < v85) {
                  v86 = 44;
                  goto LABEL_85;
                }
              }
              else if (v84 < v85) {
                if ((v83 & 1) != 0) {
                  v86 = 58;
                }
                else {
                  v86 = 44;
                }
              LABEL_85:
                v87 = *v133;
                v133[2] = v84 + 1;
                *(_BYTE*)(v87 + v84) = v86;
                v83 = *(_QWORD*)(v82 - 16);
              }
            }
            *(_QWORD*)(v82 - 16) = v83 + 1;
            goto LABEL_87;
          }
        LABEL_104:
          BYTE4(v134_.v140) = 1;
        LABEL_87:
          nn_ec_3f84e0(&v133, (__int64)"consumption_request_id", 0x16u);
          v88 = strlen_plt(v132);
          v89 = v134_.v137;
          if (v134_.v137 == v134_.v136) {
            BYTE4(v134_.v140) = 1;
            goto LABEL_98;
          }
          v90 = *(_QWORD*)(v134_.v137 - 16);
          if (v90 != 0) {
            v92 = v133[1];
            v91 = v133[2];
            if (*(_BYTE*)(v134_.v137 - 8) == 1) {
              if (v91 < v92) {
                v93 = 44;
              LABEL_96:
                v94 = *v133;
                v133[2] = v91 + 1;
                *(_BYTE*)(v94 + v91) = v93;
                v90 = *(_QWORD*)(v89 - 16);
              }
            }
            else if (v91 < v92) {
              if ((v90 & 1) != 0) {
                v93 = 58;
              }
              else {
                v93 = 44;
              }
              goto LABEL_96;
            }
          }
          *(_QWORD*)(v89 - 16) = v90 + 1;
        LABEL_98:
          nn_ec_3f84e0(&v133, (__int64)v132, v88);
          v134_.v137 -= 16;
          v95 = v133[2];
          if (v95 < v133[1]) {
            v96 = *v133;
            v133[2] = v95 + 1;
            *(_BYTE*)(v96 + v95) = 125;
          }
          --v50;
          v51 += 13;
        } while (v50 != 0);
      }
      v97 = v133;
      v98 = v134_.v137 - 16;
      v134_.v137 -= 16;
      v99 = v133[2];
      if (v99 < v133[1]) {
        v100 = *v133;
        v133[2] = v99 + 1;
        *(_BYTE*)(v100 + v99) = 93;
        v98 = v134_.v137;
        v97 = v133;
      }
      v29 = v121;
      v27 = v120;
      v134_.v137 = v98 - 16;
      v101 = v97[2];
      if (v101 < v97[1]) {
        v102 = *v97;
        v97[2] = v101 + 1;
        *(_BYTE*)(v102 + v101) = 125;
      }
      v103 = v141_.v142;
      memcpy_plt(v121, v141_.v141[0], v141_.v142);
      v104 = v134_.v135;
      if (v134_.v135 != nullptr) {
        v105 = v134_.v135[2];
        v106 = *v134_.v135;
        for (j = *v134_.v135 == v105; v106 != 0 && v106 != v105;
             j = v106 == v105) {
          v106 = *(_QWORD*)(v106 + 16);
          *v104 = v106;
        }
        if (v106 != 0 && j) {
          *(_QWORD*)(v106 + 8) = 0;
        }
        v110 = v104[4];
        if (v110 != 0) {
          SdkRoutine_857220(v110, 1);
        }
        SdkRoutine_857220(v104, 40);
      }
      nn_mem_StandardAllocator_Free_plt(a6, v32);
      v26 = 0;
      v111 = v143_.v144;
      v112 = (_QWORD*)v143_.v143[0];
      v113 = v143_.v143[0] == (_QWORD)v143_.v144;
      v114 = v143_.v143[0] == (_QWORD)v143_.v144;
      if (v143_.v143[0] == 0) {
        goto LABEL_134;
      }
      goto LABEL_127;
    }
    v37 = *(_QWORD*)(v134_.v137 - 16);
    if (v37 != 0) {
      v39 = v133[1];
      v38 = v133[2];
      if (*(_BYTE*)(v134_.v137 - 8) == 1) {
        if (v38 < v39) {
          v40 = 44;
        LABEL_24:
          v41 = *v133;
          v133[2] = v38 + 1;
          *(_BYTE*)(v41 + v38) = v40;
          v37 = *(_QWORD*)(v36 - 16);
        }
      }
      else if (v38 < v39) {
        if ((v37 & 1) != 0) {
          v40 = 58;
        }
        else {
          v40 = 44;
        }
        goto LABEL_24;
      }
    }
    *(_QWORD*)(v36 - 16) = v37 + 1;
    goto LABEL_26;
  }
  return 46244;
}

__int64 nn_ec_BeginConsumeRightData_3f51b0(__int64 a1, __int64 a2, __int64 a3,
                                           unsigned int a4, __int64 a5,
                                           __int64 a6, __int64 a7)
{
  __int64 result;
  unsigned int v15;
  _QWORD v16[9];

  memset(v16, 0, sizeof(v16));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v16);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v16, a6, a7);
  result = nn_ec_BeginConsumeRightData_plt(a1, a2, a3, a4, a5, v16);
  if (LOBYTE(v16[0]) == 1) {
    v15 = result;
    nn_mem_StandardAllocator_Finalize_plt(v16);
    return v15;
  }
  return result;
}

__int64 nn_ec_EndConsumeRightData_3f5280(void* this_, int* a2, void* a3,
                                         __int64 a4, void* a5, __int64 a6,
                                         void* a7, void* a8)
{
  int v9;
  int v11;
  __int64 result;
  int v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  int* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;

  v9 = (int)a5;
  v11 = (int)a3;
  v79 = 0;
  result = nn_ec_ShopServiceAccessor_AsyncResponse_GetSize_plt(a6, &v79);
  if ((_DWORD)result == 0) {
    if (v9 >= v11) {
      v14 = v11;
    }
    else {
      v14 = v9;
    }
    if (v14 < 1) {
      goto LABEL_14;
    }
    v15 = v14 & 3;
    if ((unsigned int)v14 >= 4) {
      v17 = a2 + 52;
      v18 = (_QWORD*)(a4 + 208);
      v19 = 0;
      v20 = -(__int64)(v14 & 0x7FFFFFFC);
      do {
        v21 = *(v18 - 21);
        v22 = *(v18 - 19);
        v23 = *(v18 - 18);
        v19 -= 4;
        *((_QWORD*)v17 - 20) = *(v18 - 20);
        *((_QWORD*)v17 - 26) = *(v18 - 26);
        v24 = *(v18 - 25);
        v25 = *(v18 - 24);
        v26 = *(v18 - 23);
        v27 = *(v18 - 22);
        *((_QWORD*)v17 - 19) = v22;
        *((_QWORD*)v17 - 18) = v23;
        *((_QWORD*)v17 - 21) = v21;
        *((_QWORD*)v17 - 23) = v26;
        *((_QWORD*)v17 - 22) = v27;
        *((_QWORD*)v17 - 25) = v24;
        *((_QWORD*)v17 - 24) = v25;
        v28 = *(v18 - 17);
        v29 = *(v18 - 16);
        v30 = *(v18 - 15);
        v31 = *(v18 - 14);
        *((_BYTE*)v17 - 153) = 1;
        *((_QWORD*)v17 - 15) = v30;
        *((_QWORD*)v17 - 14) = v31;
        *((_QWORD*)v17 - 17) = v28;
        *((_QWORD*)v17 - 16) = v29;
        v32 = *(v18 - 8);
        v33 = *(v18 - 6);
        v34 = *(v18 - 5);
        *((_QWORD*)v17 - 7) = *(v18 - 7);
        *((_QWORD*)v17 - 13) = *(v18 - 13);
        v35 = *(v18 - 12);
        v36 = *(v18 - 11);
        v37 = *(v18 - 10);
        v38 = *(v18 - 9);
        *((_QWORD*)v17 - 6) = v33;
        *((_QWORD*)v17 - 5) = v34;
        *((_QWORD*)v17 - 8) = v32;
        *((_QWORD*)v17 - 10) = v37;
        *((_QWORD*)v17 - 9) = v38;
        *((_QWORD*)v17 - 12) = v35;
        *((_QWORD*)v17 - 11) = v36;
        v39 = *(v18 - 4);
        v40 = *(v18 - 3);
        v41 = *(v18 - 2);
        v42 = *(v18 - 1);
        *((_BYTE*)v17 - 49) = 1;
        *((_QWORD*)v17 - 2) = v41;
        *((_QWORD*)v17 - 1) = v42;
        *((_QWORD*)v17 - 4) = v39;
        *((_QWORD*)v17 - 3) = v40;
        v43 = v18[5];
        v44 = v18[7];
        v45 = v18[8];
        *((_QWORD*)v17 + 6) = v18[6];
        *(_QWORD*)v17 = *v18;
        v46 = v18[1];
        v47 = v18[2];
        v48 = v18[3];
        v49 = v18[4];
        *((_QWORD*)v17 + 7) = v44;
        *((_QWORD*)v17 + 8) = v45;
        *((_QWORD*)v17 + 5) = v43;
        *((_QWORD*)v17 + 3) = v48;
        *((_QWORD*)v17 + 4) = v49;
        *((_QWORD*)v17 + 1) = v46;
        *((_QWORD*)v17 + 2) = v47;
        v50 = v18[9];
        v51 = v18[10];
        v52 = v18[11];
        v53 = v18[12];
        *((_BYTE*)v17 + 55) = 1;
        *((_QWORD*)v17 + 11) = v52;
        *((_QWORD*)v17 + 12) = v53;
        *((_QWORD*)v17 + 9) = v50;
        *((_QWORD*)v17 + 10) = v51;
        v54 = v18[18];
        v55 = v18[20];
        v56 = v18[21];
        *((_QWORD*)v17 + 19) = v18[19];
        *((_QWORD*)v17 + 13) = v18[13];
        v57 = v18[14];
        v58 = v18[15];
        v59 = v18[16];
        v60 = v18[17];
        *((_QWORD*)v17 + 20) = v55;
        *((_QWORD*)v17 + 21) = v56;
        *((_QWORD*)v17 + 18) = v54;
        *((_QWORD*)v17 + 16) = v59;
        *((_QWORD*)v17 + 17) = v60;
        *((_QWORD*)v17 + 14) = v57;
        *((_QWORD*)v17 + 15) = v58;
        v61 = v18[22];
        v62 = v18[23];
        v63 = v18[24];
        v64 = v18[25];
        *((_BYTE*)v17 + 159) = 1;
        v18 += 52;
        *((_QWORD*)v17 + 24) = v63;
        *((_QWORD*)v17 + 25) = v64;
        *((_QWORD*)v17 + 22) = v61;
        *((_QWORD*)v17 + 23) = v62;
        v17 += 104;
      } while (v20 != v19);
      v16 = -v19;
      if (v15 == 0) {
        goto LABEL_14;
      }
    }
    else {
      v16 = 0;
      if ((v14 & 3) == 0) {
      LABEL_14:
        *(_DWORD*)this_ = v9;
        return result;
      }
    }
    v65 = 26 * v16;
    v66 = (_QWORD*)(a4 + 104 * v16);
    v67 = &a2[v65];
    do {
      v68 = v66[5];
      v69 = v66[7];
      v70 = v66[8];
      --v15;
      *((_QWORD*)v67 + 6) = v66[6];
      *(_QWORD*)v67 = *v66;
      v71 = v66[1];
      v72 = v66[2];
      v73 = v66[3];
      v74 = v66[4];
      *((_QWORD*)v67 + 7) = v69;
      *((_QWORD*)v67 + 8) = v70;
      *((_QWORD*)v67 + 5) = v68;
      *((_QWORD*)v67 + 3) = v73;
      *((_QWORD*)v67 + 4) = v74;
      *((_QWORD*)v67 + 1) = v71;
      *((_QWORD*)v67 + 2) = v72;
      v75 = v66[9];
      v76 = v66[10];
      v77 = v66[11];
      v78 = v66[12];
      *((_BYTE*)v67 + 55) = 1;
      v66 += 13;
      *((_QWORD*)v67 + 11) = v77;
      *((_QWORD*)v67 + 12) = v78;
      *((_QWORD*)v67 + 9) = v75;
      *((_QWORD*)v67 + 10) = v76;
      v67 += 26;
    } while (v15 != 0);
    goto LABEL_14;
  }
  return result;
}

__int64 nn_ec_EndConsumeRightData_3f54e0(void* this_, int* a2, void* a3,
                                         __int64 a4, void* a5, __int64 a6,
                                         void* a7, void* a8,
                                         unsigned __int64 a9)
{
  int v13;
  int v15;
  __int64 result;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  int* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD v84[9];
  __int64 v85;

  v13 = (int)a5;
  v15 = (int)a3;
  memset(v84, 0, sizeof(v84));
  nn_mem_StandardAllocator_StandardAllocator_plt_85d090(v84);
  nn_mem_StandardAllocator_Initialize_plt_85d020(v84, a7, a8);
  v85 = 0;
  result = nn_ec_ShopServiceAccessor_AsyncResponse_GetSize_plt(a6, &v85);
  if ((_DWORD)result != 0) {
    if (LOBYTE(v84[0]) != 1) {
      return result;
    }
    goto LABEL_3;
  }
  if (v13 >= v15) {
    v19 = v15;
  }
  else {
    v19 = v13;
  }
  if (v19 >= 1) {
    v20 = v19 & 3;
    if ((unsigned int)v19 < 4) {
      v21 = 0;
      if ((v19 & 3) == 0) {
        goto LABEL_17;
      }
      goto LABEL_15;
    }
    v22 = a2 + 52;
    v23 = (_QWORD*)(a4 + 208);
    v24 = 0;
    v25 = -(__int64)(v19 & 0x7FFFFFFC);
    do {
      v26 = *(v23 - 21);
      v27 = *(v23 - 19);
      v28 = *(v23 - 18);
      v24 -= 4;
      *((_QWORD*)v22 - 20) = *(v23 - 20);
      *((_QWORD*)v22 - 26) = *(v23 - 26);
      v29 = *(v23 - 25);
      v30 = *(v23 - 24);
      v31 = *(v23 - 23);
      v32 = *(v23 - 22);
      *((_QWORD*)v22 - 19) = v27;
      *((_QWORD*)v22 - 18) = v28;
      *((_QWORD*)v22 - 21) = v26;
      *((_QWORD*)v22 - 23) = v31;
      *((_QWORD*)v22 - 22) = v32;
      *((_QWORD*)v22 - 25) = v29;
      *((_QWORD*)v22 - 24) = v30;
      v33 = *(v23 - 17);
      v34 = *(v23 - 16);
      v35 = *(v23 - 15);
      v36 = *(v23 - 14);
      *((_BYTE*)v22 - 153) = 1;
      *((_QWORD*)v22 - 15) = v35;
      *((_QWORD*)v22 - 14) = v36;
      *((_QWORD*)v22 - 17) = v33;
      *((_QWORD*)v22 - 16) = v34;
      v37 = *(v23 - 8);
      v38 = *(v23 - 6);
      v39 = *(v23 - 5);
      *((_QWORD*)v22 - 7) = *(v23 - 7);
      *((_QWORD*)v22 - 13) = *(v23 - 13);
      v40 = *(v23 - 12);
      v41 = *(v23 - 11);
      v42 = *(v23 - 10);
      v43 = *(v23 - 9);
      *((_QWORD*)v22 - 6) = v38;
      *((_QWORD*)v22 - 5) = v39;
      *((_QWORD*)v22 - 8) = v37;
      *((_QWORD*)v22 - 10) = v42;
      *((_QWORD*)v22 - 9) = v43;
      *((_QWORD*)v22 - 12) = v40;
      *((_QWORD*)v22 - 11) = v41;
      v44 = *(v23 - 4);
      v45 = *(v23 - 3);
      v46 = *(v23 - 2);
      v47 = *(v23 - 1);
      *((_BYTE*)v22 - 49) = 1;
      *((_QWORD*)v22 - 2) = v46;
      *((_QWORD*)v22 - 1) = v47;
      *((_QWORD*)v22 - 4) = v44;
      *((_QWORD*)v22 - 3) = v45;
      v48 = v23[5];
      v49 = v23[7];
      v50 = v23[8];
      *((_QWORD*)v22 + 6) = v23[6];
      *(_QWORD*)v22 = *v23;
      v51 = v23[1];
      v52 = v23[2];
      v53 = v23[3];
      v54 = v23[4];
      *((_QWORD*)v22 + 7) = v49;
      *((_QWORD*)v22 + 8) = v50;
      *((_QWORD*)v22 + 5) = v48;
      *((_QWORD*)v22 + 3) = v53;
      *((_QWORD*)v22 + 4) = v54;
      *((_QWORD*)v22 + 1) = v51;
      *((_QWORD*)v22 + 2) = v52;
      v55 = v23[9];
      v56 = v23[10];
      v57 = v23[11];
      v58 = v23[12];
      *((_BYTE*)v22 + 55) = 1;
      *((_QWORD*)v22 + 11) = v57;
      *((_QWORD*)v22 + 12) = v58;
      *((_QWORD*)v22 + 9) = v55;
      *((_QWORD*)v22 + 10) = v56;
      v59 = v23[18];
      v60 = v23[20];
      v61 = v23[21];
      *((_QWORD*)v22 + 19) = v23[19];
      *((_QWORD*)v22 + 13) = v23[13];
      v62 = v23[14];
      v63 = v23[15];
      v64 = v23[16];
      v65 = v23[17];
      *((_QWORD*)v22 + 20) = v60;
      *((_QWORD*)v22 + 21) = v61;
      *((_QWORD*)v22 + 18) = v59;
      *((_QWORD*)v22 + 16) = v64;
      *((_QWORD*)v22 + 17) = v65;
      *((_QWORD*)v22 + 14) = v62;
      *((_QWORD*)v22 + 15) = v63;
      v66 = v23[22];
      v67 = v23[23];
      v68 = v23[24];
      v69 = v23[25];
      *((_BYTE*)v22 + 159) = 1;
      v23 += 52;
      *((_QWORD*)v22 + 24) = v68;
      *((_QWORD*)v22 + 25) = v69;
      *((_QWORD*)v22 + 22) = v66;
      *((_QWORD*)v22 + 23) = v67;
      v22 += 104;
    } while (v25 != v24);
    v21 = -v24;
    if (v20 != 0) {
    LABEL_15:
      v70 = 26 * v21;
      v71 = (_QWORD*)(a4 + 104 * v21);
      v72 = &a2[v70];
      do {
        v73 = v71[5];
        v74 = v71[7];
        v75 = v71[8];
        --v20;
        *((_QWORD*)v72 + 6) = v71[6];
        *(_QWORD*)v72 = *v71;
        v76 = v71[1];
        v77 = v71[2];
        v78 = v71[3];
        v79 = v71[4];
        *((_QWORD*)v72 + 7) = v74;
        *((_QWORD*)v72 + 8) = v75;
        *((_QWORD*)v72 + 5) = v73;
        *((_QWORD*)v72 + 3) = v78;
        *((_QWORD*)v72 + 4) = v79;
        *((_QWORD*)v72 + 1) = v76;
        *((_QWORD*)v72 + 2) = v77;
        v80 = v71[9];
        v81 = v71[10];
        v82 = v71[11];
        v83 = v71[12];
        *((_BYTE*)v72 + 55) = 1;
        v71 += 13;
        *((_QWORD*)v72 + 11) = v82;
        *((_QWORD*)v72 + 12) = v83;
        *((_QWORD*)v72 + 9) = v80;
        *((_QWORD*)v72 + 10) = v81;
        v72 += 26;
      } while (v20 != 0);
    }
  }
LABEL_17:
  *(_DWORD*)this_ = v13;
  if (LOBYTE(v84[0]) != 1) {
    return result;
  }
LABEL_3:
  v18 = result;
  nn_mem_StandardAllocator_Finalize_plt(v84);
  return v18;
}

__int64 nn_ec_3f57a0(__int64 result, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  char v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned __int64 v23;
  int v24;
  unsigned __int64 v25;
  _DWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  bool v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  _BOOL4 v52;
  __int64 v53;
  __int64 v54;
  _BOOL4 v56;
  unsigned __int8* v57;
  int v58;
  unsigned __int16* v59;
  int v60;
  unsigned int v61;
  _BOOL4 v63;
  _DWORD* v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  __int64 v79;
  unsigned int v80;
  __int64 v81;
  __int64 v83;
  int v84;
  __int64 v85;
  unsigned int v86;
  __int64 v87;
  int v89;
  int v90;
  int v91;
  int v92;
  double v93;
  int v94;
  __int64 v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  int v99;
  int v100;
  unsigned int v101;
  unsigned int v103;
  double v104;
  unsigned int v105;
  unsigned int v106;
  __int64 v107;
  _QWORD* v108;
  __int64 v109;
  _DWORD* v110;
  int v111;
  int v112;
  __int64 v113;
  _BOOL4 v114;
  __int64 v115;
  __int64 v116;
  _BOOL4 v118;
  unsigned __int8* v119;
  int v120;
  unsigned __int16* v121;
  int v122;
  unsigned int v123;
  _BOOL4 v125;
  __int64 v126;
  _QWORD* v127;
  __int64 v128;
  _DWORD* v129;
  int v130;
  int v131;
  __int64 v132;
  _BOOL4 v133;
  __int64 v134;
  __int64 v135;
  _BOOL4 v137;
  unsigned __int8* v138;
  int v139;
  unsigned __int16* v140;
  int v141;
  unsigned int v142;
  _BOOL4 v144;
  __int64 v145;
  _QWORD* v146;
  unsigned __int64 v147;
  __int64 v148;
  _DWORD* v149;
  int v150;
  int v151;
  __int64 v152;
  _BOOL4 v153;
  __int64 v154;
  __int64 v155;
  _BOOL4 v157;
  unsigned __int8* v158;
  int v159;
  unsigned __int16* v160;
  int v161;
  unsigned int v162;
  _BOOL4 v164;
  int v165;
  unsigned __int64 v166;
  __int64 v167;
  int v168;
  _BOOL4 v169;
  int v170;
  __int64 v171;
  int v172;
  __int64 v173;
  _QWORD* v174;
  double v175;
  __int64 v176;
  _DWORD* v177;
  int v178;
  int v179;
  __int64 v180;
  _BOOL4 v181;
  __int64 v182;
  __int64 v183;
  _BOOL4 v185;
  unsigned __int8* v186;
  int v187;
  unsigned __int16* v188;
  int v189;
  unsigned int v190;
  _BOOL4 v192;
  int v193;
  int v194;

  v3 = a2[6];
  v4 = a2[7];
  v7 = result;
  if (v4 == v3) {
    v8 = 0;
    v9 = a2[7];
    goto LABEL_3;
  }
  v10 = a2[5];
  v8 = 0;
  v11 = *(unsigned __int8*)(v10 + v4);
  if (v11 <= 0x65) {
    if (v11 == 34) {
      return nn_ec_3f6d60(result, a2, (__int64)a3, 0);
    }
    if (v11 == 45) {
      v9 = v4 + 1;
      v8 = 1;
      a2[7] = v4 + 1;
      goto LABEL_3;
    }
    v9 = a2[7];
    if (v11 != 91) {
    LABEL_3:
      if (v9 == v3) {
      LABEL_4:
        *(_QWORD*)(result + 56) = v9;
        *(_DWORD*)(result + 48) = 3;
        return result;
      }
      v16 = a2[5];
      v17 = *(unsigned __int8*)(v16 + v9);
      v18 = v17 - 48;
      if (v17 == 48) {
        v19 = v9 + 1;
        v23 = 0;
        v91 = 0;
        v20 = 0;
        v92 = 0;
        a2[7] = v19;
      }
      else {
        if ((unsigned int)(v17 - 49) > 8) {
          goto LABEL_4;
        }
        v19 = v9 + 1;
        a2[7] = v19;
        if ((v8 & 1) != 0) {
          if (v19 == v3) {
            goto LABEL_272;
          }
          v20 = 0;
          while (1) {
            v21 = *(unsigned __int8*)(v16 + v19);
            if ((unsigned int)(v21 - 48) > 9) {
              break;
            }
            if (v18 > 0xCCCCCCB) {
              if (v18 != 214748364) {
                goto LABEL_51;
              }
              if (v21 == 57) {
                v18 = 214748364;
                goto LABEL_51;
              }
            }
            ++v19;
            ++v20;
            a2[7] = v19;
            v18 = v21 + 10 * v18 - 48;
            if (v3 == v19) {
              goto LABEL_271;
            }
          }
        }
        else {
          if (v19 == v3) {
            goto LABEL_312;
          }
          v20 = 0;
          while (1) {
            v22 = *(unsigned __int8*)(v16 + v19);
            if (v22 - 48 > 9) {
              break;
            }
            if (v18 > 0x19999998) {
              if (v18 != 429496729) {
                goto LABEL_51;
              }
              if (v22 > 0x35) {
                v18 = 429496729;
              LABEL_51:
                v23 = v18;
                if ((v8 & 1) != 0) {
                  if (v19 == v3) {
                    goto LABEL_270;
                  }
                  while (1) {
                    v24 = *(unsigned __int8*)(v16 + v19);
                    if ((unsigned int)(v24 - 48) > 9) {
                      break;
                    }
                    if (v23 > 0xCCCCCCCCCCCCCCBLL) {
                      v25 = v23;
                      if (v23 != 0xCCCCCCCCCCCCCCCLL) {
                        goto LABEL_231;
                      }
                      if (v24 == 57) {
                        v25 = 0xCCCCCCCCCCCCCCCLL;
                        goto LABEL_231;
                      }
                    }
                    ++v19;
                    ++v20;
                    v23 = (v24 & 0xF) + 10 * v23;
                    a2[7] = v19;
                    if (v3 == v19) {
                      goto LABEL_269;
                    }
                  }
                }
                else {
                  if (v19 == v3) {
                    return nn_ec_3f8100((__int64)a3, v23);
                  }
                  while (1) {
                    v97 = *(unsigned __int8*)(v16 + v19);
                    if (v97 - 48 > 9) {
                      break;
                    }
                    if (v23 > 0x1999999999999998LL) {
                      v25 = v23;
                      if (v23 != 0x1999999999999999LL) {
                        goto LABEL_231;
                      }
                      if (v97 > 0x35) {
                        v25 = 0x1999999999999999LL;
                      LABEL_231:
                        v93 = (double)v25;
                        if (v19 == v3) {
                          goto LABEL_218;
                        }
                        while (1) {
                          v98 = *(unsigned __int8*)(v16 + v19) - 48;
                          if (v98 > 9) {
                            v91 = 1;
                            v92 = 1;
                            v23 = v25;
                            goto LABEL_216;
                          }
                          if (v93 >= 0x1.9999999999999p+1020) {
                            break;
                          }
                          ++v19;
                          v94 = 0;
                          a2[7] = v19;
                          v93 = (double)v98 + v93 * 0x1.4000000000000p+3;
                          if (v3 == v19) {
                            goto LABEL_253;
                          }
                        }
                      LABEL_473:
                        v96 = 13;
                        *(_QWORD*)(v7 + 56) = v4;
                        goto LABEL_222;
                      }
                    }
                    ++v19;
                    ++v20;
                    v23 = (v97 & 0xF) + 10 * v23;
                    a2[7] = v19;
                    if (v3 == v19) {
                      goto LABEL_269;
                    }
                  }
                }
                v91 = 0;
                v93 = 0x0.0p+0;
                v92 = 1;
                goto LABEL_216;
              }
            }
            ++v19;
            ++v20;
            a2[7] = v19;
            v18 = v22 + 10 * v18 - 48;
            if (v3 == v19) {
              goto LABEL_271;
            }
          }
        }
        v23 = 0;
        v91 = 0;
        v92 = 0;
      }
      v93 = 0x0.0p+0;
    LABEL_216:
      if (v19 == v3) {
        if ((v91 & 1) != 0) {
        LABEL_218:
          v94 = 0;
          goto LABEL_253;
        }
      LABEL_268:
        if (v92 != 0) {
        LABEL_269:
          if (v8 != 0) {
          LABEL_270:
            v23 = -(__int64)v23;
          }
          else if ((v23 & 0x8000000000000000LL) != 0) {
            v145 = *((int*)a3 + 27);
            v146 = a3 + 2;
            if ((int)v145 <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
              result = (__int64)&v146[v145];
              v147 = v23;
              if (*(_BYTE*)result != 2 ||
                  (v148 = *((unsigned __int16*)a3 + v145 + 44),
                   ++*(_DWORD*)(result + 4),
                   result = nn_http_json_Node_Print_plt(
                       result, (char*)a3 + v148 + 120, 129 - v148, 0),
                   *((_WORD*)a3 + 125) = result + v148,
                   (unsigned __int16)(result + v148) <= 0x80u)) {
                v149 = (_DWORD*)*a3;
                if (*(_DWORD*)(*a3 + 8LL) == 0) {
                  result = (*(__int64 (**)(_QWORD, _QWORD*, unsigned __int64))(
                      *(_QWORD*)v149 + 24LL))(*a3, a3 + 2, v147);
                  v149[2] = result;
                }
              }
            }
            v151 = *((_DWORD*)a3 + 28);
            v150 = *((_DWORD*)a3 + 29);
            v152 = *((int*)a3 + 27);
            v153 = v152 == v150;
            if (v151 != v150) {
              v153 = false;
            }
            if ((int)v152 < v150 || v153) {
              v150 = -1;
              *((_DWORD*)a3 + 29) = -1;
            }
            if ((int)v152 <= 8 && v150 < 0 && LOBYTE(v146[v152]) == 3) {
              v154 = *((unsigned __int16*)a3 + v152 + 44);
              *((_WORD*)a3 + 125) = v154;
              *((_BYTE*)a3 + v154 + 120) = 0;
              v155 = v152 - 1;
              *((_DWORD*)a3 + 27) = v152 - 1;
              if (v151 >= (int)v152) {
                *((_DWORD*)a3 + 28) = v155;
                v151 = v152 - 1;
              }
              v157 = v150 == (_DWORD)v155 && v151 == v150;
              if ((int)v152 <= v150 || v157) {
                v150 = -1;
                *((_DWORD*)a3 + 29) = -1;
              }
              if (LOBYTE(v146[v155]) == 3) {
                v158 = (unsigned __int8*)&a3[v152];
                v159 = v152 - 2;
                v160 = (unsigned __int16*)a3 + v152 + 43;
                do {
                  v162 = *v160--;
                  *((_DWORD*)a3 + 27) = v159;
                  *((_WORD*)a3 + 125) = v162;
                  *((_BYTE*)a3 + v162 + 120) = 0;
                  if (v155 <= v151) {
                    *((_DWORD*)a3 + 28) = v159;
                    v151 = v159;
                  }
                  v164 = v159 == v150 && v151 == v150;
                  if (v155 <= v150 || v164) {
                    v150 = -1;
                    *((_DWORD*)a3 + 29) = -1;
                  }
                  v161 = *v158;
                  v158 -= 8;
                  --v159;
                  --v155;
                } while (v161 == 3);
              }
            }
            return result;
          }
          return nn_ec_3f8100((__int64)a3, v23);
        }
      LABEL_271:
        if (v8 != 0) {
        LABEL_272:
          v107 = *((int*)a3 + 27);
          v108 = a3 + 2;
          if ((int)v107 <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
            result = (__int64)&v108[v107];
            if (*(_BYTE*)result != 2 ||
                (v109 = *((unsigned __int16*)a3 + v107 + 44),
                 ++*(_DWORD*)(result + 4),
                 result = nn_http_json_Node_Print_plt(
                     result, (char*)a3 + v109 + 120, 129 - v109, 0),
                 *((_WORD*)a3 + 125) = result + v109,
                 (unsigned __int16)(result + v109) <= 0x80u)) {
              v110 = (_DWORD*)*a3;
              if (*(_DWORD*)(*a3 + 8LL) == 0) {
                result = (*(__int64 (**)(_QWORD, _QWORD*, _QWORD))(
                    *(_QWORD*)v110 + 16LL))(*a3, a3 + 2, -v18);
                v110[2] = result;
              }
            }
          }
          v112 = *((_DWORD*)a3 + 28);
          v111 = *((_DWORD*)a3 + 29);
          v113 = *((int*)a3 + 27);
          v114 = v113 == v111;
          if (v112 != v111) {
            v114 = false;
          }
          if ((int)v113 < v111 || v114) {
            v111 = -1;
            *((_DWORD*)a3 + 29) = -1;
          }
          if ((int)v113 <= 8 && v111 < 0 && LOBYTE(v108[v113]) == 3) {
            v115 = *((unsigned __int16*)a3 + v113 + 44);
            *((_WORD*)a3 + 125) = v115;
            *((_BYTE*)a3 + v115 + 120) = 0;
            v116 = v113 - 1;
            *((_DWORD*)a3 + 27) = v113 - 1;
            if (v112 >= (int)v113) {
              *((_DWORD*)a3 + 28) = v116;
              v112 = v113 - 1;
            }
            v118 = v111 == (_DWORD)v116 && v112 == v111;
            if ((int)v113 <= v111 || v118) {
              v111 = -1;
              *((_DWORD*)a3 + 29) = -1;
            }
            if (LOBYTE(v108[v116]) == 3) {
              v119 = (unsigned __int8*)&a3[v113];
              v120 = v113 - 2;
              v121 = (unsigned __int16*)a3 + v113 + 43;
              do {
                v123 = *v121--;
                *((_DWORD*)a3 + 27) = v120;
                *((_WORD*)a3 + 125) = v123;
                *((_BYTE*)a3 + v123 + 120) = 0;
                if (v116 <= v112) {
                  *((_DWORD*)a3 + 28) = v120;
                  v112 = v120;
                }
                v125 = v120 == v111 && v112 == v111;
                if (v116 <= v111 || v125) {
                  v111 = -1;
                  *((_DWORD*)a3 + 29) = -1;
                }
                v122 = *v119;
                v119 -= 8;
                --v120;
                --v116;
              } while (v122 == 3);
            }
          }
          return result;
        }
      LABEL_312:
        v126 = *((int*)a3 + 27);
        v127 = a3 + 2;
        if ((int)v126 <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
          result = (__int64)&v127[v126];
          if (*(_BYTE*)result != 2 ||
              (v128 = *((unsigned __int16*)a3 + v126 + 44),
               ++*(_DWORD*)(result + 4),
               result = nn_http_json_Node_Print_plt(
                   result, (char*)a3 + v128 + 120, 129 - v128, 0),
               *((_WORD*)a3 + 125) = result + v128,
               (unsigned __int16)(result + v128) <= 0x80u)) {
            v129 = (_DWORD*)*a3;
            if (*(_DWORD*)(*a3 + 8LL) == 0) {
              result = (*(__int64 (**)(_QWORD, _QWORD*, _QWORD))(
                  *(_QWORD*)v129 + 16LL))(*a3, a3 + 2, v18);
              v129[2] = result;
            }
          }
        }
        v131 = *((_DWORD*)a3 + 28);
        v130 = *((_DWORD*)a3 + 29);
        v132 = *((int*)a3 + 27);
        v133 = v132 == v130;
        if (v131 != v130) {
          v133 = false;
        }
        if ((int)v132 < v130 || v133) {
          v130 = -1;
          *((_DWORD*)a3 + 29) = -1;
        }
        if ((int)v132 <= 8 && v130 < 0 && LOBYTE(v127[v132]) == 3) {
          v134 = *((unsigned __int16*)a3 + v132 + 44);
          *((_WORD*)a3 + 125) = v134;
          *((_BYTE*)a3 + v134 + 120) = 0;
          v135 = v132 - 1;
          *((_DWORD*)a3 + 27) = v132 - 1;
          if (v131 >= (int)v132) {
            *((_DWORD*)a3 + 28) = v135;
            v131 = v132 - 1;
          }
          v137 = v130 == (_DWORD)v135 && v131 == v130;
          if ((int)v132 <= v130 || v137) {
            v130 = -1;
            *((_DWORD*)a3 + 29) = -1;
          }
          if (LOBYTE(v127[v135]) == 3) {
            v138 = (unsigned __int8*)&a3[v132];
            v139 = v132 - 2;
            v140 = (unsigned __int16*)a3 + v132 + 43;
            do {
              v142 = *v140--;
              *((_DWORD*)a3 + 27) = v139;
              *((_WORD*)a3 + 125) = v142;
              *((_BYTE*)a3 + v142 + 120) = 0;
              if (v135 <= v131) {
                *((_DWORD*)a3 + 28) = v139;
                v131 = v139;
              }
              v144 = v139 == v130 && v131 == v130;
              if (v135 <= v130 || v144) {
                v130 = -1;
                *((_DWORD*)a3 + 29) = -1;
              }
              v141 = *v138;
              v138 -= 8;
              --v139;
              --v135;
            } while (v141 == 3);
          }
        }
        return result;
      }
      if (*(_BYTE*)(v16 + v19) == 46) {
        v95 = v19 + 1;
        a2[7] = v19 + 1;
        if (v19 + 1 == v3 ||
            (unsigned int)*(unsigned __int8*)(v16 + v95) - 58 <= 0xFFFFFFF5) {
          v96 = 14;
          *(_QWORD*)(result + 56) = v95;
        LABEL_222:
          *(_DWORD*)(v7 + 48) = v96;
          return result;
        }
        v94 = 0;
        if ((v91 & 1) == 0) {
          v99 = v19 - v3;
          if (v92 == 0) {
            v23 = v18;
          }
          v100 = v99 + 1;
          while (1) {
            v101 = *(unsigned __int8*)(v16 + v95);
            if (v101 < 0x30) {
              break;
            }
            result = v23 >> 53;
            if (v101 > 0x39 || result != 0) {
              break;
            }
            ++v95;
            --v94;
            v23 = v101 - 48 + 10 * v23;
            a2[7] = v95;
            if (v23 != 0) {
              ++v20;
            }
            if (v3 == v95) {
              v95 = v3;
              v94 = v100;
              break;
            }
          }
          v93 = (double)v23;
        }
        if (v95 == v3) {
          goto LABEL_253;
        }
        while (1) {
          v106 = *(unsigned __int8*)(v16 + v95) - 48;
          if (v106 > 9) {
            break;
          }
          a2[7] = ++v95;
          if (v20 <= 16) {
            --v94;
            v93 = (double)v106 + v93 * 0x1.4000000000000p+3;
            if (v93 > 0x0.0p+0) {
              ++v20;
            }
          }
          if (v3 == v95) {
            goto LABEL_253;
          }
        }
        v91 = 1;
        v19 = v95;
        if (v95 == v3) {
          goto LABEL_267;
        }
      }
      else {
        v94 = 0;
        if (v19 == v3) {
        LABEL_267:
          if ((v91 & 1) == 0) {
            goto LABEL_268;
          }
          goto LABEL_253;
        }
      }
      v165 = *(unsigned __int8*)(v16 + v19);
      if (v165 != 101 && v165 != 69) {
        if (v91 == 0) {
          goto LABEL_268;
        }
      LABEL_253:
        v103 = v94;
        if (v94 <= -309) {
          goto LABEL_254;
        }
        goto LABEL_423;
      }
      v166 = v18;
      v167 = v19 + 1;
      if (v92 != 0) {
        v166 = v23;
      }
      a2[7] = v167;
      if (v91 == 0) {
        v93 = (double)v166;
      }
      if (v167 == v3) {
        goto LABEL_410;
      }
      v168 = *(unsigned __int8*)(v16 + v167);
      v169 = v168 != 43;
      if (v168 == 43 || v168 == 45) {
        v167 = v19 + 2;
        a2[7] = v19 + 2;
        if (v19 + 2 != v3) {
        LABEL_416:
          v170 = *(unsigned __int8*)(v16 + v167) - 48;
          if ((unsigned int)v170 <= 9) {
            v171 = v167 + 1;
            a2[7] = v167 + 1;
            if (v169) {
              while (v171 != v3) {
                v194 = *(unsigned __int8*)(v16 + v171);
                if ((unsigned int)(v194 - 48) > 9) {
                  break;
                }
                a2[7] = ++v171;
                v170 = v194 + 10 * v170 - 48;
                if (v171 != v3 && v170 >= 214748364) {
                  while ((unsigned int)*(unsigned __int8*)(v16 + v171) - 48 <=
                         9) {
                    a2[7] = ++v171;
                    if (v3 == v171) {
                      goto LABEL_419;
                    }
                  }
                }
              }
            }
            else {
              while (v3 != v171) {
                v193 = *(unsigned __int8*)(v16 + v171);
                result = (unsigned int)(v193 - 48);
                if ((unsigned int)result > 9) {
                  break;
                }
                a2[7] = ++v171;
                v170 = v193 + 10 * v170 - 48;
                if (v170 > 308 - v94) {
                  goto LABEL_473;
                }
              }
            }
          LABEL_419:
            if (v169) {
              v172 = -v170;
            }
            else {
              v172 = v170;
            }
            v103 = v172 + v94;
            if (v172 + v94 <= -309) {
            LABEL_254:
              v104 = 0x0.0p+0;
              if (v103 >= 0xFFFFFD98) {
                v105 = -308 - v103;
                v93 = v93 / 0x1.1ccf385ebc8a0p+1023;
              LABEL_426:
                v104 = v93 / *(double*)(SdkData_e88010 + 8LL * v105);
                goto LABEL_427;
              }
              goto LABEL_427;
            }
          LABEL_423:
            if ((v103 & 0x80000000) != 0) {
              v105 = -v103;
              goto LABEL_426;
            }
            v104 = v93 * *(double*)(SdkData_e88010 + 8LL * v103);
          LABEL_427:
            v33 = v8 == 0;
            v173 = *((int*)a3 + 27);
            v174 = a3 + 2;
            if (v33) {
              v175 = v104;
            }
            else {
              v175 = -v104;
            }
            if ((int)v173 <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
              result = (__int64)&v174[v173];
              if (*(_BYTE*)result != 2 ||
                  (v176 = *((unsigned __int16*)a3 + v173 + 44),
                   ++*(_DWORD*)(result + 4),
                   result = nn_http_json_Node_Print_plt(
                       result, (char*)a3 + v176 + 120, 129 - v176, 0),
                   *((_WORD*)a3 + 125) = result + v176,
                   (unsigned __int16)(result + v176) <= 0x80u)) {
                v177 = (_DWORD*)*a3;
                if (*(_DWORD*)(*a3 + 8LL) == 0) {
                  result = (*(__int64 (**)(_QWORD, _QWORD*, double))(
                      *(_QWORD*)v177 + 32LL))(*a3, a3 + 2, v175);
                  v177[2] = result;
                }
              }
            }
            v179 = *((_DWORD*)a3 + 28);
            v178 = *((_DWORD*)a3 + 29);
            v180 = *((int*)a3 + 27);
            v181 = v180 == v178;
            if (v179 != v178) {
              v181 = false;
            }
            if ((int)v180 < v178 || v181) {
              v178 = -1;
              *((_DWORD*)a3 + 29) = -1;
            }
            if ((int)v180 <= 8 && v178 < 0 && LOBYTE(v174[v180]) == 3) {
              v182 = *((unsigned __int16*)a3 + v180 + 44);
              *((_WORD*)a3 + 125) = v182;
              *((_BYTE*)a3 + v182 + 120) = 0;
              v183 = v180 - 1;
              *((_DWORD*)a3 + 27) = v180 - 1;
              if (v179 >= (int)v180) {
                *((_DWORD*)a3 + 28) = v183;
                v179 = v180 - 1;
              }
              v185 = v178 == (_DWORD)v183 && v179 == v178;
              if ((int)v180 <= v178 || v185) {
                v178 = -1;
                *((_DWORD*)a3 + 29) = -1;
              }
              if (LOBYTE(v174[v183]) == 3) {
                v186 = (unsigned __int8*)&a3[v180];
                v187 = v180 - 2;
                v188 = (unsigned __int16*)a3 + v180 + 43;
                do {
                  v190 = *v188--;
                  *((_DWORD*)a3 + 27) = v187;
                  *((_WORD*)a3 + 125) = v190;
                  *((_BYTE*)a3 + v190 + 120) = 0;
                  if (v183 <= v179) {
                    *((_DWORD*)a3 + 28) = v187;
                    v179 = v187;
                  }
                  v192 = v187 == v178 && v179 == v178;
                  if (v183 <= v178 || v192) {
                    v178 = -1;
                    *((_DWORD*)a3 + 29) = -1;
                  }
                  v189 = *v186;
                  v186 -= 8;
                  --v187;
                  --v183;
                } while (v189 == 3);
              }
            }
            return result;
          }
          v3 = v167;
        }
      }
      else {
        v169 = false;
        if (v167 != v3) {
          goto LABEL_416;
        }
      }
    LABEL_410:
      v90 = 15;
    LABEL_213:
      *(_DWORD*)(v7 + 48) = v90;
      *(_QWORD*)(v7 + 56) = v3;
      return result;
    }
    a2[7] = v4 + 1;
    result = nn_ec_3f7b90((__int64)(a3 + 2), (_QWORD*)SdkData_e88000, 0);
    if ((result & 1) != 0) {
      if (*((int*)a3 + 27) <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
        v26 = (_DWORD*)*a3;
        if (*(_DWORD*)(*a3 + 8LL) == 0) {
          result = (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)v26 + 64LL))(
              *a3, a3 + 2);
          v26[2] = result;
        }
      }
      v28 = a2[6];
      v27 = a2[7];
      if (v27 == v28) {
      LABEL_74:
        v27 = v28;
      }
      else {
        v29 = a2[5];
        while (1) {
          v30 = *(unsigned __int8*)(v29 + v27);
          v31 = v30 > 0x20;
          v32 = (1LL << v30) & 0x100002600LL;
          v33 = v31 || v32 == 0;
          if (v33) {
            break;
          }
          a2[7] = ++v27;
          if (v28 == v27) {
            goto LABEL_74;
          }
        }
      }
      if (*(_DWORD*)(v7 + 48) == 0) {
        if (v27 == v28 || *(_BYTE*)(a2[5] + v27) != 93) {
          while (1) {
            result = nn_ec_3f57a0(v7, a2, a3);
            if (*(_DWORD*)(v7 + 48) != 0) {
              break;
            }
            v12 = a2[6];
            v35 = a2[7];
            if (v35 == v12) {
              goto LABEL_398;
            }
            v36 = a2[5];
            while (1) {
              v37 = *(unsigned __int8*)(v36 + v35);
              v31 = v37 > 0x20;
              v38 = (1LL << v37) & 0x100002600LL;
              if (v31 || v38 == 0) {
                break;
              }
              a2[7] = ++v35;
              if (v12 == v35) {
                v35 = v12;
                break;
              }
            }
            if (*(_DWORD*)(v7 + 48) != 0) {
              return result;
            }
            if (v35 == v12) {
              goto LABEL_397;
            }
            v40 = a2[5];
            if (*(_BYTE*)(v40 + v35) != 44) {
              if (*(_BYTE*)(a2[5] + v35) == 93) {
                v34 = v35 + 1;
                goto LABEL_79;
              }
            LABEL_397:
              v12 = v35;
            LABEL_398:
              v89 = 7;
              goto LABEL_208;
            }
            v41 = v35 + 1;
            for (a2[7] = v41; v12 != v41; a2[7] = v41) {
              v42 = *(unsigned __int8*)(v40 + v41);
              v31 = v42 > 0x20;
              v43 = (1LL << v42) & 0x100002600LL;
              if (v31 || v43 == 0) {
                break;
              }
              ++v41;
            }
            if (*(_DWORD*)(v7 + 48) != 0) {
              return result;
            }
          }
        }
        else {
          v34 = v27 + 1;
        LABEL_79:
          a2[7] = v34;
          return nn_ec_3f7f00((__int64)a3);
        }
      }
      return result;
    }
  LABEL_207:
    v12 = a2[7];
    v89 = 16;
  LABEL_208:
    *(_DWORD*)(v7 + 48) = v89;
    *(_QWORD*)(v7 + 56) = v12;
    return result;
  }
  if (*(unsigned __int8*)(v10 + v4) <= 0x73u) {
    if (v11 == 102) {
      v12 = v4 + 1;
      a2[7] = v4 + 1;
      if (v4 + 1 != v3) {
        if (*(_BYTE*)(v10 + v12) != 97) {
          goto LABEL_264;
        }
        v12 = v4 + 2;
        a2[7] = v4 + 2;
        if (v4 + 2 != v3) {
          if (*(_BYTE*)(v10 + v12) == 108) {
            v12 = v4 + 3;
            a2[7] = v4 + 3;
            if (v4 + 3 != v3) {
              if (*(_BYTE*)(v10 + v12) == 115) {
                v12 = v3;
                a2[7] = v4 + 4;
                if (v4 + 4 != v3) {
                  v12 = v4 + 4;
                  if (*(_BYTE*)(v10 + v4 + 4) == 101) {
                    v13 = v4 + 5;
                    v14 = a3;
                    v15 = 0;
                  LABEL_41:
                    a2[7] = v13;
                    return nn_ec_3f71a0((__int64)v14, v15);
                  }
                }
              }
              goto LABEL_264;
            }
            goto LABEL_263;
          }
        LABEL_264:
          v89 = 3;
          goto LABEL_208;
        }
      }
      goto LABEL_263;
    }
    v9 = a2[7];
    if (v11 == 110) {
      v12 = v4 + 1;
      a2[7] = v4 + 1;
      if (v4 + 1 != v3) {
        if (*(_BYTE*)(v10 + v12) == 117) {
          v12 = v4 + 2;
          a2[7] = v4 + 2;
          if (v4 + 2 != v3) {
            if (*(_BYTE*)(v10 + v12) == 108) {
              v12 = v3;
              a2[7] = v4 + 3;
              if (v4 + 3 != v3) {
                v12 = v4 + 3;
                if (*(_BYTE*)(v10 + v4 + 3) == 108) {
                  v45 = a3 + 2;
                  a2[7] = v4 + 4;
                  v46 = *((int*)a3 + 27);
                  if ((int)v46 <= 8 &&
                      (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
                    result = (__int64)&v45[v46];
                    if (*(_BYTE*)result != 2 ||
                        (v47 = *((unsigned __int16*)a3 + v46 + 44),
                         ++*(_DWORD*)(result + 4),
                         result = nn_http_json_Node_Print_plt(
                             result, (char*)a3 + v47 + 120, 129 - v47, 0),
                         *((_WORD*)a3 + 125) = result + v47,
                         (unsigned __int16)(result + v47) <= 0x80u)) {
                      v48 = *a3;
                      if (*(_DWORD*)(*a3 + 8LL) == 0) {
                        result = (**(__int64 (***)(_QWORD, _QWORD*,
                                                   _QWORD))v48)(*a3, a3 + 2, 0);
                        *(_DWORD*)(v48 + 8) = result;
                      }
                    }
                  }
                  v50 = *((_DWORD*)a3 + 28);
                  v49 = *((_DWORD*)a3 + 29);
                  v51 = *((int*)a3 + 27);
                  v52 = v51 == v49;
                  if (v50 != v49) {
                    v52 = false;
                  }
                  if ((int)v51 < v49 || v52) {
                    v49 = -1;
                    *((_DWORD*)a3 + 29) = -1;
                  }
                  if ((int)v51 <= 8 && v49 < 0 && LOBYTE(v45[v51]) == 3) {
                    v53 = *((unsigned __int16*)a3 + v51 + 44);
                    *((_WORD*)a3 + 125) = v53;
                    *((_BYTE*)a3 + v53 + 120) = 0;
                    v54 = v51 - 1;
                    *((_DWORD*)a3 + 27) = v51 - 1;
                    if (v50 >= (int)v51) {
                      *((_DWORD*)a3 + 28) = v54;
                      v50 = v51 - 1;
                    }
                    v56 = v49 == (_DWORD)v54 && v50 == v49;
                    if ((int)v51 <= v49 || v56) {
                      v49 = -1;
                      *((_DWORD*)a3 + 29) = -1;
                    }
                    if (LOBYTE(v45[v54]) == 3) {
                      v57 = (unsigned __int8*)&a3[v51];
                      v58 = v51 - 2;
                      v59 = (unsigned __int16*)a3 + v51 + 43;
                      do {
                        v61 = *v59--;
                        *((_DWORD*)a3 + 27) = v58;
                        *((_WORD*)a3 + 125) = v61;
                        *((_BYTE*)a3 + v61 + 120) = 0;
                        if (v54 <= v50) {
                          *((_DWORD*)a3 + 28) = v58;
                          v50 = v58;
                        }
                        v63 = v58 == v49 && v50 == v49;
                        if (v54 <= v49 || v63) {
                          v49 = -1;
                          *((_DWORD*)a3 + 29) = -1;
                        }
                        v60 = *v57;
                        v57 -= 8;
                        --v58;
                        --v54;
                      } while (v60 == 3);
                    }
                  }
                  return result;
                }
              }
            }
            goto LABEL_264;
          }
          goto LABEL_263;
        }
        goto LABEL_264;
      }
    LABEL_263:
      v12 = v3;
      goto LABEL_264;
    }
    goto LABEL_3;
  }
  if (v11 == 116) {
    v12 = v4 + 1;
    a2[7] = v4 + 1;
    if (v4 + 1 != v3) {
      if (*(_BYTE*)(v10 + v12) != 114) {
        goto LABEL_264;
      }
      v12 = v4 + 2;
      a2[7] = v4 + 2;
      if (v4 + 2 != v3) {
        if (*(_BYTE*)(v10 + v12) == 117) {
          v12 = v3;
          a2[7] = v4 + 3;
          if (v4 + 3 != v3) {
            v12 = v4 + 3;
            if (*(_BYTE*)(v10 + v4 + 3) == 101) {
              v13 = v4 + 4;
              v15 = 1;
              v14 = a3;
              goto LABEL_41;
            }
          }
        }
        goto LABEL_264;
      }
    }
    goto LABEL_263;
  }
  v9 = a2[7];
  if (v11 != 123) {
    goto LABEL_3;
  }
  a2[7] = v4 + 1;
  result = nn_ec_3f7b90((__int64)(a3 + 2), (_QWORD*)SdkData_e88008, 0);
  if ((result & 1) == 0) {
    goto LABEL_207;
  }
  if (*((int*)a3 + 27) <= 8 && (*((_DWORD*)a3 + 29) & 0x80000000) != 0) {
    v64 = (_DWORD*)*a3;
    if (*(_DWORD*)(*a3 + 8LL) == 0) {
      result =
          (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)v64 + 48LL))(*a3, a3 + 2);
      v64[2] = result;
    }
  }
  v12 = a2[6];
  v3 = v12;
  if (a2[7] != v12) {
    v65 = a2[5];
    v3 = a2[7];
    while (1) {
      v66 = *(unsigned __int8*)(v65 + v3);
      v31 = v66 > 0x20;
      v67 = (1LL << v66) & 0x100002600LL;
      if (v31 || v67 == 0) {
        break;
      }
      a2[7] = ++v3;
      if (v12 == v3) {
        v3 = v12;
        break;
      }
    }
  }
  if (*(_DWORD*)(v7 + 48) == 0) {
    if (v3 != v12 && *(_BYTE*)(a2[5] + v3) == 125) {
    LABEL_164:
      a2[7] = v3 + 1;
      return nn_ec_3f7d00((__int64)a3);
    }
    while (1) {
      if (v3 == v12 || *(_BYTE*)(a2[5] + v3) != 34) {
        v90 = 4;
        goto LABEL_213;
      }
      result = nn_ec_3f6d60(v7, a2, (__int64)a3, 1);
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
      v12 = a2[6];
      v69 = a2[7];
      if (v69 == v12) {
        goto LABEL_400;
      }
      v70 = a2[5];
      while (1) {
        v71 = *(unsigned __int8*)(v70 + v69);
        v31 = v71 > 0x20;
        v72 = (1LL << v71) & 0x100002600LL;
        if (v31 || v72 == 0) {
          break;
        }
        a2[7] = ++v69;
        if (v12 == v69) {
          v69 = v12;
          break;
        }
      }
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
      if (v69 == v12) {
        break;
      }
      v74 = a2[5];
      if (*(_BYTE*)(v74 + v69) != 58) {
        break;
      }
      v75 = v69 + 1;
      for (a2[7] = v75; v12 != v75; a2[7] = v75) {
        v76 = *(unsigned __int8*)(v74 + v75);
        v31 = v76 > 0x20;
        v77 = (1LL << v76) & 0x100002600LL;
        if (v31 || v77 == 0) {
          break;
        }
        ++v75;
      }
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
      result = nn_ec_3f57a0(v7, a2, a3);
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
      v12 = a2[6];
      v3 = a2[7];
      if (v3 == v12) {
        goto LABEL_211;
      }
      v79 = a2[5];
      while (1) {
        v80 = *(unsigned __int8*)(v79 + v3);
        v31 = v80 > 0x20;
        v81 = (1LL << v80) & 0x100002600LL;
        if (v31 || v81 == 0) {
          break;
        }
        a2[7] = ++v3;
        if (v12 == v3) {
          v3 = v12;
          break;
        }
      }
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
      if (v3 == v12) {
        goto LABEL_211;
      }
      v83 = a2[5];
      v84 = *(unsigned __int8*)(v83 + v3);
      if (v84 != 44) {
        if (v84 == 125) {
          goto LABEL_164;
        }
        v12 = v3;
      LABEL_211:
        v89 = 6;
        goto LABEL_208;
      }
      v85 = v3 + 1;
      v3 = v12;
      a2[7] = v85;
      if (v85 != v12) {
        v3 = v85;
        while (1) {
          v86 = *(unsigned __int8*)(v83 + v3);
          v31 = v86 > 0x20;
          v87 = (1LL << v86) & 0x100002600LL;
          if (v31 || v87 == 0) {
            break;
          }
          a2[7] = ++v3;
          if (v12 == v3) {
            v3 = v12;
            break;
          }
        }
      }
      if (*(_DWORD*)(v7 + 48) != 0) {
        return result;
      }
    }
    v12 = v69;
  LABEL_400:
    v89 = 5;
    goto LABEL_208;
  }
  return result;
}

__int64 nn_ec_3f6d60(__int64 result, _QWORD* a2, __int64 a3, char a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  int v29;
  int v30;
  __int64 v31;
  _BOOL4 v32;
  __int64 v33;
  __int64 v34;
  _BOOL4 v36;
  unsigned __int8* v37;
  int v38;
  unsigned __int16* v39;
  int v40;
  unsigned int v41;
  _BOOL4 v43;
  unsigned __int64 v44;
  __int64 v45;

  v4 = a2[6];
  v5 = a2[7];
  v9 = result;
  if (v5 != v4 && *(_BYTE*)(a2[5] + v5) != 0) {
    a2[7] = ++v5;
  }
  v10 = a2[1];
  if (v10 == 0) {
    result = nn_diag_detail_AbortImpl_plt_856170(result);
    goto LABEL_85;
  }
  a2[3] = 0;
  if (v5 == v4) {
    v5 = v4;
  }
  else {
    v14 = SdkData_e88020;
    do {
      v15 = a2[5];
      v16 = *(unsigned __int8*)(v15 + v5);
      if (v16 == 92) {
        a2[7] = v5 + 1;
        if (v5 + 1 == v4) {
          goto LABEL_87;
        }
        v17 = *(unsigned __int8*)(v15 + v5 + 1);
        v18 = *(_BYTE*)(v14 + v17);
        if (v18 != 0) {
          if (v17 != 0) {
            a2[7] = v5 + 2;
          }
          v19 = a2[3];
          if (v19 < a2[2]) {
            v20 = a2[1];
            a2[3] = v19 + 1;
            *(_BYTE*)(v20 + v19) = v18;
          }
        }
        else {
          if (v17 != 117) {
            goto LABEL_87;
          }
          a2[7] = v5 + 2;
          result = nn_ec_3f7370_alt1(v9, a2, v5);
          if (*(_DWORD*)(v9 + 48) != 0) {
            goto LABEL_9;
          }
          v21 = result;
          if ((unsigned int)result >> 10 == 54) {
            v23 = a2[6];
            v22 = a2[7];
            if (v22 == v23) {
              goto LABEL_88;
            }
            v24 = a2[5];
            if (*(_BYTE*)(v24 + v22) != 92) {
              goto LABEL_88;
            }
            a2[7] = v22 + 1;
            if (v22 + 1 == v23 || *(_BYTE*)(v24 + v22 + 1) != 117) {
              goto LABEL_88;
            }
            a2[7] = v22 + 2;
            result = nn_ec_3f7370_alt1(v9, a2, v5);
            if (*(_DWORD*)(v9 + 48) != 0) {
              goto LABEL_9;
            }
            if ((unsigned int)(result - 57344) <= 0xFFFFFBFF) {
            LABEL_88:
              v11 = 9;
              goto LABEL_8;
            }
            v21 = result + (v21 << 10) - 56613888;
          }
          result = nn_ec_3f7540_alt1(a2, v21);
          v14 = SdkData_e88020;
        }
      }
      else {
        if (v16 == 34) {
          a2[7] = v5 + 1;
          v44 = a2[3];
          if (v44 < a2[2]) {
            v45 = a2[1];
            a2[3] = v44 + 1;
            *(_BYTE*)(v45 + v44) = 0;
          }
          goto LABEL_9;
        }
        if (v16 <= 0x1F) {
          goto LABEL_86;
        }
        result = nn_ec_3f7640_alt1(a2, a2);
        if ((result & 1) == 0) {
          v11 = 12;
          goto LABEL_8;
        }
      }
      v4 = a2[6];
      v5 = a2[7];
    } while (v5 != v4);
  }
LABEL_7:
  v11 = 11;
LABEL_8:
  while (1) {
    *(_DWORD*)(v9 + 48) = v11;
    *(_QWORD*)(v9 + 56) = v5;
  LABEL_9:
    if (*(_DWORD*)(v9 + 48) != 0) {
      return result;
    }
    v5 = a2[3];
    if ((unsigned __int64)(v5 - 1) < a2[2]) {
      v12 = a2[1] + v5;
      if (*(_BYTE*)(v12 - 1) != 0) {
        *(_BYTE*)(v12 - 1) = 0;
        v5 = a2[3];
      }
      if ((a4 & 1) != 0) {
        result = nn_ec_3f7b90_alt1(a3 + 16, SdkData_e88018, v10);
        if ((result & 1) == 0) {
          v13 = a2[7];
          *(_DWORD*)(v9 + 48) = 16;
          *(_QWORD*)(v9 + 56) = v13;
        }
      }
      else {
        v25 = *(int*)(a3 + 108);
        v26 = a3 + 16;
        if ((int)v25 <= 8 && (*(_DWORD*)(a3 + 116) & 0x80000000) != 0) {
          result = v26 + 8 * v25;
          if (*(_BYTE*)result != 2 ||
              (v27 = *(unsigned __int16*)(a3 + 2 * v25 + 88),
               ++*(_DWORD*)(result + 4),
               result = nn_http_json_Node_Print_plt(result, a3 + v27 + 120,
                                                    129 - v27, 0),
               *(_WORD*)(a3 + 250) = result + v27,
               (unsigned __int16)(result + v27) <= 0x80u)) {
            v28 = *(_DWORD**)a3;
            if (*(_DWORD*)(*(_QWORD*)a3 + 8LL) == 0) {
              result = (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD))(
                  *(_QWORD*)v28 + 40LL))(*(_QWORD*)a3, a3 + 16, v10,
                                         (unsigned int)(v5 - 1));
              v28[2] = result;
            }
          }
        }
        v30 = *(_DWORD*)(a3 + 112);
        v29 = *(_DWORD*)(a3 + 116);
        v31 = *(int*)(a3 + 108);
        v32 = v31 == v29;
        if (v30 != v29) {
          v32 = false;
        }
        if ((int)v31 < v29 || v32) {
          v29 = -1;
          *(_DWORD*)(a3 + 116) = -1;
        }
        if ((int)v31 <= 8 && v29 < 0 && *(_BYTE*)(v26 + 8 * v31) == 3) {
          v33 = *(unsigned __int16*)(a3 + 88 + 2 * v31);
          *(_WORD*)(a3 + 250) = v33;
          *(_BYTE*)(a3 + 120 + v33) = 0;
          v34 = v31 - 1;
          *(_DWORD*)(a3 + 108) = v31 - 1;
          if (v30 >= (int)v31) {
            *(_DWORD*)(a3 + 112) = v34;
            v30 = v31 - 1;
          }
          v36 = v29 == (_DWORD)v34 && v30 == v29;
          if ((int)v31 <= v29 || v36) {
            v29 = -1;
            *(_DWORD*)(a3 + 116) = -1;
          }
          if (*(_BYTE*)(v26 + 8 * v34) == 3) {
            v37 = (unsigned __int8*)(a3 + 8 * v31);
            v38 = v31 - 2;
            v39 = (unsigned __int16*)(a3 + 2 * v31 + 86);
            do {
              v41 = *v39--;
              *(_DWORD*)(a3 + 108) = v38;
              *(_WORD*)(a3 + 250) = v41;
              *(_BYTE*)(a3 + 120 + v41) = 0;
              if (v34 <= v30) {
                *(_DWORD*)(a3 + 112) = v38;
                v30 = v38;
              }
              v43 = v38 == v29 && v30 == v29;
              if (v34 <= v29 || v43) {
                v29 = -1;
                *(_DWORD*)(a3 + 116) = -1;
              }
              v40 = *v37;
              v37 -= 8;
              --v38;
              --v34;
            } while (v40 == 3);
          }
        }
      }
      return result;
    }
  LABEL_85:
    result = nn_diag_detail_AbortImpl_plt_856170(result);
  LABEL_86:
    if (v16 == 0) {
      goto LABEL_7;
    }
  LABEL_87:
    v11 = 10;
  }
}

__int64 nn_ec_3f71a0(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  char v5;
  __int64 v6;
  _DWORD* v7;
  int v8;
  int v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v13;
  __int64 v14;
  _BOOL4 v16;
  unsigned __int8* v17;
  int v18;
  unsigned __int16* v19;
  int v20;
  unsigned int v21;
  _BOOL4 v23;

  v2 = *(int*)(result + 108);
  v3 = result + 16;
  v4 = (_QWORD*)result;
  if ((int)v2 <= 8 && (*(_DWORD*)(result + 116) & 0x80000000) != 0) {
    result = v3 + 8 * v2;
    if (*(_BYTE*)result != 2 ||
        (v5 = a2, v6 = *((unsigned __int16*)v4 + v2 + 44),
         ++*(_DWORD*)(result + 4),
         result = nn_http_json_Node_Print_plt(result, (char*)v4 + v6 + 120,
                                              129 - v6, 0),
         a2 = v5, *((_WORD*)v4 + 125) = result + v6,
         (unsigned __int16)(result + v6) <= 0x80u)) {
      v7 = (_DWORD*)*v4;
      if (*(_DWORD*)(*v4 + 8LL) == 0) {
        result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)v7 + 8LL))(
            *v4, v3, a2 & 1);
        v7[2] = result;
      }
    }
  }
  v9 = *((_DWORD*)v4 + 28);
  v8 = *((_DWORD*)v4 + 29);
  v10 = *((int*)v4 + 27);
  v11 = v10 == v8;
  if (v9 != v8) {
    v11 = false;
  }
  if ((int)v10 < v8 || v11) {
    v8 = -1;
    *((_DWORD*)v4 + 29) = -1;
  }
  if ((int)v10 <= 8 && v8 < 0 && *(_BYTE*)(v3 + 8 * v10) == 3) {
    v13 = *((unsigned __int16*)v4 + v10 + 44);
    *((_WORD*)v4 + 125) = v13;
    *((_BYTE*)v4 + v13 + 120) = 0;
    v14 = v10 - 1;
    *((_DWORD*)v4 + 27) = v10 - 1;
    if (v9 >= (int)v10) {
      *((_DWORD*)v4 + 28) = v14;
      v9 = v10 - 1;
    }
    v16 = v8 == (_DWORD)v14 && v9 == v8;
    if ((int)v10 <= v8 || v16) {
      v8 = -1;
      *((_DWORD*)v4 + 29) = -1;
    }
    if (*(_BYTE*)(v3 + 8 * v14) == 3) {
      v17 = (unsigned __int8*)&v4[v10];
      v18 = v10 - 2;
      v19 = (unsigned __int16*)v4 + v10 + 43;
      do {
        v21 = *v19--;
        *((_DWORD*)v4 + 27) = v18;
        *((_WORD*)v4 + 125) = v21;
        *((_BYTE*)v4 + v21 + 120) = 0;
        if (v14 <= v9) {
          *((_DWORD*)v4 + 28) = v18;
          v9 = v18;
        }
        v23 = v18 == v8 && v9 == v8;
        if (v14 <= v8 || v23) {
          v8 = -1;
          *((_DWORD*)v4 + 29) = -1;
        }
        v20 = *v17;
        v17 -= 8;
        --v18;
        --v14;
      } while (v20 == 3);
    }
  }
  return result;
}

__int64 nn_ec_3f7370(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;

  v4 = a2[6];
  v3 = a2[7];
  if (v3 == v4) {
    goto LABEL_33;
  }
  v5 = a2[5];
  v6 = *(unsigned __int8*)(v5 + v3);
  if ((unsigned int)(v6 - 48) >= 0xA) {
    if ((unsigned int)(v6 - 65) >= 6) {
      if ((unsigned int)(v6 - 97) >= 6) {
        goto LABEL_33;
      }
      v7 = -87;
      v8 = v3 + 1;
      a2[7] = v3 + 1;
      if (v3 + 1 == v4) {
        goto LABEL_33;
      }
    }
    else {
      v7 = -55;
      v8 = v3 + 1;
      a2[7] = v3 + 1;
      if (v3 + 1 == v4) {
        goto LABEL_33;
      }
    }
  }
  else {
    v7 = -48;
    v8 = v3 + 1;
    a2[7] = v3 + 1;
    if (v3 + 1 == v4) {
      goto LABEL_33;
    }
  }
  v9 = *(unsigned __int8*)(v5 + v8);
  if ((unsigned int)(v9 - 48) >= 0xA) {
    if ((unsigned int)(v9 - 65) >= 6) {
      if ((unsigned int)(v9 - 97) > 5) {
        goto LABEL_33;
      }
      v10 = -87;
      v11 = v3 + 2;
      a2[7] = v3 + 2;
      if (v3 + 2 == v4) {
        goto LABEL_33;
      }
    }
    else {
      v10 = -55;
      v11 = v3 + 2;
      a2[7] = v3 + 2;
      if (v3 + 2 == v4) {
        goto LABEL_33;
      }
    }
  }
  else {
    v10 = -48;
    v11 = v3 + 2;
    a2[7] = v3 + 2;
    if (v3 + 2 == v4) {
      goto LABEL_33;
    }
  }
  v12 = *(unsigned __int8*)(v5 + v11);
  if ((unsigned int)(v12 - 48) >= 0xA) {
    if ((unsigned int)(v12 - 65) >= 6) {
      if ((unsigned int)(v12 - 97) > 5) {
        goto LABEL_33;
      }
      v13 = -87;
      v14 = v3 + 3;
      a2[7] = v3 + 3;
      if (v3 + 3 == v4) {
        goto LABEL_33;
      }
    }
    else {
      v13 = -55;
      v14 = v3 + 3;
      a2[7] = v3 + 3;
      if (v3 + 3 == v4) {
        goto LABEL_33;
      }
    }
  }
  else {
    v13 = -48;
    v14 = v3 + 3;
    a2[7] = v3 + 3;
    if (v3 + 3 == v4) {
      goto LABEL_33;
    }
  }
  v15 = *(unsigned __int8*)(v5 + v14);
  if ((unsigned int)(v15 - 48) < 0xA) {
    v16 = -48;
  LABEL_32:
    a2[7] = v3 + 4;
    return (unsigned int)(v15 +
                          16 * (v12 + 16 * (v9 + 16 * (v7 + v6) + v10) + v13) +
                          v16);
  }
  if ((unsigned int)(v15 - 65) < 6) {
    v16 = -55;
    goto LABEL_32;
  }
  if ((unsigned int)(v15 - 97) <= 5) {
    v16 = -87;
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD*)(a1 + 56) = a3;
  *(_DWORD*)(a1 + 48) = 8;
  return 0;
}

_QWORD* nn_ec_3f7540(_QWORD* result, unsigned int a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a2 <= 0x7F) {
    v2 = result[3];
    if (v2 < result[2]) {
      v3 = result[1];
      result[3] = v2 + 1;
      *(_BYTE*)(v3 + v2) = a2;
    }
    return result;
  }
  if (a2 <= 0x7FF) {
    v5 = result[2];
    v4 = result[3];
    if (v4 >= v5) {
      goto LABEL_18;
    }
    v6 = (a2 >> 6) | 0xC0;
    goto LABEL_17;
  }
  v5 = result[2];
  v4 = result[3];
  if (HIWORD(a2) != 0) {
    if (v4 < v5) {
      v8 = result[1];
      result[3] = v4 + 1;
      *(_BYTE*)(v8 + v4) = (a2 >> 18) | 0xF0;
      v5 = result[2];
      v4 = result[3];
    }
    if (v4 >= v5) {
      goto LABEL_15;
    }
    v7 = (a2 >> 12) & 0x3F | 0x80;
    goto LABEL_14;
  }
  if (v4 < v5) {
    v7 = (a2 >> 12) | 0xE0;
  LABEL_14:
    v9 = result[1];
    result[3] = v4 + 1;
    *(_BYTE*)(v9 + v4) = v7;
    v5 = result[2];
    v4 = result[3];
  }
LABEL_15:
  if (v4 < v5) {
    v6 = (a2 >> 6) & 0x3F | 0x80;
  LABEL_17:
    v10 = result[1];
    result[3] = v4 + 1;
    *(_BYTE*)(v10 + v4) = v6;
    v5 = result[2];
    v4 = result[3];
  }
LABEL_18:
  if (v4 < v5) {
    v11 = result[1];
    result[3] = v4 + 1;
    *(_BYTE*)(v11 + v4) = a2 & 0x3F | 0x80;
  }
  return result;
}

__int64 nn_ec_3f7640(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char v31;
  unsigned __int64 v32;
  __int64 v33;
  char v34;
  unsigned __int64 v35;
  __int64 v36;
  _BOOL4 v38;
  char v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v43;
  __int64 v44;
  char v45;
  unsigned __int64 v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v52;
  unsigned int v53;
  __int64 v54;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  char v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v64;
  __int64 v65;
  char v66;
  unsigned __int64 v67;
  __int64 v68;

  v2 = a1[7];
  if (v2 == a1[6]) {
    v3 = 0;
  }
  else {
    v3 = *(unsigned __int8*)(a1[5] + v2);
    if (*(_BYTE*)(a1[5] + v2) != 0) {
      a1[7] = v2 + 1;
    }
  }
  v4 = a2[3];
  if (v4 < a2[2]) {
    v5 = a2[1];
    a2[3] = v4 + 1;
    *(_BYTE*)(v5 + v4) = v3;
  }
  if ((v3 & 0x80) == 0) {
    return 1;
  }
  v7 = 0;
  v8 = *(unsigned __int8*)(SdkData_e88028 + v3);
  if (v8 <= 4) {
    switch (v8) {
    case 2:
      v17 = a1[7];
      if (v17 == a1[6]) {
        v18 = 0;
      }
      else {
        v18 = *(_BYTE*)(a1[5] + v17);
        if (v18 != 0) {
          a1[7] = v17 + 1;
        }
      }
      v27 = a2[3];
      if (v27 < a2[2]) {
        v28 = a2[1];
        a2[3] = v27 + 1;
        *(_BYTE*)(v28 + v27) = v18;
      }
      return v18 < -64;
    case 3:
      v25 = a1[6];
      v24 = a1[7];
      if (v24 == v25) {
        v26 = 0;
      }
      else {
        v26 = *(_BYTE*)(a1[5] + v24);
        if (v26 != 0) {
          a1[7] = ++v24;
        }
      }
      v64 = a2[3];
      if (v64 < a2[2]) {
        v65 = a2[1];
        a2[3] = v64 + 1;
        *(_BYTE*)(v65 + v64) = v26;
        v25 = a1[6];
        v24 = a1[7];
      }
      if (v24 == v25) {
        v66 = 0;
      }
      else {
        v66 = *(_BYTE*)(a1[5] + v24);
        if (v66 != 0) {
          a1[7] = v24 + 1;
        }
      }
      v67 = a2[3];
      if (v67 < a2[2]) {
        v68 = a2[1];
        a2[3] = v67 + 1;
        *(_BYTE*)(v68 + v67) = v66;
      }
      return v26 < -64 && v66 < -64;
    case 4:
      v13 = a1[6];
      v12 = a1[7];
      if (v12 == v13) {
        v14 = 0;
      }
      else {
        v14 = *(_BYTE*)(a1[5] + v12);
        if (v14 != 0) {
          a1[7] = ++v12;
        }
      }
      v58 = a2[3];
      if (v58 < a2[2]) {
        v59 = a2[1];
        a2[3] = v58 + 1;
        *(_BYTE*)(v59 + v58) = v14;
        v13 = a1[6];
        v12 = a1[7];
      }
      if (v12 == v13) {
        v60 = 0;
      }
      else {
        v60 = *(_BYTE*)(a1[5] + v12);
        if (v60 != 0) {
          a1[7] = v12 + 1;
        }
      }
      v61 = a2[3];
      if (v61 < a2[2]) {
        v62 = a2[1];
        a2[3] = v61 + 1;
        *(_BYTE*)(v62 + v61) = v60;
      }
      return v14 < -96 && v60 < -64;
    default:
      return v7;
    }
  }
  else {
    if (v8 <= 9) {
      if (v8 == 5) {
        v19 = a1[6];
        v9 = a1[7];
        if (v9 == v19) {
          v20 = 0;
        }
        else {
          v20 = *(_BYTE*)(a1[5] + v9);
          if (v20 != 0) {
            a1[7] = ++v9;
          }
        }
        v29 = a2[3];
        if (v29 < a2[2]) {
          v30 = a2[1];
          a2[3] = v29 + 1;
          *(_BYTE*)(v30 + v29) = v20;
          v19 = a1[6];
          v9 = a1[7];
        }
        if (v9 == v19) {
          v31 = 0;
          v9 = v19;
        }
        else {
          v31 = *(_BYTE*)(a1[5] + v9);
          if (v31 != 0) {
            a1[7] = ++v9;
          }
        }
        v35 = a2[3];
        if (v35 < a2[2]) {
          v36 = a2[1];
          a2[3] = v35 + 1;
          *(_BYTE*)(v36 + v35) = v31;
          v19 = a1[6];
          v9 = a1[7];
        }
        v38 = v20 < -112 && v31 < -64;
        if (v9 != v19) {
          goto LABEL_106;
        }
        goto LABEL_60;
      }
      if (v8 == 6) {
        v10 = a1[6];
        v9 = a1[7];
        if (v9 == v10) {
          v11 = 0;
        }
        else {
          v11 = *(_BYTE*)(a1[5] + v9);
          if (v11 != 0) {
            a1[7] = ++v9;
          }
        }
        v43 = a2[3];
        if (v43 < a2[2]) {
          v44 = a2[1];
          a2[3] = v43 + 1;
          *(_BYTE*)(v44 + v43) = v11;
          v10 = a1[6];
          v9 = a1[7];
        }
        if (v9 == v10) {
          v45 = 0;
          v9 = v10;
        }
        else {
          v45 = *(_BYTE*)(a1[5] + v9);
          if (v45 != 0) {
            a1[7] = ++v9;
          }
        }
        v49 = a2[3];
        if (v49 < a2[2]) {
          v50 = a2[1];
          a2[3] = v49 + 1;
          *(_BYTE*)(v50 + v49) = v45;
          v10 = a1[6];
          v9 = a1[7];
        }
        v38 = v11 < -64 && v45 < -64;
        if (v9 != v10) {
        LABEL_106:
          v39 = *(_BYTE*)(a1[5] + v9);
          if (v39 != 0) {
            a1[7] = v9 + 1;
          }
          goto LABEL_108;
        }
      LABEL_60:
        v39 = 0;
      LABEL_108:
        v56 = a2[3];
        if (v56 < a2[2]) {
          v57 = a2[1];
          a2[3] = v56 + 1;
          *(_BYTE*)(v57 + v56) = v39;
        }
        return v39 < -64 && v38;
      }
      return v7;
    }
    if (v8 != 10) {
      if (v8 == 11) {
        v15 = a1[6];
        v9 = a1[7];
        if (v9 == v15) {
          v16 = 0;
        }
        else {
          v16 = *(unsigned __int8*)(a1[5] + v9);
          if (*(_BYTE*)(a1[5] + v9) != 0) {
            a1[7] = ++v9;
          }
        }
        v46 = a2[3];
        if (v46 < a2[2]) {
          v47 = a2[1];
          a2[3] = v46 + 1;
          *(_BYTE*)(v47 + v46) = v16;
          v15 = a1[6];
          v9 = a1[7];
        }
        if (v9 == v15) {
          v48 = 0;
          v9 = v15;
        }
        else {
          v48 = *(_BYTE*)(a1[5] + v9);
          if (v48 != 0) {
            a1[7] = ++v9;
          }
        }
        v52 = a2[3];
        v53 = v16 - 144;
        if (v52 < a2[2]) {
          v54 = a2[1];
          a2[3] = v52 + 1;
          *(_BYTE*)(v54 + v52) = v48;
          v15 = a1[6];
          v9 = a1[7];
        }
        v38 = v53 < 0x30 && v48 < -64;
        if (v9 != v15) {
          goto LABEL_106;
        }
        goto LABEL_60;
      }
      return v7;
    }
    v22 = a1[6];
    v21 = a1[7];
    if (v21 == v22) {
      v23 = 0;
    }
    else {
      v23 = *(_BYTE*)(a1[5] + v21);
      if (v23 != 0) {
        a1[7] = ++v21;
      }
    }
    v32 = a2[3];
    if (v32 < a2[2]) {
      v33 = a2[1];
      a2[3] = v32 + 1;
      *(_BYTE*)(v33 + v32) = v23;
      v22 = a1[6];
      v21 = a1[7];
    }
    if (v21 == v22) {
      v34 = 0;
    }
    else {
      v34 = *(_BYTE*)(a1[5] + v21);
      if (v34 != 0) {
        a1[7] = v21 + 1;
      }
    }
    v40 = a2[3];
    if (v40 < a2[2]) {
      v41 = a2[1];
      a2[3] = v40 + 1;
      *(_BYTE*)(v41 + v40) = v34;
    }
    return (v23 & 0xE0) == 0xA0 && v34 < -64;
  }
}

__int64 nn_ec_3f7b90(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v8;
  __int16 v9;
  int v10;
  unsigned __int16 v11;
  __int64 v13;
  __int64 v14;

  v3 = *(int*)(a1 + 92);
  if ((int)v3 > 8 || (*(_DWORD*)(a1 + 100) & 0x80000000) == 0) {
    goto LABEL_14;
  }
  v6 = a1 + 8 * v3;
  if (*(_BYTE*)v6 == 2) {
    v8 = *(unsigned __int16*)(a1 + 2 * v3 + 72);
    ++*(_DWORD*)(v6 + 4);
    v9 = nn_http_json_Node_Print_plt(v6, a1 + v8 + 104, 129 - v8, 0);
    v10 = *(_DWORD*)(a1 + 92);
    v11 = v9 + v8;
    *(_WORD*)(a1 + 234) = v11;
    if (v11 > 0x80u || v10 >= 8) {
      goto LABEL_14;
    }
  }
  else {
    if ((int)v3 > 7) {
      goto LABEL_14;
    }
    v11 = *(_WORD*)(a1 + 234);
  }
  if ((__int16)nn_http_json_Node_Print_plt(a2, 0, 0, a3) + v11 < 129) {
    v13 = *(int*)(a1 + 92) + 1LL;
    *(_DWORD*)(a1 + 92) = v13;
    *(_DWORD*)(a1 + 96) = v13;
    *(_QWORD*)(a1 + 8 * v13) = *a2;
    v14 = *(unsigned __int16*)(a1 + 234);
    *(_WORD*)(a1 + 2LL * *(int*)(a1 + 92) + 72) = v14;
    *(_WORD*)(a1 + 234) =
        nn_http_json_Node_Print_plt(a2, a1 + v14 + 104, 129 - v14, a3) + v14;
    return 1;
  }
LABEL_14:
  if ((unsigned int)*(unsigned __int8*)a2 - 1 > 1) {
    if ((*(_DWORD*)(a1 + 100) & 0x80000000) != 0) {
      goto LABEL_18;
    }
    return 1;
  }
  ++*(_DWORD*)(a1 + 92);
  if ((*(_DWORD*)(a1 + 100) & 0x80000000) == 0) {
    return 1;
  }
LABEL_18:
  *(_DWORD*)(a1 + 100) = *(_DWORD*)(a1 + 92);
  return 1;
}

__int64 nn_ec_3f7d00(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _BOOL4 v10;
  __int64 v13;
  __int64 v14;
  _BOOL4 v16;
  unsigned __int8* v17;
  int v18;
  unsigned __int16* v19;
  int v20;
  unsigned int v21;
  _BOOL4 v23;

  v1 = *(_DWORD*)(result + 108);
  v2 = *(_DWORD*)(result + 116);
  v3 = result + 16;
  if (v1 <= 8 && v2 < 0 && *(_DWORD*)(*(_QWORD*)result + 8LL) == 0) {
    v5 = result;
    v4 = *(_DWORD**)result;
    v4[2] = (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)v4 + 56LL))(
        *(_QWORD*)result, v3);
    result = v5;
    v1 = *(_DWORD*)(v5 + 108);
    v2 = *(_DWORD*)(v5 + 116);
  }
  if (v1 <= 8 && v2 < 0) {
    v6 = *(unsigned __int16*)(result + 2LL * v1 + 88);
    *(_WORD*)(result + 250) = v6;
    *(_BYTE*)(result + v6 + 120) = 0;
  }
  v7 = *(_DWORD*)(result + 112);
  v8 = v1 - 1LL;
  *(_DWORD*)(result + 108) = v8;
  if (v7 < v1) {
    v10 = (_DWORD)v8 == v2 && v7 == v2;
    if (v1 <= v2 || v10) {
      goto LABEL_26;
    }
  LABEL_20:
    if (v1 > 9) {
      return result;
    }
    goto LABEL_27;
  }
  *(_DWORD*)(result + 112) = v8;
  v7 = v1 - 1;
  if (v1 > v2 && (_DWORD)v8 != v2) {
    goto LABEL_20;
  }
LABEL_26:
  v2 = -1;
  *(_DWORD*)(result + 116) = -1;
  if (v1 > 9) {
    return result;
  }
LABEL_27:
  if (v2 < 0 && *(_BYTE*)(v3 + 8 * v8) == 3) {
    v13 = *(unsigned __int16*)(result + 88 + 2 * v8);
    *(_WORD*)(result + 250) = v13;
    *(_BYTE*)(result + 120 + v13) = 0;
    v14 = v1 - 2LL;
    *(_DWORD*)(result + 108) = v1 - 2;
    if (v7 >= (int)v8) {
      *(_DWORD*)(result + 112) = v14;
      v7 = v1 - 2;
    }
    v16 = v2 == (_DWORD)v14 && v7 == v2;
    if ((int)v8 <= v2 || v16) {
      v2 = -1;
      *(_DWORD*)(result + 116) = -1;
    }
    if (*(_BYTE*)(v3 + 8 * v14) == 3) {
      v17 = (unsigned __int8*)(result + 8 * v8);
      v18 = v1 - 3;
      v19 = (unsigned __int16*)(result + 2 * v8 + 86);
      do {
        v21 = *v19--;
        *(_DWORD*)(result + 108) = v18;
        *(_WORD*)(result + 250) = v21;
        *(_BYTE*)(result + 120 + v21) = 0;
        if (v14 <= v7) {
          *(_DWORD*)(result + 112) = v18;
          v7 = v18;
        }
        v23 = v18 == v2 && v7 == v2;
        if (v14 <= v2 || v23) {
          v2 = -1;
          *(_DWORD*)(result + 116) = -1;
        }
        v20 = *v17;
        v17 -= 8;
        --v18;
        --v14;
      } while (v20 == 3);
    }
  }
  return result;
}

__int64 nn_ec_3f7f00(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BOOL4 v11;
  __int64 v14;
  __int64 v15;
  _BOOL4 v17;
  unsigned __int8* v18;
  int v19;
  unsigned __int16* v20;
  int v21;
  unsigned int v22;
  _BOOL4 v24;

  v1 = *(_DWORD*)(result + 108);
  v2 = *(_DWORD*)(result + 116);
  v3 = result + 16;
  if (v1 <= 8 && v2 < 0) {
    v4 = *(_DWORD**)result;
    v5 = *(unsigned __int16*)(result + 2LL * v1 + 88);
    *(_WORD*)(result + 250) = v5;
    *(_BYTE*)(result + v5 + 120) = 0;
    if (v4[2] == 0) {
      v6 = result;
      v4[2] = (*(__int64 (**)(_DWORD*, __int64))(*(_QWORD*)v4 + 72LL))(v4, v3);
      result = v6;
      v1 = *(_DWORD*)(v6 + 108);
      v2 = *(_DWORD*)(v6 + 116);
    }
  }
  if (v1 <= 8 && v2 < 0) {
    v7 = *(unsigned __int16*)(result + 2LL * v1 + 88);
    *(_WORD*)(result + 250) = v7;
    *(_BYTE*)(result + v7 + 120) = 0;
  }
  v8 = *(_DWORD*)(result + 112);
  v9 = v1 - 1LL;
  *(_DWORD*)(result + 108) = v9;
  if (v8 < v1) {
    v11 = (_DWORD)v9 == v2 && v8 == v2;
    if (v1 <= v2 || v11) {
      goto LABEL_26;
    }
  LABEL_20:
    if (v1 > 9) {
      return result;
    }
    goto LABEL_27;
  }
  *(_DWORD*)(result + 112) = v9;
  v8 = v1 - 1;
  if (v1 > v2 && (_DWORD)v9 != v2) {
    goto LABEL_20;
  }
LABEL_26:
  v2 = -1;
  *(_DWORD*)(result + 116) = -1;
  if (v1 > 9) {
    return result;
  }
LABEL_27:
  if (v2 < 0 && *(_BYTE*)(v3 + 8 * v9) == 3) {
    v14 = *(unsigned __int16*)(result + 88 + 2 * v9);
    *(_WORD*)(result + 250) = v14;
    *(_BYTE*)(result + 120 + v14) = 0;
    v15 = v1 - 2LL;
    *(_DWORD*)(result + 108) = v1 - 2;
    if (v8 >= (int)v9) {
      *(_DWORD*)(result + 112) = v15;
      v8 = v1 - 2;
    }
    v17 = v2 == (_DWORD)v15 && v8 == v2;
    if ((int)v9 <= v2 || v17) {
      v2 = -1;
      *(_DWORD*)(result + 116) = -1;
    }
    if (*(_BYTE*)(v3 + 8 * v15) == 3) {
      v18 = (unsigned __int8*)(result + 8 * v9);
      v19 = v1 - 3;
      v20 = (unsigned __int16*)(result + 2 * v9 + 86);
      do {
        v22 = *v20--;
        *(_DWORD*)(result + 108) = v19;
        *(_WORD*)(result + 250) = v22;
        *(_BYTE*)(result + 120 + v22) = 0;
        if (v15 <= v8) {
          *(_DWORD*)(result + 112) = v19;
          v8 = v19;
        }
        v24 = v19 == v2 && v8 == v2;
        if (v15 <= v2 || v24) {
          v2 = -1;
          *(_DWORD*)(result + 116) = -1;
        }
        v21 = *v18;
        v18 -= 8;
        --v19;
        --v15;
      } while (v21 == 3);
    }
  }
  return result;
}

__int64 nn_ec_3f8100(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  _DWORD* v7;
  int v8;
  int v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v13;
  __int64 v14;
  _BOOL4 v16;
  unsigned __int8* v17;
  int v18;
  unsigned __int16* v19;
  int v20;
  unsigned int v21;
  _BOOL4 v23;

  v2 = *(int*)(result + 108);
  v3 = result + 16;
  v4 = (_QWORD*)result;
  if ((int)v2 <= 8 && (*(_DWORD*)(result + 116) & 0x80000000) != 0) {
    result = v3 + 8 * v2;
    if (*(_BYTE*)result != 2 ||
        (v6 = *((unsigned __int16*)v4 + v2 + 44), ++*(_DWORD*)(result + 4),
         result = nn_http_json_Node_Print_plt(result, (char*)v4 + v6 + 120,
                                              129 - v6, 0),
         *((_WORD*)v4 + 125) = result + v6,
         (unsigned __int16)(result + v6) <= 0x80u)) {
      v7 = (_DWORD*)*v4;
      if (*(_DWORD*)(*v4 + 8LL) == 0) {
        result = (*(__int64 (**)(_QWORD, __int64, __int64))(*(_QWORD*)v7 +
                                                            16LL))(*v4, v3, a2);
        v7[2] = result;
      }
    }
  }
  v9 = *((_DWORD*)v4 + 28);
  v8 = *((_DWORD*)v4 + 29);
  v10 = *((int*)v4 + 27);
  v11 = v10 == v8;
  if (v9 != v8) {
    v11 = false;
  }
  if ((int)v10 < v8 || v11) {
    v8 = -1;
    *((_DWORD*)v4 + 29) = -1;
  }
  if ((int)v10 <= 8 && v8 < 0 && *(_BYTE*)(v3 + 8 * v10) == 3) {
    v13 = *((unsigned __int16*)v4 + v10 + 44);
    *((_WORD*)v4 + 125) = v13;
    *((_BYTE*)v4 + v13 + 120) = 0;
    v14 = v10 - 1;
    *((_DWORD*)v4 + 27) = v10 - 1;
    if (v9 >= (int)v10) {
      *((_DWORD*)v4 + 28) = v14;
      v9 = v10 - 1;
    }
    v16 = v8 == (_DWORD)v14 && v9 == v8;
    if ((int)v10 <= v8 || v16) {
      v8 = -1;
      *((_DWORD*)v4 + 29) = -1;
    }
    if (*(_BYTE*)(v3 + 8 * v14) == 3) {
      v17 = (unsigned __int8*)&v4[v10];
      v18 = v10 - 2;
      v19 = (unsigned __int16*)v4 + v10 + 43;
      do {
        v21 = *v19--;
        *((_DWORD*)v4 + 27) = v18;
        *((_WORD*)v4 + 125) = v21;
        *((_BYTE*)v4 + v21 + 120) = 0;
        if (v14 <= v9) {
          *((_DWORD*)v4 + 28) = v18;
          v9 = v18;
        }
        v23 = v18 == v8 && v9 == v8;
        if (v14 <= v8 || v23) {
          v8 = -1;
          *((_DWORD*)v4 + 29) = -1;
        }
        v20 = *v17;
        v17 -= 8;
        --v18;
        --v14;
      } while (v20 == 3);
    }
  }
  return result;
}

__int64 nn_ec_3f82d0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    v5 = *(_QWORD**)a1;
    v6 = v3;
    v7 = *(_QWORD*)(a1 + 32) - v3;
    v8 = v7 + ((unsigned __int64)(v7 + 1) >> 1);
  }
  else {
    v5 = *(_QWORD**)a1;
    if (*(_QWORD*)a1 == 0) {
      v5 = (_QWORD*)SdkRoutine_85e050(0x28u);
      v3 = 0;
      v5[2] = 0;
      v5[3] = 0;
      v5[4] = 0;
      *(_QWORD*)a1 = v5;
      *(_QWORD*)(a1 + 8) = v5;
      *v5 = 0;
      v5[1] = 0x10000;
    }
    v7 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 40);
    v6 = 0;
  }
  v9 = *(_QWORD*)(a1 + 24) - v6;
  if (v8 <= v9 + 16 * a2) {
    v10 = v9 + 16 * a2;
  }
  else {
    v10 = v8;
  }
  result = nn_ec_3f8380_alt1(v5, v3, v7, v10);
  *(_QWORD*)(a1 + 16) = result;
  *(_QWORD*)(a1 + 24) = result + v9;
  *(_QWORD*)(a1 + 32) = result + v10;
  return result;
}

__int64 nn_ec_3f8380(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;

  if (a2 == 0) {
    if (a4 != 0) {
      v12 = (_QWORD*)*a1;
      if (*a1 == 0 ||
          (v13 = v12[1],
           (unsigned __int64)(v14 = v13 + ((a4 + 7) & 0xFFFFFFFFFFFFFFF8LL)) >
               *v12)) {
        v15 = a1;
        if (a1[3] == 0) {
          a1 = (_QWORD*)SdkRoutine_85e050(1u);
          v15[3] = a1;
          v15[4] = a1;
        }
        a1 = (_QWORD*)nn_diag_detail_AbortImpl_plt_856170(a1);
        goto LABEL_20;
      }
      v12[1] = v14;
      return (__int64)v12 + v13 + 24;
    }
    return 0;
  }
  if (a4 == 0) {
    return 0;
  }
  v4 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v5 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if (v5 <= v4) {
    return a2;
  }
  v6 = (unsigned __int64*)*a1;
  v7 = *(_QWORD*)(*a1 + 8LL);
  v8 = *a1 + v7 + 24;
  if (a2 == v8 - v4) {
    v9 = v7 + v5 - v4;
    if (v9 <= *v6) {
      v6[1] = v9;
      return a2;
    }
  }
  v10 = v7 + v5;
  if (v10 > *v6) {
  LABEL_20:
    v16 = a1;
    if (a1[3] == 0) {
      a1 = (_QWORD*)SdkRoutine_85e050(1u);
      v16[3] = a1;
      v16[4] = a1;
    }
    nn_diag_detail_AbortImpl_plt_856170(a1);
    __udf(0);
  }
  v6[1] = v10;
  if (v4 != 0) {
    return memcpy_plt(v8, a2, v4);
  }
  else {
    return v8;
  }
}

__int64 nn_ec_3f84e0(__int64** a1, __int64 a2, unsigned int a3)
{
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;

  v3 = *a1;
  v4 = (*a1)[2];
  if (v4 < (*a1)[1]) {
    v5 = *v3;
    v3[2] = v4 + 1;
    *(_BYTE*)(v5 + v4) = 34;
  }
  if (a3 != 0) {
    v6 = 0;
    v7 = SdkData_e88030;
    v8 = SdkData_e88038;
    do {
      v9 = *(unsigned __int8*)(a2 + v6);
      v10 = *a1;
      v11 = *(unsigned __int8*)(v7 + v9);
      v13 = (*a1)[1];
      v12 = (*a1)[2];
      if (*(_BYTE*)(v7 + v9) == 0) {
        if (v12 < v13) {
          v14 = *v10;
          v10[2] = v12 + 1;
          *(_BYTE*)(v14 + v12) = v9;
        }
        goto LABEL_5;
      }
      if (v12 >= v13 ||
          (v15 = *v10, v10[2] = v12 + 1, *(_BYTE*)(v15 + v12) = 92, v16 = *a1,
           (v17 = (*a1)[2]) >= (unsigned __int64)(*a1)[1])) {
        if (v11 != 117) {
          goto LABEL_5;
        }
      }
      else {
        v18 = *v16;
        v16[2] = v17 + 1;
        *(_BYTE*)(v18 + v17) = v11;
        if (v11 != 117) {
          goto LABEL_5;
        }
      }
      v19 = *a1;
      v21 = (*a1)[1];
      v20 = (*a1)[2];
      if (v20 >= v21 ||
          (v22 = *v19, v19[2] = v20 + 1, *(_BYTE*)(v22 + v20) = 48, v19 = *a1,
           v21 = (*a1)[1], (v20 = (*a1)[2]) >= v21)) {
        if (v20 >= v21) {
          goto LABEL_16;
        }
      }
      else {
        v23 = *v19;
        v19[2] = v20 + 1;
        *(_BYTE*)(v23 + v20) = 48;
        v19 = *a1;
        v21 = (*a1)[1];
        v20 = (*a1)[2];
        if (v20 >= v21) {
        LABEL_16:
          if (v20 < v21) {
            goto LABEL_21;
          }
          goto LABEL_5;
        }
      }
      v24 = *v19;
      v25 = *(_BYTE*)(v8 + (v9 >> 4));
      v19[2] = v20 + 1;
      *(_BYTE*)(v24 + v20) = v25;
      v19 = *a1;
      v20 = (*a1)[2];
      if (v20 < (*a1)[1]) {
      LABEL_21:
        v26 = *v19;
        v27 = *(_BYTE*)(v8 + (v9 & 0xF));
        v19[2] = v20 + 1;
        *(_BYTE*)(v26 + v20) = v27;
      }
    LABEL_5:
      ++v6;
    } while (v6 < a3);
  }
  v28 = *a1;
  v29 = (*a1)[2];
  if (v29 < (*a1)[1]) {
    v30 = *v28;
    v28[2] = v29 + 1;
    *(_BYTE*)(v30 + v29) = 34;
  }
  return 1;
}

__int64 nn_ec_RequestContentsAuthorizationToken_3f8b40(__int64 a1, __int64 a2,
                                                       __int64 a3,
                                                       unsigned __int8* a4,
                                                       unsigned __int8* a5,
                                                       __int64 a6)
{
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int64 v23;
  __int64 v24;
  unsigned int v26;
  _QWORD v28[2];
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v33[2];
  __int64* v34;

  v12 = nn_nifm_GetClientId_plt();
  if ((nn_nifm_IsAnyInternetRequestAccepted_plt(v12) & 1) != 0) {
    v33[0] = 0;
    v33[1] = 0;
    v13 = nn_account_GetUserId_plt(v33, a2);
    if (v13 == 0) {
      v32 = 0;
      v14 = nn_account_LoadNetworkServiceAccountIdTokenCache_plt(&v32, a5, a6,
                                                                 a2);
      if ((_DWORD)v14 != 0) {
        v13 = 258212;
        v26 = ((unsigned int)v14 >> 9) & 0x1FFE;
        if ((v14 & 0x1FF) != 0x7C || v26 - 200 >= 0x46) {
          if (v26 - 430 < 0x46 && (v14 & 0x1FF) == 124) {
            return 258212;
          }
          else {
            return (unsigned int)v14;
          }
        }
      }
      else {
        if ((v32 & 0x80000000) != 0) {
          nn_diag_detail_AbortImpl_plt_856170(v14);
          __udf(0);
        }
        if ((_DWORD)v32 == 0) {
          goto LABEL_16;
        }
        v15 = v32 - 1;
        v16 = a4;
        do {
          v18 = *v16++;
          v17 = v18;
          v20 = *a5++;
          v19 = v20;
        } while (v17 != 0 && v17 == v19 && v15-- != 0);
        if (v17 != v19) {
          return 258212;
        }
        else {
        LABEL_16:
          v30 = 0;
          v31 = 0;
          nn_ec_3f8d30_alt1(&v29);
          v23 = v29;
          v28[0] = a4;
          v28[1] = strlen_plt(a4) + 1;
          v34 = &v30;
          v13 = (*(__int64 (**)(__int64, __int64*, __int64**, _QWORD, _QWORD*,
                                __int64, _QWORD*))(*(_QWORD*)v23 + 40LL))(
              v23, &v31, &v34, 0, v33, a3, v28);
          (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
          if (v13 == 0) {
            v24 = v30;
            v30 = 0;
            nn_ec_AsyncData_Initialize_plt(a1, v24, &v31);
            BYTE4(v31) = 0;
            LODWORD(v31) = 0;
          }
          if (v30 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
          }
          if (BYTE4(v31) == 1) {
            nn_os_CloseNativeHandle_plt((unsigned int)v31);
          }
        }
      }
    }
  }
  else {
    return 28836;
  }
  return v13;
}

__int64 nn_ec_3f8d30(_QWORD* a1)
{
  void (***v2)(_QWORD);
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD v16[2];
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[7];
  __int64 v21;
  __int64* v22;
  __int64 vars0;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2a770,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f2a770) != 0) {
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f2a770);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2a760);
  v2 = (void (***)(_QWORD))SdkData_f2a768;
  if (SdkData_f2a768 != 0) {
    *a1 = SdkData_f2a768;
    goto LABEL_6;
  }
  v3 = *(_QWORD*)nn_aoc_detail_GetObjectHolder_plt();
  v22 = &SdkData_f2a768;
  HIDWORD(v21) =
      (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v3 + 136LL))(v3, &v22);
  if (HIDWORD(v21) == 0) {
    v2 = (void (***)(_QWORD))SdkData_f2a768;
    *a1 = SdkData_f2a768;
    if (v2 == nullptr) {
      return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2a760);
    }
  LABEL_6:
    (**v2)(v2);
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2a760);
  }
  v5 = nn_diag_detail_AbortImpl_plt_858db0((char*)&v21 + 4);
  v20[1] = &vars0;
  v20[2] = v6;
  v20[5] = &SdkData_f2a760;
  v20[6] = a1;
  v8 = v7;
  v10 = v9;
  v11 = v5;
  v12 = nn_nifm_GetClientId_plt();
  if ((nn_nifm_IsAnyInternetRequestAccepted_plt(v12) & 1) != 0) {
    v19 = 0;
    v18 = 0;
    nn_ec_3f8d30(&v17);
    v13 = v17;
    v16[0] = v8;
    v16[1] = strlen_plt(v8) + 1;
    v20[0] = &v18;
    v14 =
        (*(__int64 (**)(__int64, __int64*, _QWORD*, _QWORD, __int64, _QWORD*))(
            *(_QWORD*)v13 + 32LL))(v13, &v19, v20, 0, v10, v16);
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    if (v14 == 0) {
      v15 = v18;
      v18 = 0;
      nn_ec_AsyncData_Initialize_plt(v11, v15, &v19);
      BYTE4(v19) = 0;
      LODWORD(v19) = 0;
    }
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    if (BYTE4(v19) == 1) {
      nn_os_CloseNativeHandle_plt((unsigned int)v19);
    }
  }
  else {
    return 28836;
  }
  return v14;
}

__int64 nn_ec_RequestContentsAuthorizationToken_3f8e20(__int64 a1, __int64 a2,
                                                       __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;

  v6 = nn_nifm_GetClientId_plt();
  if ((nn_nifm_IsAnyInternetRequestAccepted_plt(v6) & 1) != 0) {
    v14 = 0;
    v13 = 0;
    nn_ec_3f8d30(&v12);
    v7 = v12;
    v11[0] = a3;
    v11[1] = strlen_plt(a3) + 1;
    v15 = &v13;
    v8 = (*(__int64 (**)(__int64, __int64*, __int64**, _QWORD, __int64,
                         _QWORD*))(*(_QWORD*)v7 + 32LL))(v7, &v14, &v15, 0, a2,
                                                         v11);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    if (v8 == 0) {
      v9 = v13;
      v13 = 0;
      nn_ec_AsyncData_Initialize_plt(a1, v9, &v14);
      BYTE4(v14) = 0;
      LODWORD(v14) = 0;
    }
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    if (BYTE4(v14) == 1) {
      nn_os_CloseNativeHandle_plt((unsigned int)v14);
    }
  }
  else {
    return 28836;
  }
  return v8;
}

__int64 nn_ec_3f97c0()
{
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

__int64

nn_ec_InitializeShopServiceAccessorForMicroApplication(void* this_,
                                                       unsigned __int64 a2)
{
  unsigned __int64 v2;
  void* v3;
  unsigned int v4;
  __int64 result;
  __int64 v6;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a2;
  v3 = this_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2a7c0,
                            memory_order_acquire) &
       1) == 0) {
    v9 = __cxa_guard_acquire_plt(&SdkData_f2a7c0),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v3 = this_;
    v2 = a2;
    if (v9 != 0) {
      nn_ec_detail_ShopServiceAccessServer_Proxy_Proxy_plt(&SdkData_f2a7d0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      fw_rtld_RegisterCrtDestructor(),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release_plt(&SdkData_f2a7c0),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = this_;
      v2 = a2;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2a7c8,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v2;
    v11 = (__int64)v3;
    v12 = __cxa_guard_acquire_plt(&SdkData_f2a7c8),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v3 = (void*)v11;
    v2 = v10;
    if ((_DWORD)v12 != 0) {
      nn_ec_3fbd90(v12, v13, v11, v10),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      fw_rtld_RegisterCrtDestructor(),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      __cxa_guard_release_plt(&SdkData_f2a7c8),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = (void*)v11;
      v2 = v10;
    }
  }
  v4 = nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize_plt(
      &SdkData_f2a7d0, &SdkData_f2a850, v3, v2, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v4),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result == 0) {
    v6 = nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt(),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    nn_ec_detail_ShopServiceAccessServer_ProxyStore_Initialize_plt(
        v6, &SdkData_f2a7d0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return 0;
  }
  return result;
}

__int64 nn_ec_3fbd90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4;
  __int64 v5;

  SdkData_f2a850 = (__int64)SdkData_e63398;
  memset_plt((void*)&SdkData_f2a860, nullptr, 432, a4);
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2a868);
  if (SdkData_f2a86c != 0) {
    v4 = SdkData_f2a86c + 1;
  }
  else {
    v5 = nn_lmem_CreateUnitHeap_plt(&SdkData_f2a910, 256, 64, 4, 16,
                                    &SdkData_f2a870);
    SdkData_f2a860 = (__int64)&SdkData_f2a870;
    SdkData_f2a900 = SdkData_e87068 + 16;
    SdkData_f2a908 = v5;
    v4 = 1;
  }
  SdkData_f2a86c = v4;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2a868);
}

__int64 nn_ec_3fbe40(__int64 a1)
{
  int v2;

  *(_QWORD*)a1 = SdkData_e63398;
  nn_os_SdkMutexType_Lock_plt(a1 + 24);
  v2 = *(_DWORD*)(a1 + 28) - 1;
  *(_DWORD*)(a1 + 28) = v2;
  if (v2 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL));
    *(_QWORD*)(a1 + 16) = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 24);
}

__int64 nn_ec_3fbeb0(__int64 a1)
{
  int v2;

  *(_QWORD*)a1 = SdkData_e63398;
  nn_os_SdkMutexType_Lock_plt(a1 + 24);
  v2 = *(_DWORD*)(a1 + 28) - 1;
  *(_DWORD*)(a1 + 28) = v2;
  if (v2 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL));
    *(_QWORD*)(a1 + 16) = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 24);
  return SdkRoutine_857220(a1, 448);
}

__int64 nn_ec_3fbf20(__int64 a1, int a2)
{
  if (a2 != 1) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    __udf(0);
  }
  return *(_QWORD*)(a1 + 16) + 144LL;
}

__int64 nn_ec_3fbf50(__int64 a1, int a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (a2 == 1) {
    return 1;
  }
  if (a2 == 2) {
    return 0;
  }
  v3 = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
  v5 = v4;
  v6 = v3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2aa10,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v4;
    v11 = v3;
    v12 = __cxa_guard_acquire_plt(&SdkData_f2aa10);
    v6 = v11;
    v5 = v10;
    if (v12 != 0) {
      nn_ec_detail_ShopServiceAccessServer_Proxy_Proxy_plt(&SdkData_f2aa20);
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f2aa10);
      v6 = v11;
      v5 = v10;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2aa18,
                            memory_order_acquire) &
       1) == 0) {
    v13 = v5;
    v14 = v6;
    v15 = __cxa_guard_acquire_plt(&SdkData_f2aa18);
    v6 = v14;
    v5 = v13;
    if ((_DWORD)v15 != 0) {
      nn_ec_3fc230_alt1(v15, v16);
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt(&SdkData_f2aa18);
      v6 = v14;
      v5 = v13;
    }
  }
  v7 = nn_ec_detail_ShopServiceAccessServer_Proxy_Initialize_plt(
      &SdkData_f2aa20, &SdkData_f2aaa0, v6, v5, 0);
  result = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v7);
  if ((_DWORD)result == 0) {
    v9 = nn_ec_detail_ShopServiceAccessServer_ProxyStore_GetInstance_plt_alt1(
        result, v8);
    nn_ec_detail_ShopServiceAccessServer_ProxyStore_Initialize_plt(
        v9, &SdkData_f2aa20);
    return 0;
  }
  return result;
}

__int64 nn_ec_3fc230(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkData_f2aaa0 = (__int64)SdkData_e633f0;
  memset_plt((void*)&SdkData_f2afe0, nullptr, 432, a4),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt((void*)&SdkData_f2aab0, nullptr, 1328, v4),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2afe8),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (SdkData_f2afec != 0) {
    v5 = SdkData_f2afec + 1;
  }
  else {
    v6 = nn_lmem_CreateUnitHeap_plt(&SdkData_f2b090, 256, 64, 4, 16,
                                    &SdkData_f2aff0),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    SdkData_f2afe0 = (__int64)&SdkData_f2aff0;
    SdkData_f2b080 = SdkData_e87068 + 16;
    SdkData_f2b088 = v6;
    v5 = 1;
  }
  SdkData_f2afec = v5;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f2afe8),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_SdkMutexType_Lock_plt(&SdkData_f2aab8),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (SdkData_f2aabc != 0) {
    v7 = SdkData_f2aabc + 1;
  }
  else {
    v8 = nn_lmem_CreateUnitHeap_plt(&SdkData_f2ab60, 1152, 64, 4, 16,
                                    &SdkData_f2aac0),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    SdkData_f2aab0 = (__int64)&SdkData_f2aac0;
    SdkData_f2ab50 = SdkData_e87068 + 16;
    SdkData_f2ab58 = v8;
    v7 = 1;
  }
  SdkData_f2aabc = v7;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f2aab8);
}

__int64 nn_ec_3fc360(__int64 a1)
{
  int v2;
  int v3;

  *(_QWORD*)a1 = SdkData_e633f0;
  nn_os_SdkMutexType_Lock_plt(a1 + 24);
  v2 = *(_DWORD*)(a1 + 28) - 1;
  *(_DWORD*)(a1 + 28) = v2;
  if (v2 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL));
    *(_QWORD*)(a1 + 16) = 0;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 24);
  nn_os_SdkMutexType_Lock_plt(a1 + 1352);
  v3 = *(_DWORD*)(a1 + 1356) - 1;
  *(_DWORD*)(a1 + 1356) = v3;
  if (v3 == 0) {
    nn_lmem_DestroyUnitHeap_plt(*(_QWORD*)(*(_QWORD*)(a1 + 1344) + 152LL));
    *(_QWORD*)(a1 + 1344) = 0;
  }
  return nn_os_SdkMutexType_Unlock_plt(a1 + 1352);
}

__int64 nn_ec_3fc430(__int64 a1, int a2)
{
  __int64 v3;

  if (a2 == 1) {
    return *(_QWORD*)(a1 + 1344) + 144LL;
  }
  if (a2 == 2) {
    return *(_QWORD*)(a1 + 16) + 144LL;
  }
  v3 = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
  return nn_ec_3fc470_alt1(v3);
}

__int64 nn_ec_3fc470(__int64 a1, int a2)
{
  if ((unsigned int)(a2 - 1) > 1) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    __udf(0);
  }
  return 1;
}

__int64 nn_ec_FinalizeForShopServiceAccessors(void* this_)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 result;
  __int64 v5;
  int v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f2e1a8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&SdkData_f2e1a8) != 0) {
    SdkData_f2e1a0 = 0;
    fw_rtld_RegisterCrtDestructor();
    __cxa_guard_release_plt(&SdkData_f2e1a8);
  }
  v1 = SdkData_f2e1a0;
  if (SdkData_f2e1a0 != 0) {
    nn_os_LockMutex_plt(SdkData_f2e1a0);
    if (*(_BYTE*)(v1 + 120) == 1) {
      do {
        if (*(_QWORD*)(v1 + 112) == v1 + 104) {
          v5 = *(_QWORD*)(v1 + 32);
          *(_QWORD*)(v1 + 32) = 0;
          if (v5 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
          }
          nn_os_DestroyTransferMemory_plt(v1 + 40);
          *(_BYTE*)(v1 + 120) = 0;
          goto LABEL_11;
        }
        v2 = nn_ec_ShopServiceAccessor_Finalize_plt();
      } while (v2 == 0);
      v3 = v2;
      nn_os_UnlockMutex_plt(v1);
      result = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(v3);
      v6 = result;
      if ((_DWORD)result != 0) {
      LABEL_14:
        nn_diag_detail_AbortImpl_plt_858db0(&v6);
      }
    }
    else {
    LABEL_11:
      nn_os_UnlockMutex_plt(v1);
      SdkData_f2e1a0 = 0;
      result = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(0);
      v6 = result;
      if ((_DWORD)result != 0) {
        goto LABEL_14;
      }
    }
  }
  else {
    result = nn_ec_detail_ShopServiceAccessServer_ToResult_plt(0);
    v6 = result;
    if ((_DWORD)result != 0) {
      goto LABEL_14;
    }
  }
  return result;
}

bool nn_ec_detail_VerifySignature(void* this_, const char* a2, const char* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[8];
  _BYTE v9[4];

  memset(v8, 0, sizeof(v8));
  v7 = 0;
  if ((unsigned int)nn_util_Base64_FromBase64String_plt_858500(&v7, v8, 64, a2,
                                                               1) != 0) {
    return false;
  }
  v5 = v7;
  v6 = strlen_plt(this_);
  v9[0] = 0;
  return SdkRoutine_400d50((__int64)v9, (__int64)v8, v5,
                           (__int64)&SdkData_c3b7b0, 64, (__int64)this_, v6);
}

__int64 nn_ec_400f80(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v4;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  __int64 v25;

  v4 = *a3;
  LOBYTE(v23) = 0;
  LODWORD(v25) = nn_applet_StartLibraryApplet_plt(v4, &v23);
  if ((_DWORD)v25 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v25);
  LABEL_10:
    LODWORD(v25) = 2704;
    nn_diag_detail_AbortImpl_plt_858db0(&v25);
    goto LABEL_11;
  }
  nn_applet_JoinLibraryApplet_plt(*a3);
  v7 = nn_applet_GetLibraryAppletExitReason_plt(*a3);
  switch (v7) {
  case 1:
    v10 = 1680;
    goto LABEL_8;
  case 10:
    goto LABEL_10;
  case 2:
  LABEL_11:
    LODWORD(v25) = 656;
    v9 = nn_diag_detail_AbortImpl_plt_858db0(&v25);
    goto LABEL_12;
  default:
    break;
  }
  v8 = *a3;
  v25 = 0;
  v9 = nn_la_PopFromOutChannel_plt(v8, a1, a2, &v25);
  if (a2 == v25) {
    v10 = 0;
  LABEL_8:
    nn_applet_CloseLibraryApplet_plt(*a3);
    return v10;
  }
LABEL_12:
  v12 = nn_diag_detail_AbortImpl_plt_856170(v9);
  v19 = &v24;
  v20 = v13;
  v21 = a2;
  v22 = a3;
  v14 = v12;
  v16 = v15;
  v17 = nn_applet_GetStorageSize_plt(*v15);
  if (v17 != 4112) {
    nn_diag_detail_AbortImpl_plt_856170(v17);
  LABEL_16:
    nn_diag_detail_AbortImpl_plt_858db0(&v18);
    __udf(0);
  }
  result = nn_applet_ReadFromStorage_plt(*v16, 0, v14, 4112);
  v18 = result;
  if ((_DWORD)result != 0) {
    goto LABEL_16;
  }
  return result;
}

unsigned __int64 nn_ec_401fe0(__int64 a1, __int64 a2, unsigned __int8* a3,
                              unsigned __int64 a4)
{
  unsigned __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  bool v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  bool v20;

  result = strlen_plt(a2);
  if (result != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    v10 = v9 >= result ? result : *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      v11 = 0;
      while (1) {
        v12 = *(unsigned __int8*)(a2 + v11);
        if ((unsigned int)(v12 - 48) >= 0xA &&
            (v12 & 0xFFFFFFDF) - 65 >= 0x1A) {
          v14 =
              (unsigned int)(v12 - 37) > 0x3A ||
              ((1LL << ((unsigned __int8)v12 - 37)) & 0x400000000000381LL) == 0;
          if (v14 && v12 != 126) {
            break;
          }
        }
        ++v11;
        **(_BYTE**)a1 = v12;
        v9 = *(_QWORD*)(a1 + 8) - 1LL;
        ++*(_QWORD*)a1;
        *(_QWORD*)(a1 + 8) = v9;
        if (v10 == v11) {
          v11 = 1;
          break;
        }
      }
      if (v11 != 0 && v9 != 0) {
        v15 = (_BYTE*)(*(_QWORD*)a1)++;
        *v15 = 61;
        v16 = *(_QWORD*)(a1 + 8) - 1LL;
        *(_QWORD*)(a1 + 8) = v16;
        if (v16 != 0) {
          if (v16 >= a4) {
            v16 = a4;
          }
          if (a4 != 0) {
            do {
              v18 = *a3;
              if ((unsigned int)(v18 - 48) >= 0xA &&
                  (v18 & 0xFFFFFFDF) - 65 >= 0x1A) {
                v20 = (unsigned int)(v18 - 37) > 0x3A ||
                      ((1LL << ((unsigned __int8)v18 - 37)) &
                       0x400000000000381LL) == 0;
                if (v20 && v18 != 126) {
                  break;
                }
              }
              ++a3;
              --v16;
              **(_BYTE**)a1 = v18;
              v17 = *(_QWORD*)(a1 + 8) - 1LL;
              ++*(_QWORD*)a1;
              *(_QWORD*)(a1 + 8) = v17;
            } while (v16 != 0);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
