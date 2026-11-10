#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1dea80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6ef810(_QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nn_applet_CloseLibraryApplet_plt(_QWORD);
__int64 nn_applet_CreateLibraryApplet_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_hid_GetNpadJoyHoldType_plt(void);
__int64 nn_hid_GetSixAxisSensorIcInformation_plt(_QWORD, _QWORD);
__int64 nn_hid_GetSupportedNpadStyleSet_plt(_QWORD, _QWORD);
__int64 nn_hid_LoadSixAxisSensorCalibrationParameter_plt(_QWORD, _QWORD);
__int64 nn_hid_detail_CalculateVibrationFileSize_plt(_QWORD);
__int64 nn_hid_detail_GenerateVibrationFile_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD);
__int64 nn_hid_utility_GetSixAxisSensorHandleNpadIdType_plt(_QWORD);
__int64 nn_hid_utility_GetSixAxisSensorHandleSixAxisSensorIdx_plt(_QWORD);
__int64 nn_imu_FullSensorState_FullSensorState_plt(void);
__int64 nn_imu_FullSensorState_Initialize_plt(_QWORD, _QWORD);
__int64 nn_imu_FullSensorState_SetGyroscopeBiasInitialGuess_plt(_QWORD, _QWORD);
__int64 nn_imu_SixAxisSensorInformation_SixAxisSensorInformation_plt(
    _QWORD, float, float, float, float, float, float, float, float, double,
    double, double, double, double, double, double, double, double, double,
    double, double, double, double, double, double, double, double, double,
    double, double, double, double, double, double, double, double);
__int64 nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(_QWORD,
                                                                     _QWORD);
__int64 nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(_QWORD);
__int64 nn_la_CommonArgumentsWriter_PushToInChannel_plt(_QWORD, _QWORD);
__int64 nn_la_CommonArgumentsWriter_SetPlayStartupSound_plt(_QWORD, _QWORD);
__int64 nn_la_PopFromOutChannel_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_la_PushToInChannel_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_la_StartLibraryApplet_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 std___1_align_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN nn_hid_detail_g_NpadImuState;
extern __int64 SdkData_1046c50;
extern __int64 SdkData_1046cf8;
__int64 nn_hid_GetNpadImuSamples(_QWORD* a1, int a2, int a3);
__int64 nn_hid_GenerateVibrationFile(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, int* a4, __int64 a5);
bool nn_hid_6d69f0(__int64 a1, int a2, char a3);
__int64 nn_hid_ShowControllerStrapGuide_6d6bc0(void* this_, void* a2);
__int64 nn_hid_6ee900(__int64 a1, __int64* a2, __int64 a3);

__int64 nn_hid_GetNpadImuSamples(_QWORD* a1, int a2, int a3)
{
  int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  char* v18;
  int v20;

  v20 = a3;
  nn_os_SdkMutexType_Lock_plt(&nn_hid_detail_g_NpadImuState);
  if (SdkData_1046c50 == 0) {
    goto LABEL_10;
  }
  v5 = nn_hid_utility_GetSixAxisSensorHandleNpadIdType_plt(&v20);
  v6 = SdkData_1046c50;
  if (v5 == 32) {
    v7 = SdkData_1046c50 + 12960;
    v8 = &SdkData_1046cf8;
    if (a2 >= 1) {
      goto LABEL_4;
    }
  LABEL_10:
    LODWORD(v10) = 0;
    goto LABEL_11;
  }
  v17 = v5;
  v18 = (char*)&nn_hid_detail_g_NpadImuState + 8 * v5;
  if ((unsigned int)nn_hid_utility_GetSixAxisSensorHandleSixAxisSensorIdx_plt(
          &v20) == 1) {
    v7 = SdkData_1046c50 + 648LL * v17 + 6480;
    v8 = (__int64*)(v18 + 96);
    if (a2 < 1) {
      goto LABEL_10;
    }
  }
  else {
    v8 = (__int64*)(v18 + 16);
    v7 = v6 + 648LL * v17;
    if (a2 < 1) {
      goto LABEL_10;
    }
  }
LABEL_4:
  v9 = *v8;
  v10 = 0;
  while (1) {
    v11 = atomic_load((unsigned __int64*)(v7 + 640));
    if (v9 == v11) {
      break;
    }
    ++v10;
    v12 = (_QWORD*)(v7 + 40 * *v8);
    *a1 = *v12;
    v13 = v12[1];
    v14 = v12[2];
    v16 = v12[3];
    v15 = v12[4];
    a1[3] = v16;
    a1[4] = v15;
    a1[1] = v13;
    a1[2] = v14;
    a1 += 5;
    v9 = ((unsigned __int8)*(_DWORD*)v8 + 1) & 0xF;
    *v8 = v9;
    if (a2 == v10) {
      LODWORD(v10) = a2;
      break;
    }
  }
LABEL_11:
  nn_os_SdkMutexType_Unlock_plt(&nn_hid_detail_g_NpadImuState);
  return (unsigned int)v10;
}

__int64 nn_hid_GenerateVibrationFile(__int64 a1, __int64 a2,
                                     unsigned __int64 a3, int* a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 result;
  int v16;

  v10 = nn_diag_detail_NotNullImpl_plt(a2);
  if ((v10 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  v11 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v11 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  if (a3 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v12 = nn_hid_detail_CalculateVibrationFileSize_plt(a4);
  if (a3 < v12) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if (*a4 <= 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v13 = a4[3];
  if (a4[2] > v13) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if (v13 > *a4) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if (a4[4] < 0) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  v14 = nn_diag_detail_NotNullImpl_plt(a5);
  if ((v14 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v14);
  }
  result = nn_hid_detail_GenerateVibrationFile_plt(a1, a2, a3, a4, a5);
  v16 = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v16);
  }
  return result;
}

bool nn_hid_6d69f0(__int64 a1, int a2, char a3)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  int v9;
  bool v10;
  struct {
    _QWORD v12[25];
    int v13;
    int v14;
    __int64 v15;
  } v12_;
  __int64 v16;
  struct {
    _QWORD v17[2];
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
  } v17_;
  _DWORD v41[465];
  int v42;

  v17_.v39 = 0;
  v17_.v40 = 0;
  v17_.v37 = 0;
  v17_.v38 = 0;
  v17_.v35 = 0;
  v17_.v36 = 0;
  v17_.v33 = 0;
  v17_.v34 = 0;
  v17_.v31 = 0;
  v17_.v32 = 0;
  v17_.v29 = 0;
  v17_.v30 = 0;
  v17_.v27 = 0;
  v17_.v28 = 0;
  v17_.v25 = 0;
  v17_.v26 = 0;
  v17_.v23 = 0;
  v17_.v24 = 0;
  v17_.v21 = 0;
  v17_.v22 = 0;
  v17_.v19 = 0;
  v17_.v20 = 0;
  v17_.v17[1] = 0;
  v17_.v18 = 0;
  v17_.v17[0] = 0;
  v41[0] = a2;
  v6 = nn_hid_GetSixAxisSensorIcInformation_plt(v17_.v17, v41);
  if (v6 == 0) {
    v16 = *(_QWORD*)a1;
    v16 = std___1_align_plt(16, 28720, &v16, a1 + 8);
    *(_QWORD*)(a1 + 16) = v16;
    nn_imu_FullSensorState_FullSensorState_plt();
    memset(v12_.v12, 0, sizeof(v12_.v12));
    v12_.v13 = 1000593162;
    v12_.v14 = 7;
    v12_.v15 = 0x3A83126F3A83126FLL;
    ((void (*)(_QWORD*, float, float, float, float, float, float, float, float))
         nn_imu_SixAxisSensorInformation_SixAxisSensorInformation_plt)(
        v12_.v12, *(float*)v17_.v17, *((float*)&v17_.v28 + 1),
        *(float*)&v17_.v18, *((float*)&v17_.v30 + 1) * 0x1.f400000000000p+9f,
        *(float*)&v17_.v24 + -0x1.0000000000000p+0f,
        *((float*)&v17_.v36 + 1) + -0x1.0000000000000p+0f,
        *((float*)&v17_.v24 + 1), *(float*)&v17_.v37);
    v7 = *(_QWORD*)(a1 + 16);
    v12_.v13 = 1024685244;
    LOWORD(v12_.v14) = 261;
    nn_imu_FullSensorState_Initialize_plt(v7, v12_.v12);
    if ((a3 & 1) != 0) {
      if (*(_QWORD*)(a1 + 16) != 0) {
        memset_plt((void*)v41, nullptr, 1860);
        v42 = a2;
        v9 = nn_hid_LoadSixAxisSensorCalibrationParameter_plt(v41, &v42);
        v10 = v9 == 0;
        if (v9 == 0) {
          nn_imu_FullSensorState_SetGyroscopeBiasInitialGuess_plt(
              *(_QWORD*)(a1 + 16), v41);
        }
      }
      else {
        v10 = false;
      }
      *(_BYTE*)(a1 + 1336) = v10;
    }
  }
  return v6 == 0;
}

__int64 nn_hid_ShowControllerStrapGuide_6d6bc0(void* this_, void* a2)
{
  __int64 v4;
  int v5;
  int v6;
  int v7;
  struct {
    __int64 v8;
    __int64 v9;
    __int64 v10;
  } v8_;
  __int64 v11;

  v4 = 0x43000000014LL;
  v5 = 0x10000;
  v6 = nn_hid_GetSupportedNpadStyleSet_plt(this_, a2);
  v7 = nn_hid_GetNpadJoyHoldType_plt();
  v11 = 0;
  LODWORD(v8_.v8) = nn_applet_CreateLibraryApplet_plt(&v11, 16777228, 0);
  if ((_DWORD)v8_.v8 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v8_.v8);
  }
  v8_.v9 = 0;
  v8_.v10 = 0;
  v8_.v8 = 0;
  nn_la_CommonArgumentsWriter_CommonArgumentsWriter_plt_85fb00(&v8_.v8, 9);
  nn_la_CommonArgumentsWriter_SetPlayStartupSound_plt(&v8_.v8, 0);
  nn_la_CommonArgumentsWriter_PushToInChannel_plt(&v8_.v8, v11);
  nn_la_CommonArgumentsWriter_Destroy_CommonArgumentsWriter_plt(&v8_.v8);
  nn_la_PushToInChannel_plt(v11, &v4, 20);
  nn_la_PushToInChannel_plt(v11, this_, 32);
  if ((unsigned int)nn_la_StartLibraryApplet_plt(v11, 0) == 0) {
    LODWORD(v8_.v9) = 0;
    v8_.v8 = 0;
    nn_la_PopFromOutChannel_plt(v11, &v8_.v8, 12, 0);
  }
  return nn_applet_CloseLibraryApplet_plt(v11);
}

__int64 nn_hid_6ee900(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v3 = *(_QWORD*)(a1 + 32);
  v12 = 0;
  v10 = v3;
  v11 = &v12;
  SdkRoutine_6ef810(&v10, 0);
  if (v11 == nullptr) {
    v7 = 5642;
    v8 = v12;
    if (v12 == 0) {
      return v7;
    }
    goto LABEL_3;
  }
  v10 = *a2;
  v7 = SdkRoutine_1dea80(a1 + 8, &v10, a3, 0, &v12);
  v8 = v12;
  if (v12 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  return v7;
}

#pragma GCC visibility pop
