#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_chat_detail_CreateUserServiceByHipc_plt(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_6b1480(__int64*, _QWORD**);
__int64 SdkRoutine_6b2b10();
__int64 nn_chat_detail_DestroyUserServiceByHipc_plt(__int64);
__int64
nn_chat_detail_InitializeUserLayoutCustomizationShimScopedObject_plt(__int64);
__int64 nn_chat_detail_ShowAppletForFullScreen_plt(__int64);
__int64 nn_chat_gsv_OpenVirtualDisplay_plt(__int64, const char*);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(__int64, __int64, __int64,
                                                    unsigned int);
__int64 nn_os_ClearSystemEvent_plt(__int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_DestroySystemEvent_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(__int64);
__int64 nn_os_SdkRecursiveMutexType_Unlock_plt(void* this_);
__int64 nn_os_WaitSystemEvent_plt(__int64);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(unsigned int, __int64, __int64);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnClient_plt(__int64);
__int64 nn_sf_hipc_detail_SetBuffers(_QWORD*, int, __int64, __int64,
                                     unsigned __int64, __int64);
__int64 nn_sf_hipc_detail_b8c00(__int64, unsigned int*);
__int64 nv_InitCheck_plt(__int64);
extern _UNKNOWN* SdkData_1045c50;
extern _UNKNOWN SdkData_1045c48;
extern _UNKNOWN SdkData_1045c60;
extern __int64 SdkData_1045c40;
extern __int64 SdkData_1045c58;
extern __int64 SdkData_e88fe8;
extern __int64 SdkData_e89010;
extern __int64 SdkData_e89018;
extern int SdkData_1045c4c;
extern void (*SdkData_e88fe0[88])();
extern void (*SdkData_e88ff0[86])();
extern void (*SdkData_e88ff8[85])();
extern void (*SdkData_e89000[84])();
extern void (*SdkData_e89008[83])();
extern void (*SdkData_e89020[80])();
extern void (*SdkData_e89028[79])();
extern void (*SdkData_e89030[78])();
unsigned __int64 nn_sf_cmif_GetInlineContext_plt(__int64);
void nn_chat_gsv_Initialize_plt(__int64);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_chat_6b0d60(void* this_);
__int64 nn_chat_6b0f70();
__int64 nn_chat_6b1170(void* this_);
__attribute__((swiftcall)) void nn_chat_6b12b0(PSEUDO_X8 x8_);
__int64 nn_chat_6b1cf0(__int64 a1, __int64 a2, int a3);
__int64 nn_chat_6b2480(__int64 a1, _DWORD* a2, __int64* a3, _BYTE* a4,
                       __int64 a5);
__int64 nn_chat_6b3ce0(void* this_, char a2);

__int64 nn_chat_6b0d60(void* this_)
{
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  void(__attribute__((noreturn)) * v3)();
  __int64 v4;
  __int64 v5;
  void(__attribute__((noreturn)) * v6)();
  __int64 v7;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  __int64 v10;
  int v12;
  __int64 v13;
  void(__attribute__((noreturn)) * v14)();

  v1 = nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  v2 = SdkData_e89000[0];
  if (*(_DWORD*)SdkData_e89000[0] != 0) {
    ++*(_DWORD*)SdkData_e89000[0];
    v3 = SdkData_e89008[0];
    if ((*(_BYTE*)SdkData_e89008[0] & 1) != 0) {
      return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
    }
    goto LABEL_14;
  }
  v4 = nv_InitCheck_plt(v1);
  v13 = 0;
  nn_chat_detail_CreateUserServiceByHipc_plt((void*)(&v13), v4);
  v5 = v13;
  if (v13 != 0) {
    (**(void (***)(__int64))v13)(v13);
  }
  v6 = SdkData_e88fe0[0];
  {
    v7 = *(_QWORD*)SdkData_e88fe0[0];
    __asm__ volatile("" ::"r"(v7));
  }
  *(_QWORD*)SdkData_e88fe0[0] = v5;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    {
      v5 = *(_QWORD*)v6;
      __asm__ volatile("" ::"r"(v5));
    }
  }
  v8 = SdkData_e88ff8[0];
  v14 = SdkData_e88ff8[0];
  LODWORD(v14) = (*(__int64 (**)(__int64, void(__attribute__((noreturn))**)()))(
      *(_QWORD*)v5 + 32LL))(v5, &v14);
  if ((_DWORD)v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v14);
  }
  {
    v9 = *(_QWORD*)v8;
    __asm__ volatile("" ::"r"(v9));
  }
  v14 = nullptr;
  v12 = (*(__int64 (**)(__int64, void(__attribute__((noreturn))**)()))(
      *(_QWORD*)v9 + 32LL))(v9, &v14);
  if (v12 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v12);
  }
  if (*((_BYTE*)SdkData_e88ff0[0] + (unsigned __int64)((__int64*)0x28LL)) !=
      0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  nn_os_AttachReadableHandleToSystemEvent_plt((__int64)SdkData_e88ff0[0],
                                              (unsigned int)v14, BYTE4(v14), 0);
  v1 = v13;
  if (v13 != 0) {
    v1 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  ++*(_DWORD*)v2;
  v3 = SdkData_e89008[0];
  if ((*(_BYTE*)SdkData_e89008[0] & 1) == 0) {
  LABEL_14:
    nn_chat_gsv_Initialize_plt(v1);
    LODWORD(v14) = nn_chat_gsv_OpenVirtualDisplay_plt(SdkData_e89010, "chat2");
    if ((_DWORD)v14 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v14);
    }
    v10 = SdkData_e89018;
    LODWORD(v14) = nn_chat_gsv_OpenVirtualDisplay_plt(SdkData_e89018, "chat7");
    if ((_DWORD)v14 != 0 ||
        (LODWORD(v14) = nn_chat_gsv_OpenVirtualDisplay_plt(v10 + 512, "chat8"),
         (_DWORD)v14 != 0) ||
        (LODWORD(v14) = nn_chat_gsv_OpenVirtualDisplay_plt(v10 + 1024, "chat9"),
         (_DWORD)v14 != 0) ||
        (LODWORD(v14) =
             nn_chat_gsv_OpenVirtualDisplay_plt(v10 + 1536, "chat10"),
         (_DWORD)v14 != 0)) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v14);
    }
    *(_BYTE*)v3 = 1;
  }
  return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
}

__int64 nn_chat_6b0f70()
{
  int v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  if (*(_DWORD*)SdkData_e89000[0] == 0) {
    return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
  }
  {
    v0 = *(int*)SdkData_e89000[0] - 1;
    __asm__ volatile("" ::"r"(v0));
  }
  *(_DWORD*)SdkData_e89000[0] = v0;
  if (v0 != 0) {
    return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
  }
  if (*((_BYTE*)SdkData_e88ff0[0] + (unsigned __int64)((__int64*)0x28LL)) !=
      0) {
    nn_os_DestroySystemEvent_plt((__int64)SdkData_e88ff0[0]);
  }
  {
    v1 = *(_QWORD*)SdkData_e89020[0];
    __asm__ volatile("" ::"r"(v1));
  }
  *(_QWORD*)SdkData_e89020[0] = 0;
  if (v1 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  {
    v2 = *(_QWORD*)SdkData_e89028[0];
    __asm__ volatile("" ::"r"(v2));
  }
  *(_QWORD*)SdkData_e89028[0] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  {
    v3 = *(_QWORD*)SdkData_e88ff8[0];
    __asm__ volatile("" ::"r"(v3));
  }
  *(_QWORD*)SdkData_e88ff8[0] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  {
    v4 = *(_QWORD*)SdkData_e88fe0[0];
    __asm__ volatile("" ::"r"(v4));
  }
  *(_QWORD*)SdkData_e88fe0[0] = 0;
  if (v4 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  nn_chat_detail_DestroyUserServiceByHipc_plt(v4);
  return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
}

__int64 nn_chat_6b1170(void* this_)
{
  __int64 v1;
  int v3;
  void(__attribute__((noreturn)) * v4)();

  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  {
    v1 = *(_QWORD*)SdkData_e88fe0[0];
    __asm__ volatile("" ::"r"(v1));
  }
  if (*(_QWORD*)SdkData_e88fe0[0] == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (*(_QWORD*)SdkData_e89020[0] == 0) {
    v4 = SdkData_e89020[0];
    v3 = (*(__int64 (**)(__int64, void(__attribute__((noreturn))**)()))(
        *(_QWORD*)v1 + 56LL))(v1, &v4);
    if (v3 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v3);
    }
  }
  return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
}

__attribute__((swiftcall)) void nn_chat_6b12b0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  int v4;
  int v5;
  __int64 v6[3];
  _QWORD* v7;

  v6[2] = 0;
  v6[0] = (__int64)&SdkData_1045c60;
  v6[1] = (__int64)"chat:u";
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_1045c48);
  if (SdkData_1045c4c != 0) {
    if (SdkData_1045c50 == nullptr) {
      SdkData_1045c50 = SdkRoutine_6b2b10;
      SdkData_1045c58 = (__int64)&SdkData_1045c60;
    }
    ++SdkData_1045c4c;
    nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_1045c48);
    result = (__int64 (***)(_QWORD))SdkData_1045c40;
    *a1 = SdkData_1045c40;
    if (result != nullptr) {
      (__int64 (***)(_QWORD)) (**result)(result);
      return;
    }
  }
  else {
    v7 = nullptr;
    v4 = SdkRoutine_6b1480(v6, &v7);
    if (v4 != 0) {
      v5 = v4;
      if (v7 != nullptr) {
        (*(void (**)(_QWORD*))(*v7 + 8LL))(v7);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_1045c48);
      LODWORD(v6[0]) = v5;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)v6);
    }
    SdkData_1045c4c = 1;
    SdkData_1045c40 = (__int64)v7;
    SdkData_1045c50 = SdkRoutine_6b2b10;
    SdkData_1045c58 = (__int64)&SdkData_1045c60;
    nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_1045c48);
    result = (__int64 (***)(_QWORD))SdkData_1045c40;
    *a1 = SdkData_1045c40;
    if (result != nullptr) {
      (__int64 (***)(_QWORD)) (**result)(result);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nn_chat_6b1cf0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  unsigned int* v12;
  unsigned int v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    __int64 v20;
  } v19_;

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
  *(_QWORD*)v12 = 0x8000000D00000006LL;
  v12[2] = 2;
  {
    v13 = *(_DWORD*)a2;
    __asm__ volatile("" ::"r"(v13));
  }
  *(_DWORD*)a2 = 0;
  {
    v14 = *(unsigned __int8*)(a2 + 4);
    __asm__ volatile("" ::"r"(v14));
  }
  *(_BYTE*)(a2 + 4) = 0;
  v15 = ((unsigned __int64)v12 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  v12[3] = v13;
  *(_QWORD*)(v15 + 16) = 0x149434653LL;
  *(_QWORD*)(v15 + 24) = 30;
  *(_DWORD*)(v15 + 32) = a3;
  *(_QWORD*)(v15 + 8) = 0;
  *(_DWORD*)v15 = 1310721;
  *(_DWORD*)(v15 + 4) = v7;
  *(_DWORD*)(v15 + 12) = nn_sf_cmif_GetInlineContext_plt((__int64)v12);
  v16 = nn_sf_hipc_SendSyncRequest_plt(v11, (__int64)v12, 256);
  if (v16 != 0) {
    LODWORD(v17) = v16;
    if (v14 == 0) {
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v19_.v20 = 0;
  memset(v19_.v19, 0, sizeof(v19_.v19));
  nn_sf_hipc_detail_b8c00((__int64)v19_.v19, v12);
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
      if (v14 == 0) {
        goto LABEL_9;
      }
      goto LABEL_8;
    }
  }
  else {
    LODWORD(v17) = 108554;
  }
  if (v14 != 0) {
  LABEL_8:
    nn_os_CloseNativeHandle_plt(v13);
  }
LABEL_9:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 8LL))(v6, v11);
  return (unsigned int)v17;
}

__int64 nn_chat_6b2480(__int64 a1, _DWORD* a2, __int64* a3, _BYTE* a4,
                       __int64 a5)
{
  __int64 v5;
  unsigned __int16* v6;
  int v7;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    char gap56_[4];
    int v28;
  } v23_;
  _QWORD v29[2];
  struct {
    __int64* v30;
    unsigned int* v31;
  } v30_;

  v5 = a1 + 8;
  {
    v6 = *(unsigned __int16**)(v5 + 8);
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = *(_DWORD*)(v5 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v9 = 16 * a3[1];
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v10 = *a3;
    __asm__ volatile("" ::"r"(v10));
  }
  v12 = (**(__int64 (***)(unsigned __int16*))v6)(v6);
  {
    v13 = v6[4];
    __asm__ volatile("" ::"r"(v13));
  }
  LODWORD(v14) = v12;
  v15 = (unsigned int*)nn_sf_hipc_GetMessageBufferOnTls_plt(v12);
  LODWORD(v23_.v26) = 1245201;
  v23_.v24 = 3087;
  v23_.v25 = 0x200000000000000LL;
  v23_.v23 = 1;
  v30_.v30 = &v23_.v23;
  v30_.v31 = v15;
  *(_QWORD*)v15 = 0xC0F00000006LL;
  v29[0] = v10;
  v29[1] = v9;
  v23_.v28 = 10;
  v16 = nn_sf_hipc_detail_SetBuffers(&v30_.v30, 1, (__int64)v29,
                                     (__int64)&v23_.v28, v13, 56);
  if ((_DWORD)v16 != 0) {
    LODWORD(v20) = v16;
    v14 = (unsigned int)v14;
  }
  else {
    {
      v17 =
          ((unsigned __int64)&v30_.v31[*((unsigned __int8*)v30_.v30 + 23) + 3] +
           3) &
          0xFFFFFFFFFFFFFFF0LL;
      __asm__ volatile("" ::"r"(v17));
    }
    *(_QWORD*)(v17 + 24) = 5;
    *(_QWORD*)(v17 + 32) = a5;
    *(_DWORD*)v17 = 1572865;
    *(_DWORD*)(v17 + 4) = v7;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0x149434653LL;
    *(_DWORD*)(v17 + 12) = nn_sf_cmif_GetInlineContext_plt(v16);
    v14 = (unsigned int)v14;
    v18 = nn_sf_hipc_SendSyncRequest_plt(v14, (__int64)v15, 256);
    if (v18 != 0) {
      LODWORD(v20) = v18;
    }
    else {
      v23_.v26 = 0;
      v23_.v27 = 0;
      v23_.v24 = 0;
      v23_.v25 = 0;
      v23_.v23 = 0;
      nn_sf_hipc_detail_b8c00((__int64)&v23_.v23, v15);
      v19 = (v23_.v23 + 4LL * BYTE1(v23_.v27) + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if (*(_DWORD*)((char*)((__int64*)0xCLL) + v19 + 4) == 1329808979) {
        {
          v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) +
                            ((v23_.v23 + 4LL * BYTE1(v23_.v27) + 15) &
                             0xFFFFFFFFFFFFFFF0LL));
          __asm__ volatile("" ::"r"(v20));
        }
        if ((_DWORD)v20 != 0) {
          nn_sf_hipc_detail_HandleHipcErrorOnClient_plt((unsigned int)v20);
        }
        else {
          *(_DWORD*)a2 = *(int*)((char*)((int*)0x24LL) +
                                 ((v23_.v23 + 4LL * BYTE1(v23_.v27) + 15) &
                                  0xFFFFFFFFFFFFFFF0LL));
          *a4 = *(_BYTE*)(v19 + 32);
        }
      }
      else {
        LODWORD(v20) = 108554;
      }
    }
  }
  (*(void (**)(unsigned __int16*, __int64))(*(_QWORD*)v6 + 8LL))(v6, v14);
  return (unsigned int)v20;
}

__int64 nn_chat_6b3ce0(void* this_, char a2)
{
  char v2;
  __int64 v4;
  void(__attribute__((noreturn)) * v5)();
  __int64 v6;
  void* v8;
  void(__attribute__((noreturn)) * v9)();
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  __int64 v13;
  struct {
    _BYTE v14[4];
    _BYTE v15[4];
  } v14_;

  v2 = (char)this_;
  nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
  if (*(_QWORD*)SdkData_e88fe0[0] == 0) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v4 = nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
  nn_chat_detail_InitializeUserLayoutCustomizationShimScopedObject_plt(v4);
  if ((v2 & 1) != 0) {
    v14_.v15[0] = 0;
    nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
    v5 = SdkData_e89028[0];
    LODWORD(v11_.v11) =
        (*(__int64 (**)(_QWORD, _BYTE*))(**(_QWORD**)SdkData_e89028[0] + 80LL))(
            *(_QWORD*)SdkData_e89028[0], v14_.v15);
    if ((_DWORD)v11_.v11 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v11_.v11);
    }
    v6 = nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
    if ((a2 & 1) != 0 && (v14_.v15[0] & 1) != 0 &&
        (unsigned int)nn_chat_detail_ShowAppletForFullScreen_plt(v6) != 0) {
      nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
      LODWORD(v11_.v11) =
          (*(__int64 (**)(_QWORD))(**(_QWORD**)v5 + 48LL))(*(_QWORD*)v5);
      if ((_DWORD)v11_.v11 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0((__int64)&v11_.v11);
      }
    }
    else {
      nn_os_ClearSystemEvent_plt((__int64)SdkData_e89030[0]);
      v13 = 0;
      nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
      LODWORD(v11_.v11) = (*(__int64 (**)(_QWORD, __int64*))(
          **(_QWORD**)v5 + 56LL))(*(_QWORD*)v5, &v13);
      if ((_DWORD)v11_.v11 != 0) {
        nn_diag_detail_AbortImpl_plt_858db0((__int64)&v11_.v11);
      }
      v8 = (void*)SdkData_e88fe8;
      nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
      v9 = SdkData_e89030[0];
      while (1) {
        nn_os_WaitSystemEvent_plt((__int64)v9);
        nn_os_SdkRecursiveMutexType_Lock_plt((__int64)v8);
        {
          v10 = *(_QWORD*)v5;
          __asm__ volatile("" ::"r"(v10));
        }
        v11_.v11 = 0;
        v11_.v12 = 0;
        v14_.v14[0] = 0;
        if ((*(unsigned int (**)(__int64, __int64*, _BYTE*))(
                *(_QWORD*)v10 + 72LL))(v10, &v11_.v11, v14_.v14) == 0 &&
            v11_.v12 == v13) {
          break;
        }
        nn_os_SdkRecursiveMutexType_Unlock_plt(v8);
      }
    }
    return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
  }
  else {
    nn_os_SdkRecursiveMutexType_Lock_plt(SdkData_e88fe8);
    LODWORD(v11_.v11) = (*(__int64 (**)(_QWORD))(
        **(_QWORD**)SdkData_e89028[0] + 48LL))(*(_QWORD*)SdkData_e89028[0]);
    if ((_DWORD)v11_.v11 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v11_.v11);
    }
    return nn_os_SdkRecursiveMutexType_Unlock_plt((void*)SdkData_e88fe8);
  }
}

#pragma GCC visibility pop
