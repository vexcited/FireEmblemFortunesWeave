#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nn_applet_CloseLibraryApplet_plt(_QWORD);
__int64 nn_applet_CreateLibraryApplet_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(_QWORD,
                                                                     _QWORD);
__int64 nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(_QWORD);
__int64 nn_la_CommonArgumentsWriter_PushToInChannel_plt(_QWORD, _QWORD);
__int64 nn_la_PopFromOutChannel_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_la_PushToInChannel_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_la_StartLibraryApplet_plt(_QWORD, _QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(void* this_);
__int64 nn_vi2_CreateDisplay_plt(_QWORD, _QWORD);
__int64 nn_vi2_CreateEndpoint_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_vi2_CreateLayer_plt(_QWORD, _QWORD);
__int64 nn_vi2_GetLayerNativeWindowHandle_plt(_QWORD);
__int64 nn_vi2_SetLayerNextContent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_vi2_SetLayerNextPermission_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* SdkData_1045c50;
extern _UNKNOWN SdkData_1045c48;
extern _UNKNOWN SdkData_10465c4;
extern __int64 SdkData_1045c40;
extern __int64 SdkData_1045c58;
extern __int64 SdkData_e88fe8;
extern char nn_chat_detail_g_VirtualCameraState;
extern int SdkData_1045c4c;
extern void (*SdkData_e88fe0[88])();
extern void (*SdkData_e89028[79])();
extern void (*SdkData_e89030[78])();
extern void (*SdkData_e89060[72])();
unsigned int* nn_sm_detail_CloseSession(unsigned int* result);
__int64
nn_chat_detail_InitializeUserLayoutCustomizationShimScopedObject(void* this_);
__int64 nn_chat_detail_DestroyUserServiceByHipc(void* this_);
__int64 nn_chat_InitializeVirtualCamera(__int64 a1);
__int64 nn_chat_detail_ShowAppletForChatStart(__int64 a1);
__int64 nn_chat_detail_ShowAppletForCameraSharingGuide(void* this_);
__int64 nn_chat_detail_ShowAppletForCameraConfiguration(__int64 a1);
__int64 nn_chat_detail_ShowAppletForFullScreen(void* this_);
unsigned int* nn_chat_6b5990(unsigned int* result);
__int64

nn_chat_detail_InitializeUserLayoutCustomizationShimScopedObject(void* this_)
{
  __int64 v1;
  void(__attribute__((noreturn)) * v2)();
  __int64 v3;
  __int64 v4;
  int v6;
  void(__attribute__((noreturn)) * v7)();

  nn_os_SdkRecursiveMutexType_Lock_plt((void*)SdkData_e88fe8);
  v1 = *(_QWORD*)SdkData_e88fe0[0];
  if (*(_QWORD*)SdkData_e88fe0[0] == 0) {
    nn_diag_detail_AbortImpl_plt_856170(0);
  }
  v2 = SdkData_e89028[0];
  if (*(_QWORD*)SdkData_e89028[0] == 0) {
    v7 = SdkData_e89028[0];
    LODWORD(v7) =
        (*(__int64 (**)(__int64, void(__attribute__((noreturn))**)()))(
            *(_QWORD*)v1 + 40LL))(v1, &v7);
    if ((_DWORD)v7 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v7);
    }
    LODWORD(v7) = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)v2 + 32LL))(
        *(_QWORD*)v2, 0);
    if ((_DWORD)v7 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v7);
    }
    v3 = *(_QWORD*)v2;
    v7 = nullptr;
    v4 = (*(__int64 (**)(__int64, void(__attribute__((noreturn))**)()))(
        *(_QWORD*)v3 + 40LL))(v3, &v7);
    v6 = v4;
    if ((_DWORD)v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v6);
    }
    if (*((_BYTE*)SdkData_e89030[0] + (unsigned __int64)((__int64*)0x28LL)) !=
        0) {
      nn_diag_detail_AbortImpl_plt_856170(v4);
    }
    nn_os_AttachReadableHandleToSystemEvent_plt(SdkData_e89030[0],
                                                (unsigned int)v7, BYTE4(v7), 0);
  }
  return _runlock_0_0((void*)SdkData_e88fe8);
}

__int64 nn_chat_detail_DestroyUserServiceByHipc(void* this_)
{
  nn_os_SdkMutexType_Lock_plt(&SdkData_1045c48);
  if (--SdkData_1045c4c != 0) {
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_1045c48);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)SdkData_1045c40 + 8LL))(SdkData_1045c40);
    SdkData_1045c40 = 0;
    if (SdkData_1045c50 != nullptr) {
      ((void (*)(__int64))SdkData_1045c50)(SdkData_1045c58);
    }
    SdkData_1045c50 = nullptr;
    SdkData_1045c58 = 0;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_1045c48);
  }
}

__int64 nn_chat_InitializeVirtualCamera(__int64 a1)
{
  __int64 v2;
  int v5;

  v2 = nn_os_SdkMutexType_Lock_plt(&SdkData_10465c4);
  if (nn_chat_detail_g_VirtualCameraState == 1) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  memset_plt((void*)a1, nullptr, 1424);
  v5 = nn_vi2_CreateDisplay_plt(a1, "chvcam");
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  v5 = nn_vi2_CreateEndpoint_plt(a1 + 256, "default", a1);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  v5 = nn_vi2_CreateLayer_plt(a1 + 384, a1 + 256);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  nn_vi2_SetLayerNextPermission_plt(a1 + 384, 16, 1);
  nn_vi2_SetLayerNextContent_plt(a1 + 384, 1, 0);
  *(_QWORD*)(a1 + 1408) = nn_vi2_GetLayerNativeWindowHandle_plt(a1 + 384);
  *(_BYTE*)(a1 + 1416) = 1;
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)SdkData_e89060[0] + 48LL))(
      *(_QWORD*)SdkData_e89060[0]);
  if (v5 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
  }
  nn_chat_detail_g_VirtualCameraState = 1;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10465c4);
}

__int64 nn_chat_detail_ShowAppletForChatStart(__int64 a1)
{
  unsigned int v2;
  __int64 v4;
  __int64 v5;
  _QWORD v6[3];

  v4 = 0;
  v5 = 0x100000001LL;
  LODWORD(v6[0]) = nn_applet_CreateLibraryApplet_plt(&v4, 16777317, 0);
  if (LODWORD(v6[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v6);
    __udf(0);
  }
  memset(v6, 0, sizeof(v6));
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(
      v6, (unsigned int)WORD2(v5) | ((_DWORD)v5 << 16));
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(v6, v4);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v6);
  nn_la_PushToInChannel_plt(v4, a1, 16);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v4, 0) != 0 ||
      (LOBYTE(v6[0]) = 0, nn_la_PopFromOutChannel_plt(v4, v6, 1, 0), v2 = 0,
       (v6[0] & 1) == 0)) {
    v2 = 13026;
  }
  nn_applet_CloseLibraryApplet_plt(v4);
  return v2;
}

__int64 nn_chat_detail_ShowAppletForCameraSharingGuide(void* this_)
{
  unsigned int v1;
  struct {
    __int64 v3;
    __int64 v4;
  } v3_;
  _QWORD v5[3];

  v3_.v3 = 0;
  v3_.v4 = 0x100000001LL;
  LODWORD(v5[0]) = nn_applet_CreateLibraryApplet_plt(&v3_.v3, 16973925, 0);
  if (LODWORD(v5[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v5);
  }
  memset(v5, 0, sizeof(v5));
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(
      v5, (unsigned int)WORD2(v3_.v4) | ((_DWORD)v3_.v4 << 16));
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(v5, v3_.v3);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v5);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v3_.v3, 0) != 0) {
    v1 = 13026;
  }
  else {
    v1 = 0;
  }
  nn_applet_CloseLibraryApplet_plt(v3_.v3);
  return v1;
}

__int64 nn_chat_detail_ShowAppletForCameraConfiguration(__int64 a1)
{
  unsigned int v2;
  __int64 v4;
  __int64 v5;
  _QWORD v6[3];

  v4 = 0;
  v5 = 0x100000001LL;
  LODWORD(v6[0]) = nn_applet_CreateLibraryApplet_plt(&v4, 16842853, 0);
  if (LODWORD(v6[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v6);
    __udf(0);
  }
  memset(v6, 0, sizeof(v6));
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(
      v6, (unsigned int)WORD2(v5) | ((_DWORD)v5 << 16));
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(v6, v4);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v6);
  nn_la_PushToInChannel_plt(v4, a1, 12);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v4, 0) != 0 ||
      (LOWORD(v6[0]) = 0, nn_la_PopFromOutChannel_plt(v4, v6, 2, 0), v2 = 0,
       (v6[0] & 1) == 0)) {
    v2 = 13026;
  }
  nn_applet_CloseLibraryApplet_plt(v4);
  return v2;
}

__int64 nn_chat_detail_ShowAppletForFullScreen(void* this_)
{
  unsigned int v1;
  struct {
    __int64 v3;
    __int64 v4;
  } v3_;
  _QWORD v5[3];

  v3_.v3 = 0;
  v3_.v4 = 0x100000001LL;
  LODWORD(v5[0]) = nn_applet_CreateLibraryApplet_plt(&v3_.v3, 16908389, 0);
  if (LODWORD(v5[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v5);
  }
  memset(v5, 0, sizeof(v5));
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(
      v5, (unsigned int)WORD2(v3_.v4) | ((_DWORD)v3_.v4 << 16));
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(v5, v3_.v3);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(v5);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v3_.v3, 0) != 0 ||
      (LOBYTE(v5[0]) = 0, nn_la_PopFromOutChannel_plt(v3_.v3, v5, 1, 0), v1 = 0,
       (v5[0] & 1) == 0)) {
    v1 = 13026;
  }
  nn_applet_CloseLibraryApplet_plt(v3_.v3);
  return v1;
}

unsigned int* nn_chat_6b5990(unsigned int* result)
{
  unsigned int* v1;
  __int64 v2;
  __int64 (*v3)(__int64*);
  __int64 v4;

  v1 = result;
  if (*((_BYTE*)result + 540) == 1) {
    result = nn_sm_detail_CloseSession(result + 136);
  }
  v2 = *((_QWORD*)v1 + 66);
  if (v2 != 0) {
    *((_QWORD*)v1 + 66) = 0;
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 64),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      __builtin_arm_dmb(9u);
      v3 = *(__int64 (**)(__int64*))(v2 + 48);
      v4 = *(_QWORD*)(v2 + 56);
      return (unsigned int*)v3(&v4);
    }
  }
  return result;
}

#pragma GCC visibility pop
