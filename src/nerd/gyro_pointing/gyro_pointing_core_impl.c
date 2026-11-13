#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_717820(_QWORD*, __int64*);
__attribute__((swiftcall)) void SdkRoutine_70ace0(PSEUDO_X8, __int64, _QWORD*);
__attribute__((swiftcall)) void SdkRoutine_70b0c0(PSEUDO_X8, float*, float,
                                                  float, float);
__attribute__((swiftcall)) void SdkRoutine_719ca0(PSEUDO_X8, _QWORD*, __int64*);
__attribute__((swiftcall)) void SdkRoutine_7202e0(PSEUDO_X8, __int64, __int64*,
                                                  __int64*, unsigned __int64);
__attribute__((swiftcall)) void SdkRoutine_720480(PSEUDO_X8, __int64*, float*);
__attribute__((swiftcall)) void SdkRoutine_722d40(PSEUDO_X8, float*);
__attribute__((swiftcall)) void SdkRoutine_728730(PSEUDO_X8, float*);
__attribute__((swiftcall)) void SdkRoutine_879f80(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_879f90(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_879fa0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a1e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
fw_math_MapStateIndices21(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void
fw_math_MapStateIndices9(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void kalman_transition_70e160(PSEUDO_X8, float*);
__attribute__((swiftcall)) void kalman_transition_70ed80(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void kalman_transition_70f080(PSEUDO_X8, float*,
                                                         float, float, float);
__attribute__((swiftcall)) void kalman_transition_70f680(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void kalman_transition_70f9d0(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8, _QWORD*, __int64*);
__attribute__((swiftcall)) void math_7241f0(PSEUDO_X8, float*, float*);
__attribute__((swiftcall)) void math_724480(PSEUDO_X8, float*);
__attribute__((swiftcall)) void math_724870(PSEUDO_X8, float*);
__int64 SdkRoutine_711380(__int64*);
__int64 SdkRoutine_879cb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879f50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 SdkRoutine_87a000(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a050(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 SdkRoutine_87a1f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64
    fw_math_LookupStateIndex_alt1(_QWORD,
                                  _QWORD) __asm__("fw_math_LookupStateIndex");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64
    nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
        _QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_Recover_plt(_QWORD, _QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance_plt(_QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation_plt(
    _QWORD, float, float, float, float);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_AddRelativeRotationVariable_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_AddUnbiasedGyrVariable_plt(
    _QWORD, _QWORD, _QWORD);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances_plt(_QWORD,
                                                                       float);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt(_QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_PushParameterState_plt(_QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveRelativeRotationVariable_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveUnbiasedGyrVariable_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_ResetVelocityAndParameters_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates_plt(_QWORD);
__n128
    nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate_plt(_QWORD,
                                                                        _QWORD);
extern void (*SdkData_e891a8[31])();
float SdkRoutine_712760(float*, float*, long double, double, double,
                        long double);
float atan2f_plt(float, float);
float cosf_plt(float);
float nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate_plt(_QWORD,
                                                                       float,
                                                                       float,
                                                                       float);
float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(
    void);
float sinf_plt(float);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
void __attribute__((noreturn)) nn_codec_hwacod_32f020();
void nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate(__int64 a1,
                                                               __int64 a2);
__int64
nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration(
    __int64 this_);
__int64 nerd_gyro_pointing_GyroPointingCore_Update(__int64 this_);
float nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate(
    __int64 a1, float* a2);
void nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation(
    float* a1, float a2, float a3, float a4, float a5);
__int64 nerd_gyro_pointing_GyroPointingCore_Recover(void* this_, char a2);
float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated(
    void* this_);
__int64 nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate(__int64 a1,
                                                                     float a2,
                                                                     float a3,
                                                                     float a4);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_GetStateStd(PSEUDO_X8 x8_, void* this_);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_GetStateUniqueStd(PSEUDO_X8 x8_,
                                                      void* this_);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_StoreParameters(PSEUDO_X8 x8_, void* this_,
                                                    __int64 unused_int1,
                                                    __int64 unused_int2,
                                                    unsigned __int64 a2);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance(void* this_);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeading(__int64 result,
                                                         long double a2,
                                                         double a3, double a4,
                                                         long double a5);

void nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  float v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  float v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  char v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  __int64 v183;
  int v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  struct {
    __int64 v187;
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    char gap112_[88];
    float v192;
    float v193;
  } v187_;

  v2 = a1 + 12288;
  v3 = *(_QWORD*)a2;
  if ((*(_BYTE*)(a1 + 12392) & 1) == 0) {
    *(_BYTE*)(a1 + 12392) = 1;
  }
  *(_QWORD*)(a1 + 12384) = v3;
  v6 = *(_QWORD*)(a2 + 40);
  v7 = *(_BYTE*)(a2 + 48);
  v187_.v189 = *(_QWORD*)(a2 + 32);
  v187_.v190 = v6;
  v8 = *(_QWORD*)a2;
  v9 = *(_QWORD*)(a2 + 8);
  LOBYTE(v187_.v191) = v7;
  v10 = *(_QWORD*)(a1 + 14984);
  v185 = v8;
  v186 = v9;
  v11 = *(_QWORD*)(a2 + 24);
  v187_.v187 = *(_QWORD*)(a2 + 16);
  v187_.v188 = v11;
  v12 = *(_DWORD*)(a2 + 56);
  v13 = *(_QWORD*)(a1 + 14976);
  if (v13 == v10) {
    *(_QWORD*)(a1 + 14976) = v13 - 1;
  }
  v14 = a1 + 12416 + (*(_QWORD*)(a1 + 14992) << 6);
  v15 = v185;
  v16 = v186;
  *(_DWORD*)(v14 + 56) = v12;
  *(_QWORD*)v14 = v15;
  *(_QWORD*)(v14 + 8) = v16;
  v17 = v187_.v191;
  *(_QWORD*)(v14 + 40) = v187_.v190;
  *(_QWORD*)(v14 + 48) = v17;
  *(_QWORD*)(v14 + 32) = v187_.v189;
  v18 = v187_.v188;
  *(_QWORD*)(v14 + 16) = v187_.v187;
  *(_QWORD*)(v14 + 24) = v18;
  v19 = *(_QWORD*)(a1 + 14992);
  v20 = *(_QWORD*)(a1 + 14984);
  v21 = *(_QWORD*)(a1 + 14976) + 1LL;
  *(_QWORD*)(a1 + 14976) = v21;
  if (v19 + 1 == v20) {
    v22 = 0;
  }
  else {
    v22 = v19 + 1;
  }
  *(_QWORD*)(a1 + 14992) = v22;
  if ((*(_BYTE*)(a1 + 15000) & 1) == 0) {
    if (v21 != v20) {
      return;
    }
    nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
        a1);
    v23 = *(float*)(a1 + 8224);
    v24 = *(float*)(a1 + 15292);
    v25 = *(float*)(a1 + 8228);
    v26 = *(float*)(a1 + 15296);
    v27 = *(float*)(a1 + 8232);
    v28 = *(float*)(a1 + 15300);
    v29 = *(float*)(a1 + 8236);
    v30 = *(float*)(a1 + 15304);
    *(_BYTE*)(v2 + 2712) = 1;
    *(float*)(a1 + 12412) =
        -(float)((float)((float)((float)((float)(v23 * v24) + 0x0.0p+0f) +
                                 (float)(v25 * v26)) +
                         (float)(v27 * v28)) -
                 (float)(v29 * v30));
    *(float*)(a1 + 12400) =
        (float)((float)(PSEUDO_UNFUSED(v23 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v24))) +
        (float)((float)(v25 * v28) - (float)(PSEUDO_UNFUSED(v26 * v27)));
    *(float*)(a1 + 12404) =
        (float)((float)(PSEUDO_UNFUSED(v25 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v26))) +
        (float)((float)(v27 * v24) - (float)(PSEUDO_UNFUSED(v28 * v23)));
    *(float*)(a1 + 12408) =
        (float)((float)(v23 * v26) - (float)(PSEUDO_UNFUSED(v24 * v25))) +
        (float)((float)(PSEUDO_UNFUSED(v27 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v28)));
    v31 = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15424) = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15008) = v31;
  }
  v32 = a1 + 15016;
  v33 = *(_QWORD*)(a1 + 15240);
  if (v33 == 0) {
    goto LABEL_20;
  }
  v34 = *(float*)(a1 + 15264);
  v35 = *(_QWORD*)(a1 + 15256);
  v36 = *(_QWORD*)(a1 + 15248);
  if (v34 >= (float)((float)(__int64)(*(_QWORD*)a2 - *(_QWORD*)(a1 + 15008)) /
                     0x1.dcd6500000000p+29f)) {
    v34 = (float)(__int64)(*(_QWORD*)a2 - *(_QWORD*)(a1 + 15008)) /
          0x1.dcd6500000000p+29f;
  }
  if (v33 <= v35) {
    v37 = 0;
  }
  else {
    v37 = *(_QWORD*)(a1 + 15248);
  }
  v38 = v35 + v37 - 1;
  v39 = v34 / (float)v36;
  if (v38 < v36) {
    v36 = 0;
  }
  if ((float)((float)(__int64)(*(_QWORD*)a2 -
                               *(_QWORD*)(v32 + 56 * (v38 - v36))) /
              0x1.dcd6500000000p+29f) >= v39) {
  LABEL_20:
    if ((unsigned int)
            nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt(
                a1 + 200) == 0) {
      v40 = *(_QWORD*)(a1 + 8440);
      v41 = *(_QWORD*)a2;
      v183 = *(_QWORD*)(a1 + 8416);
      v184 = *(_DWORD*)(a1 + 8424);
      v185 = *(_QWORD*)(a1 + 8432);
      v186 = v40;
      v187_.v187 = *(_QWORD*)(a1 + 8448);
      v185 = *fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584),
                                       (__int64*)&v185);
      v186 = *fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584),
                                       (__int64*)&v186);
      v42 =
          fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584), &v187_.v187);
      v43 = *(_DWORD*)(a1 + 216 + 136 * v185);
      v44 = *(_DWORD*)(a1 + 216 + 4 * (33 * v185 + *v42));
      v45 = *(_DWORD*)(a1 + 216 + 4 * (33 * v185 + v186));
      v46 = *(_DWORD*)(a1 + 216 + 4 * (33 * v186 + *v42));
      v47 = 33 * *v42;
      v48 = *(_DWORD*)(a1 + 216 + 4 * (33 * v186 + v185));
      v49 = *(_DWORD*)(a1 + 216 + 136 * v186);
      v50 = *(_DWORD*)(a1 + 216 + 136 * *v42);
      v51 = *(_QWORD*)(a1 + 15240);
      v52 = *(_DWORD*)(a1 + 216 + 4 * (v185 + v47));
      v53 = *(_DWORD*)(a1 + 216 + 4 * (v186 + v47));
      if (v51 == *(_QWORD*)(a1 + 15248)) {
        *(_QWORD*)(a1 + 15240) = v51 - 1;
      }
      v54 = v32 + 56LL * *(_QWORD*)(a1 + 15256);
      *(_DWORD*)(v54 + 20) = v43;
      *(_DWORD*)(v54 + 24) = v45;
      *(_DWORD*)(v54 + 28) = v44;
      *(_DWORD*)(v54 + 32) = v48;
      *(_DWORD*)(v54 + 36) = v49;
      *(_DWORD*)(v54 + 40) = v46;
      *(_DWORD*)(v54 + 44) = v52;
      *(_DWORD*)(v54 + 48) = v53;
      *(_DWORD*)(v54 + 52) = v50;
      *(_DWORD*)(v54 + 16) = v184;
      *(_QWORD*)v54 = v41;
      *(_QWORD*)(v54 + 8) = v183;
      v55 = *(_QWORD*)(a1 + 15248);
      ++*(_QWORD*)(a1 + 15240);
      v56 = *(_QWORD*)(a1 + 15256);
      if (v56 + 1 == v55) {
        v57 = 0;
      }
      else {
        v57 = v56 + 1;
      }
      *(_QWORD*)(a1 + 15256) = v57;
    }
  }
  v58 = *(float*)(a2 + 60);
  v59 = *(float*)(a2 + 64);
  v60 = *(float*)(a2 + 68);
  v61 = *(float*)(a1 + 15292);
  v62 = *(float*)(a1 + 15296);
  v63 = v61 * v61;
  v178 = *(float*)(a2 + 76);
  v179 = *(float*)(a2 + 72);
  v177 = *(float*)(a2 + 80);
  v64 = *(float*)(a1 + 15300);
  v65 = v62 * v62;
  v66 = v64 * v64;
  v67 = v61 * v62;
  v68 = v62 * v64;
  v69 = v61 * v64;
  *(float*)(a1 + 15276) = *(float*)(a2 + 56) + *(float*)(a1 + 15276);
  v70 = *(float*)(a2 + 56);
  v71 = v70 - *(float*)(a2 + 40);
  v72 = v71 * 0x1.921fb60000000p+2f;
  if (*(_BYTE*)(a2 + 48) != 0) {
    v71 = *(float*)(a2 + 56);
  }
  v73 = *(float*)(a1 + 15304);
  v74 = (float)(PSEUDO_UNFUSED(v73 * v73)) + v63;
  v75 = (float)((float)(v71 * 0x1.f400000000000p+9f) / 0x1.9000000000000p+6f) *
        (float)((float)(v71 * 0x1.f400000000000p+9f) / 0x1.9000000000000p+6f);
  v76 = (float)(v74 + v65) + v66;
  v77 = (float)((float)(v74 - v65) - v66) / v76;
  v78 = (float)(PSEUDO_UNFUSED(v73 * v73)) - v63;
  v79 = (float)((float)(v78 + v65) - v66) / v76;
  v80 = (float)((float)(v78 - v65) + v66) / v76;
  v182 = v77;
  v187_.v192 = v79;
  v187_.v193 = v80;
  v81 = (float)((float)((float)(PSEUDO_UNFUSED(v73 * v62)) + v69) +
                (float)((float)(PSEUDO_UNFUSED(v73 * v62)) + v69)) /
        v76;
  v82 = (float)((float)(v67 + (float)(PSEUDO_UNFUSED(v73 * v64))) +
                (float)(v67 + (float)(PSEUDO_UNFUSED(v73 * v64)))) /
        v76;
  v83 = *(float*)(a2 + 8);
  v180 = (float)((float)(v69 - (float)(PSEUDO_UNFUSED(v73 * v62))) +
                 (float)(v69 - (float)(PSEUDO_UNFUSED(v73 * v62)))) /
         v76;
  v181 = (float)((float)(v68 - (float)(PSEUDO_UNFUSED(v73 * v61))) +
                 (float)(v68 - (float)(PSEUDO_UNFUSED(v73 * v61)))) /
         v76;
  v84 = v70 * *(float*)(a2 + 12);
  v85 = v70 * *(float*)(a2 + 16);
  v86 = (float)(v63 + v65) + v66;
  v175 = (float)((float)((float)(PSEUDO_UNFUSED(v73 * v61)) + v68) +
                 (float)((float)(PSEUDO_UNFUSED(v73 * v61)) + v68)) /
         v76;
  v176 = (float)((float)(v67 - (float)(PSEUDO_UNFUSED(v73 * v64))) +
                 (float)(v67 - (float)(PSEUDO_UNFUSED(v73 * v64)))) /
         v76;
  v87 = (float)((float)((float)(PSEUDO_UNFUSED(v61 * (float)(v70 * v83))) +
                        0x0.0p+0f) +
                (float)(PSEUDO_UNFUSED(v62 * v84))) +
        (float)(PSEUDO_UNFUSED(v64 * v85));
  v88 =
      0x1.0000000000000p+1f / (float)((float)(PSEUDO_UNFUSED(v73 * v73)) + v86);
  *(float*)(a1 + 15280) =
      *(float*)(a1 + 15280) +
      (float)((float)(PSEUDO_UNFUSED(v70 * v83)) +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 *
                              (float)((float)(PSEUDO_UNFUSED(v62 * v85)) -
                                      (float)(PSEUDO_UNFUSED(v64 * v84))))) +
                          (float)((float)(PSEUDO_UNFUSED(v61 * v87)) -
                                  (float)(PSEUDO_UNFUSED(
                                      v86 * (float)(v70 * v83))))))));
  *(float*)(a1 + 15284) =
      *(float*)(a1 + 15284) +
      (float)(v84 +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 *
                              (float)((float)(PSEUDO_UNFUSED(
                                          v64 * (float)(v70 * v83))) -
                                      (float)(PSEUDO_UNFUSED(v61 * v85))))) +
                          (float)((float)(PSEUDO_UNFUSED(v62 * v87)) -
                                  (float)(PSEUDO_UNFUSED(v86 * v84)))))));
  *(float*)(a1 + 15288) =
      *(float*)(a1 + 15288) +
      (float)(v85 +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 * (float)((float)(PSEUDO_UNFUSED(v61 * v84)) -
                                            (float)(PSEUDO_UNFUSED(
                                                v62 * (float)(v70 * v83)))))) +
                          (float)((float)(PSEUDO_UNFUSED(v64 * v87)) -
                                  (float)(PSEUDO_UNFUSED(v86 * v85)))))));
  v89 = *(float*)(a2 + 56) * *(float*)(a2 + 56);
  v90 = v58 * v89;
  v91 = v59 * v89;
  v92 = v60 * v89;
  v93 = v77 * v90;
  v94 = v176 * v91;
  v95 = v81 * v92;
  v96 = v82 * v90;
  v97 = v79 * v91;
  v98 = v181 * v92;
  v99 = v180 * v90;
  v100 = v175 * v91;
  v101 = v80 * v92;
  v102 = (float)(PSEUDO_UNFUSED(v81 * v95)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v94)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v93)) + 0x0.0p+0f));
  v103 = v82 * v93;
  v104 = (float)(PSEUDO_UNFUSED(v80 * v95)) +
         (float)((float)(PSEUDO_UNFUSED(v175 * v94)) +
                 (float)((float)(PSEUDO_UNFUSED(v180 * v93)) + 0x0.0p+0f));
  v105 =
      (float)(PSEUDO_UNFUSED(v181 * v95)) +
      (float)((float)(PSEUDO_UNFUSED(v79 * v94)) + (float)(v103 + 0x0.0p+0f));
  v106 = (float)(PSEUDO_UNFUSED(v81 * v98)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v97)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v96)) + 0x0.0p+0f));
  v107 = v82 * v96;
  v108 = (float)(PSEUDO_UNFUSED(v80 * v98)) +
         (float)((float)(PSEUDO_UNFUSED(v175 * v97)) +
                 (float)((float)(PSEUDO_UNFUSED(v180 * v96)) + 0x0.0p+0f));
  v109 =
      (float)(PSEUDO_UNFUSED(v181 * v98)) +
      (float)((float)(PSEUDO_UNFUSED(v79 * v97)) + (float)(v107 + 0x0.0p+0f));
  v110 = v79 * v100;
  v111 = (float)(PSEUDO_UNFUSED(v81 * v101)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v100)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v99)) + 0x0.0p+0f));
  v112 = v82 * v99;
  v113 = (float)(PSEUDO_UNFUSED(v175 * v100)) +
         (float)((float)(PSEUDO_UNFUSED(v180 * v99)) + 0x0.0p+0f);
  v114 = v80 * v101;
  v115 = v110 + (float)(v112 + 0x0.0p+0f);
  v116 = v181 * v101;
  v117 = v75 + v102;
  v118 = v72 * v72;
  v119 = v114 + v113;
  v120 = v75 + v109;
  v121 = v75 + v119;
  v122 = *(float*)(a1 + 15308) + v117;
  v123 = *(float*)(a1 + 8456);
  *(float*)(a1 + 15308) = v122;
  *(float*)(a1 + 15312) = *(float*)(a1 + 15312) + v105;
  *(float*)(a1 + 15316) = *(float*)(a1 + 15316) + v104;
  *(float*)(a1 + 15320) = v106 + *(float*)(a1 + 15320);
  v124 = v120 + *(float*)(a1 + 15324);
  v125 = *(float*)(a1 + 15416);
  *(float*)(a1 + 15324) = v124;
  *(float*)(a1 + 15328) = v108 + *(float*)(a1 + 15328);
  *(float*)(a1 + 15332) = v111 + *(float*)(a1 + 15332);
  *(float*)(a1 + 15336) = (float)(v116 + v115) + *(float*)(a1 + 15336);
  v126 = *(float*)(a1 + 15412);
  *(float*)(a1 + 15340) = v121 + *(float*)(a1 + 15340);
  v127 = *(float*)(a2 + 20) - *(float*)(a1 + 15408);
  v128 = *(float*)(a2 + 24) - v126;
  v129 = *(float*)(a2 + 28) - v125;
  v130 = (float)((float)((float)(PSEUDO_UNFUSED(v123 * v127)) + 0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8460) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8464) * v129));
  v131 = (float)((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 8468) * v127)) +
                         0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8472) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8476) * v129));
  v132 = (float)((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 8480) * v127)) +
                         0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8484) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8488) * v129));
  v133 = *(float*)(a2 + 56);
  v134 = v133 * v130;
  v135 = v133 * v131;
  v136 = v133 * v132;
  v137 = sqrtf((float)((float)(PSEUDO_UNFUSED(v136 * v136)) +
                       (float)((float)(PSEUDO_UNFUSED(v134 * v134)) +
                               (float)(PSEUDO_UNFUSED(v135 * v135)))) +
               0x1.0000000000000p-126f) *
         0x1.0000000000000p-1f;
  if ((float)(v137 * v137) <= 0x1.47ae140000000p-5f) {
    v138 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v137 *
                                                                                        v137) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v137 *
                                                                        v137)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v137 * v137)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v137 * v137)) +
                        -0x1.5555560000000p-3f) *
                (float)(v137 * v137)) +
        0x1.0000000000000p+0f;
  }
  else {
    v138 = sinf_plt(v137) / v137;
  }
  v139 = v138 * 0x1.0000000000000p-1f;
  v140 = cosf_plt(v137);
  v141 = *(float*)(a1 + 15292);
  v142 = *(float*)(a1 + 15296);
  v143 = *(float*)(a1 + 15300);
  v144 = *(float*)(a1 + 15304);
  v145 = *(_BYTE*)(v2 + 3092);
  v147 = v187_.v192;
  v146 = v187_.v193;
  *(float*)(a1 + 15304) =
      -(float)((float)((float)((float)((float)(v141 * (float)(v134 * v139)) +
                                       0x0.0p+0f) +
                               (float)(v142 * (float)(v135 * v139))) +
                       (float)(v143 * (float)(v136 * v139))) -
               (float)(v144 * v140));
  *(float*)(a1 + 15292) =
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v134 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v141))) +
      (float)((float)(v142 * (float)(v136 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v135 * v139) * v143)));
  *(float*)(a1 + 15296) =
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v135 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v142))) +
      (float)((float)(v143 * (float)(v134 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v136 * v139) * v141)));
  *(float*)(a1 + 15300) =
      (float)((float)(v141 * (float)(v135 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v134 * v139) * v142))) +
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v136 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v143)));
  v148 = *(float*)(a2 + 56) * *(float*)(a2 + 56);
  v149 = v179 * v148;
  v150 = v178 * v148;
  v151 = v177 * v148;
  v152 = v182 * v149;
  v153 = v176 * v150;
  v154 = v81 * v151;
  v155 = v82 * v149;
  v156 = v147 * v150;
  v157 = v181 * v151;
  v158 = v180 * v149;
  v159 = v175 * v150;
  v160 = v146 * v151;
  *(float*)(a1 + 15344) =
      *(float*)(a1 + 15344) +
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v81 * v154)) +
                      (float)((float)(PSEUDO_UNFUSED(v176 * v153)) +
                              (float)((float)(PSEUDO_UNFUSED(v182 * v152)) +
                                      0x0.0p+0f))));
  *(float*)(a1 + 15348) =
      *(float*)(a1 + 15348) +
      (float)((float)(PSEUDO_UNFUSED(v181 * v154)) +
              (float)((float)(PSEUDO_UNFUSED(v147 * v153)) +
                      (float)((float)(PSEUDO_UNFUSED(v82 * v152)) +
                              0x0.0p+0f)));
  *(float*)(a1 + 15352) =
      *(float*)(a1 + 15352) +
      (float)((float)(PSEUDO_UNFUSED(v146 * v154)) +
              (float)((float)(PSEUDO_UNFUSED(v175 * v153)) +
                      (float)((float)(PSEUDO_UNFUSED(v180 * v152)) +
                              0x0.0p+0f)));
  *(float*)(a1 + 15356) =
      (float)((float)(PSEUDO_UNFUSED(v81 * v157)) +
              (float)((float)(PSEUDO_UNFUSED(v176 * v156)) +
                      (float)((float)(PSEUDO_UNFUSED(v182 * v155)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15356);
  *(float*)(a1 + 15360) =
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v181 * v157)) +
                      (float)((float)(PSEUDO_UNFUSED(v147 * v156)) +
                              (float)((float)(PSEUDO_UNFUSED(v82 * v155)) +
                                      0x0.0p+0f)))) +
      *(float*)(a1 + 15360);
  *(float*)(a1 + 15364) =
      (float)((float)(PSEUDO_UNFUSED(v146 * v157)) +
              (float)((float)(PSEUDO_UNFUSED(v175 * v156)) +
                      (float)((float)(PSEUDO_UNFUSED(v180 * v155)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15364);
  *(float*)(a1 + 15368) =
      (float)((float)(PSEUDO_UNFUSED(v81 * v160)) +
              (float)((float)(PSEUDO_UNFUSED(v176 * v159)) +
                      (float)((float)(PSEUDO_UNFUSED(v182 * v158)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15368);
  *(float*)(a1 + 15372) =
      (float)((float)(PSEUDO_UNFUSED(v181 * v160)) +
              (float)((float)(PSEUDO_UNFUSED(v147 * v159)) +
                      (float)((float)(PSEUDO_UNFUSED(v82 * v158)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15372);
  *(float*)(a1 + 15376) =
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v146 * v160)) +
                      (float)((float)(PSEUDO_UNFUSED(v175 * v159)) +
                              (float)((float)(PSEUDO_UNFUSED(v180 * v158)) +
                                      0x0.0p+0f)))) +
      *(float*)(a1 + 15376);
  *(_BYTE*)(v2 + 3092) = (v145 | *(_BYTE*)(a2 + 48)) & 1;
  if (*(_BYTE*)(a2 + 36) == 1) {
    *(float*)(a1 + 15388) = *(float*)(a2 + 56) + *(float*)(a1 + 15388);
    if ((*(_BYTE*)(a2 + 36) & 1) == 0) {
      nn_codec_hwacod_32f020();
    }
    *(float*)(a1 + 15384) =
        (float)(PSEUDO_UNFUSED(*(float*)(a2 + 32) * *(float*)(a2 + 56))) +
        *(float*)(a1 + 15384);
  }
  if (*(_BYTE*)(v2 + 3264) == 1) {
    *(_QWORD*)(a1 + 15440) = *(_QWORD*)a2;
    v161 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 15456) = *(_DWORD*)(a2 + 16);
    *(_QWORD*)(a1 + 15448) = v161;
    LODWORD(v161) = *(_DWORD*)(a2 + 28);
    *(_QWORD*)(a1 + 15460) = *(_QWORD*)(a2 + 20);
    *(_DWORD*)(a1 + 15468) = v161;
    v162 = *(_QWORD*)(a2 + 32);
    v163 = *(_QWORD*)(a2 + 40);
    *(_BYTE*)(a1 + 15488) = *(_BYTE*)(a2 + 48);
    *(_QWORD*)(a1 + 15480) = v163;
    *(_QWORD*)(a1 + 15472) = v162;
    *(_DWORD*)(a1 + 15496) = *(_DWORD*)(a2 + 56);
    LODWORD(v161) = *(_DWORD*)(a2 + 68);
    *(_QWORD*)(a1 + 15500) = *(_QWORD*)(a2 + 60);
    *(_DWORD*)(a1 + 15508) = v161;
    v164 = *(_QWORD*)(a2 + 72);
    *(_DWORD*)(a1 + 15520) = *(_DWORD*)(a2 + 80);
    *(_QWORD*)(a1 + 15512) = v164;
    *(_QWORD*)(v2 + 3236) = *(_QWORD*)(a2 + 84);
    LODWORD(v164) = *(_DWORD*)(a2 + 100);
    *(_QWORD*)(a1 + 15532) = *(_QWORD*)(a2 + 92);
    *(_DWORD*)(a1 + 15540) = v164;
    *(_DWORD*)(a1 + 15544) = *(_DWORD*)(a2 + 104);
  }
  else {
    v165 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a1 + 15440) = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15448) = v165;
    v166 = *(_QWORD*)(a2 + 16);
    v167 = *(_QWORD*)(a2 + 24);
    v168 = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(a1 + 15472) = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(a1 + 15480) = v168;
    *(_QWORD*)(a1 + 15456) = v166;
    *(_QWORD*)(a1 + 15464) = v167;
    v169 = *(_QWORD*)(a2 + 48);
    v170 = *(_QWORD*)(a2 + 56);
    v171 = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(a1 + 15504) = *(_QWORD*)(a2 + 64);
    *(_QWORD*)(a1 + 15512) = v171;
    *(_QWORD*)(a1 + 15488) = v169;
    *(_QWORD*)(a1 + 15496) = v170;
    v172 = *(_QWORD*)(a2 + 80);
    v173 = *(_QWORD*)(a2 + 88);
    v174 = *(_QWORD*)(a2 + 104);
    *(_QWORD*)(a1 + 15536) = *(_QWORD*)(a2 + 96);
    *(_QWORD*)(a1 + 15544) = v174;
    *(_QWORD*)(a1 + 15520) = v172;
    *(_QWORD*)(a1 + 15528) = v173;
    *(_BYTE*)(v2 + 3264) = 1;
  }
}

__int64

nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration(
    __int64 this_)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  double v13;
  double v14;
  long double v15;
  float v16;
  float v17;
  long double v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  float* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  _BYTE v36[12];
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  float v44[3];

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
  v1 = *(_QWORD*)(this_ + 14976);
  if (v1 != 0) {
    v2 = 0x1.0000000000000p-1f;
    v3 = 0x0.0p+0f;
    v4 = 0x0.0p+0f;
    v5 = 0x0.0p+0f;
    v6 = this_;
    v7 = this_ + 12416;
    v8 = 0;
    do {
      v19 = *(_QWORD*)(v6 + 14976);
      v20 = *(_QWORD*)(v6 + 14992);
      v21 = *(_QWORD*)(v6 + 14984);
      if (v19 <= v20) {
        v22 = 0;
      }
      else {
        v22 = *(_QWORD*)(v6 + 14984);
      }
      v23 = v22 + v20;
      if (v8 + v23 - v19 < v21) {
        v21 = 0;
      }
      v24 = (float*)(v7 + ((v8 + v23 - v21 - v19) << 6));
      v25 = v24[14];
      v26 = v25 * v24[5];
      v27 = v25 * v24[6];
      v28 = v25 * v24[7];
      v29 = sqrtf((float)((float)((float)(PSEUDO_UNFUSED(v26 * v26)) +
                                  (float)(PSEUDO_UNFUSED(v27 * v27))) +
                          (float)(PSEUDO_UNFUSED(v28 * v28))) +
                  0x1.0000000000000p-126f) *
            v2;
      if ((float)(v29 * v29) > 0x1.47ae140000000p-5f) {
        v9 = sinf_plt(v29) / v29,
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
      }
      else {
        v9 =
            (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v29 *
                                                                                            v29) *
                                                                                    -0x1.ae64560000000p-26f) +
                                                                            0x1.71de3a0000000p-19f) *
                                                                    (float)(v29 *
                                                                            v29)) +
                                                            -0x1.a01a020000000p-13f) *
                                                    (float)(v29 * v29)) +
                                            0x1.1111120000000p-7f) *
                                    (float)(v29 * v29)) +
                            -0x1.5555560000000p-3f) *
                    (float)(v29 * v29)) +
            0x1.0000000000000p+0f;
      }
      v10 = v9 * 0x1.0000000000000p-1f;
      *(float*)&v15 = cosf_plt(v29),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
      ++v8;
      v2 = 0x1.0000000000000p-1f;
      v11 = (float)(PSEUDO_UNFUSED((float)(v28 * v10) * (float)(v28 * v10))) +
            (float)((float)(PSEUDO_UNFUSED((float)(v26 * v10) *
                                           (float)(v26 * v10))) +
                    (float)(PSEUDO_UNFUSED((float)(v27 * v10) *
                                           (float)(v27 * v10))));
      v12 = (float)((float)((float)((float)(v26 * v10) * v3) + 0x0.0p+0f) +
                    (float)((float)(v27 * v10) * v4)) +
            (float)((float)(v28 * v10) * v5);
      *(float*)&v18 = *(float*)&v15 *
                      (float)((float)((float)(v28 * v10) * v3) -
                              (float)(PSEUDO_UNFUSED(v5 * (float)(v26 * v10))));
      *(float*)&v14 =
          (float)((float)(PSEUDO_UNFUSED((float)(v26 * v10) * v12)) -
                  (float)(PSEUDO_UNFUSED(v3 * v11))) -
          (float)(PSEUDO_UNFUSED(
              *(float*)&v15 *
              (float)((float)((float)(v27 * v10) * v5) -
                      (float)(PSEUDO_UNFUSED(v4 * (float)(v28 * v10))))));
      *(float*)&v13 =
          (float)((float)(PSEUDO_UNFUSED((float)(v28 * v10) * v12)) -
                  (float)(PSEUDO_UNFUSED(v5 * v11))) -
          (float)(PSEUDO_UNFUSED(
              *(float*)&v15 *
              (float)((float)((float)(v26 * v10) * v4) -
                      (float)(PSEUDO_UNFUSED(v3 * (float)(v27 * v10))))));
      *(float*)&v15 =
          0x1.0000000000000p+1f /
          (float)((float)(PSEUDO_UNFUSED(*(float*)&v15 * *(float*)&v15)) + v11);
      *(float*)&v14 = *(float*)&v15 * *(float*)&v14;
      *(float*)&v18 =
          *(float*)&v15 *
          (float)((float)((float)(PSEUDO_UNFUSED((float)(v27 * v10) * v12)) -
                          (float)(PSEUDO_UNFUSED(v4 * v11))) -
                  *(float*)&v18);
      *(float*)&v15 = *(float*)&v15 * *(float*)&v13;
      *(float*)&v13 = v3 + *(float*)&v14;
      *(float*)&v14 = v4 + *(float*)&v18;
      *(float*)&v18 = v24[14];
      *(float*)&v15 = v5 + *(float*)&v15;
      v16 = *(float*)&v18 * v24[2];
      v17 = *(float*)&v18 * v24[3];
      *(float*)&v18 = *(float*)&v18 * v24[4];
      v3 = v16 + *(float*)&v13;
      v4 = *(float*)&v14 + v17;
      v5 = *(float*)&v15 + *(float*)&v18;
    } while (v1 != v8);
    v44[0] = v16 + *(float*)&v13;
    v44[1] = *(float*)&v14 + v17;
    v44[2] = *(float*)&v15 + *(float*)&v18;
    *(_QWORD*)v36 = 0;
    *(_DWORD*)&v36[8] = 1065353216;
    *(float*)(v6 + 8224) =
        SdkRoutine_712760(v44, (float*)v36, v15, v13, v14, v18),
                   v30 = COERCE_AS(__typeof__(v30),
                                   PSEUDO_REGISTER(float, "s1", "=w")),
                   v31 = COERCE_AS(__typeof__(v31),
                                   PSEUDO_REGISTER(float, "s2", "=w")),
                   v32 = COERCE_AS(__typeof__(v32),
                                   PSEUDO_REGISTER(float, "s3", "=w"));
    *(_DWORD*)(v6 + 8228) = v30;
    *(_DWORD*)(v6 + 8232) = v31;
    *(_DWORD*)(v6 + 8236) = v32;
    v33 = *(_DWORD*)((char*)SdkData_e891a8[0] +
                     (unsigned __int64)((__int64*)0xCLL));
    v34 = *(_DWORD*)((char*)SdkData_e891a8[0] +
                     (unsigned __int64)((__int64*)0xCLL) + 4);
    v43 = 0;
    v42 = 0;
    *(_QWORD*)&v36[4] = 0;
    v37 = 0;
    v39 = 0;
    v40 = 0;
    *(_DWORD*)v36 = v33;
    v35 =
        *(_DWORD*)((char*)SdkData_e891a8[0] + (unsigned __int64)((int*)0x14LL));
    v38 = v34;
    v41 = v35;
    return SdkRoutine_879f50(v6 + 200, &v43, &v42, v6 + 8240, v36);
  }
  return this_;
}

__int64 nerd_gyro_pointing_GyroPointingCore_Update(__int64 this_)
{
  __int64 v1;
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  bool v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  char v54;
  __int64* v56;
  __int64* v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _BYTE* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  float v84;
  float* v85;
  float v86;
  float v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  float v96;
  __int64* v97;
  __int64 v98;
  float v99;
  __int64* v100;
  float v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  float v105;
  __int64* v106;
  __int64* v107;
  __int64 v108;
  float v109;
  __int64* v110;
  __int64* v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  float v116;
  bool v117;
  char v118;
  float v119;
  __int64 v120;
  __int64 v121;
  float v122;
  float v123;
  float v124;
  float v125;
  char v126;
  float v127;
  __int64* v128;
  __int64 v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  char v136;
  float v137;
  __int64* v138;
  __int64 v139;
  float v140;
  float v141;
  float v142;
  __int64 v143;
  char v144;
  __int64 v145;
  float v146;
  char v147;
  __int64 v148;
  __int64 v149;
  float v150;
  float v151;
  __int64 v152;
  __int64 v153;
  char v154;
  float v155;
  char v156;
  float v157;
  __int64 v158;
  __int64 v159;
  float v160;
  float v161;
  __int64 v162;
  __int64 v163;
  char v164;
  float v165;
  char v166;
  float v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  bool v176;
  float v177;
  char v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  float v182;
  float v183;
  float v184;
  bool v185;
  char v186;
  float v187;
  char v188;
  __int64 v189;
  __int64 v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;
  bool v197;
  char v198;
  float v199;
  char v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  float v205;
  __int64* v206;
  __int64 v207;
  __int64 v208;
  float v209;
  float v210;
  __int64* v211;
  __int64 v212;
  __int64 v213;
  float v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  float v218;
  __int64 v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float v226;
  float v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  float v233;
  int v234;
  _DWORD* v235;
  int v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int64 v240;
  __int64 v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  __int64* v259;
  __int64 v260;
  unsigned __int64 v261;
  __int64* v262;
  __int64 v263;
  bool v264;
  __int64* v265;
  unsigned __int64* v266;
  float* v267;
  unsigned __int64 v268;
  __int64 v269;
  float v270;
  float* v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  float v277;
  float v278;
  float v279;
  float v280;
  float v281;
  float v282;
  float v283;
  float v284;
  float v285;
  float v286;
  float v287;
  float v288;
  float v289;
  float v290;
  float v291;
  float v292;
  float v293;
  float v294;
  float v295;
  float v296;
  float v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  float v301;
  float v302;
  float v303;
  __int64* v304;
  __int64 v305;
  __int64* v306;
  __int64 v307;
  __int64* v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64* v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  unsigned __int64 v316;
  float* v317;
  __int64 v318;
  float v319;
  float* v320;
  float v321;
  float v322;
  float v323;
  float v324;
  float v325;
  float v326;
  float v327;
  unsigned __int64 v328;
  char* v329;
  __int64 v330;
  char* v331;
  __int64 v332;
  __int64 v333;
  unsigned __int64 v334;
  float* v335;
  __int64 v336;
  float v337;
  float* v338;
  float v339;
  float v340;
  float v341;
  float v342;
  float v343;
  float v344;
  float v345;
  unsigned __int64 v346;
  char* v347;
  __int64 v348;
  char* v349;
  unsigned __int64 v350;
  float* v351;
  __int64 v352;
  float v353;
  float* v354;
  float v355;
  float v356;
  float v357;
  float v358;
  float v359;
  float v360;
  float v361;
  float v362;
  float v363;
  float v364;
  float v365;
  float v366;
  float v367;
  char v369;
  unsigned __int64 v370;
  float v371;
  __int64 v372;
  __int64 v373;
  float v374;
  float v375;
  float v376;
  float v377;
  unsigned __int64 v379;
  unsigned __int64 v380;
  __int64 v381;
  __int64 v382;
  _BYTE* v383;
  __int64* v384;
  char* v385;
  char* v386;
  __int64 v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  char* v391;
  __int64 v392;
  char* v393;
  __int64 v394;
  __int64* v395;
  _BYTE* v396;
  __int64 v397;
  char* v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  unsigned __int64 v403;
  unsigned __int64 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64* v411;
  __int64 v412;
  __int64 v413;
  __int64* v414;
  __int64 v415;
  __int64 v416;
  float v417;
  float v418;
  float v419;
  float v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  float v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  float v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  int v432;
  int v433;
  int v434;
  float v435;
  unsigned int v436;
  unsigned int v437;
  unsigned __int64 v438;
  __int64 v439;
  __int64 v440;
  unsigned __int64 v441;
  __int64* v442;
  __int64 v443;
  __int64* v444;
  __int64 v445;
  __int64 v446;
  unsigned __int64 v447;
  float* v448;
  __int64 v449;
  float v450;
  float* v451;
  float v452;
  float v453;
  float v454;
  float v455;
  unsigned __int64 v456;
  char* v457;
  __int64 v458;
  char* v459;
  __int64 v460;
  __int64 v461;
  unsigned __int64 v462;
  float* v463;
  __int64 v464;
  float v465;
  float* v466;
  float v467;
  float v468;
  float v469;
  float v470;
  unsigned __int64 v471;
  char* v472;
  __int64 v473;
  char* v474;
  unsigned __int64 v475;
  float* v476;
  __int64 v477;
  float v478;
  float* v479;
  float v480;
  float v481;
  float v482;
  float v483;
  __int64 v484;
  __int64 v485;
  __int64 v486;
  __int64 v487;
  float v488;
  __int64 v489;
  __int64 v490;
  float v491;
  float v492;
  __int64 v493;
  __int64 v494;
  float v495;
  float v496;
  __int64 v497;
  float v498;
  float v499;
  float v500;
  __int64 v501;
  float v502;
  float v503;
  float v504;
  float v505;
  __int64 v506;
  float v507;
  float v508;
  float v509;
  float v510;
  __int64 v511;
  float v512;
  unsigned int v513;
  float v514;
  float v515;
  float v516;
  float v517;
  float v518;
  __int64 v519;
  __int64 v520;
  float v521;
  unsigned int v522;
  float v523;
  float v524;
  float v525;
  float v526;
  float v527;
  float v528;
  float v529;
  float v530;
  float v531;
  float v532;
  float v533;
  float v534;
  float v535;
  float v536;
  float v537;
  float v538;
  float v539;
  float v540;
  float v541;
  float v542;
  float v543;
  float v544;
  float v545;
  float v546;
  float v547;
  float v548;
  float v549;
  float v550;
  __int64 v551;
  float v552;
  float v553;
  float v554;
  float v555;
  __int64 v556;
  float v557;
  float v558;
  float v559;
  float v560;
  float v561;
  float v562;
  float v563;
  float v564;
  float v565;
  float v566;
  float v567;
  float v568;
  float v569;
  float v570;
  float v571;
  float v572;
  float v573;
  float v574;
  float v575;
  float v576;
  float v577;
  float v578;
  float v579;
  float v580;
  float v581;
  float v582;
  float v583;
  float v584;
  float v585;
  float v586;
  float v587;
  float v588;
  float v589;
  float v590;
  float v591;
  float v592;
  float v593;
  float v594;
  float v595;
  float v596;
  float v597;
  float v598;
  float v599;
  float v600;
  float v601;
  float v602;
  float v603;
  float v604;
  float v605;
  float v606;
  float v607;
  float v608;
  float v609;
  float v610;
  float v611;
  float v612;
  float v613;
  float v614;
  float v615;
  float v616;
  float v617;
  float v618;
  float v619;
  float v620;
  float v621;
  float v622;
  float v623;
  float v624;
  float v625;
  float v626;
  float v627;
  float v628;
  float v629;
  float v630;
  float v631;
  float v632;
  float v633;
  float v634;
  float v635;
  float v636;
  float v637;
  float v638;
  float v639;
  float v640;
  float v641;
  float v642;
  float v643;
  float v644;
  float v645;
  float v646;
  float v647;
  float v648;
  float v649;
  float v650;
  float v651;
  float v652;
  float v653;
  float v654;
  float v655;
  float v656;
  float v657;
  float v658;
  float v659;
  float v660;
  float v661;
  float v662;
  float v663;
  float v664;
  float v665;
  float v666;
  float v667;
  float v668;
  float v669;
  float v670;
  float v671;
  float v672;
  float v673;
  float v674;
  float v675;
  float v676;
  float v677;
  float v678;
  __int64 v679;
  float v680;
  float v681;
  float v682;
  float v683;
  float v687;
  __int64 v688;
  __int64 v689;
  unsigned __int64* v690;
  __int64 v691;
  _DWORD* v692;
  int v693;
  int v694;
  int v695;
  int v696;
  int v697;
  _BYTE* v698;
  int* v699;
  _DWORD* v700;
  int v701;
  float v702;
  float v703;
  float v704;
  __int64 v705;
  float v706;
  float v707;
  float v708;
  float v709;
  float v710;
  float v711;
  float v712;
  float v713;
  float v714;
  unsigned __int64 v715;
  float v716;
  float v717;
  float v718;
  float v719;
  float v720;
  float v721;
  float v722;
  float v723;
  float v724;
  float v725;
  float v726;
  float v727;
  float v728;
  float v729;
  __int64* v730;
  float v731;
  float v732;
  __int64 v733;
  float v734;
  char v735;
  float v736;
  __int64 v737;
  __int64 v738;
  float v739;
  float v740;
  float v741;
  float v742;
  float v743;
  float v744;
  float v745;
  float v746;
  float v747;
  float v748;
  float v749;
  float v750;
  float v751;
  __int64 v752;
  float v753;
  float v754;
  float v755;
  float v756;
  float v757;
  float v758;
  float v759;
  float v760;
  unsigned int v761;
  float v762;
  float v763;
  float v764;
  float v765;
  float v766;
  unsigned int v767;
  __int64 v768;
  float v769;
  float v770;
  float v771;
  float v772;
  float v773;
  float v774;
  __int64* v775;
  float v776;
  float v777;
  float v778;
  float v779;
  __int64 v780;
  float v781;
  float v782;
  float v783;
  float v784;
  __int64 v785;
  float v786;
  float v787;
  float v788;
  float v789;
  float v790;
  float v791;
  float v792;
  float v793;
  float v794;
  float v795;
  float v796;
  float v797;
  float v798;
  float v799;
  float v800;
  float v801;
  float v802;
  float v803;
  float v804;
  float v805;
  float v806;
  float v807;
  float v808;
  float v809;
  float v810;
  float v811;
  unsigned int v812;
  float v813;
  float v814;
  float v815;
  float v816;
  float v817;
  float v818[2];
  __int64 v819;
  float v820;
  __int64 v821;
  int v822;
  float v823;
  __int64 v824;
  int v825;
  float v826[9];
  struct {
    __int64 v827;
    __int64 v828;
    __int64 v829;
    __int64 v830;
    float v831;
  } v827_;
  _QWORD v832[3];
  struct {
    unsigned __int64 v833;
    unsigned __int64 v834;
    __int64 v835;
    __int64 v836;
    __int64 v837;
    float v838;
    int v839;
    __int64 v840;
    __int64 v841;
    float v842;
    int v843;
  } v833_;
  struct {
    unsigned __int64 v844;
    unsigned __int64 v845;
  } v844_;
  struct {
    unsigned __int64 v846;
    __int64 v847;
    __int64 v848;
    __int64 v849;
    __int64 v850;
    __int64 v851;
    __int64 v852;
  } v846_;
  __int64 v853;
  __int64 v854;
  __int64 v855;
  __int64* v856;
  __int64 v857;
  __int64 v858;
  __int64* v859;
  __int64 v860;
  __int64 v861;
  __int64 v862;
  __int64 v863;
  unsigned int v864;
  __int64 v865;
  __int64 v866;
  unsigned int v867;
  __int64 v868;
  __int64 v869;
  unsigned int v870;
  __int64 v871;
  __int64 v872;
  unsigned int v873;
  __int64 v874;
  __int64 v875;
  unsigned int v876;
  __int64 v877;
  __int64 v878;
  unsigned int v879;
  __int64 v880[2];
  __int64 v881;
  __int128 v882;
  __int64 v883;
  __int64 v884;
  __int64 v885;
  __int64 v886;
  __int64 v887;
  __int64 v888;
  __int64 v889;
  __int64 v890;
  __int64 v891;
  __int64 v892;
  __int64 v893;
  __int64 v894;
  __int64 v895;
  __int64 v896;
  __int64 v897;
  __int64 v898;
  __int64 v899;
  __int64 v900;
  __int64 v901;
  __int64 v902;
  __int64 v903;
  __int64 v904;
  __int64 v905;
  __int64 v906;
  __int64 v907;
  __int64 v908;
  __int64 v909;
  __int64 v910;
  __int64 v911;
  __int64 v912;
  __int64 v913;
  __int64 v914;
  __int64 v915;
  __int64 v916;
  __int64 v917;
  _BYTE v918[184];
  __int64* v919;
  unsigned __int64 v920;
  __int64 v921;
  __int64 v922;
  __int64 v923;
  __int64 v924;
  __int64 v925;
  __int64 v926;
  __int64 v927;
  __int64 v928;
  __int64 v929;
  __int64 v930;
  __int64 v931;
  __int64 v932;
  __int64 v933;
  __int64 v934;
  __int64 v935;
  __int64 v936;
  __int64 v937;
  __int64 v938;
  __int64 v939;
  __int64* v940;
  __int64 v941;
  __int64 v942;
  __int64* v943;
  __int64 v944;
  __int64 v945;
  __int64* v946;
  __int64 v947;
  __int64 v948;
  __int64 v949;
  __int64 v950;
  __int64 v951;
  __int64 v952;
  __int64 v953;
  __int64 v954;
  __int64 v955;
  __int64 v956;
  __int64 v957;
  __int64 v958;
  __int64 v959;
  __int64 v960;
  __int64 v961;
  __int64* v962;
  __int64 v963;
  __int64 v964;
  __int64* v965;
  __int64 v966;
  __int64 v967;
  __int64* v968;
  __int64 v969;
  __int64 v970;
  __int64 v971;
  __int64 v972;
  __int64 v973;
  __int64 v974;
  __int64 v975;
  __int64 v976;
  __int64 v977;
  __int64 v978;
  __int64 v979;
  __int64 v980;
  __int64 v981;
  __int64 v982;
  __int64 v983;
  __int64 v984;
  __int64 v985;
  __int64 v986;
  __int64 v987;
  float v988;
  __int16 v989;
  __int64 v990;
  float v991;
  __int16 v992;
  __int64 v993;
  float v994;
  __int16 v995;
  __int64 v996;
  float v997;
  __int16 v998;
  __int64 v999;
  int v1000;
  __int16 v1001;
  __int64 v1002;
  int v1003;
  __int16 v1004;
  __int64 v1005;
  int v1006;
  __int16 v1007;
  __int64 v1008;
  __int16 v1009;
  __int64 v1010;
  __int16 v1011;
  __int64 v1012;
  __int16 v1013;
  __int64 v1014;
  __int16 v1015;
  unsigned __int64 v1016;
  __int16 v1017;
  unsigned __int64 v1018;
  __int16 v1019;
  unsigned __int64 v1020;
  __int64 v1021;
  _QWORD v1022[4];
  int v1023;
  _QWORD v1024[10];
  __int64 v1025;
  __int64 v1026;
  __int64 v1027;
  __int64 v1028;
  __int64 v1029[2];
  _QWORD v1030[6];
  __int64 v1031;
  __int64 v1032;
  __int64 v1033;
  __int64 v1034;
  __int64 v1035;
  __int64 v1036;
  __int64 v1037;
  __int64 v1038;
  __int64 v1039;
  __int64 v1040;
  __int64 v1041;
  __int64 v1042;
  __int64 v1043;
  __int64 v1044;
  __int64 v1045;
  __int64 v1046;
  __int64 v1047;
  __int64 v1048;
  __int64 v1049;

  v1 = this_ + 12288;
  if (*(_BYTE*)(this_ + 15552) == 1) {
    v2 = *(_QWORD*)(this_ + 15520);
    v3 = *(float*)(this_ + 15408);
    v4 = *(_QWORD*)(this_ + 15528);
    v5 = this_;
    v6 = *(float*)(this_ + 15284);
    v7 = *(float*)(this_ + 15280);
    *(_BYTE*)(this_ + 15552) = 0;
    v988 = 0x0.0p+0f;
    v987 = 0;
    v986 = 0;
    v985 = 0;
    v984 = 0;
    v1025 = v2;
    v8 = *(_QWORD*)(this_ + 15536);
    v1026 = v4;
    v9 = *(_QWORD*)(this_ + 15544);
    v815 = v3;
    v10 = *(float*)(this_ + 15412);
    v1027 = v8;
    v11 = *(_QWORD*)(this_ + 15488);
    v1028 = v9;
    v12 = *(_QWORD*)(this_ + 15496);
    v813 = v10;
    v13 = *(float*)(this_ + 15416);
    v1024[6] = v11;
    v14 = *(_QWORD*)(this_ + 15504);
    v1024[7] = v12;
    v15 = *(_QWORD*)(this_ + 15512);
    v805 = v13;
    v16 = *(float*)(this_ + 15276);
    v1024[8] = v14;
    v17 = *(_QWORD*)(this_ + 15456);
    v1024[9] = v15;
    v1024[2] = v17;
    v817 = v16;
    v18 = *(float*)(this_ + 15288);
    v1024[3] = *(_QWORD*)(this_ + 15464);
    v741 = v18;
    v744 = v6;
    v1024[4] = *(_QWORD*)(this_ + 15472);
    v1024[5] = *(_QWORD*)(this_ + 15480);
    v1024[0] = *(_QWORD*)(this_ + 15440);
    v1024[1] = *(_QWORD*)(this_ + 15448);
    v1022[1] = *(_QWORD*)(this_ + 8464);
    v1022[2] = *(_QWORD*)(this_ + 8472);
    v1022[3] = *(_QWORD*)(this_ + 8480);
    v1023 = *(_DWORD*)(this_ + 8488);
    v1022[0] = *(_QWORD*)(this_ + 8456);
    if ((SdkRoutine_879cb0(v1022, 3, &v984, 3, 3) & 1) == 0) {
      v1023 = 0;
      memset(v1022, 0, sizeof(v1022));
    }
    v19 = *(float*)(v5 + 15304);
    v20 = v984;
    v21 = *(float*)&v985;
    v22 = *(float*)&v986;
    v23 = *(float*)(v5 + 15292);
    v24 = *(float*)(v5 + 15296);
    v25 = *(float*)(v5 + 15300);
    v747 = v7;
    v809 = *((float*)&v985 + 1);
    v801 = *((float*)&v986 + 1);
    v26 = v987;
    v794 = v988;
    if (v19 < 0x0.0p+0f) {
      v23 = -v23;
      v24 = -v24;
      v25 = -v25;
      v19 = -v19;
    }
    v27 = sqrtf((float)((float)(PSEUDO_UNFUSED(v25 * v25)) +
                        (float)((float)(PSEUDO_UNFUSED(v24 * v24)) +
                                (float)(PSEUDO_UNFUSED(v23 * v23)))) +
                0x1.0000000000000p-126f);
    v28 = atan2f_plt(v27, v19);
    v29 = v28 + v28;
    v30 = v29 * (float)(v23 / v27);
    v31 = v29 * (float)(v24 / v27);
    v32 = v29 * (float)(v25 / v27);
    v33 = 0x0.0p+0f;
    v34 = *(float*)(v5 + 15276);
    v35 =
        (float)((float)((float)(v809 * v30) + 0x0.0p+0f) + (float)(v22 * v31)) +
        (float)(v801 * v32);
    v36 = (float)((float)((float)(*(float*)&v26 * v30) + 0x0.0p+0f) +
                  (float)(*((float*)&v26 + 1) * v31)) +
          (float)(v794 * v32);
    v37 = (float)((float)((float)((float)(*(float*)&v20 * v30) + 0x0.0p+0f) +
                          (float)(*((float*)&v20 + 1) * v31)) +
                  (float)(v21 * v32)) /
          v34;
    v38 = v35 / v34;
    v39 = *(float*)(v5 + 15388);
    if (v39 > 0x0.0p+0f) {
      v33 = *(float*)(v5 + 15384) / v39;
    }
    v40 = *(float*)(v5 + 15308);
    v41 = v39 <= 0x0.0p+0f;
    v42 = *(float*)(v5 + 15356);
    v43 = *(float*)(v5 + 15376);
    *(_DWORD*)(v5 + 15300) = 0;
    *(_QWORD*)(v5 + 15284) = 0;
    *(_QWORD*)(v5 + 15292) = 0;
    *(_QWORD*)(v5 + 15276) = 0;
    *(_QWORD*)(v5 + 15384) = 0;
    *(_DWORD*)(v5 + 15304) = 1065353216;
    v797 = v40;
    v795 = *(float*)(v5 + 15312);
    v791 = *(float*)(v5 + 15316);
    v44 = *(float*)(v5 + 15320);
    *(_QWORD*)(v5 + 15308) = 0;
    *(_QWORD*)(v5 + 15316) = 0;
    v788 = v44;
    v786 = *(float*)(v5 + 15324);
    v784 = *(float*)(v5 + 15328);
    v782 = *(float*)(v5 + 15332);
    v45 = *(float*)(v5 + 15336);
    *(_QWORD*)(v5 + 15324) = 0;
    *(_QWORD*)(v5 + 15332) = 0;
    v781 = v45;
    v779 = *(float*)(v5 + 15340);
    v46 = v815 + v37;
    v47 = v813 + v38;
    v774 = v42;
    v776 = *(float*)(v5 + 15344);
    v48 = *(float*)(v5 + 15360);
    v49 = v805 + (float)(v36 / v34);
    v50 = *(float*)(v5 + 15348);
    v51 = *(float*)(v5 + 15352);
    *(_QWORD*)(v5 + 15340) = 0;
    *(_QWORD*)(v5 + 15348) = 0;
    v777 = v48;
    v770 = v51;
    v772 = v50;
    v799 = *(float*)(v5 + 15364);
    v52 = *(float*)(v5 + 15368);
    *(_QWORD*)(v5 + 15356) = 0;
    *(_QWORD*)(v5 + 15364) = 0;
    v802 = v52;
    v53 = *(float*)(v5 + 15372);
    *(_QWORD*)(v5 + 15372) = 0;
    *(_BYTE*)(v5 + 15380) = 0;
    v806 = v53;
    if (!v41) {
      v54 = *(_BYTE*)(v1 + 3108);
      *(float*)(v5 + 15400) = v33;
      *(_BYTE*)(v1 + 3116) = 1;
      if ((v54 & 1) == 0) {
        *(float*)(v5 + 15392) = v33;
        *(_BYTE*)(v1 + 3108) = 1;
      }
    }
    nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate_plt(v5,
                                                                        v1024);
    nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation_plt(
        v5, v46, v47, v49, v817);
    memset_plt((void*)&v984, nullptr, 4096);
    v56 = *(__int64**)(v5 + 8200);
    v980 = 0;
    v958 = 0;
    v957 = 0;
    v956 = 0;
    v955 = 0;
    v982 = 6;
    v983 = 9;
    v960 = 6;
    v961 = 9;
    v954 = 0;
    v953 = 0;
    v952 = 0;
    v951 = 0;
    v949 = 0;
    v950 = 0;
    v1021 = 0;
    v962 = v56;
    v963 = *(_QWORD*)(v5 + 8208);
    v964 = *(_QWORD*)(v5 + 8216);
    v965 = *(__int64**)(v5 + 8240);
    v966 = *(_QWORD*)(v5 + 8248);
    v967 = *(_QWORD*)(v5 + 8256);
    v968 = *(__int64**)(v5 + 8280);
    v969 = *(_QWORD*)(v5 + 8288);
    v970 = *(_QWORD*)(v5 + 8296);
    v971 = *(_QWORD*)(v5 + 8344);
    v972 = *(_QWORD*)(v5 + 8352);
    v973 = *(_QWORD*)(v5 + 8360);
    v974 = *(_QWORD*)(v5 + 8368);
    v975 = *(_QWORD*)(v5 + 8376);
    v976 = *(_QWORD*)(v5 + 8384);
    v977 = *(_QWORD*)(v5 + 8392);
    v978 = *(_QWORD*)(v5 + 8400);
    v979 = *(_QWORD*)(v5 + 8408);
    v981 = 3;
    v959 = 3;
    memset_plt((void*)&v917, nullptr, 504);
    SdkRoutine_879f80((void*)(v1029), &v984, &v949);
    v58 = &v984 + 2 * v1021;
    *((_WORD*)v58 + 2) = 0;
    v58[1] = 0;
    v59 = v1021++;
    v60 = &v984 + 2 * v1021;
    *((_WORD*)v60 + 2) = 0;
    v60[1] = 0;
    v61 = v1021++;
    v62 = &v984 + 2 * v1021;
    *((_WORD*)v62 + 2) = 0;
    v62[1] = 0;
    v63 = v1021++;
    memcpy_plt(&v917, v1029, 432);
    v940 = &v984;
    v941 = v59;
    v64 = &v918[24 * v958 - 8];
    v942 = 0;
    v943 = &v984;
    v944 = v61;
    v945 = 0;
    v946 = &v984;
    v947 = v63;
    v948 = 0;
    v65 = *(_QWORD*)v64;
    v67 = *((_QWORD*)v64 + 3);
    v66 = *((_QWORD*)v64 + 4);
    v69 = *((_QWORD*)v64 + 6);
    v68 = *((_QWORD*)v64 + 7);
    v762 = *((float*)v64 + 10);
    v765 = *((float*)v64 + 4);
    v756 = *(float*)(v5 + 8184);
    v759 = *((float*)v64 + 16);
    if (*(_QWORD*)v64 != 0) {
      v70 = v65 + 16LL * *(_QWORD*)(v65 + 4096);
      *(_WORD*)(v70 + 4) = (unsigned __int8)*((_QWORD*)v64 + 1);
      *(_QWORD*)(v70 + 8) = 1065353216;
      v733 = *(_QWORD*)(v65 + 4096);
      *(_QWORD*)(v65 + 4096) = v733 + 1;
      v754 = *(float*)(v5 + 8188);
      if (v67 != 0) {
      LABEL_13:
        v71 = v67 + 16LL * *(_QWORD*)(v67 + 4096);
        *(_BYTE*)(v71 + 4) = v66;
        *(_BYTE*)(v71 + 5) = 0;
        *(_QWORD*)(v71 + 8) = 1065353216;
        v72 = *(_QWORD*)(v67 + 4096);
        *(_QWORD*)(v67 + 4096) = v72 + 1;
        goto LABEL_16;
      }
    }
    else {
      LOBYTE(v733) = -1;
      v754 = *(float*)(v5 + 8188);
      if (v67 != 0) {
        goto LABEL_13;
      }
    }
    LOBYTE(v72) = -1;
  LABEL_16:
    v810 = v47;
    v768 = v69;
    v752 = v67;
    v735 = v72;
    v750 = *(float*)(v5 + 0x2000);
    if (v69 != 0) {
      v73 = v69 + 16LL * *(_QWORD*)(v69 + 4096);
      *(_BYTE*)(v73 + 4) = v68;
      *(_BYTE*)(v73 + 5) = 0;
      *(_QWORD*)(v73 + 8) = 1065353216;
      v737 = *(_QWORD*)(v69 + 4096);
      *(_QWORD*)(v69 + 4096) = v737 + 1;
    }
    else {
      LOBYTE(v737) = -1;
    }
    v916 = 0;
    v915 = 0;
    v74 = &v918[24 * v959 - 8];
    v914 = 0;
    v913 = 0;
    v912 = 0;
    v911 = 0;
    v910 = 0;
    v909 = 0;
    v908 = 0;
    v907 = 0;
    v75 = *(_QWORD*)v74;
    v76 = *((_QWORD*)v74 + 1);
    v77 = *((unsigned int*)v74 + 4);
    v78 = *((_QWORD*)v74 + 3);
    v79 = *((_QWORD*)v74 + 4);
    v80 = *((unsigned int*)v74 + 10);
    v81 = *((_QWORD*)v74 + 6);
    v82 = *((_QWORD*)v74 + 7);
    v83 = *((unsigned int*)v74 + 16);
    v906 = 0;
    v905 = 0;
    v886 = v83;
    v880[0] = v75;
    v880[1] = v76;
    v881 = v77;
    *(_QWORD*)&v882 = v78;
    *((_QWORD*)&v882 + 1) = v79;
    v883 = v80;
    v884 = v81;
    v885 = v82;
    kalman_transition_70e160((void*)((float*)v1029), (float*)v880);
    SdkRoutine_720480((void*)((float*)&v905), v1029, (float*)(v5 + 8224));
    v84 = *(float*)(v5 + 8264);
    v816 = v46;
    v85 = (float*)&v918[24 * v960 - 8];
    v86 = v85[4];
    v87 = v85[10];
    v88 = v85[16];
    v89 = *(_QWORD*)v85;
    v91 = *((__int64**)v85 + 3);
    v90 = *((_QWORD*)v85 + 4);
    v93 = *((__int64**)v85 + 6);
    v92 = *((_QWORD*)v85 + 7);
    if (*(_QWORD*)v85 != 0) {
      v94 = v89 + 16LL * *(_QWORD*)(v89 + 4096);
      *(_WORD*)(v94 + 4) = (unsigned __int8)*((_QWORD*)v85 + 1);
      v95 = *(_QWORD*)(v89 + 4096);
      *(_QWORD*)(v94 + 8) = 1065353216;
      *(_QWORD*)(v89 + 4096) = v95 + 1;
      v96 = *(float*)(v5 + 8268);
      v814 = v49;
      if (v91 != nullptr) {
        goto LABEL_21;
      }
    }
    else {
      LOBYTE(v95) = -1;
      v96 = *(float*)(v5 + 8268);
      v814 = v49;
      if (v91 != nullptr) {
      LABEL_21:
        v97 = &v91[2 * v91[512]];
        *((_BYTE*)v97 + 4) = v90;
        *((_BYTE*)v97 + 5) = 0;
        v98 = v91[512];
        v97[1] = 1065353216;
        v91[512] = v98 + 1;
        v99 = *(float*)(v5 + 8272);
        if (v93 != nullptr) {
        LABEL_22:
          v100 = &v93[2 * v93[512]];
          *((_BYTE*)v100 + 4) = v92;
          *((_BYTE*)v100 + 5) = 0;
          v100[1] = 1065353216;
          v738 = v93[512];
          v93[512] = v738 + 1;
          goto LABEL_26;
        }
      LABEL_25:
        LOBYTE(v738) = -1;
      LABEL_26:
        v904 = 0;
        v903 = 0;
        v902 = 0;
        v901 = 0;
        v900 = 0;
        v899 = 0;
        v898 = 0;
        v897 = 0;
        v896 = 0;
        v895 = 0;
        v893 = 0;
        v894 = 0;
        v891 = 0;
        v892 = 0;
        v889 = 0;
        v890 = 0;
        v887 = 0;
        v888 = 0;
        v885 = 0;
        v886 = 0;
        v883 = 0;
        v884 = 0;
        v882 = (__typeof__(v882)){0};
        v880[1] = 0;
        v881 = 0;
        v880[0] = 0;
        SdkRoutine_70ace0((void*)(&v853), (__int64)&v917, &v961);
        v1029[0] = v853;
        v1029[1] = v854;
        v1038 = v868;
        v1039 = v869;
        v1044 = v874;
        v1045 = v875;
        v1030[1] = v856;
        v1030[2] = v857;
        v1030[0] = (unsigned int)v855;
        v1030[3] = (unsigned int)v858;
        v1037 = v867;
        v1040 = v870;
        v1030[4] = v859;
        v1030[5] = v860;
        v1047 = v877;
        v1048 = v878;
        v1049 = v879;
        v1031 = (unsigned int)v861;
        v1034 = v864;
        v1041 = v871;
        v1042 = v872;
        v1032 = v862;
        v1033 = v863;
        v1043 = v873;
        v1046 = v876;
        v1035 = v865;
        v1036 = v866;
        SdkRoutine_879f90((void*)(v880), v1029, v5 + 8304);
        v101 = *(float*)&v942;
        v102 = v940;
        if (v940 != nullptr) {
          v103 = &v940[2 * v940[512]];
          *((_WORD*)v103 + 2) = (unsigned __int8)v941;
          v104 = v102[512];
          v103[1] = 1065353216;
          v102[512] = v104 + 1;
          v105 = *(float*)&v945;
          v106 = v943;
          if (v943 != nullptr) {
            goto LABEL_28;
          }
        }
        else {
          LOBYTE(v104) = -1;
          v105 = *(float*)&v945;
          v106 = v943;
          if (v943 != nullptr) {
          LABEL_28:
            v107 = &v106[2 * v106[512]];
            *((_WORD*)v107 + 2) = (unsigned __int8)v944;
            v108 = v106[512];
            v107[1] = 1065353216;
            v106[512] = v108 + 1;
            v109 = *(float*)&v948;
            v110 = v946;
            if (v946 != nullptr) {
            LABEL_29:
              v111 = &v110[2 * v110[512]];
              *((_WORD*)v111 + 2) = (unsigned __int8)v947;
              v111[1] = 1065353216;
              v112 = v110[512];
              v110[512] = v112 + 1;
              goto LABEL_33;
            }
          LABEL_32:
            LOBYTE(v112) = -1;
          LABEL_33:
            v113 = v747 / v817;
            v114 = v744 / v817;
            v115 = v741 / v817;
            if (v102 != nullptr) {
              v116 = -0x1.0000000000000p+0f;
              v117 = v89 == 0;
              v89 = (__int64)v102;
              if (v117) {
                v118 = 0;
              }
              else {
                v118 = v95;
              }
              LOBYTE(v95) = v104;
              if (v117) {
                v116 = 0x0.0p+0f;
              }
              v119 = 0x1.0000000000000p+0f;
            }
            else {
              if (v89 == 0) {
                v121 = -1;
                v122 = v113 * 0x1.9000000000000p+6f;
                v123 = v114 * 0x1.9000000000000p+6f;
                v124 = v115 * 0x1.9000000000000p+6f;
                if (v106 != nullptr) {
                  goto LABEL_43;
                }
                goto LABEL_50;
              }
              v118 = 0;
              v116 = 0x0.0p+0f;
              v119 = -0x1.0000000000000p+0f;
            }
            v120 = v89 + 16LL * *(_QWORD*)(v89 + 4096);
            *(_BYTE*)(v120 + 4) = v95;
            *(_BYTE*)(v120 + 5) = v118;
            *(float*)(v120 + 8) = v119;
            *(float*)(v120 + 12) = v116;
            v121 = *(_QWORD*)(v89 + 4096);
            *(_QWORD*)(v89 + 4096) = v121 + 1;
            v122 = v113 * 0x1.9000000000000p+6f;
            v123 = v114 * 0x1.9000000000000p+6f;
            v124 = v115 * 0x1.9000000000000p+6f;
            if (v106 != nullptr) {
            LABEL_43:
              v125 = -0x1.0000000000000p+0f;
              if (v91 != nullptr) {
                v126 = v98;
              }
              else {
                v126 = 0;
              }
              if (v91 == nullptr) {
                v125 = 0x0.0p+0f;
              }
              v127 = 0x1.0000000000000p+0f;
              goto LABEL_52;
            }
          LABEL_50:
            if (v91 == nullptr) {
              v106 = nullptr;
              v129 = -1;
            LABEL_53:
              v130 = v87 + v96;
              v131 = v123 + v105;
              v132 = v122 + v101;
              v133 = v124 + v109;
              if (v110 != nullptr) {
                v134 = v817;
                v135 = -0x1.0000000000000p+0f;
                if (v93 != nullptr) {
                  v136 = v738;
                }
                else {
                  v136 = 0;
                }
                if (v93 == nullptr) {
                  v135 = 0x0.0p+0f;
                }
                v137 = 0x1.0000000000000p+0f;
              }
              else {
                v134 = v817;
                if (v93 == nullptr) {
                  v110 = nullptr;
                  v139 = -1;
                LABEL_63:
                  v856 = v106;
                  v857 = v129;
                  v853 = v89;
                  v854 = v121;
                  HIDWORD(v855) = 0;
                  HIDWORD(v858) = 0;
                  v859 = v110;
                  v860 = v139;
                  HIDWORD(v861) = 0;
                  v846_.v851 = 0;
                  v846_.v852 = 0;
                  v846_.v849 = 0;
                  v846_.v850 = 0;
                  v846_.v847 = 0;
                  v846_.v848 = 0;
                  v844_.v845 = 0;
                  v846_.v846 = 0;
                  v844_.v844 = 0;
                  *(float*)&v855 = v132 - (float)(v86 + v84);
                  *(float*)&v858 = v131 - v130;
                  *(float*)&v861 = v133 - (float)(v88 + v99);
                  SdkRoutine_879fa0((void*)(&v844_.v844), v880, &v853);
                  v140 = 0x0.0p+0f;
                  SdkRoutine_70b0c0((void*)((__int64)v1029), (float*)&v905,
                                    0x0.0p+0f, 0x0.0p+0f,
                                    0x1.ea80000000000p+9f);
                  v141 = *(float*)&v846_.v846;
                  v142 = *(float*)v1030;
                  v143 = v1029[0];
                  if (v844_.v844 != 0) {
                    v144 = v844_.v845;
                    v145 = v768;
                    v146 = 0x1.0000000000000p+0f;
                    if (v1029[0] != 0) {
                      v147 = v1029[1];
                      v140 = -0x1.0000000000000p+0f;
                    }
                    else {
                      v147 = 0;
                    }
                    v143 = v844_.v844;
                  }
                  else {
                    v145 = v768;
                    if (v1029[0] == 0) {
                      LOBYTE(v149) = -1;
                      v150 = *(float*)&v846_.v849;
                      v151 = *(float*)&v1030[3];
                      v152 = v846_.v847;
                      v153 = v1030[1];
                      if (v846_.v847 != 0) {
                      LABEL_71:
                        v154 = v846_.v848;
                        v155 = 0x1.0000000000000p+0f;
                        if (v153 != 0) {
                          v156 = v1030[2];
                          v157 = -0x1.0000000000000p+0f;
                        }
                        else {
                          v156 = 0;
                          v157 = 0x0.0p+0f;
                        }
                        goto LABEL_79;
                      }
                    LABEL_77:
                      if (v153 == 0) {
                        v152 = 0;
                        LOBYTE(v159) = -1;
                        v160 = *(float*)&v846_.v852;
                        v161 = *(float*)&v1031;
                        v162 = v846_.v850;
                        v163 = v1030[4];
                        if (v846_.v850 != 0) {
                        LABEL_80:
                          v164 = v846_.v851;
                          v165 = 0x1.0000000000000p+0f;
                          if (v163 != 0) {
                            v166 = v1030[5];
                            v167 = -0x1.0000000000000p+0f;
                          }
                          else {
                            v166 = 0;
                            v167 = 0x0.0p+0f;
                          }
                          goto LABEL_86;
                        }
                      LABEL_84:
                        if (v163 == 0) {
                          v162 = 0;
                          LOBYTE(v169) = -1;
                          if (v143 != 0) {
                          LABEL_87:
                            v170 = v143 + 16LL * *(_QWORD*)(v143 + 4096);
                            *(_BYTE*)(v170 + 4) = v149;
                            *(_BYTE*)(v170 + 5) = 0;
                            *(float*)(v170 + 8) = v134;
                            *(_DWORD*)(v170 + 12) = 0;
                            v171 = *(_QWORD*)(v143 + 4096);
                            *(_QWORD*)(v143 + 4096) = v171 + 1;
                            if (v152 != 0) {
                              goto LABEL_88;
                            }
                            goto LABEL_98;
                          }
                        LABEL_97:
                          LOBYTE(v171) = -1;
                          if (v152 != 0) {
                          LABEL_88:
                            v172 = v152 + 16LL * *(_QWORD*)(v152 + 4096);
                            *(_BYTE*)(v172 + 4) = v159;
                            *(_BYTE*)(v172 + 5) = 0;
                            *(float*)(v172 + 8) = v134;
                            *(_DWORD*)(v172 + 12) = 0;
                            v173 = *(_QWORD*)(v152 + 4096);
                            *(_QWORD*)(v152 + 4096) = v173 + 1;
                            if (v162 != 0) {
                              goto LABEL_89;
                            }
                            goto LABEL_99;
                          }
                        LABEL_98:
                          LOBYTE(v173) = -1;
                          if (v162 != 0) {
                          LABEL_89:
                            v174 = v162 + 16LL * *(_QWORD*)(v162 + 4096);
                            *(_BYTE*)(v174 + 4) = v169;
                            *(_BYTE*)(v174 + 5) = 0;
                            *(float*)(v174 + 8) = v134;
                            *(_DWORD*)(v174 + 12) = 0;
                            v175 = *(_QWORD*)(v162 + 4096);
                            *(_QWORD*)(v162 + 4096) = v175 + 1;
                            if (v65 != 0) {
                              goto LABEL_90;
                            }
                            goto LABEL_100;
                          }
                        LABEL_99:
                          LOBYTE(v175) = -1;
                          if (v65 != 0) {
                          LABEL_90:
                            v176 = v143 == 0;
                            v177 = 0x1.0000000000000p+0f;
                            v143 = v65;
                            if (v176) {
                              v178 = 0;
                            }
                            else {
                              v178 = v171;
                            }
                            LOBYTE(v171) = v733;
                            if (v176) {
                              v177 = 0x0.0p+0f;
                            }
                            goto LABEL_102;
                          }
                        LABEL_100:
                          if (v143 == 0) {
                            LOBYTE(v180) = -1;
                            v181 = v752;
                            v182 = v150 - v151;
                            v183 = v141 - v142;
                            v184 = v160 - v161;
                            if (v752 != 0) {
                            LABEL_103:
                              v185 = v152 == 0;
                              v152 = v181;
                              v186 = v735;
                              v187 = 0x1.0000000000000p+0f;
                              if (v185) {
                                v188 = 0;
                              }
                              else {
                                v188 = v173;
                              }
                              if (v185) {
                                v187 = 0x0.0p+0f;
                              }
                              goto LABEL_112;
                            }
                          LABEL_110:
                            if (v152 == 0) {
                              LOBYTE(v190) = -1;
                            LABEL_113:
                              v191 = v134 * v183;
                              v192 = v762 + v754;
                              v193 = v765 + v756;
                              v194 = v759 + v750;
                              v195 = v134 * v182;
                              v196 = v134 * v184;
                              if (v145 != 0) {
                                v197 = v162 == 0;
                                v162 = v145;
                                v198 = v737;
                                v199 = 0x1.0000000000000p+0f;
                                if (v197) {
                                  v200 = 0;
                                }
                                else {
                                  v200 = v175;
                                }
                                if (v197) {
                                  v199 = 0x0.0p+0f;
                                }
                              }
                              else {
                                if (v162 == 0) {
                                  LOBYTE(v202) = -1;
                                LABEL_123:
                                  *(float*)(v5 + 8184) = v193 + v191;
                                  *(float*)(v5 + 8188) = v192 + v195;
                                  *(float*)(v5 + 0x2000) = v194 + v196;
                                  if (v143 != 0) {
                                    v203 =
                                        v143 + 16LL * *(_QWORD*)(v143 + 4096);
                                    *(_BYTE*)(v203 + 4) = v180;
                                    *(_BYTE*)(v203 + 5) = 0;
                                    v204 = *(_QWORD*)(v143 + 4096);
                                    *(_QWORD*)(v203 + 8) = 1065353216;
                                    *(_QWORD*)(v143 + 4096) = v204 + 1;
                                    v205 = *(float*)(v5 + 8188);
                                    v206 = (__int64*)(v5 + 8200);
                                    if (v152 != 0) {
                                      goto LABEL_125;
                                    }
                                  }
                                  else {
                                    v204 = -1;
                                    v205 = v192 + v195;
                                    v206 = (__int64*)(v5 + 8200);
                                    if (v152 != 0) {
                                    LABEL_125:
                                      v207 =
                                          v152 + 16LL * *(_QWORD*)(v152 + 4096);
                                      *(_BYTE*)(v207 + 4) = v190;
                                      *(_BYTE*)(v207 + 5) = 0;
                                      *(_QWORD*)(v207 + 8) = 1065353216;
                                      v208 = *(_QWORD*)(v152 + 4096);
                                      *(_QWORD*)(v152 + 4096) = v208 + 1;
                                      v209 = *(float*)(v5 + 0x2000);
                                      v210 = v34 * v34;
                                      v211 = &v963;
                                      if (v162 != 0) {
                                      LABEL_126:
                                        v212 = v162 +
                                               16LL * *(_QWORD*)(v162 + 4096);
                                        *(_BYTE*)(v212 + 4) = v202;
                                        *(_BYTE*)(v212 + 5) = 0;
                                        *(_QWORD*)(v212 + 8) = 1065353216;
                                        v213 = *(_QWORD*)(v162 + 4096);
                                        *(_QWORD*)(v162 + 4096) = v213 + 1;
                                      LABEL_130:
                                        v833_.v833 = v143;
                                        v833_.v834 = v204;
                                        v833_.v836 = v152;
                                        v833_.v837 = v208;
                                        v214 = v43 / v210;
                                        v215 = *v206;
                                        v216 = v206[1];
                                        v833_.v840 = v162;
                                        v833_.v841 = v213;
                                        v217 = 0;
                                        HIDWORD(v833_.v835) = 0;
                                        v833_.v839 = 0;
                                        v833_.v843 = 0;
                                        v827_.v831 = 0x0.0p+0f;
                                        v827_.v829 = 0;
                                        v827_.v830 = 0;
                                        v827_.v827 = 0;
                                        v827_.v828 = 0;
                                        v218 = v797 / v210;
                                        v833_.v838 =
                                            (float)(v192 + v195) - v205;
                                        *(float*)&v833_.v835 =
                                            (float)(v193 + v191) -
                                            (float)(v193 + v191);
                                        v832[0] = v215;
                                        v219 = v206[2];
                                        v833_.v842 =
                                            (float)(v194 + v196) - v209;
                                        v1048 = 0;
                                        v1049 = 0;
                                        v1046 = 0;
                                        v1047 = 0;
                                        v1044 = 0;
                                        v1045 = 0;
                                        v1042 = 0;
                                        v1043 = 0;
                                        v1040 = 0;
                                        v1041 = 0;
                                        v1038 = 0;
                                        v1039 = 0;
                                        v1036 = 0;
                                        v1037 = 0;
                                        v1034 = 0;
                                        v1035 = 0;
                                        v1032 = 0;
                                        v1033 = 0;
                                        v1031 = 0;
                                        v1029[1] = 0;
                                        memset(v1030, 0, sizeof(v1030));
                                        v1029[0] = 0;
                                        v832[1] = v216;
                                        v832[2] = v219;
                                        v220 = v795 / v210;
                                        v221 = v791;
                                        v792 = v776 / v210;
                                        v222 = v221 / v210;
                                        v223 = v788;
                                        v789 = v774 / v210;
                                        v796 = v772 / v210;
                                        v224 = v223 / v210;
                                        v225 = v786;
                                        v787 = v777 / v210;
                                        v226 = v225 / v210;
                                        v227 = v799 / v210;
                                        v228 = v784 / v210;
                                        v229 = v802 / v210;
                                        v798 = v770 / v210;
                                        v230 = v782 / v210;
                                        v231 = v806 / v210;
                                        v232 = v781 / v210;
                                        v233 = v779 / v210;
                                        do {
                                          v260 = v1021;
                                          if (v1021 != 0) {
                                            v261 = 16 * v1021 - 16;
                                            if ((~(_BYTE)v261 & 0x70) != 0) {
                                              v263 = -(
                                                  __int64)(((unsigned __int8)((unsigned int)
                                                                                  v261 >>
                                                                              4) +
                                                            1) &
                                                           7);
                                              v262 = &v984;
                                              do {
                                                *(_DWORD*)v262 = 0;
                                                v262 += 2;
                                                v264 = __CFADD__(v263++, 1);
                                              } while (!v264);
                                            }
                                            else {
                                              v262 = &v984;
                                            }
                                            if (v261 >= 0x70) {
                                              v265 = &v984 + 2 * v260;
                                              do {
                                                *(_DWORD*)v262 = 0;
                                                *((_DWORD*)v262 + 4) = 0;
                                                *((_DWORD*)v262 + 8) = 0;
                                                *((_DWORD*)v262 + 12) = 0;
                                                *((_DWORD*)v262 + 16) = 0;
                                                *((_DWORD*)v262 + 20) = 0;
                                                *((_DWORD*)v262 + 24) = 0;
                                                *((_DWORD*)v262 + 28) = 0;
                                                v262 += 16;
                                              } while (v262 != v265);
                                            }
                                          }
                                          v266 = &v833_.v833 + 3 * v217;
                                          if (*v266 != 0) {
                                            *(_DWORD*)(*v266 + 16 * v266[1]) =
                                                1065353216;
                                          }
                                          if (v1021 != 0) {
                                            v267 = (float*)(&v984 + 2 * v1021);
                                            v268 = 16 * v1021 - 16;
                                            if ((~(_BYTE)v268 & 0x70) != 0) {
                                              v269 = -(
                                                  __int64)(((unsigned __int8)((unsigned int)
                                                                                  v268 >>
                                                                              4) +
                                                            1) &
                                                           7);
                                              do {
                                                v270 = *(v267 - 4);
                                                v267 -= 4;
                                                v264 = __CFADD__(v269++, 1);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v267 +
                                                        4)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v267 +
                                                            4)) +
                                                    (float)(v267[2] * v270);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v267 +
                                                        5)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v267 +
                                                            5)) +
                                                    (float)(v267[3] * v270);
                                              } while (!v264);
                                            }
                                            if (v268 >= 0x70) {
                                              v271 = v267 - 32;
                                              do {
                                                v272 = v271[28];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        116)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            116)) +
                                                    (float)(v271[30] * v272);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        117)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            117)) +
                                                    (float)(v271[31] * v272);
                                                v273 = v271[24];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        100)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            100)) +
                                                    (float)(v271[26] * v273);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        101)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            101)) +
                                                    (float)(v271[27] * v273);
                                                v274 = v271[20];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        84)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            84)) +
                                                    (float)(v271[22] * v274);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        85)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            85)) +
                                                    (float)(v271[23] * v274);
                                                v275 = v271[16];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        68)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            68)) +
                                                    (float)(v271[18] * v275);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        69)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            69)) +
                                                    (float)(v271[19] * v275);
                                                v276 = v271[12];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        52)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            52)) +
                                                    (float)(v271[14] * v276);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        53)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            53)) +
                                                    (float)(v271[15] * v276);
                                                v277 = v271[8];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        36)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            36)) +
                                                    (float)(v271[10] * v277);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        37)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            37)) +
                                                    (float)(v271[11] * v277);
                                                v278 = v271[4];
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        20)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            20)) +
                                                    (float)(v271[6] * v278);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        21)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            21)) +
                                                    (float)(v271[7] * v278);
                                                v279 = *v271;
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        4)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            4)) +
                                                    (float)(v271[2] * *v271);
                                                *((float*)&v984 +
                                                  4 * *((unsigned __int8*)v271 +
                                                        5)) =
                                                    *((float*)&v984 +
                                                      4 * *((unsigned __int8*)
                                                                v271 +
                                                            5)) +
                                                    (float)(v271[3] * v279);
                                                v117 = v271 == (float*)&v984;
                                                v271 -= 32;
                                              } while (!v117);
                                            }
                                          }
                                          v234 = v943[2 * v944];
                                          v235 =
                                              (_DWORD*)&v827_.v827 + 3 * v217;
                                          v236 = v946[2 * v947];
                                          v237 = *(_QWORD*)v918;
                                          v238 = v917;
                                          *v235 = v940[2 * v941];
                                          v235[1] = v234;
                                          v239 = *(_DWORD*)(v238 + 16 * v237);
                                          v240 = *(_QWORD*)&v918[24];
                                          v241 = *(_QWORD*)&v918[16];
                                          v235[2] = v236;
                                          v242 = *(_DWORD*)(v241 + 16 * v240);
                                          v243 = *(
                                              _DWORD*)(*(_QWORD*)&v918[40] +
                                                       16LL *
                                                           *(_QWORD*)&v918[48]);
                                          v244 = *(
                                              _DWORD*)(*(_QWORD*)&v918[64] +
                                                       16LL *
                                                           *(_QWORD*)&v918[72]);
                                          v245 = *(
                                              _DWORD*)(*(_QWORD*)&v918[88] +
                                                       16LL *
                                                           *(_QWORD*)&v918[96]);
                                          v246 =
                                              *(_DWORD*)(*(_QWORD*)&v918[112] +
                                                         16LL * *(_QWORD*)&v918
                                                                    [120]);
                                          v247 =
                                              *(_DWORD*)(*(_QWORD*)&v918[136] +
                                                         16LL * *(_QWORD*)&v918
                                                                    [144]);
                                          v248 =
                                              *(_DWORD*)(*(_QWORD*)&v918[160] +
                                                         16LL * *(_QWORD*)&v918
                                                                    [168]);
                                          v249 = v919[2 * v920];
                                          v250 = *(_DWORD*)(v922 + 16 * v923);
                                          v251 = *(_DWORD*)(v924 + 16 * v925);
                                          v252 = *(_DWORD*)(v926 + 16 * v927);
                                          v253 = *(_DWORD*)(v928 + 16 * v929);
                                          v254 = *(_DWORD*)(v930 + 16 * v931);
                                          v255 = *(_DWORD*)(v932 + 16 * v933);
                                          v256 = *(_DWORD*)(v934 + 16 * v935);
                                          v257 = *(_DWORD*)(v936 + 16 * v937);
                                          v258 = *(_DWORD*)(v938 + 16 * v939);
                                          v259 = &v1029[9 * v217++];
                                          *(_DWORD*)v259 = v239;
                                          *((_DWORD*)v259 + 1) = v242;
                                          *((_DWORD*)v259 + 2) = v243;
                                          *((_DWORD*)v259 + 3) = v244;
                                          *((_DWORD*)v259 + 4) = v245;
                                          *((_DWORD*)v259 + 5) = v246;
                                          *((_DWORD*)v259 + 6) = v247;
                                          *((_DWORD*)v259 + 7) = v248;
                                          *((_DWORD*)v259 + 8) = v249;
                                          *((_DWORD*)v259 + 9) = v250;
                                          *((_DWORD*)v259 + 10) = v251;
                                          *((_DWORD*)v259 + 11) = v252;
                                          *((_DWORD*)v259 + 12) = v253;
                                          *((_DWORD*)v259 + 13) = v254;
                                          *((_DWORD*)v259 + 14) = v255;
                                          *((_DWORD*)v259 + 15) = v256;
                                          *((_DWORD*)v259 + 16) = v257;
                                          *((_DWORD*)v259 + 17) = v258;
                                        } while (v217 != 3);
                                        v280 = v222 * 0x1.3880000000000p+13f;
                                        v281 = v226 * 0x1.3880000000000p+13f;
                                        v282 = v230 * 0x1.3880000000000p+13f;
                                        v283 = v228 * 0x1.3880000000000p+13f;
                                        v284 = v232 * 0x1.3880000000000p+13f;
                                        v285 = v233 * 0x1.3880000000000p+13f;
                                        v286 =
                                            (float)((float)((float)(*(float*)&v827_
                                                                         .v827 *
                                                                    (float)(v218 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*((float*)&v827_
                                                                  .v827 +
                                                              1) *
                                                            (float)(v224 *
                                                                    0x1.3880000000000p+13f))) +
                                            (float)(*(float*)&v827_.v828 *
                                                    v282);
                                        v287 =
                                            (float)((float)((float)(*((float*)&v827_
                                                                          .v828 +
                                                                      1) *
                                                                    (float)(v218 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*(float*)&v827_
                                                                 .v829 *
                                                            (float)(v224 *
                                                                    0x1.3880000000000p+13f))) +
                                            (float)(*((float*)&v827_.v829 + 1) *
                                                    v282);
                                        v288 =
                                            (float)((float)((float)(*(float*)&v827_
                                                                         .v830 *
                                                                    (float)(v218 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*((float*)&v827_
                                                                  .v830 +
                                                              1) *
                                                            (float)(v224 *
                                                                    0x1.3880000000000p+13f))) +
                                            (float)(v827_.v831 * v282);
                                        v289 =
                                            (float)((float)(*(float*)&v827_
                                                                 .v827 *
                                                            v280) +
                                                    0x0.0p+0f) +
                                            (float)(*((float*)&v827_.v827 + 1) *
                                                    v283);
                                        v290 = (float)((float)(*((float*)&v827_
                                                                     .v828 +
                                                                 1) *
                                                               v280) +
                                                       0x0.0p+0f) +
                                               (float)(*(float*)&v827_.v829 *
                                                       v283);
                                        v291 =
                                            (float)((float)(*(float*)&v827_
                                                                 .v830 *
                                                            v280) +
                                                    0x0.0p+0f) +
                                            (float)(*((float*)&v827_.v830 + 1) *
                                                    v283);
                                        v292 =
                                            (float)((float)((float)(*(float*)&v827_
                                                                         .v827 *
                                                                    (float)(v220 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*((float*)&v827_
                                                                  .v827 +
                                                              1) *
                                                            v281)) +
                                            (float)(*(float*)&v827_.v828 *
                                                    v284);
                                        v293 =
                                            (float)((float)((float)(*((float*)&v827_
                                                                          .v828 +
                                                                      1) *
                                                                    (float)(v220 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*(float*)&v827_
                                                                 .v829 *
                                                            v281)) +
                                            (float)(*((float*)&v827_.v829 + 1) *
                                                    v284);
                                        v294 =
                                            (float)((float)((float)(*(float*)&v827_
                                                                         .v830 *
                                                                    (float)(v220 *
                                                                            0x1.3880000000000p+13f)) +
                                                            0x0.0p+0f) +
                                                    (float)(*((float*)&v827_
                                                                  .v830 +
                                                              1) *
                                                            v281)) +
                                            (float)(v827_.v831 * v284);
                                        v295 = v289 +
                                               (float)(*(float*)&v827_.v828 *
                                                       v285);
                                        v296 =
                                            v290 +
                                            (float)(*((float*)&v827_.v829 + 1) *
                                                    v285);
                                        v297 =
                                            v291 + (float)(v827_.v831 * v285);
                                        v826[0] =
                                            (float)((float)((float)(v286 *
                                                                    *(float*)&v827_
                                                                         .v827) +
                                                            0x0.0p+0f) +
                                                    (float)(v292 *
                                                            *((float*)&v827_
                                                                  .v827 +
                                                              1))) +
                                            (float)(v295 *
                                                    *(float*)&v827_.v828);
                                        v826[2] =
                                            (float)((float)((float)(v286 *
                                                                    *(float*)&v827_
                                                                         .v830) +
                                                            0x0.0p+0f) +
                                                    (float)(v292 *
                                                            *((float*)&v827_
                                                                  .v830 +
                                                              1))) +
                                            (float)(v295 * v827_.v831);
                                        v826[1] =
                                            (float)((float)((float)(v286 *
                                                                    *((float*)&v827_
                                                                          .v828 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v292 *
                                                            *(float*)&v827_
                                                                 .v829)) +
                                            (float)(v295 *
                                                    *((float*)&v827_.v829 + 1));
                                        v826[3] =
                                            (float)((float)((float)(v287 *
                                                                    *(float*)&v827_
                                                                         .v827) +
                                                            0x0.0p+0f) +
                                                    (float)(v293 *
                                                            *((float*)&v827_
                                                                  .v827 +
                                                              1))) +
                                            (float)(v296 *
                                                    *(float*)&v827_.v828);
                                        v826[6] =
                                            (float)((float)((float)(v288 *
                                                                    *(float*)&v827_
                                                                         .v827) +
                                                            0x0.0p+0f) +
                                                    (float)(v294 *
                                                            *((float*)&v827_
                                                                  .v827 +
                                                              1))) +
                                            (float)(v297 *
                                                    *(float*)&v827_.v828);
                                        v826[4] =
                                            (float)((float)((float)(v287 *
                                                                    *((float*)&v827_
                                                                          .v828 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v293 *
                                                            *(float*)&v827_
                                                                 .v829)) +
                                            (float)(v296 *
                                                    *((float*)&v827_.v829 + 1));
                                        v826[5] =
                                            (float)((float)((float)(v287 *
                                                                    *(float*)&v827_
                                                                         .v830) +
                                                            0x0.0p+0f) +
                                                    (float)(v293 *
                                                            *((float*)&v827_
                                                                  .v830 +
                                                              1))) +
                                            (float)(v296 * v827_.v831);
                                        v826[7] =
                                            (float)((float)((float)(v288 *
                                                                    *((float*)&v827_
                                                                          .v828 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v294 *
                                                            *(float*)&v827_
                                                                 .v829)) +
                                            (float)(v297 *
                                                    *((float*)&v827_.v829 + 1));
                                        v826[8] =
                                            (float)((float)((float)(v288 *
                                                                    *(float*)&v827_
                                                                         .v830) +
                                                            0x0.0p+0f) +
                                                    (float)(v294 *
                                                            *((float*)&v827_
                                                                  .v830 +
                                                              1))) +
                                            (float)(v297 * v827_.v831);
                                        SdkRoutine_879fb0(v5 + 200, v1029,
                                                          &v962, v832, v826);
                                        LODWORD(v1029[1]) = 0;
                                        v1029[0] = 0;
                                        memset(v918, 0, 28);
                                        v917 = 0;
                                        v298 =
                                            nerd_gyro_pointing_GyroPointingKalmanFilter_AddUnbiasedGyrVariable_plt(
                                                v5 + 200, v1029, &v917);
                                        v299 = *(_QWORD*)(v5 + 8440);
                                        v300 = v298;
                                        v301 = *(float*)(v5 + 8416) + 0x0.0p+0f;
                                        v880[0] = *(_QWORD*)(v5 + 8432);
                                        v880[1] = v299;
                                        v302 = *(float*)(v5 + 8420);
                                        v303 = *(float*)(v5 + 8424);
                                        v1004 = 1;
                                        v881 = *(_QWORD*)(v5 + 8448);
                                        *(_QWORD*)&v882 = 0;
                                        v1017 = 1802;
                                        WORD2(v984) = 0;
                                        v985 = 0;
                                        WORD2(v986) = 0;
                                        v987 = 0;
                                        v989 = 0;
                                        v1007 = 2;
                                        v1009 = 3;
                                        v990 = 0;
                                        v992 = 0;
                                        v993 = 0;
                                        v995 = 0;
                                        v996 = 0;
                                        v998 = 0;
                                        v999 = 0;
                                        v1001 = 0;
                                        v1002 = 1065353216;
                                        v1005 = 1065353216;
                                        v1008 = 1065353216;
                                        v1010 = 1065353216;
                                        v1012 = 1065353216;
                                        v1014 = 1065353216;
                                        v1019 = 2059;
                                        v1011 = 4;
                                        v1013 = 5;
                                        v1015 = 1545;
                                        v1016 = 0xBF8000003F800000LL;
                                        v1018 = 0xBF8000003F800000LL;
                                        v1020 = 0xBF8000003F800000LL;
                                        v1021 = 15;
                                        *(float*)v298 =
                                            (float)(v816 + 0x0.0p+0f) - v301;
                                        *(float*)(v298 + 4) =
                                            (float)(v810 + 0x0.0p+0f) -
                                            (float)(v302 + 0x0.0p+0f);
                                        *(float*)(v298 + 8) =
                                            (float)(v814 + 0x0.0p+0f) -
                                            (float)(v303 + 0x0.0p+0f);
                                        v304 = &v984 + 2 * v1021;
                                        *((_WORD*)v304 + 2) = 12;
                                        v304[1] = 1065353216;
                                        v305 = v1021++;
                                        v306 = &v984 + 2 * v1021;
                                        *((_WORD*)v306 + 2) = 13;
                                        v306[1] = 1065353216;
                                        v307 = v1021++;
                                        v308 = &v984 + 2 * v1021;
                                        *((_WORD*)v308 + 2) = 14;
                                        v308[1] = 1065353216;
                                        v309 = v1021++;
                                        v310 = *(_QWORD*)(v298 + 24);
                                        v853 = *(_QWORD*)(v298 + 16);
                                        v854 = v310;
                                        v311 = *(_QWORD*)(v298 + 32);
                                        *(_DWORD*)&v918[24] = 0;
                                        *(_QWORD*)&v918[16] = 0;
                                        v855 = v311;
                                        if (v309 != -1) {
                                          if ((~(_BYTE)v309 & 7) != 0) {
                                            v313 = ((_BYTE)v309 + 1) & 7;
                                            v312 = &v984;
                                            do {
                                              *(_DWORD*)v312 = 0;
                                              v312 += 2;
                                              --v313;
                                            } while (v313 != 0);
                                          }
                                          else {
                                            v312 = &v984;
                                          }
                                          if ((v309 & 0xFFFFFFFFFFFFFFFuLL) >=
                                              7) {
                                            do {
                                              *(_DWORD*)v312 = 0;
                                              *((_DWORD*)v312 + 4) = 0;
                                              *((_DWORD*)v312 + 8) = 0;
                                              *((_DWORD*)v312 + 12) = 0;
                                              *((_DWORD*)v312 + 16) = 0;
                                              *((_DWORD*)v312 + 20) = 0;
                                              *((_DWORD*)v312 + 24) = 0;
                                              *((_DWORD*)v312 + 28) = 0;
                                              v312 += 16;
                                            } while (v312 !=
                                                     &v984 + 2 * v309 + 2);
                                          }
                                        }
                                        *((_DWORD*)&v984 + 4 * v305) =
                                            1065353216;
                                        v314 = v1021;
                                        if (v1021 != 0) {
                                          v315 = 16 * v1021;
                                          v316 = 16 * v1021 - 16;
                                          v317 = (float*)(&v984 + 2 * v1021);
                                          if ((~(_BYTE)v316 & 0x30) != 0) {
                                            v318 = -(
                                                __int64)(((unsigned __int8)((unsigned int)
                                                                                v316 >>
                                                                            4) +
                                                          1) &
                                                         3);
                                            do {
                                              v319 = *(v317 - 4);
                                              v317 -= 4;
                                              v264 = __CFADD__(v318++, 1);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v317 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v317 +
                                                          4)) +
                                                  (float)(v317[2] * v319);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v317 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v317 +
                                                          5)) +
                                                  (float)(v317[3] * v319);
                                            } while (!v264);
                                          }
                                          if (v316 >= 0x30) {
                                            v320 = v317 - 16;
                                            do {
                                              v321 = v320[12];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      52)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          52)) +
                                                  (float)(v320[14] * v321);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      53)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          53)) +
                                                  (float)(v320[15] * v321);
                                              v322 = v320[8];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      36)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          36)) +
                                                  (float)(v320[10] * v322);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      37)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          37)) +
                                                  (float)(v320[11] * v322);
                                              v323 = v320[4];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      20)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          20)) +
                                                  (float)(v320[6] * v323);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      21)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          21)) +
                                                  (float)(v320[7] * v323);
                                              v324 = *v320;
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          4)) +
                                                  (float)(v320[2] * *v320);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v320 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v320 +
                                                          5)) +
                                                  (float)(v320[3] * v324);
                                              v117 = v320 == (float*)&v984;
                                              v320 -= 16;
                                            } while (!v117);
                                          }
                                        }
                                        else {
                                          v315 = 0;
                                        }
                                        v325 = v994;
                                        v326 = v997;
                                        v327 = v991;
                                        v917 = __PAIR64__(v986, v984);
                                        *(float*)v918 = v988;
                                        if (v314 != 0) {
                                          v328 = v315 - 16;
                                          if ((~((_BYTE)v315 - 16) & 0x70) !=
                                              0) {
                                            v330 =
                                                ((unsigned __int8)((unsigned int)
                                                                       v328 >>
                                                                   4) +
                                                 1) &
                                                7;
                                            v329 = (char*)&v984;
                                            do {
                                              *(_DWORD*)v329 = 0;
                                              v329 += 16;
                                              --v330;
                                            } while (v330 != 0);
                                          }
                                          else {
                                            v329 = (char*)&v984;
                                          }
                                          if (v328 >= 0x70) {
                                            v331 = (char*)&v984 + v315;
                                            do {
                                              *(_DWORD*)v329 = 0;
                                              *((_DWORD*)v329 + 4) = 0;
                                              *((_DWORD*)v329 + 8) = 0;
                                              *((_DWORD*)v329 + 12) = 0;
                                              *((_DWORD*)v329 + 16) = 0;
                                              *((_DWORD*)v329 + 20) = 0;
                                              *((_DWORD*)v329 + 24) = 0;
                                              *((_DWORD*)v329 + 28) = 0;
                                              v329 += 128;
                                            } while (v329 != v331);
                                          }
                                        }
                                        *((_DWORD*)&v984 + 4 * v307) =
                                            1065353216;
                                        v332 = v1021;
                                        if (v1021 != 0) {
                                          v333 = 16 * v1021;
                                          v334 = 16 * v1021 - 16;
                                          v335 = (float*)(&v984 + 2 * v1021);
                                          if ((~(_BYTE)v334 & 0x30) != 0) {
                                            v336 = -(
                                                __int64)(((unsigned __int8)((unsigned int)
                                                                                v334 >>
                                                                            4) +
                                                          1) &
                                                         3);
                                            do {
                                              v337 = *(v335 - 4);
                                              v335 -= 4;
                                              v264 = __CFADD__(v336++, 1);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v335 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v335 +
                                                          4)) +
                                                  (float)(v335[2] * v337);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v335 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v335 +
                                                          5)) +
                                                  (float)(v335[3] * v337);
                                            } while (!v264);
                                          }
                                          if (v334 >= 0x30) {
                                            v338 = v335 - 16;
                                            do {
                                              v339 = v338[12];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      52)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          52)) +
                                                  (float)(v338[14] * v339);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      53)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          53)) +
                                                  (float)(v338[15] * v339);
                                              v340 = v338[8];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      36)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          36)) +
                                                  (float)(v338[10] * v340);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      37)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          37)) +
                                                  (float)(v338[11] * v340);
                                              v341 = v338[4];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      20)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          20)) +
                                                  (float)(v338[6] * v341);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      21)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          21)) +
                                                  (float)(v338[7] * v341);
                                              v342 = *v338;
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          4)) +
                                                  (float)(v338[2] * *v338);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v338 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v338 +
                                                          5)) +
                                                  (float)(v338[3] * v342);
                                              v117 = v338 == (float*)&v984;
                                              v338 -= 16;
                                            } while (!v117);
                                          }
                                        }
                                        else {
                                          v333 = 0;
                                        }
                                        v343 = v994;
                                        v344 = v997;
                                        v345 = v991;
                                        *(_DWORD*)&v918[4] = v984;
                                        *(_DWORD*)&v918[8] = v986;
                                        *(float*)&v918[12] = v988;
                                        if (v332 != 0) {
                                          v346 = v333 - 16;
                                          if ((~((_BYTE)v333 - 16) & 0x70) !=
                                              0) {
                                            v348 =
                                                ((unsigned __int8)((unsigned int)
                                                                       v346 >>
                                                                   4) +
                                                 1) &
                                                7;
                                            v347 = (char*)&v984;
                                            do {
                                              *(_DWORD*)v347 = 0;
                                              v347 += 16;
                                              --v348;
                                            } while (v348 != 0);
                                          }
                                          else {
                                            v347 = (char*)&v984;
                                          }
                                          if (v346 >= 0x70) {
                                            v349 = (char*)&v984 + v333;
                                            do {
                                              *(_DWORD*)v347 = 0;
                                              *((_DWORD*)v347 + 4) = 0;
                                              *((_DWORD*)v347 + 8) = 0;
                                              *((_DWORD*)v347 + 12) = 0;
                                              *((_DWORD*)v347 + 16) = 0;
                                              *((_DWORD*)v347 + 20) = 0;
                                              *((_DWORD*)v347 + 24) = 0;
                                              *((_DWORD*)v347 + 28) = 0;
                                              v347 += 128;
                                            } while (v347 != v349);
                                          }
                                        }
                                        *((_DWORD*)&v984 + 4 * v309) =
                                            1065353216;
                                        if (v1021 != 0) {
                                          v350 = 16 * v1021 - 16;
                                          v351 = (float*)(&v984 + 2 * v1021);
                                          if ((~(_BYTE)v350 & 0x30) != 0) {
                                            v352 = -(
                                                __int64)(((unsigned __int8)((unsigned int)
                                                                                v350 >>
                                                                            4) +
                                                          1) &
                                                         3);
                                            do {
                                              v353 = *(v351 - 4);
                                              v351 -= 4;
                                              v264 = __CFADD__(v352++, 1);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v351 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v351 +
                                                          4)) +
                                                  (float)(v351[2] * v353);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v351 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v351 +
                                                          5)) +
                                                  (float)(v351[3] * v353);
                                            } while (!v264);
                                          }
                                          if (v350 >= 0x30) {
                                            v354 = v351 - 16;
                                            do {
                                              v355 = v354[12];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      52)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          52)) +
                                                  (float)(v354[14] * v355);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      53)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          53)) +
                                                  (float)(v354[15] * v355);
                                              v356 = v354[8];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      36)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          36)) +
                                                  (float)(v354[10] * v356);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      37)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          37)) +
                                                  (float)(v354[11] * v356);
                                              v357 = v354[4];
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      20)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          20)) +
                                                  (float)(v354[6] * v357);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      21)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          21)) +
                                                  (float)(v354[7] * v357);
                                              v358 = *v354;
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      4)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          4)) +
                                                  (float)(v354[2] * *v354);
                                              *((float*)&v984 +
                                                4 * *((unsigned __int8*)v354 +
                                                      5)) =
                                                  *((float*)&v984 +
                                                    4 * *((unsigned __int8*)
                                                              v354 +
                                                          5)) +
                                                  (float)(v354[3] * v358);
                                              v117 = v354 == (float*)&v984;
                                              v354 -= 16;
                                            } while (!v117);
                                          }
                                        }
                                        *(_DWORD*)&v918[16] = v984;
                                        *(_DWORD*)&v918[20] = v986;
                                        *(float*)&v918[24] = v988;
                                        v359 = (float)((float)((float)(v327 *
                                                                       v792) +
                                                               0x0.0p+0f) +
                                                       (float)(v325 * v789)) +
                                               (float)(v326 * v229);
                                        v360 = (float)((float)((float)(v327 *
                                                                       v796) +
                                                               0x0.0p+0f) +
                                                       (float)(v325 * v787)) +
                                               (float)(v326 * v231);
                                        v361 = (float)((float)((float)(v327 *
                                                                       v798) +
                                                               0x0.0p+0f) +
                                                       (float)(v325 * v227)) +
                                               (float)(v326 * v214);
                                        v362 = (float)((float)((float)(v345 *
                                                                       v792) +
                                                               0x0.0p+0f) +
                                                       (float)(v343 * v789)) +
                                               (float)(v344 * v229);
                                        v363 = (float)((float)((float)(v345 *
                                                                       v798) +
                                                               0x0.0p+0f) +
                                                       (float)(v343 * v227)) +
                                               (float)(v344 * v214);
                                        v364 = (float)((float)((float)(v345 *
                                                                       v796) +
                                                               0x0.0p+0f) +
                                                       (float)(v343 * v787)) +
                                               (float)(v344 * v231);
                                        v365 = (float)((float)((float)(v991 *
                                                                       v792) +
                                                               0x0.0p+0f) +
                                                       (float)(v994 * v789)) +
                                               (float)(v997 * v229);
                                        v366 = (float)((float)((float)(v991 *
                                                                       v796) +
                                                               0x0.0p+0f) +
                                                       (float)(v994 * v787)) +
                                               (float)(v997 * v231);
                                        v367 = (float)((float)((float)(v991 *
                                                                       v798) +
                                                               0x0.0p+0f) +
                                                       (float)(v994 * v227)) +
                                               (float)(v997 * v214);
                                        *(float*)v1029 =
                                            (float)((float)((float)(v359 *
                                                                    v327) +
                                                            0x0.0p+0f) +
                                                    (float)(v360 * v325)) +
                                            (float)(v361 * v326);
                                        *((float*)v1029 + 1) =
                                            (float)((float)((float)(v359 *
                                                                    v345) +
                                                            0x0.0p+0f) +
                                                    (float)(v360 * v343)) +
                                            (float)(v361 * v344);
                                        *(float*)&v1029[1] =
                                            (float)((float)((float)(v359 *
                                                                    v991) +
                                                            0x0.0p+0f) +
                                                    (float)(v360 * v994)) +
                                            (float)(v361 * v997);
                                        *(float*)v1030 =
                                            (float)((float)((float)(v362 *
                                                                    v345) +
                                                            0x0.0p+0f) +
                                                    (float)(v364 * v343)) +
                                            (float)(v363 * v344);
                                        *((float*)&v1029[1] + 1) =
                                            (float)((float)((float)(v362 *
                                                                    v327) +
                                                            0x0.0p+0f) +
                                                    (float)(v364 * v325)) +
                                            (float)(v363 * v326);
                                        *((float*)v1030 + 1) =
                                            (float)((float)((float)(v362 *
                                                                    v991) +
                                                            0x0.0p+0f) +
                                                    (float)(v364 * v994)) +
                                            (float)(v363 * v997);
                                        *(float*)&v1030[1] =
                                            (float)((float)((float)(v365 *
                                                                    v327) +
                                                            0x0.0p+0f) +
                                                    (float)(v366 * v325)) +
                                            (float)(v367 * v326);
                                        *((float*)&v1030[1] + 1) =
                                            (float)((float)((float)(v365 *
                                                                    v345) +
                                                            0x0.0p+0f) +
                                                    (float)(v366 * v343)) +
                                            (float)(v367 * v344);
                                        *(float*)&v1030[2] =
                                            (float)((float)((float)(v365 *
                                                                    v991) +
                                                            0x0.0p+0f) +
                                                    (float)(v366 * v994)) +
                                            (float)(v367 * v997);
                                        SdkRoutine_879fd0(v5 + 200, &v917, v880,
                                                          &v853, v1029);
                                        if ((v1025 & 0x100000000LL) != 0) {
                                        LABEL_243:
                                          v1029[0] = 0;
                                          v1029[1] = 0;
                                          memset(v918, 0, 28);
                                          v917 = 0;
                                          v406 =
                                              nerd_gyro_pointing_GyroPointingKalmanFilter_AddRelativeRotationVariable_plt(
                                                  v5 + 200, v1029, &v917);
                                          v407 = *(_QWORD*)(v300 + 16);
                                          v408 = *(_QWORD*)(v300 + 24);
                                          v409 = *(_QWORD*)(v300 + 32);
                                          v410 = v406;
                                          v411 = *(__int64**)(v5 + 8496);
                                          v412 = *(_QWORD*)(v5 + 8504);
                                          v413 = *(_QWORD*)(v5 + 8512);
                                          v414 = *(__int64**)(v5 + 8520);
                                          WORD2(v984) = 0;
                                          v985 = 0;
                                          WORD2(v986) = 0;
                                          v987 = 0;
                                          v989 = 0;
                                          v990 = 0;
                                          v992 = 0;
                                          v993 = 0;
                                          v995 = 0;
                                          v996 = 0;
                                          v998 = 0;
                                          v862 = 0;
                                          v863 = 3;
                                          v999 = 0;
                                          v1001 = 0;
                                          v1002 = 0;
                                          v1004 = 0;
                                          v1005 = 0;
                                          v1007 = 0;
                                          v1008 = 0;
                                          v970 = 0;
                                          v969 = 0;
                                          v968 = nullptr;
                                          v967 = 0;
                                          v966 = 0;
                                          v965 = nullptr;
                                          v964 = 0;
                                          v963 = 0;
                                          v962 = nullptr;
                                          v853 = v407;
                                          v854 = v408;
                                          v415 = *(_QWORD*)(v5 + 8536);
                                          v416 = *(_QWORD*)(v5 + 8528);
                                          v855 = v409;
                                          v856 = v411;
                                          v857 = v412;
                                          v858 = v413;
                                          v861 = v415;
                                          v859 = v414;
                                          v860 = v416;
                                          v1021 = 9;
                                          v417 = *(float*)v300 + 0x0.0p+0f;
                                          v1009 = 0;
                                          v1010 = 1065353216;
                                          v1021 = 10;
                                          v418 =
                                              *(float*)(v300 + 4) + 0x0.0p+0f;
                                          v1011 = 1;
                                          v1012 = 1065353216;
                                          v1021 = 11;
                                          v419 =
                                              *(float*)(v300 + 8) + 0x0.0p+0f;
                                          *(_QWORD*)v918 = 3;
                                          *(_QWORD*)&v918[24] = 4;
                                          *(_QWORD*)&v918[72] = 4;
                                          *(_QWORD*)&v918[48] = 5;
                                          *(_QWORD*)&v918[144] = 5;
                                          *(_QWORD*)&v918[96] = 6;
                                          *(_QWORD*)&v918[120] = 7;
                                          *(_QWORD*)&v918[168] = 7;
                                          v1014 = 1065353216;
                                          v920 = 8;
                                          v1021 = 12;
                                          v1013 = 2;
                                          v962 = &v984;
                                          v963 = 9;
                                          v965 = &v984;
                                          v966 = 10;
                                          *(float*)&v964 = v417;
                                          *(float*)&v967 = v418;
                                          v968 = &v984;
                                          v969 = 11;
                                          v1048 = 0;
                                          v1049 = 0;
                                          v1046 = 0;
                                          v1047 = 0;
                                          v1044 = 0;
                                          v1045 = 0;
                                          v1042 = 0;
                                          v1043 = 0;
                                          v1040 = 0;
                                          v1041 = 0;
                                          v1038 = 0;
                                          v1039 = 0;
                                          v1036 = 0;
                                          v1037 = 0;
                                          v1034 = 0;
                                          v1035 = 0;
                                          v1032 = 0;
                                          v1033 = 0;
                                          v1031 = 0;
                                          v1029[1] = 0;
                                          memset(v1030, 0, sizeof(v1030));
                                          v1029[0] = 0;
                                          v921 = 0;
                                          *(_QWORD*)&v918[176] = 0;
                                          *(_QWORD*)&v918[152] = 0;
                                          *(_QWORD*)&v918[128] = 0;
                                          *(_QWORD*)&v918[104] = 0;
                                          *(_QWORD*)&v918[80] = 0;
                                          *(_QWORD*)&v918[56] = 0;
                                          *(_QWORD*)&v918[32] = 0;
                                          *(_QWORD*)&v918[8] = 0;
                                          v917 = (__int64)&v984;
                                          *(_QWORD*)&v918[16] = &v984;
                                          *(_QWORD*)&v918[64] = &v984;
                                          *(_QWORD*)&v918[40] = &v984;
                                          *(_QWORD*)&v918[136] = &v984;
                                          *(_QWORD*)&v918[88] = &v984;
                                          *(_QWORD*)&v918[112] = &v984;
                                          *(_QWORD*)&v918[160] = &v984;
                                          v919 = &v984;
                                          *(float*)&v970 = v419;
                                          SdkRoutine_879f90((void*)(v1029),
                                                            &v917, v5 + 8456);
                                          v913 = 0;
                                          v912 = 0;
                                          v911 = 0;
                                          v910 = 0;
                                          v909 = 0;
                                          v908 = 0;
                                          v907 = 0;
                                          v906 = 0;
                                          v905 = 0;
                                          SdkRoutine_879fa0((void*)(&v905),
                                                            v1029, &v962);
                                          v420 = *(float*)&v907;
                                          v421 = v905;
                                          v888 = 0;
                                          v889 = 0;
                                          v886 = 0;
                                          v887 = 0;
                                          v884 = 0;
                                          v885 = 0;
                                          v883 = 0;
                                          v881 = 0;
                                          v882 = (__typeof__(v882)){0};
                                          v880[0] = 0;
                                          v880[1] = 0;
                                          if (v905 != 0) {
                                            v422 =
                                                v905 +
                                                16LL * *(_QWORD*)(v905 + 4096);
                                            *(_WORD*)(v422 + 4) =
                                                (unsigned __int8)v906;
                                            *(float*)(v422 + 8) = v817;
                                            *(_DWORD*)(v422 + 12) = 0;
                                            v423 = *(_QWORD*)(v421 + 4096);
                                            *(_QWORD*)(v421 + 4096) = v423 + 1;
                                            v424 = *(float*)&v910;
                                            v425 = v908;
                                            if (v908 != 0) {
                                              goto LABEL_245;
                                            }
                                          }
                                          else {
                                            v423 = -1;
                                            v424 = *(float*)&v910;
                                            v425 = v908;
                                            if (v908 != 0) {
                                            LABEL_245:
                                              v426 = v425 +
                                                     16LL * *(_QWORD*)(v425 +
                                                                       4096);
                                              *(_WORD*)(v426 + 4) =
                                                  (unsigned __int8)v909;
                                              *(float*)(v426 + 8) = v817;
                                              *(_DWORD*)(v426 + 12) = 0;
                                              v427 = *(_QWORD*)(v425 + 4096);
                                              *(_QWORD*)(v425 + 4096) =
                                                  v427 + 1;
                                              v428 = *(float*)&v913;
                                              v429 = v911;
                                              if (v911 != 0) {
                                              LABEL_246:
                                                v430 = v429 +
                                                       16LL * *(_QWORD*)(v429 +
                                                                         4096);
                                                *(_WORD*)(v430 + 4) =
                                                    (unsigned __int8)v912;
                                                *(float*)(v430 + 8) = v817;
                                                *(_DWORD*)(v430 + 12) = 0;
                                                v431 = *(_QWORD*)(v429 + 4096);
                                                *(_QWORD*)(v429 + 4096) =
                                                    v431 + 1;
                                              LABEL_250:
                                                v917 = v421;
                                                *(_QWORD*)v918 = v423;
                                                *(_DWORD*)&v918[12] = 0;
                                                *(_QWORD*)&v918[16] = v425;
                                                *(_QWORD*)&v918[24] = v427;
                                                *(_DWORD*)&v918[36] = 0;
                                                *(_QWORD*)&v918[40] = v429;
                                                *(_QWORD*)&v918[48] = v431;
                                                *(_DWORD*)&v918[60] = 0;
                                                *(float*)&v918[8] = v817 * v420;
                                                *(float*)&v918[32] =
                                                    v817 * v424;
                                                *(float*)&v918[56] =
                                                    v817 * v428;
                                                kalman_transition_70e160(
                                                    (void*)((float*)v880),
                                                    (float*)&v917);
                                                v432 = v883;
                                                v433 = v886;
                                                v434 = v889;
                                                *(_DWORD*)v410 = v881;
                                                *(_DWORD*)(v410 + 4) = v432;
                                                *(_DWORD*)(v410 + 8) = v433;
                                                *(_DWORD*)(v410 + 12) = v434;
                                                v957 = 0;
                                                v956 = 0;
                                                v955 = 0;
                                                v954 = 0;
                                                v953 = 0;
                                                v952 = 0;
                                                v951 = 0;
                                                v949 = 0;
                                                v950 = 0;
                                                v435 = *(float*)(v410 + 8);
                                                *(float*)&v436 = -*(float*)v410;
                                                *(float*)&v437 =
                                                    -*(float*)(v410 + 4);
                                                HIDWORD(v844_.v845) =
                                                    *(_DWORD*)(v410 + 12);
                                                v844_.v844 =
                                                    __PAIR64__(v437, v436);
                                                *(float*)&v844_.v845 = -v435;
                                                SdkRoutine_720480(
                                                    (void*)((float*)&v917),
                                                    v880, (float*)&v844_.v844);
                                                SdkRoutine_722d40(
                                                    (void*)((__int64)&v949),
                                                    (float*)&v917);
                                                v438 = *(_QWORD*)(v410 + 24);
                                                v833_.v833 =
                                                    *(_QWORD*)(v410 + 16);
                                                v833_.v834 = v438;
                                                v439 = *(_QWORD*)(v410 + 32);
                                                memset(&v918[28], 0, 72);
                                                v833_.v835 = v439;
                                                v440 = v1021;
                                                if (v1021 != 0) {
                                                  v441 = 16 * v1021 - 16;
                                                  if ((~(_BYTE)v441 & 0x70) !=
                                                      0) {
                                                    v443 = -(
                                                        __int64)(((unsigned __int8)((unsigned int)
                                                                                        v441 >>
                                                                                    4) +
                                                                  1) &
                                                                 7);
                                                    v442 = &v984;
                                                    do {
                                                      *(_DWORD*)v442 = 0;
                                                      v442 += 2;
                                                      v264 =
                                                          __CFADD__(v443++, 1);
                                                    } while (!v264);
                                                  }
                                                  else {
                                                    v442 = &v984;
                                                  }
                                                  if (v441 >= 0x70) {
                                                    v444 = &v984 + 2 * v440;
                                                    do {
                                                      *(_DWORD*)v442 = 0;
                                                      *((_DWORD*)v442 + 4) = 0;
                                                      *((_DWORD*)v442 + 8) = 0;
                                                      *((_DWORD*)v442 + 12) = 0;
                                                      *((_DWORD*)v442 + 16) = 0;
                                                      *((_DWORD*)v442 + 20) = 0;
                                                      *((_DWORD*)v442 + 24) = 0;
                                                      *((_DWORD*)v442 + 28) = 0;
                                                      v442 += 16;
                                                    } while (v442 != v444);
                                                  }
                                                }
                                                if (v949 != 0) {
                                                  *(_DWORD*)(v949 + 16 * v950) =
                                                      1065353216;
                                                }
                                                v445 = v1021;
                                                if (v1021 != 0) {
                                                  v446 = 16 * v1021;
                                                  v447 = 16 * v1021 - 16;
                                                  v448 = (float*)(&v984 +
                                                                  2 * v1021);
                                                  if ((~(_BYTE)v447 & 0x30) !=
                                                      0) {
                                                    v449 = -(
                                                        __int64)(((unsigned __int8)((unsigned int)
                                                                                        v447 >>
                                                                                    4) +
                                                                  1) &
                                                                 3);
                                                    do {
                                                      v450 = *(v448 - 4);
                                                      v448 -= 4;
                                                      v264 =
                                                          __CFADD__(v449++, 1);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v448 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v448 +
                                                                  4)) +
                                                          (float)(v448[2] *
                                                                  v450);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v448 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v448 +
                                                                  5)) +
                                                          (float)(v448[3] *
                                                                  v450);
                                                    } while (!v264);
                                                  }
                                                  if (v447 >= 0x30) {
                                                    v451 = v448 - 16;
                                                    do {
                                                      v452 = v451[12];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              52)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  52)) +
                                                          (float)(v451[14] *
                                                                  v452);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              53)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  53)) +
                                                          (float)(v451[15] *
                                                                  v452);
                                                      v453 = v451[8];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              36)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  36)) +
                                                          (float)(v451[10] *
                                                                  v453);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              37)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  37)) +
                                                          (float)(v451[11] *
                                                                  v453);
                                                      v454 = v451[4];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              20)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  20)) +
                                                          (float)(v451[6] *
                                                                  v454);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              21)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  21)) +
                                                          (float)(v451[7] *
                                                                  v454);
                                                      v455 = *v451;
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  4)) +
                                                          (float)(v451[2] *
                                                                  *v451);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v451 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v451 +
                                                                  5)) +
                                                          (float)(v451[3] *
                                                                  v455);
                                                      v117 =
                                                          v451 == (float*)&v984;
                                                      v451 -= 16;
                                                    } while (!v117);
                                                  }
                                                }
                                                else {
                                                  v446 = 0;
                                                }
                                                v917 = __PAIR64__(v986, v984);
                                                *(float*)v918 = v988;
                                                *(float*)&v918[4] = v991;
                                                *(float*)&v918[8] = v994;
                                                *(float*)&v918[12] = v997;
                                                *(_DWORD*)&v918[16] = v1000;
                                                *(_DWORD*)&v918[20] = v1003;
                                                *(_DWORD*)&v918[24] = v1006;
                                                if (v445 != 0) {
                                                  v456 = v446 - 16;
                                                  if ((~((_BYTE)v446 - 16) &
                                                       0x70) != 0) {
                                                    v458 =
                                                        ((unsigned __int8)((unsigned int)
                                                                               v456 >>
                                                                           4) +
                                                         1) &
                                                        7;
                                                    v457 = (char*)&v984;
                                                    do {
                                                      *(_DWORD*)v457 = 0;
                                                      v457 += 16;
                                                      --v458;
                                                    } while (v458 != 0);
                                                  }
                                                  else {
                                                    v457 = (char*)&v984;
                                                  }
                                                  if (v456 >= 0x70) {
                                                    v459 = (char*)&v984 + v446;
                                                    do {
                                                      *(_DWORD*)v457 = 0;
                                                      *((_DWORD*)v457 + 4) = 0;
                                                      *((_DWORD*)v457 + 8) = 0;
                                                      *((_DWORD*)v457 + 12) = 0;
                                                      *((_DWORD*)v457 + 16) = 0;
                                                      *((_DWORD*)v457 + 20) = 0;
                                                      *((_DWORD*)v457 + 24) = 0;
                                                      *((_DWORD*)v457 + 28) = 0;
                                                      v457 += 128;
                                                    } while (v457 != v459);
                                                  }
                                                }
                                                if (v952 != 0) {
                                                  *(_DWORD*)(v952 + 16 * v953) =
                                                      1065353216;
                                                }
                                                v460 = v1021;
                                                if (v1021 != 0) {
                                                  v461 = 16 * v1021;
                                                  v462 = 16 * v1021 - 16;
                                                  v463 = (float*)(&v984 +
                                                                  2 * v1021);
                                                  if ((~(_BYTE)v462 & 0x30) !=
                                                      0) {
                                                    v464 = -(
                                                        __int64)(((unsigned __int8)((unsigned int)
                                                                                        v462 >>
                                                                                    4) +
                                                                  1) &
                                                                 3);
                                                    do {
                                                      v465 = *(v463 - 4);
                                                      v463 -= 4;
                                                      v264 =
                                                          __CFADD__(v464++, 1);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v463 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v463 +
                                                                  4)) +
                                                          (float)(v463[2] *
                                                                  v465);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v463 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v463 +
                                                                  5)) +
                                                          (float)(v463[3] *
                                                                  v465);
                                                    } while (!v264);
                                                  }
                                                  if (v462 >= 0x30) {
                                                    v466 = v463 - 16;
                                                    do {
                                                      v467 = v466[12];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              52)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  52)) +
                                                          (float)(v466[14] *
                                                                  v467);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              53)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  53)) +
                                                          (float)(v466[15] *
                                                                  v467);
                                                      v468 = v466[8];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              36)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  36)) +
                                                          (float)(v466[10] *
                                                                  v468);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              37)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  37)) +
                                                          (float)(v466[11] *
                                                                  v468);
                                                      v469 = v466[4];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              20)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  20)) +
                                                          (float)(v466[6] *
                                                                  v469);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              21)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  21)) +
                                                          (float)(v466[7] *
                                                                  v469);
                                                      v470 = *v466;
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  4)) +
                                                          (float)(v466[2] *
                                                                  *v466);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v466 +
                                                                  5)) +
                                                          (float)(v466[3] *
                                                                  v470);
                                                      v117 =
                                                          v466 == (float*)&v984;
                                                      v466 -= 16;
                                                    } while (!v117);
                                                  }
                                                }
                                                else {
                                                  v461 = 0;
                                                }
                                                *(_DWORD*)&v918[28] = v984;
                                                *(_DWORD*)&v918[32] = v986;
                                                *(float*)&v918[36] = v988;
                                                *(float*)&v918[40] = v991;
                                                *(float*)&v918[44] = v994;
                                                *(float*)&v918[48] = v997;
                                                *(_DWORD*)&v918[52] = v1000;
                                                *(_DWORD*)&v918[56] = v1003;
                                                *(_DWORD*)&v918[60] = v1006;
                                                if (v460 != 0) {
                                                  v471 = v461 - 16;
                                                  if ((~((_BYTE)v461 - 16) &
                                                       0x70) != 0) {
                                                    v473 =
                                                        ((unsigned __int8)((unsigned int)
                                                                               v471 >>
                                                                           4) +
                                                         1) &
                                                        7;
                                                    v472 = (char*)&v984;
                                                    do {
                                                      *(_DWORD*)v472 = 0;
                                                      v472 += 16;
                                                      --v473;
                                                    } while (v473 != 0);
                                                  }
                                                  else {
                                                    v472 = (char*)&v984;
                                                  }
                                                  if (v471 >= 0x70) {
                                                    v474 = (char*)&v984 + v461;
                                                    do {
                                                      *(_DWORD*)v472 = 0;
                                                      *((_DWORD*)v472 + 4) = 0;
                                                      *((_DWORD*)v472 + 8) = 0;
                                                      *((_DWORD*)v472 + 12) = 0;
                                                      *((_DWORD*)v472 + 16) = 0;
                                                      *((_DWORD*)v472 + 20) = 0;
                                                      *((_DWORD*)v472 + 24) = 0;
                                                      *((_DWORD*)v472 + 28) = 0;
                                                      v472 += 128;
                                                    } while (v472 != v474);
                                                  }
                                                }
                                                if (v955 != 0) {
                                                  *(_DWORD*)(v955 + 16 * v956) =
                                                      1065353216;
                                                }
                                                if (v1021 != 0) {
                                                  v475 = 16 * v1021 - 16;
                                                  v476 = (float*)(&v984 +
                                                                  2 * v1021);
                                                  if ((~(_BYTE)v475 & 0x30) !=
                                                      0) {
                                                    v477 = -(
                                                        __int64)(((unsigned __int8)((unsigned int)
                                                                                        v475 >>
                                                                                    4) +
                                                                  1) &
                                                                 3);
                                                    do {
                                                      v478 = *(v476 - 4);
                                                      v476 -= 4;
                                                      v264 =
                                                          __CFADD__(v477++, 1);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v476 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v476 +
                                                                  4)) +
                                                          (float)(v476[2] *
                                                                  v478);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v476 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v476 +
                                                                  5)) +
                                                          (float)(v476[3] *
                                                                  v478);
                                                    } while (!v264);
                                                  }
                                                  if (v475 >= 0x30) {
                                                    v479 = v476 - 16;
                                                    do {
                                                      v480 = v479[12];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              52)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  52)) +
                                                          (float)(v479[14] *
                                                                  v480);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              53)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  53)) +
                                                          (float)(v479[15] *
                                                                  v480);
                                                      v481 = v479[8];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              36)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  36)) +
                                                          (float)(v479[10] *
                                                                  v481);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              37)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  37)) +
                                                          (float)(v479[11] *
                                                                  v481);
                                                      v482 = v479[4];
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              20)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  20)) +
                                                          (float)(v479[6] *
                                                                  v482);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              21)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  21)) +
                                                          (float)(v479[7] *
                                                                  v482);
                                                      v483 = *v479;
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              4)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  4)) +
                                                          (float)(v479[2] *
                                                                  *v479);
                                                      *((float*)&v984 +
                                                        4 * *((unsigned __int8*)
                                                                  v479 +
                                                              5)) =
                                                          *((float*)&v984 +
                                                            4 * *((unsigned __int8*)
                                                                      v479 +
                                                                  5)) +
                                                          (float)(v479[3] *
                                                                  v483);
                                                      v117 =
                                                          v479 == (float*)&v984;
                                                      v479 -= 16;
                                                    } while (!v117);
                                                  }
                                                }
                                                LODWORD(v846_.v848) = 0;
                                                v846_.v846 = 0;
                                                v846_.v847 = 0;
                                                v844_.v844 = 0;
                                                v844_.v845 = 0;
                                                *(_DWORD*)&v918[64] = v984;
                                                *(_DWORD*)&v918[68] = v986;
                                                *(float*)&v918[80] = v994;
                                                *(float*)&v918[84] = v997;
                                                *(_DWORD*)&v918[88] = v1000;
                                                *(_DWORD*)&v918[92] = v1003;
                                                *(float*)&v918[72] = v988;
                                                *(float*)&v918[76] = v991;
                                                *(_DWORD*)&v918[96] = v1006;
                                                SdkRoutine_87a000(
                                                    v5 + 200, &v917, &v853,
                                                    &v833_.v833, &v844_.v844);
                                                nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveUnbiasedGyrVariable_plt(
                                                    v5 + 200);
                                                v484 = *(_QWORD*)(v5 + 8208);
                                                v485 = *(_QWORD*)(v410 + 16);
                                                v486 = *(_QWORD*)(v410 + 24);
                                                v487 = *(_QWORD*)(v410 + 32);
                                                v488 = *(float*)(v5 + 8184) +
                                                       0x0.0p+0f;
                                                v880[0] = *(_QWORD*)(v5 + 8200);
                                                v880[1] = v484;
                                                v489 = *(_QWORD*)(v5 + 8216);
                                                v490 = *(_QWORD*)(v5 + 8240);
                                                v491 = *(float*)(v5 + 8188);
                                                v884 = v485;
                                                v885 = v486;
                                                v886 = v487;
                                                v887 = 0;
                                                v859 = nullptr;
                                                v860 = 0;
                                                v857 = 0;
                                                v858 = 0;
                                                v855 = 0;
                                                v856 = nullptr;
                                                v853 = 0;
                                                v854 = 0;
                                                v1029[0] = 0x3F80000000000000LL;
                                                v1029[1] = 0;
                                                v1030[0] = 0;
                                                v492 = v491 + 0x0.0p+0f;
                                                v881 = v489;
                                                *(_QWORD*)&v882 = v490;
                                                v493 = *(_QWORD*)(v5 + 8248);
                                                v494 = *(_QWORD*)(v5 + 8256);
                                                v495 = *(float*)(v5 + 0x2000);
                                                *(_QWORD*)((char*)&v1030[1] +
                                                           4) = 0;
                                                *(_QWORD*)((char*)&v1030[2] +
                                                           4) = 0;
                                                LODWORD(v1030[1]) = 1065353216;
                                                HIDWORD(v1030[3]) = 1065353216;
                                                *((_QWORD*)&v882 + 1) = v493;
                                                v883 = v494;
                                                v888 = 3;
                                                v889 = 6;
                                                v496 = v495 + 0x0.0p+0f;
                                                math_724480(
                                                    (void*)((float*)&v917),
                                                    (float*)v1029);
                                                math_7241f0(
                                                    (void*)((float*)&v853),
                                                    (float*)&v917,
                                                    (float*)(v5 + 8224));
                                                v969 = 0;
                                                v968 = nullptr;
                                                v967 = 0;
                                                v966 = 0;
                                                v965 = nullptr;
                                                v964 = 0;
                                                v963 = 0;
                                                v962 = nullptr;
                                                v1029[0] = 0x3F80000000000000LL;
                                                v1029[1] = 0;
                                                v1030[0] = 0;
                                                *(_QWORD*)((char*)&v1030[1] +
                                                           4) = 0;
                                                *(_QWORD*)((char*)&v1030[2] +
                                                           4) = 0;
                                                LODWORD(v1030[1]) = 1065353216;
                                                HIDWORD(v1030[3]) = 1065353216;
                                                v742 = *((float*)&v853 + 1);
                                                v739 = *((float*)&v855 + 1);
                                                v763 = *((float*)&v857 + 1);
                                                v766 = *((float*)&v859 + 1);
                                                v844_.v845 = __PAIR64__(
                                                    (unsigned int)v859, v857);
                                                v844_.v844 =
                                                    __PAIR64__(v855, v853);
                                                v729 = *(float*)&v854;
                                                v730 = v856;
                                                v731 = *((float*)&v854 + 1);
                                                v745 = *((float*)&v858 + 1);
                                                v748 = *(float*)&v858;
                                                v757 = *((float*)&v860 + 1);
                                                v760 = *(float*)&v860;
                                                math_724480(
                                                    (void*)((float*)&v917),
                                                    (float*)v1029);
                                                math_7241f0(
                                                    (void*)((float*)&v962),
                                                    (float*)&v917,
                                                    (float*)v410);
                                                v818[0] = v488;
                                                v818[1] = 0x1.0000000000000p+0f;
                                                v820 = v492;
                                                v822 = 0;
                                                v823 = v496;
                                                v819 = 0;
                                                v825 = 1065353216;
                                                v821 = 0x3F80000000000000LL;
                                                v824 = 0;
                                                v780 = v963;
                                                v800 = *((float*)&v966 + 1);
                                                v811 = *((float*)&v968 + 1);
                                                v833_.v834 = __PAIR64__(
                                                    (unsigned int)v968, v966);
                                                v775 = v965;
                                                v807 = *(float*)&v967;
                                                v769 = *((float*)&v964 + 1);
                                                v803 = *((float*)&v967 + 1);
                                                v497 = v969;
                                                v771 = *((float*)&v962 + 1);
                                                v833_.v833 = __PAIR64__(
                                                    v964, (unsigned int)v962);
                                                v498 =
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                *(float*)&v962 *
                                                                *(float*)&v962)) +
                                                            (float)(PSEUDO_UNFUSED(
                                                                *(float*)&v964 *
                                                                *(float*)&v964))) +
                                                    (float)(PSEUDO_UNFUSED(
                                                        *(float*)&v833_.v834 *
                                                        *(float*)&v833_.v834));
                                                v499 =
                                                    (float)((float)((float)(*(float*)&v962 *
                                                                            v488) +
                                                                    0x0.0p+0f) +
                                                            (float)(*(float*)&v964 *
                                                                    v492)) +
                                                    (float)(*(float*)&v966 *
                                                            v496);
                                                v500 =
                                                    0x1.0000000000000p+1f /
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                *(float*)&v968 *
                                                                *(float*)&v968)) +
                                                            v498);
                                                v720 =
                                                    v492 +
                                                    (float)(PSEUDO_UNFUSED(
                                                        v500 *
                                                        (float)((float)((float)(PSEUDO_UNFUSED(
                                                                            *(float*)&v964 *
                                                                            v499)) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v492 *
                                                                            v498))) -
                                                                (float)(PSEUDO_UNFUSED(
                                                                    (float)((float)(*(float*)&v966 *
                                                                                    v488) -
                                                                            (float)(PSEUDO_UNFUSED(
                                                                                v496 *
                                                                                *(float*)&v962))) *
                                                                    *(float*)&v968)))));
                                                v722 =
                                                    v488 +
                                                    (float)(PSEUDO_UNFUSED(
                                                        v500 *
                                                        (float)((float)((float)(PSEUDO_UNFUSED(
                                                                            *(float*)&v962 *
                                                                            v499)) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v488 *
                                                                            v498))) -
                                                                (float)(PSEUDO_UNFUSED(
                                                                    *(float*)&v968 *
                                                                    (float)((float)(*(float*)&v964 *
                                                                                    v496) -
                                                                            (float)(PSEUDO_UNFUSED(
                                                                                v492 *
                                                                                *(float*)&v966))))))));
                                                v718 =
                                                    v496 +
                                                    (float)(PSEUDO_UNFUSED(
                                                        v500 *
                                                        (float)((float)((float)(PSEUDO_UNFUSED(
                                                                            *(float*)&v966 *
                                                                            v499)) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v496 *
                                                                            v498))) -
                                                                (float)(PSEUDO_UNFUSED(
                                                                    (float)((float)(*(float*)&v962 *
                                                                                    v492) -
                                                                            (float)(PSEUDO_UNFUSED(
                                                                                v488 *
                                                                                *(float*)&v964))) *
                                                                    *(float*)&v968)))));
                                                kalman_transition_70ed80(
                                                    (void*)((float*)&v917),
                                                    (float*)&v833_.v833, v818);
                                                *(_DWORD*)&v918[8] = 0;
                                                *(_QWORD*)&v918[44] =
                                                    1065353216;
                                                *(_QWORD*)&v918[56] = 0;
                                                *(_QWORD*)&v918[64] =
                                                    0x3F80000000000000LL;
                                                v793 = *((float*)&v917 + 1);
                                                v785 = *(_QWORD*)&v918[16];
                                                *(_DWORD*)&v918[52] =
                                                    HIDWORD(v833_.v834);
                                                v501 = *(_QWORD*)v918;
                                                v502 = *(float*)&v918[28];
                                                *(_QWORD*)v918 = 0;
                                                *(_QWORD*)&v918[16] =
                                                    0x3F80000000000000LL;
                                                *(_QWORD*)&v918[24] = 0;
                                                v503 = *(float*)&v918[12];
                                                v778 = v502;
                                                *(_DWORD*)&v918[12] =
                                                    HIDWORD(v833_.v833);
                                                v790 = v503;
                                                v783 = *(float*)&v918[32];
                                                v917 =
                                                    (unsigned int)v833_.v833 |
                                                    0x3F80000000000000LL;
                                                *(_DWORD*)&v918[32] =
                                                    v833_.v834;
                                                v504 = *(float*)&v918[36];
                                                *(_QWORD*)&v918[36] = 0;
                                                v773 = v504;
                                                kalman_transition_70f080(
                                                    (void*)((float*)v1029),
                                                    (float*)&v917, v488, v492,
                                                    v496);
                                                v505 = *((float*)v1029 + 1);
                                                v506 = v1029[1];
                                                v507 = *(float*)v1030;
                                                v1029[0] =
                                                    (unsigned int)v844_.v844 |
                                                    0x3F80000000000000LL;
                                                v1029[1] = 0;
                                                LODWORD(v1030[0]) = 0;
                                                HIDWORD(v1030[0]) =
                                                    HIDWORD(v844_.v844);
                                                HIDWORD(v1030[5]) =
                                                    HIDWORD(v844_.v845);
                                                LODWORD(v1030[3]) = v844_.v845;
                                                v1031 = 0;
                                                v1032 = 0x3F80000000000000LL;
                                                v755 = v507;
                                                v508 = -(
                                                    float)((float)((float)((float)((float)(*(float*)&v844_
                                                                                                .v844 *
                                                                                           *(float*)&v833_
                                                                                                .v833) +
                                                                                   0x0.0p+0f) +
                                                                           (float)(*((float*)&v844_
                                                                                         .v844 +
                                                                                     1) *
                                                                                   *((float*)&v833_
                                                                                         .v833 +
                                                                                     1))) +
                                                                   (float)(*(float*)&v844_
                                                                                .v845 *
                                                                           *(float*)&v833_
                                                                                .v834)) -
                                                           (float)(*((float*)&v844_
                                                                         .v845 +
                                                                     1) *
                                                                   *((float*)&v833_
                                                                         .v834 +
                                                                     1)));
                                                v726 = *(float*)&v1030[1];
                                                v727 = v505;
                                                v509 = *((float*)&v1030[2] + 1);
                                                v510 = *(float*)&v1030[2];
                                                v728 = *((float*)&v1030[1] + 1);
                                                v1030[1] = 0x3F80000000000000LL;
                                                v1030[2] = 0;
                                                v736 = v510;
                                                v511 = *(
                                                    _QWORD*)((char*)&v1030[3] +
                                                             4);
                                                *(_QWORD*)((char*)&v1030[3] +
                                                           4) = 0;
                                                v734 = *((float*)&v1030[4] + 1);
                                                v512 = *(float*)&v1030[5];
                                                *(_QWORD*)((char*)&v1030[4] +
                                                           4) = 1065353216;
                                                v751 = v512;
                                                v753 = v509;
                                                *(float*)&v513 =
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                *((float*)&v833_
                                                                      .v834 +
                                                                  1) *
                                                                *(float*)&v844_
                                                                     .v844)) +
                                                            (float)(PSEUDO_UNFUSED(
                                                                *((float*)&v844_
                                                                      .v845 +
                                                                  1) *
                                                                *(float*)&v833_
                                                                     .v833))) +
                                                    (float)((float)(*((float*)&v844_
                                                                          .v844 +
                                                                      1) *
                                                                    *(float*)&v833_
                                                                         .v834) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                *((float*)&v833_
                                                                      .v833 +
                                                                  1) *
                                                                *(float*)&v844_
                                                                     .v845)));
                                                v514 =
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                *((float*)&v833_
                                                                      .v834 +
                                                                  1) *
                                                                *((float*)&v844_
                                                                      .v844 +
                                                                  1))) +
                                                            (float)(PSEUDO_UNFUSED(
                                                                *((float*)&v844_
                                                                      .v845 +
                                                                  1) *
                                                                *((float*)&v833_
                                                                      .v833 +
                                                                  1)))) +
                                                    (float)((float)(*(float*)&v844_
                                                                         .v845 *
                                                                    *(float*)&v833_
                                                                         .v833) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                *(float*)&v833_
                                                                     .v834 *
                                                                *(float*)&v844_
                                                                     .v844)));
                                                v515 =
                                                    (float)((float)(*(float*)&v844_
                                                                         .v844 *
                                                                    *((float*)&v833_
                                                                          .v833 +
                                                                      1)) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                *(float*)&v833_
                                                                     .v833 *
                                                                *((float*)&v844_
                                                                      .v844 +
                                                                  1)))) +
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                *((float*)&v833_
                                                                      .v834 +
                                                                  1) *
                                                                *(float*)&v844_
                                                                     .v845)) +
                                                            (float)(PSEUDO_UNFUSED(
                                                                *((float*)&v844_
                                                                      .v845 +
                                                                  1) *
                                                                *(float*)&v833_
                                                                     .v834)));
                                                kalman_transition_70f680(
                                                    (void*)((float*)&v917),
                                                    (float*)v1029,
                                                    (float*)&v833_.v833);
                                                v516 = *((float*)&v917 + 1);
                                                v517 = *(float*)&v918[16];
                                                v518 = *(float*)&v918[56];
                                                v1029[1] = 0;
                                                LODWORD(v1030[0]) = 0;
                                                v1030[1] = 0x3F80000000000000LL;
                                                v1030[2] = 0;
                                                *(_QWORD*)((char*)&v1030[3] +
                                                           4) = 0;
                                                *(_QWORD*)((char*)&v1030[4] +
                                                           4) = 1065353216;
                                                v1031 = 0;
                                                v1032 = 0x3F80000000000000LL;
                                                v703 = *(float*)v918;
                                                v704 = *(float*)&v918[20];
                                                v519 = *(_QWORD*)&v918[24];
                                                v705 = *(_QWORD*)&v918[36];
                                                v710 = *(float*)&v918[44];
                                                v711 = *(float*)&v918[4];
                                                HIDWORD(v1030[0]) =
                                                    HIDWORD(v833_.v833);
                                                v724 = *(float*)&v918[48];
                                                v725 = *(float*)&v918[8];
                                                HIDWORD(v1030[5]) =
                                                    HIDWORD(v833_.v834);
                                                v702 = *(float*)&v918[60];
                                                v1029[0] =
                                                    (unsigned int)v833_.v833 |
                                                    0x3F80000000000000LL;
                                                LODWORD(v1030[3]) = v833_.v834;
                                                v520 = *(_QWORD*)&v918[64];
                                                kalman_transition_70f9d0(
                                                    (void*)((float*)&v917),
                                                    (float*)&v844_.v844,
                                                    (float*)v1029);
                                                v521 = *((float*)&v917 + 1);
                                                v522 = *(_DWORD*)v918;
                                                v523 = *(float*)&v918[20];
                                                v524 = *(float*)&v918[44];
                                                *(float*)(v5 + 8228) = v514;
                                                *(float*)(v5 + 8232) = v515;
                                                *((float*)v1030 + 1) = v514;
                                                *(float*)&v1030[3] = v515;
                                                *(float*)(v5 + 8224) =
                                                    *(float*)&v513;
                                                *(float*)(v5 + 8236) = v508;
                                                v1029[0] =
                                                    v513 | 0x3F80000000000000LL;
                                                v1029[1] = 0;
                                                LODWORD(v1030[0]) = 0;
                                                v1030[1] = 0x3F80000000000000LL;
                                                v1030[2] = 0;
                                                *(_QWORD*)((char*)&v1030[3] +
                                                           4) = 0;
                                                *(_QWORD*)((char*)&v1030[4] +
                                                           4) = 1065353216;
                                                *((float*)&v1030[5] + 1) = v508;
                                                v1031 = 0;
                                                v1032 = 0x3F80000000000000LL;
                                                *((float*)&v950 + 1) = v508;
                                                v712 = v521;
                                                v715 = __PAIR64__(
                                                    *(unsigned int*)&v918[4],
                                                    v522);
                                                v525 = *(float*)&v918[16];
                                                v716 = *(float*)&v918[8];
                                                *(float*)(v5 + 8188) = v720;
                                                *(float*)(v5 + 8184) = v722;
                                                v526 = *(float*)&v918[48];
                                                *(float*)(v5 + 0x2000) = v718;
                                                v713 = v526;
                                                v714 = v524;
                                                v706 = v525;
                                                v707 = *(float*)&v918[24];
                                                v717 = *(float*)&v918[60];
                                                v719 = *(float*)&v918[56];
                                                v708 = v523;
                                                v709 = *(float*)&v918[28];
                                                v527 = -v515;
                                                v528 = *(float*)&v918[68];
                                                *(float*)&v950 = v527;
                                                v721 = *(float*)&v918[40];
                                                v723 = *(float*)&v918[36];
                                                v529 = -v514;
                                                v530 = *(float*)&v918[64];
                                                *(float*)&v949 =
                                                    -*(float*)&v513;
                                                *((float*)&v949 + 1) = v529;
                                                kalman_transition_70f680(
                                                    (void*)((float*)&v917),
                                                    (float*)v1029,
                                                    (float*)&v949);
                                                math_724870(
                                                    (void*)((float*)&v905),
                                                    (float*)&v917);
                                                v531 = *((float*)&v905 + 1);
                                                v532 = *(float*)&v908;
                                                v533 = *((float*)&v910 + 1);
                                                v534 = *(float*)&v906;
                                                v535 = *((float*)&v908 + 1);
                                                v536 = *(float*)&v911;
                                                v537 = *((float*)&v906 + 1);
                                                v538 = *(float*)&v909;
                                                v539 = *((float*)&v911 + 1);
                                                v540 = (float)(*((float*)&v905 +
                                                                 1) *
                                                               v516) +
                                                       0x0.0p+0f;
                                                v541 = *(float*)&v907;
                                                v542 = *((float*)&v909 + 1);
                                                v543 = *(float*)&v912;
                                                memset(&v918[164], 0, 20);
                                                *(_QWORD*)&v918[156] = 0;
                                                *(_QWORD*)&v918[148] = 0;
                                                v544 =
                                                    (float)((float)((float)(*((float*)&v905 +
                                                                              1) *
                                                                            v703) +
                                                                    0x0.0p+0f) +
                                                            (float)(*(float*)&v906 *
                                                                    v704)) +
                                                    (float)(*((float*)&v906 +
                                                              1) *
                                                            *((float*)&v705 +
                                                              1));
                                                memset(&v918[116], 0, 32);
                                                v905 = *(_QWORD*)(v5 + 8200);
                                                v906 = *(_QWORD*)(v5 + 8208);
                                                v907 = *(_QWORD*)(v5 + 8216);
                                                v545 =
                                                    (float)((float)(v540 +
                                                                    (float)(v534 *
                                                                            v517)) +
                                                            (float)(v537 *
                                                                    *(float*)&v705)) +
                                                    (float)(v541 * v518);
                                                v546 =
                                                    (float)((float)((float)((float)(*(float*)&v908 *
                                                                                    v516) +
                                                                            0x0.0p+0f) +
                                                                    (float)(*((float*)&v908 +
                                                                              1) *
                                                                            v517)) +
                                                            (float)(*(float*)&v909 *
                                                                    *(float*)&v705)) +
                                                    (float)(*((float*)&v909 +
                                                              1) *
                                                            v518);
                                                v547 =
                                                    (float)((float)((float)((float)(*((float*)&v910 +
                                                                                      1) *
                                                                                    v516) +
                                                                            0x0.0p+0f) +
                                                                    (float)(*(float*)&v911 *
                                                                            v517)) +
                                                            (float)(*((float*)&v911 +
                                                                      1) *
                                                                    *(float*)&v705)) +
                                                    (float)(*(float*)&v912 *
                                                            v518);
                                                v548 =
                                                    v544 + (float)(v541 * v702);
                                                v549 =
                                                    (float)((float)((float)((float)(*(float*)&v908 *
                                                                                    v703) +
                                                                            0x0.0p+0f) +
                                                                    (float)(*((float*)&v908 +
                                                                              1) *
                                                                            v704)) +
                                                            (float)(*(float*)&v909 *
                                                                    *((float*)&v705 +
                                                                      1))) +
                                                    (float)(*((float*)&v909 +
                                                              1) *
                                                            v702);
                                                v550 =
                                                    (float)((float)((float)((float)(*((float*)&v910 +
                                                                                      1) *
                                                                                    v703) +
                                                                            0x0.0p+0f) +
                                                                    (float)(*(float*)&v911 *
                                                                            v704)) +
                                                            (float)(*((float*)&v911 +
                                                                      1) *
                                                                    *((float*)&v705 +
                                                                      1))) +
                                                    (float)(*(float*)&v912 *
                                                            v702);
                                                v908 = *(_QWORD*)(v5 + 8240);
                                                v551 = *(_QWORD*)(v5 + 8248);
                                                v911 = 0;
                                                v912 = 3;
                                                memset(&v918[4], 0, 112);
                                                v1039 = 0;
                                                v1040 = 0;
                                                v1037 = 0;
                                                v1038 = 0;
                                                v1035 = 0;
                                                v1036 = 0;
                                                v1033 = 0;
                                                v1034 = 0;
                                                v1031 = 0;
                                                v1032 = 0;
                                                v552 = (float)((float)(v545 *
                                                                       v742) +
                                                               0x0.0p+0f) +
                                                       (float)(v548 * v739);
                                                v553 = (float)((float)(v545 *
                                                                       v729) +
                                                               0x0.0p+0f) +
                                                       (float)(v548 *
                                                               *(float*)&v730);
                                                v554 = (float)((float)(v545 *
                                                                       v731) +
                                                               0x0.0p+0f) +
                                                       (float)(v548 *
                                                               *((float*)&v730 +
                                                                 1));
                                                v555 = (float)((float)(v546 *
                                                                       v729) +
                                                               0x0.0p+0f) +
                                                       (float)(v549 *
                                                               *(float*)&v730);
                                                v909 = v551;
                                                v556 = *(_QWORD*)(v5 + 8256);
                                                memset(v1030, 0, sizeof(v1030));
                                                v1029[0] = 0;
                                                v1029[1] = 0;
                                                v557 = (float)((float)(v546 *
                                                                       v742) +
                                                               0x0.0p+0f) +
                                                       (float)(v549 * v739);
                                                v558 = (float)((float)(v546 *
                                                                       v731) +
                                                               0x0.0p+0f) +
                                                       (float)(v549 *
                                                               *((float*)&v730 +
                                                                 1));
                                                v910 = v556;
                                                v559 = (float)((float)(v547 *
                                                                       v742) +
                                                               0x0.0p+0f) +
                                                       (float)(v550 * v739);
                                                v560 = (float)((float)(v547 *
                                                                       v729) +
                                                               0x0.0p+0f) +
                                                       (float)(v550 *
                                                               *(float*)&v730);
                                                v561 = (float)((float)(v547 *
                                                                       v731) +
                                                               0x0.0p+0f) +
                                                       (float)(v550 *
                                                               *((float*)&v730 +
                                                                 1));
                                                v562 =
                                                    (float)((float)((float)((float)(v531 *
                                                                                    v711) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v534 *
                                                                            *(float*)&v519)) +
                                                            (float)(v537 *
                                                                    v710)) +
                                                    (float)(v541 *
                                                            *(float*)&v520);
                                                v563 =
                                                    (float)((float)((float)((float)(v532 *
                                                                                    v711) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v535 *
                                                                            *(float*)&v519)) +
                                                            (float)(v538 *
                                                                    v710)) +
                                                    (float)(v542 *
                                                            *(float*)&v520);
                                                v564 =
                                                    (float)((float)((float)((float)(v533 *
                                                                                    v711) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v536 *
                                                                            *(float*)&v519)) +
                                                            (float)(v539 *
                                                                    v710)) +
                                                    (float)(v543 *
                                                            *(float*)&v520);
                                                v565 =
                                                    v553 + (float)(v562 * v748);
                                                v566 =
                                                    v554 + (float)(v562 * v745);
                                                v567 =
                                                    v555 + (float)(v563 * v748);
                                                v568 =
                                                    v558 + (float)(v563 * v745);
                                                v569 =
                                                    v560 + (float)(v564 * v748);
                                                v570 =
                                                    v552 + (float)(v562 * v763);
                                                v571 =
                                                    v557 + (float)(v563 * v763);
                                                v572 =
                                                    v559 + (float)(v564 * v763);
                                                v573 =
                                                    v561 + (float)(v564 * v745);
                                                v574 =
                                                    (float)((float)((float)((float)(v532 *
                                                                                    v725) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v535 *
                                                                            *((float*)&v519 +
                                                                              1))) +
                                                            (float)(v538 *
                                                                    v724)) +
                                                    (float)(v542 *
                                                            *((float*)&v520 +
                                                              1));
                                                v575 =
                                                    (float)((float)((float)((float)(v531 *
                                                                                    v725) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v534 *
                                                                            *((float*)&v519 +
                                                                              1))) +
                                                            (float)(v537 *
                                                                    v724)) +
                                                    (float)(v541 *
                                                            *((float*)&v520 +
                                                              1));
                                                v576 =
                                                    (float)((float)((float)((float)(v533 *
                                                                                    v725) +
                                                                            0x0.0p+0f) +
                                                                    (float)(v536 *
                                                                            *((float*)&v519 +
                                                                              1))) +
                                                            (float)(v539 *
                                                                    v724)) +
                                                    (float)(v543 *
                                                            *((float*)&v520 +
                                                              1));
                                                v746 =
                                                    v570 + (float)(v575 * v766);
                                                v743 =
                                                    v565 + (float)(v575 * v760);
                                                v749 =
                                                    v566 + (float)(v575 * v757);
                                                v740 =
                                                    v571 + (float)(v574 * v766);
                                                *((float*)&v730 + 1) =
                                                    v572 + (float)(v576 * v766);
                                                v732 =
                                                    v567 + (float)(v574 * v760);
                                                *(float*)&v761 =
                                                    v569 + (float)(v576 * v760);
                                                v764 =
                                                    v568 + (float)(v574 * v757);
                                                *(float*)&v767 =
                                                    v573 + (float)(v576 * v757);
                                                v577 = (float)((float)(v531 *
                                                                       v712) +
                                                               0x0.0p+0f) +
                                                       (float)(v534 * v706);
                                                v578 =
                                                    (float)((float)(v531 *
                                                                    *(float*)&v715) +
                                                            0x0.0p+0f) +
                                                    (float)(v534 * v708);
                                                v579 =
                                                    (float)((float)(v531 *
                                                                    *((float*)&v715 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v534 * v707);
                                                v580 =
                                                    (float)((float)(v532 *
                                                                    *(float*)&v715) +
                                                            0x0.0p+0f) +
                                                    (float)(v535 * v708);
                                                v581 =
                                                    (float)((float)(v532 *
                                                                    *((float*)&v715 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v535 * v707);
                                                v582 =
                                                    (float)((float)(v533 *
                                                                    *(float*)&v715) +
                                                            0x0.0p+0f) +
                                                    (float)(v536 * v708);
                                                v583 =
                                                    (float)((float)(v533 *
                                                                    *((float*)&v715 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v536 * v707);
                                                v584 = (float)((float)(v531 *
                                                                       v716) +
                                                               0x0.0p+0f) +
                                                       (float)(v534 * v709);
                                                v585 = (float)((float)(v532 *
                                                                       v712) +
                                                               0x0.0p+0f) +
                                                       (float)(v535 * v706);
                                                v586 = (float)((float)(v532 *
                                                                       v716) +
                                                               0x0.0p+0f) +
                                                       (float)(v535 * v709);
                                                v587 = (float)((float)(v533 *
                                                                       v712) +
                                                               0x0.0p+0f) +
                                                       (float)(v536 * v706);
                                                v588 = (float)((float)(v533 *
                                                                       v716) +
                                                               0x0.0p+0f) +
                                                       (float)(v536 * v709);
                                                v589 =
                                                    v584 + (float)(v537 * v713);
                                                v590 =
                                                    v577 + (float)(v537 * v723);
                                                v591 =
                                                    v578 + (float)(v537 * v721);
                                                v592 =
                                                    v579 + (float)(v537 * v714);
                                                v593 =
                                                    v585 + (float)(v538 * v723);
                                                v594 =
                                                    v580 + (float)(v538 * v721);
                                                v595 =
                                                    v581 + (float)(v538 * v714);
                                                v596 =
                                                    v586 + (float)(v538 * v713);
                                                v597 =
                                                    v587 + (float)(v539 * v723);
                                                v598 =
                                                    v582 + (float)(v539 * v721);
                                                v599 =
                                                    v589 + (float)(v541 * v528);
                                                v600 =
                                                    v592 + (float)(v541 * v530);
                                                v601 =
                                                    v596 + (float)(v542 * v528);
                                                v602 = (float)(v588 +
                                                               (float)(v539 *
                                                                       v713)) +
                                                       (float)(v543 * v528);
                                                v603 =
                                                    v595 + (float)(v542 * v530);
                                                v604 =
                                                    v593 + (float)(v542 * v719);
                                                v605 =
                                                    v590 + (float)(v541 * v719);
                                                v606 =
                                                    v591 + (float)(v541 * v717);
                                                v607 =
                                                    v594 + (float)(v542 * v717);
                                                v608 =
                                                    v597 + (float)(v543 * v719);
                                                v609 =
                                                    v598 + (float)(v543 * v717);
                                                v610 = (float)(v583 +
                                                               (float)(v539 *
                                                                       v714)) +
                                                       (float)(v543 * v530);
                                                v758 = v599;
                                                v611 =
                                                    (float)(v727 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                v612 =
                                                    (float)((float)(v727 +
                                                                    0x0.0p+0f) +
                                                            (float)(v726 *
                                                                    0x0.0p+0f)) +
                                                    (float)(*(float*)&v511 *
                                                            0x0.0p+0f);
                                                v613 = (float)(v611 + v726) +
                                                       (float)(*(float*)&v511 *
                                                               0x0.0p+0f);
                                                v614 =
                                                    (float)(v611 +
                                                            (float)(v726 *
                                                                    0x0.0p+0f)) +
                                                    *(float*)&v511;
                                                v615 = (float)(*(float*)&v506 *
                                                               0x0.0p+0f) +
                                                       0x0.0p+0f;
                                                v616 =
                                                    (float)((float)(*(float*)&v506 +
                                                                    0x0.0p+0f) +
                                                            (float)(v728 *
                                                                    0x0.0p+0f)) +
                                                    (float)(*((float*)&v511 +
                                                              1) *
                                                            0x0.0p+0f);
                                                v617 = (float)(v615 + v728) +
                                                       (float)(*((float*)&v511 +
                                                                 1) *
                                                               0x0.0p+0f);
                                                v618 =
                                                    (float)(v615 +
                                                            (float)(v728 *
                                                                    0x0.0p+0f)) +
                                                    *((float*)&v511 + 1);
                                                v619 = (float)((float)(v612 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v616 * v769);
                                                v620 =
                                                    (float)((float)(v612 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v616 *
                                                            *(float*)&v775);
                                                v621 =
                                                    (float)((float)(v605 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v606 *
                                                            *(float*)&v775);
                                                v622 =
                                                    (float)((float)(v604 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v607 *
                                                            *(float*)&v775);
                                                v623 =
                                                    (float)((float)(v608 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v609 *
                                                            *(float*)&v775);
                                                v624 =
                                                    (float)((float)(v613 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v617 *
                                                            *(float*)&v775);
                                                v625 =
                                                    (float)((float)(v614 *
                                                                    *(float*)&v780) +
                                                            0x0.0p+0f) +
                                                    (float)(v618 *
                                                            *(float*)&v775);
                                                v626 =
                                                    (float)((float)(v612 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v616 *
                                                            *((float*)&v775 +
                                                              1));
                                                v627 = (float)((float)(v613 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v617 * v769);
                                                v628 =
                                                    (float)((float)(v613 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v617 *
                                                            *((float*)&v775 +
                                                              1));
                                                v629 = (float)((float)(v614 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v618 * v769);
                                                v630 =
                                                    (float)((float)(v614 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v618 *
                                                            *((float*)&v775 +
                                                              1));
                                                v631 = (float)((float)(v605 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v606 * v769);
                                                v632 =
                                                    (float)((float)(v605 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v606 *
                                                            *((float*)&v775 +
                                                              1));
                                                v633 = (float)((float)(v604 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v607 * v769);
                                                v634 =
                                                    (float)((float)(v604 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v607 *
                                                            *((float*)&v775 +
                                                              1));
                                                v635 = (float)((float)(v608 *
                                                                       v771) +
                                                               0x0.0p+0f) +
                                                       (float)(v609 * v769);
                                                v636 =
                                                    (float)((float)(v608 *
                                                                    *((float*)&v780 +
                                                                      1)) +
                                                            0x0.0p+0f) +
                                                    (float)(v609 *
                                                            *((float*)&v775 +
                                                              1));
                                                v637 = (float)(*((float*)&v506 +
                                                                 1) *
                                                               0x0.0p+0f) +
                                                       0x0.0p+0f;
                                                v638 =
                                                    (float)((float)(*((float*)&v506 +
                                                                      1) +
                                                                    0x0.0p+0f) +
                                                            (float)(v736 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v734 * 0x0.0p+0f);
                                                v639 =
                                                    (float)(v637 + v736) +
                                                    (float)(v734 * 0x0.0p+0f);
                                                v640 =
                                                    (float)(v637 +
                                                            (float)(v736 *
                                                                    0x0.0p+0f)) +
                                                    v734;
                                                v641 =
                                                    v630 + (float)(v640 * v803);
                                                v642 =
                                                    v619 + (float)(v638 * v800);
                                                v643 =
                                                    v620 + (float)(v638 * v807);
                                                v644 =
                                                    v626 + (float)(v638 * v803);
                                                v645 =
                                                    v627 + (float)(v639 * v800);
                                                v646 =
                                                    v624 + (float)(v639 * v807);
                                                v647 =
                                                    v625 + (float)(v640 * v807);
                                                v648 =
                                                    v631 + (float)(v600 * v800);
                                                v649 =
                                                    v621 + (float)(v600 * v807);
                                                v650 =
                                                    v632 + (float)(v600 * v803);
                                                v651 =
                                                    v622 + (float)(v603 * v807);
                                                v652 =
                                                    v623 + (float)(v610 * v807);
                                                v653 =
                                                    v633 + (float)(v603 * v800);
                                                v654 =
                                                    v634 + (float)(v603 * v803);
                                                v655 =
                                                    v635 + (float)(v610 * v800);
                                                v656 =
                                                    v636 + (float)(v610 * v803);
                                                v657 =
                                                    (float)(v755 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                v658 =
                                                    (float)((float)(v755 +
                                                                    0x0.0p+0f) +
                                                            (float)(v753 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v751 * 0x0.0p+0f);
                                                v659 =
                                                    (float)(v657 + v753) +
                                                    (float)(v751 * 0x0.0p+0f);
                                                v660 =
                                                    (float)(v657 +
                                                            (float)(v753 *
                                                                    0x0.0p+0f)) +
                                                    v751;
                                                *(float*)&v918[16] =
                                                    v642 + (float)(v658 * v811);
                                                *(float*)&v918[24] =
                                                    v644 +
                                                    (float)(v658 *
                                                            *((float*)&v497 +
                                                              1));
                                                *(float*)&v918[52] =
                                                    v645 + (float)(v659 * v811);
                                                *(float*)&v918[96] =
                                                    v641 +
                                                    (float)(v660 *
                                                            *((float*)&v497 +
                                                              1));
                                                *(float*)&v918[20] =
                                                    v643 +
                                                    (float)(v658 *
                                                            *(float*)&v497);
                                                *(float*)&v918[56] =
                                                    v646 +
                                                    (float)(v659 *
                                                            *(float*)&v497);
                                                *(float*)&v918[60] =
                                                    (float)(v628 +
                                                            (float)(v639 *
                                                                    v803)) +
                                                    (float)(v659 *
                                                            *((float*)&v497 +
                                                              1));
                                                *(float*)&v918[88] =
                                                    (float)(v629 +
                                                            (float)(v640 *
                                                                    v800)) +
                                                    (float)(v660 * v811);
                                                *(float*)&v918[92] =
                                                    v647 +
                                                    (float)(v660 *
                                                            *(float*)&v497);
                                                v804 = v654 +
                                                       (float)(v601 *
                                                               *((float*)&v497 +
                                                                 1));
                                                v808 = v651 +
                                                       (float)(v601 *
                                                               *(float*)&v497);
                                                *(float*)&v918[124] =
                                                    v648 + (float)(v758 * v811);
                                                *(float*)&v918[128] =
                                                    v649 +
                                                    (float)(v758 *
                                                            *(float*)&v497);
                                                *(float*)&v918[132] =
                                                    v650 +
                                                    (float)(v758 *
                                                            *((float*)&v497 +
                                                              1));
                                                *(float*)&v918[160] =
                                                    v653 + (float)(v601 * v811);
                                                v661 = (float)(*((float*)&v501 +
                                                                 1) *
                                                               0x0.0p+0f) +
                                                       0x0.0p+0f;
                                                *(float*)&v812 =
                                                    v655 + (float)(v602 * v811);
                                                v662 = (float)(*(float*)&v501 *
                                                               0x0.0p+0f) +
                                                       0x0.0p+0f;
                                                *((float*)&v921 + 1) =
                                                    v656 +
                                                    (float)(v602 *
                                                            *((float*)&v497 +
                                                              1));
                                                v663 =
                                                    (float)((float)(*(float*)&v501 +
                                                                    0x0.0p+0f) +
                                                            (float)(*(float*)&v785 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v783 * 0x0.0p+0f);
                                                v664 =
                                                    (float)((float)(v793 +
                                                                    0x0.0p+0f) +
                                                            (float)(v790 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v778 * 0x0.0p+0f);
                                                v665 =
                                                    (float)((float)(*((float*)&v501 +
                                                                      1) +
                                                                    0x0.0p+0f) +
                                                            (float)(*((float*)&v785 +
                                                                      1) *
                                                                    0x0.0p+0f)) +
                                                    (float)(v773 * 0x0.0p+0f);
                                                v666 =
                                                    (float)(v661 +
                                                            *((float*)&v785 +
                                                              1)) +
                                                    (float)(v773 * 0x0.0p+0f);
                                                v667 =
                                                    (float)(v661 +
                                                            (float)(*((float*)&v785 +
                                                                      1) *
                                                                    0x0.0p+0f)) +
                                                    v773;
                                                v668 = v664 + 0x0.0p+0f;
                                                v669 =
                                                    (float)(v664 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                *(float*)&v917 =
                                                    (float)(v668 +
                                                            (float)(v663 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v665 * 0x0.0p+0f);
                                                v670 =
                                                    (float)(v793 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                v671 =
                                                    (float)(v662 +
                                                            *(float*)&v785) +
                                                    (float)(v783 * 0x0.0p+0f);
                                                *((float*)&v917 + 1) =
                                                    (float)(v663 + v669) +
                                                    (float)(v665 * 0x0.0p+0f);
                                                *(float*)v918 =
                                                    v665 +
                                                    (float)(v669 +
                                                            (float)(v663 *
                                                                    0x0.0p+0f));
                                                v672 =
                                                    (float)(v662 +
                                                            (float)(*(float*)&v785 *
                                                                    0x0.0p+0f)) +
                                                    v783;
                                                v673 =
                                                    (float)(v670 + v790) +
                                                    (float)(v778 * 0x0.0p+0f);
                                                v674 =
                                                    (float)(v670 +
                                                            (float)(v790 *
                                                                    0x0.0p+0f)) +
                                                    v778;
                                                *(float*)&v918[116] = v743;
                                                *(float*)&v918[112] = v746;
                                                v675 = v673 + 0x0.0p+0f;
                                                v676 =
                                                    (float)(v673 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                *(float*)&v918[148] = v740;
                                                *(float*)&v918[28] =
                                                    (float)(v675 +
                                                            (float)(v671 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v666 * 0x0.0p+0f);
                                                v677 = v674 + 0x0.0p+0f;
                                                v678 =
                                                    (float)(v674 * 0x0.0p+0f) +
                                                    0x0.0p+0f;
                                                *(float*)&v918[36] =
                                                    v666 +
                                                    (float)(v676 +
                                                            (float)(v671 *
                                                                    0x0.0p+0f));
                                                v919 = (__int64*)__PAIR64__(
                                                    v761, HIDWORD(v730));
                                                *(float*)&v918[152] = v732;
                                                *(float*)&v918[32] =
                                                    (float)(v671 + v676) +
                                                    (float)(v666 * 0x0.0p+0f);
                                                *(float*)&v918[64] =
                                                    (float)(v677 +
                                                            (float)(v672 *
                                                                    0x0.0p+0f)) +
                                                    (float)(v667 * 0x0.0p+0f);
                                                *(float*)&v918[72] =
                                                    v667 +
                                                    (float)(v678 +
                                                            (float)(v672 *
                                                                    0x0.0p+0f));
                                                *(float*)&v918[68] =
                                                    (float)(v672 + v678) +
                                                    (float)(v667 * 0x0.0p+0f);
                                                *(float*)&v918[120] = v749;
                                                *(float*)&v918[156] = v764;
                                                *(float*)&v918[164] = v808;
                                                *(float*)&v918[168] = v804;
                                                v920 = __PAIR64__(v812, v767);
                                                *(float*)&v921 =
                                                    v652 +
                                                    (float)(v602 *
                                                            *(float*)&v497);
                                                SdkRoutine_87a020(v5 + 200,
                                                                  &v917, v880,
                                                                  &v905, v1029);
                                                nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveRelativeRotationVariable_plt(
                                                    v5 + 200);
                                                nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances_plt(
                                                    v5 + 200, v817);
                                                v679 = *(_QWORD*)(v5 + 8208);
                                                v680 = *(float*)(v5 + 8188);
                                                v681 = *(float*)(v5 + 8184) +
                                                       0x0.0p+0f;
                                                v880[0] = *(_QWORD*)(v5 + 8200);
                                                v880[1] = v679;
                                                v682 = *(float*)(v5 + 0x2000) +
                                                       0x0.0p+0f;
                                                v881 = *(_QWORD*)(v5 + 8216);
                                                v917 = 1065353216;
                                                *(_QWORD*)v918 = 0;
                                                *(_DWORD*)&v918[8] = 1065353216;
                                                *(_DWORD*)&v918[12] = 0;
                                                *(_QWORD*)&v918[16] = 0;
                                                *(_DWORD*)&v918[24] =
                                                    1065353216;
                                                *(__int64*)((char*)v1029 + 4) =
                                                    0;
                                                v683 = 0x1.99999a0000000p-4f;
                                                HIDWORD(v1029[1]) = 0;
                                                *(_QWORD*)((char*)v1030 + 4) =
                                                    0;
                                                HIDWORD(v1030[1]) = 0;
                                                *(float*)&v853 = v681;
                                                *((float*)&v853 + 1) =
                                                    v680 + 0x0.0p+0f;
                                                *(float*)&v854 = v682;
                                                if (v817 <=
                                                    0x1.99999a0000000p-4f) {
                                                  v683 = v817;
                                                }
                                                *(float*)v1029 =
                                                    *(float*)&v1026 /
                                                    (float)(v683 /
                                                            *(float*)&v1028);
                                                *(float*)v1030 = *(float*)v1029;
                                                *(float*)&v1030[2] =
                                                    *(float*)v1029;
                                                SdkRoutine_87a050(
                                                    v5 + 200, &v853, &v917,
                                                    v1029, v880, 0x0.0p+0);
                                                SdkRoutine_711380(
                                                    (__int64*)(v5 + 200));
                                                if ((nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates_plt(
                                                         v5 + 200) &
                                                     1) != 0) {
                                                  if ((signed __int64)v1024[0] <
                                                      *(__int64*)(v5 + 15424)) {
                                                    goto LABEL_316;
                                                  }
                                                }
                                                else {
                                                  nerd_gyro_pointing_GyroPointingCore_Recover_plt(
                                                      v5, 0);
                                                  if ((signed __int64)v1024[0] <
                                                      *(__int64*)(v5 + 15424)) {
                                                  LABEL_316:
                                                    this_ =
                                                        nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt(
                                                            v5 + 200);
                                                    if ((_DWORD)this_ == 2) {
                                                      goto LABEL_317;
                                                    }
                                                    goto LABEL_321;
                                                  }
                                                }
                                                nerd_gyro_pointing_GyroPointingKalmanFilter_PushParameterState_plt(
                                                    v5 + 200);
                                                v688 = *(_QWORD*)(v5 + 15432);
                                                *(_QWORD*)(v5 + 15424) += v688;
                                                *(_QWORD*)(v5 + 15432) =
                                                    2 * v688;
                                                this_ =
                                                    nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt(
                                                        v5 + 200);
                                                if ((_DWORD)this_ == 2) {
                                                LABEL_317:
                                                  v687 = v817 +
                                                         *(float*)(v5 + 15004);
                                                  *(float*)(v5 + 15004) = v687;
                                                  if (v687 >
                                                      0x1.0000000000000p-1f) {
                                                    return nerd_gyro_pointing_GyroPointingCore_Recover_plt(
                                                        v5, 1);
                                                  }
                                                  return this_;
                                                }
                                              LABEL_321:
                                                *(_DWORD*)(v5 + 15004) = 0;
                                                return this_;
                                              }
                                            LABEL_249:
                                              v431 = -1;
                                              goto LABEL_250;
                                            }
                                          }
                                          v427 = -1;
                                          v428 = *(float*)&v913;
                                          v429 = v911;
                                          if (v911 != 0) {
                                            goto LABEL_246;
                                          }
                                          goto LABEL_249;
                                        }
                                        v369 = BYTE5(v1025);
                                        v965 = nullptr;
                                        v964 = 0;
                                        v963 = 0;
                                        v962 = nullptr;
                                        if ((v1025 & 0x10000000000LL) != 0) {
                                          v370 = 1;
                                          v965 = (_QWORD*)(((char*)0x0LL) + 1);
                                          if ((v1025 & 0x20000000000LL) == 0) {
                                            goto LABEL_213;
                                          }
                                        }
                                        else {
                                          v370 = 0;
                                          v211 = (__int64*)&v962;
                                          if ((v1025 & 0x20000000000LL) == 0) {
                                          LABEL_213:
                                            if ((v369 & 4) != 0) {
                                              (&v962)[v370] =
                                                  (_QWORD*)(((char*)0x0LL) + 2);
                                              v370 = (unsigned __int64)v965 + 1;
                                              v965 =
                                                  (__int64*)((char*)v965 + 1);
                                            }
                                            v371 = 0x1.99999a0000000p-4f;
                                            v372 = *(_QWORD*)(v300 + 24);
                                            v373 = *(_QWORD*)(v300 + 32);
                                            v905 = *(_QWORD*)(v300 + 16);
                                            v906 = v372;
                                            if (v817 <= 0x1.99999a0000000p-4f) {
                                              v371 = v817;
                                            }
                                            v907 = v373;
                                            v374 =
                                                0x1.2dfd6a0000000p-19f / v371;
                                            v375 = *(float*)v300;
                                            v376 = *(float*)(v300 + 4);
                                            *((float*)&v833_.v833 + 1) =
                                                0x1.2dfd6a0000000p-17f / v371;
                                            v377 = *(float*)(v300 + 8);
                                            *(float*)&v833_.v833 = v374;
                                            *(float*)&v833_.v834 = v374;
                                            v853 = 1065353216;
                                            v854 = 0;
                                            v855 = 1065353216;
                                            v856 = nullptr;
                                            LODWORD(v857) = 1065353216;
                                            *(_QWORD*)&v918[8] = v370;
                                            *(float*)&v827_.v827 =
                                                v375 + 0x0.0p+0f;
                                            *((float*)&v827_.v827 + 1) =
                                                v376 + 0x0.0p+0f;
                                            *(float*)&v827_.v828 =
                                                v377 + 0x0.0p+0f;
                                            if (v370 != 0) {
                                              *(_QWORD*)v918 = 0;
                                              v917 = 0;
                                              memset_plt((void*)&v917, nullptr,
                                                         4 * v370);
                                              if (*(_QWORD*)&v918[8] != 0) {
                                                v379 = 0;
                                                do {
                                                  *(_DWORD*)&v918[4 * v379 -
                                                                  8] =
                                                      *((_DWORD*)&v827_.v827 +
                                                        (_QWORD)(&v962)[v379]);
                                                  ++v379;
                                                } while (v379 <
                                                         *(_QWORD*)&v918[8]);
                                                v951 = *(_QWORD*)&v918[8];
                                                if (*(_QWORD*)&v918[8] != 0) {
                                                  memcpy_plt(
                                                      &v949, &v917,
                                                      4LL * *(_QWORD*)&v918[8]);
                                                }
                                              }
                                              else {
                                                v951 = 0;
                                              }
                                              v380 = v370 & 3;
                                              v381 = 0;
                                              v917 = v370;
                                              memset(v918, 0, 40);
                                              if (v370 >= 4) {
                                                v382 = 0;
                                                v383 = &v918[24];
                                                v384 = &v964;
                                                do {
                                                  v382 -= 4;
                                                  v385 = (char*)&v853 +
                                                         12 * *(v384 - 2);
                                                  v386 = (char*)&v853 +
                                                         12 * *(v384 - 1);
                                                  v387 = *(_QWORD*)v385;
                                                  LODWORD(v385) =
                                                      *((_DWORD*)v385 + 2);
                                                  *((_QWORD*)v383 - 3) = v387;
                                                  v388 = *(_QWORD*)v386;
                                                  *((_DWORD*)v383 - 4) =
                                                      (_DWORD)v385;
                                                  LODWORD(v386) =
                                                      *((_DWORD*)v386 + 2);
                                                  *(_QWORD*)(v383 - 12) = v388;
                                                  v389 = *v384;
                                                  v390 = v384[1];
                                                  v384 += 4;
                                                  *((_DWORD*)v383 - 1) =
                                                      (_DWORD)v386;
                                                  v391 =
                                                      (char*)&v853 + 12 * v389;
                                                  v392 = *(_QWORD*)v391;
                                                  *((_DWORD*)v383 + 2) =
                                                      *((_DWORD*)v391 + 2);
                                                  v393 =
                                                      (char*)&v853 + 12 * v390;
                                                  *(_QWORD*)v383 = v392;
                                                  v394 = *(_QWORD*)v393;
                                                  *((_DWORD*)v383 + 5) =
                                                      *((_DWORD*)v393 + 2);
                                                  *(_QWORD*)(v383 + 12) = v394;
                                                  v383 += 48;
                                                } while (
                                                    -(__int64)(v370 &
                                                               0xFFFFFFFFFFFFFFFCLL) !=
                                                    v382);
                                                v381 = -v382;
                                              }
                                              if ((v370 & 3) != 0) {
                                                v395 = (__int64*)&(&v962)[v381];
                                                v396 = &v918[12 * v381];
                                                do {
                                                  v397 = *v395++;
                                                  --v380;
                                                  v398 =
                                                      (char*)&v853 + 12 * v397;
                                                  v399 = *(_QWORD*)v398;
                                                  LODWORD(v398) =
                                                      *((_DWORD*)v398 + 2);
                                                  *(_QWORD*)v396 = v399;
                                                  *((_DWORD*)v396 + 2) =
                                                      (_DWORD)v398;
                                                  v396 += 12;
                                                } while (v380 != 0);
                                              }
                                              v400 = *(_QWORD*)&v918[8];
                                              *(_QWORD*)&v918[8] = v370;
                                              v881 = v400;
                                              v882 = *(_OWORD*)&v918[16];
                                              v883 = *(_QWORD*)&v918[32];
                                              v401 = v917;
                                              v402 = *(_QWORD*)v918;
                                              v917 = 0;
                                              *(_QWORD*)v918 = 0;
                                              v880[0] = v401;
                                              v880[1] = v402;
                                              memset_plt((void*)&v917, nullptr,
                                                         4 * v370);
                                              if (*(_QWORD*)&v918[8] != 0) {
                                                v403 = 0;
                                                do {
                                                  *(_DWORD*)&v918[4 * v403 -
                                                                  8] =
                                                      *((_DWORD*)&v833_.v833 +
                                                        (_QWORD)(&v962)[v403]);
                                                  ++v403;
                                                } while (v403 <
                                                         *(_QWORD*)&v918[8]);
                                                v846_.v846 = *(_QWORD*)&v918[8];
                                                if (*(_QWORD*)&v918[8] != 0) {
                                                  memcpy_plt(
                                                      &v844_.v844, &v917,
                                                      4LL * *(_QWORD*)&v918[8]);
                                                  memset(&v918[8], 0, 40);
                                                  v917 = v846_.v846;
                                                  *(_QWORD*)v918 = v846_.v846;
                                                  if (v846_.v846 != 0) {
                                                    v404 = v846_.v846 & 7;
                                                    if (v846_.v846 >= 8) {
                                                      v689 = 0;
                                                      v690 = &v846_.v846;
                                                      v691 = -(
                                                          __int64)(v846_.v846 &
                                                                   0xFFFFFFFFFFFFFFF8LL);
                                                      v692 = &v918[56];
                                                      do {
                                                        v693 = *((_DWORD*)v690 -
                                                                 3);
                                                        v689 -= 8;
                                                        *(v692 - 12) = *(
                                                            (_DWORD*)v690 - 4);
                                                        *(v692 - 8) = v693;
                                                        v694 = *((_DWORD*)v690 -
                                                                 1);
                                                        *(v692 - 4) = *(
                                                            (_DWORD*)v690 - 2);
                                                        *v692 = v694;
                                                        v695 = *((_DWORD*)v690 +
                                                                 1);
                                                        v692[4] =
                                                            *(_DWORD*)v690;
                                                        v692[8] = v695;
                                                        v696 = *((_DWORD*)v690 +
                                                                 2);
                                                        v697 = *((_DWORD*)v690 +
                                                                 3);
                                                        v690 += 4;
                                                        v692[12] = v696;
                                                        v692[16] = v697;
                                                        v692 += 32;
                                                      } while (v691 != v689);
                                                      v405 = -v689;
                                                    }
                                                    else {
                                                      v405 = 0;
                                                    }
                                                    if (v404 != 0) {
                                                      v698 =
                                                          &v918[16 * v405 - 8];
                                                      v699 = (int*)&v844_.v844 +
                                                             v405;
                                                      v700 = v698 + 16;
                                                      do {
                                                        v701 = *v699++;
                                                        --v404;
                                                        *v700 = v701;
                                                        v700 += 4;
                                                      } while (v404 != 0);
                                                    }
                                                  }
                                                  goto LABEL_242;
                                                }
                                              }
                                            }
                                            else {
                                              v951 = 0;
                                              v880[0] = 0;
                                              v880[1] = 0;
                                              v881 = 0;
                                              v882 = (__typeof__(v882)){0};
                                              v883 = 0;
                                            }
                                            memset(v918, 0, 48);
                                            v917 = 0;
                                          LABEL_242:
                                            qmemcpy(v1030, &v918[8], 40);
                                            v1029[0] = v917;
                                            v1029[1] = *(_QWORD*)v918;
                                            SdkRoutine_879fe0(
                                                v5 + 200, &v949, v880, v1029,
                                                &v905, 0x1.99999a0000000p-4f);
                                            goto LABEL_243;
                                          }
                                        }
                                        ++v370;
                                        *v211 = 1;
                                        v965 = (__int64*)v370;
                                        goto LABEL_213;
                                      }
                                    LABEL_129:
                                      v213 = -1;
                                      goto LABEL_130;
                                    }
                                  }
                                  v208 = -1;
                                  v209 = *(float*)(v5 + 0x2000);
                                  v210 = v34 * v34;
                                  v211 = &v963;
                                  if (v162 != 0) {
                                    goto LABEL_126;
                                  }
                                  goto LABEL_129;
                                }
                                v199 = 0x0.0p+0f;
                                v200 = 0;
                                v198 = v175;
                              }
                              v201 = v162 + 16LL * *(_QWORD*)(v162 + 4096);
                              *(_BYTE*)(v201 + 4) = v198;
                              *(_BYTE*)(v201 + 5) = v200;
                              *(float*)(v201 + 12) = v199;
                              v202 = *(_QWORD*)(v162 + 4096);
                              *(_DWORD*)(v201 + 8) = 1065353216;
                              *(_QWORD*)(v162 + 4096) = v202 + 1;
                              goto LABEL_123;
                            }
                            v187 = 0x0.0p+0f;
                            v188 = 0;
                            v186 = v173;
                          LABEL_112:
                            v189 = v152 + 16LL * *(_QWORD*)(v152 + 4096);
                            *(_BYTE*)(v189 + 4) = v186;
                            *(_BYTE*)(v189 + 5) = v188;
                            *(float*)(v189 + 12) = v187;
                            *(_DWORD*)(v189 + 8) = 1065353216;
                            v190 = *(_QWORD*)(v152 + 4096);
                            *(_QWORD*)(v152 + 4096) = v190 + 1;
                            goto LABEL_113;
                          }
                          v178 = 0;
                          v177 = 0x0.0p+0f;
                        LABEL_102:
                          v179 = v143 + 16LL * *(_QWORD*)(v143 + 4096);
                          *(_BYTE*)(v179 + 4) = v171;
                          *(_BYTE*)(v179 + 5) = v178;
                          *(float*)(v179 + 12) = v177;
                          *(_DWORD*)(v179 + 8) = 1065353216;
                          v180 = *(_QWORD*)(v143 + 4096);
                          *(_QWORD*)(v143 + 4096) = v180 + 1;
                          v181 = v752;
                          v182 = v150 - v151;
                          v183 = v141 - v142;
                          v184 = v160 - v161;
                          if (v752 != 0) {
                            goto LABEL_103;
                          }
                          goto LABEL_110;
                        }
                        v164 = v1030[5];
                        v167 = 0x0.0p+0f;
                        v165 = -0x1.0000000000000p+0f;
                        v166 = 0;
                        v162 = v163;
                      LABEL_86:
                        v168 = v162 + 16LL * *(_QWORD*)(v162 + 4096);
                        *(_BYTE*)(v168 + 4) = v164;
                        *(_BYTE*)(v168 + 5) = v166;
                        *(float*)(v168 + 8) = v165;
                        *(float*)(v168 + 12) = v167;
                        v169 = *(_QWORD*)(v162 + 4096);
                        *(_QWORD*)(v162 + 4096) = v169 + 1;
                        if (v143 != 0) {
                          goto LABEL_87;
                        }
                        goto LABEL_97;
                      }
                      v154 = v1030[2];
                      v157 = 0x0.0p+0f;
                      v155 = -0x1.0000000000000p+0f;
                      v156 = 0;
                      v152 = v153;
                    LABEL_79:
                      v158 = v152 + 16LL * *(_QWORD*)(v152 + 4096);
                      *(_BYTE*)(v158 + 4) = v154;
                      *(_BYTE*)(v158 + 5) = v156;
                      *(float*)(v158 + 8) = v155;
                      *(float*)(v158 + 12) = v157;
                      v159 = *(_QWORD*)(v152 + 4096);
                      *(_QWORD*)(v152 + 4096) = v159 + 1;
                      v160 = *(float*)&v846_.v852;
                      v161 = *(float*)&v1031;
                      v162 = v846_.v850;
                      v163 = v1030[4];
                      if (v846_.v850 != 0) {
                        goto LABEL_80;
                      }
                      goto LABEL_84;
                    }
                    v144 = v1029[1];
                    v147 = 0;
                    v146 = -0x1.0000000000000p+0f;
                  }
                  v148 = v143 + 16LL * *(_QWORD*)(v143 + 4096);
                  *(_BYTE*)(v148 + 4) = v144;
                  *(_BYTE*)(v148 + 5) = v147;
                  *(float*)(v148 + 8) = v146;
                  *(float*)(v148 + 12) = v140;
                  v149 = *(_QWORD*)(v143 + 4096);
                  *(_QWORD*)(v143 + 4096) = v149 + 1;
                  v150 = *(float*)&v846_.v849;
                  v151 = *(float*)&v1030[3];
                  v152 = v846_.v847;
                  v153 = v1030[1];
                  if (v846_.v847 != 0) {
                    goto LABEL_71;
                  }
                  goto LABEL_77;
                }
                LOBYTE(v112) = v738;
                v135 = 0x0.0p+0f;
                v137 = -0x1.0000000000000p+0f;
                v136 = 0;
                v110 = v93;
              }
              v138 = &v110[2 * v110[512]];
              *((_BYTE*)v138 + 4) = v112;
              *((_BYTE*)v138 + 5) = v136;
              *((float*)v138 + 2) = v137;
              *((float*)v138 + 3) = v135;
              v139 = v110[512];
              v110[512] = v139 + 1;
              goto LABEL_63;
            }
            v125 = 0x0.0p+0f;
            v127 = -0x1.0000000000000p+0f;
            v126 = 0;
            v106 = v91;
            LOBYTE(v108) = v98;
          LABEL_52:
            v128 = &v106[2 * v106[512]];
            *((_BYTE*)v128 + 4) = v108;
            *((_BYTE*)v128 + 5) = v126;
            *((float*)v128 + 2) = v127;
            *((float*)v128 + 3) = v125;
            v129 = v106[512];
            v106[512] = v129 + 1;
            goto LABEL_53;
          }
        }
        LOBYTE(v108) = -1;
        v109 = *(float*)&v948;
        v110 = v946;
        if (v946 != nullptr) {
          goto LABEL_29;
        }
        goto LABEL_32;
      }
    }
    LOBYTE(v98) = -1;
    v99 = *(float*)(v5 + 8272);
    if (v93 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  return this_;
}

float nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate(
    __int64 a1, float* a2)
{
  float v2;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  _DWORD v27[9];
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v2 = a2[24];
  v4 = a2[23] - *(float*)(a1 + 8416);
  v5 = *(float*)(a1 + 8420);
  v6 = *(_QWORD*)(a1 + 8440);
  v7 = *(float*)(a1 + 8424);
  v28 = *(_QWORD*)(a1 + 8432);
  v29 = v6;
  v30 = *(_QWORD*)(a1 + 8448);
  v8 = v2 - v5;
  v9 = a2[25] - v7;
  v28 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v28);
  v29 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v29);
  v10 = (__int64*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v30);
  v11 = *v10;
  v12 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + v29));
  v13 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + *v10));
  v14 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + *v10));
  v15 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + v28));
  v27[0] = *(_DWORD*)(a1 + 216 + 136 * v28);
  v27[1] = v12;
  v16 = *(_DWORD*)(a1 + 216 + 136 * v11);
  v17 = *(_DWORD*)(a1 + 216 + 136 * v29);
  v18 = *(_DWORD*)(a1 + 216 + 4 * (v28 + 33 * v11));
  v19 = *(_DWORD*)(a1 + 216 + 4 * (v29 + 33 * v11));
  v27[2] = v13;
  v27[3] = v15;
  v27[8] = v16;
  v27[4] = v17;
  v27[5] = v14;
  v27[6] = v18;
  v27[7] = v19;
  v20 = nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate_plt(
      v27, v4, v8, v9);
  v21 = *(float*)(a1 + 8420);
  *(float*)(a1 + 15408) = *(float*)(a1 + 8416) + v20;
  v23 = v22 + v21;
  v24 = *(float*)(a1 + 8424);
  *(float*)(a1 + 15412) = v23;
  *(float*)(a1 + 15416) = v25 + v24;
  return v25 + v24;
}

void nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation(
    float* a1, float a2, float a3, float a4, float a5)
{
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v10 =
      nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v11 = a1[3823];
  v12 = a1[3824];
  v13 = a1[3825];
  v14 = a1[3826];
  v17 = (float)(PSEUDO_UNFUSED(v14 * v16)) + (float)(PSEUDO_UNFUSED(v15 * v12));
  v18 = (float)(PSEUDO_UNFUSED(v14 * v10)) + (float)(PSEUDO_UNFUSED(v15 * v11));
  v20 = -(float)((float)((float)((float)((float)(v10 * v11) + 0x0.0p+0f) +
                                 (float)(v16 * v12)) +
                         (float)(v19 * v13)) -
                 (float)(v15 * v14));
  v21 = (float)(PSEUDO_UNFUSED(v14 * v19)) + (float)(PSEUDO_UNFUSED(v15 * v13));
  v22 = (float)(v16 * v13) - (float)(PSEUDO_UNFUSED(v12 * v19));
  v23 = -(float)(v13 * v10);
  v24 = v18 + v22;
  v25 = (float)((float)(v10 * v12) - (float)(PSEUDO_UNFUSED(v11 * v16))) + v21;
  v26 = v17 + (float)(v23 + (float)(v19 * v11));
  v27 = a2 - a1[3852];
  v28 = a4 - a1[3854];
  v29 = a3 - a1[3853];
  v30 = (float)(a1[2117] * v27) + 0x0.0p+0f;
  v31 = (float)((float)((float)(a1[2114] * v27) + 0x0.0p+0f) +
                (float)(a1[2115] * v29)) +
        (float)(a1[2116] * v28);
  v32 = (float)((float)((float)(a1[2120] * v27) + 0x0.0p+0f) +
                (float)(a1[2121] * v29)) +
        (float)(a1[2122] * v28);
  v33 = (float)(v30 + (float)(a1[2118] * v29)) + (float)(a1[2119] * v28);
  v34 = a1[3101];
  v35 = a5 * v31;
  v36 = a5 * v32;
  v37 = a1[3100];
  v38 = a5 * v33;
  v39 = a1[3102];
  v40 = a1[3103];
  v41 = 0x1.0000000000000p+0f /
        (float)((float)((float)((float)(PSEUDO_UNFUSED(v37 * v37)) +
                                (float)(PSEUDO_UNFUSED(v34 * v34))) +
                        (float)(PSEUDO_UNFUSED(v39 * v39))) +
                (float)(PSEUDO_UNFUSED(v40 * v40)));
  v42 = -(float)(v41 * v37);
  v43 = -(float)(v41 * v34);
  v44 = -(float)(v41 * v39);
  v45 = v40 * v41;
  v46 = -(float)((float)((float)((float)((float)(v42 * v24) + 0x0.0p+0f) +
                                 (float)(v43 * v26)) +
                         (float)(v44 * v25)) -
                 (float)(v45 * v20));
  v47 = (float)((float)(PSEUDO_UNFUSED(v20 * v42)) +
                (float)(PSEUDO_UNFUSED(v24 * v45))) +
        (float)((float)(v43 * v25) - (float)(PSEUDO_UNFUSED(v26 * v44)));
  v48 = (float)((float)(PSEUDO_UNFUSED(v20 * v43)) +
                (float)(PSEUDO_UNFUSED(v26 * v45))) +
        (float)((float)(v44 * v24) - (float)(PSEUDO_UNFUSED(v25 * v42)));
  v49 = (float)((float)(v42 * v26) - (float)(PSEUDO_UNFUSED(v24 * v43))) +
        (float)((float)(PSEUDO_UNFUSED(v20 * v44)) +
                (float)(PSEUDO_UNFUSED(v25 * v45)));
  if (v46 < 0x0.0p+0f) {
    v47 = -v47;
    v48 = -v48;
    v49 = -v49;
    v46 = -v46;
  }
  v50 = sqrtf((float)((float)(PSEUDO_UNFUSED(v49 * v49)) +
                      (float)((float)(PSEUDO_UNFUSED(v48 * v48)) +
                              (float)(PSEUDO_UNFUSED(v47 * v47)))) +
              0x1.0000000000000p-126f);
  v51 = atan2f_plt(v50, v46),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v52 = v51 + v51;
  v53 = (float)(v51 + v51) * (float)(v47 / v50);
  v54 = v52 * (float)(v48 / v50);
  v55 = v52 * (float)(v49 / v50);
  v56 = (float)((float)(PSEUDO_UNFUSED(v35 * v35)) +
                (float)(PSEUDO_UNFUSED(v38 * v38))) +
        (float)(PSEUDO_UNFUSED(v36 * v36));
  if ((float)((float)(PSEUDO_UNFUSED(v55 * v55)) +
              (float)((float)(PSEUDO_UNFUSED(v53 * v53)) +
                      (float)(PSEUDO_UNFUSED(v54 * v54)))) != 0x0.0p+0f &&
      v56 != 0x0.0p+0f) {
    v57 = sqrtf(v56) + (float)(a5 * -0x1.47ae140000000p-7f);
    if (v57 > 0x0.0p+0f) {
      v58 = (float)((float)((float)((float)(v53 * v35) + 0x0.0p+0f) +
                            (float)(v54 * v38)) +
                    (float)(v55 * v36)) /
            v56;
      v59 = v36 * v58;
      v60 = v38 * v58;
      v61 = v35 * v58;
      v62 = (float)(v57 * 0x1.99999a0000000p-4f) /
            sqrtf((float)(PSEUDO_UNFUSED(v59 * v59)) +
                  (float)((float)(PSEUDO_UNFUSED(v61 * v61)) +
                          (float)(PSEUDO_UNFUSED(v60 * v60))));
      if (v62 > 0x1.0000000000000p+0f) {
        v62 = 0x1.0000000000000p+0f;
      }
      v63 = v60 * v62;
      v64 = v59 * v62;
      v87 = v61 * v62;
      v65 = sqrtf((float)((float)(PSEUDO_UNFUSED(v64 * v64)) +
                          (float)((float)(PSEUDO_UNFUSED(v87 * v87)) +
                                  (float)(PSEUDO_UNFUSED(v63 * v63)))) +
                  0x1.0000000000000p-126f) *
            0x1.0000000000000p-1f;
      if (!((float)(v65 * v65) > 0x1.47ae140000000p-5f)) {
        v66 =
            (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v65 *
                                                                                            v65) *
                                                                                    -0x1.ae64560000000p-26f) +
                                                                            0x1.71de3a0000000p-19f) *
                                                                    (float)(v65 *
                                                                            v65)) +
                                                            -0x1.a01a020000000p-13f) *
                                                    (float)(v65 * v65)) +
                                            0x1.1111120000000p-7f) *
                                    (float)(v65 * v65)) +
                            -0x1.5555560000000p-3f) *
                    (float)(v65 * v65)) +
            0x1.0000000000000p+0f;
      }
      else {
        v66 = sinf_plt(v65) / v65,
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      v67 = v66 * 0x1.0000000000000p-1f;
      v68 = cosf_plt(v65),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      v69 = a1[3100];
      v70 = a1[3101];
      v71 = a1[3102];
      v72 = a1[3103];
      a1[3103] =
          -(float)((float)((float)((float)((float)(v69 * (float)(v87 * v67)) +
                                           0x0.0p+0f) +
                                   (float)(v70 * (float)(v63 * v67))) +
                           (float)(v71 * (float)(v64 * v67))) -
                   (float)(v72 * v68));
      a1[3100] = (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v87 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v69))) +
                 (float)((float)(v70 * (float)(v64 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v63 * v67) * v71)));
      a1[3101] = (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v63 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v70))) +
                 (float)((float)(v71 * (float)(v87 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v64 * v67) * v69)));
      a1[3102] = (float)((float)(v69 * (float)(v63 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v87 * v67) * v70))) +
                 (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v64 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v71)));
    }
  }
  v73 = sqrtf(v56 + 0x1.0000000000000p-126f) * 0x1.0000000000000p-1f;
  if (!((float)(v73 * v73) > 0x1.47ae140000000p-5f)) {
    v74 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v73 *
                                                                                        v73) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v73 *
                                                                        v73)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v73 * v73)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v73 * v73)) +
                        -0x1.5555560000000p-3f) *
                (float)(v73 * v73)) +
        0x1.0000000000000p+0f;
  }
  else {
    v74 = sinf_plt(v73) / v73,
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v75 = v74 * 0x1.0000000000000p-1f;
  v76 = cosf_plt(v73),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v77 = a1[3100];
  v78 = a1[3101];
  v79 = a1[3102];
  v80 = a1[3103];
  v81 = -(float)((float)((float)((float)((float)(v77 * (float)(v35 * v75)) +
                                         0x0.0p+0f) +
                                 (float)(v78 * (float)(v38 * v75))) +
                         (float)(v79 * (float)(v36 * v75))) -
                 (float)(v80 * v76));
  a1[3103] = v81;
  v82 = (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v35 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v77))) +
        (float)((float)(v78 * (float)(v36 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v38 * v75) * v79)));
  v83 = (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v38 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v78))) +
        (float)((float)(v79 * (float)(v35 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v36 * v75) * v77)));
  v84 = (float)((float)(v77 * (float)(v38 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v35 * v75) * v78))) +
        (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v36 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v79)));
  a1[3100] = v82;
  a1[3101] = v83;
  a1[3102] = v84;
  v85 = (float)(PSEUDO_UNFUSED(v81 * v81)) +
        (float)((float)(PSEUDO_UNFUSED(v84 * v84)) +
                (float)((float)(PSEUDO_UNFUSED(v83 * v83)) +
                        (float)(PSEUDO_UNFUSED(v82 * v82))));
  if (v85 != 0x0.0p+0f) {
    v86 = 0x1.0000000000000p+0f / sqrtf(v85);
    a1[3102] = v84 * v86;
    a1[3100] = v82 * v86;
    a1[3101] = v83 * v86;
    a1[3103] = v81 * v86;
  }
}

__int64 nerd_gyro_pointing_GyroPointingCore_Recover(void* this_, char a2)
{
  float v4;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  float v14;
  unsigned __int64 v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  int v42;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  ++*((_QWORD*)this_ + 1945);
  v4 =
      nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  v6 = v5;
  v8 = v7;
  v10 = v9;
  result =
      nerd_gyro_pointing_GyroPointingKalmanFilter_ResetVelocityAndParameters_plt(
          (char*)this_ + 200),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  v12 = *((_QWORD*)this_ + 1905);
  if (v12 != 0) {
    if ((*((_BYTE*)this_ + 12392) & 1) == 0) {
      nn_codec_hwacod_32f020(),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
    }
    v13 = *((_QWORD*)this_ + 1876);
    v14 = (float)(*((_QWORD*)this_ + 1548) - v13);
    v15 = *((_QWORD*)this_ + 1907);
    v16 = *((float*)this_ + 3817);
    if ((float)(v16 * (float)(v14 / 0x1.dcd6500000000p+29f)) >=
        *((float*)this_ + 3816)) {
      v17 = *((_QWORD*)this_ + 1906);
      v19 = 0;
    }
    else {
      v17 = *((_QWORD*)this_ + 1906);
      v18 = v16 * v14;
      v19 = v12 - 1;
      if (v12 <= v15) {
        v20 = 0;
      }
      else {
        v20 = *((_QWORD*)this_ + 1906);
      }
      v21 = v20 + v15;
      v22 = (char*)this_ + 56 * (v20 + v15) - 56 * v12 + 15072;
      v23 = v21 - v12;
      v24 = 1;
      while (v12 != v24) {
        v25 = v23 + v24++;
        if (v25 >= v17) {
          v26 = *((_QWORD*)this_ + 1906);
        }
        else {
          v26 = 0;
        }
        v27 = *(_QWORD*)&v22[-56 * v26];
        v22 += 56;
        if (v18 <= (float)(v27 - v13)) {
          v19 = v24 - 2;
          break;
        }
      }
    }
    v28 = v12 > v15;
    v29 = v19 - v12;
    v42 = 0;
    v41 = 0;
    if (v28) {
      v30 = v17;
    }
    else {
      v30 = 0;
    }
    v31 = v29 + v15 + v30;
    if (v31 >= v17) {
      v32 = v17;
    }
    else {
      v32 = 0;
    }
    v33 = (char*)this_ + 56 * (v31 - v32) + 15016;
    *((_QWORD*)this_ + 1052) = *((_QWORD*)v33 + 1);
    *((_DWORD*)this_ + 2106) = *((_DWORD*)v33 + 4);
    result = SdkRoutine_879f50((char*)this_ + 200, &v42, &v41,
                               (char*)this_ + 8432, v33 + 20),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  }
  if (fabs(v4) > 0x1.fffffe0000000p+127f || (v6 & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      fabs(v8) > 0x1.fffffe0000000p+127f ||
      fabs(v10) > 0x1.fffffe0000000p+127f ||
      (*((_DWORD*)this_ + 2056) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2057) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2058) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2059) & 0x7FFFFFFFu) > 0x7F7FFFFF) {
    return nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
        this_);
  }
  if ((a2 & 1) != 0) {
    v34 = 0x1.0000000000000p+0f / (float)((float)(PSEUDO_UNFUSED(v8 * v8)) +
                                          (float)(PSEUDO_UNFUSED(v10 * v10)));
    v35 = v8 * v34;
    v36 = v10 * v34;
    result =
        nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
            this_),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
    v37 = *((float*)this_ + 2056);
    v38 = *((float*)this_ + 2057);
    v39 = *((float*)this_ + 2059);
    v40 = *((float*)this_ + 2058);
    *((float*)this_ + 2059) =
        -(float)((float)((float)((float)((float)(v37 * 0x0.0p+0f) + 0x0.0p+0f) +
                                 (float)(v38 * 0x0.0p+0f)) +
                         (float)(v35 * v40)) -
                 (float)(v36 * v39));
    *((float*)this_ + 2056) =
        (float)((float)(PSEUDO_UNFUSED(v39 * 0x0.0p+0f)) +
                (float)(PSEUDO_UNFUSED(v36 * v37))) +
        (float)((float)(v40 * 0x0.0p+0f) - (float)(PSEUDO_UNFUSED(v38 * v35)));
    *((float*)this_ + 2057) =
        (float)((float)(PSEUDO_UNFUSED(v39 * 0x0.0p+0f)) +
                (float)(PSEUDO_UNFUSED(v36 * v38))) +
        (float)((float)(PSEUDO_UNFUSED(v40 * -0x0.0p+0f)) + (float)(v35 * v37));
    *((float*)this_ + 2058) =
        (float)((float)(PSEUDO_UNFUSED(v37 * -0x0.0p+0f)) +
                (float)(v38 * 0x0.0p+0f)) +
        (float)((float)(PSEUDO_UNFUSED(v35 * v39)) +
                (float)(PSEUDO_UNFUSED(v36 * v40)));
  }
  return result;
}

float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated(
    void* this_)
{
  unsigned __int64 v1;
  char* v3;
  unsigned __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  float v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  bool v34;
  float v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v79;
  float v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  struct {
    unsigned __int64 v86;
    char gap96_[88];
    float v87;
    float v88;
  } v86_;

  v1 = *((_QWORD*)this_ + 1055);
  v84 = *((_QWORD*)this_ + 1054);
  v85 = v1;
  v86_.v86 = *((_QWORD*)this_ + 1056);
  v84 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v84);
  v85 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v85);
  v3 = (char*)this_ + 216;
  v4 = *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573,
                                 (__int64*)&v86_.v86);
  v5 = *((float*)this_ + 3852);
  v6 = *((float*)this_ + 3854);
  v7 = *((float*)this_ + 2106);
  v86_.v87 = *((float*)this_ + 2104);
  v86_.v88 = v5;
  v8 = *((float*)this_ + 34 * v84 + 54);
  v9 = *((float*)this_ + 33 * v85 + v84 + 54);
  v79 = *((float*)this_ + 2105);
  v80 = *((float*)this_ + 3853);
  v10 = *((float*)this_ + 34 * v85 + 54);
  v11 = *((float*)this_ + 34 * v4 + 54);
  v12 = *((float*)this_ + 33 * v4 + v84 + 54);
  v13 = *((float*)this_ + 33 * v4 + v85 + 54);
  v14 = *((_QWORD*)this_ + 1031);
  v84 = *((_QWORD*)this_ + 1030);
  v85 = v14;
  v86_.v86 = *((_QWORD*)this_ + 1032);
  v84 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v84);
  v85 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v85);
  v15 = *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573,
                                  (__int64*)&v86_.v86);
  v16 = *((_QWORD*)this_ + 1056);
  v17 = *((_QWORD*)this_ + 1055);
  v18 = *((_QWORD*)this_ + 1054);
  v86_.v86 = v15;
  v19 = v84;
  v20 = v85;
  v82 = v17;
  v83 = v16;
  v81 = v18;
  v81 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v81);
  v82 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v82);
  v21 = fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, &v83);
  v22 = 0x0.0p+0f;
  v23 = *v21;
  v24 = 33 * v19;
  v25 = 33 * v20;
  v26 = 33 * v15;
  if (v8 >= 0x0.0p+0f) {
    v27 = v8;
  }
  else {
    v27 = 0x0.0p+0f;
  }
  v28 = sqrtf(v27);
  if (v10 >= 0x0.0p+0f) {
    v29 = v10;
  }
  else {
    v29 = 0x0.0p+0f;
  }
  if (v11 >= 0x0.0p+0f) {
    v30 = v11;
  }
  else {
    v30 = 0x0.0p+0f;
  }
  v31 = 0x1.0000000000000p+0f / v28;
  if (v27 == 0x0.0p+0f) {
    v32 = 0x0.0p+0f;
  }
  else {
    v32 = 0x1.0000000000000p+0f / v28;
  }
  v33 = v32 * v9;
  if (v29 >= (float)(v33 * v33)) {
    v22 = v29 - (float)(PSEUDO_UNFUSED(v33 * v33));
  }
  else {
    v34 = v33 <= 0x0.0p+0f;
    v33 = sqrtf(v29);
    if (v34) {
      v33 = -v33;
    }
  }
  v35 = v32 * v12;
  v36 = v81 + v24;
  v37 = v82 + v24;
  v38 = v23 + v24;
  v39 = v81 + v25;
  v40 = v82 + v25;
  v41 = v23 + v25;
  v42 = v23 + v26;
  if (v30 >= (float)(v35 * v35)) {
    v44 = v30 - (float)(PSEUDO_UNFUSED(v35 * v35));
  }
  else {
    v43 = sqrtf(v30);
    v44 = 0x0.0p+0f;
    if (v35 <= 0x0.0p+0f) {
      v35 = -v43;
    }
    else {
      v35 = v43;
    }
  }
  v45 = sqrtf(v22);
  if (v45 == 0x0.0p+0f) {
    v50 = 0x0.0p+0f;
    v51 = 0x0.0p+0f * (float)(v13 - (float)(v35 * v33));
    v52 = v51 * v51;
    if (v44 < (float)(v51 * v51)) {
      goto LABEL_25;
    }
  LABEL_29:
    v54 = sqrtf(v44 - v52);
    goto LABEL_30;
  }
  v50 = 0x1.0000000000000p+0f / v45;
  v51 =
      (float)(0x1.0000000000000p+0f / v45) * (float)(v13 - (float)(v35 * v33));
  v52 = v51 * v51;
  if (v44 >= (float)(v51 * v51)) {
    goto LABEL_29;
  }
LABEL_25:
  v53 = sqrtf(v44);
  if (v51 <= 0x0.0p+0f) {
    v51 = -v53;
  }
  else {
    v51 = v53;
  }
  v54 = sqrtf(0x0.0p+0f);
LABEL_30:
  if (v27 == 0x0.0p+0f) {
    v55 = 0x0.0p+0f;
  }
  else {
    v55 = v31;
  }
  v56 = v86_.v88 - v86_.v87;
  v57 = -(float)((float)((float)(v33 * v55) + 0x0.0p+0f) * v50);
  v58 = 0x0.0p+0f;
  v59 = v80 - v79;
  v60 = v6 - v7;
  if (v54 != 0x0.0p+0f) {
    v58 = 0x1.0000000000000p+0f / v54;
  }
  v61 = (float)((float)(v35 * v55) + 0x0.0p+0f) + (float)(v51 * v57);
  v62 = (float)(PSEUDO_UNFUSED(v55 * v55)) + (float)(PSEUDO_UNFUSED(v57 * v57));
  v63 = -(float)((float)((float)(v51 * v50) + 0x0.0p+0f) * v58);
  v64 = -(float)(v61 * v58);
  v65 = v63 * v63;
  v66 = v64 * v64;
  v67 = (float)((float)(v57 * v50) + 0x0.0p+0f) + (float)(v64 * v63);
  v68 = (float)(v64 * v58) + 0x0.0p+0f;
  v69 = (float)(v63 * v58) + 0x0.0p+0f;
  v70 = v58 * v58;
  v71 = v62 + v66;
  v72 = (float)(PSEUDO_UNFUSED(v50 * v50)) + v65;
  v46 = *(float*)&v3[4 * v36];
  v73 =
      (float)((float)((float)((float)((float)((float)((float)(v46 * v71) +
                                                      0x0.0p+0f) +
                                              (float)(*(float*)&v3[4 * v37] *
                                                      v67)) +
                                      (float)(*(float*)&v3[4 * v38] * v68)) *
                              v56) +
                      0x0.0p+0f) +
              (float)((float)((float)((float)((float)(v46 * v67) + 0x0.0p+0f) +
                                      (float)(*(float*)&v3[4 * v37] * v72)) +
                              (float)(*(float*)&v3[4 * v38] * v69)) *
                      v59)) +
      (float)((float)((float)((float)((float)(v46 * v68) + 0x0.0p+0f) +
                              (float)(*(float*)&v3[4 * v37] * v69)) +
                      (float)(*(float*)&v3[4 * v38] * v70)) *
              v60);
  v47 = *(float*)&v3[4 * v40];
  v74 = (float)((float)((float)((float)((float)((float)((float)(*(float*)&v3
                                                                    [4 * v39] *
                                                                v71) +
                                                        0x0.0p+0f) +
                                                (float)(v47 * v67)) +
                                        (float)(*(float*)&v3[4 * v41] * v68)) *
                                v56) +
                        0x0.0p+0f) +
                (float)((float)((float)((float)((float)(*(float*)&v3[4 * v39] *
                                                        v67) +
                                                0x0.0p+0f) +
                                        (float)(v47 * v72)) +
                                (float)(*(float*)&v3[4 * v41] * v69)) *
                        v59)) +
        (float)((float)((float)((float)((float)(*(float*)&v3[4 * v39] * v68) +
                                        0x0.0p+0f) +
                                (float)(v47 * v69)) +
                        (float)(*(float*)&v3[4 * v41] * v70)) *
                v60);
  v49 = *(float*)&v3[4 * v42];
  v48 = *(float*)&v3[4 * v81 + 4 * v26];
  v75 =
      (float)((float)((float)((float)((float)((float)((float)(v48 * v71) +
                                                      0x0.0p+0f) +
                                              (float)(*(float*)&v3[4 * v82 +
                                                                   4 * v26] *
                                                      v67)) +
                                      (float)(v49 * v68)) *
                              v56) +
                      0x0.0p+0f) +
              (float)((float)((float)((float)((float)(v48 * v67) + 0x0.0p+0f) +
                                      (float)(*(float*)&v3[4 * v82 + 4 * v26] *
                                              v72)) +
                              (float)(v49 * v69)) *
                      v59)) +
      (float)((float)((float)((float)((float)(v48 * v68) + 0x0.0p+0f) +
                              (float)(*(float*)&v3[4 * v82 + 4 * v26] * v69)) +
                      (float)(v49 * v70)) *
              v60);
  v76 = sqrtf((float)((float)(PSEUDO_UNFUSED(v75 * v75)) +
                      (float)((float)(PSEUDO_UNFUSED(v73 * v73)) +
                              (float)(PSEUDO_UNFUSED(v74 * v74)))) +
              0x1.0000000000000p-126f) *
        0x1.0000000000000p-1f;
  if ((float)(v76 * v76) <= 0x1.47ae140000000p-5f) {
    v77 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v76 *
                                                                                        v76) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v76 *
                                                                        v76)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v76 * v76)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v76 * v76)) +
                        -0x1.5555560000000p-3f) *
                (float)(v76 * v76)) +
        0x1.0000000000000p+0f;
  }
  else {
    v77 = sinf_plt(v76) / v76;
  }
  return (float)((float)(PSEUDO_UNFUSED(
                     (float)(v73 * (float)(v77 * 0x1.0000000000000p-1f)) *
                     *((float*)this_ + 2059))) +
                 (float)(PSEUDO_UNFUSED(cosf_plt(v76) *
                                        *((float*)this_ + 2056)))) +
         (float)((float)((float)(v74 * (float)(v77 * 0x1.0000000000000p-1f)) *
                         *((float*)this_ + 2058)) -
                 (float)(PSEUDO_UNFUSED(
                     *((float*)this_ + 2057) *
                     (float)(v75 * (float)(v77 * 0x1.0000000000000p-1f)))));
}

__int64 nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate(__int64 a1,
                                                                     float a2,
                                                                     float a3,
                                                                     float a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 result;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    float v29;
    float v30;
    float v31;
  } v29_;
  struct {
    _QWORD v32[4];
    int v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    float v38;
  } v34_;
  _DWORD v39[2];

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  v25 = 0;
  v27 = 0;
  v34_.v38 = 0x0.0p+0f;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v34 = 0;
  v34_.v35 = 0;
  v32_.v32[2] = v4;
  v32_.v32[3] = v5;
  v32_.v33 = *(_DWORD*)(a1 + 32);
  v9 = *(_QWORD*)(a1 + 8);
  v32_.v32[0] = *(_QWORD*)a1;
  v32_.v32[1] = v9;
  v26 = 0x3F80000000000000LL;
  v28 = 0x3F80000000000000LL;
  v24 = 0x1.0000000000000p+0f;
  SdkRoutine_87a1e0((void*)(&v34_.v34), v32_.v32, &v24);
  v29_.v29 = *(float*)&v34_.v34;
  v29_.v30 = *(float*)&v34_.v36;
  v29_.v31 = v34_.v38;
  v39[0] = HIDWORD(v34_.v35);
  v39[1] = HIDWORD(v34_.v37);
  result = SdkRoutine_87a1f0(3, &v29_.v29, v39, 3, 3, 1, &v24);
  v11 = 0x1.0000000000000p+0f / v29_.v29;
  v12 = 0x1.0000000000000p+0f / v29_.v30;
  v13 = (float)((float)((float)(v24 * a2) + 0x0.0p+0f) +
                (float)(*(float*)&v26 * a3)) +
        (float)(*((float*)&v27 + 1) * a4);
  v14 = 0x1.0000000000000p+0f / v29_.v31;
  v15 = (float)((float)((float)(*(float*)&v25 * a2) + 0x0.0p+0f) +
                (float)(*((float*)&v26 + 1) * a3)) +
        (float)(*(float*)&v28 * a4);
  v16 = (float)((float)((float)(*((float*)&v25 + 1) * a2) + 0x0.0p+0f) +
                (float)(*(float*)&v27 * a3)) +
        (float)(*((float*)&v28 + 1) * a4);
  v17 =
      (float)((float)((float)(v13 * (float)((float)(0x1.0000000000000p+0f /
                                                    v29_.v29) *
                                            v13)) +
                      0x0.0p+0f) +
              (float)(v15 * (float)((float)(0x1.0000000000000p+0f / v29_.v30) *
                                    v15))) +
      (float)(v16 * (float)((float)(0x1.0000000000000p+0f / v29_.v31) * v16));
  if (v17 > 0x1.8000000000000p+2f) {
    v18 = 0x1.0000000000000p+0f /
          (float)((float)((float)(v11 + 0x0.0p+0f) + v12) + v14);
    if (v18 > 0x0.0p+0f) {
      v19 = 0x1.8000000000000p+2f / (float)(v17 / 0x1.8000000000000p+2f);
      while (1) {
        v20 = v18;
        if (fabs(v18) > 0x1.fffffe0000000p+127f) {
          break;
        }
        v21 =
            (float)((float)((float)(v13 *
                                    (float)(v13 *
                                            (float)(v11 /
                                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                                        v11 *
                                                                        v18)) +
                                                                    0x1.0000000000000p+0f) *
                                                            (float)((float)(PSEUDO_UNFUSED(
                                                                        v11 *
                                                                        v18)) +
                                                                    0x1.0000000000000p+0f))))) +
                            0x0.0p+0f) +
                    (float)(v15 *
                            (float)(v15 *
                                    (float)(v12 /
                                            (float)((float)((float)(PSEUDO_UNFUSED(
                                                                v12 * v18)) +
                                                            0x1.0000000000000p+0f) *
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                v12 * v18)) +
                                                            0x1.0000000000000p+0f)))))) +
            (float)(v16 *
                    (float)(v16 *
                            (float)(v14 /
                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                        v14 * v18)) +
                                                    0x1.0000000000000p+0f) *
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        v14 * v18)) +
                                                    0x1.0000000000000p+0f)))));
        v18 = v18 + v18;
        if (v21 <= v19) {
          v22 = (float)(v20 + 0x0.0p+0f) * 0x1.0000000000000p-1f;
          if (COERCE_INT(fabs(v22)) <= 2139095039) {
            v23 = 0x0.0p+0f;
            do {
              if (v22 <= v23 || v22 >= v20) {
                break;
              }
              if ((float)((float)((float)((float)(v13 *
                                                  (float)(v13 *
                                                          (float)(v11 /
                                                                  (float)((float)((float)(PSEUDO_UNFUSED(
                                                                                      v11 *
                                                                                      v22)) +
                                                                                  0x1.0000000000000p+0f) *
                                                                          (float)((float)(PSEUDO_UNFUSED(
                                                                                      v11 *
                                                                                      v22)) +
                                                                                  0x1.0000000000000p+0f))))) +
                                          0x0.0p+0f) +
                                  (float)(v15 *
                                          (float)(v15 *
                                                  (float)(v12 /
                                                          (float)((float)((float)(PSEUDO_UNFUSED(
                                                                              v12 *
                                                                              v22)) +
                                                                          0x1.0000000000000p+0f) *
                                                                  (float)((float)(PSEUDO_UNFUSED(
                                                                              v12 *
                                                                              v22)) +
                                                                          0x1.0000000000000p+0f)))))) +
                          (float)(v16 *
                                  (float)(v16 *
                                          (float)(v14 /
                                                  (float)((float)((float)(PSEUDO_UNFUSED(
                                                                      v14 *
                                                                      v22)) +
                                                                  0x1.0000000000000p+0f) *
                                                          (float)((float)(PSEUDO_UNFUSED(
                                                                      v14 *
                                                                      v22)) +
                                                                  0x1.0000000000000p+0f)))))) <=
                  v19) {
                v20 = v22;
              }
              else {
                v23 = v22;
              }
              v22 = (float)(v20 + v23) * 0x1.0000000000000p-1f;
            } while (COERCE_INT(fabs(v22)) <= 2139095039);
          }
          return result;
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_GetStateStd(PSEUDO_X8 x8_, void* this_)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  unsigned __int64 v5;
  float v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  float v36;
  float v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64* result;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  __int64 v48[9];
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v54_;

  *(_DWORD*)(a2 + 116) = 0;
  *(_QWORD*)(a2 + 108) = 0;
  v3 = *((_QWORD*)this_ + 1026);
  *(_QWORD*)(a2 + 100) = 0;
  *(_QWORD*)(a2 + 92) = 0;
  *(_QWORD*)(a2 + 84) = 0;
  v49 = *((_QWORD*)this_ + 1025);
  v50 = v3;
  v51 = *((_QWORD*)this_ + 1027);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v5 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v6 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v7 = sqrtf(*((float*)this_ + 34 * v5 + 54));
  v8 = *((_QWORD*)this_ + 1030);
  v9 = *((_QWORD*)this_ + 1031);
  *(float*)a2 = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 4) = v6;
  *(float*)(a2 + 8) = v7;
  v49 = v8;
  v50 = v9;
  v51 = *((_QWORD*)this_ + 1032);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v10 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v11 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v12 = sqrtf(*((float*)this_ + 34 * v10 + 54));
  v13 = *((_QWORD*)this_ + 1035);
  v14 = *((_QWORD*)this_ + 1036);
  *(float*)(a2 + 12) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 16) = v11;
  *(float*)(a2 + 20) = v12;
  v49 = v13;
  v50 = v14;
  v51 = *((_QWORD*)this_ + 1037);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v15 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v16 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v17 = sqrtf(*((float*)this_ + 34 * v15 + 54));
  v18 = *((_QWORD*)this_ + 1049);
  v19 = *((_QWORD*)this_ + 1050);
  v20 = *((_QWORD*)this_ + 1048);
  v21 = *((_QWORD*)this_ + 1044);
  v22 = *((_QWORD*)this_ + 1051);
  *(float*)(a2 + 24) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 28) = v16;
  *(float*)(a2 + 32) = v17;
  v54_.v56 = 0;
  v54_.v57 = 0;
  v54_.v54 = 0;
  v54_.v55 = 0;
  v52 = 0;
  v53 = 0;
  v50 = 0;
  v51 = 0;
  v49 = 0;
  v48[6] = v18;
  v48[7] = v19;
  v23 = *((_QWORD*)this_ + 1045);
  v24 = *((_QWORD*)this_ + 1046);
  v48[8] = v22;
  v48[2] = v23;
  v48[3] = v24;
  v48[4] = *((_QWORD*)this_ + 1047);
  v48[5] = v20;
  v48[0] = *((_QWORD*)this_ + 1043);
  v48[1] = v21;
  fw_math_MapStateIndices9((void*)((__int64*)&v49),
                           (unsigned __int64*)this_ + 573, v48);
  v25 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v26 = sqrtf(*((float*)this_ + 34 * v51 + 54));
  v27 = sqrtf(*((float*)this_ + 34 * v52 + 54));
  v28 = sqrtf(*((float*)this_ + 34 * v53 + 54));
  v29 = sqrtf(*((float*)this_ + 34 * v54_.v54 + 54));
  v30 = sqrtf(*((float*)this_ + 34 * v54_.v55 + 54));
  v31 = sqrtf(*((float*)this_ + 34 * v54_.v56 + 54));
  v32 = sqrtf(*((float*)this_ + 34 * v54_.v57 + 54));
  v33 = *((_QWORD*)this_ + 1054);
  v34 = *((_QWORD*)this_ + 1055);
  *(float*)(a2 + 36) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 40) = v25;
  *(float*)(a2 + 44) = v26;
  *(float*)(a2 + 48) = v27;
  *(float*)(a2 + 52) = v28;
  *(float*)(a2 + 56) = v29;
  *(float*)(a2 + 60) = v30;
  *(float*)(a2 + 64) = v31;
  *(float*)(a2 + 68) = v32;
  v49 = v33;
  v50 = v34;
  v51 = *((_QWORD*)this_ + 1056);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v35 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v36 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v37 = sqrtf(*((float*)this_ + 34 * v35 + 54));
  v38 = *((_QWORD*)this_ + 1064);
  v39 = *((_QWORD*)this_ + 1065);
  *(float*)(a2 + 72) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 76) = v36;
  *(float*)(a2 + 80) = v37;
  v51 = v38;
  v52 = v39;
  v40 = *((_QWORD*)this_ + 1067);
  v53 = *((_QWORD*)this_ + 1066);
  v54_.v54 = v40;
  v41 = *((_QWORD*)this_ + 1063);
  v49 = *((_QWORD*)this_ + 1062);
  v50 = v41;
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v51 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v52 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v52);
  v53 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v53);
  result = fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, &v54_.v54);
  v43 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v44 = sqrtf(*((float*)this_ + 34 * v51 + 54));
  v45 = sqrtf(*((float*)this_ + 34 * v52 + 54));
  v46 = sqrtf(*((float*)this_ + 34 * v53 + 54));
  v47 = sqrtf(*((float*)this_ + 34 * *result + 54));
  *(float*)(a2 + 84) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 88) = v43;
  *(float*)(a2 + 92) = v44;
  *(float*)(a2 + 96) = v43;
  *(float*)(a2 + 100) = v45;
  *(float*)(a2 + 104) = v46;
  *(float*)(a2 + 108) = v44;
  *(float*)(a2 + 112) = v46;
  *(float*)(a2 + 116) = v47;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_GetStateUniqueStd(PSEUDO_X8 x8_,
                                                      void* this_)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float result;
  int v21;
  struct {
    __int64 v22;
    int v23;
    int v24;
    float v25;
    int v26;
  } v22_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 116) = 0;
  *(_QWORD*)(a2 + 108) = 0;
  *(_QWORD*)(a2 + 100) = 0;
  *(_QWORD*)(a2 + 92) = 0;
  *(_QWORD*)(a2 + 84) = 0;
  *(_QWORD*)(a2 + 76) = 0;
  *(_QWORD*)(a2 + 68) = 0;
  *(_QWORD*)(a2 + 60) = 0;
  *(_QWORD*)(a2 + 52) = 0;
  *(_QWORD*)(a2 + 44) = 0;
  *(_QWORD*)(a2 + 36) = 0;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1025),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)a2 = v4;
  *(_DWORD*)(a2 + 4) = v5;
  *(_DWORD*)(a2 + 8) = v6;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1030),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 12) = v7;
  *(_DWORD*)(a2 + 16) = v8;
  *(_DWORD*)(a2 + 20) = v9;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1035),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 24) = v10;
  *(_DWORD*)(a2 + 28) = v11;
  *(_DWORD*)(a2 + 32) = v12;
  SdkRoutine_719ca0((void*)((float*)(a2 + 36)), (_QWORD*)this_ + 25,
                    (__int64*)this_ + 1043),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1054),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 72) = v13;
  *(_DWORD*)(a2 + 76) = v14;
  *(_DWORD*)(a2 + 80) = v15;
  math_71d560((void*)((float*)&v22_.v22), (_QWORD*)this_ + 25,
              (__int64*)this_ + 1062),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  v16 = HIDWORD(v22_.v22);
  v17 = v22_.v23;
  v18 = v22_.v24;
  *(_QWORD*)(a2 + 84) = v22_.v22;
  v19 = v22_.v23;
  *(_DWORD*)(a2 + 96) = v16;
  *(_DWORD*)(a2 + 100) = v18;
  result = v22_.v25;
  v21 = v22_.v26;
  *(_DWORD*)(a2 + 92) = v19;
  *(float*)(a2 + 104) = result;
  *(_DWORD*)(a2 + 108) = v17;
  *(float*)(a2 + 112) = result;
  *(_DWORD*)(a2 + 116) = v21;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_StoreParameters(PSEUDO_X8 x8_, void* this_,
                                                    __int64 unused_int1,
                                                    __int64 unused_int2,
                                                    unsigned __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
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
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v37[21];
  __int64 v38[21];

  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1((void*)(a3 + 96), nullptr, 1764, a2),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = *((_QWORD*)this_ + 1033);
  v6 = *((_QWORD*)this_ + 1039);
  v7 = *((_QWORD*)this_ + 1040);
  v8 = *((_QWORD*)this_ + 1041);
  v9 = *((_DWORD*)this_ + 2084);
  v10 = *((_QWORD*)this_ + 1038);
  v11 = *((_DWORD*)this_ + 2068);
  v12 = *((_QWORD*)this_ + 1036);
  v13 = *((_QWORD*)this_ + 1065);
  v14 = *((_QWORD*)this_ + 1066);
  v15 = *((_QWORD*)this_ + 1067);
  v16 = *((_QWORD*)this_ + 1035);
  memset(v38, 0, sizeof(v38));
  *(_QWORD*)(a3 + 48) = v5;
  v17 = *((_QWORD*)this_ + 1052);
  *(_QWORD*)(a3 + 68) = v6;
  v18 = *((_QWORD*)this_ + 1055);
  *(_QWORD*)(a3 + 76) = v7;
  *(_QWORD*)(a3 + 84) = v8;
  *(_DWORD*)(a3 + 92) = v9;
  *(_QWORD*)(a3 + 60) = v10;
  v19 = *((_QWORD*)this_ + 1056);
  v20 = *((_QWORD*)this_ + 1062);
  v21 = *((_QWORD*)this_ + 1063);
  v22 = *((_QWORD*)this_ + 1064);
  v37[6] = v13;
  v37[7] = v14;
  v37[8] = v15;
  v37[9] = v16;
  v23 = *((_QWORD*)this_ + 1048);
  v24 = *((_QWORD*)this_ + 1049);
  v25 = *((_QWORD*)this_ + 1050);
  *(_DWORD*)(a3 + 56) = v11;
  v26 = *((_DWORD*)this_ + 2106);
  *(_QWORD*)a3 = v17;
  v27 = *((_QWORD*)this_ + 1057);
  v37[2] = v19;
  v37[3] = v20;
  v37[4] = v21;
  v37[5] = v22;
  v28 = *((_QWORD*)this_ + 1044);
  v29 = *((_QWORD*)this_ + 1045);
  v30 = *((_QWORD*)this_ + 1046);
  v31 = *((_QWORD*)this_ + 1047);
  v37[18] = v24;
  v37[19] = v25;
  *(_DWORD*)(a3 + 8) = v26;
  *(_QWORD*)(a3 + 12) = v27;
  LODWORD(v27) = *((_DWORD*)this_ + 2122);
  v37[14] = v29;
  v37[15] = v30;
  v37[16] = v31;
  v37[17] = v23;
  *(_DWORD*)(a3 + 44) = v27;
  *(_QWORD*)(a3 + 36) = *((_QWORD*)this_ + 1060);
  *(_QWORD*)(a3 + 28) = *((_QWORD*)this_ + 1059);
  *(_QWORD*)(a3 + 20) = *((_QWORD*)this_ + 1058);
  v37[0] = *((_QWORD*)this_ + 1054);
  v37[1] = v18;
  v32 = *((_QWORD*)this_ + 1037);
  v33 = *((_QWORD*)this_ + 1043);
  v37[10] = v12;
  v37[11] = v32;
  v34 = *((_QWORD*)this_ + 1051);
  v37[12] = v33;
  v37[13] = v28;
  v37[20] = v34;
  fw_math_MapStateIndices21((void*)((__int64)v38),
                            (unsigned __int64*)this_ + 573, v37),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  {
    X8CALL_X0(__int64, SdkRoutine_7202e0((void*)(a3 + 96), (__int64)this_ + 200,
                                         v38, v38, v35)),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    return;
  }
}

__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance(void* this_)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v3;
  float v4;
  float v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  struct {
    _QWORD v11[4];
    int v12;
  } v11_;
  _QWORD v13[3];
  __int128 v14;
  __int128 v15;
  __int128 v16;
  _QWORD v17[2];
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[3];
  _QWORD v24[3];
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int128 v30;
  __int64 v31;
  int v32;

  v1 = *((_QWORD*)this_ + 1031);
  v24[2] = 0;
  v21 = 0;
  v22 = 0;
  v20 = (__typeof__(v20)){0};
  v18 = 0;
  v19 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v24[0] = 0x3F80000000000000LL;
  v24[1] = 0;
  v26 = 0;
  v27 = 0;
  v25 = 1065353216;
  v28 = 1065353216;
  v23[0] = *((_QWORD*)this_ + 1030);
  v23[1] = v1;
  v23[2] = *((_QWORD*)this_ + 1032);
  math_724480((void*)((float*)&v29), (float*)v24);
  math_7241f0((void*)((float*)v17), (float*)&v29, (float*)this_ + 2056);
  v3 = *(float*)v17;
  v4 = *(float*)&v18;
  v5 = *(float*)&v20;
  v6 = v21;
  *(_QWORD*)((char*)&v20 + 4) = 0;
  DWORD3(v20) = 0;
  v16 = (__typeof__(v16)){0};
  v15 = (__typeof__(v15)){0};
  v14 = (__typeof__(v14)){0};
  *((_DWORD*)this_ + 2056) = v17[0];
  *((float*)this_ + 2057) = v4;
  *((float*)this_ + 2058) = v5;
  *((_DWORD*)this_ + 2059) = v6;
  *(float*)v11_.v11 = -v3;
  *((float*)v11_.v11 + 1) = -v4;
  *(float*)&v11_.v11[1] = -v5;
  HIDWORD(v11_.v11[1]) = v6;
  math_7241f0((void*)((float*)&v29), (float*)v17, (float*)v11_.v11);
  SdkRoutine_728730((void*)((float*)&v14), (float*)&v29);
  v7 = *((_QWORD*)this_ + 1031);
  v13[0] = *((_QWORD*)this_ + 1030);
  v13[1] = v7;
  v8 = *((_QWORD*)this_ + 1032);
  *(_QWORD*)((char*)&v30 + 4) = *(_QWORD*)((char*)&v15 + 4);
  v13[2] = v8;
  DWORD3(v30) = DWORD3(v15);
  LODWORD(v30) = DWORD3(v14);
  v11_.v12 = DWORD3(v16);
  v32 = 0;
  v9 = v30;
  v30 = (__typeof__(v30)){0};
  v29 = 0;
  v31 = 0;
  v11_.v11[3] = *(_QWORD*)((char*)&v16 + 4);
  v11_.v11[0] = *(_QWORD*)((char*)&v14 + 4);
  *(_OWORD*)&v11_.v11[1] = v9;
  return SdkRoutine_879fd0((char*)this_ + 200, v11_.v11, v23, v13, &v29);
}

__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeading(__int64 result,
                                                         long double a2,
                                                         double a3, double a4,
                                                         long double a5)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21[2];
  _QWORD v22[2];

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v22[0] = 0;
  v22[1] = 1065353216;
  v5 = (float)(PSEUDO_UNFUSED(*(float*)&a4 * *(float*)&a4)) +
       (float)((float)(PSEUDO_UNFUSED(*(float*)&a2 * *(float*)&a2)) +
               (float)(PSEUDO_UNFUSED(*(float*)&a3 * *(float*)&a3)));
  v6 = (float)(*(float*)&a3 +
               (float)((float)(*(float*)&a2 * 0x0.0p+0f) + 0x0.0p+0f)) +
       (float)(*(float*)&a4 * 0x0.0p+0f);
  v7 = (float)(PSEUDO_UNFUSED(*(float*)&a2 * v6)) +
       (float)(PSEUDO_UNFUSED(v5 * -0x0.0p+0f));
  v8 = (float)(PSEUDO_UNFUSED(*(float*)&a3 * v6)) - v5;
  v9 = *(float*)&a5 *
       (float)-(float)(*(float*)&a4 - (float)(*(float*)&a3 * 0x0.0p+0f));
  v10 = *(float*)&a5 *
        (float)((float)(PSEUDO_UNFUSED(*(float*)&a2 * -0x0.0p+0f)) +
                (float)(*(float*)&a4 * 0x0.0p+0f));
  v11 = 0x1.0000000000000p+1f /
        (float)((float)(PSEUDO_UNFUSED(*(float*)&a5 * *(float*)&a5)) + v5);
  LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  *(float*)&a3 = v11 * (float)(v9 + v7);
  *(float*)&a2 =
      (float)(PSEUDO_UNFUSED(v11 * (float)(v10 + v8))) + 0x1.0000000000000p+0f;
  v21[0] = *(float*)&a3 + 0x0.0p+0f;
  v21[1] = *(float*)&a2;
  if (*(float*)&a3 != 0x0.0p+0f || *(float*)&a2 != 0x0.0p+0f) {
    v12 = result;
    *(float*)&a4 = *(float*)&a3 + 0x0.0p+0f;
    v13 = SdkRoutine_712760(v21, (float*)v22 + 1, a2, a3, a4, a5),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
    v14 = *(float*)(v12 + 8224);
    v15 = *(float*)(v12 + 8228);
    v16 = *(float*)(v12 + 8232);
    v17 = *(float*)(v12 + 8236);
    *(float*)(v12 + 8236) =
        -(float)((float)((float)((float)((float)(v13 * v14) + 0x0.0p+0f) +
                                 (float)(v18 * v15)) +
                         (float)(v19 * v16)) -
                 (float)(v20 * v17));
    *(float*)(v12 + 8224) =
        (float)((float)(PSEUDO_UNFUSED(v17 * v13)) +
                (float)(PSEUDO_UNFUSED(v20 * v14))) +
        (float)((float)(v18 * v16) - (float)(PSEUDO_UNFUSED(v15 * v19)));
    *(float*)(v12 + 8228) =
        (float)((float)(PSEUDO_UNFUSED(v17 * v18)) +
                (float)(PSEUDO_UNFUSED(v20 * v15))) +
        (float)((float)(v19 * v14) - (float)(PSEUDO_UNFUSED(v16 * v13)));
    *(float*)(v12 + 8232) =
        (float)((float)(v13 * v15) - (float)(PSEUDO_UNFUSED(v14 * v18))) +
        (float)((float)(PSEUDO_UNFUSED(v17 * v19)) +
                (float)(PSEUDO_UNFUSED(v20 * v16)));
    *(_QWORD*)(v12 + 12400) = *(_QWORD*)(v12 + 8224);
    *(_QWORD*)(v12 + 12408) = *(_QWORD*)(v12 + 8232);
    return nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance_plt(v12);
  }
  return result;
}

#pragma GCC visibility pop
