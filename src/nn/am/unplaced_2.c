#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c965c();
__int64 am_interface_accessors_1c6b2c(_QWORD);
__int64 am_interface_accessors_1c6b88(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN SdkData_efd2c0;
extern _UNKNOWN SdkData_efd2e0;
extern _UNKNOWN SdkData_efd300;
extern _UNKNOWN SdkData_efd320;
extern _UNKNOWN SdkData_efd340;
extern _UNKNOWN SdkData_efd360;
extern _UNKNOWN SdkData_efd380;
extern __int64 SdkData_efd2c8;
extern __int64 SdkData_efd2d0;
extern __int64 SdkData_efd2d8;
extern __int64 SdkData_efd2e8;
extern __int64 SdkData_efd2f0;
extern __int64 SdkData_efd2f8;
extern __int64 SdkData_efd308;
extern __int64 SdkData_efd310;
extern __int64 SdkData_efd328;
extern __int64 SdkData_efd330;
extern __int64 SdkData_efd348;
extern __int64 SdkData_efd350;
extern __int64 SdkData_efd358;
extern __int64 SdkData_efd368;
extern __int64 SdkData_efd370;
extern __int64 SdkData_efd388;
extern __int64 SdkData_efd390;
extern __int64 SdkData_efeea0;
extern __int64 nn_am_detail_g_AppletAlternativeFunctions;
extern __int64 nn_am_detail_g_AppletCommonFunctions;
extern __int64 nn_am_detail_g_AppletResourceUserId;
extern __int64 nn_am_detail_g_ApplicationCreator;
extern __int64 nn_am_detail_g_AudioController;
extern __int64 nn_am_detail_g_DebugFunctions;
extern __int64 nn_am_detail_g_DisplayController;
extern __int64 nn_am_detail_g_GlobalStateController;
extern __int64 nn_am_detail_g_HomeMenuFunctions;
extern __int64 nn_am_detail_g_LibraryAppletCreator;
extern __int64 nn_am_detail_g_SystemAppletProxy;
extern __int64 nn_am_detail_g_SystemProcessCommonFunctions;
extern int SdkData_efd2c4;
extern int SdkData_efd2e4;
extern int SdkData_efd304;
extern int SdkData_efd324;
extern int SdkData_efd344;
extern int SdkData_efd364;
extern int SdkData_efd384;
__int64 nn_am_1c6580(__int64 a1);

__int64 nn_am_1c6580(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;

  nn_os_SdkMutexType_Lock_plt(&SdkData_efd2c0);
  if (SdkData_efd2c4 != 0) {
    if (SdkData_efd2c8 == 0) {
      SdkData_efd2c8 = 0;
      SdkData_efd2d0 = 0;
    }
    ++SdkData_efd2c4;
  }
  else {
    v18 = 0;
    v19 = &v18;
    v2 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 88LL))(a1, &v19);
    if (v2 != 0) {
      v10 = v2;
      if (v18 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
      }
      nn_os_SdkMutexType_Unlock_plt(&SdkData_efd2c0);
      LODWORD(v19) = v10;
      v3 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
      goto LABEL_48;
    }
    SdkData_efd2c4 = 1;
    SdkData_efd2c8 = 0;
    SdkData_efd2d0 = 0;
    nn_am_detail_g_LibraryAppletCreator = v18;
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd2c0);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd2e0);
  if (SdkData_efd2e4 == 0) {
    v18 = 0;
    v19 = &v18;
    v3 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 32LL))(a1, &v19);
    if (v3 == 0) {
      SdkData_efd2e4 = 1;
      SdkData_efd2e8 = 0;
      SdkData_efd2f0 = 0;
      SdkData_efd2d8 = v18;
      goto LABEL_13;
    }
  LABEL_48:
    v11 = v3;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd2e0);
    LODWORD(v19) = v11;
    v4 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
    goto LABEL_51;
  }
  if (SdkData_efd2e8 == 0) {
    SdkData_efd2e8 = 0;
    SdkData_efd2f0 = 0;
  }
  ++SdkData_efd2e4;
LABEL_13:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd2e0);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd300);
  if (SdkData_efd304 == 0) {
    v18 = 0;
    v19 = &v18;
    v4 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 40LL))(a1, &v19);
    if (v4 == 0) {
      SdkData_efd304 = 1;
      SdkData_efd308 = 0;
      SdkData_efd310 = 0;
      SdkData_efd2f8 = v18;
      goto LABEL_19;
    }
  LABEL_51:
    v12 = v4;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd300);
    LODWORD(v19) = v12;
    v5 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
    goto LABEL_54;
  }
  if (SdkData_efd308 == 0) {
    SdkData_efd308 = 0;
    SdkData_efd310 = 0;
  }
  ++SdkData_efd304;
LABEL_19:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd300);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd360);
  if (SdkData_efd364 != 0) {
    if (SdkData_efd368 == 0) {
      SdkData_efd368 = (__int64)SdkRoutine_1c965c;
      SdkData_efd370 = 0;
    }
    ++SdkData_efd364;
    goto LABEL_26;
  }
  v18 = 0;
  v19 = &v18;
  v5 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 48LL))(a1, &v19);
  if (v5 != 0) {
  LABEL_54:
    v13 = v5;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd360);
    LODWORD(v19) = v13;
    v6 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
  LABEL_57:
    v14 = v6;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd320);
    LODWORD(v19) = v14;
    nn_diag_detail_AbortImpl_plt_858db0(&v19);
    goto LABEL_60;
  }
  LODWORD(v19) = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v18 + 40LL))(
      v18, &nn_am_detail_g_AppletResourceUserId);
  if ((_DWORD)v19 != 0) {
  LABEL_60:
    v7 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
    goto LABEL_61;
  }
  SdkData_efd364 = 1;
  SdkData_efd358 = v18;
  SdkData_efd368 = (__int64)SdkRoutine_1c965c;
  SdkData_efd370 = 0;
LABEL_26:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd360);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd320);
  if (SdkData_efd324 == 0) {
    v18 = 0;
    v19 = &v18;
    v6 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 56LL))(a1, &v19);
    if (v6 == 0) {
      SdkData_efd324 = 1;
      SdkData_efd328 = 0;
      SdkData_efd330 = 0;
      nn_am_detail_g_AudioController = v18;
      goto LABEL_32;
    }
    goto LABEL_57;
  }
  if (SdkData_efd328 == 0) {
    SdkData_efd328 = 0;
    SdkData_efd330 = 0;
  }
  ++SdkData_efd324;
LABEL_32:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd320);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd340);
  if (SdkData_efd344 != 0) {
    if (SdkData_efd348 == 0) {
      SdkData_efd348 = 0;
      SdkData_efd350 = 0;
    }
    ++SdkData_efd344;
    goto LABEL_38;
  }
  v18 = 0;
  v19 = &v18;
  v7 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 64LL))(a1, &v19);
  if (v7 != 0) {
  LABEL_61:
    v15 = v7;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    nn_os_SdkMutexType_Unlock_plt(&SdkData_efd340);
    LODWORD(v19) = v15;
    v8 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
    goto LABEL_64;
  }
  SdkData_efd344 = 1;
  SdkData_efd348 = 0;
  SdkData_efd350 = 0;
  nn_am_detail_g_DisplayController = v18;
LABEL_38:
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd340);
  nn_os_SdkMutexType_Lock_plt(&SdkData_efd380);
  if (SdkData_efd384 != 0) {
    if (SdkData_efd388 == 0) {
      SdkData_efd388 = 0;
      SdkData_efd390 = 0;
    }
    ++SdkData_efd384;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_efd380);
  }
  v18 = 0;
  v19 = &v18;
  v8 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)a1 + 72LL))(a1, &v19);
  if (v8 == 0) {
    SdkData_efd384 = 1;
    SdkData_efd388 = 0;
    SdkData_efd390 = 0;
    nn_am_detail_g_DebugFunctions = v18;
    return nn_os_SdkMutexType_Unlock_plt(&SdkData_efd380);
  }
LABEL_64:
  v16 = v8;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  nn_os_SdkMutexType_Unlock_plt(&SdkData_efd380);
  LODWORD(v19) = v16;
  v17 = nn_diag_detail_AbortImpl_plt_858db0(&v19);
  am_interface_accessors_1c6b2c(v17);
  am_interface_accessors_1c6b88(&nn_am_detail_g_ApplicationCreator);
  am_interface_accessors_1c6b88(&nn_am_detail_g_GlobalStateController);
  am_interface_accessors_1c6b88(&nn_am_detail_g_HomeMenuFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletAlternativeFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemProcessCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemAppletProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

#pragma GCC visibility pop
