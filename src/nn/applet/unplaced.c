#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_am_GetAppletCommonFunctions_plt(_QWORD);
__int64 nn_am_GetApplicationFunctions_plt(_QWORD);
__int64 nn_am_GetCommonStateGetter_plt(_QWORD);
__int64 nn_applet_CreateStorage_plt(_QWORD, _QWORD);
__int64 nn_applet_NotificationReceiver_NotificationReceiver_plt_860bb0(_QWORD);
__int64 nn_applet_NotificationSender_Destroy_NotificationSender_plt(_QWORD);
__int64 nn_applet_NotificationSender_NotificationSender_plt_860c40(_QWORD);
__int64 nn_applet_ReleaseStorage_plt(_QWORD);
__int64 nn_applet_WriteToStorage_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_WaitAny_plt(_QWORD);
__int64 strncpy_plt(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_f01188;
extern _UNKNOWN SdkData_f011d0;
extern _UNKNOWN SdkData_f01218;
extern _UNKNOWN SdkData_f01260;
extern _UNKNOWN SdkData_f012b8;
extern _UNKNOWN SdkData_f012d0;
extern _UNKNOWN SdkData_f012e8;
extern _UNKNOWN SdkData_f01300;
extern _UNKNOWN SdkData_f01338;
extern _UNKNOWN* SdkData_f01340;
extern __int64 SdkData_f010b8;
extern __int64 SdkData_f010f8;
extern __int64 SdkData_f01138;
extern __int64 SdkData_f01348;
extern __int64 SdkData_f01358;
extern __int64 SdkData_f01428;
extern __int64 SdkData_f01430;
extern __int64 SdkData_f01440;
extern __int64 SdkData_f01510;
extern __int64 SdkData_f01518;
extern __int64 SdkData_f01528;
extern __int64 SdkData_f015f8;
extern __int64 SdkData_f01600;
extern __int64 SdkData_f01610;
extern __int64 SdkData_f016e0;
extern __int64 SdkData_f016e8;
extern __int64 SdkData_f016f8;
extern __int64 SdkData_f017c8;
extern __int64 SdkData_f017d0;
extern __int64 SdkData_f017e0;
extern __int64 SdkData_f018b0;
extern __int64 SdkData_f018b8;
extern __int64 SdkData_f018c8;
extern __int64 SdkData_f01998;
extern __int64 SdkData_f019a0;
extern __int64 SdkData_f019b0;
extern char SdkData_f010a8;
extern char SdkData_f010b0;
extern char SdkData_f010e8;
extern char SdkData_f010f0;
extern char SdkData_f01128;
extern char SdkData_f01130;
extern char SdkData_f01168;
extern char SdkData_f01170;
extern int SdkData_f01070;
extern int SdkData_f01180;
extern int SdkData_f012b0;
__int64 nn_applet_RestartProgram(_QWORD* a1);
__int64 nn_applet_ExecuteProgram(__int64 a1, _QWORD* a2);
__int64 nn_applet_RequestExitApplicationAndTryPopMessage(unsigned int a1,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4);
__int64 nn_applet_1e1140();
__int64 nn_applet_1e1160(__int64 result);
__int64* nn_applet_OpenNamedChannelAsParent(void* this_, const char* a2);
__int64* nn_applet_1e12d0(__int64* a1);
__int64* nn_applet_OpenNamedChannelAsChild(void* this_, const char* a2);
__int64 nn_applet_1e1680();
__int64 nn_applet_1e22f0();
__int64 nn_applet_1e26b0(__int64 a1);
__int64 nn_applet_1e2990();
__int64 nn_applet_1e29f0(__int64 result);
bool nn_applet_WaitPopFromInteractiveOutChannelEvent(__int64 a1);
__int64* nn_applet_1e4100();
__int64 nn_applet_1e4460();

__int64 nn_applet_RestartProgram(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int8 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  _QWORD* v17[6];
  int v18;
  __int64 v19;
  _QWORD* v20;

  v2 = nn_am_GetApplicationFunctions_plt(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 384LL))(v2);
  v18 = result;
  if ((_DWORD)result != 0) {
    v7 = nn_diag_detail_AbortImpl_plt_858db0(&v18);
    v17[1] = &v19;
    v17[2] = v8;
    v17[4] = a1;
    v10 = v9;
    v11 = v7;
    v12 = nn_am_GetApplicationFunctions_plt(v7);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 384LL))(v12);
    v16 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v16);
      __udf(0);
    }
    if (v10 == nullptr) {
      goto LABEL_12;
    }
    v13 = nn_am_GetApplicationFunctions_plt(result);
    v17[0] = v10;
    result =
        (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v13 + 392LL))(v13, v17);
    if (v17[0] != nullptr) {
      v14 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v17[0] + 8LL))((void*)v17[0], v17[0]);
      result = v14;
    }
    if ((_DWORD)result == 0) {
    LABEL_12:
      v15 = nn_am_GetApplicationFunctions_plt(result);
      return (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v15 + 376LL))(
          v15, 0, v11);
    }
  }
  else {
    if (a1 == nullptr) {
      goto LABEL_6;
    }
    v4 = nn_am_GetApplicationFunctions_plt(result);
    v20 = a1;
    result =
        (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v4 + 392LL))(v4, &v20);
    if (v20 != nullptr) {
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v20 + 8LL))(
          (void*)v20, v20);
      result = v5;
    }
    if ((_DWORD)result == 0) {
    LABEL_6:
      v6 = nn_am_GetApplicationFunctions_plt(result);
      return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 376LL))(
          v6, 2, 0);
    }
  }
  return result;
}

__int64 nn_applet_ExecuteProgram(__int64 a1, _QWORD* a2)
{
  unsigned __int8 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  _QWORD* v10;

  v3 = a1;
  v4 = nn_am_GetApplicationFunctions_plt(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 384LL))(v4);
  v9 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
  }
  if (a2 == nullptr) {
    goto LABEL_6;
  }
  v6 = nn_am_GetApplicationFunctions_plt(result);
  v10 = a2;
  result = (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v6 + 392LL))(v6, &v10);
  if (v10 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v10 + 8LL))(
        (void*)(v10), v10);
    result = v7;
  }
  if ((_DWORD)result == 0) {
  LABEL_6:
    v8 = nn_am_GetApplicationFunctions_plt(result);
    return (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v8 + 376LL))(
        v8, 0, v3);
  }
  return result;
}

__int64 nn_applet_RequestExitApplicationAndTryPopMessage(unsigned int a1,
                                                         __int64 a2, __int64 a3,
                                                         __int64 a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  void (***v15)(_QWORD);
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  _QWORD v20[5];
  __int64 v21;
  __int64 v22;
  __int64 vars0;

  v4 = a1;
  v21 = 0;
  v8 = nn_applet_CreateStorage_plt(&v21, a4);
  LODWORD(v22) = v8;
  if ((_DWORD)v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v22);
  }
  else {
    if (a4 != 0) {
      v8 = nn_applet_WriteToStorage_plt(v21, 0, a3, a4);
      LODWORD(v22) = v8;
      if ((_DWORD)v8 != 0) {
        goto LABEL_14;
      }
    }
    v9 = v21;
    v10 = nn_am_GetApplicationFunctions_plt(v8);
    if (v9 != 0) {
      v11 = v10;
      (**(void (***)(__int64))v9)(v9);
      v10 = v11;
    }
    v22 = v9;
    a2 = (*(unsigned int (**)(__int64, _QWORD, __int64, __int64*))(
        *(_QWORD*)v10 + 544LL))(v10, (unsigned int)v4, a2, &v22);
    result = v22;
    if (v22 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
    }
    LODWORD(v22) = a2;
    if ((_DWORD)a2 == 0) {
      if (v9 != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
      }
      return result;
    }
  }
  nn_diag_detail_AbortImpl_plt_858db0(&v22);
LABEL_14:
  v13 = nn_diag_detail_AbortImpl_plt_858db0(&v22);
  v20[1] = &vars0;
  v20[2] = v14;
  v20[3] = v4;
  v20[4] = a2;
  v15 = (void (***)(_QWORD))v13;
  v16 = nn_am_GetCommonStateGetter_plt(v13);
  if (v15 != nullptr) {
    v17 = v16;
    (**v15)(v15);
    v16 = v17;
  }
  v20[0] = v15;
  v18 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v16 + 160LL))(v16, v20);
  if (v20[0] != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v20[0] + 8LL))(v20[0]);
  }
  v19 = v18;
  if (v18 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
    __udf(0);
  }
  return nn_applet_ReleaseStorage_plt(v15);
}

__int64 nn_applet_1e1140() { return fw_rtld_RegisterCrtDestructor(); }

__int64 nn_applet_1e1160(__int64 result)
{
  _BYTE* v1;

  v1 = (_BYTE*)result;
  if (*(_BYTE*)(result + 248) != 0) {
    result = nn_os_DestroySystemEvent_plt(result + 208);
  }
  if (v1[184] != 0) {
    result = nn_os_DestroySystemEvent_plt(v1 + 144);
  }
  if (v1[120] != 0) {
    result = nn_os_DestroySystemEvent_plt(v1 + 80);
  }
  if (v1[56] != 0) {
    return nn_os_DestroySystemEvent_plt(v1 + 16);
  }
  return result;
}

__int64* nn_applet_OpenNamedChannelAsParent(void* this_, const char* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64* v6;
  int v9;
  __int64 v10;
  _BYTE v11[16];
  __int64 v12;
  __int64* v13;

  v12 = 0;
  v11[15] = 0;
  v2 = strncpy_plt(v11, this_, 15);
  v3 = nn_am_GetAppletCommonFunctions_plt(v2);
  v13 = &v12;
  v4 = (*(__int64 (**)(__int64, __int64**, _BYTE*))(*(_QWORD*)v3 + 168LL))(
      v3, &v13, v11);
  if (v4 != 0) {
    if ((v4 & 0x3FFFFF) == 0x3F480) {
      LODWORD(v13) = 35972;
      nn_diag_detail_AbortImpl_plt_858db0(&v13);
    }
    if (((v4 >> 9) & 0x1FFC) - 500 < 0x64 && (v4 & 0x1FF) == 128) {
      v9 = 36484;
    }
    else {
      v9 = v4;
    }
    LODWORD(v13) = v9;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v5 = v12;
  v12 = 0;
  v10 = v5;
  v6 = nn_applet_1e12d0(&v10);
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return v6;
}

__int64* nn_applet_1e12d0(__int64* a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;

  v1 = (__int64*)&SdkData_f01070;
  v3 = nn_os_SdkMutexType_Lock_plt(&SdkData_f01070);
  if (SdkData_f010b0 != 1) {
    goto LABEL_6;
  }
  v1 = &SdkData_f010b8;
  if (SdkData_f010f0 == 1) {
    v1 = &SdkData_f010f8;
    if (SdkData_f01130 == 1) {
      v1 = &SdkData_f01138;
      if (SdkData_f01170 == 1) {
        nn_diag_detail_AbortImpl_plt_856170(v3);
      LABEL_6:
        ++v1;
      }
    }
  }
  *((_BYTE*)v1 + 56) = 1;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f01070);
  v4 = *a1;
  v9 = 0;
  v5 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v4 + 56LL))(v4, &v9);
  v8 = v5;
  if ((_DWORD)v5 != 0) {
    v5 = nn_diag_detail_AbortImpl_plt_858db0(&v8);
  LABEL_11:
    nn_diag_detail_AbortImpl_plt_856170(v5);
    __udf(0);
  }
  if (*((_BYTE*)v1 + 48) != 0) {
    goto LABEL_11;
  }
  nn_os_AttachReadableHandleToSystemEvent_plt(v1 + 1, (unsigned int)v9,
                                              BYTE4(v9), 0);
  v6 = *a1;
  *a1 = 0;
  *v1 = v6;
  return v1;
}

__int64* nn_applet_OpenNamedChannelAsChild(void* this_, const char* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64* v6;
  int v9;
  __int64 v10;
  _BYTE v11[16];
  __int64 v12;
  __int64* v13;

  v12 = 0;
  v11[15] = 0;
  v2 = strncpy_plt(v11, this_, 15);
  v3 = nn_am_GetAppletCommonFunctions_plt(v2);
  v13 = &v12;
  v4 = (*(__int64 (**)(__int64, __int64**, _BYTE*))(*(_QWORD*)v3 + 176LL))(
      v3, &v13, v11);
  if (v4 != 0) {
    if ((v4 & 0x3FFFFF) == 0x3F480) {
      LODWORD(v13) = 35972;
      nn_diag_detail_AbortImpl_plt_858db0(&v13);
    }
    if (((v4 >> 9) & 0x1FFC) - 500 < 0x64 && (v4 & 0x1FF) == 128) {
      v9 = 36484;
    }
    else {
      v9 = v4;
    }
    LODWORD(v13) = v9;
    nn_diag_detail_AbortImpl_plt_858db0(&v13);
  }
  v5 = v12;
  v12 = 0;
  v10 = v5;
  v6 = nn_applet_1e12d0(&v10);
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  return v6;
}

__int64 nn_applet_1e1680()
{
  SdkData_f01070 = 0;
  SdkData_f010a8 = 0;
  SdkData_f010e8 = 0;
  SdkData_f01128 = 0;
  SdkData_f01168 = 0;
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_applet_1e22f0()
{
  SdkData_f01180 = 0;
  nn_applet_NotificationReceiver_NotificationReceiver_plt_860bb0(
      &SdkData_f01188);
  nn_applet_NotificationReceiver_NotificationReceiver_plt_860bb0(
      &SdkData_f011d0);
  nn_applet_NotificationReceiver_NotificationReceiver_plt_860bb0(
      &SdkData_f01218);
  nn_applet_NotificationReceiver_NotificationReceiver_plt_860bb0(
      &SdkData_f01260);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_applet_1e26b0(__int64 a1)
{
  nn_applet_NotificationSender_Destroy_NotificationSender_plt(a1 + 80);
  nn_applet_NotificationSender_Destroy_NotificationSender_plt(a1 + 56);
  nn_applet_NotificationSender_Destroy_NotificationSender_plt(a1 + 32);
  return nn_applet_NotificationSender_Destroy_NotificationSender_plt(a1 + 8);
}

__int64 nn_applet_1e2990()
{
  SdkData_f012b0 = 0;
  nn_applet_NotificationSender_NotificationSender_plt_860c40(&SdkData_f012b8);
  nn_applet_NotificationSender_NotificationSender_plt_860c40(&SdkData_f012d0);
  nn_applet_NotificationSender_NotificationSender_plt_860c40(&SdkData_f012e8);
  nn_applet_NotificationSender_NotificationSender_plt_860c40(&SdkData_f01300);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_applet_1e29f0(__int64 result)
{
  if (*(_BYTE*)(result + 1888) == 1 && *(_BYTE*)(result + 1936) != 0) {
    return nn_os_DestroySystemEvent_plt(result + 1896);
  }
  return result;
}

bool nn_applet_WaitPopFromInteractiveOutChannelEvent(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD v5[6];
  _QWORD v6[8];
  _QWORD v7[8];

  nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  if ((*(_BYTE*)(a1 + 128) & 1) == 0) {
    v2 = *(_QWORD*)(a1 + 16);
    v7[0] = 0;
    LODWORD(v6[0]) =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 184LL))(v2, v7);
    if (LODWORD(v6[0]) != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(v6);
    }
    nn_os_AttachReadableHandleToSystemEvent_plt(a1 + 136, LODWORD(v7[0]),
                                                BYTE4(v7[0]), 0);
    *(_BYTE*)(a1 + 128) = 1;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
  memset(v5, 0, sizeof(v5));
  nn_os_InitializeMultiWait_plt(v5);
  memset(v6, 0, sizeof(v6));
  nn_os_InitializeMultiWaitHolder_plt_8591f0(v6, a1 + 136);
  nn_os_LinkMultiWaitHolder_plt(v5, v6);
  memset(v7, 0, sizeof(v7));
  nn_os_InitializeMultiWaitHolder_plt_8591f0(v7, a1 + 32);
  nn_os_LinkMultiWaitHolder_plt(v5, v7);
  v3 = (_QWORD*)nn_os_WaitAny_plt(v5);
  nn_os_UnlinkMultiWaitHolder_plt(v7);
  nn_os_FinalizeMultiWaitHolder_plt(v7);
  nn_os_UnlinkMultiWaitHolder_plt(v6);
  nn_os_FinalizeMultiWaitHolder_plt(v6);
  nn_os_FinalizeMultiWait_plt(v5);
  return v3 == v6;
}

__int64* nn_applet_1e4100()
{
  __int64* result;
  _BOOL4 v1;
  int v2;
  _BOOL4 v3;
  int v4;
  int v5;
  _BOOL4 v6;
  int v7;
  int v8;
  _BOOL4 v9;
  int v10;
  int v11;
  _BOOL4 v12;
  int v13;
  int v14;
  _BOOL4 v15;
  int v16;
  int v17;
  _BOOL4 v18;
  int v19;
  int v20;

  if (((unsigned __int8)SdkData_f01340 & BYTE1(SdkData_f01340) & 1) != 0) {
    result = (__int64*)&SdkData_f01340;
  }
  else {
    result = nullptr;
  }
  if ((unsigned __int8)SdkData_f01428 == 1 && (SdkData_f01428 & 0x100) != 0) {
    if (((unsigned __int8)SdkData_f01340 & BYTE1(SdkData_f01340) & 1) == 0) {
      goto LABEL_12;
    }
    v1 = ((HIDWORD(SdkData_f01358) - 1) & 0xFFFFFFFD) == 0;
    v2 = (((HIDWORD(SdkData_f01440) - 1) & 0xFFFFFFFD) == 0) ^ v1;
    if (((HIDWORD(SdkData_f01440) - 1) & 0xFFFFFFFD) == 0) {
      v1 = false;
    }
    if (v2 == 0) {
      v1 = SdkData_f01430 < (unsigned __int64)SdkData_f01348;
    }
    if (v1) {
    LABEL_12:
      result = &SdkData_f01428;
    }
  }
  if ((unsigned __int8)SdkData_f01510 == 1 && (SdkData_f01510 & 0x100) != 0) {
    if (result == nullptr) {
      goto LABEL_22;
    }
    v3 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v4 = (((HIDWORD(SdkData_f01528) - 1) & 0xFFFFFFFD) == 0) ^ v3;
    if (((HIDWORD(SdkData_f01528) - 1) & 0xFFFFFFFD) == 0) {
      v3 = false;
    }
    v5 = v4 != 0 ? v3 : SdkData_f01518 < (unsigned __int64)result[1];
    if (v5 == 1) {
    LABEL_22:
      result = &SdkData_f01510;
    }
  }
  if ((unsigned __int8)SdkData_f015f8 == 1 && (SdkData_f015f8 & 0x100) != 0) {
    if (result == nullptr) {
      goto LABEL_32;
    }
    v6 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v7 = (((HIDWORD(SdkData_f01610) - 1) & 0xFFFFFFFD) == 0) ^ v6;
    if (((HIDWORD(SdkData_f01610) - 1) & 0xFFFFFFFD) == 0) {
      v6 = false;
    }
    v8 = v7 != 0 ? v6 : SdkData_f01600 < (unsigned __int64)result[1];
    if (v8 == 1) {
    LABEL_32:
      result = &SdkData_f015f8;
    }
  }
  if ((unsigned __int8)SdkData_f016e0 == 1 && (SdkData_f016e0 & 0x100) != 0) {
    if (result == nullptr) {
      goto LABEL_42;
    }
    v9 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v10 = (((HIDWORD(SdkData_f016f8) - 1) & 0xFFFFFFFD) == 0) ^ v9;
    if (((HIDWORD(SdkData_f016f8) - 1) & 0xFFFFFFFD) == 0) {
      v9 = false;
    }
    v11 = v10 != 0 ? v9 : SdkData_f016e8 < (unsigned __int64)result[1];
    if (v11 == 1) {
    LABEL_42:
      result = &SdkData_f016e0;
    }
  }
  if ((unsigned __int8)SdkData_f017c8 == 1 && (SdkData_f017c8 & 0x100) != 0) {
    if (result == nullptr) {
      goto LABEL_52;
    }
    v12 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v13 = (((HIDWORD(SdkData_f017e0) - 1) & 0xFFFFFFFD) == 0) ^ v12;
    if (((HIDWORD(SdkData_f017e0) - 1) & 0xFFFFFFFD) == 0) {
      v12 = false;
    }
    v14 = v13 != 0 ? v12 : SdkData_f017d0 < (unsigned __int64)result[1];
    if (v14 == 1) {
    LABEL_52:
      result = &SdkData_f017c8;
    }
  }
  if ((unsigned __int8)SdkData_f018b0 == 1 && (SdkData_f018b0 & 0x100) != 0) {
    if (result == nullptr) {
      goto LABEL_62;
    }
    v15 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v16 = (((HIDWORD(SdkData_f018c8) - 1) & 0xFFFFFFFD) == 0) ^ v15;
    if (((HIDWORD(SdkData_f018c8) - 1) & 0xFFFFFFFD) == 0) {
      v15 = false;
    }
    v17 = v16 != 0 ? v15 : SdkData_f018b8 < (unsigned __int64)result[1];
    if (v17 == 1) {
    LABEL_62:
      result = &SdkData_f018b0;
    }
  }
  if ((unsigned __int8)SdkData_f01998 == 1 && (SdkData_f01998 & 0x100) != 0) {
    if (result == nullptr) {
      return &SdkData_f01998;
    }
    v18 = ((*((_DWORD*)result + 7) - 1) & 0xFFFFFFFD) == 0;
    v19 = (((HIDWORD(SdkData_f019b0) - 1) & 0xFFFFFFFD) == 0) ^ v18;
    if (((HIDWORD(SdkData_f019b0) - 1) & 0xFFFFFFFD) == 0) {
      v18 = false;
    }
    v20 = v19 != 0 ? v18 : SdkData_f019a0 < (unsigned __int64)result[1];
    if (v20 == 1) {
      return &SdkData_f01998;
    }
  }
  return result;
}

__int64 nn_applet_1e4460() { return fw_rtld_RegisterCrtDestructor(); }

#pragma GCC visibility pop
