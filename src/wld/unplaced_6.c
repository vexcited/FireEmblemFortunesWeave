#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fd23f0[])();
extern __int64 GameData_212eaf8[7];
extern __int64 GameData_212eb08[5];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c53620();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void wld_c52ad0(PSEUDO_X8 x8_, __int64 a1);
__int64* GameRoutine_b3f940(_QWORD*, const char*);
__int64* GameRoutine_b3fa80(_QWORD*, const char*);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_1a83840;
extern __int64 (*GameData_1fd22d0[])();
extern __int64 (*GameData_1fd2360[])();
extern __int64 (*gfx_light_PointLight_vtable[])();
extern __int64 (*gfx_light_SpotLight_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212e9c8[5];
extern __int64 GameData_212e9d0[4];
float cosf(float);
float sinf(float);
unsigned __int64 GameRoutine_c4c260(_DWORD*, float**);
void GameRoutine_c4c550(float*, float*, _QWORD*, char);
void wld_c4a9a0(__int64* a1, _DWORD* a2);
__attribute__((swiftcall)) void wld_c52150(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void wld_c525f0(PSEUDO_X8 x8_, __int64 a1);

void wld_c4a9a0(__int64* a1, _DWORD* a2)
{
  float32x4_t v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  int* v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  float v20;
  int v21;
  int v22;
  bool v23;
  int v24;
  float v25;
  float v26;
  __int64 v27;
  int v28;
  int* v29;
  int* v30;
  unsigned __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  float32x4_t v36;
  __int128 v37;
  unsigned __int64 v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  int* v44;
  int v45;
  int v46;
  unsigned __int64 v47;
  float v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  float v53;
  __int64 v54;
  unsigned __int64 v55;
  float* v56;
  float* v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float32x4_t v68;
  float v69;
  float v70;
  _QWORD* v71;
  int* v72;
  int* v73;
  unsigned __int64 v74;
  int v75;
  int v76;
  int v77;
  int* v78;
  int v79;
  int v80;
  int v81;
  float v82;
  float v83;
  float* v84;
  float* v85;
  float v86;
  float v87;
  float v88;
  unsigned __int64 v89;
  float v90;
  __int64 v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float32x4_t v97;
  float v98;
  float v99;
  _QWORD* v100;
  char* v101;
  char* v102;
  int v103;
  unsigned __int64 v104;
  int v105;
  int v106;
  __int64 v107;
  _QWORD* v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int* v120;
  int v121;
  int v122;
  int* v123;
  int v124;
  int v125;
  int v126;
  int v127;
  __int64 v128;
  float v129;
  __int64 v130;
  __int64 v131;
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
  __int128 v142;
  float v143;
  float v144;
  __int64 v145;
  __int64 v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  bool v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  _QWORD* v165;
  __int64 v166;
  float v167;
  float* v168;
  float* v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float* v174;
  float* v175;
  float32x4_t v176;
  float v177;
  unsigned __int64 v178;
  float* v179;
  float v180;
  float* v181;
  int v182;
  float v183;
  float v184;
  int v185;
  float v186;
  bool v187;
  float v188;
  float v189;
  __int64 v190;
  float* v191;
  float* v192;
  __int128 v193;
  __int128 v194;
  float32x4_t v195;
  unsigned __int64 v196;
  unsigned __int64 v197;
  float32x4_t v198;
  float32x4_t v199;
  int8x16_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float32x4_t v203;
  float32x4_t v204;
  int8x16_t v205;
  float32x4_t v206;
  float32x4_t v207;
  float32x4_t v208;
  int8x16_t v209;
  float32x4_t v210;
  float32x4_t v211;
  int8x16_t v212;
  float v213;
  float v214;
  float v215;
  float v216;
  bool v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float32x4_t v222;
  int8x16_t v223;
  int8x16_t v224;
  float32x4_t v225;
  float32x4_t v226;
  float32x4_t v227;
  int8x16_t v228;
  unsigned __int64 v229;
  float32x4_t v230;
  float32x4_t v231;
  float32x4_t v232;
  float32x4_t v233;
  float32x4_t v234;
  float32x4_t v235;
  float32x4_t v236;
  float32x4_t* v237;
  int16x4_t v238;
  __int64* v239;
  __int64* v240;
  __int64 v241;
  __int64 v242;
  float32x4_t v243;
  float32x4_t v244;
  char v245;
  float32x4_t v246;
  __int64 v247;
  char v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  int v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  unsigned __int64 v260;
  int v261;
  int v262;
  __int64 v263;
  char v264;
  __int64 v265;
  char v266;
  __int64 v267;
  unsigned __int64 v268;
  int v269;
  int v270;
  __int64 v271;
  __int64 v272;
  _BYTE* v273;
  __int64 v274;
  float v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  unsigned __int32 v279;
  __int64 v280;
  float32x2_t v281;
  unsigned __int32 v282;
  __int64 v283;
  unsigned __int32 v284;
  __int64 v285;
  float32x2_t v286;
  unsigned __int32 v287;
  float32x2_t* v288;
  float32x2_t v289;
  float32x2_t v290;
  float32x2_t v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned int v297;
  __int64 v298;
  unsigned __int64 v299;
  float v300;
  unsigned __int64 v301;
  unsigned int v302;
  float v303;
  float v304;
  __int128 v305;
  unsigned int v306;
  float32x4_t v307;
  unsigned int v308;
  unsigned int v309;
  float32x4_t v310;
  float32x4_t v311;
  __int128 v312;
  float v313;
  float v314;
  __int128 v315;
  float v316;
  __int64 v317;
  float v318;
  unsigned int v319;
  unsigned int v320;
  unsigned __int64 v321;
  float32x4_t v322;
  __int128 v323;
  unsigned int v324;
  float v325;
  unsigned int v326;
  unsigned int v327;
  __int128 v328;
  unsigned int v329;
  float v330;
  unsigned int v331;
  float32x4_t v332;
  float32x4_t v333;
  unsigned __int64 v334;
  float v335;
  float v336;
  float v337;
  float v338;
  unsigned __int64 v339;
  __int64 v340;
  __int128 v341;
  __int64 v342;
  __int64 v343;
  struct {
    unsigned __int64 v344;
    int v345;
  } v344_;
  struct {
    unsigned __int64 v346;
    int v347;
  } v346_;

  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = a1[1];
  if (v4 != 0) {
    v6 = std___1___shared_weak_count_lock(v4),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v6 != 0) {
      v7 = *a1;
    }
    else {
      v7 = 0;
    }
  }
  else {
    v6 = 0;
    v7 = 0;
  }
  v8 = (_QWORD*)a1[23];
  v9 = 0x3F8000003F800000LL;
  LANES128(v10).n128_u64[0] = 0x4180000041800000LL;
  LANES128(v10).n128_u64[1] = 0x4180000041800000LL;
  v11 = COERCE_AS(float32x4_t, GameData_1a82c50);
  v12 = 1065353216;
  v322 = v10;
  if (v8 == nullptr || (v13 = (int*)v8[13], v14 = (int*)v8[14], v13 == v14)) {
    v312 = GameData_1a83840;
    v315 = GameData_1a82fa0;
    v341 = (__typeof__(v341)){0};
    v36 = (__typeof__(v36)){0};
    v37 = GameData_1a82c50;
    v334 = 0x3F8000003F800000LL;
    v323 = GameData_1a82c50;
    v321 = 1065353216;
    v317 = 0x3F8000003F800000LL;
    v296 = 1065353216;
    v301 = 0x3F8000003F800000LL;
    v299 = 1065353216;
    goto LABEL_181;
  }
  v15 = *(v14 - 1);
  v16 = 3600 * a2[9] + 60 * a2[10] + a2[11];
  v17 = v16 / (signed __int32)*((_DWORD*)a1 + 54) * *((_DWORD*)a1 + 54);
  v18 = *v13;
  v19 = *v13 <= v16 && v16 <= v15;
  if (!v19) {
    v20 = *((float*)a1 + 49);
    v21 = (v18 + v16 - v15) % 86400 +
          ((v18 + v16 - v15) % 86400 < 0 ? 0x15180 : 0);
    v22 = v16 - v15;
    v23 = __OFSUB__(v18, v16);
    v24 = v18 - v16;
    if ((v24 < 0) ^ v23 | (v24 == 0)) {
      v24 = v22;
    }
    v25 = (float)v24 / 0x1.e000000000000p+4f;
    v26 = (float)v24 / 0x1.6800000000000p+7f;
    if (v25 > 0x1.0000000000000p+0f) {
      v25 = 0x1.0000000000000p+0f;
    }
    if (v26 > 0x1.0000000000000p+0f) {
      v26 = 0x1.0000000000000p+0f;
    }
    *((float*)a1 + 16) = v25 * v25;
    *((float*)a1 + 17) = v26 * v26;
    v27 = v8[19];
    v28 = -991146299 * ((unsigned __int64)(v8[20] - v27) >> 2);
    v29 = (int*)v8[13];
    v30 = (int*)v8[14];
    v31 = (unsigned __int64)((char*)v30 - (char*)v29) >> 2;
    if (v28 >= (int)v31) {
      v32 = (unsigned __int64)((char*)v30 - (char*)v29) >> 2;
    }
    else {
      v32 = v28;
    }
    if (v28 > 0) {
      LODWORD(v31) = v32;
    }
    if (v30 == v29) {
      v34 = 0;
      v35 = 0;
      v33 = 0;
    }
    else {
      v33 = *v29;
      if (*v29 <= v21) {
        if (v29 + 1 == v30) {
          v34 = 1;
          v35 = *v29;
        }
        else {
          v43 = v29[1];
          if (v43 <= v21) {
            v78 = v29 + 2;
            v34 = 2;
            if (v29 + 2 == v30) {
              v35 = v29[1];
              v33 = v35;
            }
            else {
              while (1) {
                v79 = *v78++;
                v33 = v79;
                if (v79 > v21) {
                  break;
                }
                ++v34;
                v43 = v33;
                v35 = v33;
                if (v78 == v30) {
                  goto LABEL_75;
                }
              }
              v35 = v43;
            }
          }
          else {
            v34 = 1;
            v35 = *v29;
            v33 = v29[1];
          }
        }
      }
      else {
        v34 = 0;
        v35 = 0;
      }
    }
  LABEL_75:
    v80 = v34 - 1;
    v81 = v34;
    if (v34 >= (int)v31) {
      v81 = 0;
      v33 = *v29 + 86400;
    }
    if (v34 == 0) {
      v80 = v31 - 1;
      v35 = v29[(int)v31 - 1] - 86400;
    }
    v82 = 0x0.0p+0f;
    v336 = 0x0.0p+0f;
    if (v81 != v80) {
      v83 = (float)(v33 - v35);
      if (v83 < 0x1.a36e2e0000000p-14f) {
        v83 = 0x1.a36e2e0000000p-14f;
      }
      v82 = (float)(v21 - v35) / v83;
    }
    v316 = v20;
    v84 = (float*)(v27 + 52LL * v80);
    v85 = (float*)(v27 + 52LL * v81);
    v86 = v84[6];
    v87 = *v84 + (float)((float)(*v85 - *v84) * v82);
    v88 = v84[1] + (float)((float)(v85[1] - v84[1]) * v82);
    v89 = 0;
    v338 = v84[4] + (float)((float)(v85[4] - v84[4]) * v82);
    v90 = 0x0.0p+0f;
    v330 = v84[5] + (float)((float)(v85[5] - v84[5]) * v82);
    if (*((_BYTE*)a1 + 168) == 1) {
      v336 = v84[7] + (float)((float)(v85[7] - v84[7]) * v82);
      v90 = v84[8] + (float)((float)(v85[8] - v84[8]) * v82);
      HIDWORD(v89) = 0;
      *(float*)&v89 = v84[9] + (float)((float)(v85[9] - v84[9]) * v82);
    }
    v325 = v90;
    v321 = v89;
    v313 = v85[6] - v86;
    *(float*)&v91 = v84[10] + (float)((float)(v85[10] - v84[10]) * v82);
    *((float*)&v91 + 1) = v84[11] + (float)((float)(v85[11] - v84[11]) * v82);
    v92 = v88 * 0x1.1df46a0000000p-6f;
    v304 = v84[12] + (float)((float)(v85[12] - v84[12]) * v82);
    v343 = v91;
    v318 = v84[1] + (float)((float)(v85[1] - v84[1]) * v82);
    v93 = sinf(v88 * 0x1.1df46a0000000p-6f),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)&v306 = -(float)(v93 * cosf(v87 * 0x1.1df46a0000000p-6f)),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)&v302 = -sinf(v87 * 0x1.1df46a0000000p-6f),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v94 = cosf(v92),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v95 = cosf(v87 * 0x1.1df46a0000000p-6f),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LANES128(v97).n128_u32[3] = 0;
    v96 = v94 * v95;
    LANES128(v97).n128_u64[0] = __PAIR64__(v302, v306);
    if (*((_DWORD*)a1 + 12) == v17) {
      v98 = *((float*)a1 + 13);
      v99 = *((float*)a1 + 14);
    LABEL_136:
      LANES128(v97).n128_f32[2] = v96;
      v339 = __PAIR64__(LODWORD(v330), LODWORD(v338));
      v334 = __PAIR64__(LODWORD(v325), LODWORD(v336));
      v314 = v86 + (float)(v313 * v82);
      v332 = v97;
      v151 = sinf(v99 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v327 = -(float)(v151 * cosf(v98 * 0x1.1df46a0000000p-6f)),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v308 = -sinf(v98 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v152 = cosf(v99 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v303 = v152 * cosf(v98 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v153 = v87 < 0x1.99999a0000000p-4f;
      v328 = __PAIR64__(v308, v327);
      v154 = -v87;
      v155 = 0x1.6800000000000p+8f - v318;
      v156 = 0x1.6800000000000p+8f - v99;
      if (v153) {
        v154 = -0x1.99999a0000000p-4f;
      }
      v157 = v155 * 0x1.1df46a0000000p-6f;
      v158 = v154 * 0x1.1df46a0000000p-6f;
      if (v98 >= 0x1.99999a0000000p-4f) {
        v159 = -v98;
      }
      else {
        v159 = -0x1.99999a0000000p-4f;
      }
      v160 = sinf(v155 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v319 = -(float)(v160 * cosf(v158)),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v309 = -sinf(v158),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v161 = cosf(v157),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v300 = v161 * cosf(v158),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v310 = COERCE_AS(float32x4_t, __PAIR64__(v309, v319));
      v162 = sinf(v156 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v320 = -(float)(v162 * cosf(v159 * 0x1.1df46a0000000p-6f)),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v297 = -sinf(v159 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v163 = cosf(v156 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v164 = v163 * cosf(v159 * 0x1.1df46a0000000p-6f),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      HIDWORD(v37) = 0;
      v165 = (_QWORD*)a1[23];
      v166 = v165[22];
      *(_QWORD*)&v37 = __PAIR64__(v297, v320);
      v317 = 0;
      if (v166 == v165[23]) {
        v11 = v332;
        v167 = v316;
        v2 = v310;
        v170 = 0x0.0p+0f;
        v36 = (__typeof__(v36)){0};
      }
      else {
        v167 = v316;
        v168 = (float*)(v166 + 16LL * v80);
        v169 = (float*)(v166 + 16LL * v81);
        v170 = *v168 + (float)((float)(*v169 - *v168) * v82);
        v171 = v168[1] + (float)((float)(v169[1] - v168[1]) * v82);
        v172 = v168[2];
        v173 = v168[3];
        v175 = (float*)v165[25];
        v174 = (float*)v165[26];
        LANES128(v176).n128_f32[0] = v171;
        LANES128(v176).n128_f32[1] =
            v172 + (float)((float)(v169[2] - v172) * v82);
        LANES128(v176).n128_u64[1] =
            COERCE_UNSIGNED_INT(v173 + (float)((float)(v169[3] - v173) * v82));
        v36 = vmulq_f32(v176, v322);
        if (v175 == v174) {
          v11 = v332;
          v2 = v310;
        }
        else {
          v177 = *v175;
          v11 = v332;
          v2 = v310;
          v178 = (unsigned __int64)((char*)v174 - (char*)v175) >> 2;
          if (*v175 > v316) {
            v185 = v178 - 1;
            v182 = 0;
            if ((int)v178 <= 0) {
              v177 = v177 + 0x1.0000000000000p+0f;
            }
            v186 = v175[v185] + -0x1.0000000000000p+0f;
          }
          else {
            v179 = v175 + 1;
            if (v175 + 1 == v174) {
              v185 = 0;
              v182 = 1;
              v186 = *v175;
              v180 = *v175;
            }
            else {
              v180 = *v179;
              if (*v179 > v316) {
                v185 = 0;
                v182 = 1;
                v186 = *v175;
              }
              else {
                v181 = v175 + 2;
                v182 = 2;
                if (v181 == v174) {
                  v185 = 1;
                  v186 = v180;
                }
                else {
                  while (1) {
                    v183 = *v181++;
                    v184 = v183;
                    if (v183 > v316) {
                      break;
                    }
                    v180 = v184;
                    ++v182;
                    if (v181 == v174) {
                      v185 = v182 - 1;
                      v186 = v184;
                      goto LABEL_159;
                    }
                  }
                  v186 = v180;
                  v185 = v182 - 1;
                LABEL_159:
                  v180 = v184;
                }
              }
            }
            v187 = v182 < (int)v178;
            if (v182 >= (int)v178) {
              v182 = 0;
            }
            v177 = v177 + 0x1.0000000000000p+0f;
            if (v187) {
              v177 = v180;
            }
          }
          v188 = 0x0.0p+0f;
          if (v182 != v185) {
            v189 = v177 - v186;
            if (v189 < 0x1.a36e2e0000000p-14f) {
              v189 = 0x1.a36e2e0000000p-14f;
            }
            v188 = (float)(v316 - v186) / v189;
          }
          v190 = v165[28];
          v191 = (float*)(v190 + 8LL * v185);
          v192 = (float*)(v190 + 8LL * v182);
          v170 = v170 * (float)(*v191 + (float)((float)(*v192 - *v191) * v188));
          v36 = vmulq_n_f32(
              v36, v191[1] + (float)((float)(v192[1] - v191[1]) * v188));
        }
      }
      v193 = v328;
      *((float*)&v37 + 2) = v164;
      *((float*)&v193 + 2) = v303;
      v323 = v193;
      *(_QWORD*)&v194 = v343;
      LANES128(v2).n128_f32[2] = v300;
      *((_QWORD*)&v194 + 1) = LODWORD(v304);
      v341 = v194;
      v200 = vsubq_f32(COERCE_AS(float32x4_t, 0), v11);
      LANES128(v195).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v196 =
          LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
      LANES128(v201).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v197 =
          LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      LANES128(v199).n128_u64[0] = LANES128(v195).n128_u64[0];
      LANES128(v202).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v198).n128_u64[0] = LANES128(v201).n128_u64[0];
      LANES128(v199).n128_u64[1] = LANES128(v200).n128_u64[0];
      LANES128(v200).n128_u64[1] = LANES128(v201).n128_u64[0];
      LANES128(v201).n128_u64[1] = LANES128(v195).n128_u64[0];
      LANES128(v195).n128_u64[1] = v196;
      LANES128(v202).n128_u64[1] = LANES128(v202).n128_u64[0];
      LANES128(v198).n128_u64[1] = v197;
      LANES128(v203).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v204).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v203).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v204).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v205 = vmlsq_f32(vmulq_f32(v195, v203), v204, v198);
      LANES128(v206).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v205, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v206).n128_i8[8] =
          vqtbl1_s8(v205, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v207 = vmulq_f32(v195, v206);
      LANES128(v195).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v205, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v195).n128_i8[8] =
          vqtbl1_s8(v205, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v208 = vmlsq_f32(v207, v195, v198);
      v209 = vmulq_f32(v208, v208);
      LANES128(v209).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v209, v209, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v209).n128_u64[0])))
              .n64_u64[0];
      LANES128(v209).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v209).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v209).n128_u64[0])))
              .n64_u64[0];
      LANES128(v209).n128_u64[1] = LANES128(v209).n128_u64[0];
      v210 = vrsqrteq_f32(v209);
      v211 = vmulq_f32(v210, vrsqrtsq_f32(v210, vmulq_f32(v209, v210)));
      v212 = vbicq_s8(
          vmulq_f32(v208,
                    vmulq_f32(v211, vrsqrtsq_f32(v211, vmulq_f32(v209, v211)))),
          vceqzq_f32(v209));
      v213 =
          (float)(PSEUDO_UNFUSED((float)((float)(v167 * 0x1.6800000000000p+8f) *
                                         0x1.1df46a0000000p-6f) *
                                 0x1.0000000000000p-1f)) +
          (float)(roundf((float)((float)((float)(v167 * 0x1.6800000000000p+8f) *
                                         0x1.1df46a0000000p-6f) *
                                 0x1.0000000000000p-1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
      if (v213 < -0x1.921fb60000000p+0f) {
        v214 = -0x1.0000000000000p+0f;
      }
      else {
        v214 = 0x1.0000000000000p+0f;
      }
      v215 = -0x1.921fb60000000p+1f - v213;
      if (v213 >= -0x1.921fb60000000p+0f) {
        v215 = v213;
      }
      v216 = 0x1.921fb60000000p+1f - v213;
      v217 = v213 <= 0x1.921fb60000000p+0f;
      if (v213 > 0x1.921fb60000000p+0f) {
        v218 = -0x1.0000000000000p+0f;
      }
      else {
        v218 = v214;
      }
      if (v217) {
        v219 = v215;
      }
      else {
        v219 = v216;
      }
      v220 = v219 * v219;
      v221 =
          v218 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                                v220)) *
                                                                                v220)) *
                                                             v220)) *
                                             v220)) *
                          v220) +
                  0x1.0000000000000p+0f);
      v222 = vmulq_n_f32(
          v212,
          v219 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                                    (float)(v219 *
                                                                                                            v219))) *
                                                                                    (float)(v219 *
                                                                                            v219))) *
                                                                 (float)(v219 *
                                                                         v219))) *
                                                 (float)(v219 * v219))) *
                              (float)(v219 * v219)) +
                      0x1.0000000000000p+0f));
      v223 = v222;
      LANES128(v223).n128_f32[3] = v221;
      v224 = vmulq_f32(v223, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v225).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v224, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v225).n128_i8[8] =
          vqtbl1_s8(v224, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v226 = vmlaq_f32(vmulq_f32(v202, v224),
                       COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v200, v225));
      LANES128(v225).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v224, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v225).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v224).n128_u64[0]), 1);
      v227 = vmlaq_f32(v226, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v199, v225));
      LANES128(v225).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v224, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v225).n128_i8[8] =
          vqtbl1_s8(v224, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v228 = vmlsq_f32(v227, v225, v201);
      v229 = LANES128_OF(vextq_s8(v223, v223, 8u)).n128_u64[0];
      LANES128(v223).n128_u64[0] = LANES128(v222).n128_u64[0];
      LANES128(v225).n128_u64[0] = LANES128(v222).n128_u64[0];
      LANES128(v223).n128_u64[1] = v229;
      LANES128(v230).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v223, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v231).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v228, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v230).n128_u64[1] = LANES128(v230).n128_u64[0];
      *(int8x8_t*)&LANES128(v231).n128_i8[8] =
          vqtbl1_s8(v228, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v232 = vmulq_f32(v230, v228);
      LANES128(v230).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v223, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v233).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v228, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v225).n128_u64[1] = LANES128(v230).n128_u64[0];
      v234 = vmlaq_f32(v232, COERCE_AS(float32x4_t, GameData_1a83800),
                       vmulq_f32(v225, v231));
      LANES128(v231).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v223, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v235).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v228, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v233).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v228).n128_u64[0]), 1);
      LANES128(v230).n128_u64[1] = LANES128(v231).n128_u64[0];
      LANES128(v231).n128_u64[1] = LANES128(v222).n128_u64[0];
      *(int8x8_t*)&LANES128(v235).n128_i8[8] =
          vqtbl1_s8(v228, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v236 = vmlsq_f32(vmlaq_f32(v234, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v231, v233)),
                       v235, v230);
      LANES128(v236).n128_u32[3] = 0;
      v12 = LODWORD(v314);
      LANES128(v235).n128_f32[0] = v170 * 0x1.1df46a0000000p-6f;
      LANES128(v235).n128_u32[1] = 1036831949;
      v296 = 0;
      v301 = 0;
      v299 = 0;
      v312 = LANES128(v235).n128_u64[0];
      v315 = (__int128)v236;
      v9 = v339;
      goto LABEL_181;
    }
    v100 = (_QWORD*)a1[23];
    v102 = (char*)v100[13];
    v101 = (char*)v100[14];
    v103 = *(_DWORD*)v102;
    v104 = (unsigned __int64)(v101 - v102) >> 2;
    v105 = (*(_DWORD*)v102 + v17 - *((_DWORD*)v101 - 1)) % 86400;
    v106 = v105 + (v105 < 0 ? 0x15180 : 0);
    v108 = v100 + 19;
    v107 = v100[19];
    v109 = (v108[1] - v107) / 52;
    if (v109 >= (int)v104) {
      v110 = (unsigned __int64)(v101 - v102) >> 2;
    }
    else {
      v110 = v109;
    }
    if (v109 > 0) {
      LODWORD(v104) = v110;
    }
    if (v101 == v102) {
      v111 = 0;
    }
    else {
      if (v103 <= v106) {
        if (v102 + 4 == v101) {
          v118 = 1;
          v116 = *(_DWORD*)v102;
          v117 = v103;
        }
        else {
          v117 = *((_DWORD*)v102 + 1);
          if (v117 <= v106) {
            if (v102 + 8 == v101) {
              v118 = 2;
              v116 = *((_DWORD*)v102 + 1);
            }
            else {
              v119 = *((_DWORD*)v102 + 2);
              if (v119 <= v106) {
                v123 = (int*)(v102 + 12);
                v124 = 3;
                v117 = *((_DWORD*)v102 + 2);
                do {
                  v116 = v117;
                  v118 = v124;
                  if (v123 == (int*)v101) {
                    break;
                  }
                  v125 = *v123++;
                  v117 = v125;
                  ++v124;
                } while (v125 <= v106);
              }
              else {
                v118 = 2;
                v116 = *((_DWORD*)v102 + 1);
                v117 = v119;
              }
            }
          }
          else {
            v118 = 1;
            v116 = *(_DWORD*)v102;
          }
        }
        v113 = v103 + 86400;
        v112 = v118 - 1;
        if (v118 >= (int)v104) {
          v114 = 0;
        }
        else {
          v114 = v118;
        }
        if (v118 < (int)v104) {
          v113 = v117;
        }
        goto LABEL_131;
      }
      v111 = *(_DWORD*)v102;
    }
    v112 = v104 - 1;
    v19 = (int)v104 <= 0;
    v113 = v103 + 86400;
    v114 = 0;
    v115 = *(_DWORD*)&v102[4 * (int)v104 - 4];
    if (!v19) {
      v113 = v111;
    }
    v116 = v115 - 86400;
  LABEL_131:
    v143 = 0x0.0p+0f;
    if (v114 != v112) {
      v144 = (float)(v113 - v116);
      if (v144 < 0x1.a36e2e0000000p-14f) {
        v144 = 0x1.a36e2e0000000p-14f;
      }
      v143 = (float)(v106 - v116) / v144;
    }
    v145 = v107 + 52LL * v112;
    v146 = v107 + 52LL * v114;
    v147 = *(float*)(v145 + 8);
    v148 = *(float*)(v145 + 12);
    v149 = *(float*)(v146 + 8);
    v150 = *(float*)(v146 + 12);
    *((_DWORD*)a1 + 12) = v17;
    v98 = v147 + (float)((float)(v149 - v147) * v143);
    v99 = v148 + (float)((float)(v150 - v148) * v143);
    *((float*)a1 + 13) = v98;
    *((float*)a1 + 14) = v99;
    goto LABEL_136;
  }
  v315 = GameData_1a82fa0;
  v38 = (unsigned __int64)((char*)v14 - (char*)v13) >> 2;
  if (v13 + 1 == v14) {
    v40 = 0;
    v41 = 1;
    v42 = v18;
    v39 = v18;
  }
  else {
    v39 = v13[1];
    if (v39 <= v16) {
      v44 = v13 + 2;
      v41 = 2;
      if (v44 == v14) {
        v40 = 1;
        v42 = v39;
      }
      else {
        while (1) {
          v46 = *v44++;
          v45 = v46;
          if (v46 > v16) {
            break;
          }
          ++v41;
          v39 = v45;
          if (v44 == v14) {
            v40 = v41 - 1;
            v42 = v45;
            goto LABEL_43;
          }
        }
        v40 = v41 - 1;
        v42 = v39;
      LABEL_43:
        v39 = v45;
      }
    }
    else {
      v40 = 0;
      v41 = 1;
      v42 = v18;
    }
  }
  LODWORD(v47) = 0;
  v48 = 0x0.0p+0f;
  if (v41 >= (int)v38) {
    v49 = 0;
  }
  else {
    v49 = v41;
  }
  if (v49 != v40) {
    v50 = v16 - v42;
    v51 = v18 + 86400;
    if (v41 >= (int)v38) {
      v52 = v51;
    }
    else {
      v52 = v39;
    }
    v53 = (float)(v52 - v42);
    if (v53 < 0x1.a36e2e0000000p-14f) {
      v53 = 0x1.a36e2e0000000p-14f;
    }
    v48 = (float)v50 / v53;
  }
  v54 = v8[16];
  v312 = GameData_1a83840;
  v55 = 0;
  v56 = (float*)(v54 + 52LL * v40);
  v57 = (float*)(v54 + 52LL * v49);
  v58 = v56[1] + (float)((float)(v57[1] - v56[1]) * v48);
  v59 = 0x0.0p+0f;
  if (*((_BYTE*)a1 + 168) == 1) {
    *(float*)&v47 = v56[7] + (float)((float)(v57[7] - v56[7]) * v48);
    v59 = v56[8] + (float)((float)(v57[8] - v56[8]) * v48);
    HIDWORD(v55) = 0;
    *(float*)&v55 = v56[9] + (float)((float)(v57[9] - v56[9]) * v48);
  }
  v299 = v55;
  *((float*)&v60 + 1) = v56[5] + (float)((float)(v57[5] - v56[5]) * v48);
  v337 = v56[6] + (float)((float)(v57[6] - v56[6]) * v48);
  *((float*)&v47 + 1) = v59;
  *(float*)&v61 = v56[10] + (float)((float)(v57[10] - v56[10]) * v48);
  *((float*)&v61 + 1) = v56[11] + (float)((float)(v57[11] - v56[11]) * v48);
  v335 = v56[12] + (float)((float)(v57[12] - v56[12]) * v48);
  *(float*)&v60 = v56[4] + (float)((float)(v57[4] - v56[4]) * v48);
  v317 = v60;
  v301 = v47;
  v342 = v61;
  v62 = v58 * 0x1.1df46a0000000p-6f;
  v63 = (float)(*v56 + (float)((float)(*v57 - *v56) * v48)) *
        0x1.1df46a0000000p-6f;
  v64 = sinf(v58 * 0x1.1df46a0000000p-6f),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(float*)&v329 = -(float)(v64 * cosf(v63)),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(float*)&v324 = -sinf(v63),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = cosf(v62),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v66 = cosf(v63),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v68).n128_u32[3] = 0;
  v67 = v65 * v66;
  LANES128(v68).n128_u64[0] = __PAIR64__(v324, v329);
  if (*((_DWORD*)a1 + 12) == v17) {
    v69 = *((float*)a1 + 13);
    v70 = *((float*)a1 + 14);
  }
  else {
    v71 = (_QWORD*)a1[23];
    v72 = (int*)v71[13];
    v73 = (int*)v71[14];
    v74 = (unsigned __int64)((char*)v73 - (char*)v72) >> 2;
    if (v73 == v72) {
      v76 = 0;
      v77 = 0;
      v75 = 0;
    }
    else {
      v75 = *v72;
      if (*v72 <= v17) {
        if (v72 + 1 == v73) {
          v76 = 1;
          v77 = *v72;
        }
        else if (v72[1] <= v17) {
          if (v72 + 2 == v73) {
            v76 = 2;
            v77 = v72[1];
            v75 = v77;
          }
          else {
            v75 = v72[2];
            if (v75 <= v17) {
              v120 = v72 + 3;
              v121 = 3;
              do {
                v77 = v75;
                v76 = v121;
                if (v120 == v73) {
                  break;
                }
                v122 = *v120++;
                v75 = v122;
                ++v121;
              } while (v122 <= v17);
            }
            else {
              v76 = 2;
              v77 = v72[1];
            }
          }
        }
        else {
          v76 = 1;
          v77 = *v72;
          v75 = v72[1];
        }
      }
      else {
        v76 = 0;
        v77 = 0;
      }
    }
    v126 = v76 - 1;
    v127 = v76;
    if (v76 >= (int)v74) {
      v127 = 0;
      v75 = *v72 + 86400;
    }
    if (v76 == 0) {
      v126 = v74 - 1;
      v77 = v72[(int)v74 - 1] - 86400;
    }
    v128 = v71[16];
    v129 = (float)(v75 - v77);
    v130 = v128 + 52LL * v126;
    v131 = v128 + 52LL * v127;
    if (v129 < 0x1.a36e2e0000000p-14f) {
      v129 = 0x1.a36e2e0000000p-14f;
    }
    v132 = *(float*)(v131 + 8);
    v133 = *(float*)(v131 + 12);
    v134 = (float)(v17 - v77) / v129;
    if (v127 == v126) {
      v134 = 0x0.0p+0f;
    }
    v135 = *(float*)(v130 + 8);
    v136 = *(float*)(v130 + 12);
    *((_DWORD*)a1 + 12) = v17;
    v69 = v135 + (float)((float)(v132 - v135) * v134);
    v70 = v136 + (float)((float)(v133 - v136) * v134);
    *((float*)a1 + 13) = v69;
    *((float*)a1 + 14) = v70;
  }
  LANES128(v68).n128_f32[2] = v67;
  v137 = v70 * 0x1.1df46a0000000p-6f;
  v138 = v69 * 0x1.1df46a0000000p-6f;
  v307 = v68;
  v139 = sinf(v70 * 0x1.1df46a0000000p-6f),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(float*)&v331 = -(float)(v139 * cosf(v138)),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(float*)&v326 = -sinf(v138),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v140 = cosf(v137),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v141 = cosf(v138),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v37) = 0;
  v2 = v307;
  a1[8] = 0;
  v11 = COERCE_AS(float32x4_t, GameData_1a83610);
  v36 = (__typeof__(v36)){0};
  v9 = 0;
  v12 = 0;
  *(_QWORD*)&v37 = __PAIR64__(v326, v331);
  *((float*)&v37 + 2) = v140 * v141;
  *(_QWORD*)&v142 = v342;
  *((_QWORD*)&v142 + 1) = LODWORD(v335);
  v341 = v142;
  v296 = LODWORD(v337);
  v334 = 0;
  v323 = GameData_1a83610;
  v321 = 0;
LABEL_181:
  v237 = (float32x4_t*)(a1 + 4);
  v298 = v12;
  v305 = v37;
  v311 = v36;
  v333 = v11;
  v340 = v9;
  LANES64(v238).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*((float32x4_t*)a1 + 2), v2))))
          .n64_u64[0];
  if ((LANES64(v238).n64_u8[0] & 1) != 0 ||
      (LANES64(v238).n64_u8[2] & 1) != 0 ||
      (LANES64(v238).n64_u8[4] & 1) != 0) {
    *v237 = v2;
  }
  v239 = GameRoutine_b3fa80((_QWORD*)(*(_QWORD*)(v7 + 288) + 592LL), "Moon"),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v240 = GameRoutine_b3f940((_QWORD*)(*(_QWORD*)(v7 + 288) + 592LL), "Sun"),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v241 = a1[5];
  v240[6] = LANES128(*(v237)).n128_u64[0];
  v240[7] = v241;
  LOBYTE(v241) = *((_BYTE*)v240 + 112);
  *((_OWORD*)v240 + 6) = v305;
  if ((v241 & 1) == 0) {
    *((_BYTE*)v240 + 112) = 1;
  }
  v242 = v317;
  LANES128(v244).n128_u64[1] = v296;
  LANES128(v243).n128_u64[0] = v301;
  LANES128(v243).n128_u64[1] = v299;
  *((float32x4_t*)v240 + 4) = v244;
  *((float32x4_t*)v240 + 5) = vmulq_f32(v243, v322);
  LANES128(v244).n128_u64[0] = v340;
  v245 = *((_BYTE*)v239 + 112);
  *((float32x4_t*)v239 + 3) = v333;
  *((_OWORD*)v239 + 6) = v323;
  if ((v245 & 1) == 0) {
    *((_BYTE*)v239 + 112) = 1;
  }
  LANES128(v244).n128_u64[1] = v298;
  *((float32x4_t*)v239 + 4) =
      vmulq_n_f32(v244, COERCE_FLOAT(*((_OWORD*)a1 + 4)));
  LANES128(v246).n128_u64[0] = v334;
  LANES128(v246).n128_u64[1] = v321;
  *((float32x4_t*)v239 + 5) = vmulq_n_f32(
      vmulq_f32(v246, v322), COERCE_FLOAT(*(_OWORD*)((char*)a1 + 68)));
  *(_OWORD*)(*(_QWORD*)(v7 + 288) + 400LL) = v315;
  *(_DWORD*)(*(_QWORD*)(v7 + 288) + 416LL) = 1080033280;
  v247 = *(_QWORD*)(v7 + 288);
  v248 = *(_BYTE*)(v247 + 512);
  *(_OWORD*)(v247 + 496) = v341;
  if ((v248 & 1) == 0) {
    *(_BYTE*)(v247 + 512) = 1;
  }
  *(_OWORD*)(*(_QWORD*)(v7 + 288) + 448LL) = v312;
  *(float32x4_t*)(*(_QWORD*)(v7 + 288) + 432LL) = v311;
  v249 = *(_QWORD*)(v7 + 288);
  v250 = a1[25];
  *(_DWORD*)(v249 + 392) = *((_DWORD*)a1 + 52);
  *(_QWORD*)(v249 + 384) = v250;
  if (v6 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    v251 = a1[1];
    if (v251 != 0) {
      goto LABEL_194;
    }
  LABEL_198:
    v252 = 0;
    v253 = 0;
    goto LABEL_199;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  std___1___shared_weak_count___release_weak(v6),
      v262 = COERCE_AS(__typeof__(v262),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v270 = COERCE_AS(__typeof__(v270),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v251 = a1[1];
  if (v251 == 0) {
    goto LABEL_198;
  }
LABEL_194:
  v252 = std___1___shared_weak_count_lock(v251),
  v262 = COERCE_AS(__typeof__(v262),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v270 = COERCE_AS(__typeof__(v270),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v252 != 0) {
    v253 = *a1;
  }
  else {
    v253 = 0;
  }
LABEL_199:
  v254 = *(_DWORD*)(v253 + 304);
  v255 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  if (v254 == -1) {
    v258 = 0;
    v257 = *(_QWORD*)(v255 + 48);
    v259 = *(_QWORD*)(v255 + 56);
    if (v259 == 0) {
      goto LABEL_205;
    }
    goto LABEL_204;
  }
  v256 = v255 + 1560LL * v254;
  v257 = *(_QWORD*)(v256 + 1752);
  v258 = *(_QWORD*)(v256 + 1760);
  if (v258 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v258 + 8), 1u,
                              memory_order_relaxed);
  }
  v259 = v258;
  if (v257 == 0) {
    v257 = *(_QWORD*)(v255 + 48);
    v259 = *(_QWORD*)(v255 + 56);
    if (v259 == 0) {
    LABEL_205:
      if (v258 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v258 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v258 + 16LL))(v258),
            v262 = COERCE_AS(__typeof__(v262),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v270 = COERCE_AS(__typeof__(v270),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v258),
            v262 = COERCE_AS(__typeof__(v262),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v270 = COERCE_AS(__typeof__(v270),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_208;
    }
  LABEL_204:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v259 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_205;
  }
LABEL_208:
  if (a1[16] != a1[15]) {
    v260 = GameRoutine_c4c260(a2, (float**)a1 + 15),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v261 = *((_DWORD*)a1 + 20);
    v346_.v346 = v260;
    v346_.v347 = v262;
    if (v261 == (_DWORD)v260 && *((float*)a1 + 21) == *((float*)&v260 + 1)) {
      if (*((_BYTE*)a1 + 169) != 1) {
      LABEL_253:
        *(_BYTE*)(*(_QWORD*)(v253 + 288) + 383LL) = *((_BYTE*)a1 + 168);
        goto LABEL_254;
      }
    }
    else {
      GameRoutine_c4c550((float*)a1, (float*)&v346_.v346, a1 + 15, 1),
          v262 = COERCE_AS(__typeof__(v262),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v270 = COERCE_AS(__typeof__(v270),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v267 = a1[2];
      if (v267 != 0) {
        ++*(_DWORD*)(v267 + 136);
      }
      a1[10] = v346_.v346;
      *((_DWORD*)a1 + 22) = v346_.v347;
      if ((*((_BYTE*)a1 + 169) & 1) == 0) {
        memcpy(*(_QWORD*)(v253 + 288) + 192LL, *(_QWORD*)(v253 + 288) + 8LL,
               0xB8u),
            v262 = COERCE_AS(__typeof__(v262),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v270 = COERCE_AS(__typeof__(v270),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v272 = a1[2];
        if (v272 != 0) {
          ++*(_DWORD*)(v272 + 140);
        }
        goto LABEL_253;
      }
    }
    v268 = GameRoutine_c4c260(a2, (float**)a1 + 18),
    v262 = COERCE_AS(__typeof__(v262),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v270 = COERCE_AS(__typeof__(v270),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v269 = *((_DWORD*)a1 + 23);
    v344_.v344 = v268;
    v344_.v345 = v270;
    if (v269 != (_DWORD)v268 || *((float*)a1 + 24) != *((float*)&v268 + 1)) {
      GameRoutine_c4c550((float*)a1, (float*)&v344_.v344, a1 + 18, 0),
          v262 = COERCE_AS(__typeof__(v262),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v270 = COERCE_AS(__typeof__(v270),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v271 = a1[2];
      if (v271 != 0) {
        ++*(_DWORD*)(v271 + 140);
      }
      *(__int64*)((char*)a1 + 92) = v344_.v344;
      *((_DWORD*)a1 + 25) = v344_.v345;
    }
    goto LABEL_253;
  }
  v263 = *(_QWORD*)(v253 + 288);
  if (*(_BYTE*)(v263 + 24) == 1) {
    *(_BYTE*)(v263 + 24) = 0;
  }
  if (*(_BYTE*)(v263 + 48) == 1) {
    *(_BYTE*)(v263 + 48) = 0;
  }
  if (*(_BYTE*)(v263 + 72) == 1) {
    *(_BYTE*)(v263 + 72) = 0;
  }
  if (*(_BYTE*)(v263 + 96) == 1) {
    *(_BYTE*)(v263 + 96) = 0;
  }
  if ((*(_BYTE*)(v263 + 120) & 1) != 0) {
    *(_BYTE*)(v263 + 120) = 0;
  }
  if (*(_BYTE*)(v263 + 144) == 1) {
    *(_BYTE*)(v263 + 144) = 0;
  }
  *(_DWORD*)(v263 + 152) = 0;
  *(_WORD*)(v263 + 156) = 0;
  *(_QWORD*)(v263 + 160) = 0x3F80000000000000LL;
  *(_QWORD*)(v263 + 168) = 0x3F8000003F800000LL;
  v264 = *(_BYTE*)(v263 + 188);
  *(_QWORD*)(v263 + 176) = 1065353216;
  if ((v264 & 1) != 0) {
    *(_BYTE*)(v263 + 188) = 0;
  }
  v265 = *(_QWORD*)(v253 + 288);
  if (*(_BYTE*)(v265 + 208) == 1) {
    *(_BYTE*)(v265 + 208) = 0;
  }
  if (*(_BYTE*)(v265 + 232) == 1) {
    *(_BYTE*)(v265 + 232) = 0;
  }
  if (*(_BYTE*)(v265 + 256) == 1) {
    *(_BYTE*)(v265 + 256) = 0;
  }
  if (*(_BYTE*)(v265 + 280) == 1) {
    *(_BYTE*)(v265 + 280) = 0;
  }
  if ((*(_BYTE*)(v265 + 304) & 1) != 0) {
    *(_BYTE*)(v265 + 304) = 0;
  }
  if (*(_BYTE*)(v265 + 328) == 1) {
    *(_BYTE*)(v265 + 328) = 0;
  }
  *(_DWORD*)(v265 + 336) = 0;
  *(_WORD*)(v265 + 340) = 0;
  *(_QWORD*)(v265 + 344) = 0x3F80000000000000LL;
  *(_QWORD*)(v265 + 352) = 0x3F8000003F800000LL;
  v266 = *(_BYTE*)(v265 + 372);
  *(_QWORD*)(v265 + 360) = 1065353216;
  if ((v266 & 1) != 0) {
    *(_BYTE*)(v265 + 372) = 0;
  }
LABEL_254:
  v273 = *(_BYTE**)(*(_QWORD*)(v257 + 8) + 8LL);
  if (v273 != nullptr) {
    v274 = 792;
    if (v273[760] != 0) {
      v274 = 756;
    }
    v275 = *(float*)&v273[v274];
    if (vabds_f32(v275, *((float*)a1 + 27)) > 0x1.0624de0000000p-10f) {
      v276 = a1[2];
      if (v276 != 0) {
        ++*(_DWORD*)(v276 + 136);
        v277 = a1[2];
        if (v277 != 0) {
          ++*(_DWORD*)(v277 + 140);
        }
      }
      *((float*)a1 + 27) = v275;
    }
    v278 = 1192;
    if (v273[1160] != 0) {
      v278 = 1156;
    }
    v279 = *(_DWORD*)&v273[v278];
    v280 = 1272;
    if (v273[1240] != 0) {
      v280 = 1236;
    }
    LANES64(v281).n64_u32[0] = v279;
    v282 = *(_DWORD*)&v273[v280];
    v283 = 1352;
    if (v273[1320] != 0) {
      v283 = 1316;
    }
    LANES64(v281).n64_u32[1] = v282;
    v284 = *(_DWORD*)&v273[v283];
    v285 = 1432;
    if (v273[1400] != 0) {
      v285 = 1396;
    }
    LANES64(v286).n64_u32[0] = v284;
    v287 = *(_DWORD*)&v273[v285];
    v288 = *(float32x2_t**)(v253 + 288);
    LANES64(v286).n64_u32[1] = v287;
    LANES64(v289).n64_u64[0] = LANES64_OF(vsub_f32(v281, v288[68])).n64_u64[0];
    LANES64(v290).n64_u64[0] = LANES64_OF(vsub_f32(v286, v288[69])).n64_u64[0];
    LANES64(v291).n64_u64[0] =
        LANES64_OF(vadd_f32(vmul_f32(v290, v290), vmul_f32(v289, v289)))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(v291, v291)).n64_f32[0] > 0x1.0624de0000000p-10f) {
      LANES64(v288[68]).n64_u32[0] = v279;
      LANES64(v288[68]).n64_u32[1] = v282;
      LANES64(v288[69]).n64_u32[0] = v284;
      LANES64(v288[69]).n64_u32[1] = v287;
      v292 = a1[2];
      if (v292 != 0) {
        ++*(_DWORD*)(v292 + 140);
      }
    }
  }
  v293 = *(_QWORD*)(*(_QWORD*)(v257 + 8) + 120LL);
  v294 = 128;
  if (*(_BYTE*)(v293 + 96) != 0) {
    v294 = 92;
  }
  if (*(float*)(v293 + v294) > 0x1.0000000000000p-23f) {
    if ((a1[24] & 1) != 0) {
      *(_BYTE*)(a1[2] + 145) = 1;
    }
    else {
      *((_BYTE*)a1 + 192) = 1;
      *(_WORD*)(a1[2] + 145) = 257;
    }
  }
  if (*((_BYTE*)a1 + 112) == 1) {
    v295 = a1[2];
    if (v295 != 0) {
      *(_BYTE*)(v295 + 144) = 1;
      *((_BYTE*)a1 + 112) = 0;
    }
  }
  if (v259 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v259 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v259 + 16LL))(v259),
        v262 = COERCE_AS(__typeof__(v262),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v270 = COERCE_AS(__typeof__(v270),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v259),
        v262 = COERCE_AS(__typeof__(v262),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v270 = COERCE_AS(__typeof__(v270),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v252 == 0) {
      return;
    }
  }
  else if (v252 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v252 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v252 + 16LL))(v252),
        v262 = COERCE_AS(__typeof__(v262),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v270 = COERCE_AS(__typeof__(v270),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v252),
        v262 = COERCE_AS(__typeof__(v262),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v270 = COERCE_AS(__typeof__(v270),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__attribute__((swiftcall)) void wld_c52150(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _BYTE* v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  struct {
    _QWORD v45[2];
    const char* v46;
  } v45_;
  struct {
    char v47[16];
    __int64 v48;
  } v47_;
  struct {
    _QWORD v49[2];
    char* v50;
  } v49_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      288, 16, 0);
  *(_QWORD*)(v5 + 32) = 0;
  v6 = v5 + 32;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  v7 = v5;
  *(_QWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 64) = 1092616192;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)v5 = GameData_1fd22d0;
  *(_DWORD*)(v5 + 120) = 0;
  *(_WORD*)(v5 + 278) = 0;
  *(_QWORD*)(v5 + 254) = 0;
  *(_WORD*)(v5 + 124) = 257;
  *(_QWORD*)(v5 + 126) = 0;
  *(_QWORD*)(v5 + 96) = 1161527296;
  *(_QWORD*)(v5 + 104) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 112) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 246) = 0;
  *(_QWORD*)(v5 + 238) = 0;
  *(_QWORD*)(v5 + 230) = 0;
  *(_QWORD*)(v5 + 222) = 0;
  *(_QWORD*)(v5 + 214) = 0;
  *(_QWORD*)(v5 + 206) = 0;
  *(_QWORD*)(v5 + 262) = 0;
  *(_QWORD*)(v5 + 270) = 0;
  *(_QWORD*)(v5 + 198) = 0;
  *(_QWORD*)(v5 + 190) = 0;
  *(_QWORD*)(v5 + 182) = 0;
  *(_QWORD*)(v5 + 174) = 0;
  *(_QWORD*)(v5 + 166) = 0;
  *(_QWORD*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 150) = 0;
  *(_QWORD*)(v5 + 142) = 0;
  *(_QWORD*)(v5 + 134) = 0;
  *(_QWORD*)(v5 + 32) = gfx_light_PointLight_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  v8 = (atomic_ullong*)(v5 + 8);
  *(_QWORD*)(v5 + 280) = 1065353216;
  *(_OWORD*)(v5 + 80) = GameData_1a837f0;
  *(_DWORD*)(v5 + 40) = 1;
  v9 = *(unsigned int*)(a1 + 56);
  strcpy(v47_.v47, "\nlight");
  *(_DWORD*)(a1 + 56) = v9 + 1;
  std___1_to_string_1a0a790((void*)(v45_.v45), v9);
  if ((v45_.v45[0] & 1) != 0) {
    v10 = v45_.v46;
  }
  else {
    v10 = (char*)v45_.v45 + 1;
  }
  if ((v45_.v45[0] & 1) != 0) {
    v11 = v45_.v45[1];
  }
  else {
    v11 = (unsigned __int64)LOBYTE(v45_.v45[0]) >> 1;
  }
  v12 = (__int64*)GameRoutine_1a09ce0((__int64)v47_.v47, v10, v11);
  v13 = *v12;
  v14 = v12[1];
  *v12 = 0;
  v12[1] = 0;
  v49_.v49[0] = v13;
  v49_.v49[1] = v14;
  v15 = v12[2];
  v12[2] = 0;
  v49_.v50 = (char*)v15;
  if ((v45_.v45[0] & 1) != 0 && v45_.v46 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v16, (__int64)v45_.v46);
  }
  if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v17, v47_.v48);
  }
  v18 = 0;
  if ((v49_.v49[0] & 1) != 0) {
    v19 = v49_.v50;
  }
  else {
    v19 = (char*)v49_.v49 + 1;
  }
  while (1) {
    v20 = &v19[v18];
    v21 = v7 + v18;
    if (v19[v18] == 0) {
      v27 = (_BYTE*)(v21 + 216);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 216) = v19[v18];
    if (v20[1] == 0) {
      v27 = (_BYTE*)(v7 + v18 + 217);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 217) = v20[1];
    v22 = v7 + v18;
    if (v20[2] == 0) {
      v27 = (_BYTE*)(v22 + 218);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 218) = v20[2];
    if (v20[3] == 0) {
      v27 = (_BYTE*)(v7 + v18 + 219);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 219) = v20[3];
    v23 = v7 + v18;
    if (v20[4] == 0) {
      v27 = (_BYTE*)(v23 + 220);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 220) = v20[4];
    if (v20[5] == 0) {
      v27 = (_BYTE*)(v7 + v18 + 221);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 221) = v20[5];
    v24 = v7 + v18;
    if (v20[6] == 0) {
      v27 = (_BYTE*)(v24 + 222);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 222) = v20[6];
    if (v20[7] == 0) {
      v27 = (_BYTE*)(v7 + v18 + 223);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 223) = v20[7];
    v25 = v7 + v18;
    v26 = (unsigned __int8)v20[8];
    if (v26 == 0) {
      break;
    }
    v18 += 9;
    *(_BYTE*)(v25 + 224) = v26;
    if ((_DWORD)v18 == 63) {
      v27 = (_BYTE*)(v7 + v18 + 216);
      goto LABEL_40;
    }
  }
  v27 = (_BYTE*)(v25 + 224);
LABEL_40:
  *v27 = 0;
  v28 = *(__int64**)(a1 + 8);
  v29 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v28 >= v29) {
    v31 = (__int64)v28 - *(_QWORD*)a1;
    v32 = (v31 >> 4) + 1;
    if (v32 >> 60 != 0) {
      GameRoutine_c53620();
    }
    v33 = v29 - *(_QWORD*)a1;
    if (v33 >> 3 > v32) {
      v32 = v33 >> 3;
    }
    if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF0LL) {
      v34 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v34 = v32;
    }
    if (v34 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v35 = fw_memory_HeapManager_Allocate(*v4, 16 * v34, 16, 0);
    v36 = (__int64*)(v35 + v31);
    v37 = v35 + 16 * v34;
    *v36 = v6;
    v36[1] = v7;
    v30 = v35 + v31 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v38 = *(_QWORD*)a1;
    v39 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
    v40 = (char*)v36 - v39;
    memcpy((__int64)v36 - v39, *(_QWORD*)a1, v39);
    *(_QWORD*)a1 = v40;
    *(_QWORD*)(a1 + 8) = v30;
    *(_QWORD*)(a1 + 16) = v37;
    if (v38 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v41, v38);
    }
  }
  else {
    *v28 = v6;
    v28[1] = v7;
    v30 = (__int64)(v28 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) = v30;
  v42 = GameData_212e9c8[0];
  a2[3] = v6;
  a2[4] = 0;
  *a2 = v42 + 16;
  a2[1] = v6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  a2[2] = v7;
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v43 = v49_.v49[0];
  a2[4] = v6;
  if ((v43 & 1) != 0 && v49_.v50 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v44, (__int64)v49_.v50);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
}

__attribute__((swiftcall)) void wld_c525f0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _BYTE* v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  struct {
    _QWORD v45[2];
    const char* v46;
  } v45_;
  char v47;
  struct {
    char gap32_[1];
    char v48[15];
    __int64 v49;
  } v48_;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      320, 16, 0);
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  v6 = v5;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)v5 = GameData_1fd2360;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_DWORD*)(v5 + 64) = 1092616192;
  *(_QWORD*)(v5 + 32) = 0;
  v7 = v5 + 32;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 134) = 0;
  *(_QWORD*)(v5 + 142) = 0;
  *(_QWORD*)(v5 + 150) = 0;
  *(_QWORD*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 166) = 0;
  *(_QWORD*)(v5 + 174) = 0;
  *(_QWORD*)(v5 + 182) = 0;
  *(_QWORD*)(v5 + 190) = 0;
  *(_QWORD*)(v5 + 198) = 0;
  *(_QWORD*)(v5 + 206) = 0;
  *(_QWORD*)(v5 + 214) = 0;
  *(_QWORD*)(v5 + 222) = 0;
  *(_QWORD*)(v5 + 230) = 0;
  *(_QWORD*)(v5 + 238) = 0;
  *(_QWORD*)(v5 + 246) = 0;
  *(_QWORD*)(v5 + 254) = 0;
  *(_WORD*)(v5 + 278) = 0;
  *(_QWORD*)(v5 + 8) = 0;
  v8 = (atomic_ullong*)(v5 + 8);
  *(_DWORD*)(v5 + 96) = 1161527296;
  *(_QWORD*)(v5 + 104) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 112) = 0x3F8000003F800000LL;
  *(_WORD*)(v5 + 124) = 257;
  *(_QWORD*)(v5 + 126) = 0;
  *(_QWORD*)(v5 + 262) = 0;
  *(_QWORD*)(v5 + 270) = 0;
  *(_OWORD*)(v5 + 80) = GameData_1a837f0;
  *(_QWORD*)(v5 + 32) = gfx_light_SpotLight_vtable;
  *(_QWORD*)(v5 + 304) = 1110704128;
  *(_QWORD*)(v5 + 312) = 1065353216;
  *(_DWORD*)(v5 + 40) = 2;
  v47 = 10;
  *(_OWORD*)(v5 + 288) = GameData_1a82c50;
  v9 = *(unsigned int*)(a1 + 56);
  strcpy(v48_.v48, "light");
  *(_DWORD*)(a1 + 56) = v9 + 1;
  std___1_to_string_1a0a790((void*)(v45_.v45), v9);
  if ((v45_.v45[0] & 1) != 0) {
    v10 = v45_.v46;
  }
  else {
    v10 = (char*)v45_.v45 + 1;
  }
  if ((v45_.v45[0] & 1) != 0) {
    v11 = v45_.v45[1];
  }
  else {
    v11 = (unsigned __int64)LOBYTE(v45_.v45[0]) >> 1;
  }
  v12 = (__int64*)GameRoutine_1a09ce0((__int64)&v47, v10, v11);
  v13 = *v12;
  v14 = v12[1];
  *v12 = 0;
  v12[1] = 0;
  v50_.v50[0] = v13;
  v50_.v50[1] = v14;
  v15 = v12[2];
  v12[2] = 0;
  v50_.v51 = (char*)v15;
  if ((v45_.v45[0] & 1) != 0 && v45_.v46 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v16, (__int64)v45_.v46);
  }
  if ((v47 & 1) != 0 && v48_.v49 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v17, v48_.v49);
  }
  v18 = 0;
  if ((v50_.v50[0] & 1) != 0) {
    v19 = v50_.v51;
  }
  else {
    v19 = (char*)v50_.v50 + 1;
  }
  while (1) {
    v20 = &v19[v18];
    v21 = v6 + v18;
    if (v19[v18] == 0) {
      v27 = (_BYTE*)(v21 + 216);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 216) = v19[v18];
    if (v20[1] == 0) {
      v27 = (_BYTE*)(v6 + v18 + 217);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 217) = v20[1];
    v22 = v6 + v18;
    if (v20[2] == 0) {
      v27 = (_BYTE*)(v22 + 218);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 218) = v20[2];
    if (v20[3] == 0) {
      v27 = (_BYTE*)(v6 + v18 + 219);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 219) = v20[3];
    v23 = v6 + v18;
    if (v20[4] == 0) {
      v27 = (_BYTE*)(v23 + 220);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 220) = v20[4];
    if (v20[5] == 0) {
      v27 = (_BYTE*)(v6 + v18 + 221);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 221) = v20[5];
    v24 = v6 + v18;
    if (v20[6] == 0) {
      v27 = (_BYTE*)(v24 + 222);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 222) = v20[6];
    if (v20[7] == 0) {
      v27 = (_BYTE*)(v6 + v18 + 223);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 223) = v20[7];
    v25 = v6 + v18;
    v26 = (unsigned __int8)v20[8];
    if (v26 == 0) {
      break;
    }
    v18 += 9;
    *(_BYTE*)(v25 + 224) = v26;
    if ((_DWORD)v18 == 63) {
      v27 = (_BYTE*)(v6 + v18 + 216);
      goto LABEL_40;
    }
  }
  v27 = (_BYTE*)(v25 + 224);
LABEL_40:
  *v27 = 0;
  v28 = *(__int64**)(a1 + 8);
  v29 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v28 >= v29) {
    v31 = (__int64)v28 - *(_QWORD*)a1;
    v32 = (v31 >> 4) + 1;
    if (v32 >> 60 != 0) {
      GameRoutine_c53620();
    }
    v33 = v29 - *(_QWORD*)a1;
    if (v33 >> 3 > v32) {
      v32 = v33 >> 3;
    }
    if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF0LL) {
      v34 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v34 = v32;
    }
    if (v34 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v35 = fw_memory_HeapManager_Allocate(*v4, 16 * v34, 16, 0);
    v36 = (__int64*)(v35 + v31);
    v37 = v35 + 16 * v34;
    *v36 = v7;
    v36[1] = v6;
    v30 = v35 + v31 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v38 = *(_QWORD*)a1;
    v39 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
    v40 = (char*)v36 - v39;
    memcpy((__int64)v36 - v39, *(_QWORD*)a1, v39);
    *(_QWORD*)a1 = v40;
    *(_QWORD*)(a1 + 8) = v30;
    *(_QWORD*)(a1 + 16) = v37;
    if (v38 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v41, v38);
    }
  }
  else {
    *v28 = v7;
    v28[1] = v6;
    v30 = (__int64)(v28 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) = v30;
  v42 = GameData_212e9d0[0];
  a2[3] = v7;
  a2[4] = 0;
  *a2 = v42 + 16;
  a2[1] = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  a2[2] = v6;
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v43 = v50_.v50[0];
  a2[4] = v7;
  if ((v43 & 1) != 0 && v50_.v51 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v44, (__int64)v50_.v51);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

__attribute__((swiftcall)) void wld_c52ad0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  _BYTE* v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  struct {
    _QWORD v46[2];
    const char* v47;
  } v46_;
  struct {
    char v48[16];
    __int64 v49;
  } v48_;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  v6 = v5;
  *(_DWORD*)(v5 + 64) = 1092616192;
  *(_QWORD*)(v5 + 126) = 0;
  *(_WORD*)(v5 + 124) = 257;
  *(_QWORD*)(v5 + 8) = 0;
  v7 = (atomic_ullong*)(v5 + 8);
  *(_QWORD*)v5 = GameData_1fd23f0;
  *(_QWORD*)(v5 + 100) = 0x3F80000000000000LL;
  *(_QWORD*)(v5 + 262) = 0;
  *(_QWORD*)(v5 + 270) = 0;
  *(_QWORD*)(v5 + 108) = 0x3F8000003F800000LL;
  *(_OWORD*)(v5 + 80) = GameData_1a837f0;
  v8 = GameData_212eb08[0];
  *(_QWORD*)(v5 + 320) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 134) = 0;
  *(_QWORD*)(v5 + 142) = 0;
  *(_QWORD*)(v5 + 150) = 0;
  *(_QWORD*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 166) = 0;
  *(_QWORD*)(v5 + 174) = 0;
  *(_QWORD*)(v5 + 182) = 0;
  *(_QWORD*)(v5 + 190) = 0;
  *(_QWORD*)(v5 + 198) = 0;
  *(_QWORD*)(v5 + 206) = 0;
  *(_QWORD*)(v5 + 214) = 0;
  *(_QWORD*)(v5 + 222) = 0;
  *(_QWORD*)(v5 + 230) = 0;
  *(_QWORD*)(v5 + 238) = 0;
  *(_QWORD*)(v5 + 246) = 0;
  *(_QWORD*)(v5 + 254) = 0;
  *(_WORD*)(v5 + 278) = 0;
  *(_QWORD*)(v5 + 32) = v8 + 16;
  v9 = v5 + 32;
  *(_OWORD*)(v5 + 288) = GameData_1a82c50;
  *(_OWORD*)(v5 + 304) = GameData_1a82d00;
  *(_DWORD*)(v5 + 116) = 1065353216;
  *(_DWORD*)(v5 + 120) = 2;
  *(_DWORD*)(v5 + 96) = 1148846080;
  *(_DWORD*)(v5 + 40) = 3;
  v10 = *(unsigned int*)(a1 + 56);
  strcpy(v48_.v48, "\nlight");
  *(_DWORD*)(a1 + 56) = v10 + 1;
  std___1_to_string_1a0a790((void*)(v46_.v46), v10);
  if ((v46_.v46[0] & 1) != 0) {
    v11 = v46_.v47;
  }
  else {
    v11 = (char*)v46_.v46 + 1;
  }
  if ((v46_.v46[0] & 1) != 0) {
    v12 = v46_.v46[1];
  }
  else {
    v12 = (unsigned __int64)LOBYTE(v46_.v46[0]) >> 1;
  }
  v13 = (__int64*)GameRoutine_1a09ce0((__int64)v48_.v48, v11, v12);
  v14 = *v13;
  v15 = v13[1];
  *v13 = 0;
  v13[1] = 0;
  v50_.v50[0] = v14;
  v50_.v50[1] = v15;
  v16 = v13[2];
  v13[2] = 0;
  v50_.v51 = (char*)v16;
  if ((v46_.v46[0] & 1) != 0 && v46_.v47 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v17, (__int64)v46_.v47);
  }
  if ((v48_.v48[0] & 1) != 0 && v48_.v49 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v18, v48_.v49);
  }
  v19 = 0;
  if ((v50_.v50[0] & 1) != 0) {
    v20 = v50_.v51;
  }
  else {
    v20 = (char*)v50_.v50 + 1;
  }
  while (1) {
    v21 = &v20[v19];
    v22 = v6 + v19;
    if (v20[v19] == 0) {
      v28 = (_BYTE*)(v22 + 216);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 216) = v20[v19];
    if (v21[1] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 217);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 217) = v21[1];
    v23 = v6 + v19;
    if (v21[2] == 0) {
      v28 = (_BYTE*)(v23 + 218);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 218) = v21[2];
    if (v21[3] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 219);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 219) = v21[3];
    v24 = v6 + v19;
    if (v21[4] == 0) {
      v28 = (_BYTE*)(v24 + 220);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 220) = v21[4];
    if (v21[5] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 221);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 221) = v21[5];
    v25 = v6 + v19;
    if (v21[6] == 0) {
      v28 = (_BYTE*)(v25 + 222);
      goto LABEL_40;
    }
    *(_BYTE*)(v25 + 222) = v21[6];
    if (v21[7] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 223);
      goto LABEL_40;
    }
    *(_BYTE*)(v25 + 223) = v21[7];
    v26 = v6 + v19;
    v27 = (unsigned __int8)v21[8];
    if (v27 == 0) {
      break;
    }
    v19 += 9;
    *(_BYTE*)(v26 + 224) = v27;
    if ((_DWORD)v19 == 63) {
      v28 = (_BYTE*)(v6 + v19 + 216);
      goto LABEL_40;
    }
  }
  v28 = (_BYTE*)(v26 + 224);
LABEL_40:
  *v28 = 0;
  v29 = *(__int64**)(a1 + 8);
  v30 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v29 >= v30) {
    v32 = (__int64)v29 - *(_QWORD*)a1;
    v33 = (v32 >> 4) + 1;
    if (v33 >> 60 != 0) {
      GameRoutine_c53620();
    }
    v34 = v30 - *(_QWORD*)a1;
    if (v34 >> 3 > v33) {
      v33 = v34 >> 3;
    }
    if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF0LL) {
      v35 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v35 = v33;
    }
    if (v35 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v36 = fw_memory_HeapManager_Allocate(*v4, 16 * v35, 16, 0);
    v37 = (__int64*)(v36 + v32);
    v38 = v36 + 16 * v35;
    *v37 = v9;
    v37[1] = v6;
    v31 = v36 + v32 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v39 = *(_QWORD*)a1;
    v40 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
    v41 = (char*)v37 - v40;
    memcpy((__int64)v37 - v40, *(_QWORD*)a1, v40);
    *(_QWORD*)a1 = v41;
    *(_QWORD*)(a1 + 8) = v31;
    *(_QWORD*)(a1 + 16) = v38;
    if (v39 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v42, v39);
    }
  }
  else {
    *v29 = v9;
    v29[1] = v6;
    v31 = (__int64)(v29 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) = v31;
  v43 = GameData_212eaf8[0];
  a2[3] = v9;
  a2[4] = 0;
  *a2 = v43 + 16;
  a2[1] = v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  a2[2] = v6;
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v44 = v50_.v50[0];
  a2[4] = v9;
  if ((v44 & 1) != 0 && v50_.v51 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v45, (__int64)v50_.v51);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

#pragma GCC visibility pop
