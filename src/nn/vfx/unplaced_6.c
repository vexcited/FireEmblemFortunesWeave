#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_2135448;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a836a0;
float32x4_t game_5c05c0(float32x4_t*, float32x2_t*, float32x4_t*, float);
void GameRoutine_5c2180(float, float, __int64, float32x4_t*, __int64,
                        float32x4_t*, float*);
void game_5c26c0(long double, float, long double, __int64, float32x4_t*,
                 __int64, float*, float*, float*);
void game_5c32a0(long double, float, long double, __int64, float32x4_t*,
                 __int64, float*, float*, float*);
void game_5c3e70(float, __int64, __int128*, __int64, _DWORD*, float32x2_t*);
float nn_vfx_5ce320(__int64 a1, __int64 a2, __int64 a3, float* a4, char a5);
__int64 nn_vfx_5d6960(__int64 result, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_vfx_5d80a0(__int64 result, __int64 a2, __int64 a3, __int64 a4);
unsigned __int64 nn_vfx_5dac20(float* a1, float* a2);

float nn_vfx_5ce320(__int64 a1, __int64 a2, __int64 a3, float* a4, char a5)
{
  __int64 v5;
  float v6;
  __int64 v7;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  long double v17;
  long double v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  float v24;
  long double v25;
  __int64 v26;
  float v27;
  float32x4_t* v28;
  float32x4_t** v29;
  float* v30;
  int v31;
  float32x4_t* v32;
  __int64 v33;
  __int64 v34;
  float32x4_t v35;
  unsigned __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float32x4_t* v42;
  float32x4_t* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  unsigned __int64 v50;
  float v51;
  float v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float32x4_t* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  float32x4_t v62;
  unsigned __int64 v63;
  unsigned int* v64;
  unsigned int* v65;
  unsigned int* v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  unsigned int* v71;
  unsigned int* v72;
  unsigned int* v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  unsigned int* v78;
  unsigned int* v79;
  unsigned int* v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  unsigned __int64 v85;
  float32x4_t v86;
  float32x4_t v87;
  int8x16_t v88;
  int8x16_t v89;
  int v90;
  float32x4_t* v91;
  float32x4_t v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  int v95;
  float32x4_t v96;
  float32x4_t* v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float v101;
  float v102;
  float v103;
  float32x4_t v104;
  float v105;
  __int64 v106;
  float v107;
  float v108;
  __int64 v109;
  float v110;
  float* v111;
  float v112;
  float v113;
  __int64 v114;
  float v115;
  float32x4_t v116;
  float v117;
  float v118;
  __int64 v119;
  float v120;
  float* v121;
  float v122;
  float v123;
  __int64 v124;
  float v125;
  float* v126;
  float v127;
  float v128;
  __int64 v129;
  __int128 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  float32x4_t* v136;
  __int64 v137;
  __int64 v138;
  float32x4_t v139;
  unsigned __int64 v140;
  float32x4_t* v141;
  float32x4_t v142;
  float32x4_t v143;
  _QWORD* v144;
  int8x16_t v145;
  float32x4_t v146;
  int8x16_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  int8x16_t v152;
  int8x16_t v153;
  float32x4_t v154;
  float32x4_t v155;
  int8x16_t v156;
  int8x16_t v157;
  float32x4_t v158;
  float32x4_t v159;
  int8x16_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  int8x16_t v165;
  float32x4_t v166;
  float32x4_t v167;
  int8x16_t v168;
  float32x4_t v169;
  int8x16_t v170;
  float32x4_t v171;
  float32x4_t v172;
  float32x4_t v173;
  float32x4_t v174;
  int8x16_t v175;
  float32x4_t v176;
  float32x4_t v177;
  int8x16_t v178;
  float32x4_t v179;
  float32x4_t v180;
  int8x16_t v181;
  int8x16_t v182;
  float32x4_t v183;
  float32x4_t v184;
  int8x16_t v185;
  float v186;
  float v187;
  unsigned int* v188;
  unsigned int* v189;
  unsigned int* v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  int8x16_t v196;
  int8x16_t v197;
  float v198;
  float32x4_t v199;
  int8x16_t v200;
  float32x4_t v201;
  float32x4_t v202;
  float v203;
  float32x4_t v204;
  float32x4_t v205;
  int8x16_t v206;
  float32x4_t v207;
  float32x4_t v208;
  int8x16_t v209;
  int8x16_t v210;
  float v211;
  float32x4_t v212;
  int8x16_t v213;
  float32x4_t v214;
  float32x4_t v215;
  float32x4_t v216;
  float32x4_t v217;
  float32x4_t v218;
  float32x4_t v219;
  float32x4_t v220;
  int8x16_t v221;
  float32x4_t v222;
  float32x4_t v223;
  float32x4_t v224;
  int8x16_t v225;
  __int128 v226;
  float32x4_t* v227;
  float32x4_t* v228;
  int v229;
  float32x4_t v230;
  unsigned __int64 v231;
  int8x16_t v232;
  __int64 v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  float32x4_t v238;
  float32x4_t v239;
  int8x16_t v240;
  float32x4_t v241;
  float32x4_t v242;
  float32x4_t* v243;
  unsigned __int64 v244;
  float v245;
  float v246;
  float32x4_t v247;
  float v248;
  float v249;
  __int64 v250;
  float v251;
  float v252;
  __int64 v253;
  float v254;
  float* v255;
  float v256;
  float v257;
  __int64 v258;
  float v259;
  float32x4_t v260;
  float v261;
  float v262;
  __int64 v263;
  float v264;
  float* v265;
  float v266;
  float v267;
  __int64 v268;
  float v269;
  float* v270;
  float v271;
  float v272;
  __int64 v273;
  int v274;
  float32x4_t* v275;
  __int64 v276;
  __int64 v277;
  float32x4_t v278;
  unsigned __int64 v279;
  int v280;
  int v281;
  float32x4_t v282;
  int v283;
  float32x4_t* v284;
  unsigned int* v285;
  unsigned int* v286;
  unsigned int* v287;
  float32x4_t v288;
  float32x4_t v289;
  float32x4_t v290;
  int v291;
  float32x4_t v292;
  float32x4_t* v293;
  float32x4_t v294;
  float32x4_t v295;
  float32x4_t* v296;
  float32x4_t v297;
  float32x4_t v298;
  float32x4_t v299;
  float32x4_t* v300;
  float32x4_t v301;
  int v302;
  float32x4_t v303;
  float32x4_t v304;
  int v305;
  float32x4_t v306;
  float v307;
  int8x16_t v308;
  float32x4_t v309;
  float32x4_t v310;
  int8x16_t* v311;
  int8x16_t v312;
  float32x4_t v313;
  float32x4_t v314;
  int8x16_t v315;
  float32x4_t v316;
  int8x16_t v317;
  float32x4_t v318;
  float32x4_t v319;
  int v320;
  float32x4_t* v321;
  float32x4_t v322;
  float32x4_t v323;
  float32x4_t v324;
  float v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float v332;
  float32x4_t v333;
  float32x4_t v334;
  float32x4_t v335;
  __int64 v336;
  __int64 v337;
  float32x4_t* v338;
  float32x4_t v339;
  int8x16_t v340;
  float32x4_t v341;
  float32x4_t v342;
  float32x4_t* v343;
  float32x4_t v344;
  int8x16_t v345;
  float32x4_t v346;
  float32x4_t v347;
  float32x4_t v348;
  float32x4_t v349;
  int8x16_t v350;
  float32x4_t v351;
  float32x4_t v352;
  int8x16_t v353;
  int8x16_t v354;
  float32x4_t v355;
  float32x4_t v356;
  float32x4_t v357;
  float32x4_t v358;
  float32x4_t v359;
  float32x4_t v360;
  float32x4_t v361;
  float32x4_t v362;
  int8x16_t v363;
  float32x4_t v364;
  float32x4_t v365;
  float v367;
  float v368;
  __int128 v369;
  float32x4_t v370;
  float32x4_t v371;
  float32x4_t v372;
  float32x4_t v373;
  long double v374;
  long double v375;

  {
    v5 = *(_QWORD*)(a2 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = a4[13];
    __asm__ volatile("" ::"w"(v6));
  }
  {
    v7 = *(int*)(a2 + 32);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v12 = *(float*)(v5 + 76);
    __asm__ volatile("" ::"w"(v12));
  }
  {
    v13 = *(_QWORD*)(v5 + 496);
    __asm__ volatile("" ::"r"(v13));
  }
  v373 = (__typeof__(v373)){0};
  v372 = (__typeof__(v372)){0};
  {
    v14 = *(_QWORD*)(v5 + 152);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_QWORD*)(v5 + 568);
    __asm__ volatile("" ::"r"(v15));
  }
  v368 = v12;
  v16 = v6 + (float)((float)(0x1.0000000000000p+0f - v6) *
                     (float)(0x1.0000000000000p+0f - v12));
  v17 = *(long double*)(v13 + 16 * v7);
  v367 = v16;
  *(_QWORD*)&v18 = *(_QWORD*)(v5 + 1572);
  *((_QWORD*)&v18 + 1) = *(unsigned int*)(v5 + 1580);
  v374 = v18;
  v375 = v17;
  LODWORD(v18) = *(_DWORD*)(v5 + 1620);
  LODWORD(v17) = *(_DWORD*)(a2 + 24);
  game_5c26c0(v18, *(float*)(a2 + 28), v17, v14, &v373, v15, (float*)&v375,
              (float*)(v5 + 1056), (float*)&v374);
  {
    v19 = *(_QWORD*)(a2 + 16);
    __asm__ volatile("" ::"r"(v19));
  }
  *(_QWORD*)&v20 = *(_QWORD*)(v19 + 1584);
  {
    v21 = *(_QWORD*)(v19 + 152);
    __asm__ volatile("" ::"r"(v21));
  }
  {
    v22 = *(_QWORD*)(v19 + 568);
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = *(long double*)(*(_QWORD*)(v19 + 496) + 16LL * *(int*)(a2 + 32));
  *((_QWORD*)&v20 + 1) = *(unsigned int*)(v19 + 1592);
  LODWORD(v25) = *(_DWORD*)(a2 + 24);
  {
    v24 = *(float*)(a2 + 28);
    __asm__ volatile("" ::"w"(v24));
  }
  v374 = v20;
  v375 = v23;
  LODWORD(v20) = *(_DWORD*)(v19 + 1632);
  game_5c32a0(v20, v24, v25, v21, &v372, v22, (float*)&v375,
              (float*)(v19 + 1072), (float*)&v374);
  if ((a5 & 1) == 0) {
    {
      v37 = *(_QWORD**)(a2 + 16);
      __asm__ volatile("" ::"r"(v37));
    }
    {
      v38 = *(int*)(a2 + 32);
      __asm__ volatile("" ::"r"(v38));
    }
    v371 = (__typeof__(v371)){0};
    v38 *= 16;
    {
      v39 = v37[61];
      __asm__ volatile("" ::"r"(v39));
    }
    {
      v40 = v37[19];
      __asm__ volatile("" ::"r"(v40));
    }
    {
      v41 = v37[71];
      __asm__ volatile("" ::"r"(v41));
    }
    {
      v42 = *(float32x4_t**)(*(_QWORD*)(a3 + 88) + 88LL);
      __asm__ volatile("" ::"r"(v42));
    }
    v375 = *(long double*)(v37[62] + v38);
    v374 = *(long double*)(v39 + v38);
    GameRoutine_5c2180(*(float*)(a2 + 28), *(float*)(a2 + 24), v40, &v371, v41,
                       (float32x4_t*)&v374, (float*)&v375);
    {
      v43 = *(float32x4_t**)(a2 + 16);
      __asm__ volatile("" ::"r"(v43));
    }
    {
      v44 = *(int*)(a2 + 32);
      __asm__ volatile("" ::"r"(v44));
    }
    {
      v45 = *((_DWORD*)a4 + 1);
      __asm__ volatile("" ::"r"(v45));
    }
    {
      v46 = LANES128(v43[29]).n128_u64[0] + 16 * v44;
      __asm__ volatile("" ::"r"(v46));
    }
    v47 = vmulq_f32(v371, *(float32x4_t*)(LANES128(v43[7]).n128_u64[1] + 320));
    v371 = v47;
    {
      v48 = *v42;
      __asm__ volatile("" ::"w"(v48));
    }
    LANES128(v49).n128_u64[0] = *(_QWORD*)v46;
    {
      v50 = *(unsigned int*)(v46 + 8);
      __asm__ volatile("" ::"r"(v50));
    }
    if (v45 != 0) {
      v52 = v367;
      v51 = v368;
      LANES128(v49).n128_u64[1] = v50;
      goto LABEL_24;
    }
    {
      v64 = (unsigned int*)(LANES128(v43[33]).n128_u64[0] + 16 * v44);
      __asm__ volatile("" ::"r"(v64));
    }
    {
      v65 = (unsigned int*)(LANES128(v43[33]).n128_u64[1] + 16 * v44);
      __asm__ volatile("" ::"r"(v65));
    }
    {
      v66 = (unsigned int*)(LANES128(v43[34]).n128_u64[0] + 16 * v44);
      __asm__ volatile("" ::"r"(v66));
    }
    if (*(_BYTE*)(LANES128(v43[10]).n128_u64[0] + 1875) == 2) {
      LANES128(v67).n128_u64[0] = *v64 | ((unsigned __int64)*v65 << 32);
      LANES128(v67).n128_u64[1] = *v66;
      LANES128(v68).n128_u64[0] = v64[1] | ((unsigned __int64)v65[1] << 32);
      LANES128(v68).n128_u64[1] = v66[1];
      LANES128(v69).n128_u64[0] = v64[2] | ((unsigned __int64)v65[2] << 32);
      LANES128(v69).n128_u64[1] = v66[2];
      LANES128(v70).n128_u64[0] = LANES128(v43[55]).n128_u64[0];
      {
        v85 = LANES128(v43[55]).n128_u32[2];
        __asm__ volatile("" ::"r"(v85));
      }
    }
    else {
      if (*(_BYTE*)(LANES128(v43[10]).n128_u64[0] + 1875) == 0) {
        {
          v67 = v43[52];
          __asm__ volatile("" ::"w"(v67));
        }
        {
          v68 = v43[53];
          __asm__ volatile("" ::"w"(v68));
        }
        {
          v69 = v43[54];
          __asm__ volatile("" ::"w"(v69));
        }
        {
          v70 = v43[55];
          __asm__ volatile("" ::"w"(v70));
        }
      LABEL_23:
        v86 = vmlaq_lane_f32(vmulq_n_f32(v67, LANES128(v49).n128_f32[0]), v68,
                             COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                             1);
        v52 = v367;
        v51 = v368;
        v49 = vaddq_f32(v70, vmlaq_n_f32(v86, v69, *(float*)&v50));
      LABEL_24:
        *v42 = v49;
        *(_QWORD*)(a3 + 72) = LANES128(*(v42)).n128_u64[1];
        *(_QWORD*)(a3 + 64) = LANES128(*(v42)).n128_u64[0];
        v87 = vsubq_f32(*v42, v48);
        v88 = vmulq_f32(v87, v87);
        LANES128(v88).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                .n64_u64[0];
        *(float*)(a3 + 140) =
            *(float*)(a3 + 140) +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]))))
                .n64_f32[0];
        LANES128(v42[5]).n128_u32[0] = LANES128(v47).n128_u32[0];
        {
          v89 = *(int8x16_t*)(*(_QWORD*)(a2 + 16) + 848LL);
          __asm__ volatile("" ::"w"(v89));
        }
        v42[4] = v89;
        if (*(int*)(a3 + 112) >= 2) {
          v90 = 1;
          LANES128(v89).n128_u32[3] = 0;
          {
            v91 = *(float32x4_t**)(*(_QWORD*)(a3 + 88) + 88LL);
            __asm__ volatile("" ::"r"(v91));
          }
          LANES128(v89).n128_f32[0] = (float)(v51 * v52) * a4[14];
          LANES128(v89).n128_f32[1] = (float)(v51 * v52) * a4[15];
          LANES128(v89).n128_f32[2] = (float)(v51 * v52) * a4[16];
          do {
            {
              v91 = (float32x4_t*)LANES128(v91[5]).n128_u64[1];
              __asm__ volatile("" ::"r"(v91));
            }
            ++v90;
            v92 = vaddq_f32(v89, vmulq_n_f32(v91[1], v52));
            *v91 = vaddq_f32(*v91, vmulq_n_f32(v92, v51));
            v91[1] = v92;
          } while (v90 < (signed __int32)*(_DWORD*)(a3 + 112));
        }
        return LANES128(v89).n128_f32[0];
      }
      LANES128(v67).n128_u64[0] = *v64 | ((unsigned __int64)*v65 << 32);
      LANES128(v67).n128_u64[1] = *v66;
      LANES128(v68).n128_u64[0] = v64[1] | ((unsigned __int64)v65[1] << 32);
      {
        v85 = v66[3];
        __asm__ volatile("" ::"r"(v85));
      }
      LANES128(v68).n128_u64[1] = v66[1];
      LANES128(v69).n128_u64[0] = v64[2] | ((unsigned __int64)v65[2] << 32);
      LANES128(v69).n128_u64[1] = v66[2];
      LANES128(v70).n128_u64[0] = v64[3] | ((unsigned __int64)v65[3] << 32);
    }
    LANES128(v70).n128_u64[1] = v85;
    goto LABEL_23;
  }
  {
    v26 = *(_QWORD*)(a3 + 88);
    __asm__ volatile("" ::"r"(v26));
  }
  {
    v27 = *a4;
    __asm__ volatile("" ::"w"(v27));
  }
  v29 = (float32x4_t**)(v26 + 88);
  {
    v28 = *(float32x4_t**)(v26 + 88);
    __asm__ volatile("" ::"r"(v28));
  }
  *(_QWORD*)(a3 + 88) = *(_QWORD*)(v26 + 96);
  v30 = (float*)GameData_2135448;
  if (LODWORD(v27) == 3) {
    {
      v31 = *(_DWORD*)(a3 + 112);
      __asm__ volatile("" ::"r"(v31));
    }
    if ((float)(a4[6] + -0x1.0000000000000p+0f) > (float)v31) {
      *(_DWORD*)(a3 + 112) = v31 + 1;
    }
    {
      v32 = *(float32x4_t**)(a2 + 16);
      __asm__ volatile("" ::"r"(v32));
    }
    {
      v33 = *(int*)(a2 + 32);
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v34 = LANES128(v32[29]).n128_u64[0] + 16 * v33;
      __asm__ volatile("" ::"r"(v34));
    }
    LANES128(v35).n128_u64[0] = *(_QWORD*)v34;
    {
      v36 = *(unsigned int*)(v34 + 8);
      __asm__ volatile("" ::"r"(v36));
    }
    if (*((_DWORD*)a4 + 1) != 0) {
      LANES128(v35).n128_u64[1] = v36;
      goto LABEL_33;
    }
    {
      v71 = (unsigned int*)(LANES128(v32[33]).n128_u64[0] + 16 * v33);
      __asm__ volatile("" ::"r"(v71));
    }
    {
      v72 = (unsigned int*)(LANES128(v32[33]).n128_u64[1] + 16 * v33);
      __asm__ volatile("" ::"r"(v72));
    }
    {
      v73 = (unsigned int*)(LANES128(v32[34]).n128_u64[0] + 16 * v33);
      __asm__ volatile("" ::"r"(v73));
    }
    if (*(_BYTE*)(LANES128(v32[10]).n128_u64[0] + 1875) == 2) {
      LANES128(v74).n128_u64[0] = *v71 | ((unsigned __int64)*v72 << 32);
      LANES128(v74).n128_u64[1] = *v73;
      LANES128(v75).n128_u64[0] = v71[1] | ((unsigned __int64)v72[1] << 32);
      LANES128(v75).n128_u64[1] = v73[1];
      LANES128(v76).n128_u64[0] = v71[2] | ((unsigned __int64)v72[2] << 32);
      LANES128(v76).n128_u64[1] = v73[2];
      LANES128(v77).n128_u64[0] = LANES128(v32[55]).n128_u64[0];
      {
        v93 = LANES128(v32[55]).n128_u32[2];
        __asm__ volatile("" ::"r"(v93));
      }
    }
    else {
      if (*(_BYTE*)(LANES128(v32[10]).n128_u64[0] + 1875) == 0) {
        {
          v74 = v32[52];
          __asm__ volatile("" ::"w"(v74));
        }
        {
          v75 = v32[53];
          __asm__ volatile("" ::"w"(v75));
        }
        {
          v76 = v32[54];
          __asm__ volatile("" ::"w"(v76));
        }
        {
          v77 = v32[55];
          __asm__ volatile("" ::"w"(v77));
        }
      LABEL_32:
        v35 = vaddq_f32(
            v77, vmlaq_n_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v74, LANES128(v35).n128_f32[0]), v75,
                         COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
                     v76, *(float*)&v36));
      LABEL_33:
        *(float32x4_t*)v26 = v35;
        *(_QWORD*)(a3 + 72) = *(_QWORD*)(v26 + 8);
        *(_QWORD*)(a3 + 64) = *(_QWORD*)v26;
        if (*(int*)(a3 + 112) >= 2) {
          v95 = 1;
          LANES128(v96).n128_u32[3] = 0;
          LANES128(v96).n128_f32[0] = (float)(v368 * v367) * a4[14];
          LANES128(v96).n128_f32[1] = (float)(v368 * v367) * a4[15];
          LANES128(v96).n128_f32[2] = (float)(v368 * v367) * a4[16];
          do {
            {
              v97 = *v29;
              __asm__ volatile("" ::"r"(v97));
            }
            ++v95;
            {
              v99 = **v29;
              __asm__ volatile("" ::"w"(v99));
            }
            {
              v98 = (*v29)[1];
              __asm__ volatile("" ::"w"(v98));
            }
            {
              v29 = (float32x4_t**)&LANES128((*v29)[5]).n128_u64[1];
              __asm__ volatile("" ::"r"(v29));
            }
            v100 = vaddq_f32(v96, vmulq_n_f32(v98, v367));
            *v97 = vaddq_f32(v99, vmulq_n_f32(v100, v368));
            v97[1] = v100;
          } while (v95 < (signed __int32)*(_DWORD*)(a3 + 112));
        }
        {
          v102 = a4[17];
          __asm__ volatile("" ::"w"(v102));
        }
        {
          v101 = a4[18];
          __asm__ volatile("" ::"w"(v101));
        }
        {
          v103 = *(float*)(a3 + 128);
          __asm__ volatile("" ::"w"(v103));
        }
        {
          v104 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 496LL) +
                                 16LL * *(int*)(a2 + 32));
          __asm__ volatile("" ::"w"(v104));
        }
        {
          v105 = v102 * a4[21];
          __asm__ volatile("" ::"w"(v105));
        }
        v106 =
            (__int64)(float)((float)((float)(PSEUDO_UNFUSED(
                                         0x1.6800000000000p+8f *
                                         LANES128(v104).n128_f32[0])) +
                                     (float)(v103 * (float)(a4[19] * v102))) *
                             0x1.6c16c20000000p+23f);
        v107 = v30[4 * BYTE3(v106) + 1] +
               (float)(v30[4 * BYTE3(v106) + 3] *
                       vcvts_n_f32_u32(v106 & 0xFFFFFF, 0x18u));
        v108 = vmuls_lane_f32(
            0x1.6800000000000p+8f,
            COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]), 1);
        v109 = (__int64)(float)((float)(v108 +
                                        (float)(v103 * 0x1.0000000000000p-1f)) *
                                0x1.6c16c20000000p+23f);
        v110 = vcvts_n_f32_u32(v109 & 0xFFFFFF, 0x18u);
        {
          v111 = &v30[4 * BYTE3(v109)];
          __asm__ volatile("" ::"r"(v111));
        }
        {
          v112 = v111[1];
          __asm__ volatile("" ::"w"(v112));
        }
        {
          v113 = v111[3];
          __asm__ volatile("" ::"w"(v113));
        }
        {
          v114 =
              (__int64)(float)((float)(v108 +
                                       (float)(v103 * (float)(v102 * a4[20]))) *
                               0x1.6c16c20000000p+23f);
          __asm__ volatile("" ::"r"(v114));
        }
        v115 = (float)(v112 + (float)(v113 * v110)) + v107;
        {
          v116 = *(float32x4_t*)(v26 + 16);
          __asm__ volatile("" ::"w"(v116));
        }
        *(float*)(v26 + 16) = v115;
        LANES128(v116).n128_f32[0] = v115;
        v117 = v30[4 * BYTE3(v114) + 1] +
               (float)(v30[4 * BYTE3(v114) + 3] *
                       vcvts_n_f32_u32(v114 & 0xFFFFFF, 0x18u));
        v118 = vmuls_lane_f32(0x1.6800000000000p+8f, v104, 2);
        v119 = (__int64)(float)((float)(v118 +
                                        (float)(v103 * 0x1.0000000000000p-1f)) *
                                0x1.6c16c20000000p+23f);
        v120 = vcvts_n_f32_u32(v119 & 0xFFFFFF, 0x18u);
        {
          v121 = &v30[4 * BYTE3(v119)];
          __asm__ volatile("" ::"r"(v121));
        }
        {
          v122 = v121[1];
          __asm__ volatile("" ::"w"(v122));
        }
        {
          v123 = v121[3];
          __asm__ volatile("" ::"w"(v123));
        }
        v124 = (__int64)(float)((float)(v118 + (float)(v103 * v105)) *
                                0x1.6c16c20000000p+23f);
        v125 = vcvts_n_f32_u32(v124 & 0xFFFFFF, 0x18u);
        {
          v126 = &v30[4 * BYTE3(v124)];
          __asm__ volatile("" ::"r"(v126));
        }
        LANES128(v116).n128_f32[1] =
            v117 + (float)(v122 + (float)(v123 * v120));
        *(float32x4_t*)(v26 + 16) = v116;
        {
          v127 = v126[1];
          __asm__ volatile("" ::"w"(v127));
        }
        {
          v128 = v126[3];
          __asm__ volatile("" ::"w"(v128));
        }
        v129 = (__int64)(float)((float)(vmuls_lane_f32(0x1.6800000000000p+8f,
                                                       v104, 3) +
                                        (float)(v103 * 0x1.0000000000000p-1f)) *
                                0x1.6c16c20000000p+23f);
        LANES128(v116).n128_u64[1] = COERCE_UNSIGNED_INT(
            (float)(v127 + (float)(v128 * v125)) +
            (float)(v30[4 * BYTE3(v129) + 1] +
                    (float)(v30[4 * BYTE3(v129) + 3] *
                            vcvts_n_f32_u32(v129 & 0xFFFFFF, 0x18u))));
        *(float32x4_t*)(v26 + 16) = vmulq_n_f32(v116, v101);
        if (*((_DWORD*)a4 + 1) != 0) {
          v130 = GameData_1a83610;
        }
        else {
          v130 = *(_OWORD*)(*(_QWORD*)(a2 + 16) + 848LL);
          DWORD3(v130) = 0;
        }
        *(_OWORD*)(v26 + 64) = v130;
        v371 = (__typeof__(v371)){0};
        {
          v131 = *(_QWORD**)(a2 + 16);
          __asm__ volatile("" ::"r"(v131));
        }
        {
          v132 = v131[61];
          __asm__ volatile("" ::"r"(v132));
        }
        {
          v133 = 16LL * *(int*)(a2 + 32);
          __asm__ volatile("" ::"r"(v133));
        }
        {
          v134 = v131[19];
          __asm__ volatile("" ::"r"(v134));
        }
        {
          v135 = v131[71];
          __asm__ volatile("" ::"r"(v135));
        }
        v375 = *(long double*)(v131[62] + v133);
        v374 = *(long double*)(v132 + v133);
        GameRoutine_5c2180(*(float*)(a2 + 28), *(float*)(a2 + 24), v134, &v371,
                           v135, (float32x4_t*)&v374, (float*)&v375);
        *(float*)(v26 + 80) =
            LANES128(v371).n128_f32[0] *
            *(float*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 120LL) + 320LL);
        if (*(_DWORD*)(a3 + 112) == 1) {
          {
            v136 = *(float32x4_t**)(a2 + 16);
            __asm__ volatile("" ::"r"(v136));
          }
          {
            v137 = *(int*)(a2 + 32);
            __asm__ volatile("" ::"r"(v137));
          }
          {
            v138 = LANES128(v136[29]).n128_u64[1] + 16 * v137;
            __asm__ volatile("" ::"r"(v138));
          }
          LANES128(v139).n128_u64[0] = *(_QWORD*)v138;
          {
            v140 = *(unsigned int*)(v138 + 8);
            __asm__ volatile("" ::"r"(v140));
          }
          if (*((_DWORD*)a4 + 1) != 0) {
            LANES128(v139).n128_u64[1] = v140;
          }
          else {
            {
              v188 =
                  (unsigned int*)(LANES128(v136[33]).n128_u64[0] + 16 * v137);
              __asm__ volatile("" ::"r"(v188));
            }
            {
              v189 =
                  (unsigned int*)(LANES128(v136[33]).n128_u64[1] + 16 * v137);
              __asm__ volatile("" ::"r"(v189));
            }
            {
              v190 =
                  (unsigned int*)(LANES128(v136[34]).n128_u64[0] + 16 * v137);
              __asm__ volatile("" ::"r"(v190));
            }
            if (*(_BYTE*)(LANES128(v136[10]).n128_u64[0] + 1875) != 0) {
              LANES128(v191).n128_u64[0] =
                  *v188 | ((unsigned __int64)*v189 << 32);
              LANES128(v191).n128_u64[1] = *v190;
              LANES128(v192).n128_u64[0] =
                  v188[1] | ((unsigned __int64)v189[1] << 32);
              LANES128(v192).n128_u64[1] = v190[1];
              LANES128(v193).n128_u64[0] =
                  v188[2] | ((unsigned __int64)v189[2] << 32);
              LANES128(v193).n128_u64[1] = v190[2];
            }
            else {
              {
                v191 = v136[52];
                __asm__ volatile("" ::"w"(v191));
              }
              {
                v192 = v136[53];
                __asm__ volatile("" ::"w"(v192));
              }
              {
                v193 = v136[54];
                __asm__ volatile("" ::"w"(v193));
              }
            }
            v139 = vaddq_f32(
                vmlaq_n_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v191, LANES128(v139).n128_f32[0]), v192,
                        COERCE_AS(float32x2_t, LANES128(v139).n128_u64[0]), 1),
                    v193, *(float*)&v140),
                COERCE_AS(float32x4_t, 0));
          }
          *(float32x4_t*)(v26 + 32) = v139;
          {
            v203 = *(float*)(a2 + 28);
            __asm__ volatile("" ::"w"(v203));
          }
          LANES128(v204).n128_u32[3] = 0;
          LANES128(v204).n128_f32[0] = v203 * a4[14];
          LANES128(v204).n128_f32[1] = v203 * a4[15];
          LANES128(v204).n128_f32[2] = v203 * a4[16];
          v205 = vaddq_f32(v139, v204);
          v206 = vmulq_f32(v205, v205);
          *(float32x4_t*)(v26 + 32) = v205;
          LANES128(v206).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v206, v206, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v206).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v206).n128_f32[0] >= 0x1.4f8b580000000p-17f) {
            LANES128(v206).n128_u64[1] = LANES128(v206).n128_u64[0];
            v207 = vrsqrteq_f32(v206);
            v208 = vmulq_f32(v207, vrsqrtsq_f32(v207, vmulq_f32(v206, v207)));
            v209 = vbicq_s8(
                vmulq_f32(
                    v205,
                    vmulq_f32(v208, vrsqrtsq_f32(v208, vmulq_f32(v206, v208)))),
                vceqzq_f32(v206));
            v210 = vmulq_f32(v209, COERCE_AS(float32x4_t, GameData_1a83610));
            LANES128(v210).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v210, v210, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0])))
                    .n64_u64[0];
            LODWORD(v211) =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v210).n128_u64[0])))
                    .n64_u32[0];
            if (fabsf(fabsf(v211) + -0x1.0000000000000p+0f) >=
                0x1.4f8b580000000p-17f) {
              LANES128(v216).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v209, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v217).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v216).n128_i8[8] =
                  vqtbl1_s8(v209, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v218).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v209, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v217).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                            COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v218).n128_i8[8] =
                  vqtbl1_s8(v209, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              LANES128(v219).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v219).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                            COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v220 = vmlsq_f32(vmulq_f32(v216, v217), v219, v218);
              v221 = vmulq_f32(v220, v220);
              LANES128(v221).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v221, v221, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v221).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v221).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v221).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v221).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v221).n128_u64[1] = LANES128(v221).n128_u64[0];
              v222 = vrsqrteq_f32(v221);
              v223 = vmulq_f32(v222, vrsqrtsq_f32(v222, vmulq_f32(v221, v222)));
              *(int8x16_t*)(v26 + 48) = vbicq_s8(
                  vmulq_f32(v220,
                            vmulq_f32(v223, vrsqrtsq_f32(
                                                v223, vmulq_f32(v221, v223)))),
                  vceqzq_f32(v221));
            }
            else {
              v212 =
                  vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v211);
              v213 = vmulq_f32(v212, v212);
              LANES128(v213).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v213, v213, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v213).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v213).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v213).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v213).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v213).n128_u64[1] = LANES128(v213).n128_u64[0];
              v214 = vrsqrteq_f32(v213);
              v215 = vmulq_f32(v214, vrsqrtsq_f32(v214, vmulq_f32(v213, v214)));
              *(int8x16_t*)(v26 + 48) = vbicq_s8(
                  vmulq_f32(v212,
                            vmulq_f32(v215, vrsqrtsq_f32(
                                                v215, vmulq_f32(v213, v215)))),
                  vceqzq_f32(v213));
            }
          }
          else {
            *(_OWORD*)(v26 + 32) = GameData_1a83610;
            *(_OWORD*)(v26 + 48) = GameData_1a82dd0;
          }
          goto LABEL_129;
        }
        {
          v141 = *(float32x4_t**)(v26 + 88);
          __asm__ volatile("" ::"r"(v141));
        }
        {
          v142 = *(float32x4_t*)v26;
          __asm__ volatile("" ::"w"(v142));
        }
        v143 = vsubq_f32(*(float32x4_t*)v26, *v141);
        v145 = vmulq_f32(v143, v143);
        *(float32x4_t*)(v26 + 32) = v143;
        v144 = (_QWORD*)(v26 + 32);
        LANES128(v145).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
                .n64_u64[0];
        LANES128(v145).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v145).n128_f32[0] >= 0x1.4f8b580000000p-17f) {
          LANES128(v145).n128_u64[1] = LANES128(v145).n128_u64[0];
          {
            v148 = v141[2];
            __asm__ volatile("" ::"w"(v148));
          }
          {
            v149 = v141[3];
            __asm__ volatile("" ::"w"(v149));
          }
          v150 = vrsqrteq_f32(v145);
          v151 = vmulq_f32(v150, vrsqrtsq_f32(v150, vmulq_f32(v145, v150)));
          v152 = vbicq_s8(
              vmulq_f32(
                  v143,
                  vmulq_f32(v151, vrsqrtsq_f32(v151, vmulq_f32(v145, v151)))),
              vceqzq_f32(v145));
          v153 = vmulq_f32(v148, v148);
          LANES128(v153).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v153, v153, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v153).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v153).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v153).n128_u64[1] = LANES128(v153).n128_u64[0];
          v154 = vrsqrteq_f32(v153);
          v155 = vmulq_f32(v154, vrsqrtsq_f32(v154, vmulq_f32(v153, v154)));
          v156 = vbicq_s8(
              vmulq_f32(
                  v148,
                  vmulq_f32(v155, vrsqrtsq_f32(v155, vmulq_f32(v153, v155)))),
              vceqzq_f32(v153));
          v157 = vmulq_f32(v149, v149);
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
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v157).n128_u64[1] = LANES128(v157).n128_u64[0];
          v158 = vrsqrteq_f32(v157);
          v159 = vmulq_f32(v158, vrsqrtsq_f32(v158, vmulq_f32(v157, v158)));
          v160 = vbicq_s8(
              vmulq_f32(
                  v149,
                  vmulq_f32(v159, vrsqrtsq_f32(v159, vmulq_f32(v157, v159)))),
              vceqzq_f32(v157));
          LANES128(v161).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v162).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v161).n128_i8[8] =
              vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v163).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v162).n128_i8[8] =
              vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v163).n128_i8[8] =
              vqtbl1_s8(v160, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v160).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v160).n128_i8[8] =
              vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v164 = vmlsq_f32(vmulq_f32(v161, v162), v160, v163);
          v165 = vmulq_f32(v164, v164);
          LANES128(v165).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v165, v165, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v165).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v165).n128_u64[1] = LANES128(v165).n128_u64[0];
          v166 = vrsqrteq_f32(v165);
          v167 = vmulq_f32(v166, vrsqrtsq_f32(v166, vmulq_f32(v165, v166)));
          v168 = vbicq_s8(
              vmulq_f32(
                  v164,
                  vmulq_f32(v167, vrsqrtsq_f32(v167, vmulq_f32(v165, v167)))),
              vceqzq_f32(v165));
          LANES128(v167).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v167).n128_i8[8] =
              vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v164).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v163).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v164).n128_i8[8] =
              vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v152).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v163).n128_i8[8] =
              vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v152).n128_i8[8] =
              vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v169 = vmlsq_f32(vmulq_f32(v167, v163), v152, v164);
          v170 = vmulq_f32(v169, v169);
          LANES128(v170).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v170, v170, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v171).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v171).n128_u64[1] = LANES128(v171).n128_u64[0];
          v172 = vrsqrteq_f32(v171);
          v173 = vmulq_f32(v172, vrsqrtsq_f32(v172, vmulq_f32(v171, v172)));
          v174 = vmulq_f32(
              v169, vmulq_f32(v173, vrsqrtsq_f32(v173, vmulq_f32(v171, v173))));
        }
        else {
          v146 = vsubq_f32(v142, *v141);
          v147 = vmulq_f32(v146, v146);
          LANES128(v147).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v147, v147, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v147).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v147).n128_f32[0] < 0x1.4f8b580000000p-17f) {
            *(_QWORD*)(v26 + 56) = LANES128(v141[3]).n128_u64[1];
            *(_QWORD*)(v26 + 48) = LANES128(v141[3]).n128_u64[0];
            *(_QWORD*)(v26 + 40) = LANES128(v141[2]).n128_u64[1];
            *v144 = LANES128(v141[2]).n128_u64[0];
            goto LABEL_48;
          }
          LANES128(v147).n128_u64[1] = LANES128(v147).n128_u64[0];
          v194 = vrsqrteq_f32(v147);
          v195 = vmulq_f32(v194, vrsqrtsq_f32(v194, vmulq_f32(v147, v194)));
          v196 = vbicq_s8(
              vmulq_f32(
                  v146,
                  vmulq_f32(v195, vrsqrtsq_f32(v195, vmulq_f32(v147, v195)))),
              vceqzq_f32(v147));
          v197 = vmulq_f32(v196, COERCE_AS(float32x4_t, GameData_1a83610));
          LANES128(v197).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v197, v197, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v197).n128_u64[0])))
                  .n64_u64[0];
          LODWORD(v198) =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v197).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v197).n128_u64[0])))
                  .n64_u32[0];
          if (fabsf(fabsf(v198) + -0x1.0000000000000p+0f) <
              0x1.4f8b580000000p-17f) {
            v199 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v198);
            v200 = vmulq_f32(v199, v199);
            LANES128(v200).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v200, v200, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v200).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v200).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v200).n128_u64[1] = LANES128(v200).n128_u64[0];
            v201 = vrsqrteq_f32(v200);
            v202 = vmulq_f32(v201, vrsqrtsq_f32(v201, vmulq_f32(v200, v201)));
            v175 = vbicq_s8(
                vmulq_f32(
                    v199,
                    vmulq_f32(v202, vrsqrtsq_f32(v202, vmulq_f32(v200, v202)))),
                vceqzq_f32(v200));
            goto LABEL_47;
          }
          LANES128(v358).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v196, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v359).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v358).n128_i8[8] =
              vqtbl1_s8(v196, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v360).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v196, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v359).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v360).n128_i8[8] =
              vqtbl1_s8(v196, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          LANES128(v361).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v361).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v362 = vmlsq_f32(vmulq_f32(v358, v359), v361, v360);
          v363 = vmulq_f32(v362, v362);
          LANES128(v363).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v363, v363, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v363).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v171).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v363).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v363).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v171).n128_u64[1] = LANES128(v171).n128_u64[0];
          v364 = vrsqrteq_f32(v171);
          v365 = vmulq_f32(v364, vrsqrtsq_f32(v364, vmulq_f32(v171, v364)));
          v174 = vmulq_f32(
              v362, vmulq_f32(v365, vrsqrtsq_f32(v365, vmulq_f32(v171, v365))));
        }
        v175 = vbicq_s8(v174, vceqzq_f32(v171));
      LABEL_47:
        *(int8x16_t*)(v26 + 48) = v175;
      LABEL_48:
        if (*(_DWORD*)(a3 + 112) != 2) {
        LABEL_129:
          {
            v348 = *(float32x4_t*)(v26 + 32);
            __asm__ volatile("" ::"w"(v348));
          }
          {
            v349 = *(float32x4_t*)(v26 + 48);
            __asm__ volatile("" ::"w"(v349));
          }
          v350 = vmulq_f32(v348, v348);
          LANES128(v350).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v350, v350, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v350).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v350).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v350).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v350).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v350).n128_u64[1] = LANES128(v350).n128_u64[0];
          v351 = vrsqrteq_f32(v350);
          v352 = vmulq_f32(v351, vrsqrtsq_f32(v351, vmulq_f32(v350, v351)));
          v353 = vbicq_s8(
              vmulq_f32(
                  v348,
                  vmulq_f32(v352, vrsqrtsq_f32(v352, vmulq_f32(v350, v352)))),
              vceqzq_f32(v350));
          v354 = vmulq_f32(v349, v349);
          LANES128(v354).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v354, v354, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v354).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v354).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v354).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v354).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v354).n128_u64[1] = LANES128(v354).n128_u64[0];
          v355 = vrsqrteq_f32(v354);
          v356 = vmulq_f32(v355, vrsqrtsq_f32(v355, vmulq_f32(v354, v355)));
          *(int8x16_t*)(v26 + 32) = v353;
          *(int8x16_t*)(v26 + 48) = vbicq_s8(
              vmulq_f32(
                  v349,
                  vmulq_f32(v356, vrsqrtsq_f32(v356, vmulq_f32(v354, v356)))),
              vceqzq_f32(v354));
          if (*(_DWORD*)(a3 + 112) == 1) {
            v357 = *(float32x4_t*)v26;
            __asm__ volatile("" ::"w"(v357));
          }
          else {
            v357 = vsubq_f32(*(float32x4_t*)v26, *v28);
          }
          v89 = vmulq_f32(v357, v357);
          LANES128(v89).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v89, v89, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v89).n128_f32[0] =
              *(float*)(a3 + 140) +
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]))))
                  .n64_f32[0];
          *(_DWORD*)(a3 + 140) = LANES128(v89).n128_u32[0];
          return LANES128(v89).n128_f32[0];
        }
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 160LL) + 2226LL) == 0) {
        LABEL_128:
          {
            v336 = *(_QWORD*)(v26 + 88);
            __asm__ volatile("" ::"r"(v336));
          }
          *(_QWORD*)(v336 + 56) = *(_QWORD*)(v26 + 56);
          *(_QWORD*)(v336 + 48) = *(_QWORD*)(v26 + 48);
          {
            v337 = *(_QWORD*)(v26 + 88);
            __asm__ volatile("" ::"r"(v337));
          }
          *(_QWORD*)(v337 + 40) = *(_QWORD*)(v26 + 40);
          *(_QWORD*)(v337 + 32) = *v144;
          {
            v338 = *(float32x4_t**)(v26 + 88);
            __asm__ volatile("" ::"r"(v338));
          }
          {
            v339 = v338[3];
            __asm__ volatile("" ::"w"(v339));
          }
          v340 = vmulq_f32(v339, v339);
          LANES128(v340).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v340, v340, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v340).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v340).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v340).n128_u64[1] = LANES128(v340).n128_u64[0];
          v341 = vrsqrteq_f32(v340);
          v342 = vmulq_f32(v341, vrsqrtsq_f32(v341, vmulq_f32(v340, v341)));
          v338[3] = vbicq_s8(
              vmulq_f32(
                  v339,
                  vmulq_f32(v342, vrsqrtsq_f32(v342, vmulq_f32(v340, v342)))),
              vceqzq_f32(v340));
          {
            v343 = *(float32x4_t**)(v26 + 88);
            __asm__ volatile("" ::"r"(v343));
          }
          {
            v344 = v343[2];
            __asm__ volatile("" ::"w"(v344));
          }
          v345 = vmulq_f32(v344, v344);
          LANES128(v345).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v345, v345, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v345).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v345).n128_u64[1] = LANES128(v345).n128_u64[0];
          v346 = vrsqrteq_f32(v345);
          v347 = vmulq_f32(v346, vrsqrtsq_f32(v346, vmulq_f32(v345, v346)));
          v343[2] = vbicq_s8(
              vmulq_f32(
                  v344,
                  vmulq_f32(v347, vrsqrtsq_f32(v347, vmulq_f32(v345, v347)))),
              vceqzq_f32(v345));
          goto LABEL_129;
        }
        {
          v176 = *(float32x4_t*)(v26 + 32);
          __asm__ volatile("" ::"w"(v176));
        }
        {
          v177 = *(float32x4_t*)(v26 + 48);
          __asm__ volatile("" ::"w"(v177));
        }
        v178 = vmulq_f32(v176, v176);
        LANES128(v178).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v178, v178, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0])))
                .n64_u64[0];
        LANES128(v178).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0])))
                .n64_u64[0];
        LANES128(v178).n128_u64[1] = LANES128(v178).n128_u64[0];
        v179 = vrsqrteq_f32(v178);
        v180 = vmulq_f32(v179, vrsqrtsq_f32(v179, vmulq_f32(v178, v179)));
        v181 = vbicq_s8(
            vmulq_f32(v176, vmulq_f32(v180, vrsqrtsq_f32(
                                                v180, vmulq_f32(v178, v180)))),
            vceqzq_f32(v178));
        v182 = vmulq_f32(v177, v177);
        LANES128(v182).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v182, v182, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])))
                .n64_u64[0];
        LANES128(v182).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])))
                .n64_u64[0];
        LANES128(v182).n128_u64[1] = LANES128(v182).n128_u64[0];
        v183 = vrsqrteq_f32(v182);
        v184 = vmulq_f32(v183, vrsqrtsq_f32(v183, vmulq_f32(v182, v183)));
        v185 = vbicq_s8(
            vmulq_f32(v177, vmulq_f32(v184, vrsqrtsq_f32(
                                                v184, vmulq_f32(v182, v184)))),
            vceqzq_f32(v182));
        *(int8x16_t*)(v26 + 32) = v181;
        *(int8x16_t*)(v26 + 48) = v185;
        PSEUDO_LOW_LANE128(
            v177, n128_f32,
            *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 568LL) +
                                 24LL) +
                      1720LL) +
                (float)(COERCE_FLOAT(
                            *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 496LL) +
                                       16LL * *(int*)(a2 + 32))) *
                        *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) +
                                                        568LL) +
                                             24LL) +
                                  1736LL)));
        v186 =
            LANES128(v177).n128_f32[0] +
            (float)(roundf(LANES128(v177).n128_f32[0] * 0x1.45f3060000000p-3f) *
                    -0x1.921fb60000000p+2f);
        if (v186 <= 0x1.921fb60000000p+0f) {
          v325 = 0x1.0000000000000p+0f;
          v326 = v186;
          if (v186 >= -0x1.921fb60000000p+0f) {
            goto LABEL_122;
          }
          v187 = -0x1.921fb60000000p+1f;
        }
        else {
          v187 = 0x1.921fb60000000p+1f;
        }
        v325 = -0x1.0000000000000p+0f;
        v326 = v187 - v186;
      LABEL_122:
        v327 =
            v325 *
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
                                                                                                  (float)(v326 *
                                                                                                          v326))) *
                                                                                  (float)(v326 *
                                                                                          v326))) *
                                                               (float)(v326 *
                                                                       v326))) *
                                               (float)(v326 * v326))) *
                            (float)(v326 * v326)) +
                    0x1.0000000000000p+0f);
        if (v186 <= 0x1.921fb60000000p+0f) {
          if (v186 >= -0x1.921fb60000000p+0f) {
          LABEL_127:
            {
              v329 = LANES128(v181).n128_f32[2] * LANES128(v181).n128_f32[0];
              __asm__ volatile("" ::"w"(v329));
            }
            {
              v330 = LANES128(v181).n128_f32[0] * LANES128(v181).n128_f32[1];
              __asm__ volatile("" ::"w"(v330));
            }
            v331 =
                v186 *
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
                                                                                                      (float)(v186 *
                                                                                                              v186))) *
                                                                                      (float)(v186 *
                                                                                              v186))) *
                                                                   (float)(v186 *
                                                                           v186))) *
                                                   (float)(v186 * v186))) *
                                (float)(v186 * v186)) +
                        0x1.0000000000000p+0f);
            v332 = LANES128_OF(vmulq_f32(v181, v181)).n128_f32[0];
            LANES128(v181).n128_f32[0] = LANES128(v181).n128_f32[0] * v331;
            LANES128(v333).n128_f32[0] =
                v327 + (float)(v332 * (float)(0x1.0000000000000p+0f - v327));
            LANES128(v334).n128_f32[0] =
                (float)(PSEUDO_UNFUSED(LANES128(v181).n128_f32[2] * v331)) +
                (float)(v330 * (float)(0x1.0000000000000p+0f - v327));
            LANES128(v333).n128_f32[1] =
                -(float)((float)(PSEUDO_UNFUSED(LANES128(v181).n128_f32[2] *
                                                v331)) -
                         (float)(v330 * (float)(0x1.0000000000000p+0f - v327)));
            LANES128(v334).n128_f32[1] =
                v327 + (float)((float)(LANES128(v181).n128_f32[1] *
                                       LANES128(v181).n128_f32[1]) *
                               (float)(0x1.0000000000000p+0f - v327));
            LANES128(v333).n128_u64[1] = COERCE_UNSIGNED_INT(
                (float)(PSEUDO_UNFUSED(LANES128(v181).n128_f32[1] * v331)) +
                (float)(v329 * (float)(0x1.0000000000000p+0f - v327)));
            LANES128(v334).n128_u64[1] = COERCE_UNSIGNED_INT(
                -(float)(LANES128(v181).n128_f32[0] -
                         (float)((float)(LANES128(v181).n128_f32[1] *
                                         LANES128(v181).n128_f32[2]) *
                                 (float)(0x1.0000000000000p+0f - v327))));
            LANES128(v335).n128_f32[0] =
                -(float)((float)(PSEUDO_UNFUSED(LANES128(v181).n128_f32[1] *
                                                v331)) -
                         (float)(v329 * (float)(0x1.0000000000000p+0f - v327)));
            LANES128(v335).n128_f32[1] =
                LANES128(v181).n128_f32[0] +
                (float)((float)(LANES128(v181).n128_f32[1] *
                                LANES128(v181).n128_f32[2]) *
                        (float)(0x1.0000000000000p+0f - v327));
            LANES128(v335).n128_u64[1] = COERCE_UNSIGNED_INT(
                v327 + (float)((float)(LANES128(v181).n128_f32[2] *
                                       LANES128(v181).n128_f32[2]) *
                               (float)(0x1.0000000000000p+0f - v327)));
            *(float32x4_t*)(v26 + 48) = vaddq_f32(
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v333, LANES128(v185).n128_f32[0]), v334,
                        COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]), 1),
                    v335, v185, 2),
                COERCE_AS(float32x4_t, 0));
            goto LABEL_128;
          }
          v328 = -0x1.921fb60000000p+1f;
        }
        else {
          v328 = 0x1.921fb60000000p+1f;
        }
        v186 = v328 - v186;
        goto LABEL_127;
      }
      LANES128(v74).n128_u64[0] = *v71 | ((unsigned __int64)*v72 << 32);
      LANES128(v74).n128_u64[1] = *v73;
      LANES128(v75).n128_u64[0] = v71[1] | ((unsigned __int64)v72[1] << 32);
      {
        v93 = v73[3];
        __asm__ volatile("" ::"r"(v93));
      }
      LANES128(v75).n128_u64[1] = v73[1];
      LANES128(v76).n128_u64[0] = v71[2] | ((unsigned __int64)v72[2] << 32);
      LANES128(v76).n128_u64[1] = v73[2];
      LANES128(v77).n128_u64[0] = v71[3] | ((unsigned __int64)v72[3] << 32);
    }
    LANES128(v77).n128_u64[1] = v93;
    goto LABEL_32;
  }
  {
    v53 = *(_QWORD**)(a2 + 16);
    __asm__ volatile("" ::"r"(v53));
  }
  {
    v54 = *(int*)(a2 + 32);
    __asm__ volatile("" ::"r"(v54));
  }
  v371 = (__typeof__(v371)){0};
  v54 *= 16;
  {
    v55 = v53[61];
    __asm__ volatile("" ::"r"(v55));
  }
  {
    v56 = v53[19];
    __asm__ volatile("" ::"r"(v56));
  }
  {
    v57 = v53[71];
    __asm__ volatile("" ::"r"(v57));
  }
  v375 = *(long double*)(v53[62] + v54);
  v374 = *(long double*)(v55 + v54);
  GameRoutine_5c2180(*(float*)(a2 + 28), *(float*)(a2 + 24), v56, &v371, v57,
                     (float32x4_t*)&v374, (float*)&v375);
  {
    v58 = *(float32x4_t**)(a2 + 16);
    __asm__ volatile("" ::"r"(v58));
  }
  {
    v59 = *(int*)(a2 + 32);
    __asm__ volatile("" ::"r"(v59));
  }
  {
    v60 = *((_DWORD*)a4 + 1);
    __asm__ volatile("" ::"r"(v60));
  }
  {
    v61 = LANES128(v58[29]).n128_u64[0] + 16 * v59;
    __asm__ volatile("" ::"r"(v61));
  }
  v371 = vmulq_f32(v371, *(float32x4_t*)(LANES128(v58[7]).n128_u64[1] + 320));
  LANES128(v62).n128_u64[0] = *(_QWORD*)v61;
  {
    v63 = *(unsigned int*)(v61 + 8);
    __asm__ volatile("" ::"r"(v63));
  }
  if (v60 != 0) {
    LANES128(v62).n128_u64[1] = v63;
    goto LABEL_66;
  }
  {
    v78 = (unsigned int*)(LANES128(v58[33]).n128_u64[0] + 16 * v59);
    __asm__ volatile("" ::"r"(v78));
  }
  {
    v79 = (unsigned int*)(LANES128(v58[33]).n128_u64[1] + 16 * v59);
    __asm__ volatile("" ::"r"(v79));
  }
  {
    v80 = (unsigned int*)(LANES128(v58[34]).n128_u64[0] + 16 * v59);
    __asm__ volatile("" ::"r"(v80));
  }
  if (*(_BYTE*)(LANES128(v58[10]).n128_u64[0] + 1875) == 2) {
    LANES128(v81).n128_u64[0] = *v78 | ((unsigned __int64)*v79 << 32);
    LANES128(v81).n128_u64[1] = *v80;
    LANES128(v82).n128_u64[0] = v78[1] | ((unsigned __int64)v79[1] << 32);
    LANES128(v82).n128_u64[1] = v80[1];
    LANES128(v83).n128_u64[0] = v78[2] | ((unsigned __int64)v79[2] << 32);
    LANES128(v83).n128_u64[1] = v80[2];
    LANES128(v84).n128_u64[0] = LANES128(v58[55]).n128_u64[0];
    {
      v94 = LANES128(v58[55]).n128_u32[2];
      __asm__ volatile("" ::"r"(v94));
    }
  LABEL_64:
    LANES128(v84).n128_u64[1] = v94;
    goto LABEL_65;
  }
  if (*(_BYTE*)(LANES128(v58[10]).n128_u64[0] + 1875) != 0) {
    LANES128(v81).n128_u64[0] = *v78 | ((unsigned __int64)*v79 << 32);
    LANES128(v81).n128_u64[1] = *v80;
    LANES128(v82).n128_u64[0] = v78[1] | ((unsigned __int64)v79[1] << 32);
    {
      v94 = v80[3];
      __asm__ volatile("" ::"r"(v94));
    }
    LANES128(v82).n128_u64[1] = v80[1];
    LANES128(v83).n128_u64[0] = v78[2] | ((unsigned __int64)v79[2] << 32);
    LANES128(v83).n128_u64[1] = v80[2];
    LANES128(v84).n128_u64[0] = v78[3] | ((unsigned __int64)v79[3] << 32);
    goto LABEL_64;
  }
  {
    v81 = v58[52];
    __asm__ volatile("" ::"w"(v81));
  }
  {
    v82 = v58[53];
    __asm__ volatile("" ::"w"(v82));
  }
  {
    v83 = v58[54];
    __asm__ volatile("" ::"w"(v83));
  }
  {
    v84 = v58[55];
    __asm__ volatile("" ::"w"(v84));
  }
LABEL_65:
  v62 = vaddq_f32(
      v84,
      vmlaq_n_f32(
          vmlaq_lane_f32(vmulq_n_f32(v81, LANES128(v62).n128_f32[0]), v82,
                         COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1),
          v83, *(float*)&v63));
LABEL_66:
  *(float32x4_t*)v26 = v62;
  *(_QWORD*)(a3 + 72) = *(_QWORD*)(v26 + 8);
  *(_QWORD*)(a3 + 64) = *(_QWORD*)v26;
  if (*(_DWORD*)(a3 + 112) != 0) {
    v224 = vsubq_f32(*(float32x4_t*)v26, *v28);
  }
  else {
    v224 = *(float32x4_t*)v26;
    __asm__ volatile("" ::"w"(v224));
  }
  v225 = vmulq_f32(v224, v224);
  LANES128(v225).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v225, v225, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0])))
          .n64_u64[0];
  *(float*)(a3 + 140) =
      *(float*)(a3 + 140) +
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0]))))
          .n64_f32[0];
  *(_DWORD*)(v26 + 80) = LANES128(v371).n128_u32[0];
  if (*((_DWORD*)a4 + 1) != 0) {
    v226 = GameData_1a83610;
  }
  else {
    v226 = *(_OWORD*)(*(_QWORD*)(a2 + 16) + 848LL);
    DWORD3(v226) = 0;
  }
  *(_OWORD*)(v26 + 64) = v226;
  v227 = (float32x4_t*)(v26 + 64);
  {
    v228 = *(float32x4_t**)(a2 + 16);
    __asm__ volatile("" ::"r"(v228));
  }
  if ((unsigned int)(*(_DWORD*)a4 - 1) <= 1 &&
      *(_BYTE*)(LANES128(v228[10]).n128_u64[0] + 2226) != 0) {
    {
      v229 = *(_DWORD*)(a3 + 112);
      __asm__ volatile("" ::"r"(v229));
    }
    v370 = (__typeof__(v370)){0};
    if (v229 < 1) {
      {
        v231 = *(_QWORD*)(v26 + 40);
        __asm__ volatile("" ::"r"(v231));
      }
      LANES128(v370).n128_u64[0] = *(_QWORD*)(v26 + 32);
      LANES128(v370).n128_u64[1] = v231;
      v230 = v370;
    }
    else {
      v230 = vaddq_f32(
          vmulq_n_f32(vsubq_f32(*(float32x4_t*)v26,
                                *(float32x4_t*)*(_QWORD*)(v26 + 88)),
                      0x1.0000000000000p+0f / LANES128(v228[4]).n128_f32[3]),
          COERCE_AS(float32x4_t, 0));
    }
    v232 = vmulq_f32(v230, v230);
    LANES128(v232).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v232, v232, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0])))
            .n64_u64[0];
    LANES128(v232).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v232).n128_f32[0] < 0x1.4f8b580000000p-17f) {
      {
        v230 = v228[54];
        __asm__ volatile("" ::"w"(v230));
      }
      v232 = vmulq_f32(v230, v230);
      LANES128(v232).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v232, v232, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0])))
              .n64_u64[0];
      LANES128(v232).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v232).n128_u64[0])))
              .n64_u64[0];
    }
    LANES128(v232).n128_u64[1] = LANES128(v232).n128_u64[0];
    {
      v233 = *(int*)(a2 + 32);
      __asm__ volatile("" ::"r"(v233));
    }
    {
      v235 = LANES128(v228[31]).n128_u64[0];
      __asm__ volatile("" ::"r"(v235));
    }
    {
      v234 = LANES128(v228[31]).n128_u64[1];
      __asm__ volatile("" ::"r"(v234));
    }
    v369 = (__typeof__(v369)){0};
    v233 *= 16;
    {
      v236 = LANES128(v228[9]).n128_i64[1];
      __asm__ volatile("" ::"r"(v236));
    }
    {
      v237 = LANES128(v228[35]).n128_i64[1];
      __asm__ volatile("" ::"r"(v237));
    }
    v238 = vrsqrteq_f32(v232);
    v239 = vmulq_f32(v238, vrsqrtsq_f32(v238, vmulq_f32(v232, v238)));
    v370 = vbicq_s8(
        vmulq_f32(v230,
                  vmulq_f32(v239, vrsqrtsq_f32(v239, vmulq_f32(v232, v239)))),
        vceqzq_f32(v232));
    v375 = *(long double*)(v234 + v233);
    v374 = *(long double*)(v235 + v233);
    game_5c3e70(*(float*)(a2 + 24), v236, &v369, v237, &v375,
                (float32x2_t*)&v374);
    game_5c05c0((float32x4_t*)(v26 + 64), (float32x2_t*)(v26 + 64), &v370,
                *((float*)&v369 + 2));
    v240 = vmulq_f32(*v227, *v227);
    LANES128(v240).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v240, v240, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0])))
            .n64_u64[0];
    LANES128(v240).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v240).n128_u64[0])))
            .n64_u64[0];
    LANES128(v240).n128_u64[1] = LANES128(v240).n128_u64[0];
    v241 = vrsqrteq_f32(v240);
    v242 = vmulq_f32(v241, vrsqrtsq_f32(v241, vmulq_f32(v240, v241)));
    *v227 = vbicq_s8(
        vmulq_f32(*v227,
                  vmulq_f32(v242, vrsqrtsq_f32(v242, vmulq_f32(v240, v242)))),
        vceqzq_f32(v240));
    if (*(_DWORD*)(a3 + 112) == 1) {
      {
        v243 = *v29;
        __asm__ volatile("" ::"r"(v243));
      }
      {
        v244 = *(_QWORD*)(v26 + 72);
        __asm__ volatile("" ::"r"(v244));
      }
      LANES128(v243[4]).n128_u64[0] = LANES128(*(v227)).n128_u64[0];
      LANES128(v243[4]).n128_u64[1] = v244;
    }
    {
      v228 = *(float32x4_t**)(a2 + 16);
      __asm__ volatile("" ::"r"(v228));
    }
  }
  {
    v246 = a4[17];
    __asm__ volatile("" ::"w"(v246));
  }
  {
    v245 = a4[18];
    __asm__ volatile("" ::"w"(v245));
  }
  {
    v247 = *(float32x4_t*)(LANES128(v228[31]).n128_u64[0] +
                           16LL * *(int*)(a2 + 32));
    __asm__ volatile("" ::"w"(v247));
  }
  {
    v248 = *(float*)(a3 + 128);
    __asm__ volatile("" ::"w"(v248));
  }
  {
    v249 = v246 * a4[21];
    __asm__ volatile("" ::"w"(v249));
  }
  v250 = (__int64)(float)((float)((float)(PSEUDO_UNFUSED(
                                      0x1.6800000000000p+8f *
                                      LANES128(v247).n128_f32[0])) +
                                  (float)(v248 * (float)(a4[19] * v246))) *
                          0x1.6c16c20000000p+23f);
  v251 = v30[4 * BYTE3(v250) + 1] +
         (float)(v30[4 * BYTE3(v250) + 3] *
                 vcvts_n_f32_u32(v250 & 0xFFFFFF, 0x18u));
  v252 = vmuls_lane_f32(0x1.6800000000000p+8f,
                        COERCE_AS(float32x2_t, LANES128(v247).n128_u64[0]), 1);
  v253 =
      (__int64)(float)((float)(v252 + (float)(v248 * 0x1.0000000000000p-1f)) *
                       0x1.6c16c20000000p+23f);
  v254 = vcvts_n_f32_u32(v253 & 0xFFFFFF, 0x18u);
  {
    v255 = &v30[4 * BYTE3(v253)];
    __asm__ volatile("" ::"r"(v255));
  }
  {
    v256 = v255[1];
    __asm__ volatile("" ::"w"(v256));
  }
  {
    v257 = v255[3];
    __asm__ volatile("" ::"w"(v257));
  }
  {
    v258 = (__int64)(float)((float)(v252 +
                                    (float)(v248 * (float)(v246 * a4[20]))) *
                            0x1.6c16c20000000p+23f);
    __asm__ volatile("" ::"r"(v258));
  }
  v259 = (float)(v256 + (float)(v257 * v254)) + v251;
  {
    v260 = *(float32x4_t*)(v26 + 16);
    __asm__ volatile("" ::"w"(v260));
  }
  *(float*)(v26 + 16) = v259;
  LANES128(v260).n128_f32[0] = v259;
  v261 = v30[4 * BYTE3(v258) + 1] +
         (float)(v30[4 * BYTE3(v258) + 3] *
                 vcvts_n_f32_u32(v258 & 0xFFFFFF, 0x18u));
  v262 = vmuls_lane_f32(0x1.6800000000000p+8f, v247, 2);
  v263 =
      (__int64)(float)((float)(v262 + (float)(v248 * 0x1.0000000000000p-1f)) *
                       0x1.6c16c20000000p+23f);
  v264 = vcvts_n_f32_u32(v263 & 0xFFFFFF, 0x18u);
  {
    v265 = &v30[4 * BYTE3(v263)];
    __asm__ volatile("" ::"r"(v265));
  }
  {
    v266 = v265[1];
    __asm__ volatile("" ::"w"(v266));
  }
  {
    v267 = v265[3];
    __asm__ volatile("" ::"w"(v267));
  }
  v268 = (__int64)(float)((float)(v262 + (float)(v248 * v249)) *
                          0x1.6c16c20000000p+23f);
  v269 = vcvts_n_f32_u32(v268 & 0xFFFFFF, 0x18u);
  {
    v270 = &v30[4 * BYTE3(v268)];
    __asm__ volatile("" ::"r"(v270));
  }
  LANES128(v260).n128_f32[1] = v261 + (float)(v266 + (float)(v267 * v264));
  *(float32x4_t*)(v26 + 16) = v260;
  {
    v271 = v270[1];
    __asm__ volatile("" ::"w"(v271));
  }
  {
    v272 = v270[3];
    __asm__ volatile("" ::"w"(v272));
  }
  v273 =
      (__int64)(float)((float)(vmuls_lane_f32(0x1.6800000000000p+8f, v247, 3) +
                               (float)(v248 * 0x1.0000000000000p-1f)) *
                       0x1.6c16c20000000p+23f);
  LANES128(v260).n128_f32[2] =
      (float)(v271 + (float)(v272 * v269)) +
      (float)(v30[4 * BYTE3(v273) + 1] +
              (float)(v30[4 * BYTE3(v273) + 3] *
                      vcvts_n_f32_u32(v273 & 0xFFFFFF, 0x18u)));
  LANES128(v260).n128_u32[3] = 0;
  *(float32x4_t*)(v26 + 16) = vmulq_n_f32(v260, v245);
  {
    v274 = *(_DWORD*)(a3 + 112);
    __asm__ volatile("" ::"r"(v274));
  }
  if ((float)(a4[6] + -0x1.0000000000000p+0f) > (float)v274) {
    *(_DWORD*)(a3 + 112) = ++v274;
  }
  if (v274 > 1) {
    *(float32x4_t*)(v26 + 32) = vsubq_f32(*(float32x4_t*)v26, *v28);
    {
      v280 = *(_DWORD*)(a3 + 112);
      __asm__ volatile("" ::"r"(v280));
    }
    if (v280 == 2) {
      LANES128(v28[2]).n128_u64[1] = *(_QWORD*)(v26 + 40);
      LANES128(v28[2]).n128_u64[0] = *(_QWORD*)(v26 + 32);
      {
        v280 = *(_DWORD*)(a3 + 112);
        __asm__ volatile("" ::"r"(v280));
      }
    }
    if (v280 < 1) {
      v282 = (__typeof__(v282)){0};
    }
    else {
      v281 = v280 & 3;
      if ((unsigned int)v280 >= 4) {
        v282 = (__typeof__(v282)){0};
        v283 = 0;
        v291 = v280;
        v284 = (float32x4_t*)v26;
        do {
          {
            v292 = v284[2];
            __asm__ volatile("" ::"w"(v292));
          }
          {
            v293 = (float32x4_t*)LANES128(v284[5]).n128_u64[1];
            __asm__ volatile("" ::"r"(v293));
          }
          v283 += 4;
          v294 = vmulq_n_f32(v292, (float)v291);
          {
            v295 = v293[2];
            __asm__ volatile("" ::"w"(v295));
          }
          {
            v296 = (float32x4_t*)LANES128(v293[5]).n128_u64[1];
            __asm__ volatile("" ::"r"(v296));
          }
          v297 = vaddq_f32(v282, v294);
          v298 = vmulq_n_f32(v295, (float)(v291 - 1));
          {
            v299 = v296[2];
            __asm__ volatile("" ::"w"(v299));
          }
          {
            v300 = (float32x4_t*)LANES128(v296[5]).n128_u64[1];
            __asm__ volatile("" ::"r"(v300));
          }
          v301 = vaddq_f32(v297, v298);
          PSEUDO_LOW_LANE128(v298, n128_f32, (float)(v291 - 2));
          v302 = v291 - 3;
          v291 -= 4;
          v303 = vmulq_n_f32(v299, LANES128(v298).n128_f32[0]);
          {
            v304 = v300[2];
            __asm__ volatile("" ::"w"(v304));
          }
          {
            v284 = (float32x4_t*)LANES128(v300[5]).n128_u64[1];
            __asm__ volatile("" ::"r"(v284));
          }
          v282 =
              vaddq_f32(vaddq_f32(v301, v303), vmulq_n_f32(v304, (float)v302));
        } while ((v280 & 0x7FFFFFFC) != v283);
      }
      else {
        v282 = (__typeof__(v282)){0};
        v283 = 0;
        v284 = (float32x4_t*)v26;
      }
      if ((v280 & 3) != 0) {
        v305 = v280 - v283;
        do {
          {
            v306 = v284[2];
            __asm__ volatile("" ::"w"(v306));
          }
          v307 = (float)v305;
          {
            v284 = (float32x4_t*)LANES128(v284[5]).n128_u64[1];
            __asm__ volatile("" ::"r"(v284));
          }
          --v305;
          --v281;
          v282 = vaddq_f32(v282, vmulq_n_f32(v306, v307));
        } while (v281 != 0);
      }
    }
    v308 = vmulq_f32(v282, v282);
    LANES128(v308).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v308, v308, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v308).n128_u64[0])))
            .n64_u64[0];
    LANES128(v308).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v308).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v308).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v308).n128_f32[0] > 0x0.0p+0f) {
      LANES128(v308).n128_u64[1] = LANES128(v308).n128_u64[0];
      v309 = vrsqrteq_f32(v308);
      v310 = vmulq_f32(v309, vrsqrtsq_f32(v309, vmulq_f32(v308, v309)));
      v282 = vbicq_s8(
          vmulq_f32(v282,
                    vmulq_f32(v310, vrsqrtsq_f32(v310, vmulq_f32(v308, v310)))),
          vceqzq_f32(v308));
    }
    *(float32x4_t*)(v26 + 48) = v282;
    v311 = (int8x16_t*)(v26 + 48);
    if (*(_DWORD*)(a3 + 112) != 2) {
      goto LABEL_112;
    }
  }
  else {
    {
      v275 = *(float32x4_t**)(a2 + 16);
      __asm__ volatile("" ::"r"(v275));
    }
    {
      v276 = *(int*)(a2 + 32);
      __asm__ volatile("" ::"r"(v276));
    }
    {
      v277 = LANES128(v275[29]).n128_u64[1] + 16 * v276;
      __asm__ volatile("" ::"r"(v277));
    }
    LANES128(v278).n128_u64[0] = *(_QWORD*)v277;
    {
      v279 = *(unsigned int*)(v277 + 8);
      __asm__ volatile("" ::"r"(v279));
    }
    if (*((_DWORD*)a4 + 1) != 0) {
      LANES128(v278).n128_u64[1] = v279;
    }
    else {
      {
        v285 = (unsigned int*)(LANES128(v275[33]).n128_u64[0] + 16 * v276);
        __asm__ volatile("" ::"r"(v285));
      }
      {
        v286 = (unsigned int*)(LANES128(v275[33]).n128_u64[1] + 16 * v276);
        __asm__ volatile("" ::"r"(v286));
      }
      {
        v287 = (unsigned int*)(LANES128(v275[34]).n128_u64[0] + 16 * v276);
        __asm__ volatile("" ::"r"(v287));
      }
      if (*(_BYTE*)(LANES128(v275[10]).n128_u64[0] + 1875) != 0) {
        LANES128(v288).n128_u64[0] = *v285 | ((unsigned __int64)*v286 << 32);
        LANES128(v288).n128_u64[1] = *v287;
        LANES128(v289).n128_u64[0] =
            v285[1] | ((unsigned __int64)v286[1] << 32);
        LANES128(v289).n128_u64[1] = v287[1];
        LANES128(v290).n128_u64[0] =
            v285[2] | ((unsigned __int64)v286[2] << 32);
        LANES128(v290).n128_u64[1] = v287[2];
      }
      else {
        {
          v288 = v275[52];
          __asm__ volatile("" ::"w"(v288));
        }
        {
          v289 = v275[53];
          __asm__ volatile("" ::"w"(v289));
        }
        {
          v290 = v275[54];
          __asm__ volatile("" ::"w"(v290));
        }
      }
      v278 = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(
                          vmulq_n_f32(v288, LANES128(v278).n128_f32[0]), v289,
                          COERCE_AS(float32x2_t, LANES128(v278).n128_u64[0]),
                          1),
                      v290, *(float*)&v279),
          COERCE_AS(float32x4_t, 0));
    }
    v312 = vmulq_f32(v278, v278);
    *(float32x4_t*)(v26 + 32) = v278;
    v311 = (int8x16_t*)(v26 + 32);
    LANES128(v312).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v312, v312, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0])))
            .n64_u64[0];
    LANES128(v312).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v312).n128_f32[0] <= 0x0.0p+0f &&
        (v278 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a2 + 16) + 880LL),
                          *(float32x4_t*)(*(_QWORD*)(a2 + 16) + 960LL)),
         v312 = vmulq_f32(v278, v278),
         LANES128(v312).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v312, v312, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0])))
                 .n64_u64[0],
         LANES128(v312).n128_u64[0] =
             LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v312).n128_u64[0])))
                 .n64_u64[0],
         LANES128(v312).n128_f32[0] <= 0x0.0p+0f)) {
      v315 = COERCE_AS(int8x16_t, GameData_1a836a0);
    }
    else {
      LANES128(v312).n128_u64[1] = LANES128(v312).n128_u64[0];
      v313 = vrsqrteq_f32(v312);
      v314 = vmulq_f32(v313, vrsqrtsq_f32(v313, vmulq_f32(v312, v313)));
      v315 = vbicq_s8(
          vmulq_f32(v278,
                    vmulq_f32(v314, vrsqrtsq_f32(v314, vmulq_f32(v312, v314)))),
          vceqzq_f32(v312));
    }
    *v311 = v315;
    v28 = (float32x4_t*)v26;
  }
  LANES128(v28[3]).n128_u64[1] = LANES128(*(v311)).n128_u64[1];
  LANES128(v28[3]).n128_u64[0] = LANES128(*(v311)).n128_u64[0];
LABEL_112:
  {
    v316 = *(float32x4_t*)(v26 + 48);
    __asm__ volatile("" ::"w"(v316));
  }
  v317 = vmulq_f32(v316, v316);
  LANES128(v317).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v317, v317, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v317).n128_u64[0])))
          .n64_u64[0];
  LANES128(v317).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v317).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v317).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v317).n128_f32[0] <= 0x0.0p+0f) {
    LANES128(v89).n128_u32[0] = 0;
    *(_OWORD*)(v26 + 48) = GameData_1a83610;
    if (*(int*)(a3 + 112) < 2) {
      return LANES128(v89).n128_f32[0];
    }
  }
  else {
    LANES128(v317).n128_u64[1] = LANES128(v317).n128_u64[0];
    v318 = vrsqrteq_f32(v317);
    v319 = vmulq_f32(v318, vrsqrtsq_f32(v318, vmulq_f32(v317, v318)));
    v89 = vbicq_s8(
        vmulq_f32(v316,
                  vmulq_f32(v319, vrsqrtsq_f32(v319, vmulq_f32(v317, v319)))),
        vceqzq_f32(v317));
    *(int8x16_t*)(v26 + 48) = v89;
    if (*(int*)(a3 + 112) < 2) {
      return LANES128(v89).n128_f32[0];
    }
  }
  v320 = 1;
  LANES128(v89).n128_u32[3] = 0;
  LANES128(v89).n128_f32[0] = (float)(v368 * v367) * a4[14];
  LANES128(v89).n128_f32[1] = (float)(v368 * v367) * a4[15];
  LANES128(v89).n128_f32[2] = (float)(v368 * v367) * a4[16];
  do {
    {
      v321 = *v29;
      __asm__ volatile("" ::"r"(v321));
    }
    ++v320;
    {
      v323 = **v29;
      __asm__ volatile("" ::"w"(v323));
    }
    {
      v322 = (*v29)[1];
      __asm__ volatile("" ::"w"(v322));
    }
    {
      v29 = (float32x4_t**)&LANES128((*v29)[5]).n128_u64[1];
      __asm__ volatile("" ::"r"(v29));
    }
    v324 = vaddq_f32(v89, vmulq_n_f32(v322, v367));
    *v321 = vaddq_f32(v323, vmulq_n_f32(v324, v368));
    v321[1] = v324;
  } while (v320 < (signed __int32)*(_DWORD*)(a3 + 112));
  return LANES128(v89).n128_f32[0];
}

__int64 nn_vfx_5d6960(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  signed __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float v14;

  if (a3 < 2) {
    return result;
  }
  v4 = a4 - result;
  v5 = (unsigned __int64)(a3 - 2) >> 1;
  if (v5 < (a4 - result) >> 3) {
    return result;
  }
  v6 = (v4 >> 2) + 1;
  v7 = (v4 >> 2) + 2;
  v8 = result + 8 * v6;
  if (v7 < a3) {
    {
      v9 = *(float*)(v8 + 8);
      __asm__ volatile("" ::"w"(v9));
    }
    if (*(float*)v8 <= v9 &&
        (*(float*)v8 < v9 || (signed __int32)*(_DWORD*)(v8 + 4) <
                                 (signed __int32)*(_DWORD*)(v8 + 12))) {
      v8 += 8;
      v6 = v7;
    }
  }
  {
    v10 = *(float*)a4;
    __asm__ volatile("" ::"w"(v10));
  }
  if (*(float*)v8 <= *(float*)a4) {
    if (*(float*)v8 < *(float*)a4) {
      return result;
    }
    {
      v11 = *(_DWORD*)(a4 + 4);
      __asm__ volatile("" ::"r"(v11));
    }
    if ((signed __int32)*(_DWORD*)(v8 + 4) < v11) {
      return result;
    }
  }
  else {
    {
      v11 = *(_DWORD*)(a4 + 4);
      __asm__ volatile("" ::"r"(v11));
    }
  }
  *(_QWORD*)a4 = *(_QWORD*)v8;
  if (v5 < v6) {
    *(float*)v8 = v10;
    *(_DWORD*)(v8 + 4) = v11;
    return result;
  }
  while (1) {
    v12 = 2 * v6 + 2;
    v6 = (2 * v6) | 1;
    v13 = result + 8 * v6;
    if (v12 < a3) {
      {
        v14 = *(float*)(v13 + 8);
        __asm__ volatile("" ::"w"(v14));
      }
      if (*(float*)v13 <= v14 &&
          (*(float*)v13 < v14 || (signed __int32)*(_DWORD*)(v13 + 4) <
                                     (signed __int32)*(_DWORD*)(v13 + 12))) {
        v13 += 8;
        v6 = v12;
      }
    }
    if (*(float*)v13 <= v10) {
      break;
    }
  LABEL_12:
    *(_QWORD*)v8 = *(_QWORD*)v13;
    v8 = v13;
    if (v5 < v6) {
      goto LABEL_26;
    }
  }
  if (*(float*)v13 >= v10) {
    if ((signed __int32)*(_DWORD*)(v13 + 4) < v11) {
      *(float*)v8 = v10;
      *(_DWORD*)(v8 + 4) = v11;
      return result;
    }
    goto LABEL_12;
  }
  v13 = v8;
LABEL_26:
  *(float*)v13 = v10;
  *(_DWORD*)(v13 + 4) = v11;
  return result;
}

__int64 nn_vfx_5d80a0(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  signed __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  int v11;
  __int64 v12;
  __int64 v13;
  float v14;

  if (a3 < 2) {
    return result;
  }
  v4 = a4 - result;
  v5 = (unsigned __int64)(a3 - 2) >> 1;
  if (v5 < (a4 - result) >> 3) {
    return result;
  }
  v6 = (v4 >> 2) + 1;
  v7 = (v4 >> 2) + 2;
  v8 = result + 8 * v6;
  if (v7 < a3) {
    {
      v9 = *(float*)(v8 + 8);
      __asm__ volatile("" ::"w"(v9));
    }
    if (*(float*)v8 >= v9 &&
        (*(float*)v8 > v9 || (signed __int32)*(_DWORD*)(v8 + 4) <
                                 (signed __int32)*(_DWORD*)(v8 + 12))) {
      v8 += 8;
      v6 = v7;
    }
  }
  {
    v10 = *(float*)a4;
    __asm__ volatile("" ::"w"(v10));
  }
  if (*(float*)v8 >= *(float*)a4) {
    if (*(float*)v8 > *(float*)a4) {
      return result;
    }
    {
      v11 = *(_DWORD*)(a4 + 4);
      __asm__ volatile("" ::"r"(v11));
    }
    if ((signed __int32)*(_DWORD*)(v8 + 4) < v11) {
      return result;
    }
  }
  else {
    {
      v11 = *(_DWORD*)(a4 + 4);
      __asm__ volatile("" ::"r"(v11));
    }
  }
  *(_QWORD*)a4 = *(_QWORD*)v8;
  if (v5 < v6) {
    *(float*)v8 = v10;
    *(_DWORD*)(v8 + 4) = v11;
    return result;
  }
  while (1) {
    v12 = 2 * v6 + 2;
    v6 = (2 * v6) | 1;
    v13 = result + 8 * v6;
    if (v12 < a3) {
      {
        v14 = *(float*)(v13 + 8);
        __asm__ volatile("" ::"w"(v14));
      }
      if (*(float*)v13 >= v14 &&
          (*(float*)v13 > v14 || (signed __int32)*(_DWORD*)(v13 + 4) <
                                     (signed __int32)*(_DWORD*)(v13 + 12))) {
        v13 += 8;
        v6 = v12;
      }
    }
    if (*(float*)v13 >= v10) {
      break;
    }
  LABEL_12:
    *(_QWORD*)v8 = *(_QWORD*)v13;
    v8 = v13;
    if (v5 < v6) {
      goto LABEL_26;
    }
  }
  if (*(float*)v13 <= v10) {
    if ((signed __int32)*(_DWORD*)(v13 + 4) < v11) {
      *(float*)v8 = v10;
      *(_DWORD*)(v8 + 4) = v11;
      return result;
    }
    goto LABEL_12;
  }
  v13 = v8;
LABEL_26:
  *(float*)v13 = v10;
  *(_DWORD*)(v13 + 4) = v11;
  return result;
}

unsigned __int64 nn_vfx_5dac20(float* a1, float* a2)
{

#pragma clang fp contract(off)
  float v2;
  int v3;
  float v4;
  __int64 i;
  float v6;
  unsigned __int64 v7;
  float v8;
  float v9;
  float v11;
  float v12;
  __int64 v14;
  float v15;
  float v16;
  float* v17;
  float* v18;
  float v19;
  bool v20;
  unsigned __int64 v21;
  float* v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  {
    v2 = *a1;
    __asm__ volatile("" ::"w"(v2));
  }
  {
    v3 = *((_DWORD*)a1 + 1);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *a1;
    __asm__ volatile("" ::"w"(v4));
  }
  if (*a1 >= 0x0.0p+0f) {
    v14 = 8;
    v7 = (unsigned __int64)a1;
    do {
      {
        v15 = *(float*)(v7 + 8);
        __asm__ volatile("" ::"w"(v15));
      }
      v7 += 8LL;
      v14 -= 8;
    } while (v15 > v4);
    if (v14 != 0) {
      do {
        {
          v16 = *(a2 - 2);
          __asm__ volatile("" ::"w"(v16));
        }
        a2 -= 2;
      } while (v16 <= v4);
    }
    else if (v7 < (unsigned __int64)a2) {
      v17 = a2 - 2;
      v18 = a2 - 2;
      do {
        {
          v19 = *v18;
          __asm__ volatile("" ::"w"(v19));
        }
        v18 -= 2;
        v20 = v19 > v4 || v7 >= (unsigned __int64)v17;
        v17 = v18;
      } while (!v20);
      a2 = v18 + 2;
    }
    goto LABEL_38;
  }
  for (i = 0;; i += 2) {
    {
      v6 = a1[i + 2];
      __asm__ volatile("" ::"w"(v6));
    }
    if (v6 < 0x0.0p+0f) {
      break;
    }
    if (v6 <= v4) {
      goto LABEL_7;
    }
  LABEL_4:;
  }
  if (v6 < v4) {
    goto LABEL_4;
  }
LABEL_7:
  {
    v7 = (unsigned __int64)&a1[i + 2];
    __asm__ volatile("" ::"r"(v7));
  }
  if (i != 0) {
    do {
      while (1) {
        {
          v8 = *(a2 - 2);
          __asm__ volatile("" ::"w"(v8));
        }
        a2 -= 2;
        v9 = v8;
        if (v8 < 0x0.0p+0f) {
          break;
        }
        if (v9 > v4) {
          goto LABEL_38;
        }
      }
    } while (v9 >= v4);
  }
  else if (v7 < (unsigned __int64)a2) {
    do {
      while (1) {
        {
          v11 = *(a2 - 2);
          __asm__ volatile("" ::"w"(v11));
        }
        a2 -= 2;
        v12 = v11;
        if (v11 < 0x0.0p+0f) {
          break;
        }
        if (v12 > v4 || v7 >= (unsigned __int64)a2) {
          goto LABEL_38;
        }
      }
    } while (v12 >= v4 && v7 < (unsigned __int64)a2);
  }
LABEL_38:
  v21 = v7;
  if (v7 < (unsigned __int64)a2) {
    v21 = v7;
    v22 = a2;
    do {
      {
        v23 = *(_QWORD*)v21;
        __asm__ volatile("" ::"r"(v23));
      }
      *(_QWORD*)v21 = *(_QWORD*)v22;
      *(_QWORD*)v22 = v23;
      if (v4 < 0x0.0p+0f) {
        do {
          while (1) {
            {
              v26 = *(float*)(v21 + 8);
              __asm__ volatile("" ::"w"(v26));
            }
            v21 += 8LL;
            v27 = v26;
            if (v26 < 0x0.0p+0f) {
              break;
            }
            if (v27 <= v4) {
              goto LABEL_50;
            }
          }
        } while (v27 < v4);
        do {
        LABEL_50:
          while (1) {
            {
              v28 = *(v22 - 2);
              __asm__ volatile("" ::"w"(v28));
            }
            v22 -= 2;
            v29 = v28;
            if (v28 < 0x0.0p+0f) {
              break;
            }
            if (v29 > v4) {
              goto LABEL_40;
            }
          }
        } while (v29 >= v4);
      }
      else {
        do {
          {
            v24 = *(float*)(v21 + 8);
            __asm__ volatile("" ::"w"(v24));
          }
          v21 += 8LL;
        } while (v24 > v4);
        do {
          {
            v25 = *(v22 - 2);
            __asm__ volatile("" ::"w"(v25));
          }
          v22 -= 2;
        } while (v25 <= v4);
      }
    LABEL_40:;
    } while (v21 < (unsigned __int64)v22);
  }
  if (a1 != (float*)(v21 - 8)) {
    *(_QWORD*)a1 = *(_QWORD*)(v21 - 8);
  }
  *(float*)(v21 - 8) = v2;
  *(_DWORD*)(v21 - 4) = v3;
  return v21 - 8;
}

#pragma GCC visibility pop
