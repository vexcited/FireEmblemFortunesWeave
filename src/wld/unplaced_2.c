#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct wld_xy {
  float x;
  float y;
};

__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromAxisAngle(PSEUDO_X8, _QWORD,
                                                        float);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, _QWORD, _QWORD,
                                                long double);
unsigned int wld_Crc32(int, const char*, unsigned __int64);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_1b5e520;
extern _UNKNOWN GameData_21a5680;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a5670;
extern int* GameData_212df08;
float cosf(float);
float math_Vec3_Angle(_QWORD, _QWORD);
float sinf(float);
__int64 wld_a7fed0(float32x4_t* a1, __int64 a2, __int64 a3, long double a4,
                   float a5);
float32x4_t wld_bd2320(__int64 a1, float32x2_t* a2, char a3);

__int64 wld_a7fed0(float32x4_t* a1, __int64 a2, __int64 a3, long double a4,
                   float a5)
{
  int v5;
  float32x4_t v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  int v19;
  float32x4_t v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __int128 v29;
  int8x16_t v30;
  float32x2_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x2_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  unsigned __int32 v43;
  float32x4_t v44;
  float32x2_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x2_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x2_t v61;
  int32x2_t v62;
  float v63;
  int8x16_t v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float v75;
  float32x4_t v76;
  int8x16_t v77;
  bool v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x2_t v88;
  int32x2_t v89;
  float v90;
  int8x16_t v91;
  float v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  int8x16_t v96;
  float v97;
  float v98;
  float v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float v110;
  int8x16_t v111;
  int8x16_t v112;
  float32x4_t v113;
  int8x16_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  int8x16_t v122;
  float32x2_t v123;
  int32x2_t v124;
  float32x2_t v125;
  float v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float v135;
  float v136;
  float v137;
  float32x4_t v138;
  int8x16_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  int8x16_t v148;
  float32x2_t v149;
  int32x2_t v150;
  float v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  int8x16_t v164;
  float32x4_t v165;
  float32x4_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  int8x16_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  int8x16_t v174;
  float32x4_t v175;
  float32x4_t v176;
  int8x16_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  int32x4_t v184;
  int8x16_t v185;
  int8x16_t v186;
  float32x4_t v187;
  float32x4_t v188;
  int8x16_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  int8x16_t v195;
  float32x2_t v196;
  int32x2_t v197;
  float32x4_t v198;
  float v199;
  int8x16_t v200;
  float v201;
  float32x4_t v202;
  float v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  float32x4_t v207;
  float v208;
  float32x4_t v209;
  int8x16_t v210;
  float32x4_t v211;
  float32x4_t v212;
  float32x4_t v213;
  float32x4_t v214;
  float32x4_t v215;
  float32x4_t v216;
  float32x4_t v217;
  int8x16_t v218;
  float32x2_t v219;
  int32x2_t v220;
  float v221;
  float v222;
  float32x4_t v223;
  float32x4_t v224;
  float32x4_t v225;
  float32x4_t v226;
  float v227;
  float32x4_t v228;
  int8x16_t v229;
  int8x16_t v230;
  float32x4_t v231;
  float32x4_t v232;
  float32x4_t v233;
  float32x4_t v234;
  float32x4_t v235;
  float32x4_t v236;
  float32x4_t v237;
  int8x16_t v238;
  float32x4_t v239;
  float32x4_t v240;
  float32x4_t v241;
  int v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v248;
  float v249;
  float v250;
  float v251;
  float v252;
  float v253;
  float v255;
  float v256;
  int v257;
  __int64 v258;
  int v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  int v264;
  __int64 v265;
  int v266;
  __int64 v267;
  unsigned __int64 v268;
  unsigned __int64 v269;
  float32x4_t v270;
  float32x4_t v271;
  __int128 v272;
  unsigned __int32 v273;
  unsigned __int32 v274;
  float32x4_t v275;
  unsigned __int64 v276;
  unsigned __int32 v277;
  int8x16_t v278;
  float32x4_t v279;
  unsigned __int64 v280;
  unsigned __int64 v281;
  unsigned __int32 v282;
  float32x2_t v283;
  float32x2_t v284;
  float32x4_t v285;
  float v286;
  float v287;
  float32x4_t v288;
  float32x4_t v289;
  float32x4_t v290;
  unsigned __int64 v291;
  unsigned __int64 v292;
  float32x4_t v293;
  int8x16_t v294;
  float32x4_t v295;
  float v296;
  float32x4_t v297;
  int8x16_t v298;
  int8x16_t v299;
  float32x4_t v300;
  int8x16_t v301;
  int8x16_t v302;
  float32x4_t v303;
  float32x4_t v304;
  float32x4_t v305;
  __int128 v307;
  float32x4_t v308;
  int8x16_t v309;
  __int128 v310;
  float32x4_t v311;
  int8x16_t v312;
  float32x4_t v313;
  __int128 v314;
  int8x16_t v315;
  float32x4_t v316[2];

  v5 = *(_DWORD*)(a2 + 8);
  if (v5 == 2) {
    v303 = *(float32x4_t*)(a2 + 32);
    v11 = *(float*)(a2 + 84) * 0x1.1df46a0000000p-6;
    v12 = *(float*)(a2 + 88) * 0x1.1df46a0000000p-6;
    v13 = sinf(v11);
    v14 = cosf(v11);
    v296 = sinf(v12);
    v15 = cosf(v12);
    LANES128(v16).n128_u32[3] = 0;
    v5 = *(_DWORD*)(a2 + 8);
    LANES128(v16).n128_f32[0] = v13 * v15;
    LANES128(v16).n128_f32[1] = v296;
    LANES128(v16).n128_f32[2] = v14 * v15;
    v10 = vsubq_f32(v303,
      vmulq_n_f32(
        vsubq_f32(COERCE_AS(float32x4_t, 0), v16), *(float*)(a2 + 80)));
  }
  else {
    v10 = (__typeof__(v10)){0};
    if (v5 == 0) {
      v10 = *(float32x4_t*)(a2 + 16);
    LABEL_6:
      v17 = *(_OWORD*)(a2 + 48);
      goto LABEL_8;
    }
  }
  if ((v5 & 0xFFFFFFFD) == 0) {
    goto LABEL_6;
  }
  v17 = GameData_1a83610;
LABEL_8:
  v297 = COERCE_AS(float32x4_t, v17);
  if ((v5 & 0xFFFFFFFD) != 0) {
    v18 = COERCE_AS(float32x4_t, GameData_1a83090);
  }
  else {
    v18 = *(float32x4_t*)(a2 + 32);
  }
  v19 = *(_DWORD*)(a3 + 8);
  if (v19 == 2) {
    v304 = v18;
    v290 = *(float32x4_t*)(a3 + 32);
    v293 = v10;
    v21 = *(float*)(a3 + 84) * 0x1.1df46a0000000p-6;
    v22 = *(float*)(a3 + 88) * 0x1.1df46a0000000p-6;
    v23 = sinf(v21);
    v24 = cosf(v21);
    v286 = sinf(v22);
    v25 = cosf(v22);
    LANES128(v26).n128_u32[3] = 0;
    v18 = v304;
    v19 = *(_DWORD*)(a3 + 8);
    LANES128(v26).n128_f32[0] = v23 * v25;
    LANES128(v26).n128_f32[1] = v286;
    LANES128(v26).n128_f32[2] = v24 * v25;
    v10 = v293;
    v20 = vsubq_f32(v290,
      vmulq_n_f32(
        vsubq_f32(COERCE_AS(float32x4_t, 0), v26), *(float*)(a3 + 80)));
  }
  else {
    v20 = (__typeof__(v20)){0};
    if (v19 == 0) {
      v20 = *(float32x4_t*)(a3 + 16);
    LABEL_16:
      v27 = *(float32x4_t*)(a3 + 32);
      goto LABEL_18;
    }
  }
  if ((v19 & 0xFFFFFFFD) == 0) {
    goto LABEL_16;
  }
  v27 = COERCE_AS(float32x4_t, GameData_1a83090);
LABEL_18:
  v28 = vsubq_f32(v18, v10);
  if ((v19 & 0xFFFFFFFD) != 0) {
    v29 = GameData_1a83610;
  }
  else {
    v29 = *(_OWORD*)(a3 + 48);
  }
  v30 = vmulq_f32(v28, v28);
  LANES128(v30).n128_u64[0] = LANES64_OF(
    vadd_f32(
      COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
      COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                                .n64_u64[0];
  LANES64(v31).n64_u64[0] =
    LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                 COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
      .n64_u64[0];
  if (LANES64(v31).n64_f32[0] != 0.0) {
    v32 = vsubq_f32(v27, v20);
    v33 = vmulq_f32(v32, v32);
    LANES128(v33).n128_u64[0] = LANES64_OF(
      vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
        COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                                  .n64_u64[0];
    LANES64(v34).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
        .n64_u64[0];
    if (LANES64(v34).n64_f32[0] != 0.0) {
      LANES128(v35).n128_u64[0] = LANES64(v31).n64_u64[0];
      v305 = v18;
      LANES64(v284).n64_u64[0] = LANES64(v31).n64_u64[0];
      v285 = v27;
      *(float32x2_t*)&LANES128(v35).n128_i8[8] = v31;
      v272 = v29;
      v36 = vrsqrteq_f32(v35);
      v37 = vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v35, v36)));
      v38 = vbicq_s8(
        vmulq_f32(v28, vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v35, v37)))),
        vceqzq_f32(v35));
      LANES128(v39).n128_u64[0] = LANES64(v34).n64_u64[0];
      *(float32x2_t*)&LANES128(v39).n128_i8[8] = v34;
      v282 = LANES128(v38).n128_u32[1];
      v40 = vrsqrteq_f32(v39);
      v41 = vmulq_f32(v40, vrsqrtsq_f32(v40, vmulq_f32(v39, v40)));
      v42 = vbicq_s8(
        vmulq_f32(v32, vmulq_f32(v41, vrsqrtsq_f32(v41, vmulq_f32(v39, v41)))),
        vceqzq_f32(v39));
      LANES128(v44).n128_u64[0] = LANES128(v38).n128_u32[0];
      v43 = LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u32[0];
      LANES128(v44).n128_u64[1] =
        LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u32[0];
      LANES64(v45).n64_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                     COERCE_AS(float32x2_t, 1065353216LL)))
          .n64_u64[0];
      LANES128(v39).n128_u64[0] = LANES64(v45).n64_u64[0];
      v287 = LANES64(v45).n64_f32[0];
      *(float32x2_t*)&LANES128(v39).n128_i8[8] = v45;
      v46 = vrsqrteq_f32(v39);
      v47 = vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v39, v46)));
      LANES64(v283).n64_u64[0] = LANES64(v34).n64_u64[0];
      v48 = vbicq_s8(
        vmulq_f32(vmulq_f32(v47, vrsqrtsq_f32(v47, vmulq_f32(v39, v47))),
          COERCE_AS(float32x4_t, GameData_1a83090)),
        vceqzq_f32(v39));
      v49 = vmulq_f32(v44, v44);
      v278 = v49;
      v315 = v44;
      v316[0] = v48;
      v291 = LANES128(v42).n128_u64[0];
      v294 = v48;
      if (LANES64(v45).n64_f32[0] != 0.0) {
        LANES64(v50).n64_u64[0] = LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                     LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                                    .n64_u64[0];
        LANES128(v51).n128_u64[0] = LANES64_OF(vpadd_f32(v50, v50)).n64_u64[0];
        LANES128(v51).n128_u64[1] = LANES128(v51).n128_u64[0];
        v52 = vrsqrteq_f32(v51);
        v53 = vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v51, v52)));
        v54 =
          vbicq_s8(vmulq_f32(v44,
                     vmulq_f32(v53, vrsqrtsq_f32(v53, vmulq_f32(v51, v53)))),
            vceqzq_f32(v51));
        v315 = v54;
        if (LANES128(v51).n128_f32[0] != 0.0) {
          LANES128(v55).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
          LANES128(v56).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
          LANES128(v57).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
          *(int8x8_t*)&LANES128(v55).n128_i8[8] =
            vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v56).n128_i8[8] =
            vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v57).n128_i8[8] =
            vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v58 = vmulq_f32(v55, v56);
          LANES128(v55).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
          *(int8x8_t*)&LANES128(v55).n128_i8[8] =
            vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v59 = vmlsq_f32(v58, v57, v55);
          v60 = vmulq_f32(v59, v59);
          LANES128(v60).n128_u64[0] = LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                       LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                                        .n64_u64[0];
          LANES64(v61).n64_u64[0] = LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                                      .n64_u64[0];
          if (LANES64(v61).n64_f32[0] > 0.0) {
            v268 = LANES64(v61).n64_u64[0];
            v270 = v59;
            v273 = v43;
            LANES64(v62).n64_f32[0] = math_Vec3_Angle(v316, &v315);
            LANES64(v62).n64_f32[0] = (float)(LANES64(v62).n64_f32[0] * 0.5) +
              (float)(roundf((float)(LANES64(v62).n64_f32[0] * 0.5) *
                        0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
            if (LANES64(v62).n64_f32[0] <= 0x1.921fb60000000p+0) {
              v70 = 0x1.0000000000000p+0;
              if (LANES64(v62).n64_f32[0] >= -0x1.921fb60000000p+0) {
              LABEL_33:
                LANES128(v71).n128_u64[0] = v268;
                LANES128(v42).n128_u32[0] = v291;
                v48 = v294;
                LANES128(v71).n128_u64[1] = v268;
                v43 = v273;
                v72 = vrsqrteq_f32(v71);
                v73 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v71, v72)));
                v74 = vbicq_s8(
                  vmulq_f32(v270,
                    vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v71, v73)))),
                  vceqzq_f32(v71));
                v75 = LANES64(v62).n64_f32[0] * LANES64(v62).n64_f32[0];
                LANES128(v74).n128_f32[3] = v70;
                LANES64(v62).n64_f32[0] = LANES64(v62).n64_f32[0] *
                  (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                       __int128*)0x10LL) +
                                             (_QWORD)GameData_212c190) -
                                    (float)((float)(*(float*)((char*)((
                                                                _UNKNOWN**)0x8LL) +
                                                      (_QWORD)GameData_212c190 +
                                                      4) +
                                              (float)((float)-(
                                                        float)(*(float*)((char*)((
                                                                           _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                   GameData_212c190) -
                                                        (float)((float)(*((float*)
                                                                            GameData_212c190 +
                                                                          1) -
                                                                  (float)(*(float*)
                                                                            GameData_212c190 *
                                                                    (float)(LANES64(
                                                                              v62)
                                                                              .n64_f32
                                                                                [0] *
                                                                      LANES64(
                                                                        v62)
                                                                        .n64_f32
                                                                          [0]))) *
                                                          (float)(LANES64(v62)
                                                                    .n64_f32
                                                                      [0] *
                                                            LANES64(v62)
                                                              .n64_f32[0]))) *
                                                (float)(LANES64(v62)
                                                          .n64_f32[0] *
                                                  LANES64(v62).n64_f32[0]))) *
                                      (float)(LANES64(v62).n64_f32[0] *
                                        LANES64(v62).n64_f32[0]))) *
                            (float)(LANES64(v62).n64_f32[0] *
                              LANES64(v62).n64_f32[0])) +
                    0x1.0000000000000p+0);
                v76 = vdupq_lane_s32(v62, 0);
                LANES128(v76).n128_f32[3] =
                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c188) -
                            (float)((float)(*(float*)((char*)((
                                                        _UNKNOWN**)0x8LL) +
                                              (_QWORD)GameData_212c188 + 4) +
                                      (float)((float)-(
                                                float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                         (_QWORD)
                                                           GameData_212c188) -
                                                (float)((float)(*((float*)
                                                                    GameData_212c188 +
                                                                  1) -
                                                          (float)(*(float*)
                                                                    GameData_212c188 *
                                                            v75)) *
                                                  v75)) *
                                        v75)) *
                              v75)) *
                    v75) +
                  0x1.0000000000000p+0;
                v69 = vmulq_f32(v74, v76);
                goto LABEL_34;
              }
              v63 = -0x1.921fb60000000p+1;
            }
            else {
              v63 = 0x1.921fb60000000p+1;
            }
            LANES64(v62).n64_f32[0] = v63 - LANES64(v62).n64_f32[0];
            v70 = -0x1.0000000000000p+0;
            goto LABEL_33;
          }
          v64 = vmulq_f32(v48, v54);
          LANES128(v64).n128_u64[0] = LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                       LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                                        .n64_u64[0];
          v65 = LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                  .n64_f32[0];
          if (v65 > 0.0) {
            LANES128(v66).n128_u64[0] =
              LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                .n64_u64[0];
            LANES128(v66).n128_u64[1] = LANES128(v66).n128_u64[0];
            v67 = vrsqrteq_f32(v66);
            v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v66, v67)));
            v69 = vmulq_n_f32(
              vbicq_s8(vmulq_f32(
                         vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v66, v68))),
                         COERCE_AS(float32x4_t, GameData_1a83610)),
                vceqzq_f32(v66)),
              (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                         (_QWORD)GameData_212c190) -
                                (float)((float)(*(float*)((char*)((
                                                            _UNKNOWN**)0x8LL) +
                                                  (_QWORD)GameData_212c190 +
                                                  4) +
                                          (float)((float)-(
                                                    float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                               GameData_212c190) -
                                                    (float)((float)(*((float*)
                                                                        GameData_212c190 +
                                                                      1) -
                                                              (float)(*(float*)
                                                                        GameData_212c190 *
                                                                0.0)) *
                                                      0.0)) *
                                            0.0)) *
                                  0.0)) *
                        0.0) +
                0x1.0000000000000p+0) *
                0.0);
            LANES128(v69).n128_f32[3] =
              (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                        (_QWORD)GameData_212c188) -
                        (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                          (_QWORD)GameData_212c188 + 4) +
                                  (float)((float)-(
                                            float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                     (_QWORD)GameData_212c188) -
                                            (float)((float)(*((float*)
                                                                GameData_212c188 +
                                                              1) -
                                                      (float)(*(float*)
                                                                GameData_212c188 *
                                                        0.0)) *
                                              0.0)) *
                                    0.0)) *
                          0.0)) *
                0.0) +
              0x1.0000000000000p+0;
          LABEL_34:
            v314 = (__int128)v69;
          LABEL_35:
            LANES128(v42).n128_u32[1] = 0;
            v316[0] = v48;
            LANES128(v42).n128_u64[1] = v43;
          LABEL_40:
            v77 = vmulq_f32(v42, v42);
            LANES128(v77).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0])))
                                          .n64_u64[0];
            LANES128(v77).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0])))
                                          .n64_u64[0];
            v78 = LANES128(v77).n128_f32[0] == 0.0;
            LANES128(v77).n128_u64[1] = LANES128(v77).n128_u64[0];
            v79 = vrsqrteq_f32(v77);
            v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v77, v79)));
            v81 = vbicq_s8(
              vmulq_f32(
                v42, vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v77, v80)))),
              vceqzq_f32(v77));
            v315 = v81;
            if (!v78) {
              LANES128(v82).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                            .n64_u64[0];
              LANES128(v83).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                            .n64_u64[0];
              LANES128(v84).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                            .n64_u64[0];
              v275 = v42;
              *(int8x8_t*)&LANES128(v82).n128_i8[8] =
                vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              *(int8x8_t*)&LANES128(v83).n128_i8[8] =
                vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v84).n128_i8[8] =
                vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v85 = vmulq_f32(v82, v83);
              LANES128(v82).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                            .n64_u64[0];
              *(int8x8_t*)&LANES128(v82).n128_i8[8] =
                vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v86 = vmlsq_f32(v85, v84, v82);
              v87 = vmulq_f32(v86, v86);
              LANES128(v87).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v87, v87, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0])))
                                            .n64_u64[0];
              LANES64(v88).n64_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0])))
                                          .n64_u64[0];
              if (LANES64(v88).n64_f32[0] > 0.0) {
                v269 = LANES64(v88).n64_u64[0];
                v271 = v86;
                LANES64(v89).n64_f32[0] = math_Vec3_Angle(v316, &v315);
                LANES64(v89).n64_f32[0] =
                  (float)(LANES64(v89).n64_f32[0] * 0.5) +
                  (float)(roundf((float)(LANES64(v89).n64_f32[0] * 0.5) *
                            0x1.45f3060000000p-3) *
                    -0x1.921fb60000000p+2);
                if (LANES64(v89).n64_f32[0] <= 0x1.921fb60000000p+0) {
                  v99 = 0x1.0000000000000p+0;
                  if (LANES64(v89).n64_f32[0] >= -0x1.921fb60000000p+0) {
                  LABEL_49:
                    LANES128(v100).n128_u64[0] = v269;
                    LANES128(v100).n128_u64[1] = v269;
                    v101 = vrsqrteq_f32(v100);
                    v102 = vmulq_f32(
                      v101, vrsqrtsq_f32(v101, vmulq_f32(v100, v101)));
                    v103 =
                      vbicq_s8(vmulq_f32(v271,
                                 vmulq_f32(v102,
                                   vrsqrtsq_f32(v102, vmulq_f32(v100, v102)))),
                        vceqzq_f32(v100));
                    v104 = LANES64(v89).n64_f32[0] * LANES64(v89).n64_f32[0];
                    LANES128(v103).n128_f32[3] = v99;
                    LANES64(v89).n64_f32[0] = LANES64(v89).n64_f32[0] *
                      (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                        (float)((float)(*(float*)((char*)((
                                                                    _UNKNOWN**)0x8LL) +
                                                          (_QWORD)
                                                            GameData_212c190 +
                                                          4) +
                                                  (float)((float)-(
                                                            float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                       GameData_212c190) -
                                                            (float)((float)(*((float*)
                                                                                GameData_212c190 +
                                                                              1) -
                                                                      (float)(*(float*)
                                                                                GameData_212c190 *
                                                                        (float)(LANES64(
                                                                                  v89)
                                                                                  .n64_f32
                                                                                    [0] *
                                                                          LANES64(
                                                                            v89)
                                                                            .n64_f32
                                                                              [0]))) *
                                                              (float)(LANES64(
                                                                        v89)
                                                                        .n64_f32
                                                                          [0] *
                                                                LANES64(v89)
                                                                  .n64_f32
                                                                    [0]))) *
                                                    (float)(LANES64(v89)
                                                              .n64_f32[0] *
                                                      LANES64(v89)
                                                        .n64_f32[0]))) *
                                          (float)(LANES64(v89).n64_f32[0] *
                                            LANES64(v89).n64_f32[0]))) *
                                (float)(LANES64(v89).n64_f32[0] *
                                  LANES64(v89).n64_f32[0])) +
                        0x1.0000000000000p+0);
                    v105 = vdupq_lane_s32(v89, 0);
                    LANES128(v105).n128_f32[3] =
                      (float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                         (_QWORD)GameData_212c188) -
                                (float)((float)(*(float*)((char*)((
                                                            _UNKNOWN**)0x8LL) +
                                                  (_QWORD)GameData_212c188 +
                                                  4) +
                                          (float)((float)-(
                                                    float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                             (_QWORD)
                                                               GameData_212c188) -
                                                    (float)((float)(*((float*)
                                                                        GameData_212c188 +
                                                                      1) -
                                                              (float)(*(float*)
                                                                        GameData_212c188 *
                                                                v104)) *
                                                      v104)) *
                                            v104)) *
                                  v104)) *
                        v104) +
                      0x1.0000000000000p+0;
                    v313 = vmulq_f32(v103, v105);
                    goto LABEL_55;
                  }
                  v90 = -0x1.921fb60000000p+1;
                }
                else {
                  v90 = 0x1.921fb60000000p+1;
                }
                LANES64(v89).n64_f32[0] = v90 - LANES64(v89).n64_f32[0];
                v99 = -0x1.0000000000000p+0;
                goto LABEL_49;
              }
              v91 = vmulq_f32(v48, v81);
              LANES128(v91).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
                                            .n64_u64[0];
              v92 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
                      .n64_f32[0];
              if (v92 > 0.0) {
                LANES128(v93).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                    COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                                              .n64_u64[0];
                LANES128(v93).n128_u64[1] = LANES128(v93).n128_u64[0];
                v94 = vrsqrteq_f32(v93);
                v95 = vmulq_f32(v94, vrsqrtsq_f32(v94, vmulq_f32(v93, v94)));
                v96 = vbicq_s8(
                  vmulq_f32(
                    vmulq_f32(v95, vrsqrtsq_f32(v95, vmulq_f32(v93, v95))),
                    COERCE_AS(float32x4_t, GameData_1a83610)),
                  vceqzq_f32(v93));
                v97 =
                  (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                       __int128*)0x10LL) +
                                             (_QWORD)GameData_212c190) -
                                    (float)((float)(*(float*)((char*)((
                                                                _UNKNOWN**)0x8LL) +
                                                      (_QWORD)GameData_212c190 +
                                                      4) +
                                              (float)((float)-(
                                                        float)(*(float*)((char*)((
                                                                           _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                   GameData_212c190) -
                                                        (float)((float)(*((float*)
                                                                            GameData_212c190 +
                                                                          1) -
                                                                  (float)(*(float*)
                                                                            GameData_212c190 *
                                                                    0.0)) *
                                                          0.0)) *
                                                0.0)) *
                                      0.0)) *
                            0.0) +
                    0x1.0000000000000p+0) *
                  0.0;
                v98 =
                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c188) -
                            (float)((float)(*(float*)((char*)((
                                                        _UNKNOWN**)0x8LL) +
                                              (_QWORD)GameData_212c188 + 4) +
                                      (float)((float)-(
                                                float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                         (_QWORD)
                                                           GameData_212c188) -
                                                (float)((float)(*((float*)
                                                                    GameData_212c188 +
                                                                  1) -
                                                          (float)(*(float*)
                                                                    GameData_212c188 *
                                                            0.0)) *
                                                  0.0)) *
                                        0.0)) *
                              0.0)) *
                    0.0) +
                  0x1.0000000000000p+0;
              LABEL_52:
                v109 = vmulq_n_f32(v96, v97);
                LANES128(v109).n128_f32[3] = v98;
                v313 = v109;
                goto LABEL_55;
              }
              if (v92 < 0.0) {
                LANES128(v106).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                    COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                                               .n64_u64[0];
                LANES128(v106).n128_u64[1] = LANES128(v106).n128_u64[0];
                v107 = vrsqrteq_f32(v106);
                v108 =
                  vmulq_f32(v107, vrsqrtsq_f32(v107, vmulq_f32(v106, v107)));
                v96 = vbicq_s8(
                  vmulq_f32(
                    vmulq_f32(v108, vrsqrtsq_f32(v108, vmulq_f32(v106, v108))),
                    COERCE_AS(float32x4_t, GameData_1a83610)),
                  vceqzq_f32(v106));
                v97 =
                  (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                       __int128*)0x10LL) +
                                             (_QWORD)GameData_212c190) -
                                    (float)((float)(*(float*)((char*)((
                                                                _UNKNOWN**)0x8LL) +
                                                      (_QWORD)GameData_212c190 +
                                                      4) +
                                              (float)((float)-(
                                                        float)(*(float*)((char*)((
                                                                           _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                   GameData_212c190) -
                                                        (float)((float)(*((float*)
                                                                            GameData_212c190 +
                                                                          1) -
                                                                  (float)(*(float*)
                                                                            GameData_212c190 *
                                                                    0x1.3bd3ce0000000p+1)) *
                                                          0x1.3bd3ce0000000p+1)) *
                                                0x1.3bd3ce0000000p+1)) *
                                      0x1.3bd3ce0000000p+1)) *
                            0x1.3bd3ce0000000p+1) +
                    0x1.0000000000000p+0) *
                  0x1.921fb60000000p+0;
                v98 =
                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c188) -
                            (float)((float)(*(float*)((char*)((
                                                        _UNKNOWN**)0x8LL) +
                                              (_QWORD)GameData_212c188 + 4) +
                                      (float)((float)-(
                                                float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                         (_QWORD)
                                                           GameData_212c188) -
                                                (float)((float)(*((float*)
                                                                    GameData_212c188 +
                                                                  1) -
                                                          (float)(*(float*)
                                                                    GameData_212c188 *
                                                            0x1.3bd3ce0000000p+1)) *
                                                  0x1.3bd3ce0000000p+1)) *
                                        0x1.3bd3ce0000000p+1)) *
                              0x1.3bd3ce0000000p+1)) *
                    0x1.3bd3ce0000000p+1) +
                  0x1.0000000000000p+0;
                goto LABEL_52;
              }
            }
          LABEL_53:
            v275 = v42;
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                   memory_order_acquire) &
                  1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a5680) != 0) {
              v262 = *((_QWORD*)GameData_212c2f8 + 1);
              *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
              *((_QWORD*)&GameData_21a5670 + 1) = v262;
              __cxa_guard_release(&GameData_21a5680);
            }
            v313 = COERCE_AS(float32x4_t, GameData_21a5670);
          LABEL_55:
            math_Quat_Slerp((void*)(&v312), &v314, &v313, a4);
            LANES128(v113).n128_u32[1] = v282;
            v110 = v287;
            v112 = vextq_s8(v278, v278, 8u);
            LANES128(v113).n128_u32[0] = 0;
            v111 = v294;
            LANES128(v112).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v278).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v112).n128_u64[0] = LANES64_OF(
              vsqrt_f32(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]))))
                                           .n64_u32[0];
            LANES128(v113).n128_u64[1] = LANES128(v112).n128_u32[0];
            v315 = v113;
            v316[0] = v294;
            if (v287 != 0.0) {
              v114 = vmulq_f32(v113, v113);
              LANES128(v114).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v114, v114, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v114).n128_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v114).n128_u64[0])))
                                             .n64_u64[0];
              v78 = LANES128(v114).n128_f32[0] == 0.0;
              LANES128(v114).n128_u64[1] = LANES128(v114).n128_u64[0];
              v115 = vrsqrteq_f32(v114);
              v116 = vmulq_f32(v115, vrsqrtsq_f32(v115, vmulq_f32(v114, v115)));
              v112 = vbicq_s8(
                vmulq_f32(v113,
                  vmulq_f32(v116, vrsqrtsq_f32(v116, vmulq_f32(v114, v116)))),
                vceqzq_f32(v114));
              v315 = v112;
              if (!v78) {
                LANES128(v117).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v294, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                LANES128(v118).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                LANES128(v119).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                *(int8x8_t*)&LANES128(v117).n128_i8[8] =
                  vqtbl1_s8(v294, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v118).n128_i8[8] =
                  vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v119).n128_i8[8] =
                  vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v120 = vmulq_f32(v117, v118);
                LANES128(v117).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v294, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                *(int8x8_t*)&LANES128(v117).n128_i8[8] =
                  vqtbl1_s8(v294, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v121 = vmlsq_f32(v120, v119, v117);
                v122 = vmulq_f32(v121, v121);
                LANES128(v122).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v122, v122, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])))
                                               .n64_u64[0];
                LANES64(v123).n64_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])))
                                             .n64_u64[0];
                if (LANES64(v123).n64_f32[0] > 0.0) {
                  v281 = LANES64(v123).n64_u64[0];
                  v288 = v121;
                  LANES64(v124).n64_f32[0] = math_Vec3_Angle(v316, &v315);
                  LANES64(v124).n64_f32[0] =
                    (float)(LANES64(v124).n64_f32[0] * 0.5) +
                    (float)(roundf((float)(LANES64(v124).n64_f32[0] * 0.5) *
                              0x1.45f3060000000p-3) *
                      -0x1.921fb60000000p+2);
                  if (LANES64(v124).n64_f32[0] <= 0x1.921fb60000000p+0) {
                    LANES64(v125).n64_u32[1] = HIDWORD(v291);
                    v126 = 0x1.0000000000000p+0;
                    if (LANES64(v124).n64_f32[0] < -0x1.921fb60000000p+0) {
                      LANES64(v124).n64_f32[0] =
                        -0x1.921fb60000000p+1 - LANES64(v124).n64_f32[0];
                      v126 = -0x1.0000000000000p+0;
                    }
                    v111 = v294;
                  }
                  else {
                    LANES64(v125).n64_u32[1] = HIDWORD(v291);
                    v111 = v294;
                    LANES64(v124).n64_f32[0] =
                      0x1.921fb60000000p+1 - LANES64(v124).n64_f32[0];
                    v126 = -0x1.0000000000000p+0;
                  }
                  LANES128(v131).n128_u64[0] = v281;
                  LANES128(v131).n128_u64[1] = v281;
                  v132 = vrsqrteq_f32(v131);
                  v133 =
                    vmulq_f32(v132, vrsqrtsq_f32(v132, vmulq_f32(v131, v132)));
                  v134 =
                    vbicq_s8(vmulq_f32(v288,
                               vmulq_f32(v133,
                                 vrsqrtsq_f32(v133, vmulq_f32(v131, v133)))),
                      vceqzq_f32(v131));
                  v135 = LANES64(v124).n64_f32[0] * LANES64(v124).n64_f32[0];
                  v136 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                    (_QWORD)GameData_212c190 + 4);
                  LANES128(v134).n128_f32[3] = v126;
                  v137 = -(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                    (_QWORD)GameData_212c190) -
                    (float)((float)(*((float*)GameData_212c190 + 1) -
                              (float)(*(float*)GameData_212c190 *
                                (float)(LANES64(v124).n64_f32[0] *
                                  LANES64(v124).n64_f32[0]))) *
                      (float)(LANES64(v124).n64_f32[0] *
                        LANES64(v124).n64_f32[0])));
                  LANES128(v131).n128_u32[0] =
                    *(_DWORD*)((char*)((__int128*)0x10LL) +
                      (_QWORD)GameData_212c190);
                  v316[0] = v111;
                  LANES64(v124).n64_f32[0] = LANES64(v124).n64_f32[0] *
                    (float)((float)((float)-(float)(LANES128(v131).n128_f32[0] -
                                      (float)((float)(v136 +
                                                (float)(v137 *
                                                  (float)(LANES64(v124)
                                                            .n64_f32[0] *
                                                    LANES64(v124)
                                                      .n64_f32[0]))) *
                                        (float)(LANES64(v124).n64_f32[0] *
                                          LANES64(v124).n64_f32[0]))) *
                              (float)(LANES64(v124).n64_f32[0] *
                                LANES64(v124).n64_f32[0])) +
                      0x1.0000000000000p+0);
                  v138 = vdupq_lane_s32(v124, 0);
                  LANES128(v138).n128_f32[3] =
                    (float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
                              (float)((float)(*(float*)((char*)((
                                                          _UNKNOWN**)0x8LL) +
                                                (_QWORD)GameData_212c188 + 4) +
                                        (float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                             GameData_212c188) -
                                                  (float)((float)(*((float*)
                                                                      GameData_212c188 +
                                                                    1) -
                                                            (float)(*(float*)
                                                                      GameData_212c188 *
                                                              v135)) *
                                                    v135)) *
                                          v135)) *
                                v135)) *
                      v135) +
                    0x1.0000000000000p+0;
                  v311 = vmulq_f32(v134, v138);
                  goto LABEL_71;
                }
                v112 = vmulq_f32(v294, v112);
                LANES128(v112).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v112).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
                                               .n64_u64[0];
                if (LANES128(v112).n128_f32[0] > 0.0) {
                  LANES128(v127).n128_u64[0] = LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                      COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                                                 .n64_u64[0];
                  LANES128(v127).n128_u64[1] = LANES128(v127).n128_u64[0];
                  v128 = vrsqrteq_f32(v127);
                  v129 =
                    vmulq_f32(v128, vrsqrtsq_f32(v128, vmulq_f32(v127, v128)));
                  v130 = vmulq_n_f32(
                    vbicq_s8(
                      vmulq_f32(vmulq_f32(v129,
                                  vrsqrtsq_f32(v129, vmulq_f32(v127, v129))),
                        COERCE_AS(float32x4_t, GameData_1a83610)),
                      vceqzq_f32(v127)),
                    (float)((float)((float)-(
                                      float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                      (float)((float)(*(float*)((char*)((
                                                                  _UNKNOWN**)0x8LL) +
                                                        (_QWORD)
                                                          GameData_212c190 +
                                                        4) +
                                                (float)((float)-(
                                                          float)(*(float*)((char*)((
                                                                             _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                     GameData_212c190) -
                                                          (float)((float)(*((float*)
                                                                              GameData_212c190 +
                                                                            1) -
                                                                    (float)(*(float*)
                                                                              GameData_212c190 *
                                                                      0.0)) *
                                                            0.0)) *
                                                  0.0)) *
                                        0.0)) *
                              0.0) +
                      0x1.0000000000000p+0) *
                      0.0);
                  LANES128(v130).n128_f32[3] =
                    (float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
                              (float)((float)(*(float*)((char*)((
                                                          _UNKNOWN**)0x8LL) +
                                                (_QWORD)GameData_212c188 + 4) +
                                        (float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                             GameData_212c188) -
                                                  (float)((float)(*((float*)
                                                                      GameData_212c188 +
                                                                    1) -
                                                            (float)(*(float*)
                                                                      GameData_212c188 *
                                                              0.0)) *
                                                    0.0)) *
                                          0.0)) *
                                0.0)) *
                      0.0) +
                    0x1.0000000000000p+0;
                  v311 = v130;
                LABEL_68:
                  LANES64(v125).n64_u32[1] = HIDWORD(v291);
                  v316[0] = v111;
                LABEL_71:
                  LANES64(v125).n64_u32[0] = 0;
                  v139 = vmulq_f32(v275, v275);
                  LANES128(v139).n128_u64[0] = LANES64_OF(
                    vadd_f32(
                      COERCE_AS(float32x2_t,
                        LANES128_OF(vextq_s8(v139, v139, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v140).n128_u64[0] = LANES64(v125).n64_u64[0];
                  LANES128(v140).n128_u64[1] = LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0]))))
                                                 .n64_u32[0];
                  LANES128(v139).n128_u64[0] = LANES64_OF(
                    vadd_f32(vmul_f32(*(float32x2_t*)&LANES128(v140).n128_i8[8],
                               *(float32x2_t*)&LANES128(v140).n128_i8[8]),
                      vmul_f32(v125, v125)))
                                                 .n64_u64[0];
                  LANES128(v139).n128_u64[0] = LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0])))
                                                 .n64_u64[0];
                  v78 = LANES128(v139).n128_f32[0] == 0.0;
                  LANES128(v139).n128_u64[1] = LANES128(v139).n128_u64[0];
                  v141 = vrsqrteq_f32(v139);
                  v142 =
                    vmulq_f32(v141, vrsqrtsq_f32(v141, vmulq_f32(v139, v141)));
                  v112 =
                    vbicq_s8(vmulq_f32(v140,
                               vmulq_f32(v142,
                                 vrsqrtsq_f32(v142, vmulq_f32(v139, v142)))),
                      vceqzq_f32(v139));
                  v315 = v112;
                  if (!v78) {
                    LANES128(v143).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                   .n64_u64[0];
                    LANES128(v144).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                   .n64_u64[0];
                    LANES128(v145).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v143).n128_i8[8] =
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    *(int8x8_t*)&LANES128(v144).n128_i8[8] =
                      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    *(int8x8_t*)&LANES128(v145).n128_i8[8] =
                      vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v146 = vmulq_f32(v143, v144);
                    LANES128(v143).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v143).n128_i8[8] =
                      vqtbl1_s8(v111, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v147 = vmlsq_f32(v146, v145, v143);
                    v148 = vmulq_f32(v147, v147);
                    LANES128(v148).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v148, v148, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
                                                   .n64_u64[0];
                    LANES64(v149).n64_u64[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0])))
                                                 .n64_u64[0];
                    if (LANES64(v149).n64_f32[0] > 0.0) {
                      v292 = LANES64(v149).n64_u64[0];
                      v295 = v147;
                      LANES64(v150).n64_f32[0] = math_Vec3_Angle(v316, &v315);
                      LANES64(v150).n64_f32[0] =
                        (float)(LANES64(v150).n64_f32[0] * 0.5) +
                        (float)(roundf((float)(LANES64(v150).n64_f32[0] * 0.5) *
                                  0x1.45f3060000000p-3) *
                          -0x1.921fb60000000p+2);
                      if (LANES64(v150).n64_f32[0] <= 0x1.921fb60000000p+0) {
                        v155 = 0x1.0000000000000p+0;
                        if (LANES64(v150).n64_f32[0] >= -0x1.921fb60000000p+0) {
                        LABEL_80:
                          LANES128(v156).n128_u64[0] = v292;
                          LANES128(v156).n128_u64[1] = v292;
                          v157 = vrsqrteq_f32(v156);
                          v158 = vmulq_f32(
                            v157, vrsqrtsq_f32(v157, vmulq_f32(v156, v157)));
                          v159 = vbicq_s8(
                            vmulq_f32(v295,
                              vmulq_f32(v158,
                                vrsqrtsq_f32(v158, vmulq_f32(v156, v158)))),
                            vceqzq_f32(v156));
                          v160 =
                            LANES64(v150).n64_f32[0] * LANES64(v150).n64_f32[0];
                          LANES128(v159).n128_f32[3] = v155;
                          LANES64(v150).n64_f32[0] = LANES64(v150).n64_f32[0] *
                            (float)((float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                       (_QWORD)
                                                         GameData_212c190) -
                                              (float)((float)(*(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                (_QWORD)
                                                                  GameData_212c190 +
                                                                4) +
                                                        (float)((float)-(
                                                                  float)(*(float*)((char*)((
                                                                                     _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                             GameData_212c190) -
                                                                  (float)((float)(*((float*)
                                                                                      GameData_212c190 +
                                                                                    1) -
                                                                            (float)(*(float*)
                                                                                      GameData_212c190 *
                                                                              (float)(LANES64(
                                                                                        v150)
                                                                                        .n64_f32
                                                                                          [0] *
                                                                                LANES64(
                                                                                  v150)
                                                                                  .n64_f32
                                                                                    [0]))) *
                                                                    (float)(LANES64(
                                                                              v150)
                                                                              .n64_f32
                                                                                [0] *
                                                                      LANES64(
                                                                        v150)
                                                                        .n64_f32
                                                                          [0]))) *
                                                          (float)(LANES64(v150)
                                                                    .n64_f32
                                                                      [0] *
                                                            LANES64(v150)
                                                              .n64_f32[0]))) *
                                                (float)(LANES64(v150)
                                                          .n64_f32[0] *
                                                  LANES64(v150).n64_f32[0]))) *
                                      (float)(LANES64(v150).n64_f32[0] *
                                        LANES64(v150).n64_f32[0])) +
                              0x1.0000000000000p+0);
                          v161 = vdupq_lane_s32(v150, 0);
                          LANES128(v161).n128_f32[3] =
                            (float)((float)-(
                                      float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                               (_QWORD)GameData_212c188) -
                                      (float)((float)(*(float*)((char*)((
                                                                  _UNKNOWN**)0x8LL) +
                                                        (_QWORD)
                                                          GameData_212c188 +
                                                        4) +
                                                (float)((float)-(
                                                          float)(*(float*)((char*)((
                                                                             _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                     GameData_212c188) -
                                                          (float)((float)(*((float*)
                                                                              GameData_212c188 +
                                                                            1) -
                                                                    (float)(*(float*)
                                                                              GameData_212c188 *
                                                                      v160)) *
                                                            v160)) *
                                                  v160)) *
                                        v160)) *
                              v160) +
                            0x1.0000000000000p+0;
                          v112 = vmulq_f32(v159, v161);
                          v310 = (__int128)v112;
                          goto LABEL_85;
                        }
                        v151 = -0x1.921fb60000000p+1;
                      }
                      else {
                        v151 = 0x1.921fb60000000p+1;
                      }
                      LANES64(v150).n64_f32[0] =
                        v151 - LANES64(v150).n64_f32[0];
                      v155 = -0x1.0000000000000p+0;
                      goto LABEL_80;
                    }
                    v112 = vmulq_f32(v111, v112);
                    LANES128(v112).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
                                                   .n64_u64[0];
                    LANES128(v112).n128_u64[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
                                                   .n64_u64[0];
                    if (LANES128(v112).n128_f32[0] > 0.0) {
                      LANES128(v152).n128_u64[0] = LANES64_OF(
                        vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                          COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                                                     .n64_u64[0];
                      LANES128(v152).n128_u64[1] = LANES128(v152).n128_u64[0];
                      v153 = vrsqrteq_f32(v152);
                      v154 = vmulq_f32(
                        v153, vrsqrtsq_f32(v153, vmulq_f32(v152, v153)));
                      v112 = vmulq_n_f32(
                        vbicq_s8(vmulq_f32(
                                   vmulq_f32(v154,
                                     vrsqrtsq_f32(v154, vmulq_f32(v152, v154))),
                                   COERCE_AS(float32x4_t, GameData_1a83610)),
                          vceqzq_f32(v152)),
                        (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                   (_QWORD)GameData_212c190) -
                                          (float)((float)(*(float*)((char*)((
                                                                      _UNKNOWN**)0x8LL) +
                                                            (_QWORD)
                                                              GameData_212c190 +
                                                            4) +
                                                    (float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 _UNKNOWN**)0x8LL) +
                                                                       (_QWORD)
                                                                         GameData_212c190) -
                                                              (float)((float)(*((float*)
                                                                                  GameData_212c190 +
                                                                                1) -
                                                                        (float)(*(float*)
                                                                                  GameData_212c190 *
                                                                          0.0)) *
                                                                0.0)) *
                                                      0.0)) *
                                            0.0)) *
                                  0.0) +
                          0x1.0000000000000p+0) *
                          0.0);
                      LANES128(v112).n128_f32[3] =
                        (float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                  (float)((float)(*(float*)((char*)((
                                                              _UNKNOWN**)0x8LL) +
                                                    (_QWORD)GameData_212c188 +
                                                    4) +
                                            (float)((float)-(
                                                      float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                 GameData_212c188) -
                                                      (float)((float)(*((float*)
                                                                          GameData_212c188 +
                                                                        1) -
                                                                (float)(*(float*)
                                                                          GameData_212c188 *
                                                                  0.0)) *
                                                        0.0)) *
                                              0.0)) *
                                    0.0)) *
                          0.0) +
                        0x1.0000000000000p+0;
                      v310 = (__int128)v112;
                      goto LABEL_85;
                    }
                    if (LANES128(v112).n128_f32[0] < 0.0) {
                      math_Quat_FromAxisAngle((void*)(&v310), &GameData_1b5e520,
                        0x1.921fb60000000p+1);
                      goto LABEL_85;
                    }
                  }
                LABEL_83:
                  if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21a5680,
                         memory_order_acquire) &
                        1) == 0 &&
                    (unsigned int)__cxa_guard_acquire(&GameData_21a5680) != 0) {
                    v263 = *((_QWORD*)GameData_212c2f8 + 1);
                    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
                    *((_QWORD*)&GameData_21a5670 + 1) = v263;
                    __cxa_guard_release(&GameData_21a5680);
                  }
                  v310 = GameData_21a5670;
                LABEL_85:
                  LANES128(v112).n128_f32[0] = a5;
                  math_Quat_Slerp(
                    (void*)(&v309), &v311, &v310, *(long double*)&v112);
                  LANES128(v162).n128_u64[0] = 0;
                  LANES128(v163).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
                  v164 =
                    vmulq_f32(v309, COERCE_AS(float32x4_t, GameData_1a829d0));
                  LANES128(v165).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v164, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v165).n128_u64[1] = LANES128(v165).n128_u64[0];
                  LANES128(v166).n128_u64[1] = LANES128(v163).n128_u64[0];
                  *(int8x8_t*)&LANES128(v162).n128_i8[8] =
                    vqtbl1_s8(v164, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v167).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v164, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  v168 = vmlaq_f32(vmulq_f32(v164, v165),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v162, v166));
                  LANES128(v166).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
                  LANES128(v163).n128_u64[1] = LANES128(v166).n128_u64[0];
                  *(int32x2_t*)&LANES128(v166).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v164).n128_u64[0]), 1);
                  LANES128(v162).n128_u64[0] = LANES128(v309).n128_u64[0];
                  v169 =
                    vmlaq_f32(v168, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v166, v167));
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v164, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v166).n128_i8[8] =
                    vqtbl1_s8(v164, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  LANES128(v164).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v309, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v164).n128_u64[1] = LANES128(v164).n128_u64[0];
                  v170 = vmlsq_f32(v169, v166, v163);
                  LANES128(v163).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v309, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v170, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v162).n128_u64[1] = LANES128(v163).n128_u64[0];
                  *(int8x8_t*)&LANES128(v166).n128_i8[8] =
                    vqtbl1_s8(v170, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v167).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v170, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  v171 = vmlaq_f32(vmulq_f32(v164, v170),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v162, v166));
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v309, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int32x2_t*)&LANES128(v167).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v170).n128_u64[0]), 1);
                  LANES128(v163).n128_u64[1] = LANES128(v166).n128_u64[0];
                  LANES128(v166).n128_u64[1] = LANES128(v309).n128_u64[0];
                  LANES128(v172).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v170, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v172).n128_i8[8] =
                    vqtbl1_s8(v170, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  v173 = vmlsq_f32(
                    vmlaq_f32(v171, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v166, v167)),
                    v172, v163);
                  v174 =
                    vmulq_f32(v312, COERCE_AS(float32x4_t, GameData_1a829d0));
                  LANES128(v162).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v174, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v166).n128_u64[0] = LANES128(v173).n128_u64[0];
                  LANES128(v175).n128_u64[0] = LANES128(v173).n128_u64[0];
                  *(int8x8_t*)&LANES128(v162).n128_i8[8] =
                    vqtbl1_s8(v174, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v166).n128_u64[1] = LANES128(v173).n128_u32[2];
                  LANES128(v170).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v167).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  LANES128(v170).n128_u64[1] = LANES128(v170).n128_u64[0];
                  LANES128(v175).n128_u64[1] = LANES128(v167).n128_u64[0];
                  LANES128(v167).n128_u64[1] = LANES128(v166).n128_u64[0];
                  LANES128(v166).n128_u64[1] = LANES128(v173).n128_u64[0];
                  v176 = vmlaq_f32(vmulq_f32(v174, v170),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v175, v162));
                  LANES128(v162).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v174, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  *(int32x2_t*)&LANES128(v162).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v174).n128_u64[0]), 1);
                  LANES128(v173).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v174, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v173).n128_i8[8] =
                    vqtbl1_s8(v174, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  v177 = vmlsq_f32(
                    vmlaq_f32(v176, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v166, v162)),
                    v173, v167);
                  LANES128(v173).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  LANES128(v167).n128_u64[0] = LANES128(v312).n128_u64[0];
                  LANES128(v173).n128_u64[1] = LANES128(v173).n128_u64[0];
                  LANES128(v174).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v177, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v174).n128_i8[8] =
                    vqtbl1_s8(v177, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v166).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v177, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  v178 = vmulq_f32(v173, v177);
                  LANES128(v173).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  LANES128(v167).n128_u64[1] = LANES128(v173).n128_u64[0];
                  v179 =
                    vmlaq_f32(v178, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v167, v174));
                  LANES128(v174).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v312, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int32x2_t*)&LANES128(v166).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v177).n128_u64[0]), 1);
                  LANES128(v173).n128_u64[1] = LANES128(v174).n128_u64[0];
                  LANES128(v174).n128_u64[1] = LANES128(v312).n128_u64[0];
                  LANES128(v172).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v177, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v172).n128_i8[8] =
                    vqtbl1_s8(v177, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  v180 = vmlsq_f32(
                    vmlaq_f32(v179, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v174, v166)),
                    v172, v173);
                  LANES128(v172).n128_u64[0] = LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                      COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
                                                 .n64_u64[0];
                  v78 = LANES128(v172).n128_f32[0] == 0.0;
                  LANES128(v172).n128_u64[1] = LANES128(v172).n128_u64[0];
                  LANES128(v180).n128_u32[3] = 0;
                  v181 = vrsqrteq_f32(v172);
                  v289 = v180;
                  v182 =
                    vmulq_f32(v181, vrsqrtsq_f32(v181, vmulq_f32(v172, v181)));
                  v183 = vmulq_f32(v172, v182);
                  v184 = vceqzq_f32(v172);
                  v185 = vbicq_s8(
                    vmulq_f32(vmulq_f32(v182, vrsqrtsq_f32(v182, v183)),
                      COERCE_AS(float32x4_t, GameData_1a83610)),
                    v184);
                  v316[0] = v185;
                  if (v78) {
                    if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a5680,
                           memory_order_acquire) &
                          1) == 0) {
                      v301 = v185;
                      v264 = __cxa_guard_acquire(&GameData_21a5680);
                      v185 = v301;
                      if (v264 != 0) {
                        v265 = *((_QWORD*)GameData_212c2f8 + 1);
                        *(_QWORD*)&GameData_21a5670 =
                          *(_QWORD*)GameData_212c2f8;
                        *((_QWORD*)&GameData_21a5670 + 1) = v265;
                        __cxa_guard_release(&GameData_21a5680);
                        v185 = v301;
                      }
                    }
                    v316[0] = v185;
                    v308 = COERCE_AS(float32x4_t, GameData_21a5670);
                    goto LABEL_115;
                  }
                  v186 = vmulq_f32(v297, v297);
                  LANES128(v186).n128_u64[0] = LANES64_OF(
                    vadd_f32(
                      COERCE_AS(float32x2_t,
                        LANES128_OF(vextq_s8(v186, v186, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v186).n128_u64[0] = LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v186).n128_u64[0])))
                                                 .n64_u64[0];
                  v78 = LANES128(v186).n128_f32[0] == 0.0;
                  LANES128(v186).n128_u64[1] = LANES128(v186).n128_u64[0];
                  v187 = vrsqrteq_f32(v186);
                  v188 =
                    vmulq_f32(v187, vrsqrtsq_f32(v187, vmulq_f32(v186, v187)));
                  v189 =
                    vbicq_s8(vmulq_f32(v297,
                               vmulq_f32(v188,
                                 vrsqrtsq_f32(v188, vmulq_f32(v186, v188)))),
                      vceqzq_f32(v186));
                  v315 = v189;
                  if (!v78) {
                    LANES128(v190).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v185, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                   .n64_u64[0];
                    LANES128(v191).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v189, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v190).n128_i8[8] =
                      vqtbl1_s8(v185, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    *(int8x8_t*)&LANES128(v191).n128_i8[8] =
                      vqtbl1_s8(v189, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v192 = vmulq_f32(v190, v191);
                    LANES128(v190).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v185, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v190).n128_i8[8] =
                      vqtbl1_s8(v185, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v193).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(v189, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v193).n128_i8[8] =
                      vqtbl1_s8(v189, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v194 = vmlsq_f32(v192, v193, v190);
                    v195 = vmulq_f32(v194, v194);
                    LANES128(v195).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v195, v195, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
                                                   .n64_u64[0];
                    LANES64(v196).n64_u64[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
                                                 .n64_u64[0];
                    if (LANES64(v196).n64_f32[0] > 0.0) {
                      v276 = LANES64(v196).n64_u64[0];
                      v279 = v194;
                      v298 = v185;
                      LANES64(v197).n64_f32[0] = math_Vec3_Angle(v316, &v315);
                      LANES64(v197).n64_f32[0] =
                        (float)(LANES64(v197).n64_f32[0] * 0.5) +
                        (float)(roundf((float)(LANES64(v197).n64_f32[0] * 0.5) *
                                  0x1.45f3060000000p-3) *
                          -0x1.921fb60000000p+2);
                      if (LANES64(v197).n64_f32[0] <= 0x1.921fb60000000p+0) {
                        v198 = COERCE_AS(float32x4_t, v272);
                        v203 = 0x1.0000000000000p+0;
                        if (LANES64(v197).n64_f32[0] >= -0x1.921fb60000000p+0) {
                        LABEL_97:
                          LANES128(v204).n128_u64[0] = v276;
                          LANES128(v204).n128_u64[1] = v276;
                          v205 = vrsqrteq_f32(v204);
                          v206 = vmulq_f32(
                            v205, vrsqrtsq_f32(v205, vmulq_f32(v204, v205)));
                          v207 = vbicq_s8(
                            vmulq_f32(v279,
                              vmulq_f32(v206,
                                vrsqrtsq_f32(v206, vmulq_f32(v204, v206)))),
                            vceqzq_f32(v204));
                          v208 =
                            LANES64(v197).n64_f32[0] * LANES64(v197).n64_f32[0];
                          LANES128(v207).n128_f32[3] = v203;
                          LANES64(v197).n64_f32[0] = LANES64(v197).n64_f32[0] *
                            (float)((float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                       (_QWORD)
                                                         GameData_212c190) -
                                              (float)((float)(*(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                (_QWORD)
                                                                  GameData_212c190 +
                                                                4) +
                                                        (float)((float)-(
                                                                  float)(*(float*)((char*)((
                                                                                     _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                             GameData_212c190) -
                                                                  (float)((float)(*((float*)
                                                                                      GameData_212c190 +
                                                                                    1) -
                                                                            (float)(*(float*)
                                                                                      GameData_212c190 *
                                                                              (float)(LANES64(
                                                                                        v197)
                                                                                        .n64_f32
                                                                                          [0] *
                                                                                LANES64(
                                                                                  v197)
                                                                                  .n64_f32
                                                                                    [0]))) *
                                                                    (float)(LANES64(
                                                                              v197)
                                                                              .n64_f32
                                                                                [0] *
                                                                      LANES64(
                                                                        v197)
                                                                        .n64_f32
                                                                          [0]))) *
                                                          (float)(LANES64(v197)
                                                                    .n64_f32
                                                                      [0] *
                                                            LANES64(v197)
                                                              .n64_f32[0]))) *
                                                (float)(LANES64(v197)
                                                          .n64_f32[0] *
                                                  LANES64(v197).n64_f32[0]))) *
                                      (float)(LANES64(v197).n64_f32[0] *
                                        LANES64(v197).n64_f32[0])) +
                              0x1.0000000000000p+0);
                          v209 = vdupq_lane_s32(v197, 0);
                          v185 = v298;
                          LANES128(v209).n128_f32[3] =
                            (float)((float)-(
                                      float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                               (_QWORD)GameData_212c188) -
                                      (float)((float)(*(float*)((char*)((
                                                                  _UNKNOWN**)0x8LL) +
                                                        (_QWORD)
                                                          GameData_212c188 +
                                                        4) +
                                                (float)((float)-(
                                                          float)(*(float*)((char*)((
                                                                             _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                     GameData_212c188) -
                                                          (float)((float)(*((float*)
                                                                              GameData_212c188 +
                                                                            1) -
                                                                    (float)(*(float*)
                                                                              GameData_212c188 *
                                                                      v208)) *
                                                            v208)) *
                                                  v208)) *
                                        v208)) *
                              v208) +
                            0x1.0000000000000p+0;
                          v308 = vmulq_f32(v207, v209);
                          goto LABEL_103;
                        }
                        v199 = -0x1.921fb60000000p+1;
                      }
                      else {
                        v198 = COERCE_AS(float32x4_t, v272);
                        v199 = 0x1.921fb60000000p+1;
                      }
                      LANES64(v197).n64_f32[0] =
                        v199 - LANES64(v197).n64_f32[0];
                      v203 = -0x1.0000000000000p+0;
                      goto LABEL_97;
                    }
                    v200 = vmulq_f32(v185, v189);
                    LANES128(v200).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v200, v200, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0])))
                                                   .n64_u64[0];
                    v201 = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0])))
                             .n64_f32[0];
                    if (v201 > 0.0) {
                      v202 = vmulq_n_f32(v185,
                        (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                   (_QWORD)GameData_212c190) -
                                          (float)((float)(*(float*)((char*)((
                                                                      _UNKNOWN**)0x8LL) +
                                                            (_QWORD)
                                                              GameData_212c190 +
                                                            4) +
                                                    (float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 _UNKNOWN**)0x8LL) +
                                                                       (_QWORD)
                                                                         GameData_212c190) -
                                                              (float)((float)(*((float*)
                                                                                  GameData_212c190 +
                                                                                1) -
                                                                        (float)(*(float*)
                                                                                  GameData_212c190 *
                                                                          0.0)) *
                                                                0.0)) *
                                                      0.0)) *
                                            0.0)) *
                                  0.0) +
                          0x1.0000000000000p+0) *
                          0.0);
                      LANES128(v202).n128_f32[3] =
                        (float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                  (float)((float)(*(float*)((char*)((
                                                              _UNKNOWN**)0x8LL) +
                                                    (_QWORD)GameData_212c188 +
                                                    4) +
                                            (float)((float)-(
                                                      float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                 GameData_212c188) -
                                                      (float)((float)(*((float*)
                                                                          GameData_212c188 +
                                                                        1) -
                                                                (float)(*(float*)
                                                                          GameData_212c188 *
                                                                  0.0)) *
                                                        0.0)) *
                                              0.0)) *
                                    0.0)) *
                          0.0) +
                        0x1.0000000000000p+0;
                      v308 = v202;
                    LABEL_102:
                      v198 = COERCE_AS(float32x4_t, v272);
                    LABEL_103:
                      v210 = vmulq_f32(v198, v198);
                      LANES128(v210).n128_u64[0] = LANES64_OF(
                        vadd_f32(
                          COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v210, v210, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0])))
                                                     .n64_u64[0];
                      LANES128(v210).n128_u64[0] = LANES64_OF(
                        vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0])))
                                                     .n64_u64[0];
                      v78 = LANES128(v210).n128_f32[0] == 0.0;
                      LANES128(v210).n128_u64[1] = LANES128(v210).n128_u64[0];
                      v211 = vrsqrteq_f32(v210);
                      v212 = vmulq_f32(
                        v211, vrsqrtsq_f32(v211, vmulq_f32(v210, v211)));
                      v184 = vbicq_s8(
                        vmulq_f32(v198,
                          vmulq_f32(
                            v212, vrsqrtsq_f32(v212, vmulq_f32(v210, v212)))),
                        vceqzq_f32(v210));
                      v315 = v184;
                      v316[0] = v185;
                      if (!v78) {
                        LANES128(v213).n128_u64[0] = LANES64_OF(
                          vqtbl1_s8(
                            v185, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                       .n64_u64[0];
                        LANES128(v214).n128_u64[0] = LANES64_OF(
                          vqtbl1_s8(
                            v184, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                       .n64_u64[0];
                        *(int8x8_t*)&LANES128(v213).n128_i8[8] = vqtbl1_s8(
                          v185, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                        *(int8x8_t*)&LANES128(v214).n128_i8[8] = vqtbl1_s8(
                          v184, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                        v215 = vmulq_f32(v213, v214);
                        LANES128(v213).n128_u64[0] = LANES64_OF(
                          vqtbl1_s8(
                            v185, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                       .n64_u64[0];
                        *(int8x8_t*)&LANES128(v213).n128_i8[8] = vqtbl1_s8(
                          v185, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                        LANES128(v216).n128_u64[0] = LANES64_OF(
                          vqtbl1_s8(
                            v184, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                       .n64_u64[0];
                        *(int8x8_t*)&LANES128(v216).n128_i8[8] = vqtbl1_s8(
                          v184, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                        v217 = vmlsq_f32(v215, v216, v213);
                        v218 = vmulq_f32(v217, v217);
                        LANES128(v218).n128_u64[0] = LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                     LANES128_OF(vextq_s8(v218, v218, 8u))
                                       .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
                                                       .n64_u64[0];
                        LANES64(v219).n64_u64[0] = LANES64_OF(
                          vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
                                                     .n64_u64[0];
                        if (LANES64(v219).n64_f32[0] > 0.0) {
                          v280 = LANES64(v219).n64_u64[0];
                          v300 = v217;
                          LANES64(v220).n64_f32[0] =
                            math_Vec3_Angle(v316, &v315);
                          LANES64(v220).n64_f32[0] =
                            (float)(LANES64(v220).n64_f32[0] * 0.5) +
                            (float)(roundf(
                                      (float)(LANES64(v220).n64_f32[0] * 0.5) *
                                      0x1.45f3060000000p-3) *
                              -0x1.921fb60000000p+2);
                          if (LANES64(v220).n64_f32[0] <=
                            0x1.921fb60000000p+0) {
                            v222 = 0x1.0000000000000p+0;
                            if (LANES64(v220).n64_f32[0] >=
                              -0x1.921fb60000000p+0) {
                            LABEL_112:
                              LANES128(v223).n128_u64[0] = v280;
                              LANES128(v223).n128_u64[1] = v280;
                              v224 = vrsqrteq_f32(v223);
                              v225 = vmulq_f32(v224,
                                vrsqrtsq_f32(v224, vmulq_f32(v223, v224)));
                              v226 = vbicq_s8(
                                vmulq_f32(v300,
                                  vmulq_f32(v225,
                                    vrsqrtsq_f32(v225, vmulq_f32(v223, v225)))),
                                vceqzq_f32(v223));
                              v227 = LANES64(v220).n64_f32[0] *
                                LANES64(v220).n64_f32[0];
                              LANES128(v226).n128_f32[3] = v222;
                              LANES64(v220).n64_f32[0] =
                                LANES64(v220).n64_f32[0] *
                                (float)((float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                           (_QWORD)
                                                             GameData_212c190) -
                                                  (float)((float)(*(float*)((char*)((
                                                                              _UNKNOWN**)0x8LL) +
                                                                    (_QWORD)
                                                                      GameData_212c190 +
                                                                    4) +
                                                            (float)((float)-(
                                                                      float)(*(float*)((char*)((
                                                                                         _UNKNOWN**)0x8LL) +
                                                                               (_QWORD)
                                                                                 GameData_212c190) -
                                                                      (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                        1) -
                                                                                (float)(*(float*)
                                                                                          GameData_212c190 *
                                                                                  (float)(LANES64(
                                                                                            v220)
                                                                                            .n64_f32
                                                                                              [0] *
                                                                                    LANES64(
                                                                                      v220)
                                                                                      .n64_f32
                                                                                        [0]))) *
                                                                        (float)(LANES64(
                                                                                  v220)
                                                                                  .n64_f32
                                                                                    [0] *
                                                                          LANES64(
                                                                            v220)
                                                                            .n64_f32
                                                                              [0]))) *
                                                              (float)(LANES64(
                                                                        v220)
                                                                        .n64_f32
                                                                          [0] *
                                                                LANES64(v220)
                                                                  .n64_f32
                                                                    [0]))) *
                                                    (float)(LANES64(v220)
                                                              .n64_f32[0] *
                                                      LANES64(v220)
                                                        .n64_f32[0]))) *
                                          (float)(LANES64(v220).n64_f32[0] *
                                            LANES64(v220).n64_f32[0])) +
                                  0x1.0000000000000p+0);
                              v228 = vdupq_lane_s32(v220, 0);
                              LANES128(v228).n128_f32[3] =
                                (float)((float)-(
                                          float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                          (float)((float)(*(float*)((char*)((
                                                                      _UNKNOWN**)0x8LL) +
                                                            (_QWORD)
                                                              GameData_212c188 +
                                                            4) +
                                                    (float)((float)-(
                                                              float)(*(float*)((char*)((
                                                                                 _UNKNOWN**)0x8LL) +
                                                                       (_QWORD)
                                                                         GameData_212c188) -
                                                              (float)((float)(*((float*)
                                                                                  GameData_212c188 +
                                                                                1) -
                                                                        (float)(*(float*)
                                                                                  GameData_212c188 *
                                                                          v227)) *
                                                                v227)) *
                                                      v227)) *
                                            v227)) *
                                  v227) +
                                0x1.0000000000000p+0;
                              v184 = vmulq_f32(v226, v228);
                              v307 = (__int128)v184;
                              goto LABEL_117;
                            }
                            v221 = -0x1.921fb60000000p+1;
                          }
                          else {
                            v221 = 0x1.921fb60000000p+1;
                          }
                          LANES64(v220).n64_f32[0] =
                            v221 - LANES64(v220).n64_f32[0];
                          v222 = -0x1.0000000000000p+0;
                          goto LABEL_112;
                        }
                        v184 = vmulq_f32(v185, v184);
                        LANES128(v184).n128_u64[0] = LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                     LANES128_OF(vextq_s8(v184, v184, 8u))
                                       .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0])))
                                                       .n64_u64[0];
                        LANES128(v184).n128_u64[0] = LANES64_OF(
                          vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0])))
                                                       .n64_u64[0];
                        if (LANES128(v184).n128_f32[0] > 0.0) {
                          v184 = vmulq_n_f32(v185,
                            (float)((float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                       (_QWORD)
                                                         GameData_212c190) -
                                              (float)((float)(*(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                (_QWORD)
                                                                  GameData_212c190 +
                                                                4) +
                                                        (float)((float)-(
                                                                  float)(*(float*)((char*)((
                                                                                     _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                             GameData_212c190) -
                                                                  (float)((float)(*((float*)
                                                                                      GameData_212c190 +
                                                                                    1) -
                                                                            (float)(*(float*)
                                                                                      GameData_212c190 *
                                                                              0.0)) *
                                                                    0.0)) *
                                                          0.0)) *
                                                0.0)) *
                                      0.0) +
                              0x1.0000000000000p+0) *
                              0.0);
                          LANES128(v184).n128_f32[3] =
                            (float)((float)-(
                                      float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                               (_QWORD)GameData_212c188) -
                                      (float)((float)(*(float*)((char*)((
                                                                  _UNKNOWN**)0x8LL) +
                                                        (_QWORD)
                                                          GameData_212c188 +
                                                        4) +
                                                (float)((float)-(
                                                          float)(*(float*)((char*)((
                                                                             _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                     GameData_212c188) -
                                                          (float)((float)(*((float*)
                                                                              GameData_212c188 +
                                                                            1) -
                                                                    (float)(*(float*)
                                                                              GameData_212c188 *
                                                                      0.0)) *
                                                            0.0)) *
                                                  0.0)) *
                                        0.0)) *
                              0.0) +
                            0x1.0000000000000p+0;
                          v307 = (__int128)v184;
                        LABEL_117:
                          LANES128(v184).n128_f32[0] = a5;
                          math_Quat_Slerp(
                            (void*)(v316), &v308, &v307, *(long double*)&v184);
                          v229 = v316[0];
                          v230 = vmulq_f32(
                            v316[0], COERCE_AS(float32x4_t, GameData_1a829d0));
                          LANES128(v231).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                              COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                         .n64_u64[0];
                          LANES128(v232).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                              COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                         .n64_u64[0];
                          LANES128(v233).n128_u64[0] = 0x3F80000000000000LL;
                          LANES128(*(a1)).n128_u32[2] = 0;
                          LANES128(v234).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v230, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                         .n64_u64[0];
                          LANES128(v231).n128_u64[1] =
                            LANES128(v231).n128_u64[0];
                          LANES128(v234).n128_u64[1] =
                            LANES128(v232).n128_u64[0];
                          *(int8x8_t*)&LANES128(v233).n128_i8[8] = vqtbl1_s8(
                            v230, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                          LANES128(v235).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v230, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                         .n64_u64[0];
                          LANES128(v235).n128_u64[1] = 0x3F80000000000000LL;
                          v236 = vmlaq_f32(vmulq_f32(v230, v231),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v233, v234));
                          LANES128(v234).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                              COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                         .n64_u64[0];
                          LANES128(v232).n128_u64[1] =
                            LANES128(v234).n128_u64[0];
                          *(int32x2_t*)&LANES128(v234).n128_i8[8] =
                            vdup_lane_s32(
                              COERCE_AS(int32x2_t, LANES128(v230).n128_u64[0]),
                              1);
                          LANES128(v233).n128_u64[0] =
                            LANES128(v229).n128_u64[0];
                          v237 = vmlaq_f32(v236,
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v234, v235));
                          LANES128(v234).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v230, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                         .n64_u64[0];
                          *(int8x8_t*)&LANES128(v234).n128_i8[8] = vqtbl1_s8(
                            v230, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                          LANES128(v230).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v229, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                         .n64_u64[0];
                          LANES128(v230).n128_u64[1] =
                            LANES128(v230).n128_u64[0];
                          v238 = vmlsq_f32(v237, v234, v232);
                          LANES128(v232).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v229, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                         .n64_u64[0];
                          LANES128(v234).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v238, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                                                         .n64_u64[0];
                          LANES128(v233).n128_u64[1] =
                            LANES128(v232).n128_u64[0];
                          *(int8x8_t*)&LANES128(v234).n128_i8[8] = vqtbl1_s8(
                            v238, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                          LANES128(v235).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v238, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                         .n64_u64[0];
                          v239 = vmlaq_f32(vmulq_f32(v230, v238),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v233, v234));
                          LANES128(v234).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v229, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                         .n64_u64[0];
                          *(int32x2_t*)&LANES128(v235).n128_i8[8] =
                            vdup_lane_s32(
                              COERCE_AS(int32x2_t, LANES128(v238).n128_u64[0]),
                              1);
                          LANES128(v232).n128_u64[1] =
                            LANES128(v234).n128_u64[0];
                          LANES128(v234).n128_u64[1] =
                            LANES128(v229).n128_u64[0];
                          LANES128(v229).n128_u64[0] = LANES64_OF(
                            vqtbl1_s8(
                              v238, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                         .n64_u64[0];
                          *(int8x8_t*)&LANES128(v229).n128_i8[8] = vqtbl1_s8(
                            v238, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                          v240 = vmlsq_f32(
                            vmlaq_f32(v239,
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v234, v235)),
                            v229, v232);
                          LANES128(v240).n128_u32[3] = 0;
                          v241 = vmlaq_n_f32(
                            v305, vsubq_f32(v285, v305), *(float*)&a4);
                          a1[2] = v241;
                          a1[3] = v240;
                          LANES128(v229).n128_u64[0] =
                            LANES64_OF(vsqrt_f32(v284)).n64_u64[0];
                          LANES128(v229).n128_f32[0] =
                            LANES128(v229).n128_f32[0] +
                            (float)(LANES64_OF(vsub_f32(vsqrt_f32(v283),
                                                 COERCE_AS(float32x2_t,
                                                   LANES128(v229).n128_u64[0])))
                                      .n64_f32[0] *
                              *(float*)&a4);
                          LANES128(a1[5]).n128_u32[0] =
                            LANES128(v229).n128_u32[0];
                          a1[1] = vsubq_f32(v241,
                            vmulq_n_f32(v289, LANES128(v229).n128_f32[0]));
                          goto LABEL_118;
                        }
                        if (LANES128(v184).n128_f32[0] < 0.0) {
                          math_Quat_FromAxisAngle((void*)(&v307),
                            &GameData_1b5e520, 0x1.921fb60000000p+1);
                          goto LABEL_117;
                        }
                      }
                    LABEL_115:
                      if ((atomic_load_explicit(
                             (atomic_uchar* volatile)&GameData_21a5680,
                             memory_order_acquire) &
                            1) == 0 &&
                        (unsigned int)__cxa_guard_acquire(&GameData_21a5680) !=
                          0) {
                        v261 = *((_QWORD*)GameData_212c2f8 + 1);
                        *(_QWORD*)&GameData_21a5670 =
                          *(_QWORD*)GameData_212c2f8;
                        *((_QWORD*)&GameData_21a5670 + 1) = v261;
                        __cxa_guard_release(&GameData_21a5680);
                      }
                      v307 = GameData_21a5670;
                      goto LABEL_117;
                    }
                    if (v201 < 0.0) {
                      v299 = v185;
                      math_Quat_FromAxisAngle((void*)(&v308), &GameData_1b5e520,
                        0x1.921fb60000000p+1);
                      v185 = v299;
                      goto LABEL_102;
                    }
                  }
                  if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21a5680,
                         memory_order_acquire) &
                        1) == 0) {
                    v302 = v185;
                    v266 = __cxa_guard_acquire(&GameData_21a5680);
                    v185 = v302;
                    if (v266 != 0) {
                      v267 = *((_QWORD*)GameData_212c2f8 + 1);
                      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
                      *((_QWORD*)&GameData_21a5670 + 1) = v267;
                      __cxa_guard_release(&GameData_21a5680);
                      v185 = v302;
                    }
                  }
                  v308 = COERCE_AS(float32x4_t, GameData_21a5670);
                  goto LABEL_102;
                }
                if (LANES128(v112).n128_f32[0] < 0.0) {
                  math_Quat_FromAxisAngle(
                    (void*)(&v311), &GameData_1b5e520, 0x1.921fb60000000p+1);
                  v111 = v294;
                  goto LABEL_68;
                }
              }
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                   memory_order_acquire) &
                  1) == 0) {
              v259 = __cxa_guard_acquire(&GameData_21a5680);
              v110 = v287;
              v111 = v294;
              if (v259 != 0) {
                v260 = *((_QWORD*)GameData_212c2f8 + 1);
                *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
                *((_QWORD*)&GameData_21a5670 + 1) = v260;
                __cxa_guard_release(&GameData_21a5680);
                v110 = v287;
                v111 = v294;
              }
            }
            LANES64(v125).n64_u32[1] = HIDWORD(v291);
            v316[0] = v111;
            v311 = COERCE_AS(float32x4_t, GameData_21a5670);
            if (v110 == 0.0) {
              goto LABEL_83;
            }
            goto LABEL_71;
          }
          if (v65 < 0.0) {
            v274 = v43;
            math_Quat_FromAxisAngle(
              (void*)(&v314), &GameData_1b5e520, 0x1.921fb60000000p+1);
            v43 = v274;
            LANES128(v42).n128_u32[0] = v291;
            v48 = v294;
            goto LABEL_35;
          }
        }
      }
      if ((atomic_load_explicit(
             (atomic_uchar* volatile)&GameData_21a5680, memory_order_acquire) &
            1) == 0) {
        v277 = v43;
        v257 = __cxa_guard_acquire(&GameData_21a5680);
        v43 = v277;
        LANES64(v45).n64_f32[0] = v287;
        LANES128(v42).n128_u32[0] = v291;
        v48 = v294;
        if (v257 != 0) {
          v258 = *((_QWORD*)GameData_212c2f8 + 1);
          *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
          *((_QWORD*)&GameData_21a5670 + 1) = v258;
          __cxa_guard_release(&GameData_21a5680);
          v43 = v277;
          LANES64(v45).n64_f32[0] = v287;
          LANES128(v42).n128_u32[0] = v291;
          v48 = v294;
        }
      }
      LANES128(v42).n128_u32[1] = 0;
      v314 = GameData_21a5670;
      LANES128(v42).n128_u64[1] = v43;
      v315 = v42;
      v316[0] = v48;
      if (LANES64(v45).n64_f32[0] == 0.0) {
        goto LABEL_53;
      }
      goto LABEL_40;
    }
  }
LABEL_118:
  v242 = *(_DWORD*)(a2 + 92);
  if (v242 == *(_DWORD*)(a3 + 92)) {
    if (v242 == 0) {
      v255 = *(float*)(a2 + 96);
      v256 = *(float*)(a3 + 96) - v255;
      LANES128(a1[5]).n128_u32[3] = 0;
      LANES128(a1[6]).n128_f32[0] = v255 + (float)(v256 * *(float*)&a4);
      if (*(_DWORD*)(a2 + 92) != 1) {
        goto LABEL_122;
      }
      goto LABEL_121;
    }
    if (v242 == 1) {
    LABEL_121:
      v243 = (*(float (**)(__int64))(*(_QWORD*)a2 + 120LL))(a2);
      v244 = (*(float (**)(__int64))(*(_QWORD*)a3 + 120LL))(a3);
      LANES128(a1[5]).n128_u32[3] = 1;
      LANES128(a1[6]).n128_f32[1] =
        v243 + (float)((float)(v244 - v243) * *(float*)&a4);
    }
  }
LABEL_122:
  v245 = (*(struct wld_xy(**)(__int64))(*(_QWORD*)a2 + 80LL))(a2).x;
  v246 =
    v245 +
    (float)((float)((*(struct wld_xy(**)(__int64))(*(_QWORD*)a3 + 80LL))(a3).x -
                    v245) *
            *(float*)&a4);
  v248 = (*(struct wld_xy(**)(__int64))(*(_QWORD*)a2 + 80LL))(a2).y;
  v249 = (*(struct wld_xy(**)(__int64))(*(_QWORD*)a3 + 80LL))(a3).y;
  LANES128(a1[7]).n128_f32[0] = v246;
  LANES128(a1[7]).n128_f32[1] =
    v248 + (float)((float)(v249 - v248) * *(float*)&a4);
  v250 = (*(float (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
  v251 = v250 +
    (float)((float)((*(float (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3)-v250) *
      *(float*)&a4);
  v252 = (*(float (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
  v253 = (*(float (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3);
  LANES128(a1[7]).n128_f32[3] = v251;
  LANES128(a1[8]).n128_f32[0] =
    v252 + (float)((float)(v253 - v252) * *(float*)&a4);
  return GameRoutine_b3aee0(a1);
}

float32x4_t wld_bd2320(__int64 a1, float32x2_t* a2, char a3)
{
  float32x4_t* v3;
  unsigned __int8 explicit;
  int* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  signed __int32 v13;
  float32x4_t* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  float32x4_t v20;
  int8x16_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int8x16_t v46;
  unsigned __int64 v47;
  float32x4_t v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  int8x16_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  int8x16_t v59;
  int8x16_t v60;
  float32x4_t v61;
  int8x16_t v62;
  int8x16_t v63;
  float32x4_t v64;
  int8x16_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  __int64 v70;
  unsigned __int64 v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int32x4_t v75;
  float32x4_t v76;
  int32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  int8x16_t v80;
  float32x4_t v81;
  int8x16_t v82;
  unsigned __int64 v83;
  float32x4_t v84;
  unsigned __int64 v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  unsigned __int64 v95;
  unsigned __int64 v96;
  float32x4_t v97;
  int8x16_t v98;
  unsigned __int64 v99;
  int8x16_t v100;
  int8x16_t v101;
  unsigned __int64 v102;
  int8x16_t v103;
  int8x16_t v104;
  float32x4_t v105;
  float32x4_t v106;
  int8x16_t v107;
  float32x4_t v108;
  int8x16_t v109;
  int8x16_t v110;
  int8x16_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  int32x4_t v118;
  int v119;
  int v120;
  int8x16_t v121;
  float32x4_t v122;
  float32x4_t v123;
  int8x16_t v124;
  int32x4_t v125;
  int8x16_t v126;
  int8x16_t v127;
  int8x16_t v128;
  float32x4_t v129;
  int8x16_t v130;
  unsigned __int64 v131;
  float32x4_t v132;
  float32x4_t v133;
  unsigned __int64 v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  int8x16_t* v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  __int64 v143;
  int8x16_t v144;
  int8x16_t v145;
  int8x16_t v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  int8x16_t v151;
  float32x4_t v152;
  int8x16_t v153;
  float32x4_t v154;
  float32x4_t v155;
  int8x16_t v156;
  int8x16_t v157;
  int8x16_t v158;
  float32x4_t v159;
  float32x4_t v160;
  int8x16_t v161;
  int8x16_t v162;
  float32x4_t v163;
  float32x4_t v164;
  int32x4_t v165;
  int8x16_t v166;
  float32x4_t v167;
  float32x4_t v168;
  int8x16_t v169;
  int32x4_t v170;
  int8x16_t v171;
  int8x16_t v172;
  int8x16_t v173;
  float32x4_t v174;
  int8x16_t v175;
  unsigned __int64 v176;
  float32x4_t v177;
  float32x4_t v178;
  unsigned __int64 v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  _QWORD* v186;
  int8x16_t v187;
  int32x4_t v188;
  int8x16_t v189;
  int8x16_t v190;
  int32x4_t v191;
  float32x4_t v192;
  int8x16_t v193;
  float32x4_t v194;
  int8x16_t v195;
  int8x16_t v196;
  float32x4_t v197;
  float32x4_t v198;
  float32x4_t v199;
  float32x4_t v200;
  float32x4_t v201;
  __int128 v202;
  int8x16x2_t v203;
  int8x16x2_t v204;
  int8x16x2_t v205;
  int8x16x2_t v206;
  int8x16x2_t v207;
  int8x16x2_t v208;
  int8x16x2_t v209;
  int8x16x2_t v210;
  int8x16x2_t v211;

  v3 = *(float32x4_t**)(a1 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v7 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
    *v7 = wld_Crc32(0, "ModelModule", 11);
    __cxa_guard_release(GameData_212df10);
  }
  v8 = LANES128(v3[32]).n128_u64[0];
  v9 = v8;
  while (v9 != LANES128(v3[31]).n128_u64[1]) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16LL;
    v8 -= 16LL;
    if (v10 == *v7) {
      if (LANES128(v3[32]).n128_u64[0] != v8) {
        v11 = *(_QWORD*)(v8 + 8);
        if (v11 != 0) {
          v12 = *(_QWORD*)(v11 + 32);
          v13 = LANES64(a2[3]).n64_i32[0];
          if (v12 != 0 && v13 != -1) {
            v95 = LANES64(*(a2)).n64_u64[0];
            if (LANES64(*(a2)).n64_u64[0] != 0) {
              v96 = *(_QWORD*)(v95 + 152);
              v97 = *(float32x4_t*)(v95 + 160);
              v98 = vmulq_f32(*(float32x4_t*)(v95 + 144),
                              *(float32x4_t*)(v95 + 144));
              LANES128(v199).n128_u64[0] = *(_QWORD*)(v95 + 144);
              LANES128(v199).n128_u64[1] = v96;
              v99 = *(_QWORD*)(v95 + 168);
              v100 = vmulq_f32(v97, v97);
              v101 = vmulq_f32(*(float32x4_t*)(v95 + 176),
                               *(float32x4_t*)(v95 + 176));
              LANES128(v200).n128_u64[0] = *(_QWORD*)(v95 + 160);
              LANES128(v200).n128_u64[1] = v99;
              v102 = *(_QWORD*)(v95 + 184);
              LANES128(v201).n128_u64[0] = *(_QWORD*)(v95 + 176);
              LANES128(v201).n128_u64[1] = v102;
              LANES128(v98).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v98, v98, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0])))
                      .n64_u64[0];
              v103 = vmulq_f32(v199, v199);
              v104 = vmulq_f32(v200, v200);
              LANES128(v100).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v100, v100, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0])))
                      .n64_u64[0];
              v105 = vextq_s8(v103, v103, 8u);
              v106 = vextq_s8(v104, v104, 8u);
              v107 = vmulq_f32(v201, v201);
              v108 = vextq_s8(v107, v107, 8u);
              LANES128(v103).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v104).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v107).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v108).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v106).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v105).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v107).n128_u64[0] = 0;
              v109 = vceqq_f32(v108, v107);
              LANES128(v108).n128_u64[1] = LANES128(v108).n128_u64[0];
              v110 = vceqq_f32(v106, v107);
              LANES128(v106).n128_u64[1] = LANES128(v106).n128_u64[0];
              v111 = vceqq_f32(v105, v107);
              LANES128(v105).n128_u64[1] = LANES128(v105).n128_u64[0];
              v112 = vrsqrteq_f32(v108);
              v113 = vrsqrteq_f32(v106);
              v114 = vrsqrteq_f32(v105);
              LANES128(v98).n128_u64[0] =
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]))))
                      .n64_u32[0] |
                  ((unsigned __int64)LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0]))))
                       .n64_u32[0]
                   << 32);
              v115 = vmulq_f32(v112, vrsqrtsq_f32(v112, vmulq_f32(v108, v112)));
              v116 = vmulq_f32(v113, vrsqrtsq_f32(v113, vmulq_f32(v106, v113)));
              v117 = vmulq_f32(v114, vrsqrtsq_f32(v114, vmulq_f32(v105, v114)));
              LANES128(v101).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v101, v101, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v98).n128_u64[1] =
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]))))
                      .n64_u32[0];
              v196 = v98;
              v191 = *(int32x4_t*)(v95 + 192);
              v193 = *(int8x16_t*)GameData_212c2f8;
              v199 = vbslq_s8(
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t,
                                LANES128_OF(vmvnq_s8(v109)).n128_u64[0]),
                      0),
                  vbicq_s8(
                      vmulq_f32(
                          v199,
                          vmulq_f32(v115,
                                    vrsqrtsq_f32(v115, vmulq_f32(v108, v115)))),
                      vceqzq_f32(v108)),
                  COERCE_AS(int8x16_t, GameData_1a82dd0));
              v200 = vbslq_s8(
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t,
                                LANES128_OF(vmvnq_s8(v110)).n128_u64[0]),
                      0),
                  vbicq_s8(
                      vmulq_f32(
                          v200,
                          vmulq_f32(v116,
                                    vrsqrtsq_f32(v116, vmulq_f32(v106, v116)))),
                      vceqzq_f32(v106)),
                  COERCE_AS(int8x16_t, GameData_1a83610));
              v201 = vbslq_s8(
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t,
                                LANES128_OF(vmvnq_s8(v111)).n128_u64[0]),
                      0),
                  vbicq_s8(
                      vmulq_f32(
                          v201,
                          vmulq_f32(v117,
                                    vrsqrtsq_f32(v117, vmulq_f32(v105, v117)))),
                      vceqzq_f32(v105)),
                  COERCE_AS(int8x16_t, GameData_1a83090));
              v202 = (__typeof__(v202)){0};
              Quat_624bc0((void*)(&v198), &v199);
              LANES128(v118).n128_u32[0] = 0;
              v119 = a3 & 4;
              v120 = a3 & 2;
              v121 = vmulq_f32(v198, v198);
              LANES128(v121).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v121, v121, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v121).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v121).n128_u64[1] = LANES128(v121).n128_u64[0];
              v122 = vrsqrteq_f32(v121);
              v123 = vmulq_f32(v122, vrsqrtsq_f32(v122, vmulq_f32(v121, v122)));
              v124 = vmulq_f32(
                  v198,
                  vmulq_f32(v123, vrsqrtsq_f32(v123, vmulq_f32(v121, v123))));
              v125 = v191;
              LANES128(v125).n128_u32[0] = v119;
              v126 = vdupq_lane_s32(
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vceqq_s32(v125, v118)).n128_u64[0]),
                  0);
              v127 =
                  vbslq_s8(v126, COERCE_AS(int8x16_t, GameData_1a837f0), v196);
              LANES128(v126).n128_u32[0] = v120;
              v128 = vdupq_lane_s32(
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vceqq_s32(v126, v118)).n128_u64[0]),
                  0);
              LANES128(v118).n128_u64[0] = 0;
              v129 = vbslq_s8(
                  v128, v193,
                  vbicq_s8(v124, vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v121)));
              LANES128(v121).n128_u32[0] = 0;
              LANES128(v118).n128_u64[1] = LANES128(v127).n128_u32[2];
              LANES128(v121).n128_u32[1] = LANES128(v127).n128_u32[1];
              LANES128(v126).n128_u32[0] = LANES128(v127).n128_u32[0];
              v130 = v129;
              LANES128(v130).n128_u32[3] = 0;
              v131 = LANES64_OF(vqtbl1_s8(v130, COERCE_AS(int8x8_t,
                                                          0xF0E0D0C03020100LL)))
                         .n64_u64[0];
              LANES128(v132).n128_u64[0] =
                  LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                                  LANES128(v129).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v133).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                      .n64_u64[0];
              v134 = LANES64_OF(vqtbl1_s8(v130, COERCE_AS(int8x8_t,
                                                          0xF0E0D0C07060504LL)))
                         .n64_u64[0];
              LANES128(v132).n128_u64[1] = v131;
              LANES128(v133).n128_u64[1] = v134;
              v135 = vmulq_f32(v132, v132);
              v209.val[1] = vmulq_f32(v133, v133);
              v209.val[0] =
                  vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                            vaddq_f32(vaddq_f32(v209.val[1], v209.val[1]),
                                      vaddq_f32(v135, v135)));
              LANES128(v136).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v136).n128_u64[1] = v131;
              v137 = vmulq_f32(v136, v130);
              LANES128(v130).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v130, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              v138 = vaddq_f32(v137, v137);
              LANES128(v130).n128_u64[1] = v134;
              v139 = (int8x16_t*)GameData_212c2f8;
              v13 = LANES64(a2[3]).n64_i32[0];
              v140 = vmulq_laneq_f32(v130, v129, 3);
              v203.val[1] = vaddq_f32(v140, v140);
              v206.val[0] = vaddq_f32(v138, v203.val[1]);
              v206.val[1] = vsubq_f32(v138, v203.val[1]);
              LANES128(v209.val[1]).n128_u64[0] =
                  LANES64_OF(vqtbl2_s8(v206, COERCE_AS(int8x8_t,
                                                       0x171615140B0A0908LL)))
                      .n64_u64[0];
              LANES128(v203.val[1]).n128_u64[0] =
                  LANES64_OF(vqtbl2_s8(v206, COERCE_AS(int8x8_t,
                                                       0x1B1A191803020100LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v203.val[1]).n128_i8[8] =
                  vqtbl2_s8(v206, COERCE_AS(int8x8_t, 0x706050413121110LL));
              *(int8x8_t*)&LANES128(v209.val[1]).n128_i8[8] =
                  vqtbl2_s8(v206, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
              v203.val[0] = v209.val[0];
              LANES128(v206.val[0]).n128_u64[0] =
                  LANES64_OF(vqtbl2_s8(v203, COERCE_AS(int8x8_t,
                                                       0x1312111003020100LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v206.val[0]).n128_i8[8] =
                  vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
              LANES128(v206.val[1]).n128_u64[0] =
                  LANES64_OF(
                      vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v206.val[1]).n128_i8[8] =
                  vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
              LANES128(v203.val[0]).n128_u64[0] =
                  LANES64_OF(vqtbl2_s8(v209, COERCE_AS(int8x8_t,
                                                       0x1716151413121110LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v203.val[0]).n128_i8[8] =
                  vqtbl2_s8(v209, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
              v203.val[1] =
                  vmlaq_f32(vmlaq_f32(vmulq_n_f32(v206.val[0],
                                                  LANES128(v126).n128_f32[0]),
                                      COERCE_AS(float32x4_t, 0), v206.val[1]),
                            COERCE_AS(float32x4_t, 0), v203.val[0]);
              v141 = vmlaq_f32(
                  vmlaq_lane_f32(
                      vmulq_f32(COERCE_AS(float32x4_t, 0), v206.val[0]),
                      v206.val[1],
                      COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, 0), v203.val[0]);
              v142 = vmlaq_laneq_f32(
                  vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v206.val[0]),
                            COERCE_AS(float32x4_t, 0), v206.val[1]),
                  v203.val[0], v118, 2);
              v197 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v203.val[1]).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v203.val[1]).n128_u64[0]),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v203.val[1], 2);
              v192 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v142).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v142, 2);
              v194 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v141).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v141, 2);
            }
            else {
              v119 = a3 & 4;
              v120 = a3 & 2;
              v139 = (int8x16_t*)GameData_212c2f8;
              v192 = *(float32x4_t*)((char*)((char*)0x20LL) +
                                     (_QWORD)GameData_212c2a0);
              v194 = *((float32x4_t*)GameData_212c2a0 + 1);
              v197 = *(float32x4_t*)GameData_212c2a0;
            }
            v143 = *(_QWORD*)(v12 + 424) + ((__int64)v13 << 6);
            v144 = vmulq_f32(*(float32x4_t*)v143, *(float32x4_t*)v143);
            v188 = *(int32x4_t*)(v143 + 48);
            v189 = *v139;
            v145 = vmulq_f32(*(float32x4_t*)(v143 + 16),
                             *(float32x4_t*)(v143 + 16));
            v146 = vmulq_f32(*(float32x4_t*)(v143 + 32),
                             *(float32x4_t*)(v143 + 32));
            LANES128(v144).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v145).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v146).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v146, v146, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v145).n128_u64[0] =
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]))))
                    .n64_u32[0] |
                ((unsigned __int64)LANES64_OF(
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]))))
                     .n64_u32[0]
                 << 32);
            v147 = *(_QWORD*)(v143 + 24);
            LANES128(v199).n128_u64[1] = *(_QWORD*)(v143 + 8);
            v148 = *(_QWORD*)(v143 + 16);
            LANES128(v145).n128_u64[1] =
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v146).n128_u64[0]))))
                    .n64_u32[0];
            LANES128(v199).n128_u64[0] = *(_QWORD*)v143;
            v149 = *(_QWORD*)(v143 + 40);
            v150 = *(_QWORD*)(v143 + 56);
            LANES128(v200).n128_u64[0] = v148;
            LANES128(v200).n128_u64[1] = v147;
            v187 = v145;
            *((_QWORD*)&v202 + 1) = v150;
            LANES128(v201).n128_u64[1] = v149;
            v151 = vmulq_f32(v199, v199);
            LANES128(v201).n128_u64[0] = *(_QWORD*)(v143 + 32);
            v152 = vextq_s8(v151, v151, 8u);
            LANES128(v151).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v152).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v151).n128_u64[0] = 0;
            v153 = vceqq_f32(v152, v151);
            LANES128(v152).n128_u64[1] = LANES128(v152).n128_u64[0];
            v154 = vrsqrteq_f32(v152);
            v155 = vmulq_f32(v154, vrsqrtsq_f32(v154, vmulq_f32(v152, v154)));
            v156 = vbslq_s8(
                vdupq_lane_s32(
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vmvnq_s8(v153)).n128_u64[0]),
                    0),
                vbicq_s8(vmulq_f32(
                             v199,
                             vmulq_f32(v155, vrsqrtsq_f32(
                                                 v155, vmulq_f32(v152, v155)))),
                         vceqzq_f32(v152)),
                COERCE_AS(int8x16_t, GameData_1a82dd0));
            v157 = vmulq_f32(v200, v200);
            LANES128(v157).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v157, v157, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v157).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
                    .n64_u64[0];
            v158 = vceqq_f32(v157, v151);
            LANES128(v157).n128_u64[1] = LANES128(v157).n128_u64[0];
            v159 = vrsqrteq_f32(v157);
            v160 = vmulq_f32(v159, vrsqrtsq_f32(v159, vmulq_f32(v157, v159)));
            v199 = v156;
            v200 = vbslq_s8(
                vdupq_lane_s32(
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vmvnq_s8(v158)).n128_u64[0]),
                    0),
                vbicq_s8(vmulq_f32(
                             v200,
                             vmulq_f32(v160, vrsqrtsq_f32(
                                                 v160, vmulq_f32(v157, v160)))),
                         vceqzq_f32(v157)),
                COERCE_AS(int8x16_t, GameData_1a83610));
            v161 = vmulq_f32(v201, v201);
            LANES128(v161).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v161, v161, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v161).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0])))
                    .n64_u64[0];
            v162 = vceqq_f32(v161, v151);
            LANES128(v161).n128_u64[1] = LANES128(v161).n128_u64[0];
            v163 = vrsqrteq_f32(v161);
            v164 = vmulq_f32(v163, vrsqrtsq_f32(v163, vmulq_f32(v161, v163)));
            v201 = vbslq_s8(
                vdupq_lane_s32(
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vmvnq_s8(v162)).n128_u64[0]),
                    0),
                vbicq_s8(vmulq_f32(
                             v201,
                             vmulq_f32(v164, vrsqrtsq_f32(
                                                 v164, vmulq_f32(v161, v164)))),
                         vceqzq_f32(v161)),
                COERCE_AS(int8x16_t, GameData_1a83090));
            v202 = (__typeof__(v202)){0};
            Quat_624bc0((void*)(&v198), &v199);
            LANES128(v165).n128_u32[0] = 0;
            v166 = vmulq_f32(v198, v198);
            LANES128(v166).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v166, v166, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v166).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v166).n128_u64[1] = LANES128(v166).n128_u64[0];
            v167 = vrsqrteq_f32(v166);
            v168 = vmulq_f32(v167, vrsqrtsq_f32(v167, vmulq_f32(v166, v167)));
            v169 = vmulq_f32(
                v198,
                vmulq_f32(v168, vrsqrtsq_f32(v168, vmulq_f32(v166, v168))));
            v170 = v188;
            LANES128(v170).n128_u32[0] = v119;
            v171 = vdupq_lane_s32(
                COERCE_AS(int32x2_t,
                          LANES128_OF(vceqq_s32(v170, v165)).n128_u64[0]),
                0);
            v172 = vbslq_s8(v171, COERCE_AS(int8x16_t, GameData_1a837f0), v187);
            LANES128(v171).n128_u32[0] = v120;
            v173 = vdupq_lane_s32(
                COERCE_AS(int32x2_t,
                          LANES128_OF(vceqq_s32(v171, v165)).n128_u64[0]),
                0);
            LANES128(v165).n128_u64[0] = 0;
            v174 = vbslq_s8(
                v173, v189,
                vbicq_s8(v169, vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v166)));
            LANES128(v166).n128_u32[0] = 0;
            LANES128(v165).n128_u64[1] = LANES128(v172).n128_u32[2];
            LANES128(v166).n128_u32[1] = LANES128(v172).n128_u32[1];
            LANES128(v171).n128_u32[0] = LANES128(v172).n128_u32[0];
            v175 = v174;
            LANES128(v175).n128_u32[3] = 0;
            v176 = LANES64_OF(vqtbl1_s8(v175, COERCE_AS(int8x8_t,
                                                        0xF0E0D0C03020100LL)))
                       .n64_u64[0];
            LANES128(v177).n128_u64[0] =
                LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                                LANES128(v174).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v178).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v175, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                    .n64_u64[0];
            v179 = LANES64_OF(vqtbl1_s8(v175, COERCE_AS(int8x8_t,
                                                        0xF0E0D0C07060504LL)))
                       .n64_u64[0];
            LANES128(v177).n128_u64[1] = v176;
            LANES128(v178).n128_u64[1] = v179;
            v180 = vmulq_f32(v177, v177);
            v210.val[1] = vmulq_f32(v178, v178);
            v210.val[0] =
                vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                          vaddq_f32(vaddq_f32(v210.val[1], v210.val[1]),
                                    vaddq_f32(v180, v180)));
            LANES128(v181).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v175, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v181).n128_u64[1] = v176;
            v182 = vmulq_f32(v181, v175);
            LANES128(v175).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v175, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v183 = vaddq_f32(v182, v182);
            LANES128(v175).n128_u64[1] = v179;
            v184 = vmulq_laneq_f32(v175, v174, 3);
            v204.val[1] = vaddq_f32(v184, v184);
            v207.val[0] = vaddq_f32(v183, v204.val[1]);
            v207.val[1] = vsubq_f32(v183, v204.val[1]);
            LANES128(v210.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                    .n64_u64[0];
            LANES128(v204.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v204.val[1]).n128_i8[8] =
                vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0x706050413121110LL));
            *(int8x8_t*)&LANES128(v210.val[1]).n128_i8[8] =
                vqtbl2_s8(v207, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
            v204.val[0] = v210.val[0];
            LANES128(v207.val[0]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v204, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v207.val[0]).n128_i8[8] =
                vqtbl2_s8(v204, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
            LANES128(v207.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v204, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v207.val[1]).n128_i8[8] =
                vqtbl2_s8(v204, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
            LANES128(v204.val[0]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v210, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v204.val[0]).n128_i8[8] =
                vqtbl2_s8(v210, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
            v204.val[1] = vmlaq_f32(
                vmlaq_f32(vmulq_n_f32(v207.val[0], LANES128(v171).n128_f32[0]),
                          COERCE_AS(float32x4_t, 0), v207.val[1]),
                COERCE_AS(float32x4_t, 0), v204.val[0]);
            v210.val[0] = vmlaq_f32(
                vmlaq_lane_f32(
                    vmulq_f32(COERCE_AS(float32x4_t, 0), v207.val[0]),
                    v207.val[1],
                    COERCE_AS(float32x2_t, LANES128(v166).n128_u64[0]), 1),
                COERCE_AS(float32x4_t, 0), v204.val[0]);
            v185 = vmlaq_laneq_f32(
                vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v207.val[0]),
                          COERCE_AS(float32x4_t, 0), v207.val[1]),
                v204.val[0], v165, 2);
            v91 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                LANES128(v210.val[0]).n128_f32[0]),
                    COERCE_AS(float32x4_t, GameData_1a83610),
                    COERCE_AS(float32x2_t, LANES128(v210.val[0]).n128_u64[0]),
                    1),
                COERCE_AS(float32x4_t, GameData_1a83090), v210.val[0], 2);
            v90 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                LANES128(v204.val[1]).n128_f32[0]),
                    COERCE_AS(float32x4_t, GameData_1a83610),
                    COERCE_AS(float32x2_t, LANES128(v204.val[1]).n128_u64[0]),
                    1),
                COERCE_AS(float32x4_t, GameData_1a83090), v204.val[1], 2);
            v92 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                LANES128(v185).n128_f32[0]),
                    COERCE_AS(float32x4_t, GameData_1a83610),
                    COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]), 1),
                COERCE_AS(float32x4_t, GameData_1a83090), v185, 2);
            v93 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v197,
                                COERCE_FLOAT(*(_OWORD*)LANES64(a2[6]).n64_u64)),
                    v194, a2[6], 1),
                v192, *(float32x4_t*)LANES64(a2[6]).n64_u64, 2);
            return vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v90, LANES128(v93).n128_f32[0]), v91,
                    COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]), 1),
                v92, v93, 2);
          }
        }
      }
      break;
    }
  }
  v15 = (float32x4_t*)LANES64(*(a2)).n64_u64[0];
  v195 = *(int8x16_t*)GameData_212c2f8;
  if (LANES64(*(a2)).n64_u64[0] != 0) {
    v16 = LANES128(v15[9]).n128_u64[1];
    v17 = LANES128(v15[10]).n128_u64[0];
    v18 = LANES128(v15[10]).n128_u64[1];
    LANES128(v199).n128_u64[0] = LANES128(v15[9]).n128_u64[0];
    LANES128(v199).n128_u64[1] = v16;
    LANES128(v200).n128_u64[0] = v17;
    LANES128(v200).n128_u64[1] = v18;
    v19 = LANES128(v15[11]).n128_u64[1];
    LANES128(v201).n128_u64[0] = LANES128(v15[11]).n128_u64[0];
    LANES128(v201).n128_u64[1] = v19;
    v20 = v201;
    v21 = vmulq_f32(v199, v199);
    v22 = vmulq_f32(v200, v200);
    v23 = vextq_s8(v21, v21, 8u);
    v24 = vextq_s8(v22, v22, 8u);
    v25 = vmulq_f32(v20, v20);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
            .n64_u64[0];
    LANES128(v24).n128_u64[0] = 0;
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES128(v25).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] = LANES128(v21).n128_u64[0];
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
            .n64_u64[0];
    v27 = vceqq_f32(v21, v24);
    v28 = vceqq_f32(v23, v24);
    LANES128(v48).n128_u64[1] = LANES128(v23).n128_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v21).n128_u64[0];
    v29 = vceqq_f32(v30, v24);
    LANES128(v30).n128_u64[1] = LANES128(v30).n128_u64[0];
    v31 = vrsqrteq_f32(v26);
    v32 = vmulq_f32(v15[9], v15[9]);
    v33 = vmulq_f32(v15[10], v15[10]);
    v34 = vmulq_f32(v31, vrsqrtsq_f32(v31, vmulq_f32(v26, v31)));
    v35 = vmulq_f32(v15[11], v15[11]);
    v36 = vbicq_s8(
        vmulq_f32(v199, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v26, v34)))),
        vceqzq_f32(v26));
    v37 = vrsqrteq_f32(v48);
    v38 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v27)).n128_u64[0]), 0),
        v36, COERCE_AS(int8x16_t, GameData_1a82dd0));
    v39 = vrsqrteq_f32(v30);
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    LANES128(v33).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
            .n64_u64[0];
    v40 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v48, v37)));
    v41 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]))))
              .n64_u32[0];
    v42 = vmulq_f32(v39, vrsqrtsq_f32(v39, vmulq_f32(v30, v39)));
    LANES128(v34).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
            .n64_u64[0];
    v43 = vmulq_f32(v30, v42);
    v45 = LANES128(v15[12]).n128_u64[0];
    v44 = LANES128(v15[12]).n128_u64[1];
    v46 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v28)).n128_u64[0]), 0),
        vbicq_s8(vmulq_f32(v200, vmulq_f32(v40, vrsqrtsq_f32(
                                                    v40, vmulq_f32(v48, v40)))),
                 vceqzq_f32(v48)),
        COERCE_AS(int8x16_t, GameData_1a83610));
    v47 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]))))
              .n64_u32[0];
    *(_QWORD*)&v202 = v45;
    *((_QWORD*)&v202 + 1) = v44;
    LANES128(v48).n128_u64[0] =
        v41 | ((unsigned __int64)LANES64_OF(
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]))))
                   .n64_u32[0]
               << 32);
  }
  else {
    v49 = LANES128(v3[27]).n128_u64[1];
    v50 = LANES128(v3[28]).n128_u64[0];
    v51 = LANES128(v3[28]).n128_u64[1];
    LANES128(v199).n128_u64[0] = LANES128(v3[27]).n128_u64[0];
    LANES128(v199).n128_u64[1] = v49;
    LANES128(v200).n128_u64[0] = v50;
    LANES128(v200).n128_u64[1] = v51;
    v52 = LANES128(v3[29]).n128_u64[1];
    LANES128(v201).n128_u64[0] = LANES128(v3[29]).n128_u64[0];
    LANES128(v201).n128_u64[1] = v52;
    v20 = v201;
    v53 = vmulq_f32(v199, v199);
    v54 = vmulq_f32(v200, v200);
    v55 = vextq_s8(v53, v53, 8u);
    v56 = vextq_s8(v54, v54, 8u);
    v57 = vmulq_f32(v20, v20);
    LANES128(v53).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
            .n64_u64[0];
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0])))
            .n64_u64[0];
    LANES128(v56).n128_u64[0] = 0;
    LANES128(v53).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0])))
            .n64_u64[0];
    LANES128(v58).n128_u64[0] = LANES128(v53).n128_u64[0];
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    v59 = vceqq_f32(v53, v56);
    v60 = vceqq_f32(v55, v56);
    LANES128(v48).n128_u64[1] = LANES128(v55).n128_u64[0];
    LANES128(v58).n128_u64[1] = LANES128(v53).n128_u64[0];
    v29 = vceqq_f32(v30, v56);
    LANES128(v30).n128_u64[1] = LANES128(v30).n128_u64[0];
    v61 = vrsqrteq_f32(v58);
    v62 = vmulq_f32(v3[27], v3[27]);
    v63 = vmulq_f32(v3[28], v3[28]);
    v64 = vmulq_f32(v61, vrsqrtsq_f32(v61, vmulq_f32(v58, v61)));
    v65 = vmulq_f32(v3[29], v3[29]);
    v66 = vbicq_s8(
        vmulq_f32(v199, vmulq_f32(v64, vrsqrtsq_f32(v64, vmulq_f32(v58, v64)))),
        vceqzq_f32(v58));
    v67 = vrsqrteq_f32(v48);
    v38 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v59)).n128_u64[0]), 0),
        v66, COERCE_AS(int8x16_t, GameData_1a82dd0));
    v68 = vrsqrteq_f32(v30);
    LANES128(v62).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
            .n64_u64[0];
    LANES128(v63).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
            .n64_u64[0];
    v69 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v48, v67)));
    v70 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]))))
              .n64_u32[0];
    v42 = vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v30, v68)));
    LANES128(v64).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
            .n64_u64[0];
    v71 = LANES128(v3[30]).n128_u64[1];
    v43 = vmulq_f32(v30, v42);
    *(_QWORD*)&v202 = LANES128(v3[30]).n128_u64[0];
    *((_QWORD*)&v202 + 1) = v71;
    v46 = vbslq_s8(
        vdupq_lane_s32(
            COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v60)).n128_u64[0]), 0),
        vbicq_s8(vmulq_f32(v200, vmulq_f32(v69, vrsqrtsq_f32(
                                                    v69, vmulq_f32(v48, v69)))),
                 vceqzq_f32(v48)),
        COERCE_AS(int8x16_t, GameData_1a83610));
    v47 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]))))
              .n64_u32[0];
    LANES128(v48).n128_u64[0] =
        v70 | ((unsigned __int64)LANES64_OF(
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]))))
                   .n64_u32[0]
               << 32);
  }
  LANES128(v48).n128_u64[1] = v47;
  v190 = v48;
  v199 = v38;
  v200 = v46;
  v201 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v29)).n128_u64[0]), 0),
      vbicq_s8(vmulq_f32(v20, vmulq_f32(v42, vrsqrtsq_f32(v42, v43))),
               vceqzq_f32(v30)),
      COERCE_AS(int8x16_t, GameData_1a83090));
  v202 = (__typeof__(v202)){0};
  Quat_624bc0((void*)(&v198), &v199);
  v72 = vmulq_f32(v198, v198);
  LANES128(v72).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
          .n64_u64[0];
  LANES128(v72).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
          .n64_u64[0];
  LANES128(v72).n128_u64[1] = LANES128(v72).n128_u64[0];
  v73 = vrsqrteq_f32(v72);
  v74 = vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v72, v73)));
  v75 = vrsqrtsq_f32(v74, vmulq_f32(v72, v74));
  v76 = vmulq_f32(v74, v75);
  LANES128(v75).n128_u32[0] = 0;
  LANES128(v77).n128_u32[0] = a3 & 4;
  v78 = vdupq_lane_s32(
      COERCE_AS(int32x2_t, LANES128_OF(vceqq_s32(v77, v75)).n128_u64[0]), 0);
  v79 = vbslq_s8(v78, COERCE_AS(int8x16_t, GameData_1a837f0), v190);
  LANES128(v78).n128_u32[0] = a3 & 2;
  v80 = vdupq_lane_s32(
      COERCE_AS(int32x2_t, LANES128_OF(vceqq_s32(v78, v75)).n128_u64[0]), 0);
  LANES128(v75).n128_u32[0] = 0;
  v81 = vbslq_s8(
      v80, v195,
      vbicq_s8(vmulq_f32(v198, v76), vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v72)));
  LANES128(v76).n128_u64[0] = 0;
  LANES128(v75).n128_u32[1] = LANES128(v79).n128_u32[1];
  v82 = v81;
  LANES128(v78).n128_u32[0] = LANES128(v79).n128_u32[0];
  LANES128(v76).n128_u64[1] = LANES128(v79).n128_u32[2];
  LANES128(v82).n128_u32[3] = 0;
  v83 = LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v79).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v81).n128_u64[0])))
          .n64_u64[0];
  LANES128(v84).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v85 = LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v79).n128_u64[1] = v83;
  LANES128(v84).n128_u64[1] = v85;
  v205.val[1] = vmulq_f32(v79, v79);
  v86 = vmulq_f32(v84, v84);
  v205.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v86, v86), vaddq_f32(v205.val[1], v205.val[1])));
  LANES128(v86).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v86).n128_u64[1] = v83;
  v87 = vmulq_f32(v86, v82);
  v208.val[1] = vaddq_f32(v87, v87);
  LANES128(v82).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v82).n128_u64[1] = v85;
  v88 = vmulq_laneq_f32(v82, v81, 3);
  v89 = vaddq_f32(v88, v88);
  v211.val[0] = vaddq_f32(v208.val[1], v89);
  v211.val[1] = vsubq_f32(v208.val[1], v89);
  LANES128(v208.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v211, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v205.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v211, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v208.val[1]).n128_i8[8] =
      vqtbl2_s8(v211, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v205.val[1]).n128_i8[8] =
      vqtbl2_s8(v211, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v208.val[0] = v205.val[0];
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v89).n128_i8[8] =
      vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v211.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v211.val[0]).n128_i8[8] =
      vqtbl2_s8(v208, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v208.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v205, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v208.val[0]).n128_i8[8] =
      vqtbl2_s8(v205, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v205.val[0] = vmlaq_f32(vmlaq_f32(vmulq_n_f32(v89, LANES128(v78).n128_f32[0]),
                                    COERCE_AS(float32x4_t, 0), v211.val[0]),
                          COERCE_AS(float32x4_t, 0), v208.val[0]);
  v205.val[1] = vmlaq_f32(
      vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v89), v211.val[0],
                     COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, 0), v208.val[0]);
  v208.val[1] =
      vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v89),
                                COERCE_AS(float32x4_t, 0), v211.val[0]),
                      v208.val[0], v76, 2);
  v90 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v205.val[0]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v205.val[0]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v205.val[0], 2);
  v91 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v205.val[1]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v205.val[1]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v205.val[1], 2);
  v92 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v208.val[1]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v208.val[1]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090), v208.val[1], 2);
  v93 = *(float32x4_t*)LANES64(a2[6]).n64_u64;
  return vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v90, LANES128(v93).n128_f32[0]), v91,
                     COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]), 1),
      v92, v93, 2);
}

#pragma GCC visibility pop
