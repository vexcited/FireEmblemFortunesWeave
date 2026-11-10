#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 applet_library_applet_1e2c00_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "applet_library_applet_1e2c00");
__int64 applet_library_applet_1e2e20_alt1(_QWORD) __asm__(
    "applet_library_applet_1e2e20");
__int64 applet_library_applet_1e3100_alt1(_QWORD) __asm__(
    "applet_library_applet_1e3100");
__int64
applet_library_applet_1e3350_alt1(void) __asm__("applet_library_applet_1e3350");
__int64 nn_am_GetLibraryAppletCreator_plt(void);
__int64 nn_am_GetProcessWindingController_plt(_QWORD);
__int64 nn_am_GetSelfController_plt(_QWORD);
__int64 nn_applet_1e4100(void);
__int64 nn_applet_1e4100_alt1(_QWORD) __asm__("nn_applet_1e4100");
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_AttachReadableHandleToSystemEvent_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_FinalizeMultiWaitHolder_plt(_QWORD);
__int64 nn_os_FinalizeMultiWait_plt(_QWORD);
__int64 nn_os_GetCurrentThread_plt(_QWORD);
__int64 nn_os_GetThreadId_plt(_QWORD);
__int64 nn_os_InitializeMultiWaitHolder_plt_8591f0(_QWORD, _QWORD);
__int64 nn_os_InitializeMultiWait_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_os_TimedWaitSystemEvent_plt(_QWORD, _QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_WaitAny_plt(_QWORD);
__int64 nn_os_WaitSystemEvent_plt(_QWORD);
__int64 puts_plt(_QWORD);
extern _UNKNOWN* SdkData_f01340;
extern _UNKNOWN SdkData_f01338;
extern _UNKNOWN SdkData_f01a80;
extern _UNKNOWN SdkData_f01aa0;
extern _UNKNOWN* SdkData_f01330;
extern __int64 (*SdkData_f01320)(__int64);
extern __int64 (*SdkData_f01328)(__int64);
extern __int64 SdkData_f01428;
extern __int64 SdkData_f01510;
extern __int64 SdkData_f015f8;
extern __int64 SdkData_f016e0;
extern __int64 SdkData_f017c8;
extern __int64 SdkData_f018b0;
extern __int64 SdkData_f01998;
extern __int64 SdkData_f01a88;
extern __int64 SdkData_f01a90;
extern char SdkData_f01318;
extern char SdkData_f01a98;
extern char SdkData_f01ac8;
__int64 nn_applet_CreateLibraryApplet(__int64* a1, unsigned int a2,
                                      unsigned int a3);
__int64 nn_applet_CreateLibraryAppletHandleOnUnwinding(__int64* a1);
__int64* applet_library_applet_1e2c00(__int64* a1, int a2, int a3);
__int64 applet_library_applet_1e2e20(__int64 a1);
__int64 nn_applet_StartLibraryApplet(__int64 a1, __int64 a2);
__int64 applet_library_applet_1e3100(__int64 result);
__int64 nn_applet_StartLibraryAppletImmediately(__int64 a1, __int64 a2);
void* applet_library_applet_1e3350();
__int64 nn_applet_JumpLibraryApplet(__int64 a1);
__int64 nn_applet_RequestExitLibraryAppletOrTerminate(__int64* a1, __int64 a2);
__int64 nn_applet_JoinLibraryApplet(__int64 a1);
__int64 nn_applet_StartGlobalLibraryAppletAndDetach(__int64 a1);

__int64 nn_applet_CreateLibraryApplet(__int64* a1, unsigned int a2,
                                      unsigned int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  _QWORD* v13;
  _QWORD* v15;
  _QWORD* v16;

  v15 = nullptr;
  v6 = nn_am_GetLibraryAppletCreator_plt();
  v7 = nn_os_GetCurrentThread_plt(v6);
  v8 = nn_os_GetThreadId_plt(v7);
  v16 = &v15;
  v9 = (*(__int64 (**)(__int64, _QWORD**, _QWORD, _QWORD, __int64))(
      *(_QWORD*)v6 + 56LL))(v6, &v16, a2, a3, v8);
  if (v9 != 0) {
    if ((v9 & 0x1FF) != 0x80 || ((v9 >> 9) & 0x1FFF) - 701 >= 0x31) {
      LODWORD(v16) = v9;
      nn_diag_detail_AbortImpl_plt_858db0(&v16);
      __udf(0);
    }
    v11 = 0;
    v12 = 3715;
    v13 = v15;
    if (v15 != nullptr) {
      goto LABEL_5;
    }
  }
  else {
    v10 = v15;
    v15 = nullptr;
    v16 = v10;
    v11 = applet_library_applet_1e2c00_alt1(&v16, a2, a3);
    if (v16 != nullptr) {
      (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    }
    v12 = 0;
    v13 = v15;
    if (v15 != nullptr) {
    LABEL_5:
      (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
    }
  }
  if (v9 == 0) {
    *a1 = v11;
  }
  return v12;
}

__int64 nn_applet_CreateLibraryAppletHandleOnUnwinding(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;
  __int64 v10;

  v2 = *a1;
  v10 = 0;
  v9 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 200LL))(v2, &v10);
  if (v9 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v9);
    __udf(0);
  }
  v3 = *a1;
  v4 = (unsigned int)v10;
  v5 = HIDWORD(v10);
  *a1 = 0;
  v8 = v3;
  v6 = applet_library_applet_1e2c00_alt1(&v8, v4, v5);
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  applet_library_applet_1e2e20_alt1(v6);
  if (SdkData_f01320 != nullptr) {
    SdkData_f01320(v6);
  }
  *(_BYTE*)(v6 + 185) = 1;
  return v6;
}

__int64* applet_library_applet_1e2c00(__int64* a1, int a2, int a3)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  void* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v14;
  __int64 v15;

  v6 = nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  v7 = (__int64*)&SdkData_f01340;
  if ((unsigned __int8)SdkData_f01340 == 1) {
    v7 = &SdkData_f01428;
    if ((unsigned __int8)SdkData_f01428 == 1) {
      v7 = &SdkData_f01510;
      if ((unsigned __int8)SdkData_f01510 == 1) {
        v7 = &SdkData_f015f8;
        if ((unsigned __int8)SdkData_f015f8 == 1) {
          v7 = &SdkData_f016e0;
          if ((unsigned __int8)SdkData_f016e0 == 1) {
            v7 = &SdkData_f017c8;
            if ((unsigned __int8)SdkData_f017c8 == 1) {
              v7 = &SdkData_f018b0;
              if ((unsigned __int8)SdkData_f018b0 == 1) {
                v7 = &SdkData_f01998;
                if ((unsigned __int8)SdkData_f01998 == 1) {
                  nn_diag_detail_AbortImpl_plt_856170(v6);
                }
              }
            }
          }
        }
      }
    }
  }
  v7[27] = 0;
  v7[28] = 0;
  v7[25] = 0;
  v7[26] = 0;
  v7[23] = 0;
  v7[24] = 0;
  v7[21] = 0;
  v7[22] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[17] = 0;
  v7[18] = 0;
  v7[15] = 0;
  v7[16] = 0;
  v7[13] = 0;
  v7[14] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[7] = 0;
  v7[8] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[1] = 0;
  v7[2] = 0;
  *v7 = 0;
  *(_BYTE*)v7 = 1;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
  *((_DWORD*)v7 + 6) = a2;
  *((_DWORD*)v7 + 7) = a3;
  v15 = 0;
  v14 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)*a1 + 40LL))(*a1, &v15);
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  nn_os_AttachReadableHandleToSystemEvent_plt(v7 + 4, (unsigned int)v15,
                                              BYTE4(v15), 0);
  v8 = *a1;
  v15 = 0;
  v14 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 224LL))(v8, &v15);
  if (v14 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v14);
  }
  v9 = (void*)nn_os_AttachReadableHandleToSystemEvent_plt(
      v7 + 10, (unsigned int)v15, BYTE4(v15), 0);
  if (a3 == 3) {
    v10 = *a1;
    v11 = nn_applet_GetAppletResourceUserId_plt(v9);
    LODWORD(v15) = (*(__int64 (**)(__int64, __int64*, __int64))(
        *(_QWORD*)v10 + 216LL))(v10, v7 + 24, v11);
    if ((_DWORD)v15 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v15);
    }
  }
  else {
    v7[24] = 0;
  }
  v12 = *a1;
  *a1 = 0;
  *((_BYTE*)v7 + 128) = 0;
  *((_WORD*)v7 + 92) = 0;
  v7[2] = v12;
  atomic_store(0, (unsigned __int8*)v7 + 186);
  *((_DWORD*)v7 + 47) = 10;
  return v7;
}

__int64 applet_library_applet_1e2e20(__int64 a1)
{
  int v4;

  nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  *(_BYTE*)(a1 + 1) = 1;
  *(_QWORD*)(a1 + 8) = ++SdkData_f01a88;
  while (SdkData_f01a90 == 0) {
    if (nn_applet_1e4100() == a1) {
      goto LABEL_12;
    }
  LABEL_3:
    nn_os_SdkConditionVariableType_Wait_plt(&SdkData_f01a80, &SdkData_f01338);
  }
  if (((*(_DWORD*)(a1 + 28) - 1) & 0xFFFFFFFD) == 0 ||
      ((*(_DWORD*)(SdkData_f01a90 + 28) - 1) & 0xFFFFFFFD) != 0) {
    goto LABEL_3;
  }
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(SdkData_f01a90 + 16) + 64LL))(
      *(_QWORD*)(SdkData_f01a90 + 16));
  if (v4 == 0) {
    goto LABEL_3;
  }
  nn_diag_detail_AbortImpl_plt_858db0(&v4);
LABEL_12:
  SdkData_f01a90 = a1;
  *(_BYTE*)(a1 + 1) = 0;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
}

__int64 nn_applet_StartLibraryApplet(__int64 a1, __int64 a2)
{
  void* v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void* v7;
  void (***v8)(_QWORD);
  char v9;
  char v10;
  __int64 v12;
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  int v15;

  v15 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 128LL))(
      *(_QWORD*)(a1 + 16), a1 + 200);
  if (v15 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  LABEL_23:
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
    goto LABEL_24;
  }
  if (*(_DWORD*)(a1 + 28) != 7) {
    applet_library_applet_1e2e20(a1);
    if (SdkData_f01320 != nullptr) {
      SdkData_f01320(a1);
    }
    *(_BYTE*)(a1 + 185) = 1;
    v7 = SdkData_f01330;
    if (SdkData_f01330 != nullptr) {
      v8 = *(void (****)(_QWORD))(a1 + 16);
      v13 = v8;
      if (v8 != nullptr) {
        (**v8)(v8);
      }
      v9 = ((__int64 (*)(void (****)(_QWORD), _QWORD, _QWORD, __int64))v7)(
          &v13, *(unsigned int*)(a1 + 24), *(unsigned int*)(a1 + 28), a2);
      if (v13 != nullptr) {
        (*v13)[1](v13);
      }
      if ((v9 & 1) != 0) {
        return 0;
      }
    }
    applet_library_applet_1e3100_alt1(a1 + 80);
    v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
        *(_QWORD*)(a1 + 16));
    if (v15 == 0) {
      atomic_store(1u, (unsigned __int8*)(a1 + 186));
      return 0;
    }
    goto LABEL_23;
  }
  *(_BYTE*)(a1 + 185) = 1;
  v4 = SdkData_f01330;
  if (SdkData_f01330 != nullptr) {
    v5 = *(void (****)(_QWORD))(a1 + 16);
    v14 = v5;
    if (v5 != nullptr) {
      (**v5)(v5);
      v6 = *(unsigned int*)(a1 + 28);
    }
    else {
      v6 = 7;
    }
    v10 = ((__int64 (*)(void (****)(_QWORD), _QWORD, __int64, __int64))v4)(
        &v14, *(unsigned int*)(a1 + 24), v6, a2);
    if (v14 != nullptr) {
      (*v14)[1](v14);
    }
    if ((v10 & 1) != 0) {
      return 0;
    }
  }
  applet_library_applet_1e3100_alt1(a1 + 80);
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
      *(_QWORD*)(a1 + 16));
  if (v15 == 0) {
    return 0;
  }
LABEL_24:
  v12 = nn_diag_detail_AbortImpl_plt_858db0(&v15);
  return applet_library_applet_1e3100_alt1(v12);
}

__int64 applet_library_applet_1e3100(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[6];
  _QWORD v5[8];
  _QWORD v6[8];

  if ((SdkData_f01318 & 1) == 0) {
    v1 = result;
    v2 = applet_library_applet_1e3350_alt1();
    v3 = v2;
    if (v1 != 0) {
      memset(v4, 0, sizeof(v4));
      nn_os_InitializeMultiWait_plt(v4);
      memset(v5, 0, sizeof(v5));
      nn_os_InitializeMultiWaitHolder_plt_8591f0(v5, v3);
      nn_os_LinkMultiWaitHolder_plt(v4, v5);
      memset(v6, 0, sizeof(v6));
      nn_os_InitializeMultiWaitHolder_plt_8591f0(v6, v1);
      nn_os_LinkMultiWaitHolder_plt(v4, v6);
      nn_os_WaitAny_plt(v4);
      nn_os_UnlinkMultiWaitHolder_plt(v6);
      nn_os_FinalizeMultiWaitHolder_plt(v6);
      nn_os_UnlinkMultiWaitHolder_plt(v5);
      nn_os_FinalizeMultiWaitHolder_plt(v5);
      return nn_os_FinalizeMultiWait_plt(v4);
    }
    else {
      return nn_os_WaitSystemEvent_plt(v2);
    }
  }
  return result;
}

__int64 nn_applet_StartLibraryAppletImmediately(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  void* v6;
  void (***v7)(_QWORD);
  char v8;
  __int64 result;
  int v10;
  void (***v11)(_QWORD);

  v4 = applet_library_applet_1e3350_alt1();
  if ((nn_os_TryWaitSystemEvent_plt(v4) & 1) == 0) {
    return 7811;
  }
  v5 = nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  *(_BYTE*)(a1 + 1) = 1;
  *(_QWORD*)(a1 + 8) = ++SdkData_f01a88;
  if (SdkData_f01a90 != 0 || nn_applet_1e4100_alt1(v5) != a1) {
    *(_BYTE*)(a1 + 1) = 0;
    nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
    return 7811;
  }
  SdkData_f01a90 = a1;
  *(_BYTE*)(a1 + 1) = 0;
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
  if (SdkData_f01320 != nullptr) {
    SdkData_f01320(a1);
  }
  *(_BYTE*)(a1 + 185) = 1;
  v6 = SdkData_f01330;
  if (SdkData_f01330 != nullptr) {
    v7 = *(void (****)(_QWORD))(a1 + 16);
    v11 = v7;
    if (v7 != nullptr) {
      (**v7)(v7);
    }
    v8 = ((__int64 (*)(void (****)(_QWORD), _QWORD, _QWORD, __int64))v6)(
        &v11, *(unsigned int*)(a1 + 24), *(unsigned int*)(a1 + 28), a2);
    if (v11 != nullptr) {
      (*v11)[1](v11);
    }
    if ((v8 & 1) != 0) {
      return 0;
    }
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
      *(_QWORD*)(a1 + 16));
  v10 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
    __udf(0);
  }
  return result;
}

void* applet_library_applet_1e3350()
{
  __int64 v0;
  __int64 v1;
  int v4;
  __int64 v5;

  v0 = nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  if ((SdkData_f01a98 & 1) == 0) {
    v5 = 0;
    v1 = nn_am_GetSelfController_plt(v0);
    v4 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 72LL))(v1, &v5);
    if (v4 != 0) {
      nn_diag_detail_AbortImpl_plt_858db0(&v4);
      __udf(0);
    }
    if (SdkData_f01a98 == 1 && SdkData_f01ac8 != 0) {
      nn_os_DestroySystemEvent_plt(&SdkData_f01aa0);
    }
    SdkData_f01ac8 = 0;
    SdkData_f01a98 = 1;
    nn_os_AttachReadableHandleToSystemEvent_plt(&SdkData_f01aa0,
                                                (unsigned int)v5, BYTE4(v5), 0);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
  return &SdkData_f01aa0;
}

__int64 nn_applet_JumpLibraryApplet(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  void (***v4)(_QWORD);
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  void (***v10)(_QWORD);

  applet_library_applet_1e2e20(a1);
  if (SdkData_f01320 != nullptr) {
    SdkData_f01320(a1);
  }
  *(_BYTE*)(a1 + 185) = 1;
  v2 = applet_library_applet_1e3100(a1 + 80);
  v3 = nn_am_GetProcessWindingController_plt(v2);
  v4 = *(void (****)(_QWORD))(a1 + 16);
  if (v4 != nullptr) {
    v5 = v3;
    (**v4)(v4);
    v3 = v5;
  }
  v10 = v4;
  v6 = (*(__int64 (**)(__int64, void (****)(_QWORD)))(*(_QWORD*)v3 + 88LL))(
      v3, &v10);
  v7 = (__int64)v10;
  if (v10 != nullptr) {
    v7 = ((__int64 (*)(_QWORD))(*v10)[1])(v10);
  }
  LODWORD(v10) = v6;
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v10);
  }
  else {
    v8 = nn_am_GetProcessWindingController_plt(v7);
    LODWORD(v10) = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    if ((_DWORD)v10 == 0) {
      while (1) {
        nn_os_SleepThread_plt(86400000000000LL);
      }
    }
  }
  return nn_diag_detail_AbortImpl_plt_858db0(&v10) + 32;
}

__int64 nn_applet_RequestExitLibraryAppletOrTerminate(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned int v5;
  int v7;
  _QWORD v8[5];
  __int64 v9;
  __int64 v10;

  if (a1 == nullptr) {
    return 1;
  }
  v2 = *a1;
  v10 = 0;
  LODWORD(v8[0]) = (*(__int64 (**)(__int64*, __int64*))(v2 + 40))(a1, &v10);
  if (LODWORD(v8[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v8);
    goto LABEL_16;
  }
  v9 = 0;
  memset(v8, 0, sizeof(v8));
  nn_os_AttachReadableHandleToSystemEvent_plt(v8, (unsigned int)v10, 0, 0);
  v7 = (*(__int64 (**)(__int64*))(*a1 + 64))(a1);
  if (v7 != 0) {
  LABEL_16:
    nn_diag_detail_AbortImpl_plt_858db0(&v7);
    goto LABEL_17;
  }
  if (a2 < 0 || (nn_os_TimedWaitSystemEvent_plt(v8, a2) & 1) != 0) {
    v5 = 1;
    nn_os_WaitSystemEvent_plt(v8);
    if ((_BYTE)v9 == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = (*(__int64 (**)(__int64*))(*a1 + 72))(a1);
  if (v7 != 0) {
  LABEL_17:
    nn_diag_detail_AbortImpl_plt_858db0(&v7);
    __udf(0);
  }
  v5 = 0;
  nn_os_WaitSystemEvent_plt(v8);
  if ((_BYTE)v9 != 0) {
  LABEL_7:
    nn_os_DestroySystemEvent_plt(v8);
  }
LABEL_8:
  if (BYTE4(v10) == 1) {
    nn_os_CloseNativeHandle_plt((unsigned int)v10);
    return v5;
  }
  return v5;
}

__int64 nn_applet_JoinLibraryApplet(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  int v4;

  nn_os_WaitSystemEvent_plt(a1 + 32);
  v2 = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(a1 + 184) = 1;
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 80LL))(v2);
  if (v3 == 0) {
    v4 = 0;
    goto LABEL_3;
  }
  if ((v3 & 0x3FFFFF) == 0x2C80) {
    goto LABEL_9;
  }
  if ((v3 & 0x3FFFFF) == 0x3080) {
    puts_plt("=== Detects that swkbd was cancelled by system. ===");
  LABEL_9:
    v4 = 1;
    goto LABEL_3;
  }
  v4 = 2;
  if ((v3 & 0x1FF) != 0x80 || ((v3 >> 9) & 0x1FFF) - 21 >= 9) {
    if (((v3 >> 9) & 0x1FFE) - 20 < 0x1E && (v3 & 0x1FF) == 128) {
      v4 = 2;
    }
    else {
      v4 = 10;
    }
  }
LABEL_3:
  *(_DWORD*)(a1 + 188) = v4;
  *(_BYTE*)(a1 + 185) = 0;
  if (SdkData_f01328 != nullptr) {
    SdkData_f01328(a1);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  SdkData_f01a90 = 0;
  nn_os_SdkConditionVariableType_Broadcast_plt(&SdkData_f01a80);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
}

__int64 nn_applet_StartGlobalLibraryAppletAndDetach(__int64 a1)
{
  __int64 v1;
  int v3;
  int v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    (**(void (***)(_QWORD))v1)(*(_QWORD*)(a1 + 16));
  }
  v6 = v1;
  v3 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v1 + 104LL))(v1, &v6);
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v5 = v3;
  if (v3 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v5);
    __udf(0);
  }
  if (*(_BYTE*)(a1 + 128) == 1) {
    nn_os_DestroySystemEvent_plt(a1 + 136);
  }
  nn_os_DestroySystemEvent_plt(a1 + 32);
  nn_os_DestroySystemEvent_plt(a1 + 80);
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 8LL))(*(_QWORD*)(a1 + 16));
  *(_QWORD*)(a1 + 16) = 0;
  nn_os_SdkMutexType_Lock_plt(&SdkData_f01338);
  *(_BYTE*)a1 = 0;
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f01338);
}

#pragma GCC visibility pop
