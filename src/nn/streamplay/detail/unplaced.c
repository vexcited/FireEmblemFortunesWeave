#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
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
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_vi2_CreateDisplay_plt(_QWORD, _QWORD);
__int64 nn_vi2_CreateEndpoint_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_vi2_CreateLayer_plt(_QWORD, _QWORD);
__int64 nn_vi2_DestroyDisplay_plt(_QWORD);
__int64 nn_vi2_DestroyEndpoint_plt(_QWORD);
__int64 nn_vi2_DestroyLayer_plt(_QWORD);
__int64 nn_vi2_GetLayerNativeWindowHandle_plt(_QWORD);
__int64 nn_vi2_SetLayerNextHdrExtendedContentLuminanceRangeMetadata_plt(_QWORD,
                                                                        _QWORD,
                                                                        _QWORD);
__int64 nn_vi2_SetLayerNextHdrStandardContentLuminanceRangeMetadata_plt(_QWORD,
                                                                        _QWORD,
                                                                        _QWORD);
__int64 nn_vi2_sdk_SetLayerNextUserData_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_10556f8;
extern _UNKNOWN SdkData_10557f8;
extern _UNKNOWN SdkData_1055878;
extern _UNKNOWN SdkData_1055c90;
extern _UNKNOWN SdkData_1055d90;
extern _UNKNOWN SdkData_1055e10;
extern _UNKNOWN SdkData_1056228;
extern _UNKNOWN SdkData_1056328;
extern _UNKNOWN SdkData_10563a8;
extern _UNKNOWN SdkData_10567bc;
extern __int64 SdkData_1055c78;
extern __int64 SdkData_1056210;
extern __int64 SdkData_10567a8;
extern char SdkData_10556f0;
extern char SdkData_10556f0_alt1[] __asm__("SdkData_10556f0");
extern char SdkData_1055c80;
extern char SdkData_1055c88;
extern char SdkData_1056218;
extern char SdkData_1056220;
extern char SdkData_10567b0;
extern char SdkData_10567b8;
extern int SdkData_10567c0;
__int64 nn_streamplay_detail_InitializeGuestDeviceResourceManager(void* this_);
__int64 nn_streamplay_detail_FinalizeGuestDeviceResourceManager(void* this_);
__int64
nn_streamplay_detail_IsGuestDeviceResourceManagerInitialized(void* this_);
__int64 nn_streamplay_detail_GetNativeWindowHandle(unsigned __int8 a1);
__int64 nn_streamplay_detail_SetLayerUserData(unsigned __int8 a1, __int64 a2);
__int64
nn_streamplay_detail_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
    unsigned __int8 a1, unsigned int a2, unsigned int a3);
__int64
nn_streamplay_detail_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(
    unsigned __int8 a1, unsigned int a2, unsigned int a3);
__int64 nn_streamplay_detail_ShowMatchmakeSupportCore(_QWORD* a1, char a2,
                                                      __int64 a3);

__int64 nn_streamplay_detail_InitializeGuestDeviceResourceManager(void* this_)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = (int)this_;
  nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  if ((SdkData_10556f0 & 1) == 0) {
    SdkData_10556f0 = 1;
  }
  SdkData_1055c78 = (__int64)"player1";
  SdkData_1055c80 = 0;
  if (v1 >= 2) {
    if ((SdkData_1055c88 & 1) == 0) {
      SdkData_1055c88 = 1;
    }
    SdkData_1056210 = (__int64)"player2";
    SdkData_1056218 = 0;
    if (v1 != 2) {
      if ((SdkData_1056220 & 1) == 0) {
        SdkData_1056220 = 1;
      }
      SdkData_10567a8 = (__int64)"player3";
      SdkData_10567b0 = 0;
    }
  }
  v2 = nn_vi2_CreateDisplay_plt(&SdkData_10556f8, SdkData_1055c78);
  if (v2 != 0) {
    goto LABEL_28;
  }
  v2 = nn_vi2_CreateEndpoint_plt(&SdkData_10557f8, "default", &SdkData_10556f8);
  if (v2 != 0) {
    goto LABEL_28;
  }
  v2 = nn_vi2_CreateLayer_plt(&SdkData_1055878, &SdkData_10557f8);
  if (v2 != 0) {
    goto LABEL_28;
  }
  SdkData_1055c80 = 1;
  if (v1 >= 2) {
    v2 = nn_vi2_CreateDisplay_plt(&SdkData_1055c90, SdkData_1056210);
    if (v2 != 0) {
      goto LABEL_28;
    }
    v2 = nn_vi2_CreateEndpoint_plt(&SdkData_1055d90, "default",
                                   &SdkData_1055c90);
    if (v2 != 0) {
      goto LABEL_28;
    }
    v2 = nn_vi2_CreateLayer_plt(&SdkData_1055e10, &SdkData_1055d90);
    if (v2 != 0) {
      goto LABEL_28;
    }
    SdkData_1056218 = 1;
    if (v1 != 2) {
      v2 = nn_vi2_CreateDisplay_plt(&SdkData_1056228, SdkData_10567a8);
      if (v2 != 0 ||
          (v2 = nn_vi2_CreateEndpoint_plt(&SdkData_1056328, "default",
                                          &SdkData_1056228)) != 0 ||
          (v2 = nn_vi2_CreateLayer_plt(&SdkData_10563a8, &SdkData_1056328)) !=
              0) {
      LABEL_28:
        v5 = v2;
        nn_diag_detail_AbortImpl_plt_858db0(&v5);
      }
      SdkData_10567b0 = 1;
    }
  }
  if (v1 <= 1) {
    v3 = 1;
  }
  else {
    v3 = v1;
  }
  if (v3 >= 3) {
    v3 = 3;
  }
  SdkData_10567b8 = 1;
  SdkData_10567c0 = v3;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
}

__int64 nn_streamplay_detail_FinalizeGuestDeviceResourceManager(void* this_)
{
  char* v1;
  __int64 v2;
  __int64 v3;

  nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  SdkData_10567b8 = 0;
  if (SdkData_10567c0 >= 1) {
    v1 = &SdkData_10556f0;
    v2 = 0;
    do {
      v1[1424] = 0;
      nn_vi2_DestroyLayer_plt(v1 + 392);
      nn_vi2_DestroyEndpoint_plt(v1 + 264);
      nn_vi2_DestroyDisplay_plt(v1 + 8);
      v3 = SdkData_10567c0;
      *v1 = 0;
      ++v2;
      v1 += 1432;
    } while (v2 < v3);
  }
  SdkData_10567c0 = 0;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
}

__int64

nn_streamplay_detail_IsGuestDeviceResourceManagerInitialized(void* this_)
{
  unsigned int v1;

  nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  v1 = (unsigned __int8)SdkData_10567b8;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
  return v1;
}

__int64 nn_streamplay_detail_GetNativeWindowHandle(unsigned __int8 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;

  v2 = nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  v3 = &SdkData_10556f0_alt1[1432 * a1];
  if ((*v3 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  v4 = nn_vi2_GetLayerNativeWindowHandle_plt(v3 + 392);
  nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
  return v4;
}

__int64 nn_streamplay_detail_SetLayerUserData(unsigned __int8 a1, __int64 a2)
{
  __int64 v4;
  char* v5;

  v4 = nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  v5 = &SdkData_10556f0_alt1[1432 * a1];
  if ((*v5 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  nn_vi2_sdk_SetLayerNextUserData_plt(v5 + 392, 3, a2);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
}

__int64

nn_streamplay_detail_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
    unsigned __int8 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6;
  char* v7;

  v6 = nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  v7 = &SdkData_10556f0_alt1[1432 * a1];
  if ((*v7 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  nn_vi2_SetLayerNextHdrStandardContentLuminanceRangeMetadata_plt(v7 + 392, a2,
                                                                  a3);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
}

__int64

nn_streamplay_detail_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(
    unsigned __int8 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6;
  char* v7;

  v6 = nn_os_SdkMutexType_Lock_plt(&SdkData_10567bc);
  v7 = &SdkData_10556f0_alt1[1432 * a1];
  if ((*v7 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v6);
  }
  nn_vi2_SetLayerNextHdrExtendedContentLuminanceRangeMetadata_plt(v7 + 392, a2,
                                                                  a3);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_10567bc);
}

__int64 nn_streamplay_detail_ShowMatchmakeSupportCore(_QWORD* a1, char a2,
                                                      __int64 a3)
{
  __int64 v5;
  unsigned int v6;
  struct {
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
  } v8_;
  __int64 v30;

  a1[20] = 0;
  a1[21] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[10] = 0;
  a1[11] = 0;
  if (a2 == 1) {
    v5 = 16973860;
  }
  else {
    v5 = 16777252;
  }
  a1[8] = 0;
  a1[9] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  v30 = 0;
  LODWORD(v8_.v8) = nn_applet_CreateLibraryApplet_plt(&v30, v5, 0);
  if ((_DWORD)v8_.v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8_.v8);
  }
  v8_.v9 = 0;
  v8_.v10 = 0;
  v8_.v8 = 0;
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(&v8_.v8,
                                                               0x10000);
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(&v8_.v8, v30);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(&v8_.v8);
  nn_la_PushToInChannel_plt(v30, a3, 128);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v30, 0) != 0) {
    v6 = 15647;
  }
  else {
    v8_.v28 = 0;
    v8_.v29 = 0;
    v8_.v26 = 0;
    v8_.v27 = 0;
    v8_.v24 = 0;
    v8_.v25 = 0;
    v8_.v22 = 0;
    v8_.v23 = 0;
    v8_.v20 = 0;
    v8_.v21 = 0;
    v8_.v18 = 0;
    v8_.v19 = 0;
    v8_.v16 = 0;
    v8_.v17 = 0;
    v8_.v14 = 0;
    v8_.v15 = 0;
    v8_.v12 = 0;
    v8_.v13 = 0;
    v8_.v10 = 0;
    v8_.v11 = 0;
    v8_.v8 = 0;
    v8_.v9 = 0;
    nn_la_PopFromOutChannel_plt(v30, &v8_.v8, 176, 0);
    memcpy_plt(a1, &v8_.v8, 176);
    v6 = 0;
  }
  nn_applet_CloseLibraryApplet_plt(v30);
  return v6;
}

#pragma GCC visibility pop
