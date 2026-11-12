#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_620890(PSEUDO_X8, float32x4_t*,
                                                   float32x4_t*, float);
__attribute__((swiftcall)) void math_620ce0(PSEUDO_X8, float32x4_t* result,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_620ea0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float32x4_t*, float);
__attribute__((swiftcall)) void math_620f80(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float, float);
__attribute__((swiftcall)) void math_621050(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_621140(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_621230(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_621400(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float32x4_t*, float);
__attribute__((swiftcall)) void math_621500(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_6215f0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_6216d0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float);
__attribute__((swiftcall)) void math_6218c0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, float32x4_t*, float);
__int64 CScriptArray_At_1971f0(__int64, unsigned int);
__int64 CScriptArray_GetSize(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
double cos(double);
double exp2(double);
double sin(double);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_21a6120;
extern __int64 GameData_21a60e0;
__attribute__((swiftcall)) void math_619d50(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4);
__attribute__((swiftcall)) void math_61ad80(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4);
__attribute__((swiftcall)) void math_61b040(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4);
__attribute__((swiftcall)) void math_61bd00(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4);
float math_61c010(float a1, float a2, float a3);
float math_61c090(float a1, float a2, float a3);
float math_61c1a0(float a1, float a2, float a3);
float math_61c2f0(float a1, float a2, float a3);
float math_61c360(float a1, float a2, float a3);
float math_61c460(float a1, float a2, float a3, float a4, float a5, float a6,
                  float a7);
float math_61c6f0(float a1, float a2, float a3);
float math_61c920(float a1, float a2, float a3, float a4);
float math_61c9f0(float a1, float a2, float a3);
float math_61cab0(float a1, float a2, float a3);
float math_61cc40(float a1, float a2, float a3, float a4);
float math_61cce0(float a1, float a2, float a3);
float math_61cdc0(float a1, float a2, float a3);
float math_61d030(float a1, float a2, float a3, float a4);
float math_61d120(float a1, float a2, float a3);
float math_61d200(float a1, float a2, float a3);
float math_61d2d0(float a1, float a2, float a3);
float math_61d4b0(float a1, float a2, float a3, float a4);
__attribute__((swiftcall)) void math_61d660(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61d730(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61d7a0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61d810(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61d930(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float a6);
__attribute__((swiftcall)) void math_61d9b0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61da40(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61dad0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61dc30(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float32x2_t* a5,
                                            float a7);
__attribute__((swiftcall)) void math_61dce0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61dd90(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61de40(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61dfe0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float32x2_t* a5,
                                            float32x2_t* a6, float a8);
__attribute__((swiftcall)) void math_61e0b0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61e180(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61e250(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61e410(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5);
__attribute__((swiftcall)) void math_61e4e0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61e5d0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61e6c0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61e8b0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5);
__attribute__((swiftcall)) void math_61e9a0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61ea90(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61eb70(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61eda0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5);
__attribute__((swiftcall)) void math_61eea0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4,
                                            float a5);
__attribute__((swiftcall)) void math_61ef10(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4,
                                            float a5);
__attribute__((swiftcall)) void math_61ef80(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4,
                                            float a5);
__attribute__((swiftcall)) void math_61f090(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5, float a6);
__attribute__((swiftcall)) void math_61f100(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61f200(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4);
__attribute__((swiftcall)) void math_61f2f0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61f510(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5);
__attribute__((swiftcall)) void math_61f610(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61f710(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61f7f0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4);
__attribute__((swiftcall)) void math_61fa10(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5);
__attribute__((swiftcall)) void math_61fbf0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_61fc90(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_61fd60(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_61fdd0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_61fe40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_61ff50(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float32x4_t* a4, float32x4_t* a5,
                                            float a7);
__attribute__((swiftcall)) void math_61ffe0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620070(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620100(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620240(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float32x4_t* a4, float32x4_t* a5,
                                            float32x4_t* a6, float a8);
__attribute__((swiftcall)) void math_6202f0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_6203b0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620470(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_6205e0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5);
__attribute__((swiftcall)) void math_6206b0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_6207a0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620a40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5);
__attribute__((swiftcall)) void math_620b40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
__attribute__((swiftcall)) void math_620c10(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__attribute__((swiftcall)) void math_619d50(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  float v8;
  float v9;
  float32x2_t v10;
  float32x2_t v11;
  float v12;
  unsigned __int64* v13;
  float v14;
  float32x2_t v15;
  float v16;
  float v17;
  int v18;
  float32x2_t* v19;
  float32x2_t* v20;
  int v21;
  unsigned __int64* v22;
  unsigned __int64* v23;
  int v24;
  float32x2_t* v25;
  float32x2_t* v26;
  int v27;
  float32x2_t* v28;
  float32x2_t* v29;
  int v30;
  float32x2_t* v31;
  float32x2_t* v32;
  int v33;
  __int64 v34;
  float v35;
  unsigned int v36;
  float32x2_t v37;
  float32x2_t v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  int v46;
  unsigned __int64* v47;
  unsigned __int64* v48;
  int v49;
  unsigned __int64* v50;
  unsigned __int64* v51;
  int v52;
  float32x2_t* v53;
  float32x2_t* v54;
  float v55;
  int v56;
  float32x2_t* v57;
  float32x2_t* v58;
  __int64 v59;
  float v60;
  unsigned int v61;
  __int64 v62;
  float v63;
  unsigned int v64;
  __int64 v65;
  float v66;
  unsigned int v67;
  float32x2_t v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  float v73;
  unsigned int v74;
  __int64 v75;
  float v76;
  unsigned int v77;
  __int64 v78;
  float v79;
  unsigned int v80;
  __int64 v81;
  float v82;
  unsigned int v83;
  __int64 v84;
  float v85;
  unsigned int v86;
  __int64 v87;
  float v88;
  float v89;
  unsigned int v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64* v94;
  unsigned __int64 v95;
  unsigned __int64* v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64* v99;
  float32x2_t* v100;
  unsigned __int64 v101;
  float32x2_t v102;
  float32x2_t v103;
  float v104;
  int v105;
  unsigned __int64 v106;
  float32x2_t v107;
  unsigned __int64 v108;
  float32x2_t v109;
  float32x2_t v110;
  float32x2_t v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  float32x2_t v114;
  float32x2_t v115;
  unsigned __int64 v116;
  float32x2_t v117;
  float32x2_t v118;
  unsigned __int64 v119;
  float32x2_t v120;
  unsigned __int64 v121;
  float32x2_t v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  float32x2_t v126;
  float32x2_t v127;
  float32x2_t v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  float32x2_t v132;
  float32x2_t v133;
  float32x2_t v134;
  float32x2_t v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  float32x2_t v143;
  float32x2_t v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  float32x2_t v149;
  float32x2_t v150;
  float32x2_t v151;
  unsigned __int64 v152;
  unsigned __int64 v153;
  float32x2_t v154;
  float32x2_t v155;
  float32x2_t v156;
  float32x2_t v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  float32x2_t v160;
  float32x2_t v161;
  float32x2_t v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  float32x2_t v165;
  float32x2_t v166;
  float32x2_t v167;
  float32x2_t v168;
  unsigned __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  float32x2_t v176;
  float32x2_t v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  unsigned __int64 v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  float32x2_t v187;
  float32x2_t v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  unsigned __int64 v192;
  float32x2_t v193;
  float32x2_t v194;
  float32x2_t v195;
  float32x2_t v196;
  float32x2_t v197;
  float32x2_t v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  float32x2_t v201;
  float32x2_t v202;
  float32x2_t v203;
  float32x2_t v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  float32x2_t v207;
  float32x2_t v208;
  float32x2_t v209;
  float32x2_t v210;
  float32x2_t v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  float32x2_t v214;
  float32x2_t v215;
  float32x2_t v216;
  float32x2_t v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  float32x2_t v220;
  float32x2_t v221;
  float32x2_t v222;
  float32x2_t v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  float32x2_t v226;
  float32x2_t v227;
  float32x2_t v228;
  float32x2_t v229;
  unsigned __int64 v230;
  unsigned __int64 v231;
  float32x2_t v232;
  float32x2_t v233;
  __n64 v234;

  if (a4 <= 0x0.0p+0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    *(_QWORD*)a2 = GameData_21a60e0;
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0) {
      v104 = a3;
      v105 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8);
      a3 = v104;
      if (v105 != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
        a3 = v104;
      }
    }
    v7 = *(_QWORD*)(a1 + 24);
    if (a3 > a4) {
      v8 = a4;
    }
    else {
      v8 = a3;
    }
    if (a3 >= 0x0.0p+0f) {
      v9 = v8;
    }
    else {
      v9 = 0x0.0p+0f;
    }
    *(_QWORD*)a2 = GameData_21a60e0;
    if (v7 != 0 && (unsigned int)CScriptArray_GetSize(v7) > 1) {
      v116 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 0);
      v13 = (unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 1u);
      LANES64(v10).n64_u64[0] = v116;
      LANES64(v11).n64_u64[0] = *v13;
      v12 = *(float*)(a1 + 20);
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
        GameData_21a60e0 = 0;
        __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
      }
      PSEUDO_LOW_LANE64(v10, n64_u64, GameData_21a60e0);
      LANES64(v11).n64_u64[0] = 1065353216;
      v12 = sqrtf(
          (float)(PSEUDO_UNFUSED(
              (float)(0x0.0p+0f - *((float*)&GameData_21a60e0 + 1)) *
              (float)(0x0.0p+0f - *((float*)&GameData_21a60e0 + 1)))) +
          (float)((float)(0x1.0000000000000p+0f - *(float*)&GameData_21a60e0) *
                  (float)(0x1.0000000000000p+0f - *(float*)&GameData_21a60e0)));
    }
    v14 = v9 / a4;
    switch (*(_DWORD*)(a1 + 8)) {
    case 1:
      v33 = *(_DWORD*)(a1 + 12);
      if (v33 == 3) {
        LANES64(v232).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v233).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61d660((void*)(&v234), &v233, &v232, v14);
        goto LABEL_120;
      }
      if (v33 != 2) {
        if (v33 == 1) {
          goto LABEL_43;
        }
        v34 = *(_QWORD*)(a1 + 24);
        if (v34 == 0) {
          goto LABEL_43;
        }
        v35 = v9 / a4;
        v106 = LANES64(v11).n64_u64[0];
        LANES64(v117).n64_u64[0] = LANES64(v10).n64_u64[0];
        v36 = CScriptArray_GetSize(v34);
        LANES64(v11).n64_u64[0] = v106;
        LANES64(v10).n64_u64[0] = LANES64(v117).n64_u64[0];
        v14 = v35;
        if (v36 > 2) {
          v100 = (float32x2_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
          v101 = LANES64(v117).n64_u32[0] |
                 ((unsigned __int64)LANES64(v117).n64_u32[1] << 32);
          LANES64(v102).n64_u64[0] =
              LANES64_OF(
                  vsub_f32(COERCE_AS(float32x2_t, LANES64(*(v100)).n64_u64[0]),
                           COERCE_AS(float32x2_t, v101)))
                  .n64_u64[0];
          LANES64(v103).n64_u64[0] =
              LANES64_OF(
                  vsub_f32(COERCE_AS(float32x2_t,
                                     ((unsigned int)v106 |
                                      ((unsigned __int64)HIDWORD(v106) << 32))),
                           COERCE_AS(float32x2_t, v101)))
                  .n64_u64[0];
          *(float*)&v101 = v35 * (float)((float)(0x1.0000000000000p+0f - v35) +
                                         (float)(0x1.0000000000000p+0f - v35));
          v43 = *(float*)&v101 * LANES64(v102).n64_f32[0];
          v44 = vmuls_lane_f32(*(float*)&v101, v102, 1);
          v41 = (float)(v35 * v35) * LANES64(v103).n64_f32[0];
          v42 = vmuls_lane_f32(v35 * v35, v103, 1);
        }
        else {
        LABEL_43:
          LANES64(v37).n64_u64[0] =
              LANES64_OF(
                  vsub_f32(COERCE_AS(float32x2_t,
                                     (LANES64(v11).n64_u32[0] |
                                      ((unsigned __int64)LANES64(v11).n64_u32[1]
                                       << 32))),
                           v10))
                  .n64_u64[0];
          LANES64(v38).n64_u64[0] = LANES64_OF(vsub_f32(v10, v10)).n64_u64[0];
          v39 = v14 * (float)((float)(0x1.0000000000000p+0f - v14) +
                              (float)(0x1.0000000000000p+0f - v14));
          v40 = v14 * v14;
          v41 = v39 * LANES64(v38).n64_f32[0];
          v42 = vmuls_lane_f32(v39, v38, 1);
          v43 = v40 * LANES64(v37).n64_f32[0];
          v44 = vmuls_lane_f32(v40, v37, 1);
        }
        v16 = v41 + v43;
        v17 = v42 + v44;
        goto LABEL_45;
      }
      LANES64(v68).n64_u64[0] = LANES64_OF(vsub_f32(v11, v10)).n64_u64[0];
      v69 = v14 * (float)((float)(0x1.0000000000000p+0f - v14) +
                          (float)(0x1.0000000000000p+0f - v14));
      v70 = v14 * v14;
      v71 = v70 * LANES64(v68).n64_f32[0];
      v17 = vmuls_lane_f32(v70, v68, 1) + vmuls_lane_f32(v69, v68, 1);
      v45 = (float)(v71 +
                    (float)(PSEUDO_UNFUSED(v69 * LANES64(v68).n64_f32[0]))) /
            v12;
      goto LABEL_121;
    case 2:
      v24 = *(_DWORD*)(a1 + 12);
      switch (v24) {
      case 3:
        LANES64(v226).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v227).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61d810((void*)(&v234), &v227, &v226, v14);
        goto LABEL_120;
      case 2:
        LANES64(v228).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v229).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61d7a0((void*)(&v234), &v229, &v228, v14);
        goto LABEL_120;
      case 1:
        v25 = (float32x2_t*)&v231;
        v26 = (float32x2_t*)&v230;
        v230 = LANES64(v11).n64_u64[0];
        v231 = LANES64(v10).n64_u64[0];
      LABEL_83:
        math_61d730((void*)(&v234), v25, v26, v14);
        goto LABEL_120;
      default:
        break;
      }
      v65 = *(_QWORD*)(a1 + 24);
      if (v65 == 0 ||
          (v66 = v9 / a4, LANES64(v109).n64_u64[0] = LANES64(v11).n64_u64[0],
           LANES64(v120).n64_u64[0] = LANES64(v10).n64_u64[0],
           v67 = CScriptArray_GetSize(v65),
           LANES64(v11).n64_u64[0] = LANES64(v109).n64_u64[0],
           LANES64(v10).n64_u64[0] = LANES64(v120).n64_u64[0], v14 = v66,
           v67 <= 3)) {
        v25 = (float32x2_t*)&v225;
        v26 = (float32x2_t*)&v224;
        v224 = LANES64(v11).n64_u64[0];
        v225 = LANES64(v10).n64_u64[0];
        goto LABEL_83;
      }
      v95 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v96 = (unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u);
      LANES64(v222).n64_u64[0] = LANES64(v109).n64_u64[0];
      LANES64(v223).n64_u64[0] = LANES64(v120).n64_u64[0];
      LANES64(v220).n64_u64[0] = *v96;
      LANES64(v221).n64_u64[0] = v95;
      math_61d930((void*)(&v234), &v223, &v222, &v221, &v220, v66);
      goto LABEL_120;
    case 3:
      v27 = *(_DWORD*)(a1 + 12);
      switch (v27) {
      case 3:
        LANES64(v214).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v215).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61dad0((void*)(&v234), &v215, &v214, v14);
        goto LABEL_120;
      case 2:
        LANES64(v216).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v217).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61da40((void*)(&v234), &v217, &v216, v14);
        goto LABEL_120;
      case 1:
        v28 = (float32x2_t*)&v219;
        v29 = (float32x2_t*)&v218;
        v218 = LANES64(v11).n64_u64[0];
        v219 = LANES64(v10).n64_u64[0];
      LABEL_90:
        math_61d9b0((void*)(&v234), v28, v29, v14);
        goto LABEL_120;
      default:
        break;
      }
      v72 = *(_QWORD*)(a1 + 24);
      if (v72 == 0 ||
          (v73 = v9 / a4, LANES64(v110).n64_u64[0] = LANES64(v11).n64_u64[0],
           v121 = LANES64(v10).n64_u64[0], v74 = CScriptArray_GetSize(v72),
           LANES64(v11).n64_u64[0] = LANES64(v110).n64_u64[0],
           LANES64(v10).n64_u64[0] = v121, v14 = v73, v74 <= 4)) {
        v28 = (float32x2_t*)&v213;
        v29 = (float32x2_t*)&v212;
        v212 = LANES64(v11).n64_u64[0];
        v213 = LANES64(v10).n64_u64[0];
        goto LABEL_90;
      }
      v97 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v98 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u);
      v99 = (unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u);
      LANES64(v208).n64_u64[0] = v98;
      LANES64(v209).n64_u64[0] = v97;
      LANES64(v210).n64_u64[0] = LANES64(v110).n64_u64[0];
      LANES64(v211).n64_u64[0] = v121;
      LANES64(v207).n64_u64[0] = *v99;
      math_61dc30((void*)(&v234), &v211, &v210, &v209, &v208, &v207, v73);
      goto LABEL_120;
    case 4:
      v18 = *(_DWORD*)(a1 + 12);
      switch (v18) {
      case 3:
        LANES64(v202).n64_u64[0] = LANES64(v10).n64_u64[0];
        LANES64(v201).n64_u64[0] = LANES64(v11).n64_u64[0];
        math_61de40((void*)(&v234), &v202, &v201, v14);
        goto LABEL_120;
      case 2:
        LANES64(v204).n64_u64[0] = LANES64(v10).n64_u64[0];
        LANES64(v203).n64_u64[0] = LANES64(v11).n64_u64[0];
        math_61dd90((void*)(&v234), &v204, &v203, v14);
        goto LABEL_120;
      case 1:
        v19 = (float32x2_t*)&v206;
        v20 = (float32x2_t*)&v205;
        v206 = LANES64(v10).n64_u64[0];
        v205 = LANES64(v11).n64_u64[0];
      LABEL_70:
        math_61dce0((void*)(&v234), v19, v20, v14);
        goto LABEL_120;
      default:
        break;
      }
      v59 = *(_QWORD*)(a1 + 24);
      if (v59 == 0 ||
          (v60 = v9 / a4, LANES64(v107).n64_u64[0] = LANES64(v11).n64_u64[0],
           LANES64(v118).n64_u64[0] = LANES64(v10).n64_u64[0],
           v61 = CScriptArray_GetSize(v59),
           LANES64(v11).n64_u64[0] = LANES64(v107).n64_u64[0],
           LANES64(v10).n64_u64[0] = LANES64(v118).n64_u64[0], v14 = v60,
           v61 <= 5)) {
        v19 = (float32x2_t*)&v200;
        v20 = (float32x2_t*)&v199;
        v200 = LANES64(v10).n64_u64[0];
        v199 = LANES64(v11).n64_u64[0];
        goto LABEL_70;
      }
      v91 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v92 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u);
      v93 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u);
      v94 = (unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 5u);
      LANES64(v196).n64_u64[0] = v91;
      LANES64(v195).n64_u64[0] = v92;
      LANES64(v194).n64_u64[0] = v93;
      LANES64(v198).n64_u64[0] = LANES64(v118).n64_u64[0];
      LANES64(v197).n64_u64[0] = LANES64(v107).n64_u64[0];
      LANES64(v193).n64_u64[0] = *v94;
      math_61dfe0((void*)(&v234), &v198, &v197, &v196, &v195, &v194, &v193,
                  v60);
      goto LABEL_120;
    case 5:
      v46 = *(_DWORD*)(a1 + 12);
      switch (v46) {
      case 3:
        LANES64(v188).n64_u64[0] = LANES64(v10).n64_u64[0];
        LANES64(v187).n64_u64[0] = LANES64(v11).n64_u64[0];
        math_61e250((void*)(&v234), &v188, &v187, v14);
        goto LABEL_120;
      case 2:
        v190 = LANES64(v10).n64_u64[0];
        v189 = LANES64(v11).n64_u64[0];
        math_61e180((void*)(&v234), &v190, &v189, v14);
        goto LABEL_120;
      case 1:
        v47 = &v192;
        v48 = &v191;
        v192 = LANES64(v10).n64_u64[0];
        v191 = LANES64(v11).n64_u64[0];
      LABEL_105:
        math_61e0b0((void*)(&v234), v47, v48, v14);
        goto LABEL_120;
      default:
        break;
      }
      v78 = *(_QWORD*)(a1 + 24);
      if (v78 == 0 ||
          (v79 = v9 / a4, v112 = LANES64(v11).n64_u64[0],
           v123 = LANES64(v10).n64_u64[0], v80 = CScriptArray_GetSize(v78),
           LANES64(v11).n64_u64[0] = v112, LANES64(v10).n64_u64[0] = v123,
           v14 = v79, v80 <= 2)) {
        v47 = &v186;
        v48 = &v185;
        v185 = LANES64(v11).n64_u64[0];
        v186 = LANES64(v10).n64_u64[0];
        goto LABEL_105;
      }
      v182 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v183 = (unsigned int)v112 | ((unsigned __int64)HIDWORD(v112) << 32);
      v184 = (unsigned int)v123 | ((unsigned __int64)HIDWORD(v123) << 32);
      math_61e410((void*)(&v234), &v184, &v183, &v182, v79);
      goto LABEL_120;
    case 6:
      v49 = *(_DWORD*)(a1 + 12);
      switch (v49) {
      case 3:
        LANES64(v176).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v177).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61e6c0((void*)(LANES64(v234).n64_f64), &v177, &v176, v14);
        goto LABEL_120;
      case 2:
        v178 = LANES64(v11).n64_u64[0];
        v179 = LANES64(v10).n64_u64[0];
        math_61e5d0((void*)(&v234), &v179, &v178, v14);
        goto LABEL_120;
      case 1:
        v50 = &v181;
        v51 = &v180;
        v180 = LANES64(v11).n64_u64[0];
        v181 = LANES64(v10).n64_u64[0];
      LABEL_111:
        math_61e4e0((void*)(&v234), v50, v51, v14);
        goto LABEL_120;
      default:
        break;
      }
      v81 = *(_QWORD*)(a1 + 24);
      if (v81 == 0 ||
          (v82 = v9 / a4, v113 = LANES64(v11).n64_u64[0],
           v124 = LANES64(v10).n64_u64[0], v83 = CScriptArray_GetSize(v81),
           LANES64(v11).n64_u64[0] = v113, LANES64(v10).n64_u64[0] = v124,
           v14 = v82, v83 <= 2)) {
        v50 = &v175;
        v51 = &v174;
        v174 = LANES64(v11).n64_u64[0];
        v175 = LANES64(v10).n64_u64[0];
        goto LABEL_111;
      }
      v171 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v172 = (unsigned int)v113 | ((unsigned __int64)HIDWORD(v113) << 32);
      v173 = (unsigned int)v124 | ((unsigned __int64)HIDWORD(v124) << 32);
      math_61e8b0((void*)(&v234), &v173, &v172, &v171, v82);
      goto LABEL_120;
    case 7:
      v30 = *(_DWORD*)(a1 + 12);
      switch (v30) {
      case 3:
        LANES64(v165).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v166).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61eb70((void*)(LANES64(v234).n64_f64), &v166, &v165, v14);
        goto LABEL_120;
      case 2:
        LANES64(v167).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v168).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61ea90((void*)(&v234), &v168, &v167, v14);
        goto LABEL_120;
      case 1:
        v31 = (float32x2_t*)&v170;
        v32 = (float32x2_t*)&v169;
        v169 = LANES64(v11).n64_u64[0];
        v170 = LANES64(v10).n64_u64[0];
      LABEL_95:
        math_61e9a0((void*)(&v234), v31, v32, v14);
        goto LABEL_120;
      default:
        break;
      }
      v75 = *(_QWORD*)(a1 + 24);
      if (v75 == 0 ||
          (v76 = v9 / a4, LANES64(v111).n64_u64[0] = LANES64(v11).n64_u64[0],
           LANES64(v122).n64_u64[0] = LANES64(v10).n64_u64[0],
           v77 = CScriptArray_GetSize(v75),
           LANES64(v11).n64_u64[0] = LANES64(v111).n64_u64[0],
           LANES64(v10).n64_u64[0] = LANES64(v122).n64_u64[0], v14 = v76,
           v77 <= 2)) {
        v31 = (float32x2_t*)&v164;
        v32 = (float32x2_t*)&v163;
        v163 = LANES64(v11).n64_u64[0];
        v164 = LANES64(v10).n64_u64[0];
        goto LABEL_95;
      }
      LANES64(v160).n64_u64[0] =
          *(unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      LANES64(v161).n64_u64[0] = LANES64(v111).n64_u64[0];
      LANES64(v162).n64_u64[0] = LANES64(v122).n64_u64[0];
      math_61eda0((void*)(&v234), &v162, &v161, &v160, v76);
      goto LABEL_120;
    case 8:
      v55 = *(float*)(a1 + 32);
      v56 = *(_DWORD*)(a1 + 12);
      if (*(_BYTE*)(a1 + 36) == 0) {
        v55 = 0x1.0000000000000p+1f;
      }
      switch (v56) {
      case 3:
        LANES64(v154).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v155).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61ef80((void*)(&v234), &v155, &v154, v14, v55);
        goto LABEL_120;
      case 2:
        LANES64(v156).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v157).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61ef10((void*)(&v234), &v157, &v156, v14, v55);
        goto LABEL_120;
      case 1:
        v57 = (float32x2_t*)&v159;
        v58 = (float32x2_t*)&v158;
        v158 = LANES64(v11).n64_u64[0];
        v159 = LANES64(v10).n64_u64[0];
      LABEL_119:
        math_61eea0((void*)(&v234), v57, v58, v14, v55);
        goto LABEL_120;
      default:
        break;
      }
      v87 = *(_QWORD*)(a1 + 24);
      if (v87 != 0) {
        v88 = v9 / a4;
        v89 = v55;
        LANES64(v115).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v126).n64_u64[0] = LANES64(v10).n64_u64[0];
        v90 = CScriptArray_GetSize(v87);
        LANES64(v11).n64_u64[0] = LANES64(v115).n64_u64[0];
        LANES64(v10).n64_u64[0] = LANES64(v126).n64_u64[0];
        v55 = v89;
        v14 = v88;
        if (v90 > 2) {
          LANES64(v149).n64_u64[0] = *(unsigned __int64*)CScriptArray_At_1971f0(
              *(_QWORD*)(a1 + 24), 2u);
          LANES64(v150).n64_u64[0] = LANES64(v115).n64_u64[0];
          LANES64(v151).n64_u64[0] = LANES64(v126).n64_u64[0];
          math_61f090((void*)(&v234), &v151, &v150, &v149, v88, v89);
          goto LABEL_120;
        }
      }
      v57 = (float32x2_t*)&v153;
      v58 = (float32x2_t*)&v152;
      v152 = LANES64(v11).n64_u64[0];
      v153 = LANES64(v10).n64_u64[0];
      goto LABEL_119;
    case 9:
      v21 = *(_DWORD*)(a1 + 12);
      switch (v21) {
      case 3:
        LANES64(v143).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v144).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61f2f0((void*)(&v234), &v144, &v143, v14);
        goto LABEL_120;
      case 2:
        v145 = LANES64(v11).n64_u64[0];
        v146 = LANES64(v10).n64_u64[0];
        math_61f200((void*)(&v234), &v146, &v145, v14);
        goto LABEL_120;
      case 1:
        v22 = &v148;
        v23 = &v147;
        v147 = LANES64(v11).n64_u64[0];
        v148 = LANES64(v10).n64_u64[0];
      LABEL_76:
        math_61f100((void*)(&v234), v22, v23, v14);
        goto LABEL_120;
      default:
        break;
      }
      v62 = *(_QWORD*)(a1 + 24);
      if (v62 == 0 ||
          (v63 = v9 / a4, v108 = LANES64(v11).n64_u64[0],
           v119 = LANES64(v10).n64_u64[0], v64 = CScriptArray_GetSize(v62),
           LANES64(v11).n64_u64[0] = v108, LANES64(v10).n64_u64[0] = v119,
           v14 = v63, v64 <= 2)) {
        v22 = &v142;
        v23 = &v141;
        v141 = LANES64(v11).n64_u64[0];
        v142 = LANES64(v10).n64_u64[0];
        goto LABEL_76;
      }
      v138 = *(_QWORD*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v139 = (unsigned int)v108 | ((unsigned __int64)HIDWORD(v108) << 32);
      v140 = (unsigned int)v119 | ((unsigned __int64)HIDWORD(v119) << 32);
      math_61f510((void*)(&v234), &v140, &v139, &v138, v63);
      goto LABEL_120;
    case 0xA:
      v52 = *(_DWORD*)(a1 + 12);
      switch (v52) {
      case 3:
        LANES64(v132).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v133).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61f7f0((void*)(&v234), &v133, &v132, v14);
        goto LABEL_120;
      case 2:
        LANES64(v134).n64_u64[0] = LANES64(v11).n64_u64[0];
        LANES64(v135).n64_u64[0] = LANES64(v10).n64_u64[0];
        math_61f710((void*)(&v234), &v135, &v134, v14);
        goto LABEL_120;
      case 1:
        v53 = (float32x2_t*)&v137;
        v54 = (float32x2_t*)&v136;
        v136 = LANES64(v11).n64_u64[0];
        v137 = LANES64(v10).n64_u64[0];
      LABEL_115:
        math_61f610((void*)(&v234), v53, v54, v14);
        goto LABEL_120;
      default:
        break;
      }
      v84 = *(_QWORD*)(a1 + 24);
      if (v84 == 0 ||
          (v85 = v9 / a4, LANES64(v114).n64_u64[0] = LANES64(v11).n64_u64[0],
           v125 = LANES64(v10).n64_u64[0], v86 = CScriptArray_GetSize(v84),
           LANES64(v11).n64_u64[0] = LANES64(v114).n64_u64[0],
           LANES64(v10).n64_u64[0] = v125, v14 = v85, v86 <= 2)) {
        v53 = (float32x2_t*)&v131;
        v54 = (float32x2_t*)&v130;
        v130 = LANES64(v11).n64_u64[0];
        v131 = LANES64(v10).n64_u64[0];
        goto LABEL_115;
      }
      LANES64(v127).n64_u64[0] =
          *(unsigned __int64*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      LANES64(v128).n64_u64[0] = LANES64(v114).n64_u64[0];
      v129 = (unsigned int)v125 | ((unsigned __int64)HIDWORD(v125) << 32);
      math_61fa10((void*)(&v234), &v129, &v128, &v127, v85);
    LABEL_120:
      v45 = LANES64(v234).n64_f32[0] / v12;
      v17 = LANES64(v234).n64_f32[1];
    LABEL_121:
      *(float*)a2 = v45;
      *(float*)(a2 + 4) = v17 / v12;
      break;
    default:
      LANES64(v15).n64_u64[0] = LANES64_OF(vsub_f32(v11, v10)).n64_u64[0];
      v16 = v14 * LANES64(v15).n64_f32[0];
      v17 = vmuls_lane_f32(v14, v15, 1);
    LABEL_45:
      v45 = v16 / v12;
      goto LABEL_121;
    }
  }
}

__attribute__((swiftcall)) void math_61ad80(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v5;
  float v6;
  float v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int i;
  __int64 v13;
  float v14;
  float v15;
  unsigned int v16;
  float32x2_t* v17;
  float32x2_t* v18;
  float32x2_t v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float32x2_t v33;

  if (a4 <= 0x0.0p+0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    *a2 = GameData_21a60e0;
  }
  else {
    v5 = a4;
    v6 = 0x0.0p+0f;
    if (a3 <= a4) {
      a4 = a3;
    }
    if (a3 >= 0x0.0p+0f) {
      v8 = a4;
    }
    else {
      v8 = 0x0.0p+0f;
    }
    v9 = CScriptArray_GetSize(a1);
    v10 = CScriptArray_GetSize(a1);
    if (v10 != 0) {
      v11 = v10;
      for (i = 0; i != v11; ++i) {
        v13 = CScriptArray_At_1971f0(a1, i);
        v6 = v6 + *(float*)(v13 + 20);
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v14 = v8 / v5;
    v15 = 0x0.0p+0f;
    v16 = 0;
    v32 = GameData_21a60e0;
    if (v9 != 0) {
      while (1) {
        v25 = CScriptArray_At_1971f0(a1, v16);
        v26 = *(float*)(v25 + 20);
        v27 = v15 + v26;
        if ((float)((float)(v15 + v26) / v6) >= v14) {
          break;
        }
        v28 = v25;
        v29 = *(_QWORD*)(v25 + 24);
        if (v29 != 0 && (unsigned int)CScriptArray_GetSize(v29) > 1) {
          v17 = (float32x2_t*)CScriptArray_At_1971f0(*(_QWORD*)(v28 + 24), 1u);
          v18 = (float32x2_t*)CScriptArray_At_1971f0(*(_QWORD*)(v28 + 24), 0);
          LANES64(v19).n64_u64[0] = LANES64(*(v18)).n64_u64[0];
          LODWORD(v20) =
              LANES64_OF(
                  vsub_f32(COERCE_AS(float32x2_t, LANES64(*(v17)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(v18)).n64_u64[0])))
                  .n64_u32[0];
          LODWORD(v21) = HIDWORD(LANES64(*(v17)).n64_u64[0]);
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
          }
          LANES64(v19).n64_u32[1] = HIDWORD(GameData_21a60e0);
          v21 = 0x0.0p+0f;
          v20 = 0x1.0000000000000p+0f - *(float*)&GameData_21a60e0;
        }
        v15 = v15 + v26;
        ++v16;
        v22 = v21 - LANES64(v19).n64_f32[1];
        v23 = *(float*)(v28 + 20);
        *(float*)&v24 =
            *(float*)&v32 + (float)(PSEUDO_UNFUSED(v26 * (float)(v20 / v23)));
        *((float*)&v24 + 1) = *((float*)&v32 + 1) +
                              (float)(PSEUDO_UNFUSED(v26 * (float)(v22 / v23)));
        v32 = v24;
        if (v9 == v16) {
          v15 = v27;
          v16 = v9;
          break;
        }
      }
    }
    else {
      v26 = 0x0.0p+0f;
    }
    v30 = CScriptArray_At_1971f0(a1, v16);
    math_619d50((void*)((__int64)&v33), v30, -(float)(v15 - (float)(v6 * v14)),
                v26);
    *(float*)&v31 =
        (float)(*(float*)&v32 +
                (float)(PSEUDO_UNFUSED(v26 * LANES64(v33).n64_f32[0]))) /
        v6;
    *((float*)&v31 + 1) =
        (float)(*((float*)&v32 + 1) + vmuls_lane_f32(v26, v33, 1)) / v6;
    *a2 = v31;
  }
}

__attribute__((swiftcall)) void math_61b040(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  float v8;
  float v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float v14;
  float32x4_t v15;
  float v16;
  float32x4_t v17;
  float v18;
  float32x4_t v19;
  float v20;
  int v21;
  float32x4_t* v22;
  float32x4_t* v23;
  int v24;
  float32x4_t* v25;
  float32x4_t* v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  float32x4_t v30;
  int v31;
  float32x4_t* v32;
  float32x4_t* v33;
  int v34;
  float32x4_t* v35;
  float32x4_t* v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  int v40;
  float32x4_t* v41;
  float32x4_t* v42;
  int v43;
  float32x4_t* v44;
  float32x4_t* v45;
  int v46;
  float32x4_t* v47;
  float32x4_t* v48;
  int v49;
  float v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  unsigned int v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  unsigned int v63;
  float32x4_t v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  float32x4_t v71;
  __int128 v72;
  float32x4_t* v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t* v76;
  float v77;
  float32x4_t* v78;
  float v79;
  int v80;
  __int64 v81;
  __int64 v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float v99;
  float v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float v112;
  float v113;
  float v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  float32x4_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  float32x4_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float32x4_t v203;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v79 = a3;
    v80 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    a3 = v79;
    if (v80 != 0) {
      v81 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v81;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      a3 = v79;
    }
  }
  *a2 = GameData_21a6120;
  if (a4 > 0x0.0p+0f) {
    v7 = *(_QWORD*)(a1 + 24);
    if (a3 > a4) {
      v8 = a4;
    }
    else {
      v8 = a3;
    }
    if (a3 >= 0x0.0p+0f) {
      v9 = v8;
    }
    else {
      v9 = 0x0.0p+0f;
    }
    if (v7 != 0 && (unsigned int)CScriptArray_GetSize(v7) > 1) {
      v15 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 0);
      LANES128(v15).n128_u32[3] = 0;
      v101 = v15;
      v10 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 1u);
      v11 = v101;
      v14 = *(float*)(a1 + 20);
      LANES128(v10).n128_u32[3] = 0;
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v82 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v82;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      }
      v11 = COERCE_AS(float32x4_t, GameData_21a6120);
      v10 = COERCE_AS(float32x4_t, GameData_1a82dd0);
      LANES128(v11).n128_u32[3] = 0;
      v12 = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v11);
      v13 = vmulq_f32(v12, v12);
      LANES128(v13).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
              .n64_u64[0];
      LODWORD(v14) =
          LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
              .n64_u32[0];
    }
    v16 = v9 / a4;
    switch (*(_DWORD*)(a1 + 8)) {
    case 1:
      v37 = *(_DWORD*)(a1 + 12);
      if (v37 == 3) {
        v201 = v10;
        v202 = v11;
        v112 = v14;
        math_61fbf0((void*)(&v203), &v202, &v201, v9 / a4);
        goto LABEL_116;
      }
      if (v37 == 2) {
        v18 = 0x1.0000000000000p+0f;
        v55 = vsubq_f32(v10, v11);
        v57 = v16 * v16;
        v56 = vmulq_n_f32(v55,
                          v16 * (float)((float)(0x1.0000000000000p+0f - v16) +
                                        (float)(0x1.0000000000000p+0f - v16)));
        goto LABEL_84;
      }
      if (v37 != 1) {
        v38 = *(_QWORD*)(a1 + 24);
        if (v38 != 0) {
          v90 = v10;
          v103 = v11;
          v114 = v14;
          v39 = CScriptArray_GetSize(v38);
          v16 = v9 / a4;
          v11 = v103;
          v10 = v90;
          v14 = v114;
          if (v39 > 2) {
            v76 = (float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
            v77 = 0x1.0000000000000p+0f;
            v19 = vaddq_f32(
                vmulq_n_f32(vsubq_f32(v90, v103),
                            (float)(v9 / a4) * (float)(v9 / a4)),
                vmulq_n_f32(vsubq_f32(*v76, v103),
                            (float)(v9 / a4) *
                                (float)((float)(0x1.0000000000000p+0f -
                                                (float)(v9 / a4)) +
                                        (float)(0x1.0000000000000p+0f -
                                                (float)(v9 / a4)))));
            goto LABEL_129;
          }
        }
      }
      v19 = vaddq_f32(
          vmulq_n_f32(vsubq_f32(v11, v11),
                      v16 * (float)((float)(0x1.0000000000000p+0f - v16) +
                                    (float)(0x1.0000000000000p+0f - v16))),
          vmulq_n_f32(vsubq_f32(v10, v11), v16 * v16));
      v20 = 0x1.0000000000000p+0f / v14;
      goto LABEL_117;
    case 2:
      v27 = *(_DWORD*)(a1 + 12);
      switch (v27) {
      case 3:
        v199 = v10;
        v200 = v11;
        v112 = v14;
        math_61fc90((void*)(&v203), &v200, &v199, v9 / a4);
        goto LABEL_116;
      case 2:
        v18 = 0x1.0000000000000p+0f;
        v55 = vsubq_f32(v10, v11);
        v56 = vaddq_f32(
            vmulq_n_f32(
                v55,
                v16 * (float)((float)(0x1.0000000000000p+0f - v16) *
                              (float)((float)(0x1.0000000000000p+0f - v16) *
                                      0x1.8000000000000p+1f))),
            vmulq_n_f32(
                v55, v16 * (float)(v16 * (float)((float)(0x1.0000000000000p+0f -
                                                         v16) *
                                                 0x1.8000000000000p+1f))));
        v57 = v16 * (float)(v16 * v16);
      LABEL_84:
        v19 = vaddq_f32(vmulq_n_f32(v55, v57), v56);
        goto LABEL_17;
      case 1:
        goto LABEL_31;
      default:
        break;
      }
      v28 = *(_QWORD*)(a1 + 24);
      if (v28 == 0) {
        goto LABEL_31;
      }
      v89 = v10;
      v102 = v11;
      v113 = v14;
      v29 = CScriptArray_GetSize(v28);
      v16 = v9 / a4;
      v11 = v102;
      v10 = v89;
      v14 = v113;
      if (v29 > 3) {
        v87 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
        v99 = v9 / a4;
        v19 = vaddq_f32(
            vmulq_n_f32(vsubq_f32(v89, v102), v99 * (float)(v99 * v99)),
            vaddq_f32(
                vmulq_n_f32(
                    vsubq_f32(v87, v102),
                    v99 * (float)((float)(0x1.0000000000000p+0f - v99) *
                                  (float)((float)(0x1.0000000000000p+0f - v99) *
                                          0x1.8000000000000p+1f))),
                vmulq_n_f32(
                    vsubq_f32(*(float32x4_t*)CScriptArray_At_1971f0(
                                  *(_QWORD*)(a1 + 24), 3u),
                              v102),
                    v99 * (float)(v99 *
                                  (float)((float)(0x1.0000000000000p+0f - v99) *
                                          0x1.8000000000000p+1f)))));
        v20 = 0x1.0000000000000p+0f / v113;
      }
      else {
      LABEL_31:
        v30 = vsubq_f32(v11, v11);
        v19 = vaddq_f32(
            vmulq_n_f32(vsubq_f32(v10, v11), v16 * (float)(v16 * v16)),
            vaddq_f32(
                vmulq_n_f32(
                    v30,
                    v16 * (float)((float)(0x1.0000000000000p+0f - v16) *
                                  (float)((float)(0x1.0000000000000p+0f - v16) *
                                          0x1.8000000000000p+1f))),
                vmulq_n_f32(
                    v30,
                    v16 * (float)(v16 *
                                  (float)((float)(0x1.0000000000000p+0f - v16) *
                                          0x1.8000000000000p+1f)))));
        v20 = 0x1.0000000000000p+0f / v14;
      }
      goto LABEL_117;
    case 3:
      v31 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v31) {
      case 3:
        v193 = v10;
        v194 = v11;
        math_61fe40((void*)(&v203), &v194, &v193, v9 / a4);
        goto LABEL_116;
      case 2:
        v195 = v10;
        v196 = v11;
        math_61fdd0((void*)(&v203), &v196, &v195, v9 / a4);
        goto LABEL_116;
      case 1:
        v32 = &v198;
        v33 = &v197;
        v197 = v10;
        v198 = v11;
      LABEL_90:
        math_61fd60((void*)(&v203), v32, v33, v16);
        goto LABEL_116;
      default:
        break;
      }
      v60 = *(_QWORD*)(a1 + 24);
      if (v60 == 0 || (v94 = v10, v107 = v11, v61 = CScriptArray_GetSize(v60),
                       v16 = v9 / a4, v11 = v107, v10 = v94, v61 <= 4)) {
        v191 = v10;
        v192 = v11;
        v32 = &v192;
        v33 = &v191;
        goto LABEL_90;
      }
      v88 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v85 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u);
      v75 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u);
      v188 = v88;
      v189 = v94;
      v190 = v107;
      v186 = v75;
      v187 = v85;
      math_61ff50((void*)(&v203), &v190, &v189, &v188, &v187, &v186, v9 / a4);
      goto LABEL_116;
    case 4:
      v21 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v21) {
      case 3:
        v181 = v11;
        v180 = v10;
        math_620100((void*)(&v203), &v181, &v180, v9 / a4);
        goto LABEL_116;
      case 2:
        v183 = v11;
        v182 = v10;
        math_620070((void*)(&v203), &v183, &v182, v9 / a4);
        goto LABEL_116;
      case 1:
        v22 = &v185;
        v23 = &v184;
        v185 = v11;
        v184 = v10;
      LABEL_73:
        math_61ffe0((void*)(&v203), v22, v23, v16);
        goto LABEL_116;
      default:
        break;
      }
      v53 = *(_QWORD*)(a1 + 24);
      if (v53 == 0 || (v92 = v10, v105 = v11, v54 = CScriptArray_GetSize(v53),
                       v16 = v9 / a4, v11 = v105, v10 = v92, v54 <= 5)) {
        v179 = v11;
        v178 = v10;
        v22 = &v179;
        v23 = &v178;
        goto LABEL_73;
      }
      v86 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v84 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u);
      v83 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u);
      v73 = (float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 5u);
      v177 = v105;
      v74 = *v73;
      v176 = v92;
      v175 = v86;
      v174 = v84;
      v173 = v83;
      v172 = v74;
      math_620240((void*)(&v203), &v177, &v176, &v175, &v174, &v173, &v172,
                  v9 / a4);
      goto LABEL_116;
    case 5:
      v40 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v40) {
      case 3:
        v166 = v10;
        v167 = v11;
        math_620470((void*)(&v203), &v167, &v166, v9 / a4);
        goto LABEL_116;
      case 2:
        v168 = v10;
        v169 = v11;
        math_6203b0((void*)(&v203), &v169, &v168, v9 / a4);
        goto LABEL_116;
      case 1:
        v41 = &v171;
        v42 = &v170;
        v170 = v10;
        v171 = v11;
      LABEL_105:
        math_6202f0((void*)(&v203), v41, v42, v16);
        goto LABEL_116;
      default:
        break;
      }
      v65 = *(_QWORD*)(a1 + 24);
      if (v65 == 0 || (v96 = v10, v109 = v11, v66 = CScriptArray_GetSize(v65),
                       v16 = v9 / a4, v11 = v109, v10 = v96, v66 <= 2)) {
        v164 = v10;
        v165 = v11;
        v41 = &v165;
        v42 = &v164;
        goto LABEL_105;
      }
      v161 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v162 = v96;
      v163 = v109;
      math_6205e0((void*)(&v203), &v163, &v162, &v161, v9 / a4);
      goto LABEL_116;
    case 6:
      v43 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v43) {
      case 3:
        v155 = v10;
        v156 = v11;
        GameRoutine_620890((void*)(&v203), &v156, &v155, v9 / a4);
        goto LABEL_116;
      case 2:
        v157 = v10;
        v158 = v11;
        math_6207a0((void*)(&v203), &v158, &v157, v9 / a4);
        goto LABEL_116;
      case 1:
        v44 = &v160;
        v45 = &v159;
        v159 = v10;
        v160 = v11;
      LABEL_111:
        math_6206b0((void*)(&v203), v44, v45, v16);
        goto LABEL_116;
      default:
        break;
      }
      v67 = *(_QWORD*)(a1 + 24);
      if (v67 == 0 || (v97 = v10, v110 = v11, v68 = CScriptArray_GetSize(v67),
                       v16 = v9 / a4, v11 = v110, v10 = v97, v68 <= 2)) {
        v153 = v10;
        v154 = v11;
        v44 = &v154;
        v45 = &v153;
        goto LABEL_111;
      }
      v150 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v151 = v97;
      v152 = v110;
      math_620a40((void*)(&v203), &v152, &v151, &v150, v9 / a4);
      goto LABEL_116;
    case 7:
      v34 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v34) {
      case 3:
        v144 = v10;
        v145 = v11;
        math_620ce0((void*)(&v203), &v145, &v144, v9 / a4);
        goto LABEL_116;
      case 2:
        v146 = v10;
        v147 = v11;
        math_620c10((void*)(&v203), &v147, &v146, v9 / a4);
        goto LABEL_116;
      case 1:
        v35 = &v149;
        v36 = &v148;
        v148 = v10;
        v149 = v11;
      LABEL_95:
        math_620b40((void*)(&v203), v35, v36, v16);
        goto LABEL_116;
      default:
        break;
      }
      v62 = *(_QWORD*)(a1 + 24);
      if (v62 == 0 || (v95 = v10, v108 = v11, v63 = CScriptArray_GetSize(v62),
                       v16 = v9 / a4, v11 = v108, v10 = v95, v63 <= 2)) {
        v142 = v10;
        v143 = v11;
        v35 = &v143;
        v36 = &v142;
        goto LABEL_95;
      }
      v139 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v140 = v95;
      v141 = v108;
      math_620ea0((void*)(&v203), &v141, &v140, &v139, v9 / a4);
      goto LABEL_116;
    case 8:
      v49 = *(_DWORD*)(a1 + 12);
      if (*(_BYTE*)(a1 + 36) != 0) {
        v50 = *(float*)(a1 + 32);
      }
      else {
        v50 = 0x1.0000000000000p+1f;
      }
      switch (v49) {
      case 3:
        v112 = v14;
        v137 = v10;
        v138 = v11;
        math_620f80((void*)(&v203), &v138, &v137, v16, v50);
        goto LABEL_116;
      case 2:
        v64 = vsubq_f32(v10, v11);
        v18 = 0x1.0000000000000p+0f;
        v17 = vaddq_f32(
            vmulq_n_f32(
                v64,
                v16 * (float)(v16 +
                              (float)(v50 *
                                      (float)(v16 + -0x1.0000000000000p+0f)))),
            vmulq_n_f32(
                v64,
                (float)((float)(PSEUDO_UNFUSED(v16 * -0x1.8000000000000p+1f)) +
                        (float)(v50 * (float)(0x1.0000000000000p+0f - v16))) +
                    0x1.8000000000000p+1f));
      LABEL_16:
        v19 = vmulq_n_f32(v17, v16);
      LABEL_17:
        v20 = v18 / v14;
        break;
      case 1:
        goto LABEL_66;
      default:
        v51 = *(_QWORD*)(a1 + 24);
        if (v51 == 0) {
          goto LABEL_66;
        }
        v91 = v10;
        v100 = v16;
        v104 = v11;
        v114 = v14;
        v52 = CScriptArray_GetSize(v51);
        v16 = v100;
        v11 = v104;
        v10 = v91;
        v14 = v114;
        if (v52 > 2) {
          v78 = (float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
          v77 = 0x1.0000000000000p+0f;
          v19 = vmulq_n_f32(
              vaddq_f32(
                  vmulq_n_f32(
                      vsubq_f32(v91, v104),
                      v100 * (float)(v100 +
                                     (float)(v50 *
                                             (float)(v100 +
                                                     -0x1.0000000000000p+0f)))),
                  vmulq_n_f32(
                      vsubq_f32(*v78, v104),
                      (float)((float)(PSEUDO_UNFUSED(v100 *
                                                     -0x1.8000000000000p+1f)) +
                              (float)(v50 *
                                      (float)(0x1.0000000000000p+0f - v100))) +
                          0x1.8000000000000p+1f)),
              v100);
        LABEL_129:
          v20 = v77 / v114;
        }
        else {
        LABEL_66:
          v20 = 0x1.0000000000000p+0f / v14;
          v19 = vmulq_n_f32(
              vaddq_f32(
                  vmulq_n_f32(
                      vsubq_f32(v11, v11),
                      (float)((float)(PSEUDO_UNFUSED(v16 *
                                                     -0x1.8000000000000p+1f)) +
                              (float)(v50 *
                                      (float)(0x1.0000000000000p+0f - v16))) +
                          0x1.8000000000000p+1f),
                  vmulq_n_f32(
                      vsubq_f32(v10, v11),
                      v16 * (float)(v16 +
                                    (float)(v50 *
                                            (float)(v16 +
                                                    -0x1.0000000000000p+0f))))),
              v16);
        }
        break;
      }
      goto LABEL_117;
    case 9:
      v24 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v24) {
      case 3:
        v131 = v10;
        v132 = v11;
        math_621230((void*)(&v203), &v132, &v131, v9 / a4);
        goto LABEL_116;
      case 2:
        v133 = v10;
        v134 = v11;
        math_621140((void*)(&v203), &v134, &v133, v9 / a4);
        goto LABEL_116;
      case 1:
        v25 = &v136;
        v26 = &v135;
        v135 = v10;
        v136 = v11;
      LABEL_79:
        math_621050((void*)(&v203), v25, v26, v16);
        goto LABEL_116;
      default:
        break;
      }
      v58 = *(_QWORD*)(a1 + 24);
      if (v58 == 0 || (v93 = v10, v106 = v11, v59 = CScriptArray_GetSize(v58),
                       v16 = v9 / a4, v11 = v106, v10 = v93, v59 <= 2)) {
        v129 = v10;
        v130 = v11;
        v25 = &v130;
        v26 = &v129;
        goto LABEL_79;
      }
      v126 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v127 = v93;
      v128 = v106;
      math_621400((void*)(&v203), &v128, &v127, &v126, v9 / a4);
      goto LABEL_116;
    case 0xA:
      v46 = *(_DWORD*)(a1 + 12);
      v112 = v14;
      switch (v46) {
      case 3:
        v120 = v10;
        v121 = v11;
        math_6216d0((void*)(&v203), &v121, &v120, v9 / a4);
        goto LABEL_116;
      case 2:
        v122 = v10;
        v123 = v11;
        math_6215f0((void*)(&v203), &v123, &v122, v9 / a4);
        goto LABEL_116;
      case 1:
        v47 = &v125;
        v48 = &v124;
        v124 = v10;
        v125 = v11;
      LABEL_115:
        math_621500((void*)(&v203), v47, v48, v16);
        goto LABEL_116;
      default:
        break;
      }
      v69 = *(_QWORD*)(a1 + 24);
      if (v69 == 0 || (v98 = v10, v111 = v11, v70 = CScriptArray_GetSize(v69),
                       v16 = v9 / a4, v11 = v111, v10 = v98, v70 <= 2)) {
        v118 = v10;
        v119 = v11;
        v47 = &v119;
        v48 = &v118;
        goto LABEL_115;
      }
      v115 = *(float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u);
      v116 = v98;
      v117 = v111;
      math_6218c0((void*)(&v203), &v117, &v116, &v115, v9 / a4);
    LABEL_116:
      v19 = v203;
      v20 = 0x1.0000000000000p+0f / v112;
    LABEL_117:
      v71 = vmulq_n_f32(v19, v20);
      *(_QWORD*)a2 = LANES128(v71).n128_u64[0];
      v72 = *a2;
      *((_QWORD*)&v72 + 1) = LANES128(v71).n128_u32[2];
      *a2 = v72;
      break;
    default:
      v17 = vsubq_f32(v10, v11);
      v18 = 0x1.0000000000000p+0f;
      goto LABEL_16;
    }
  }
}

__attribute__((swiftcall)) void math_61bd00(PSEUDO_X8 x8_, __int64 a1, float a3,
                                            float a4)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v5;
  float v6;
  float v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int i;
  __int64 v13;
  float v14;
  unsigned int v15;
  float v16;
  _QWORD* v17;
  float v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  float32x4_t v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t v27;
  float32x4_t v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float32x4_t v37;
  float32x4_t v38;

  if (a4 <= 0x0.0p+0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v33 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v33;
      __cxa_guard_release(&GameData_21a6130);
    }
    *a2 = COERCE_AS(float32x4_t, GameData_21a6120);
    return;
  }
  v5 = a4;
  v6 = 0x0.0p+0f;
  if (a3 <= a4) {
    a4 = a3;
  }
  if (a3 >= 0x0.0p+0f) {
    v8 = a4;
  }
  else {
    v8 = 0x0.0p+0f;
  }
  v9 = CScriptArray_GetSize(a1);
  v10 = CScriptArray_GetSize(a1);
  if (v10 != 0) {
    v11 = v10;
    for (i = 0; i != v11; ++i) {
      v13 = CScriptArray_At_1971f0(a1, i);
      v6 = v6 + *(float*)(v13 + 20);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v32 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v32;
    __cxa_guard_release(&GameData_21a6130);
  }
  v14 = v8 / v5;
  v15 = 0;
  v37 = COERCE_AS(float32x4_t, GameData_21a6120);
  if (v9 == 0) {
    v18 = 0x0.0p+0f;
    v36 = 0x0.0p+0f;
    goto LABEL_29;
  }
  v16 = 0x0.0p+0f;
  v17 = GameData_212c540;
  while (1) {
    v18 = v16;
    v19 = CScriptArray_At_1971f0(a1, v15);
    v20 = *(float*)(v19 + 20);
    v16 = v16 + v20;
    if ((float)(v16 / v6) >= v14) {
      break;
    }
    v21 = v19;
    v22 = *(_QWORD*)(v19 + 24);
    if (v22 != 0 &&
        (v34 = v20, v23 = CScriptArray_GetSize(v22), v20 = v34, v23 > 1)) {
      v26 = (float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(v21 + 24), 1u);
      v25 = (float32x4_t*)CScriptArray_At_1971f0(*(_QWORD*)(v21 + 24), 0);
      v20 = v34;
      v24 = *v26;
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v35 = v20;
        if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v29 = v17[1];
          *(_QWORD*)&GameData_21a6120 = *v17;
          *((_QWORD*)&GameData_21a6120 + 1) = v29;
          __cxa_guard_release(&GameData_21a6130);
        }
        v24 = COERCE_AS(float32x4_t, GameData_1a82dd0);
        v20 = v35;
        v27 = v37;
        v25 = (float32x4_t*)&GameData_21a6120;
        goto LABEL_20;
      }
      v24 = COERCE_AS(float32x4_t, GameData_1a82dd0);
      v25 = (float32x4_t*)&GameData_21a6120;
    }
    v27 = v37;
  LABEL_20:
    ++v15;
    v28 = vmulq_n_f32(vsubq_f32(v24, *v25),
                      0x1.0000000000000p+0f / *(float*)(v21 + 20));
    LANES128(v28).n128_u32[3] = 0;
    v37 = vaddq_f32(v27, vmulq_n_f32(v28, v20));
    if (v9 == v15) {
      v18 = v16;
      v15 = v9;
      break;
    }
  }
  v36 = v20;
LABEL_29:
  v30 = CScriptArray_At_1971f0(a1, v15);
  math_61b040((void*)(&v38), v30, -(float)(v18 - (float)(v6 * v14)), v36);
  v31 = vmulq_n_f32(vaddq_f32(v37, vmulq_n_f32(v38, v36)),
                    0x1.0000000000000p+0f / v6);
  LANES128(v31).n128_u32[3] = 0;
  *a2 = v31;
}

float math_61c010(float a1, float a2, float a3)
{
  float v3;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    return v3 +
           (float)((float)(PSEUDO_UNFUSED(
                       (float)((float)((float)(a1 + -0x1.0000000000000p-1f) +
                                       (float)(a1 + -0x1.0000000000000p-1f)) *
                               (float)((float)(a1 + -0x1.0000000000000p-1f) +
                                       (float)(a1 + -0x1.0000000000000p-1f))) *
                       (float)(a3 - v3))) +
                   (float)((float)((float)((float)(a1 +
                                                   -0x1.0000000000000p-1f) +
                                           (float)(a1 +
                                                   -0x1.0000000000000p-1f)) *
                                   (float)((float)(0x1.0000000000000p+0f -
                                                   (float)((float)(a1 +
                                                                   -0x1.0000000000000p-1f) +
                                                           (float)(a1 +
                                                                   -0x1.0000000000000p-1f))) +
                                           (float)(0x1.0000000000000p+0f -
                                                   (float)((float)(a1 +
                                                                   -0x1.0000000000000p-1f) +
                                                           (float)(a1 +
                                                                   -0x1.0000000000000p-1f))))) *
                           (float)(a3 - v3)));
  }
  else {
    return (float)(PSEUDO_UNFUSED((float)((float)(a1 + a1) * (float)(a1 + a1)) *
                                  (float)(v3 - a2))) +
           (float)((float)((float)(a1 + a1) *
                           (float)((float)(0x1.0000000000000p+0f -
                                           (float)(a1 + a1)) +
                                   (float)(0x1.0000000000000p+0f -
                                           (float)(a1 + a1)))) *
                   (float)(a2 - a2));
  }
}

float math_61c090(float a1, float a2, float a3)
{
  float v3;
  float v4;
  float v6;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    v6 = (float)(a1 + -0x1.0000000000000p-1f) +
         (float)(a1 + -0x1.0000000000000p-1f);
    return v3 +
           (float)((float)((float)(PSEUDO_UNFUSED(
                               (float)(a3 - v3) *
                               (float)(v6 *
                                       (float)(v6 *
                                               (float)((float)(0x1.0000000000000p+0f -
                                                               v6) *
                                                       0x1.8000000000000p+1f))))) +
                           (float)((float)(v6 *
                                           (float)((float)(0x1.0000000000000p+0f -
                                                           v6) *
                                                   (float)((float)(0x1.0000000000000p+0f -
                                                                   v6) *
                                                           0x1.8000000000000p+1f))) *
                                   (float)(a3 - v3))) +
                   (float)((float)(v6 * (float)(v6 * v6)) * (float)(a3 - v3)));
  }
  else {
    v4 = a1 + a1;
    return (float)((float)(PSEUDO_UNFUSED(
                       (float)(a2 - a2) *
                       (float)(v4 *
                               (float)(v4 *
                                       (float)((float)(0x1.0000000000000p+0f -
                                                       v4) *
                                               0x1.8000000000000p+1f))))) +
                   (float)((float)(v4 *
                                   (float)((float)(0x1.0000000000000p+0f - v4) *
                                           (float)((float)(0x1.0000000000000p+0f -
                                                           v4) *
                                                   0x1.8000000000000p+1f))) *
                           (float)(a2 - a2))) +
           (float)((float)(v4 * (float)(v4 * v4)) * (float)(v3 - a2));
  }
}

float math_61c1a0(float a1, float a2, float a3)
{
  float v3;
  float v4;
  float v6;
  float v7;
  float v8;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    v6 = a3 - v3;
    v7 = (float)(a1 + -0x1.0000000000000p-1f) +
         (float)(a1 + -0x1.0000000000000p-1f);
    v8 = 0x1.0000000000000p+0f - v7;
    return v3 +
           (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                       v6 *
                                       (float)((float)(v7 * v7) *
                                               (float)((float)(v8 * v8) *
                                                       0x1.8000000000000p+2f)))) +
                                   (float)((float)(v7 *
                                                   (float)(v8 *
                                                           (float)((float)(v8 *
                                                                           v8) *
                                                                   0x1.0000000000000p+2f))) *
                                           v6)) +
                           (float)((float)((float)(v7 * v7) *
                                           (float)(v7 *
                                                   (float)((float)(0x1.0000000000000p+0f -
                                                                   v7) *
                                                           0x1.0000000000000p+2f))) *
                                   v6)) +
                   (float)((float)((float)(v7 * v7) * (float)(v7 * v7)) * v6));
  }
  else {
    v4 = a1 + a1;
    return (float)((float)((float)(PSEUDO_UNFUSED(
                               (float)(a2 - a2) *
                               (float)((float)(v4 * v4) *
                                       (float)((float)((float)(0x1.0000000000000p+0f -
                                                               v4) *
                                                       (float)(0x1.0000000000000p+0f -
                                                               v4)) *
                                               0x1.8000000000000p+2f)))) +
                           (float)((float)(v4 *
                                           (float)((float)(0x1.0000000000000p+0f -
                                                           v4) *
                                                   (float)((float)((float)(0x1.0000000000000p+0f -
                                                                           v4) *
                                                                   (float)(0x1.0000000000000p+0f -
                                                                           v4)) *
                                                           0x1.0000000000000p+2f))) *
                                   (float)(a2 - a2))) +
                   (float)((float)((float)(v4 * v4) *
                                   (float)(v4 *
                                           (float)((float)(0x1.0000000000000p+0f -
                                                           v4) *
                                                   0x1.0000000000000p+2f))) *
                           (float)(a2 - a2))) +
           (float)((float)((float)(v4 * v4) * (float)(v4 * v4)) *
                   (float)(v3 - a2));
  }
}

float math_61c2f0(float a1, float a2, float a3)
{
  float v3;
  float v4;

  v3 = a3 - a2;
  v4 = 0x1.0000000000000p+0f - a1;
  return (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                     v3 *
                                     (float)((float)(a1 * a1) *
                                             (float)((float)(0x1.0000000000000p+0f -
                                                             a1) *
                                                     (float)((float)(v4 * v4) *
                                                             0x1.4000000000000p+3f))))) +
                                 (float)((float)(a1 *
                                                 (float)((float)(v4 * v4) *
                                                         (float)((float)(v4 *
                                                                         v4) *
                                                                 0x1.4000000000000p+2f))) *
                                         v3)) +
                         (float)((float)((float)(a1 * a1) *
                                         (float)(a1 *
                                                 (float)((float)(v4 * v4) *
                                                         0x1.4000000000000p+3f))) *
                                 v3)) +
                 (float)((float)((float)(a1 * a1) *
                                 (float)((float)(a1 * a1) *
                                         (float)((float)(0x1.0000000000000p+0f -
                                                         a1) *
                                                 0x1.4000000000000p+2f))) *
                         v3)) +
         (float)((float)((float)(a1 * a1) * (float)(a1 * (float)(a1 * a1))) *
                 v3);
}

float math_61c360(float a1, float a2, float a3)
{
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v9;
  float v10;
  float v11;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    v9 = a3 - v3;
    v10 = (float)(a1 + -0x1.0000000000000p-1f) +
          (float)(a1 + -0x1.0000000000000p-1f);
    v11 = 0x1.0000000000000p+0f - v10;
    return v3 +
           (float)((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                               v9 *
                                               (float)((float)(v10 * v10) *
                                                       (float)((float)(0x1.0000000000000p+0f -
                                                                       v10) *
                                                               (float)((float)(v11 *
                                                                               v11) *
                                                                       0x1.4000000000000p+3f))))) +
                                           (float)((float)(v10 *
                                                           (float)((float)(v11 *
                                                                           v11) *
                                                                   (float)((float)(v11 *
                                                                                   v11) *
                                                                           0x1.4000000000000p+2f))) *
                                                   v9)) +
                                   (float)((float)((float)(v10 * v10) *
                                                   (float)(v10 *
                                                           (float)((float)(v11 *
                                                                           v11) *
                                                                   0x1.4000000000000p+3f))) *
                                           v9)) +
                           (float)((float)((float)(v10 * v10) *
                                           (float)((float)(v10 * v10) *
                                                   (float)((float)(0x1.0000000000000p+0f -
                                                                   v10) *
                                                           0x1.4000000000000p+2f))) *
                                   v9)) +
                   (float)((float)((float)(v10 * v10) *
                                   (float)(v10 * (float)(v10 * v10))) *
                           v9));
  }
  else {
    v4 = a1 + a1;
    v5 = v3 - a2;
    v6 = a2 - a2;
    v7 = 0x1.0000000000000p+0f - v4;
    return (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                       v6 *
                                       (float)((float)(v4 * v4) *
                                               (float)((float)(0x1.0000000000000p+0f -
                                                               v4) *
                                                       (float)((float)(v7 *
                                                                       v7) *
                                                               0x1.4000000000000p+3f))))) +
                                   (float)((float)(v4 *
                                                   (float)((float)(v7 * v7) *
                                                           (float)((float)(v7 *
                                                                           v7) *
                                                                   0x1.4000000000000p+2f))) *
                                           v6)) +
                           (float)((float)((float)(v4 * v4) *
                                           (float)(v4 *
                                                   (float)((float)(v7 * v7) *
                                                           0x1.4000000000000p+3f))) *
                                   v6)) +
                   (float)((float)((float)(v4 * v4) *
                                   (float)((float)(v4 * v4) *
                                           (float)((float)(0x1.0000000000000p+0f -
                                                           v4) *
                                                   0x1.4000000000000p+2f))) *
                           v6)) +
           (float)((float)((float)(v4 * v4) * (float)(v4 * (float)(v4 * v4))) *
                   v5);
  }
}

float math_61c460(float a1, float a2, float a3, float a4, float a5, float a6,
                  float a7)
{
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v7 = a3 - a2;
  v8 = a4 - a2;
  v9 = a5 - a2;
  v10 = a6 - a2;
  v11 = a7 - a2;
  v12 = 0x1.0000000000000p+0f - a1;
  return (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                     (float)((float)(a1 * a1) *
                                             (float)((float)(0x1.0000000000000p+0f -
                                                             a1) *
                                                     (float)((float)(v12 *
                                                                     v12) *
                                                             0x1.4000000000000p+3f))) *
                                     v9)) +
                                 (float)((float)(a1 *
                                                 (float)((float)(v12 * v12) *
                                                         (float)((float)(v12 *
                                                                         v12) *
                                                                 0x1.4000000000000p+2f))) *
                                         v8)) +
                         (float)((float)((float)(a1 * a1) *
                                         (float)(a1 *
                                                 (float)((float)(v12 * v12) *
                                                         0x1.4000000000000p+3f))) *
                                 v10)) +
                 (float)((float)((float)(a1 * a1) *
                                 (float)((float)(a1 * a1) *
                                         (float)((float)(0x1.0000000000000p+0f -
                                                         a1) *
                                                 0x1.4000000000000p+2f))) *
                         v11)) +
         (float)((float)((float)(a1 * a1) * (float)(a1 * (float)(a1 * a1))) *
                 v7);
}

float math_61c6f0(float a1, float a2, float a3)
{
  double v4;
  double v7;
  double v8;
  double v9;
  float v10;
  float v11;

  v4 = a1;
  v7 = 0x1.0000000000000p+0 - a1;
  if (a1 == 0x0.0p+0f) {
    v8 = 0x1.0000000000000p-10;
  }
  else {
    v8 = exp2(v7 * -0x1.4000000000000p+3);
  }
  if (a1 == 0x1.0000000000000p+0f) {
    v9 = 0x1.0000000000000p-10;
  }
  else {
    v9 = exp2(v4 * -0x1.4000000000000p+3);
  }
  v10 = v9 - v4 * 0x1.0000000000000p-10;
  v11 = v8 - v7 * 0x1.0000000000000p-10;
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) * v11)) +
         (float)((float)((float)(0x1.0000000000000p+0f - v10) - v11) *
                 (float)(a3 - a2));
}

float math_61c920(float a1, float a2, float a3, float a4)
{
  double v5;
  double v9;
  double v10;
  double v11;
  float v12;
  float v13;

  v5 = a1;
  v9 = 0x1.0000000000000p+0 - a1;
  if (a1 == 0x0.0p+0f) {
    v10 = 0x1.0000000000000p-10;
  }
  else {
    v10 = exp2(v9 * -0x1.4000000000000p+3);
  }
  if (a1 == 0x1.0000000000000p+0f) {
    v11 = 0x1.0000000000000p-10;
  }
  else {
    v11 = exp2(v5 * -0x1.4000000000000p+3);
  }
  v12 = v11 - v5 * 0x1.0000000000000p-10;
  v13 = v10 - v9 * 0x1.0000000000000p-10;
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) * v13)) +
         (float)((float)((float)(0x1.0000000000000p+0f - v12) - v13) *
                 (float)(a4 - a2));
}

float math_61c9f0(float a1, float a2, float a3)
{
  double v3;
  float v4;

  v3 = a1;
  v4 = sqrt(0x1.0000000000000p+0 - v3 * v3);
  *(float*)&v3 = sqrt(0x1.0000000000000p+0 - (v3 + -0x1.0000000000000p+0) *
                                                 (v3 + -0x1.0000000000000p+0));
  return (float)((float)((float)(v4 + *(float*)&v3) + -0x1.0000000000000p+0f) *
                 (float)(a2 - a2)) -
         (float)(PSEUDO_UNFUSED((float)(a3 - a2) *
                                (float)(v4 + -0x1.0000000000000p+0f)));
}

float math_61cab0(float a1, float a2, float a3)
{
  float v3;
  double v4;
  float v5;
  double v7;
  float v8;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    v7 = (float)((float)(a1 + -0x1.0000000000000p-1f) +
                 (float)(a1 + -0x1.0000000000000p-1f));
    v8 = sqrt(0x1.0000000000000p+0 - v7 * v7);
    *(float*)&v7 =
        sqrt(0x1.0000000000000p+0 -
             (v7 + -0x1.0000000000000p+0) * (v7 + -0x1.0000000000000p+0));
    return v3 + (float)((float)((float)((float)(v8 + *(float*)&v7) +
                                        -0x1.0000000000000p+0f) *
                                (float)(a3 - v3)) -
                        (float)(PSEUDO_UNFUSED(
                            (float)(a3 - v3) *
                            (float)(v8 + -0x1.0000000000000p+0f))));
  }
  else {
    v4 = (float)(a1 + a1);
    v5 = sqrt(0x1.0000000000000p+0 - v4 * v4);
    *(float*)&v4 =
        sqrt(0x1.0000000000000p+0 -
             (v4 + -0x1.0000000000000p+0) * (v4 + -0x1.0000000000000p+0));
    return (float)((float)((float)(v5 + *(float*)&v4) +
                           -0x1.0000000000000p+0f) *
                   (float)(a2 - a2)) -
           (float)(PSEUDO_UNFUSED((float)(v3 - a2) *
                                  (float)(v5 + -0x1.0000000000000p+0f)));
  }
}

float math_61cc40(float a1, float a2, float a3, float a4)
{
  bool v4;
  float v5;
  float v6;
  float v7;
  float result;

  v4 = a1 < 0x1.0000000000000p-1f;
  v5 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  v6 = a1 + -0x1.0000000000000p-1f;
  v7 =
      v5 +
      (float)(PSEUDO_UNFUSED(
          (float)(v6 + v6) *
          (float)((float)(PSEUDO_UNFUSED(
                      (float)(a3 - v5) *
                      (float)((float)(v6 + v6) *
                              (float)((float)(v6 + v6) +
                                      (float)(a4 *
                                              (float)((float)(v6 + v6) +
                                                      -0x1.0000000000000p+0f)))))) +
                  (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                              (float)(v6 + v6) *
                                              -0x1.8000000000000p+1f)) +
                                          (float)(a4 *
                                                  (float)(0x1.0000000000000p+0f -
                                                          (float)(v6 + v6)))) +
                                  0x1.8000000000000p+1f) *
                          (float)(a3 - v5)))));
  result =
      (float)(a1 + a1) *
      (float)((float)(PSEUDO_UNFUSED(
                  (float)(v5 - a2) *
                  (float)((float)(a1 + a1) *
                          (float)((float)(a1 + a1) +
                                  (float)(a4 *
                                          (float)((float)(a1 + a1) +
                                                  -0x1.0000000000000p+0f)))))) +
              (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                          (float)(a1 + a1) *
                                          -0x1.8000000000000p+1f)) +
                                      (float)(a4 *
                                              (float)(0x1.0000000000000p+0f -
                                                      (float)(a1 + a1)))) +
                              0x1.8000000000000p+1f) *
                      (float)(a2 - a2)));
  if (!v4) {
    return v7;
  }
  return result;
}

float math_61cce0(float a1, float a2, float a3)
{
  float v3;
  float v4;
  double v5;
  float v6;
  float v7;
  double v8;

  if (a1 == 0x0.0p+0f) {
    v3 = 0x0.0p+0f;
    v4 = -0x1.9000000000000p+4f;
  }
  else if (a1 == 0x1.0000000000000p+0f) {
    v3 = 0x1.9000000000000p+4f;
    v4 = 0x0.0p+0f;
  }
  else {
    v5 = a1;
    v6 = a3;
    v7 = a2;
    v3 = sin((a1 + -0x1.0000000000000p+0) * 0x1.9000000000000p+4) * a1 /
         (a1 + -0x1.0000000000000p+0);
    v8 = sin(v5 * 0x1.9000000000000p+4);
    a2 = v7;
    a3 = v6;
    v4 = (-0x1.0000000000000p+0 / v5 + 0x1.0000000000000p+0) * v8;
  }
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) *
                                (float)(v3 * 0x1.47ae140000000p-5f))) +
         (float)((float)((float)((float)(v4 - v3) * 0x1.47ae140000000p-5f) +
                         0x1.0000000000000p+0f) *
                 (float)(a2 - a2));
}

float math_61cdc0(float a1, float a2, float a3)
{
  float v3;
  float v4;
  double v5;
  float v6;
  float v7;
  double v8;

  if (a1 == 0x0.0p+0f) {
    v3 = 0x0.0p+0f;
    v4 = -0x1.9000000000000p+4f;
  }
  else if (a1 == 0x1.0000000000000p+0f) {
    v3 = 0x1.9000000000000p+4f;
    v4 = 0x0.0p+0f;
  }
  else {
    v5 = a1;
    v6 = a3;
    v7 = a2;
    v3 = sin((a1 + -0x1.0000000000000p+0) * 0x1.9000000000000p+4) * a1 /
         (a1 + -0x1.0000000000000p+0);
    v8 = sin(v5 * 0x1.9000000000000p+4);
    a2 = v7;
    a3 = v6;
    v4 = (-0x1.0000000000000p+0 / v5 + 0x1.0000000000000p+0) * v8;
  }
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) *
                                (float)(v3 * 0x1.47ae140000000p-5f))) +
         (float)((float)((float)((float)(v4 - v3) * 0x1.47ae140000000p-5f) +
                         0x1.0000000000000p+0f) *
                 (float)(a3 - a2));
}

float math_61d030(float a1, float a2, float a3, float a4)
{
  float v4;
  float v5;
  double v6;
  float v7;
  float v8;
  float v9;
  double v10;

  if (a1 == 0x0.0p+0f) {
    v4 = 0x0.0p+0f;
    v5 = -0x1.9000000000000p+4f;
  }
  else if (a1 == 0x1.0000000000000p+0f) {
    v4 = 0x1.9000000000000p+4f;
    v5 = 0x0.0p+0f;
  }
  else {
    v6 = a1;
    v7 = a3;
    v8 = a4;
    v9 = a2;
    v4 = sin((a1 + -0x1.0000000000000p+0) * 0x1.9000000000000p+4) * a1 /
         (a1 + -0x1.0000000000000p+0);
    v10 = sin(v6 * 0x1.9000000000000p+4);
    a2 = v9;
    a4 = v8;
    a3 = v7;
    v5 = (-0x1.0000000000000p+0 / v6 + 0x1.0000000000000p+0) * v10;
  }
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) *
                                (float)(v4 * 0x1.47ae140000000p-5f))) +
         (float)((float)((float)((float)(v5 - v4) * 0x1.47ae140000000p-5f) +
                         0x1.0000000000000p+0f) *
                 (float)(a4 - a2));
}

float math_61d120(float a1, float a2, float a3)
{
  float v3;
  float v4;
  bool v5;
  float v6;

  v3 = 0x1.0000000000000p+0f - a1;
  if (v3 >= 0x1.745d180000000p-2f) {
    if (v3 >= 0x1.745d180000000p-1f) {
      v5 = v3 < 0x1.d1745e0000000p-1f;
      v6 = (float)((float)((float)(v3 + -0x1.e8ba2e0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v3 + -0x1.e8ba2e0000000p-1f)) +
           0x1.f800000000000p-1f;
      v4 = (float)((float)((float)(v3 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v3 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
      if (!v5) {
        v4 = v6;
      }
    }
    else {
      v4 = (float)((float)((float)(v3 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v3 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v4 = v3 * (float)(v3 * 0x1.e400000000000p+2f);
  }
  return (float)(a3 - a2) * (float)(0x1.0000000000000p+0f - v4);
}

float math_61d200(float a1, float a2, float a3)
{
  float v3;
  bool v4;
  float v5;

  if (a1 >= 0x1.745d180000000p-2f) {
    if (a1 >= 0x1.745d180000000p-1f) {
      v4 = a1 < 0x1.d1745e0000000p-1f;
      v5 = (float)((float)((float)(a1 + -0x1.e8ba2e0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a1 + -0x1.e8ba2e0000000p-1f)) +
           0x1.f800000000000p-1f;
      v3 = (float)((float)((float)(a1 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a1 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
      if (!v4) {
        v3 = v5;
      }
    }
    else {
      v3 = (float)((float)((float)(a1 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a1 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v3 = a1 * (float)(a1 * 0x1.e400000000000p+2f);
  }
  return (float)(a3 - a2) * v3;
}

float math_61d2d0(float a1, float a2, float a3)
{
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  bool v8;
  float v9;
  float v11;

  v3 = (float)(PSEUDO_UNFUSED(a3 * 0x1.0000000000000p-1f)) +
       (float)(a2 * 0x1.0000000000000p-1f);
  if (a1 >= 0x1.0000000000000p-1f) {
    v6 = (float)(a1 + -0x1.0000000000000p-1f) +
         (float)(a1 + -0x1.0000000000000p-1f);
    if (v6 >= 0x1.745d180000000p-2f) {
      if (v6 >= 0x1.745d180000000p-1f) {
        v8 = v6 < 0x1.d1745e0000000p-1f;
        v11 = (float)((float)((float)(v6 + -0x1.e8ba2e0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v6 + -0x1.e8ba2e0000000p-1f)) +
              0x1.f800000000000p-1f;
        v7 = (float)((float)((float)(v6 + -0x1.a2e8ba0000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v6 + -0x1.a2e8ba0000000p-1f)) +
             0x1.e000000000000p-1f;
        if (!v8) {
          v7 = v11;
        }
      }
      else {
        v7 = (float)((float)((float)(v6 + -0x1.1745d20000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v6 + -0x1.1745d20000000p-1f)) +
             0x1.8000000000000p-1f;
      }
    }
    else {
      v7 = v6 * (float)(v6 * 0x1.e400000000000p+2f);
    }
    return v3 + (float)(PSEUDO_UNFUSED((float)(a3 - v3) * v7));
  }
  else {
    v4 = 0x1.0000000000000p+0f - (float)(a1 + a1);
    if (v4 >= 0x1.745d180000000p-2f) {
      if (v4 >= 0x1.745d180000000p-1f) {
        v8 = v4 < 0x1.d1745e0000000p-1f;
        v9 = (float)((float)((float)(v4 + -0x1.e8ba2e0000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v4 + -0x1.e8ba2e0000000p-1f)) +
             0x1.f800000000000p-1f;
        v5 = (float)((float)((float)(v4 + -0x1.a2e8ba0000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v4 + -0x1.a2e8ba0000000p-1f)) +
             0x1.e000000000000p-1f;
        if (!v8) {
          v5 = v9;
        }
      }
      else {
        v5 = (float)((float)((float)(v4 + -0x1.1745d20000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v4 + -0x1.1745d20000000p-1f)) +
             0x1.8000000000000p-1f;
      }
    }
    else {
      v5 = v4 * (float)(v4 * 0x1.e400000000000p+2f);
    }
    return (float)(v3 - a2) * (float)(0x1.0000000000000p+0f - v5);
  }
}

float math_61d4b0(float a1, float a2, float a3, float a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  bool v8;
  float v9;

  if (a1 >= 0x1.745d180000000p-2f) {
    v5 = (float)((float)((float)(a1 + -0x1.e8ba2e0000000p-1f) *
                         0x1.e400000000000p+2f) *
                 (float)(a1 + -0x1.e8ba2e0000000p-1f)) +
         0x1.f800000000000p-1f;
    if (a1 < 0x1.d1745e0000000p-1f) {
      v5 = (float)((float)((float)(a1 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a1 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
    }
    if (a1 < 0x1.745d180000000p-1f) {
      v4 = (float)((float)((float)(a1 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a1 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
    else {
      v4 = v5;
    }
  }
  else {
    v4 = a1 * (float)(a1 * 0x1.e400000000000p+2f);
  }
  v6 = 0x1.0000000000000p+0f - a1;
  if (v6 >= 0x1.745d180000000p-2f) {
    if (v6 >= 0x1.745d180000000p-1f) {
      v8 = v6 < 0x1.d1745e0000000p-1f;
      v9 = (float)((float)((float)(v6 + -0x1.e8ba2e0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v6 + -0x1.e8ba2e0000000p-1f)) +
           0x1.f800000000000p-1f;
      v7 = (float)((float)((float)(v6 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v6 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
      if (!v8) {
        v7 = v9;
      }
    }
    else {
      v7 = (float)((float)((float)(v6 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v6 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v7 = v6 * (float)(v6 * 0x1.e400000000000p+2f);
  }
  return (float)(PSEUDO_UNFUSED((float)(a3 - a2) *
                                (float)(0x1.0000000000000p+0f - v7))) +
         (float)((float)(v4 - (float)(0x1.0000000000000p+0f - v7)) *
                 (float)(a4 - a2));
}

__attribute__((swiftcall)) void math_61d660(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  bool v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
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
  float result;
  __int64 v24;

  v4 = a4 < 0x1.0000000000000p-1f;
  v5 = a4 + -0x1.0000000000000p-1f;
  v6 = a4 + a4;
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  v8 =
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v9 = v5 + v5;
  v10 = COERCE_FLOAT(HIDWORD(LANES64(*(a2)).n64_u64[0])) - v7;
  v11 = COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]) - v8;
  v12 = v9 * (float)((float)(0x1.0000000000000p+0f - v9) +
                     (float)(0x1.0000000000000p+0f - v9));
  v13 = v9 * v9;
  v14 = v12 * v11;
  v15 = v13 * v11;
  v16 = v12 * v10;
  v17 = v13 * v10;
  v18 = v6 * (float)((float)(0x1.0000000000000p+0f - v6) +
                     (float)(0x1.0000000000000p+0f - v6));
  v19 = v6 * v6;
  v20 = v8 + (float)(v15 + v14);
  v21 = v7 + (float)(v17 + v16);
  v22 = v19 * (float)(v8 - COERCE_FLOAT(LANES64(*(a1)).n64_u64[0]));
  result =
      (float)(v18 * (float)(COERCE_FLOAT(HIDWORD(LANES64(*(a1)).n64_u64[0])) -
                            COERCE_FLOAT(HIDWORD(LANES64(*(a1)).n64_u64[0])))) +
      (float)(v19 *
              (float)(v7 - COERCE_FLOAT(HIDWORD(LANES64(*(a1)).n64_u64[0]))));
  *(float*)&v24 =
      (float)(v18 *
              LANES64_OF(
                  vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
                  .n64_f32[0]) +
      v22;
  if (!v4) {
    result = v21;
    *(float*)&v24 = v20;
  }
  *((float*)&v24 + 1) = result;
  *a3 = v24;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61d730(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float32x2_t v5;
  float32x2_t v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float result;

  v4 = (float)(0x1.0000000000000p+0f - a4) * 0x1.8000000000000p+1f;
  LANES64(v5).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v7 = a4 * (float)((float)(0x1.0000000000000p+0f - a4) * v4);
  v8 = a4 * (float)(a4 * v4);
  v9 = v7 * LANES64(v6).n64_f32[0];
  v10 = v8 * LANES64(v6).n64_f32[0];
  PSEUDO_LOW_LANE64(v6, n64_f32,
                    vmuls_lane_f32(v7, v6, 1) + vmuls_lane_f32(v8, v6, 1));
  v11 = a4 * (float)(a4 * a4);
  v12 = v11 * LANES64(v5).n64_f32[0];
  v13 = vmuls_lane_f32(v11, v5, 1);
  LANES64(v5).n64_f32[0] = v12 + (float)(v9 + v10);
  result = v13 + LANES64(v6).n64_f32[0];
  LANES64(v5).n64_f32[1] = result;
  *a3 = LANES64(v5).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61d7a0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float result;

  LANES64(v4).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v5 = (float)(0x1.0000000000000p+0f - a4) * 0x1.8000000000000p+1f;
  v6 = a4 * (float)((float)(0x1.0000000000000p+0f - a4) * v5);
  v7 = a4 * (float)(a4 * v5);
  v8 = v6 * LANES64(v4).n64_f32[0];
  v9 = vmuls_lane_f32(v6, v4, 1) + vmuls_lane_f32(v7, v4, 1);
  v10 = v8 + (float)(v7 * LANES64(v4).n64_f32[0]);
  v11 = a4 * (float)(a4 * a4);
  v12 = v11 * LANES64(v4).n64_f32[0];
  v13 = vmuls_lane_f32(v11, v4, 1);
  LANES64(v4).n64_f32[0] = v12 + v10;
  result = v13 + v9;
  LANES64(v4).n64_f32[1] = result;
  *a3 = LANES64(v4).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61d810(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __n64 result;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 =
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v17 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v18 = (float)(0x1.0000000000000p+0f - v17) * 0x1.8000000000000p+1f;
    v19 = v17 * (float)((float)(0x1.0000000000000p+0f - v17) * v18);
    v20 = v17 * (float)(v17 * v18);
    v21 = v17 * (float)(v17 * v17);
    v22 = (float)(v21 * (float)(*(float*)&v5 - v6)) +
          (float)((float)(v19 * (float)(*(float*)&v5 - v6)) +
                  (float)(v20 * (float)(*(float*)&v5 - v6)));
    v23 = (float)(v21 * (float)(*((float*)&v5 + 1) - v7)) +
          (float)((float)(v19 * (float)(*((float*)&v5 + 1) - v7)) +
                  (float)(v20 * (float)(*((float*)&v5 + 1) - v7)));
    LANES64(result).n64_f32[0] = v6 + v22;
    v16 = v7 + v23;
  }
  else {
    v8 = a4 + a4;
    v9 = v6 - LANES64(v4).n64_f32[0];
    LANES64(v4).n64_f32[0] = LANES64_OF(vsub_f32(v4, v4)).n64_f32[0];
    v10 = (float)(0x1.0000000000000p+0f - v8) * 0x1.8000000000000p+1f;
    v11 = v8 * (float)((float)(0x1.0000000000000p+0f - v8) * v10);
    v12 = v8 * (float)(v8 * v10);
    v13 = v8 * (float)(v8 * v8);
    v14 = v13 * (float)(v7 - LANES64(v4).n64_f32[1]);
    LANES64(result).n64_f32[0] =
        (float)((float)(v11 * LANES64(v4).n64_f32[0]) +
                (float)(v12 * LANES64(v4).n64_f32[0])) +
        (float)(v13 * v9);
    v16 = (float)((float)(v11 * (float)(LANES64(v4).n64_f32[1] -
                                        LANES64(v4).n64_f32[1])) +
                  (float)(v12 * (float)(LANES64(v4).n64_f32[1] -
                                        LANES64(v4).n64_f32[1]))) +
          v14;
  }
  LANES64(result).n64_f32[1] = v16;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61d930(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float a6)
{

#pragma clang fp contract(off)
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v6;
  float32x2_t v7;
  float32x2_t v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float result;

  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v8).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v9 = (float)(0x1.0000000000000p+0f - a6) * 0x1.8000000000000p+1f;
  v10 = a6 * (float)((float)(0x1.0000000000000p+0f - a6) * v9);
  v11 = v10 * LANES64(v7).n64_f32[0];
  PSEUDO_LOW_LANE64(v7, n64_f32, vmuls_lane_f32(v10, v7, 1));
  v12 = a6 * (float)(a6 * v9);
  v13 = v12 * LANES64(v8).n64_f32[0];
  PSEUDO_LOW_LANE64(v8, n64_f32,
                    LANES64(v7).n64_f32[0] + vmuls_lane_f32(v12, v8, 1));
  v14 = a6 * (float)(a6 * a6);
  PSEUDO_LOW_LANE64(v7, n64_f32, v14 * LANES64(v6).n64_f32[0]);
  v15 = vmuls_lane_f32(v14, v6, 1);
  LANES64(v6).n64_f32[0] = LANES64(v7).n64_f32[0] + (float)(v11 + v13);
  result = v15 + LANES64(v8).n64_f32[0];
  LANES64(v6).n64_f32[1] = result;
  *a5 = LANES64(v6).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61d9b0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v5;
  float32x2_t v6;
  float32x2_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float result;

  v4 = a4 * a4;
  v5 = 0x1.0000000000000p+0f - a4;
  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v8 = (float)(a4 * a4) * (float)((float)(v5 * v5) * 0x1.8000000000000p+2f);
  v9 = a4 * (float)(v5 * (float)((float)(v5 * v5) * 0x1.0000000000000p+2f));
  v10 = v8 * LANES64(v7).n64_f32[0];
  v11 = (float)(a4 * a4) *
        (float)(a4 * (float)((float)(0x1.0000000000000p+0f - a4) *
                             0x1.0000000000000p+2f));
  v12 = v11 * LANES64(v7).n64_f32[0];
  v13 = vmuls_lane_f32(v11, v7, 1);
  v14 = vmuls_lane_f32(v9, v7, 1) + vmuls_lane_f32(v8, v7, 1);
  LANES64(v7).n64_f32[0] =
      (float)((float)(v4 * v4) * LANES64(v6).n64_f32[0]) +
      (float)(v12 + (float)((float)(v9 * LANES64(v7).n64_f32[0]) + v10));
  result = vmuls_lane_f32(v4 * v4, v6, 1) + (float)(v13 + v14);
  LANES64(v7).n64_f32[1] = result;
  *a3 = LANES64(v7).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61da40(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float32x2_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  float result;

  v4 = a4 * a4;
  LANES64(v5).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v6 = 0x1.0000000000000p+0f - a4;
  v7 = (float)(a4 * a4) * (float)((float)(v6 * v6) * 0x1.8000000000000p+2f);
  v8 = a4 * (float)(v6 * (float)((float)(v6 * v6) * 0x1.0000000000000p+2f));
  v9 = (float)(a4 * a4) *
       (float)(a4 * (float)((float)(0x1.0000000000000p+0f - a4) *
                            0x1.0000000000000p+2f));
  v10 = v4 * v4;
  *(float*)&v11 = (float)(v10 * LANES64(v5).n64_f32[0]) +
                  (float)((float)(v9 * LANES64(v5).n64_f32[0]) +
                          (float)((float)(v8 * LANES64(v5).n64_f32[0]) +
                                  (float)(v7 * LANES64(v5).n64_f32[0])));
  result =
      vmuls_lane_f32(v10, v5, 1) +
      (float)(vmuls_lane_f32(v9, v5, 1) +
              (float)(vmuls_lane_f32(v8, v5, 1) + vmuls_lane_f32(v7, v5, 1)));
  *((float*)&v11 + 1) = result;
  *a3 = v11;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61dad0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __n64 result;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 =
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v18 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v19 = 0x1.0000000000000p+0f - v18;
    v20 = v18 * v18;
    v21 = (float)(v18 * v18) *
          (float)((float)(v19 * v19) * 0x1.8000000000000p+2f);
    v22 = v18 *
          (float)(v19 * (float)((float)(v19 * v19) * 0x1.0000000000000p+2f));
    v23 = (float)(v18 * v18) *
          (float)(v18 * (float)((float)(0x1.0000000000000p+0f - v18) *
                                0x1.0000000000000p+2f));
    v24 = v20 * v20;
    v25 = (float)(v24 * (float)(*((float*)&v5 + 1) - v7)) +
          (float)((float)(v23 * (float)(*((float*)&v5 + 1) - v7)) +
                  (float)((float)(v22 * (float)(*((float*)&v5 + 1) - v7)) +
                          (float)(v21 * (float)(*((float*)&v5 + 1) - v7))));
    LANES64(result).n64_f32[0] =
        v6 +
        (float)((float)(v24 * (float)(*(float*)&v5 - v6)) +
                (float)((float)(v23 * (float)(*(float*)&v5 - v6)) +
                        (float)((float)(v22 * (float)(*(float*)&v5 - v6)) +
                                (float)(v21 * (float)(*(float*)&v5 - v6)))));
    v17 = v7 + v25;
  }
  else {
    v8 = a4 + a4;
    v9 = v6 - LANES64(v4).n64_f32[0];
    LANES64(v4).n64_f32[0] = LANES64_OF(vsub_f32(v4, v4)).n64_f32[0];
    v10 = 0x1.0000000000000p+0f - v8;
    v11 = v8 * v8;
    v12 =
        (float)(v8 * v8) * (float)((float)(v10 * v10) * 0x1.8000000000000p+2f);
    v13 =
        v8 * (float)(v10 * (float)((float)(v10 * v10) * 0x1.0000000000000p+2f));
    v14 = (float)(v8 * v8) *
          (float)(v8 * (float)((float)(0x1.0000000000000p+0f - v8) *
                               0x1.0000000000000p+2f));
    v15 = (float)(v14 *
                  (float)(LANES64(v4).n64_f32[1] - LANES64(v4).n64_f32[1])) +
          (float)((float)(v13 * (float)(LANES64(v4).n64_f32[1] -
                                        LANES64(v4).n64_f32[1])) +
                  (float)(v12 * (float)(LANES64(v4).n64_f32[1] -
                                        LANES64(v4).n64_f32[1])));
    LANES64(result).n64_f32[0] =
        (float)((float)(v14 * LANES64(v4).n64_f32[0]) +
                (float)((float)(v13 * LANES64(v4).n64_f32[0]) +
                        (float)(v12 * LANES64(v4).n64_f32[0]))) +
        (float)((float)(v11 * v11) * v9);
    v17 = v15 +
          (float)((float)(v11 * v11) * (float)(v7 - LANES64(v4).n64_f32[1]));
  }
  LANES64(result).n64_f32[1] = v17;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61dc30(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float32x2_t* a5,
                                            float a7)
{

#pragma clang fp contract(off)
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float result;

  v7 = a7 * a7;
  LANES64(v8).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v9).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v10).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a5)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v12 = 0x1.0000000000000p+0f - a7;
  v13 = a7 * (float)(v12 * (float)((float)(v12 * v12) * 0x1.0000000000000p+2f));
  v14 = v13 * LANES64(v9).n64_f32[0];
  v15 = (float)(a7 * a7) * (float)((float)(v12 * v12) * 0x1.8000000000000p+2f);
  PSEUDO_LOW_LANE64(v9, n64_f32,
                    vmuls_lane_f32(v13, v9, 1) + vmuls_lane_f32(v15, v10, 1));
  v16 = v14 + (float)(v15 * LANES64(v10).n64_f32[0]);
  v17 = (float)(a7 * a7) *
        (float)(a7 * (float)((float)(0x1.0000000000000p+0f - a7) *
                             0x1.0000000000000p+2f));
  PSEUDO_LOW_LANE64(v10, n64_f32, v17 * LANES64(v11).n64_f32[0]);
  v18 = LANES64(v9).n64_f32[0] + vmuls_lane_f32(v17, v11, 1);
  LANES64(v11).n64_f32[0] = (float)((float)(v7 * v7) * LANES64(v8).n64_f32[0]) +
                            (float)(v16 + LANES64(v10).n64_f32[0]);
  result = vmuls_lane_f32(v7 * v7, v8, 1) + v18;
  LANES64(v11).n64_f32[1] = result;
  *a6 = LANES64(v11).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61dce0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v5;
  float32x2_t v6;
  float32x2_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float result;

  v4 = a4 * a4;
  v5 = 0x1.0000000000000p+0f - a4;
  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v8 = (float)(v5 * v5) * (float)((float)(v5 * v5) * 0x1.4000000000000p+2f);
  v9 = (float)(v5 * v5) * 0x1.4000000000000p+3f;
  v10 = (float)(0x1.0000000000000p+0f - a4) * 0x1.4000000000000p+2f;
  v11 = a4 * v8;
  v12 = (float)(a4 * a4) * (float)((float)(0x1.0000000000000p+0f - a4) * v9);
  v13 = (float)(a4 * a4) * (float)(a4 * v9);
  v14 = (float)(a4 * a4) * (float)(a4 * (float)(a4 * a4));
  v15 = v4 * (float)(v4 * v10);
  v16 = v14 * LANES64(v6).n64_f32[0];
  v17 = vmuls_lane_f32(v14, v6, 1);
  LANES64(v6).n64_f32[0] =
      v16 + (float)((float)(v15 * LANES64(v7).n64_f32[0]) +
                    (float)((float)(v13 * LANES64(v7).n64_f32[0]) +
                            (float)((float)(v11 * LANES64(v7).n64_f32[0]) +
                                    (float)(v12 * LANES64(v7).n64_f32[0]))));
  result = v17 + (float)(vmuls_lane_f32(v15, v7, 1) +
                         (float)(vmuls_lane_f32(v13, v7, 1) +
                                 (float)(vmuls_lane_f32(v11, v7, 1) +
                                         vmuls_lane_f32(v12, v7, 1))));
  LANES64(v6).n64_f32[1] = result;
  *a3 = LANES64(v6).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61dd90(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float32x2_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float result;

  v4 = a4 * a4;
  LANES64(v5).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v6 = 0x1.0000000000000p+0f - a4;
  v7 = (float)(v6 * v6) * (float)((float)(v6 * v6) * 0x1.4000000000000p+2f);
  v8 = (float)(v6 * v6) * 0x1.4000000000000p+3f;
  v9 = (float)(0x1.0000000000000p+0f - a4) * 0x1.4000000000000p+2f;
  v10 = a4 * v7;
  v11 = (float)(a4 * a4) * (float)((float)(0x1.0000000000000p+0f - a4) * v8);
  v12 = (float)(a4 * a4) * (float)(a4 * v8);
  v13 = (float)(a4 * a4) * (float)(a4 * (float)(a4 * a4));
  v14 = v4 * (float)(v4 * v9);
  v15 = v13 * LANES64(v5).n64_f32[0];
  v16 = vmuls_lane_f32(v13, v5, 1);
  v17 = v14 * LANES64(v5).n64_f32[0];
  v18 =
      vmuls_lane_f32(v14, v5, 1) +
      (float)(vmuls_lane_f32(v12, v5, 1) +
              (float)(vmuls_lane_f32(v10, v5, 1) + vmuls_lane_f32(v11, v5, 1)));
  LANES64(v5).n64_f32[0] =
      v15 +
      (float)(v17 + (float)((float)(v12 * LANES64(v5).n64_f32[0]) +
                            (float)((float)(v10 * LANES64(v5).n64_f32[0]) +
                                    (float)(v11 * LANES64(v5).n64_f32[0]))));
  result = v16 + v18;
  LANES64(v5).n64_f32[1] = result;
  *a3 = LANES64(v5).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61de40(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{

#pragma clang fp contract(off)
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
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
  __n64 result;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 =
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
      (float)(0x1.0000000000000p-1f * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v21 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v22 = 0x1.0000000000000p+0f - v21;
    v23 = v21 * v21;
    v24 = (float)(v22 * v22) *
          (float)((float)(v22 * v22) * 0x1.4000000000000p+2f);
    v25 = (float)(v22 * v22) * 0x1.4000000000000p+3f;
    v26 = (float)(0x1.0000000000000p+0f - v21) * 0x1.4000000000000p+2f;
    v27 = v21 * v24;
    v28 = (float)(v21 * v21) *
          (float)((float)(0x1.0000000000000p+0f - v21) * v25);
    v29 = (float)(v21 * v21) * (float)(v21 * v25);
    v30 = (float)(v21 * v21) * (float)(v21 * (float)(v21 * v21));
    v31 = v23 * (float)(v23 * v26);
    LANES64(v4).n64_f32[0] =
        (float)(v30 * (float)(*(float*)&v5 - v6)) +
        (float)((float)(v31 * (float)(*(float*)&v5 - v6)) +
                (float)((float)(v29 * (float)(*(float*)&v5 - v6)) +
                        (float)((float)(v27 * (float)(*(float*)&v5 - v6)) +
                                (float)(v28 * (float)(*(float*)&v5 - v6)))));
    v20 = (float)(v30 * (float)(*((float*)&v5 + 1) - v7)) +
          (float)((float)(v31 * (float)(*((float*)&v5 + 1) - v7)) +
                  (float)((float)(v29 * (float)(*((float*)&v5 + 1) - v7)) +
                          (float)((float)(v27 *
                                          (float)(*((float*)&v5 + 1) - v7)) +
                                  (float)(v28 *
                                          (float)(*((float*)&v5 + 1) - v7)))));
  }
  else {
    v8 = a4 + a4;
    v9 = v6 - LANES64(v4).n64_f32[0];
    LANES64(v4).n64_f32[0] = LANES64_OF(vsub_f32(v4, v4)).n64_f32[0];
    v10 = 0x1.0000000000000p+0f - v8;
    v11 = v8 * v8;
    v12 = (float)(v10 * v10) *
          (float)((float)(v10 * v10) * 0x1.4000000000000p+2f);
    v13 = (float)(v10 * v10) * 0x1.4000000000000p+3f;
    v14 = (float)(0x1.0000000000000p+0f - v8) * 0x1.4000000000000p+2f;
    v15 = v8 * v12;
    v16 = (float)(v8 * v8) * (float)((float)(0x1.0000000000000p+0f - v8) * v13);
    v17 = (float)(v8 * v8) * (float)(v8 * v13);
    v18 = (float)(v8 * v8) * (float)(v8 * (float)(v8 * v8));
    v19 = v11 * (float)(v11 * v14);
    v6 = v18 * v9;
    v7 = v18 * (float)(v7 - LANES64(v4).n64_f32[1]);
    LANES64(v4).n64_f32[0] =
        (float)(v19 * LANES64(v4).n64_f32[0]) +
        (float)((float)(v17 * LANES64(v4).n64_f32[0]) +
                (float)((float)(v15 * LANES64(v4).n64_f32[0]) +
                        (float)(v16 * LANES64(v4).n64_f32[0])));
    v20 = (float)(v19 *
                  (float)(LANES64(v4).n64_f32[1] - LANES64(v4).n64_f32[1])) +
          (float)((float)(v17 * (float)(LANES64(v4).n64_f32[1] -
                                        LANES64(v4).n64_f32[1])) +
                  (float)((float)(v15 * (float)(LANES64(v4).n64_f32[1] -
                                                LANES64(v4).n64_f32[1])) +
                          (float)(v16 * (float)(LANES64(v4).n64_f32[1] -
                                                LANES64(v4).n64_f32[1]))));
  }
  LANES64(result).n64_f32[0] = v6 + LANES64(v4).n64_f32[0];
  LANES64(result).n64_f32[1] = v7 + v20;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61dfe0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float32x2_t* a4, float32x2_t* a5,
                                            float32x2_t* a6, float a8)
{

#pragma clang fp contract(off)
  _QWORD* a7 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x2_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float result;

  v8 = a8 * a8;
  LANES64(v9).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v10).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v12).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a5)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v13).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a6)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v14 = 0x1.0000000000000p+0f - a8;
  v15 = a8 * (float)((float)(v14 * v14) *
                     (float)((float)(v14 * v14) * 0x1.4000000000000p+2f));
  v16 = v15 * LANES64(v10).n64_f32[0];
  PSEUDO_LOW_LANE64(v10, n64_f32, vmuls_lane_f32(v15, v10, 1));
  v17 = (float)(v14 * v14) * 0x1.4000000000000p+3f;
  v18 = (float)(a8 * a8) * (float)((float)(0x1.0000000000000p+0f - a8) * v17);
  PSEUDO_LOW_LANE64(v10, n64_f32,
                    LANES64(v10).n64_f32[0] + vmuls_lane_f32(v18, v11, 1));
  v19 = v16 + (float)(v18 * LANES64(v11).n64_f32[0]);
  PSEUDO_LOW_LANE64(v11, n64_f32, (float)(a8 * a8) * (float)(a8 * v17));
  v20 = (float)(a8 * a8) * (float)(a8 * (float)(a8 * a8));
  PSEUDO_LOW_LANE64(v10, n64_f32,
                    LANES64(v10).n64_f32[0] +
                        vmuls_lane_f32(LANES64(v11).n64_f32[0], v12, 1));
  PSEUDO_LOW_LANE64(
      v12, n64_f32,
      v19 + (float)(LANES64(v11).n64_f32[0] * LANES64(v12).n64_f32[0]));
  PSEUDO_LOW_LANE64(v11, n64_f32,
                    v8 * (float)(v8 * (float)(v14 * 0x1.4000000000000p+2f)));
  v21 = LANES64(v11).n64_f32[0] * LANES64(v13).n64_f32[0];
  PSEUDO_LOW_LANE64(v13, n64_f32,
                    LANES64(v10).n64_f32[0] +
                        vmuls_lane_f32(LANES64(v11).n64_f32[0], v13, 1));
  PSEUDO_LOW_LANE64(v10, n64_f32, v20 * LANES64(v9).n64_f32[0]);
  v22 = vmuls_lane_f32(v20, v9, 1);
  LANES64(v9).n64_f32[0] =
      LANES64(v10).n64_f32[0] + (float)(LANES64(v12).n64_f32[0] + v21);
  result = v22 + LANES64(v13).n64_f32[0];
  LANES64(v9).n64_f32[1] = result;
  *a7 = LANES64(v9).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e0b0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  float v6;
  float v7;
  _QWORD* v8;
  double v9;
  float32x2_t v10;
  float32x2_t v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float result;

  LANES64(v4).n64_u64[0] = *a1;
  LANES64(v5).n64_u64[0] = *a2;
  v6 = 0.0;
  v7 = 1.0;
  if (a4 != 0.0) {
    v6 = 1.0;
    v7 = 0.0;
    if (a4 != 1.0) {
      v8 = a3;
      v9 = a4 * 0x1.921fb54442d18p+0;
      v6 = sin(v9);
      v7 = cos(v9);
      a3 = v8;
    }
  }
  LANES64(v10).n64_u64[0] = LANES64_OF(vsub_f32(v4, v4)).n64_u64[0];
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v12 = v7 + v6;
  v13 = 1.0 - v7;
  v14 = v12 + -1.0;
  v15 = v14 * LANES64(v10).n64_f32[0];
  LANES64(v10).n64_f32[0] = vmuls_lane_f32(v14, v10, 1);
  v16 = v13 * LANES64(v11).n64_f32[0];
  v17 = vmuls_lane_f32(v13, v11, 1);
  LANES64(v11).n64_f32[0] = v16 + v15;
  result = v17 + LANES64(v10).n64_f32[0];
  LANES64(v11).n64_f32[1] = result;
  *a3 = LANES64(v11).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e180(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  float v6;
  float v7;
  _QWORD* v8;
  double v9;
  float32x2_t v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  float result;

  LANES64(v4).n64_u64[0] = *a1;
  LANES64(v5).n64_u64[0] = *a2;
  v6 = 0.0;
  v7 = 1.0;
  if (a4 != 0.0) {
    v6 = 1.0;
    v7 = 0.0;
    if (a4 != 1.0) {
      v8 = a3;
      v9 = a4 * 0x1.921fb54442d18p+0;
      v6 = sin(v9);
      v7 = cos(v9);
      a3 = v8;
    }
  }
  LANES64(v10).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v11 = v7 + v6;
  v12 = 1.0 - v7;
  v13 = v11 + -1.0;
  v14 = v13 * LANES64(v10).n64_f32[0];
  v15 = vmuls_lane_f32(v13, v10, 1);
  v16 = v12 * LANES64(v10).n64_f32[0];
  LANES64(v10).n64_f32[0] = vmuls_lane_f32(v12, v10, 1);
  *(float*)&v17 = v16 + v14;
  result = LANES64(v10).n64_f32[0] + v15;
  *((float*)&v17 + 1) = result;
  *a3 = v17;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e250(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __n64* v12;
  double v13;
  double v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __n64 result;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __n64* v25;
  double v26;
  double v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x2_t v32;
  int v33;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 = (float)(0.5 * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
       (float)(0.5 * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v7 =
      vmuls_lane_f32(0.5, COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                     1) +
      vmuls_lane_f32(0.5, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0.5) {
    LODWORD(v21) = HIDWORD(LANES64(*(a2)).n64_u64[0]);
    v22 = 0.0;
    v23 = (float)(a4 + -0.5) + (float)(a4 + -0.5);
    v24 = 1.0;
    if (v23 != 0.0) {
      v22 = 1.0;
      v24 = 0.0;
      if (v23 != 1.0) {
        v25 = a3;
        v33 = LANES64(*(a2)).n64_u64[0];
        v26 = v23 * 0x1.921fb54442d18p+0;
        v22 = sin(v26);
        v27 = cos(v26);
        LODWORD(v5) = v33;
        v24 = v27;
        a3 = v25;
      }
    }
    v28 = v24 + v22;
    v29 = 1.0 - v24;
    v30 = v28 + -1.0;
    v31 = (float)((float)(v21 - v7) * v29) + (float)((float)(v21 - v7) * v30);
    LANES64(result).n64_f32[0] =
        v6 + (float)((float)((float)(*(float*)&v5 - v6) * v29) +
                     (float)((float)(*(float*)&v5 - v6) * v30));
    v20 = v7 + v31;
  }
  else {
    LODWORD(v8) = HIDWORD(LANES64(*(a1)).n64_u64[0]);
    v9 = a4 + a4;
    v10 = 0.0;
    v11 = 1.0;
    if (v9 != 0.0) {
      v10 = 1.0;
      v11 = 0.0;
      if (v9 != 1.0) {
        v12 = a3;
        LANES64(v32).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
        v13 = v9 * 0x1.921fb54442d18p+0;
        v10 = sin(v13);
        v14 = cos(v13);
        LANES64(v4).n64_u64[0] = LANES64(v32).n64_u64[0];
        v11 = v14;
        a3 = v12;
      }
    }
    v15 = v11 + v10;
    v16 = 1.0 - v11;
    v17 = v15 + -1.0;
    v18 = (float)(v7 - v8) * v16;
    LANES64(result).n64_f32[0] =
        (float)((float)(v6 - LANES64(v4).n64_f32[0]) * v16) +
        (float)(v17 * LANES64_OF(vsub_f32(v4, v4)).n64_f32[0]);
    v20 = v18 + (float)((float)(v8 - v8) * v17);
  }
  LANES64(result).n64_f32[1] = v20;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e410(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  float32x2_t v6;
  float32x2_t v7;
  float v8;
  float v9;
  _QWORD* v10;
  double v11;
  float32x2_t v12;
  float32x2_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float result;

  LANES64(v5).n64_u64[0] = *a2;
  LANES64(v6).n64_u64[0] = *a1;
  LANES64(v7).n64_u64[0] = *a3;
  v8 = 0.0;
  v9 = 1.0;
  if (a5 != 0.0) {
    v8 = 1.0;
    v9 = 0.0;
    if (a5 != 1.0) {
      v10 = a4;
      v11 = a5 * 0x1.921fb54442d18p+0;
      v8 = sin(v11);
      v9 = cos(v11);
      a4 = v10;
    }
  }
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v7, v6)).n64_u64[0];
  LANES64(v13).n64_u64[0] = LANES64_OF(vsub_f32(v5, v6)).n64_u64[0];
  v14 = v9 + v8;
  v15 = 1.0 - v9;
  v16 = v14 + -1.0;
  v17 = v16 * LANES64(v12).n64_f32[0];
  LANES64(v12).n64_f32[0] = vmuls_lane_f32(v16, v12, 1);
  v18 = v15 * LANES64(v13).n64_f32[0];
  v19 = vmuls_lane_f32(v15, v13, 1);
  LANES64(v13).n64_f32[0] = v18 + v17;
  result = v19 + LANES64(v12).n64_f32[0];
  LANES64(v13).n64_f32[1] = result;
  *a4 = LANES64(v13).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e4e0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  double v7;
  double v9;
  double v10;
  double v11;
  float32x2_t v12;
  float32x2_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float result;

  PSEUDO_LOW_LANE64(v4, n64_u64, *a1);
  PSEUDO_LOW_LANE64(v5, n64_u64, *a2);
  v7 = a4;
  v9 = 0x1.0000000000000p+0 - a4;
  if (a4 == 0x0.0p+0f) {
    v10 = 0x1.0000000000000p-10;
  }
  else {
    v10 = exp2(v9 * -0x1.4000000000000p+3);
  }
  if (a4 == 0x1.0000000000000p+0f) {
    v11 = 0x1.0000000000000p-10;
  }
  else {
    v11 = exp2(v7 * -0x1.4000000000000p+3);
  }
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v4, v4)).n64_u64[0];
  LANES64(v13).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v14 = v11 - v7 * 0x1.0000000000000p-10;
  v15 = v10 - v9 * 0x1.0000000000000p-10;
  v16 = (float)(0x1.0000000000000p+0f - v14) - v15;
  v17 = v16 * LANES64(v12).n64_f32[0];
  v18 = vmuls_lane_f32(v16, v12, 1);
  LANES64(v12).n64_f32[0] =
      (float)(PSEUDO_UNFUSED(v15 * LANES64(v13).n64_f32[0])) + v17;
  result = vmuls_lane_f32(v15, v13, 1) + v18;
  LANES64(v12).n64_f32[1] = result;
  *a3 = LANES64(v12).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e5d0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  double v7;
  double v9;
  double v10;
  double v11;
  float32x2_t v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float result;

  PSEUDO_LOW_LANE64(v4, n64_u64, *a1);
  PSEUDO_LOW_LANE64(v5, n64_u64, *a2);
  v7 = a4;
  v9 = 0x1.0000000000000p+0 - a4;
  if (a4 == 0x0.0p+0f) {
    v10 = 0x1.0000000000000p-10;
  }
  else {
    v10 = exp2(v9 * -0x1.4000000000000p+3);
  }
  if (a4 == 0x1.0000000000000p+0f) {
    v11 = 0x1.0000000000000p-10;
  }
  else {
    v11 = exp2(v7 * -0x1.4000000000000p+3);
  }
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v13 = v11 - v7 * 0x1.0000000000000p-10;
  v14 = v10 - v9 * 0x1.0000000000000p-10;
  v15 = (float)(0x1.0000000000000p+0f - v13) - v14;
  *(float*)&v16 = (float)(PSEUDO_UNFUSED(v14 * LANES64(v12).n64_f32[0])) +
                  (float)(PSEUDO_UNFUSED(v15 * LANES64(v12).n64_f32[0]));
  result = vmuls_lane_f32(v14, v12, 1) + vmuls_lane_f32(v15, v12, 1);
  *((float*)&v16 + 1) = result;
  *a3 = v16;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e6c0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  double* a3 = (double*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v7;
  float v8;
  float v9;
  double v10;
  double v11;
  double v12;
  float v13;
  double v14;
  double v15;
  double v16;
  double v17;
  float v18;
  __n64 result;
  double v20;
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
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  int v36;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v7 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a1)).n64_u64[0]))) +
       (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])));
  v8 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v13 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v14 = v13;
    v15 = 0x1.0000000000000p+0 - v13;
    if (v13 == 0x0.0p+0f) {
      v16 = 0x1.0000000000000p-10;
    }
    else {
      v34 = LANES64(*(a2)).n64_u64[0];
      v20 = exp2(v15 * -0x1.4000000000000p+3);
      v5 = v34;
      v16 = v20;
    }
    v21 = *((float*)&v5 + 1);
    if (v13 == 0x1.0000000000000p+0f) {
      LANES64(result).n64_f64[0] = 0x1.0000000000000p-10;
    }
    else {
      v36 = v5;
      LANES64(result).n64_f64[0] = exp2(v14 * -0x1.4000000000000p+3);
      LODWORD(v5) = v36;
    }
    v29 = LANES64(result).n64_f64[0] - v14 * 0x1.0000000000000p-10;
    v30 = v16 - v15 * 0x1.0000000000000p-10;
    v31 = (float)(0x1.0000000000000p+0f - v29) - v30;
    v32 = (float)(PSEUDO_UNFUSED((float)(v21 - v8) * v30)) +
          (float)(PSEUDO_UNFUSED((float)(v21 - v8) * v31));
    LANES64(result).n64_f32[0] =
        v7 + (float)((float)(PSEUDO_UNFUSED((float)(*(float*)&v5 - v7) * v30)) +
                     (float)(PSEUDO_UNFUSED((float)(*(float*)&v5 - v7) * v31)));
    v28 = v8 + v32;
  }
  else {
    v9 = a4 + a4;
    v10 = (float)(a4 + a4);
    v11 = 0x1.0000000000000p+0 - v10;
    if ((float)(a4 + a4) == 0x0.0p+0f) {
      v12 = 0x1.0000000000000p-10;
    }
    else {
      v33 = LANES64(*(a1)).n64_u64[0];
      v17 = exp2(v11 * -0x1.4000000000000p+3);
      LANES64(v4).n64_u64[0] = v33;
      v12 = v17;
    }
    v18 = LANES64(v4).n64_f32[1];
    if (v9 == 0x1.0000000000000p+0f) {
      LANES64(result).n64_f64[0] = 0x1.0000000000000p-10;
    }
    else {
      v35 = LANES64(v4).n64_u64[0];
      LANES64(result).n64_f64[0] = exp2(v10 * -0x1.4000000000000p+3);
      LANES64(v4).n64_u64[0] = v35;
    }
    v22 = LANES64_OF(vsub_f32(v4, v4)).n64_f32[0];
    v23 = v7 - LANES64(v4).n64_f32[0];
    v24 = LANES64(result).n64_f64[0] - v10 * 0x1.0000000000000p-10;
    v25 = v12 - v11 * 0x1.0000000000000p-10;
    v26 = (float)(0x1.0000000000000p+0f - v24) - v25;
    v27 = (float)(v18 - v18) * v26;
    LANES64(result).n64_f32[0] =
        (float)(PSEUDO_UNFUSED(v23 * v25)) + (float)(PSEUDO_UNFUSED(v26 * v22));
    v28 = (float)(PSEUDO_UNFUSED((float)(v8 - v18) * v25)) + v27;
  }
  LANES64(result).n64_f32[1] = v28;
  *a3 = LANES64(result).n64_f64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e8b0(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  float32x2_t v6;
  float32x2_t v7;
  double v9;
  double v11;
  double v12;
  double v13;
  float32x2_t v14;
  float32x2_t v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float result;

  PSEUDO_LOW_LANE64(v5, n64_u64, *a2);
  PSEUDO_LOW_LANE64(v6, n64_u64, *a1);
  PSEUDO_LOW_LANE64(v7, n64_u64, *a3);
  v9 = a5;
  v11 = 0x1.0000000000000p+0 - a5;
  if (a5 == 0x0.0p+0f) {
    v12 = 0x1.0000000000000p-10;
  }
  else {
    v12 = exp2(v11 * -0x1.4000000000000p+3);
  }
  if (a5 == 0x1.0000000000000p+0f) {
    v13 = 0x1.0000000000000p-10;
  }
  else {
    v13 = exp2(v9 * -0x1.4000000000000p+3);
  }
  LANES64(v14).n64_u64[0] = LANES64_OF(vsub_f32(v7, v6)).n64_u64[0];
  LANES64(v15).n64_u64[0] = LANES64_OF(vsub_f32(v5, v6)).n64_u64[0];
  v16 = v13 - v9 * 0x1.0000000000000p-10;
  v17 = v12 - v11 * 0x1.0000000000000p-10;
  v18 = (float)(0x1.0000000000000p+0f - v16) - v17;
  v19 = v18 * LANES64(v14).n64_f32[0];
  v20 = vmuls_lane_f32(v18, v14, 1);
  LANES64(v14).n64_f32[0] =
      (float)(PSEUDO_UNFUSED(v17 * LANES64(v15).n64_f32[0])) + v19;
  result = vmuls_lane_f32(v17, v15, 1) + v20;
  LANES64(v14).n64_f32[1] = result;
  *a4 = LANES64(v14).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61e9a0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  double v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  float v7;
  __int64 v8;
  float result;

  v4 = a4;
  v5 = LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
           .n64_u64[0];
  v6 = LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
           .n64_u64[0];
  v7 = sqrt(0x1.0000000000000p+0 - v4 * v4);
  *(float*)&v4 = sqrt(0x1.0000000000000p+0 - (v4 + -0x1.0000000000000p+0) *
                                                 (v4 + -0x1.0000000000000p+0));
  *(float*)&v4 = (float)(v7 + *(float*)&v4) + -0x1.0000000000000p+0f;
  *(float*)&v8 = (float)(PSEUDO_UNFUSED(*(float*)&v6 * *(float*)&v4)) -
                 (float)(PSEUDO_UNFUSED(*(float*)&v5 *
                                        (float)(v7 + -0x1.0000000000000p+0f)));
  result = (float)(PSEUDO_UNFUSED(*((float*)&v6 + 1) * *(float*)&v4)) -
           (float)(PSEUDO_UNFUSED(*((float*)&v5 + 1) *
                                  (float)(v7 + -0x1.0000000000000p+0f)));
  *((float*)&v8 + 1) = result;
  *a3 = v8;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61ea90(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  double v4;
  unsigned __int64 v5;
  float v6;
  __int64 v7;
  float result;

  v4 = a4;
  v5 = LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
           .n64_u64[0];
  v6 = sqrt(0x1.0000000000000p+0 - v4 * v4);
  *(float*)&v4 = sqrt(0x1.0000000000000p+0 - (v4 + -0x1.0000000000000p+0) *
                                                 (v4 + -0x1.0000000000000p+0));
  *(float*)&v4 = (float)(v6 + *(float*)&v4) + -0x1.0000000000000p+0f;
  *(float*)&v7 = (float)(PSEUDO_UNFUSED(*(float*)&v5 * *(float*)&v4)) -
                 (float)(PSEUDO_UNFUSED(*(float*)&v5 *
                                        (float)(v6 + -0x1.0000000000000p+0f)));
  result = (float)(PSEUDO_UNFUSED(*((float*)&v5 + 1) * *(float*)&v4)) -
           (float)(PSEUDO_UNFUSED(*((float*)&v5 + 1) *
                                  (float)(v6 + -0x1.0000000000000p+0f)));
  *((float*)&v7 + 1) = result;
  *a3 = v7;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61eb70(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  double* a3 = (double*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __n64 result;
  float v12;
  float v13;
  float v14;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a1)).n64_u64[0]))) +
       (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])));
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    LANES64(result).n64_f64[0] = (float)((float)(a4 + -0x1.0000000000000p-1f) +
                                         (float)(a4 + -0x1.0000000000000p-1f));
    v13 = sqrt(0x1.0000000000000p+0 -
               LANES64(result).n64_f64[0] * LANES64(result).n64_f64[0]);
    LANES64(result).n64_f32[0] =
        sqrt(0x1.0000000000000p+0 -
             (LANES64(result).n64_f64[0] + -0x1.0000000000000p+0) *
                 (LANES64(result).n64_f64[0] + -0x1.0000000000000p+0));
    LANES64(result).n64_f32[0] =
        (float)(v13 + LANES64(result).n64_f32[0]) + -0x1.0000000000000p+0f;
    v14 = (float)(PSEUDO_UNFUSED((float)(*((float*)&v5 + 1) - v7) *
                                 LANES64(result).n64_f32[0])) -
          (float)(PSEUDO_UNFUSED((float)(*((float*)&v5 + 1) - v7) *
                                 (float)(v13 + -0x1.0000000000000p+0f)));
    LANES64(result).n64_f32[0] =
        v6 +
        (float)((float)(PSEUDO_UNFUSED((float)(*(float*)&v5 - v6) *
                                       LANES64(result).n64_f32[0])) -
                (float)(PSEUDO_UNFUSED((float)(*(float*)&v5 - v6) *
                                       (float)(v13 + -0x1.0000000000000p+0f))));
    v12 = v7 + v14;
  }
  else {
    v8 = LANES64_OF(vsub_f32(v4, v4)).n64_f32[0];
    LANES64(result).n64_f64[0] = (float)(a4 + a4);
    v9 = v6 - LANES64(v4).n64_f32[0];
    LANES64(v4).n64_f32[0] =
        sqrt(0x1.0000000000000p+0 -
             LANES64(result).n64_f64[0] * LANES64(result).n64_f64[0]);
    LANES64(result).n64_f32[0] =
        sqrt(0x1.0000000000000p+0 -
             (LANES64(result).n64_f64[0] + -0x1.0000000000000p+0) *
                 (LANES64(result).n64_f64[0] + -0x1.0000000000000p+0));
    LANES64(result).n64_f32[0] =
        (float)(LANES64(v4).n64_f32[0] + LANES64(result).n64_f32[0]) +
        -0x1.0000000000000p+0f;
    v10 = (float)(LANES64(v4).n64_f32[1] - LANES64(v4).n64_f32[1]) *
          LANES64(result).n64_f32[0];
    LANES64(result).n64_f32[0] =
        (float)(PSEUDO_UNFUSED(v8 * LANES64(result).n64_f32[0])) -
        (float)(PSEUDO_UNFUSED(
            v9 * (float)(LANES64(v4).n64_f32[0] + -0x1.0000000000000p+0f)));
    v12 = v10 - (float)(PSEUDO_UNFUSED(
                    (float)(v7 - LANES64(v4).n64_f32[1]) *
                    (float)(LANES64(v4).n64_f32[0] + -0x1.0000000000000p+0f)));
  }
  LANES64(result).n64_f32[1] = v12;
  *a3 = LANES64(result).n64_f64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61eda0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  double v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  float v8;
  __int64 v9;
  float result;

  v5 = a5;
  v6 = LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
           .n64_u64[0];
  v7 = LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]),
                           COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
           .n64_u64[0];
  v8 = sqrt(0x1.0000000000000p+0 - v5 * v5);
  *(float*)&v5 = sqrt(0x1.0000000000000p+0 - (v5 + -0x1.0000000000000p+0) *
                                                 (v5 + -0x1.0000000000000p+0));
  *(float*)&v5 = (float)(v8 + *(float*)&v5) + -0x1.0000000000000p+0f;
  *(float*)&v9 = (float)(PSEUDO_UNFUSED(*(float*)&v7 * *(float*)&v5)) -
                 (float)(PSEUDO_UNFUSED(*(float*)&v6 *
                                        (float)(v8 + -0x1.0000000000000p+0f)));
  result = (float)(PSEUDO_UNFUSED(*((float*)&v7 + 1) * *(float*)&v5)) -
           (float)(PSEUDO_UNFUSED(*((float*)&v6 + 1) *
                                  (float)(v8 + -0x1.0000000000000p+0f)));
  *((float*)&v9 + 1) = result;
  *a4 = v9;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61eea0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4, float a5)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  float32x2_t v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float result;

  LANES64(v5).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v7 = (float)((float)(PSEUDO_UNFUSED(a4 * -0x1.8000000000000p+1f)) +
               (float)(a5 * (float)(0x1.0000000000000p+0f - a4))) +
       0x1.8000000000000p+1f;
  v8 = v7 * LANES64(v6).n64_f32[0];
  LANES64(v6).n64_f32[0] = vmuls_lane_f32(v7, v6, 1);
  v9 = a4 * (float)(a4 + (float)(a5 * (float)(a4 + -0x1.0000000000000p+0f)));
  v10 = v9 * LANES64(v5).n64_f32[0];
  v11 = LANES64(v6).n64_f32[0] + vmuls_lane_f32(v9, v5, 1);
  LANES64(v6).n64_f32[0] = a4 * (float)(v8 + v10);
  result = a4 * v11;
  LANES64(v6).n64_f32[1] = result;
  *a3 = LANES64(v6).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61ef10(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4, float a5)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float result;

  LANES64(v5).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v6 = (float)(PSEUDO_UNFUSED(a4 * -0x1.8000000000000p+1f)) +
       (float)(a5 * (float)(0x1.0000000000000p+0f - a4));
  v7 = a4 * (float)(a4 + (float)(a5 * (float)(a4 + -0x1.0000000000000p+0f)));
  v8 = v6 + 0x1.8000000000000p+1f;
  v9 = v7 * LANES64(v5).n64_f32[0];
  v10 = vmuls_lane_f32(v7, v5, 1) + vmuls_lane_f32(v8, v5, 1);
  LANES64(v5).n64_f32[0] =
      a4 * (float)(v9 + (float)(PSEUDO_UNFUSED(v8 * LANES64(v5).n64_f32[0])));
  result = a4 * v10;
  LANES64(v5).n64_f32[1] = result;
  *a3 = LANES64(v5).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61ef80(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4, float a5)
{
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __n64 result;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  LANES64(v5).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v6 = LANES64(*(a2)).n64_u64[0];
  v7 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a1)).n64_u64[0]))) +
       (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])));
  v8 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v14 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v15 = (float)(PSEUDO_UNFUSED(v14 * -0x1.8000000000000p+1f)) +
          (float)(a5 * (float)(0x1.0000000000000p+0f - v14));
    v16 = v14 *
          (float)(v14 + (float)(a5 * (float)(v14 + -0x1.0000000000000p+0f)));
    v17 = v15 + 0x1.8000000000000p+1f;
    v18 = v14 *
          (float)((float)(PSEUDO_UNFUSED(v16 * (float)(*(float*)&v6 - v7))) +
                  (float)(PSEUDO_UNFUSED(v17 * (float)(*(float*)&v6 - v7))));
    v19 = v14 * (float)((float)(PSEUDO_UNFUSED(
                            v16 * (float)(*((float*)&v6 + 1) - v8))) +
                        (float)(PSEUDO_UNFUSED(
                            v17 * (float)(*((float*)&v6 + 1) - v8))));
    LANES64(result).n64_f32[0] = v7 + v18;
    v13 = v8 + v19;
  }
  else {
    v9 = a4 + a4;
    v10 = (float)((float)(PSEUDO_UNFUSED(v9 * -0x1.8000000000000p+1f)) +
                  (float)(a5 * (float)(0x1.0000000000000p+0f - v9))) +
          0x1.8000000000000p+1f;
    v11 = v9 * (float)(v9 + (float)(a5 * (float)(v9 + -0x1.0000000000000p+0f)));
    LANES64(result).n64_f32[0] =
        (float)(a4 + a4) *
        (float)((float)(PSEUDO_UNFUSED(
                    v10 * LANES64_OF(vsub_f32(v5, v5)).n64_f32[0])) +
                (float)(PSEUDO_UNFUSED(v11 *
                                       (float)(v7 - LANES64(v5).n64_f32[0]))));
    v13 =
        v9 *
        (float)((float)(PSEUDO_UNFUSED(v10 * (float)(LANES64(v5).n64_f32[1] -
                                                     LANES64(v5).n64_f32[1]))) +
                (float)(PSEUDO_UNFUSED(v11 *
                                       (float)(v8 - LANES64(v5).n64_f32[1]))));
  }
  LANES64(result).n64_f32[1] = v13;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f090(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5, float a6)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v6;
  float32x2_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float result;

  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v8 = (float)((float)(PSEUDO_UNFUSED(a5 * -0x1.8000000000000p+1f)) +
               (float)(a6 * (float)(0x1.0000000000000p+0f - a5))) +
       0x1.8000000000000p+1f;
  v9 = v8 * LANES64(v7).n64_f32[0];
  PSEUDO_LOW_LANE64(v7, n64_f32, vmuls_lane_f32(v8, v7, 1));
  v10 = a5 * (float)(a5 + (float)(a6 * (float)(a5 + -0x1.0000000000000p+0f)));
  v11 = v10 * LANES64(v6).n64_f32[0];
  v12 = vmuls_lane_f32(v10, v6, 1) + LANES64(v7).n64_f32[0];
  LANES64(v6).n64_f32[0] = a5 * (float)(v11 + v9);
  result = a5 * v12;
  LANES64(v6).n64_f32[1] = result;
  *a4 = LANES64(v6).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f100(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  float v6;
  float v7;
  double v8;
  _QWORD* v9;
  double v10;
  float32x2_t v11;
  float32x2_t v12;
  float v13;
  float v14;
  float v15;
  float result;

  LANES64(v4).n64_u64[0] = *a1;
  LANES64(v5).n64_u64[0] = *a2;
  if (a4 == 0.0) {
    v6 = 0.0;
    v7 = -25.0;
  }
  else if (a4 == 1.0) {
    v6 = 25.0;
    v7 = 0.0;
  }
  else {
    v8 = a4;
    v9 = a3;
    v6 = sin((a4 + -1.0) * 25.0) * a4 / (a4 + -1.0);
    v10 = sin(v8 * 25.0);
    a3 = v9;
    v7 = (-1.0 / v8 + 1.0) * v10;
  }
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v4, v4)).n64_u64[0];
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v13 = (float)((float)(v7 - v6) * 0x1.47ae140000000p-5) + 1.0;
  v14 = v13 * LANES64(v11).n64_f32[0];
  v15 = vmuls_lane_f32(v13, v11, 1);
  LANES64(v11).n64_f32[0] = vmuls_lane_f32(v6 * 0x1.47ae140000000p-5, v12, 1);
  LANES64(v12).n64_f32[0] =
      (float)((float)(v6 * 0x1.47ae140000000p-5) * LANES64(v12).n64_f32[0]) +
      v14;
  result = LANES64(v11).n64_f32[0] + v15;
  LANES64(v12).n64_f32[1] = result;
  *a3 = LANES64(v12).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f200(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  float32x2_t v5;
  float v6;
  float v7;
  double v8;
  _QWORD* v9;
  double v10;
  float32x2_t v11;
  float v12;
  __int64 v13;
  float result;

  LANES64(v4).n64_u64[0] = *a1;
  LANES64(v5).n64_u64[0] = *a2;
  if (a4 == 0.0) {
    v6 = 0.0;
    v7 = -25.0;
  }
  else if (a4 == 1.0) {
    v6 = 25.0;
    v7 = 0.0;
  }
  else {
    v8 = a4;
    v9 = a3;
    v6 = sin((a4 + -1.0) * 25.0) * a4 / (a4 + -1.0);
    v10 = sin(v8 * 25.0);
    a3 = v9;
    v7 = (-1.0 / v8 + 1.0) * v10;
  }
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v5, v4)).n64_u64[0];
  v12 = (float)((float)(v7 - v6) * 0x1.47ae140000000p-5) + 1.0;
  *(float*)&v13 =
      (float)((float)(v6 * 0x1.47ae140000000p-5) * LANES64(v11).n64_f32[0]) +
      (float)(v12 * LANES64(v11).n64_f32[0]);
  result = vmuls_lane_f32(v6 * 0x1.47ae140000000p-5, v11, 1) +
           vmuls_lane_f32(v12, v11, 1);
  *((float*)&v13 + 1) = result;
  *a3 = v13;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f2f0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  double v16;
  __n64* v17;
  double v18;
  float v19;
  float v20;
  __n64 result;
  float v22;
  double v23;
  __n64* v24;
  double v25;
  float v26;
  float v27;
  float32x2_t v28;
  int v29;

  LANES64(v4).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 = (float)(0.5 * COERCE_FLOAT(LANES64(*(a1)).n64_u64[0])) +
       (float)(0.5 * COERCE_FLOAT(LANES64(*(a2)).n64_u64[0]));
  v7 =
      vmuls_lane_f32(0.5, COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]),
                     1) +
      vmuls_lane_f32(0.5, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0.5) {
    LODWORD(v12) = HIDWORD(LANES64(*(a2)).n64_u64[0]);
    v13 = (float)(a4 + -0.5) + (float)(a4 + -0.5);
    if (v13 == 0.0) {
      v14 = 0.0;
      v15 = -25.0;
    }
    else if (v13 == 1.0) {
      v14 = 25.0;
      v15 = 0.0;
    }
    else {
      v23 = v13;
      v24 = a3;
      v29 = LANES64(*(a2)).n64_u64[0];
      v14 = sin((v13 + -1.0) * 25.0) * v13 / (v13 + -1.0);
      v25 = sin(v23 * 25.0);
      LODWORD(v5) = v29;
      a3 = v24;
      v15 = (-1.0 / v23 + 1.0) * v25;
    }
    v26 = (float)((float)(v15 - v14) * 0x1.47ae140000000p-5) + 1.0;
    v27 = (float)((float)(v12 - v7) * (float)(v14 * 0x1.47ae140000000p-5)) +
          (float)((float)(v12 - v7) * v26);
    LANES64(result).n64_f32[0] =
        v6 + (float)((float)((float)(*(float*)&v5 - v6) *
                             (float)(v14 * 0x1.47ae140000000p-5)) +
                     (float)((float)(*(float*)&v5 - v6) * v26));
    v22 = v7 + v27;
  }
  else {
    LODWORD(v8) = HIDWORD(LANES64(*(a1)).n64_u64[0]);
    v9 = a4 + a4;
    if (v9 == 0.0) {
      v10 = 0.0;
      v11 = -25.0;
    }
    else if (v9 == 1.0) {
      v10 = 25.0;
      v11 = 0.0;
    }
    else {
      v16 = v9;
      v17 = a3;
      LANES64(v28).n64_u64[0] = LANES64(*(a1)).n64_u64[0];
      v10 = sin((v9 + -1.0) * 25.0) * v9 / (v9 + -1.0);
      v18 = sin(v16 * 25.0);
      LANES64(v4).n64_u64[0] = LANES64(v28).n64_u64[0];
      a3 = v17;
      v11 = (-1.0 / v16 + 1.0) * v18;
    }
    v19 = (float)((float)(v11 - v10) * 0x1.47ae140000000p-5) + 1.0;
    v20 = (float)(v8 - v8) * v19;
    LANES64(result).n64_f32[0] =
        (float)((float)(v6 - LANES64(v4).n64_f32[0]) *
                (float)(v10 * 0x1.47ae140000000p-5)) +
        (float)(v19 * LANES64_OF(vsub_f32(v4, v4)).n64_f32[0]);
    v22 = (float)((float)(v7 - v8) * (float)(v10 * 0x1.47ae140000000p-5)) + v20;
  }
  LANES64(result).n64_f32[1] = v22;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f510(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            unsigned __int64* a2,
                                            unsigned __int64* a3, float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x2_t v5;
  float32x2_t v6;
  float32x2_t v7;
  float v8;
  float v9;
  double v10;
  _QWORD* v11;
  double v12;
  float32x2_t v13;
  float32x2_t v14;
  float v15;
  float v16;
  float v17;
  float result;

  LANES64(v5).n64_u64[0] = *a2;
  LANES64(v6).n64_u64[0] = *a1;
  LANES64(v7).n64_u64[0] = *a3;
  if (a5 == 0.0) {
    v8 = 0.0;
    v9 = -25.0;
  }
  else if (a5 == 1.0) {
    v8 = 25.0;
    v9 = 0.0;
  }
  else {
    v10 = a5;
    v11 = a4;
    v8 = sin((a5 + -1.0) * 25.0) * a5 / (a5 + -1.0);
    v12 = sin(v10 * 25.0);
    a4 = v11;
    v9 = (-1.0 / v10 + 1.0) * v12;
  }
  LANES64(v13).n64_u64[0] = LANES64_OF(vsub_f32(v7, v6)).n64_u64[0];
  LANES64(v14).n64_u64[0] = LANES64_OF(vsub_f32(v5, v6)).n64_u64[0];
  v15 = (float)((float)(v9 - v8) * 0x1.47ae140000000p-5) + 1.0;
  v16 = v15 * LANES64(v13).n64_f32[0];
  v17 = vmuls_lane_f32(v15, v13, 1);
  LANES64(v13).n64_f32[0] = vmuls_lane_f32(v8 * 0x1.47ae140000000p-5, v14, 1);
  LANES64(v14).n64_f32[0] =
      (float)((float)(v8 * 0x1.47ae140000000p-5) * LANES64(v14).n64_f32[0]) +
      v16;
  result = LANES64(v13).n64_f32[0] + v17;
  LANES64(v14).n64_f32[1] = result;
  *a4 = LANES64(v14).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f610(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v5;
  bool v6;
  float v7;
  float32x2_t v8;
  float v9;
  __int64 v10;
  float result;

  v4 = 1.0f - a4;
  if (v4 >= 0x1.745d180000000p-2f) {
    if (v4 >= 0x1.745d180000000p-1f) {
      v6 = v4 < 0x1.d1745e0000000p-1f;
      v7 = (float)((float)((float)(v4 + -0x1.e8ba2e0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v4 + -0x1.e8ba2e0000000p-1f)) +
           0x1.f800000000000p-1f;
      v5 = (float)((float)((float)(v4 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v4 + -0x1.a2e8ba0000000p-1f)) +
           0.9375f;
      if (!v6) {
        v5 = v7;
      }
    }
    else {
      v5 = (float)((float)((float)(v4 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v4 + -0x1.1745d20000000p-1f)) +
           0.75f;
    }
  }
  else {
    v5 = v4 * (float)(v4 * 0x1.e400000000000p+2f);
  }
  LANES64(v8).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  v9 = 1.0f - v5;
  *(float*)&v10 = v9 * LANES64(v8).n64_f32[0];
  result = vmuls_lane_f32(v9, v8, 1);
  *((float*)&v10 + 1) = result;
  *a3 = v10;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f710(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float v5;
  float32x2_t v6;
  __int64 v7;
  float result;

  if (a4 >= 0x1.745d180000000p-2f) {
    v5 = (float)((float)((float)(a4 + -0x1.e8ba2e0000000p-1f) *
                         0x1.e400000000000p+2f) *
                 (float)(a4 + -0x1.e8ba2e0000000p-1f)) +
         0x1.f800000000000p-1f;
    if (a4 < 0x1.d1745e0000000p-1f) {
      v5 = (float)((float)((float)(a4 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a4 + -0x1.a2e8ba0000000p-1f)) +
           0.9375f;
    }
    if (a4 < 0x1.745d180000000p-1f) {
      v4 = (float)((float)((float)(a4 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a4 + -0x1.1745d20000000p-1f)) +
           0.75f;
    }
    else {
      v4 = v5;
    }
  }
  else {
    v4 = a4 * (float)(a4 * 0x1.e400000000000p+2f);
  }
  LANES64(v6).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  *(float*)&v7 = v4 * LANES64(v6).n64_f32[0];
  result = vmuls_lane_f32(v4, v6, 1);
  *((float*)&v7 + 1) = result;
  *a3 = v7;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61f7f0(PSEUDO_X8 x8_, float32x2_t* a1,
                                            float32x2_t* a2, float a4)
{
  __n64* a3 = (__n64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  bool v12;
  float v13;
  float v14;
  __n64 result;
  float v16;
  float v17;
  float v18;

  v4 = LANES64(*(a1)).n64_u64[0];
  v5 = LANES64(*(a2)).n64_u64[0];
  v6 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a1)).n64_u64[0]))) +
       (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f *
                              COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])));
  v7 = vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
       vmuls_lane_f32(0x1.0000000000000p-1f,
                      COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1);
  if (a4 >= 0x1.0000000000000p-1f) {
    v10 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    if (v10 >= 0x1.745d180000000p-2f) {
      if (v10 >= 0x1.745d180000000p-1f) {
        v12 = v10 < 0x1.d1745e0000000p-1f;
        v17 = (float)((float)((float)(v10 + -0x1.e8ba2e0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v10 + -0x1.e8ba2e0000000p-1f)) +
              0x1.f800000000000p-1f;
        v11 = (float)((float)((float)(v10 + -0x1.a2e8ba0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v10 + -0x1.a2e8ba0000000p-1f)) +
              0x1.e000000000000p-1f;
        if (!v12) {
          v11 = v17;
        }
      }
      else {
        v11 = (float)((float)((float)(v10 + -0x1.1745d20000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v10 + -0x1.1745d20000000p-1f)) +
              0x1.8000000000000p-1f;
      }
    }
    else {
      v11 = v10 * (float)(v10 * 0x1.e400000000000p+2f);
    }
    v18 = (float)(*((float*)&v5 + 1) - v7) * v11;
    LANES64(result).n64_f32[0] =
        v6 + (float)(PSEUDO_UNFUSED((float)(*(float*)&v5 - v6) * v11));
    v16 = v7 + v18;
  }
  else {
    v8 = 0x1.0000000000000p+0f - (float)(a4 + a4);
    if (v8 >= 0x1.745d180000000p-2f) {
      if (v8 >= 0x1.745d180000000p-1f) {
        v12 = v8 < 0x1.d1745e0000000p-1f;
        v13 = (float)((float)((float)(v8 + -0x1.e8ba2e0000000p-1f) *
                              0x1.e400000000000p+2f) *
                      (float)(v8 + -0x1.e8ba2e0000000p-1f)) +
              0x1.f800000000000p-1f;
        v9 = (float)((float)((float)(v8 + -0x1.a2e8ba0000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v8 + -0x1.a2e8ba0000000p-1f)) +
             0x1.e000000000000p-1f;
        if (!v12) {
          v9 = v13;
        }
      }
      else {
        v9 = (float)((float)((float)(v8 + -0x1.1745d20000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(v8 + -0x1.1745d20000000p-1f)) +
             0x1.8000000000000p-1f;
      }
    }
    else {
      v9 = v8 * (float)(v8 * 0x1.e400000000000p+2f);
    }
    v14 = v6 - *(float*)&v4;
    *(float*)&v4 = 0x1.0000000000000p+0f - v9;
    LANES64(result).n64_f32[0] = v14 * (float)(0x1.0000000000000p+0f - v9);
    v16 = (float)(v7 - *((float*)&v4 + 1)) * *(float*)&v4;
  }
  LANES64(result).n64_f32[1] = v16;
  LANES64(*(a3)).n64_u64[0] = LANES64(result).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fa10(PSEUDO_X8 x8_, unsigned __int64* a1,
                                            float32x2_t* a2, float32x2_t* a3,
                                            float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float v5;
  float32x2_t v6;
  float v7;
  float v8;
  bool v9;
  float v10;
  float32x2_t v11;
  float32x2_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float result;

  if (a5 >= 0x1.745d180000000p-2f) {
    if (a5 >= 0x1.745d180000000p-1f) {
      v5 = (float)((float)((float)(a5 + -0x1.e8ba2e0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a5 + -0x1.e8ba2e0000000p-1f)) +
           0x1.f800000000000p-1f;
      if (a5 < 0x1.d1745e0000000p-1f) {
        v5 = (float)((float)((float)(a5 + -0x1.a2e8ba0000000p-1f) *
                             0x1.e400000000000p+2f) *
                     (float)(a5 + -0x1.a2e8ba0000000p-1f)) +
             0x1.e000000000000p-1f;
      }
    }
    else {
      v5 = (float)((float)((float)(a5 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(a5 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v5 = a5 * (float)(a5 * 0x1.e400000000000p+2f);
  }
  PSEUDO_LOW_LANE64(v6, n64_u64, *a1);
  v7 = 0x1.0000000000000p+0f - a5;
  if (v7 >= 0x1.745d180000000p-2f) {
    if (v7 >= 0x1.745d180000000p-1f) {
      v9 = v7 < 0x1.d1745e0000000p-1f;
      v10 = (float)((float)((float)(v7 + -0x1.e8ba2e0000000p-1f) *
                            0x1.e400000000000p+2f) *
                    (float)(v7 + -0x1.e8ba2e0000000p-1f)) +
            0x1.f800000000000p-1f;
      v8 = (float)((float)((float)(v7 + -0x1.a2e8ba0000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v7 + -0x1.a2e8ba0000000p-1f)) +
           0x1.e000000000000p-1f;
      if (!v9) {
        v8 = v10;
      }
    }
    else {
      v8 = (float)((float)((float)(v7 + -0x1.1745d20000000p-1f) *
                           0x1.e400000000000p+2f) *
                   (float)(v7 + -0x1.1745d20000000p-1f)) +
           0x1.8000000000000p-1f;
    }
  }
  else {
    v8 = v7 * (float)(v7 * 0x1.e400000000000p+2f);
  }
  LANES64(v11).n64_u64[0] =
      LANES64_OF(
          vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), v6))
          .n64_u64[0];
  LANES64(v12).n64_u64[0] =
      LANES64_OF(
          vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), v6))
          .n64_u64[0];
  v13 = 0x1.0000000000000p+0f - v8;
  v14 = v5 - v13;
  v15 = v14 * LANES64(v11).n64_f32[0];
  v16 = vmuls_lane_f32(v14, v11, 1);
  PSEUDO_LOW_LANE64(v11, n64_f32, v13 * LANES64(v12).n64_f32[0]);
  v17 = vmuls_lane_f32(v13, v12, 1);
  LANES64(v12).n64_f32[0] = LANES64(v11).n64_f32[0] + v15;
  result = v17 + v16;
  LANES64(v12).n64_f32[1] = result;
  *a4 = LANES64(v12).n64_u64[0];
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fbf0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t result;
  float32x4_t v7;

  LANES128(v4).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v4).n128_u64[1] = 0x3F0000003F000000LL;
  v5 = vaddq_f32(vmulq_f32(*a1, v4), vmulq_f32(*a2, v4));
  if (a4 >= 0x1.0000000000000p-1f) {
    v7 = vsubq_f32(*a2, v5);
    result = vaddq_f32(
        v5,
        vaddq_f32(
            vmulq_n_f32(v7, (float)((float)(a4 + -0x1.0000000000000p-1f) +
                                    (float)(a4 + -0x1.0000000000000p-1f)) *
                                (float)((float)(a4 + -0x1.0000000000000p-1f) +
                                        (float)(a4 + -0x1.0000000000000p-1f))),
            vmulq_n_f32(
                v7,
                (float)((float)(a4 + -0x1.0000000000000p-1f) +
                        (float)(a4 + -0x1.0000000000000p-1f)) *
                    (float)((float)(0x1.0000000000000p+0f -
                                    (float)((float)(a4 +
                                                    -0x1.0000000000000p-1f) +
                                            (float)(a4 +
                                                    -0x1.0000000000000p-1f))) +
                            (float)(0x1.0000000000000p+0f -
                                    (float)((float)(a4 +
                                                    -0x1.0000000000000p-1f) +
                                            (float)(a4 +
                                                    -0x1.0000000000000p-1f)))))));
  }
  else {
    result = vaddq_f32(
        vmulq_n_f32(
            vsubq_f32(*a1, *a1),
            (float)(a4 + a4) *
                (float)((float)(0x1.0000000000000p+0f - (float)(a4 + a4)) +
                        (float)(0x1.0000000000000p+0f - (float)(a4 + a4)))),
        vmulq_n_f32(vsubq_f32(v5, *a1), (float)(a4 + a4) * (float)(a4 + a4)));
  }
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fc90(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t result;
  float32x4_t v11;
  float v12;

  v4 = *a1;
  LANES128(v5).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v5).n128_u64[1] = 0x3F0000003F000000LL;
  v6 = vaddq_f32(vmulq_f32(*a1, v5), vmulq_f32(*a2, v5));
  if (a4 >= 0x1.0000000000000p-1f) {
    v11 = vsubq_f32(*a2, v6);
    v12 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    result = vaddq_f32(
        v6,
        vaddq_f32(
            vmulq_n_f32(v11, v12 * (float)(v12 * v12)),
            vaddq_f32(
                vmulq_n_f32(
                    v11,
                    v12 * (float)((float)(0x1.0000000000000p+0f - v12) *
                                  (float)((float)(0x1.0000000000000p+0f - v12) *
                                          0x1.8000000000000p+1f))),
                vmulq_n_f32(
                    v11,
                    v12 * (float)(v12 *
                                  (float)((float)(0x1.0000000000000p+0f - v12) *
                                          0x1.8000000000000p+1f))))));
  }
  else {
    v7 = a4 + a4;
    v8 = vsubq_f32(v6, v4);
    v9 = vsubq_f32(v4, v4);
    result = vaddq_f32(
        vaddq_f32(
            vmulq_n_f32(
                v9, v7 * (float)((float)(0x1.0000000000000p+0f - v7) *
                                 (float)((float)(0x1.0000000000000p+0f - v7) *
                                         0x1.8000000000000p+1f))),
            vmulq_n_f32(
                v9,
                v7 * (float)(v7 * (float)((float)(0x1.0000000000000p+0f - v7) *
                                          0x1.8000000000000p+1f)))),
        vmulq_n_f32(v8, v7 * (float)(v7 * v7)));
  }
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fd60(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float32x4_t v5;
  float32x4_t result;

  v4 = 1.0f - a4;
  v5 = vsubq_f32(*a1, *a1);
  result = vaddq_f32(
      vmulq_n_f32(vsubq_f32(*a2, *a1), (float)(a4 * a4) * (float)(a4 * a4)),
      vaddq_f32(
          vmulq_n_f32(v5, (float)(a4 * a4) *
                              (float)(a4 * (float)((float)(1.0f - a4) * 4.0f))),
          vaddq_f32(vmulq_n_f32(v5, a4 * (float)(v4 * (float)((float)(v4 * v4) *
                                                              4.0f))),
                    vmulq_n_f32(v5, (float)(a4 * a4) *
                                        (float)((float)(v4 * v4) * 6.0f)))));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fdd0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float v5;
  float32x4_t result;

  v4 = vsubq_f32(*a2, *a1);
  v5 = 0x1.0000000000000p+0f - a4;
  result = vaddq_f32(
      vmulq_n_f32(v4, (float)(a4 * a4) * (float)(a4 * a4)),
      vaddq_f32(
          vmulq_n_f32(
              v4, (float)(a4 * a4) *
                      (float)(a4 * (float)((float)(0x1.0000000000000p+0f - a4) *
                                           0x1.0000000000000p+2f))),
          vaddq_f32(vmulq_n_f32(
                        v4, a4 * (float)(v5 * (float)((float)(v5 * v5) *
                                                      0x1.0000000000000p+2f))),
                    vmulq_n_f32(v4, (float)(a4 * a4) *
                                        (float)((float)(v5 * v5) *
                                                0x1.8000000000000p+2f)))));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61fe40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t result;
  float32x4_t v11;
  float v12;
  float v13;

  v4 = *a1;
  LANES128(v5).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v5).n128_u64[1] = 0x3F0000003F000000LL;
  v6 = vaddq_f32(vmulq_f32(*a1, v5), vmulq_f32(*a2, v5));
  if (a4 >= 0x1.0000000000000p-1f) {
    v11 = vsubq_f32(*a2, v6);
    v12 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v13 = 0x1.0000000000000p+0f - v12;
    result = vaddq_f32(
        v6,
        vaddq_f32(
            vmulq_n_f32(v11, (float)(v12 * v12) * (float)(v12 * v12)),
            vaddq_f32(
                vmulq_n_f32(
                    v11,
                    (float)(v12 * v12) *
                        (float)(v12 *
                                (float)((float)(0x1.0000000000000p+0f - v12) *
                                        0x1.0000000000000p+2f))),
                vaddq_f32(
                    vmulq_n_f32(
                        v11,
                        v12 * (float)(v13 * (float)((float)(v13 * v13) *
                                                    0x1.0000000000000p+2f))),
                    vmulq_n_f32(v11, (float)(v12 * v12) *
                                         (float)((float)(v13 * v13) *
                                                 0x1.8000000000000p+2f))))));
  }
  else {
    v7 = a4 + a4;
    v8 = vsubq_f32(v6, v4);
    v9 = vsubq_f32(v4, v4);
    result = vaddq_f32(
        vaddq_f32(
            vmulq_n_f32(
                v9,
                (float)(v7 * v7) *
                    (float)(v7 * (float)((float)(0x1.0000000000000p+0f - v7) *
                                         0x1.0000000000000p+2f))),
            vaddq_f32(
                vmulq_n_f32(
                    v9,
                    v7 * (float)((float)(0x1.0000000000000p+0f - v7) *
                                 (float)((float)((float)(0x1.0000000000000p+0f -
                                                         v7) *
                                                 (float)(0x1.0000000000000p+0f -
                                                         v7)) *
                                         0x1.0000000000000p+2f))),
                vmulq_n_f32(
                    v9,
                    (float)(v7 * v7) *
                        (float)((float)((float)(0x1.0000000000000p+0f - v7) *
                                        (float)(0x1.0000000000000p+0f - v7)) *
                                0x1.8000000000000p+2f)))),
        vmulq_n_f32(v8, (float)(v7 * v7) * (float)(v7 * v7)));
  }
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61ff50(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float32x4_t* a4, float32x4_t* a5,
                                            float a7)
{

#pragma clang fp contract(off)
  float32x4_t* a6 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t result;

  result = vaddq_f32(
      vmulq_n_f32(vsubq_f32(*a2, *a1), (float)(a7 * a7) * (float)(a7 * a7)),
      vaddq_f32(
          vaddq_f32(
              vmulq_n_f32(
                  vsubq_f32(*a3, *a1),
                  a7 * (float)((float)(0x1.0000000000000p+0f - a7) *
                               (float)((float)((float)(0x1.0000000000000p+0f -
                                                       a7) *
                                               (float)(0x1.0000000000000p+0f -
                                                       a7)) *
                                       0x1.0000000000000p+2f))),
              vmulq_n_f32(
                  vsubq_f32(*a4, *a1),
                  (float)(a7 * a7) *
                      (float)((float)((float)(0x1.0000000000000p+0f - a7) *
                                      (float)(0x1.0000000000000p+0f - a7)) *
                              0x1.8000000000000p+2f))),
          vmulq_n_f32(
              vsubq_f32(*a5, *a1),
              (float)(a7 * a7) *
                  (float)(a7 * (float)((float)(0x1.0000000000000p+0f - a7) *
                                       0x1.0000000000000p+2f)))));
  *a6 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_61ffe0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v4;
  float32x4_t v5;
  float32x4_t result;

  v4 = 0x1.0000000000000p+0f - a4;
  v5 = vsubq_f32(*a1, *a1);
  result = vaddq_f32(
      vmulq_n_f32(vsubq_f32(*a2, *a1),
                  (float)(a4 * a4) * (float)(a4 * (float)(a4 * a4))),
      vaddq_f32(
          vmulq_n_f32(v5,
                      (float)(a4 * a4) *
                          (float)((float)(a4 * a4) *
                                  (float)((float)(0x1.0000000000000p+0f - a4) *
                                          0x1.4000000000000p+2f))),
          vaddq_f32(
              vmulq_n_f32(v5, (float)(a4 * a4) *
                                  (float)(a4 * (float)((float)(v4 * v4) *
                                                       0x1.4000000000000p+3f))),
              vaddq_f32(
                  vmulq_n_f32(v5, a4 * (float)((float)(v4 * v4) *
                                               (float)((float)(v4 * v4) *
                                                       0x1.4000000000000p+2f))),
                  vmulq_n_f32(v5,
                              (float)(a4 * a4) *
                                  (float)((float)(0x1.0000000000000p+0f - a4) *
                                          (float)((float)(v4 * v4) *
                                                  0x1.4000000000000p+3f)))))));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620070(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float v5;
  float32x4_t result;

  v4 = vsubq_f32(*a2, *a1);
  v5 = 0x1.0000000000000p+0f - a4;
  result = vaddq_f32(
      vmulq_n_f32(v4, (float)(a4 * a4) * (float)(a4 * (float)(a4 * a4))),
      vaddq_f32(
          vmulq_n_f32(v4,
                      (float)(a4 * a4) *
                          (float)((float)(a4 * a4) *
                                  (float)((float)(0x1.0000000000000p+0f - a4) *
                                          0x1.4000000000000p+2f))),
          vaddq_f32(
              vmulq_n_f32(v4, (float)(a4 * a4) *
                                  (float)(a4 * (float)((float)(v5 * v5) *
                                                       0x1.4000000000000p+3f))),
              vaddq_f32(
                  vmulq_n_f32(v4, a4 * (float)((float)(v5 * v5) *
                                               (float)((float)(v5 * v5) *
                                                       0x1.4000000000000p+2f))),
                  vmulq_n_f32(v4,
                              (float)(a4 * a4) *
                                  (float)((float)(0x1.0000000000000p+0f - a4) *
                                          (float)((float)(v5 * v5) *
                                                  0x1.4000000000000p+3f)))))));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620100(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float v10;
  float32x4_t result;
  float32x4_t v12;
  float v13;
  float v14;

  v4 = *a1;
  LANES128(v5).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v5).n128_u64[1] = 0x3F0000003F000000LL;
  v6 = vaddq_f32(vmulq_f32(*a1, v5), vmulq_f32(*a2, v5));
  if (a4 >= 0x1.0000000000000p-1f) {
    v12 = vsubq_f32(*a2, v6);
    v13 = (float)(a4 + -0x1.0000000000000p-1f) +
          (float)(a4 + -0x1.0000000000000p-1f);
    v14 = 0x1.0000000000000p+0f - v13;
    result = vaddq_f32(
        v6,
        vaddq_f32(
            vmulq_n_f32(v12,
                        (float)(v13 * v13) * (float)(v13 * (float)(v13 * v13))),
            vaddq_f32(
                vmulq_n_f32(
                    v12,
                    (float)(v13 * v13) *
                        (float)((float)(v13 * v13) *
                                (float)((float)(0x1.0000000000000p+0f - v13) *
                                        0x1.4000000000000p+2f))),
                vaddq_f32(
                    vmulq_n_f32(
                        v12, (float)(v13 * v13) *
                                 (float)(v13 * (float)((float)(v14 * v14) *
                                                       0x1.4000000000000p+3f))),
                    vaddq_f32(
                        vmulq_n_f32(
                            v12, v13 * (float)((float)(v14 * v14) *
                                               (float)((float)(v14 * v14) *
                                                       0x1.4000000000000p+2f))),
                        vmulq_n_f32(
                            v12,
                            (float)(v13 * v13) *
                                (float)((float)(0x1.0000000000000p+0f - v13) *
                                        (float)((float)(v14 * v14) *
                                                0x1.4000000000000p+3f))))))));
  }
  else {
    v7 = a4 + a4;
    v8 = vsubq_f32(v6, v4);
    v9 = vsubq_f32(v4, v4);
    v10 = 0x1.0000000000000p+0f - v7;
    result = vaddq_f32(
        vmulq_n_f32(v8, (float)(v7 * v7) * (float)(v7 * (float)(v7 * v7))),
        vaddq_f32(
            vmulq_n_f32(
                v9, (float)(v7 * v7) *
                        (float)((float)(v7 * v7) *
                                (float)((float)(0x1.0000000000000p+0f - v7) *
                                        0x1.4000000000000p+2f))),
            vaddq_f32(
                vmulq_n_f32(v9,
                            (float)(v7 * v7) *
                                (float)(v7 * (float)((float)(v10 * v10) *
                                                     0x1.4000000000000p+3f))),
                vaddq_f32(
                    vmulq_n_f32(v9,
                                v7 * (float)((float)(v10 * v10) *
                                             (float)((float)(v10 * v10) *
                                                     0x1.4000000000000p+2f))),
                    vmulq_n_f32(
                        v9, (float)(v7 * v7) *
                                (float)((float)(0x1.0000000000000p+0f - v7) *
                                        (float)((float)(v10 * v10) *
                                                0x1.4000000000000p+3f)))))));
  }
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620240(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float32x4_t* a4, float32x4_t* a5,
                                            float32x4_t* a6, float a8)
{

#pragma clang fp contract(off)
  float32x4_t* a7 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float v8;
  float32x4_t result;

  v8 = 0x1.0000000000000p+0f - a8;
  result = vaddq_f32(
      vmulq_n_f32(vsubq_f32(*a2, *a1),
                  (float)(a8 * a8) * (float)(a8 * (float)(a8 * a8))),
      vaddq_f32(
          vaddq_f32(
              vaddq_f32(
                  vmulq_n_f32(vsubq_f32(*a3, *a1),
                              a8 * (float)((float)(v8 * v8) *
                                           (float)((float)(v8 * v8) *
                                                   0x1.4000000000000p+2f))),
                  vmulq_n_f32(vsubq_f32(*a4, *a1),
                              (float)(a8 * a8) *
                                  (float)((float)(0x1.0000000000000p+0f - a8) *
                                          (float)((float)(v8 * v8) *
                                                  0x1.4000000000000p+3f)))),
              vmulq_n_f32(vsubq_f32(*a5, *a1),
                          (float)(a8 * a8) *
                              (float)(a8 * (float)((float)(v8 * v8) *
                                                   0x1.4000000000000p+3f)))),
          vmulq_n_f32(vsubq_f32(*a6, *a1),
                      (float)(a8 * a8) *
                          (float)((float)(a8 * a8) *
                                  (float)(v8 * 0x1.4000000000000p+2f)))));
  *a7 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6202f0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float v6;
  float v7;
  float32x4_t* v8;
  double v9;
  double v10;
  float32x4_t result;
  float32x4_t v12;
  float32x4_t v13;

  v4 = *a1;
  v5 = *a2;
  v6 = 0.0;
  v7 = 1.0;
  if (a4 != 0.0) {
    v6 = 1.0;
    v7 = 0.0;
    if (a4 != 1.0) {
      v8 = a3;
      v12 = *a2;
      v13 = *a1;
      v9 = a4 * 0x1.921fb54442d18p+0;
      v6 = sin(v9);
      v10 = cos(v9);
      v5 = v12;
      v4 = v13;
      v7 = v10;
      a3 = v8;
    }
  }
  result = vaddq_f32(vmulq_n_f32(vsubq_f32(v5, v4), 1.0 - v7),
                     vmulq_n_f32(vsubq_f32(v4, v4), (float)(v7 + v6) + -1.0));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6203b0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float v6;
  float v7;
  float32x4_t* v8;
  double v9;
  double v10;
  float32x4_t v11;
  float32x4_t result;
  float32x4_t v13;
  float32x4_t v14;

  v4 = *a1;
  v5 = *a2;
  v6 = 0.0;
  v7 = 1.0;
  if (a4 != 0.0) {
    v6 = 1.0;
    v7 = 0.0;
    if (a4 != 1.0) {
      v8 = a3;
      v13 = *a2;
      v14 = *a1;
      v9 = a4 * 0x1.921fb54442d18p+0;
      v6 = sin(v9);
      v10 = cos(v9);
      v5 = v13;
      v4 = v14;
      v7 = v10;
      a3 = v8;
    }
  }
  v11 = vsubq_f32(v5, v4);
  result = vaddq_f32(vmulq_n_f32(v11, 1.0 - v7),
                     vmulq_n_f32(v11, (float)(v7 + v6) + -1.0));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620470(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float v8;
  float v9;
  float v10;
  float32x4_t* v11;
  double v12;
  double v13;
  float32x4_t v14;
  float v15;
  float v16;
  float v17;
  float32x4_t* v18;
  double v19;
  double v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;

  v4 = *a1;
  v5 = *a2;
  LANES128(v6).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v6).n128_u64[1] = 0x3F0000003F000000LL;
  v7 = vaddq_f32(vmulq_f32(*a1, v6), vmulq_f32(*a2, v6));
  if (a4 >= 0x1.0000000000000p-1) {
    v15 = 0.0;
    v16 = (float)(a4 + -0x1.0000000000000p-1) +
          (float)(a4 + -0x1.0000000000000p-1);
    v17 = 1.0;
    if (v16 != 0.0) {
      v15 = 1.0;
      v17 = 0.0;
      if (v16 != 1.0) {
        v18 = a3;
        v23 = *a2;
        v25 = v7;
        v19 = v16 * 0x1.921fb54442d18p+0;
        v15 = sin(v19);
        v20 = cos(v19);
        v5 = v23;
        v7 = v25;
        v17 = v20;
        a3 = v18;
      }
    }
    v21 = vsubq_f32(v5, v7);
    v14 = vaddq_f32(v7, vaddq_f32(vmulq_n_f32(v21, 1.0 - v17),
                                  vmulq_n_f32(v21, (float)(v17 + v15) + -1.0)));
  }
  else {
    v8 = a4 + a4;
    v9 = 0.0;
    v10 = 1.0;
    if (v8 != 0.0) {
      v9 = 1.0;
      v10 = 0.0;
      if (v8 != 1.0) {
        v11 = a3;
        v22 = *a1;
        v24 = v7;
        v12 = v8 * 0x1.921fb54442d18p+0;
        v9 = sin(v12);
        v13 = cos(v12);
        v4 = v22;
        v7 = v24;
        v10 = v13;
        a3 = v11;
      }
    }
    v14 = vaddq_f32(vmulq_n_f32(vsubq_f32(v7, v4), 1.0 - v10),
                    vmulq_n_f32(vsubq_f32(v4, v4), (float)(v10 + v9) + -1.0));
  }
  *a3 = v14;
}

__attribute__((swiftcall)) void math_6205e0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5)
{
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float v8;
  float v9;
  float32x4_t* v10;
  double v11;
  double v12;
  float32x4_t result;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;

  v5 = *a2;
  v6 = *a1;
  v7 = *a3;
  v8 = 0.0;
  v9 = 1.0;
  if (a5 != 0.0) {
    v8 = 1.0;
    v9 = 0.0;
    if (a5 != 1.0) {
      v10 = a4;
      v15 = *a1;
      v16 = *a2;
      v14 = *a3;
      v11 = a5 * 0x1.921fb54442d18p+0;
      v8 = sin(v11);
      v12 = cos(v11);
      v7 = v14;
      v6 = v15;
      v5 = v16;
      v9 = v12;
      a4 = v10;
    }
  }
  result = vaddq_f32(vmulq_n_f32(vsubq_f32(v5, v6), 1.0 - v9),
                     vmulq_n_f32(vsubq_f32(v7, v6), (float)(v9 + v8) + -1.0));
  *a4 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6206b0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  double v7;
  double v9;
  double v10;
  double v11;
  double v12;
  float v13;
  float v14;
  float32x4_t result;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;

  v4 = *a1;
  v5 = *a2;
  v7 = a4;
  v9 = 0x1.0000000000000p+0 - a4;
  if (a4 == 0x0.0p+0f) {
    v10 = 0x1.0000000000000p-10;
  }
  else {
    v16 = *a2;
    v18 = *a1;
    v11 = exp2(v9 * -0x1.4000000000000p+3);
    v5 = v16;
    v4 = v18;
    v10 = v11;
  }
  if (a4 == 0x1.0000000000000p+0f) {
    v12 = 0x1.0000000000000p-10;
  }
  else {
    v17 = v5;
    v19 = v4;
    v12 = exp2(v7 * -0x1.4000000000000p+3);
    v5 = v17;
    v4 = v19;
  }
  v13 = v12 - v7 * 0x1.0000000000000p-10;
  v14 = v10 - v9 * 0x1.0000000000000p-10;
  result = vaddq_f32(vmulq_n_f32(vsubq_f32(v5, v4), v14),
                     vmulq_n_f32(vsubq_f32(v4, v4),
                                 (float)(0x1.0000000000000p+0f - v13) - v14));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_6207a0(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v4;
  float32x4_t v5;
  double v7;
  double v9;
  double v10;
  double v11;
  double v12;
  float32x4_t v13;
  float v14;
  float v15;
  float32x4_t result;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;

  v4 = *a1;
  v5 = *a2;
  v7 = a4;
  v9 = 0x1.0000000000000p+0 - a4;
  if (a4 == 0x0.0p+0f) {
    v10 = 0x1.0000000000000p-10;
  }
  else {
    v17 = *a2;
    v19 = *a1;
    v11 = exp2(v9 * -0x1.4000000000000p+3);
    v5 = v17;
    v4 = v19;
    v10 = v11;
  }
  if (a4 == 0x1.0000000000000p+0f) {
    v12 = 0x1.0000000000000p-10;
  }
  else {
    v18 = v5;
    v20 = v4;
    v12 = exp2(v7 * -0x1.4000000000000p+3);
    v5 = v18;
    v4 = v20;
  }
  v13 = vsubq_f32(v5, v4);
  v14 = v12 - v7 * 0x1.0000000000000p-10;
  v15 = v10 - v9 * 0x1.0000000000000p-10;
  result =
      vaddq_f32(vmulq_n_f32(v13, v15),
                vmulq_n_f32(v13, (float)(0x1.0000000000000p+0f - v14) - v15));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620a40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            float a5)
{
  float32x4_t* a4 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  double v9;
  double v11;
  double v12;
  double v13;
  double v14;
  float v15;
  float v16;
  float32x4_t result;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;

  v5 = *a2;
  v6 = *a1;
  v7 = *a3;
  v9 = a5;
  v11 = 0x1.0000000000000p+0 - a5;
  if (a5 == 0x0.0p+0f) {
    v12 = 0x1.0000000000000p-10;
  }
  else {
    v20 = *a1;
    v22 = *a2;
    v18 = *a3;
    v13 = exp2(v11 * -0x1.4000000000000p+3);
    v7 = v18;
    v6 = v20;
    v5 = v22;
    v12 = v13;
  }
  if (a5 == 0x1.0000000000000p+0f) {
    v14 = 0x1.0000000000000p-10;
  }
  else {
    v21 = v6;
    v23 = v5;
    v19 = v7;
    v14 = exp2(v9 * -0x1.4000000000000p+3);
    v7 = v19;
    v6 = v21;
    v5 = v23;
  }
  v15 = v14 - v9 * 0x1.0000000000000p-10;
  v16 = v12 - v11 * 0x1.0000000000000p-10;
  result = vaddq_f32(vmulq_n_f32(vsubq_f32(v5, v6), v16),
                     vmulq_n_f32(vsubq_f32(v7, v6),
                                 (float)(0x1.0000000000000p+0f - v15) - v16));
  *a4 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620b40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  double v4;
  float v5;
  float32x4_t result;

  v4 = a4;
  v5 = sqrt(0x1.0000000000000p+0 - v4 * v4);
  *(float*)&v4 = sqrt(0x1.0000000000000p+0 - (v4 + -0x1.0000000000000p+0) *
                                                 (v4 + -0x1.0000000000000p+0));
  result =
      vsubq_f32(vmulq_n_f32(vsubq_f32(*a1, *a1), (float)(v5 + *(float*)&v4) +
                                                     -0x1.0000000000000p+0f),
                vmulq_n_f32(vsubq_f32(*a2, *a1), v5 + -0x1.0000000000000p+0f));
  *a3 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void math_620c10(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  double v4;
  float32x4_t v5;
  float v6;
  float32x4_t result;

  v4 = a4;
  v5 = vsubq_f32(*a2, *a1);
  v6 = sqrt(0x1.0000000000000p+0 - v4 * v4);
  *(float*)&v4 = sqrt(0x1.0000000000000p+0 - (v4 + -0x1.0000000000000p+0) *
                                                 (v4 + -0x1.0000000000000p+0));
  result = vsubq_f32(
      vmulq_n_f32(v5, (float)(v6 + *(float*)&v4) + -0x1.0000000000000p+0f),
      vmulq_n_f32(v5, v6 + -0x1.0000000000000p+0f));
  *a3 = result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
