#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6fefc0(__int64 result, unsigned __int64);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64, __int64,
                                  unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsMoving_plt(_QWORD);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
    _QWORD);
__int64 nerd_gyro_pointing_GyroPointing_GetCalibrationState_plt(_QWORD);
__int64 nerd_gyro_pointing_GyroPointing_GyroPointing_plt(void);
__int64 nerd_gyro_pointing_GyroPointing_ResetAll_plt(void* this_);
__int64 nerd_gyro_pointing_GyroPointing_SetDownsamplingTimestep_plt(_QWORD,
                                                                    float);
__int64 nerd_gyro_pointing_GyroPointing_SetProcessingTimestep_plt(_QWORD,
                                                                  float);
__int64 nerd_sensors_CalibrationState_Reset_plt(_QWORD);
__int64 nerd_sensors_ConvertAccelerationToAnotherLocation_plt(_QWORD, _QWORD,
                                                              _QWORD, _QWORD);
__int64 nn_os_ConvertToTick_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
extern void (*SdkData_e891b8[29])();
extern void (*SdkData_e891c0[28])();
void __attribute__((noreturn)) nn_codec_hwacod_32f020();
double nerd_sensors_SensorState_SensorState(__int64 a1, __int64 a2);
void nerd_sensors_SensorState_Destroy_SensorState(void* this_);
bool nerd_sensors_SensorState_IsStill(void* this_);
__int64 nerd_sensors_SensorState_StartCalibration(void* this_);
__int64 nerd_sensors_SensorState_EndCalibration(void* this_);
__int64 nerd_sensors_SensorState_GyroPointing_6fe940(__int64 this_);
__int64 nerd_sensors_SensorState_GyroPointing_6fe960(__int64 this_);
__int64 nerd_sensors_SensorState_GetCalibrationState(void* this_);
double nerd_sensors_SensorState_GetCalibrationTemp(void* this_);
double nerd_sensors_SensorState_GetCalibrationAccOnJig(void* this_);
__int64 nerd_sensors_SensorState_IsCalibrating(void* this_);
unsigned __int64
nerd_sensors_SensorState_GetSignalAnalysis(void* this_, __int64 a2, __int64 a3,
                                           unsigned __int64 a4);
float nerd_sensors_SensorState_GetUnbiasedAcceleration(void* this_);
float nerd_sensors_SensorState_GetUnbiasedAngularVelocity(void* this_);
float nerd_sensors_SensorState_GetUnbiasedAngularAcceleration(void* this_);
__int64
nerd_sensors_SensorState_GetUnbiasedAccelerationAtLocationOffset(__int64 a1,
                                                                 __int64 a2);

double nerd_sensors_SensorState_SensorState(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  double result;

  v4 = a1 + 24576;
  nerd_gyro_pointing_GyroPointing_GyroPointing_plt();
  *(_QWORD*)(a1 + 28664) = 0;
  *(_QWORD*)(a1 + 28672) = 0;
  *(_QWORD*)(a1 + 28680) = 0;
  *(_QWORD*)(a1 + 28688) = 0;
  *(_BYTE*)(v4 + 4064) = 1;
  *(_BYTE*)(a1 + 28696) = 0;
  nerd_gyro_pointing_GyroPointing_ResetAll_plt((void*)a1);
  nerd_gyro_pointing_GyroPointing_SetProcessingTimestep_plt(
      a1, *(float*)(a2 + 216));
  nerd_gyro_pointing_GyroPointing_SetDownsamplingTimestep_plt(
      a1, *(float*)(a2 + 220));
  *(_BYTE*)(v4 + 3860) = *(_BYTE*)(a2 + 225);
  *(_BYTE*)(v4 + 3848) = *(_BYTE*)(a2 + 224);
  *(_DWORD*)(v4 + 3844) = *(_DWORD*)(a2 + 200);
  result = *(double*)(a2 + 208);
  *(double*)(a1 + 28352) = result;
  return result;
}

void nerd_sensors_SensorState_Destroy_SensorState(void* this_)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  if (*((_BYTE*)this_ + 28640) == 1) {
    v1 = *((_QWORD*)this_ + 967);
    *((_QWORD*)this_ + 3530) = 0;
    *((_QWORD*)this_ + 3532) = 0;
    *((_QWORD*)this_ + 3431) = 0;
    *((_QWORD*)this_ + 3433) = 0;
    *((_QWORD*)this_ + 2976) = 0;
    *((_QWORD*)this_ + 2978) = 0;
    *((_QWORD*)this_ + 1911) = 0;
    *((_QWORD*)this_ + 1913) = 0;
    *((_QWORD*)this_ + 1878) = 0;
    *((_QWORD*)this_ + 1880) = 0;
    *((_QWORD*)this_ + 1551) = 0;
    *((_QWORD*)this_ + 1553) = 0;
    *((_QWORD*)this_ + 1001) = 0;
    if (v1 != 0) {
      if (*((_QWORD*)this_ + 579) != 0) {
        v2 = (_QWORD*)((char*)this_ + 4632);
      }
      else {
        v2 = (_QWORD*)((char*)this_ + 4632);
        do {
          v3 = v2[3];
          v2 += 3;
        } while (v3 == 0);
      }
      v4 = (_QWORD*)((char*)this_ + 24 * *((_QWORD*)this_ + 966) + 4632);
      if (*v4 == 0) {
        do {
          v5 = v4[3];
          v4 += 3;
        } while (v5 == 0);
      }
      while (v2 != v4) {
        *v2 = 0;
        do {
          v6 = v2[3];
          v2 += 3;
        } while (v6 == 0);
      }
      *((_QWORD*)this_ + 967) = 0;
    }
  }
}

bool nerd_sensors_SensorState_IsStill(void* this_)
{
  return (nerd_gyro_pointing_GyroPointingStateDetector_IsMoving_plt(
              (char*)this_ + 23832) &
          1) == 0;
}

__int64 nerd_sensors_SensorState_StartCalibration(void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = nerd_sensors_CalibrationState_Reset_plt((char*)this_ + 28648);
  v3 = nn_os_GetSystemTick_plt(v2);
  v4 = *(_QWORD*)SdkData_e891c0[0];
  v5 = nn_os_ConvertToTimeSpan_plt(v3 - *(_QWORD*)SdkData_e891b8[0]);
  result = nn_os_ConvertToTick_plt(v5 + 1000000000 * v4);
  *((_QWORD*)this_ + 3581) = result;
  *((_BYTE*)this_ + 28696) = 1;
  return result;
}

__int64 nerd_sensors_SensorState_EndCalibration(void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  *((_BYTE*)this_ + 28696) = 0;
  v2 = nn_os_GetSystemTick_plt(this_);
  v3 = *(_QWORD*)SdkData_e891c0[0];
  v4 = nn_os_ConvertToTimeSpan_plt(v2 - *(_QWORD*)SdkData_e891b8[0]);
  result = nn_os_ConvertToTick_plt(v4 + 1000000000 * v3);
  *((_QWORD*)this_ + 3582) = result;
  return result;
}

__int64 nerd_sensors_SensorState_GyroPointing_6fe940(__int64 this_)
{
  if ((*(_BYTE*)(this_ + 28640) & 1) == 0) {
    nn_codec_hwacod_32f020();
  }
  return this_;
}

__int64 nerd_sensors_SensorState_GyroPointing_6fe960(__int64 this_)
{
  if ((*(_BYTE*)(this_ + 28640) & 1) == 0) {
    nn_codec_hwacod_32f020();
  }
  return this_;
}

__int64 nerd_sensors_SensorState_GetCalibrationState(void* this_)
{
  return nerd_gyro_pointing_GyroPointing_GetCalibrationState_plt(this_);
}

double nerd_sensors_SensorState_GetCalibrationTemp(void* this_)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  double result;

  v1 = *((_QWORD*)this_ + 3583);
  if (v1 == 0) {
    return 0x0.0p+0;
  }
  *(float*)&result = *((float*)this_ + 7170) / (float)v1;
  return result;
}

double nerd_sensors_SensorState_GetCalibrationAccOnJig(void* this_)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  double result;

  v1 = *((_QWORD*)this_ + 3584);
  if (v1 == 0) {
    return 0x0.0p+0;
  }
  *(float*)&result = *((float*)this_ + 7171) / (float)v1;
  return result;
}

__int64 nerd_sensors_SensorState_IsCalibrating(void* this_)
{
  return *((unsigned __int8*)this_ + 28696);
}

unsigned __int64 nerd_sensors_SensorState_GetSignalAnalysis(void* this_,
                                                            __int64 a2,
                                                            __int64 a3,
                                                            unsigned __int64 a4)
{

#pragma clang fp contract(off)
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  bool v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _BYTE* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  unsigned __int64 v80;
  _BYTE* v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  char* v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  unsigned __int64 v98;
  char* v99;
  __int64 v100;
  char v101;
  unsigned int v102;
  struct {
    _QWORD v104[3];
    int v105;
  } v104_;
  int v106;
  struct {
    _BYTE v107[3584];
    unsigned __int64 v108;
    __int64 v109;
    __int64 v110;
  } v107_;
  struct {
    _BYTE v111[768];
    unsigned __int64 v112;
    __int64 v113;
    __int64 v114;
  } v111_;
  double v115[10];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = (char*)this_ + 23832;
  memset_plt((void*)&v106, nullptr, 4596, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v6 = *((_QWORD*)this_ + 2979);
  v7 = *((_QWORD*)this_ + 2980);
  v8 = *((_QWORD*)this_ + 3432);
  v107_.v108 = 0;
  v107_.v109 = 0;
  v107_.v110 = 0;
  v104_.v104[0] = v6;
  v104_.v104[1] = v7;
  v104_.v104[2] = *((_QWORD*)this_ + 2981);
  LODWORD(v6) = *((_DWORD*)v5 + 6);
  v9 = v107_.v107;
  v104_.v105 = v6;
  SdkRoutine_6fefc0((__int64)v107_.v107, v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v14 = *((_QWORD*)this_ + 3431);
  if (v14 == 0) {
    goto LABEL_28;
  }
  v15 = *((_QWORD*)this_ + 3433);
  v16 = *((_QWORD*)this_ + 3432);
  v17 = *((_QWORD*)this_ + 3431) & 3LL;
  if (v15 >= v14) {
    v18 = 0;
  }
  else {
    v18 = *((_QWORD*)this_ + 3432);
  }
  if (v14 < 4) {
    v19 = 0;
    if ((v14 & 3) == 0) {
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  v20 = 0;
  v19 = 0;
  v21 = (char*)this_ + 56 * v15 + 56 * v18 - 56 * v14;
  do {
    v22 = v15 - v14 + v18 + v19;
    v19 += 4;
    if (v22 >= v16) {
      v23 = v16;
    }
    else {
      v23 = 0;
    }
    v24 = &v21[v20 - 56 * v23];
    v25 = &v107_.v107[v20];
    v26 = *((_QWORD*)v24 + 2988);
    v27 = *((_QWORD*)v24 + 2984);
    v28 = *((_QWORD*)v24 + 2986);
    v25[4] = *((_QWORD*)v24 + 2987);
    v25[5] = v26;
    v29 = *((_QWORD*)v24 + 2983);
    v30 = *((_QWORD*)v24 + 2989);
    v31 = *((_QWORD*)v24 + 2985);
    *v25 = v29;
    v25[1] = v27;
    v25[2] = v31;
    v25[3] = v28;
    if (v22 + 1 >= v16) {
      v32 = v16;
    }
    else {
      v32 = 0;
    }
    v33 = &v21[v20 - 56 * v32];
    v34 = *((_QWORD*)v33 + 2990);
    v35 = *((_QWORD*)v33 + 2992);
    v25[8] = *((_QWORD*)v33 + 2991);
    v25[9] = v35;
    v36 = *((_QWORD*)v33 + 2993);
    v25[6] = v30;
    v25[7] = v34;
    v37 = *((_QWORD*)v33 + 2994);
    v38 = *((_QWORD*)v33 + 2995);
    v39 = *((_QWORD*)v33 + 2996);
    v25[12] = v38;
    v25[13] = v39;
    v40 = v22 + 2;
    v25[10] = v36;
    v25[11] = v37;
    v41 = v22 + 3;
    if (v40 >= v16) {
      v42 = v16;
    }
    else {
      v42 = 0;
    }
    v43 = v20 - 56 * v42;
    if (v41 >= v16) {
      v44 = v16;
    }
    else {
      v44 = 0;
    }
    v45 = v20 - 56 * v44;
    v20 += 224;
    v46 = &v21[v43];
    v47 = *((_QWORD*)v46 + 2998);
    v48 = *((_QWORD*)v46 + 2999);
    v49 = *((_QWORD*)v46 + 3000);
    v50 = *((_QWORD*)v46 + 3003);
    v51 = &v21[v45];
    v25[14] = *((_QWORD*)v46 + 2997);
    v25[15] = v47;
    v52 = *((_QWORD*)v46 + 3001);
    v53 = *((_QWORD*)v46 + 3002);
    v54 = *((_QWORD*)v51 + 3004);
    v25[16] = v48;
    v25[19] = v53;
    v25[20] = v50;
    v25[17] = v49;
    v25[18] = v52;
    v55 = *((_QWORD*)v51 + 3005);
    v56 = *((_QWORD*)v51 + 3006);
    v25[21] = v54;
    v13 = *((_QWORD*)v51 + 3009);
    v25[22] = v55;
    v25[23] = v56;
    v12 = *((_QWORD*)v51 + 3007);
    v57 = *((_QWORD*)v51 + 3010);
    v58 = *((_QWORD*)v51 + 3008);
    v25[26] = v13;
    v25[27] = v57;
    v25[24] = v12;
    v25[25] = v58;
  } while ((v14 & 0xFFFFFFFFFFFFFFFCLL) != v19);
  v9 = &v107_.v107[v20];
  if ((v14 & 3) != 0) {
  LABEL_23:
    v59 = v18 + v19 + v15 - v14;
    v60 = (char*)this_ + 56 * v59 + 23864;
    do {
      v61 = v59++ >= v16;
      if (v61) {
        v62 = v16;
      }
      else {
        v62 = 0;
      }
      --v17;
      v63 = &v60[-56 * v62];
      v60 += 56;
      v64 = *((_QWORD*)v63 + 5);
      v65 = *((_QWORD*)v63 + 6);
      v9[4] = *((_QWORD*)v63 + 4);
      v9[5] = v64;
      v66 = *(_QWORD*)v63;
      v67 = *((_QWORD*)v63 + 1);
      v9[6] = v65;
      *v9 = v66;
      v9[1] = v67;
      v68 = *((_QWORD*)v63 + 3);
      v9[2] = *((_QWORD*)v63 + 2);
      v9[3] = v68;
      v9 += 7;
    } while (v17 != 0);
  }
LABEL_28:
  v69 = *((_QWORD*)this_ + 3531);
  v70 = v111_.v111;
  v107_.v108 = v14;
  v111_.v112 = 0;
  v111_.v113 = 0;
  v111_.v114 = 0;
  nerd_gyro_pointing_6ff380((__int64)v111_.v111, v69, v12, v13),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v71 = *((_QWORD*)this_ + 3530);
  if (v71 == 0) {
    goto LABEL_55;
  }
  v72 = *((_QWORD*)this_ + 3532);
  v73 = *((_QWORD*)this_ + 3531);
  v74 = *((_QWORD*)this_ + 3530) & 3LL;
  if (v72 >= v71) {
    v75 = 0;
  }
  else {
    v75 = *((_QWORD*)this_ + 3531);
  }
  if (v71 < 4) {
    v76 = 0;
    if ((v71 & 3) == 0) {
      goto LABEL_55;
    }
    goto LABEL_50;
  }
  v77 = v72 - v71 + v75;
  v78 = 0;
  v76 = 0;
  v79 = (char*)this_ + 12 * (v75 + v72) - 12 * v71;
  do {
    v80 = v77 + v76;
    v81 = &v111_.v111[v78];
    v76 += 4;
    if (v80 >= v73) {
      v82 = v73;
    }
    else {
      v82 = 0;
    }
    v83 = (char*)this_ + 12 * v77 + v78 + -12 * v82 + 27472;
    v84 = *(_QWORD*)v83;
    *((_DWORD*)v81 + 2) = *((_DWORD*)v83 + 2);
    *(_QWORD*)v81 = v84;
    if (v80 + 1 >= v73) {
      v85 = v73;
    }
    else {
      v85 = 0;
    }
    v86 = &v79[v78 + 27484 + -12 * v85];
    v87 = *(_QWORD*)v86;
    *((_DWORD*)v81 + 5) = *((_DWORD*)v86 + 2);
    v88 = v80 + 2;
    *(_QWORD*)(v81 + 12) = v87;
    v89 = v80 + 3;
    if (v88 >= v73) {
      v90 = v73;
    }
    else {
      v90 = 0;
    }
    v91 = v78 - 12 * v90;
    if (v89 >= v73) {
      v92 = v73;
    }
    else {
      v92 = 0;
    }
    v93 = &v79[v91];
    v94 = &v79[v78 + 27508 + -12 * v92];
    v78 += 48;
    *((_QWORD*)v81 + 3) = *((_QWORD*)v93 + 3437);
    *((_DWORD*)v81 + 8) = *((_DWORD*)v93 + 6876);
    LODWORD(v93) = *((_DWORD*)v94 + 2);
    v95 = *(_QWORD*)v94;
    *((_DWORD*)v81 + 11) = (_DWORD)v93;
    *(_QWORD*)(v81 + 36) = v95;
  } while ((v71 & 0xFFFFFFFFFFFFFFFCLL) != v76);
  v70 = &v111_.v111[v78];
  if ((v71 & 3) != 0) {
  LABEL_50:
    v96 = v75 + v76 + v72 - v71;
    v97 = (char*)this_ + 12 * v96 + 27472;
    do {
      v61 = v96++ >= v73;
      if (v61) {
        v98 = v73;
      }
      else {
        v98 = 0;
      }
      --v74;
      v99 = &v97[-12 * v98];
      v97 += 12;
      v100 = *(_QWORD*)v99;
      LODWORD(v99) = *((_DWORD*)v99 + 2);
      *(_QWORD*)v70 = v100;
      *((_DWORD*)v70 + 2) = (_DWORD)v99;
      v70 += 12;
    } while (v74 != 0);
  }
LABEL_55:
  v111_.v112 = v71;
  memcpy_plt(v115, (char*)this_ + 28264, 192),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v101 = nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
      v104_.v104),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(float*)&v102 = v115[9];
  return v101 & 1 | ((unsigned __int64)v102 << 32);
}

float nerd_sensors_SensorState_GetUnbiasedAcceleration(void* this_)
{

#pragma clang fp contract(off)
  return *((float*)this_ + 7118);
}

float nerd_sensors_SensorState_GetUnbiasedAngularVelocity(void* this_)
{

#pragma clang fp contract(off)
  return *((float*)this_ + 7121);
}

float nerd_sensors_SensorState_GetUnbiasedAngularAcceleration(void* this_)
{

#pragma clang fp contract(off)
  float result;

  result = 0x0.0p+0f;
  if ((*((_QWORD*)this_ + 3563) & 0x100000000LL) != 0) {
    return *((float*)this_ + 7124);
  }
  return result;
}

__int64

nerd_sensors_SensorState_GetUnbiasedAccelerationAtLocationOffset(__int64 a1,
                                                                 __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  _DWORD v9[3];
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;

  v2 = *(_DWORD*)(a1 + 28480);
  v12 = *(_QWORD*)(a1 + 28472);
  v3 = *(_QWORD*)(a1 + 28484);
  v13 = v2;
  v4 = *(_DWORD*)(a1 + 28492);
  v5 = *(_QWORD*)(a1 + 28504);
  v10 = v3;
  v11 = v4;
  if ((v5 & 0x100000000LL) != 0) {
    v7 = *(_DWORD*)(a1 + 28496);
    v6 = *(_DWORD*)(a1 + 28500);
  }
  else {
    LODWORD(v5) = 0;
    v6 = 0;
    v7 = 0;
  }
  v9[0] = v7;
  v9[1] = v6;
  v9[2] = v5;
  return nerd_sensors_ConvertAccelerationToAnotherLocation_plt(&v10, v9, &v12,
                                                               a2);
}

#pragma GCC visibility pop
