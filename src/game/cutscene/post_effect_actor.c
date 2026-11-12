#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17fca10(_QWORD, float, float, float, float, float, float);
__int64 GameRoutine_17fcb90(_QWORD, float, float, float, float, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_PostEffectActor_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
extern unsigned int GameData_1c0b528[3];
float GameRoutine_17fb700(_QWORD, _QWORD);
float GameRoutine_618640(_QWORD, double, float);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 PostEffectActor_Unknown8(__int64 result, __int64 a2);
__int64 PostEffectActor_Unknown4(__int64 result, double a2, float a3);
void PostEffectActor_Unknown9(__int64 a1, __int64 a2);
_QWORD* PostEffectActor_Destructor_alt1(_QWORD* result) __asm__(
    "PostEffectActor_Destructor");
__int64 GameRoutine_17fb4a0(_QWORD, float, float);
void __attribute__((noreturn)) GameRoutine_1800840(long double);
float PostEffectActor_17fb700_alt2(
    __int64 a1, __int64* a2, long double a3) __asm__("PostEffectActor_17fb700");
_OWORD* PostEffectActor_17fca10(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7);
_OWORD* PostEffectActor_17fcb90(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7);
__attribute__((swiftcall)) void GameRoutine_17fd670(PSEUDO_X8, _QWORD*,
                                                    unsigned int, unsigned int,
                                                    float32x2_t*, float32x4_t*,
                                                    char);
__int64 PostEffectActor_17fb700_alt1(_QWORD,
                                     _QWORD) __asm__("PostEffectActor_17fb700");
extern __int64 GameData_21c6978;
float GameRoutine_618640_alt1(_QWORD, double,
                              double) __asm__("GameRoutine_618640");
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 PostEffectActor_Unknown5(__int64 result, float a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern _DWORD GameData_1c0b528_alt1[3] __asm__("GameData_1c0b528");
float GameRoutine_17fb4a0_alt1(__int64*, long double, long double,
                               long double) __asm__("GameRoutine_17fb4a0");
float GameRoutine_618640_alt2(int, float result, float, float,
                              float) __asm__("GameRoutine_618640");
void __attribute__((noreturn))
GameRoutine_1800840_alt1() __asm__("GameRoutine_1800840");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
float PostEffectActor_17fb700(__int64 a1, __int64* a2, long double a3,
                              long double a4, long double a5);
void PostEffectActor_Destructor(_QWORD* a1);

float PostEffectActor_17fb700(__int64 a1, __int64* a2, long double a3,
                              long double a4, long double a5)
{
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  float v12;

  if ((int)**(float**)a1 == -2) {
    LODWORD(a3) = *(_DWORD*)(a1 + 8);
    LODWORD(a4) = *(_DWORD*)(a1 + 12);
    return GameRoutine_17fb4a0_alt1(a2, a3, a4, a5);
  }
  v6 = *a2;
  v7 = a2[1];
  v8 = 0x0.0p+0f;
  v9 = v7 - *a2;
  v10 = v9 >> 2;
  v11 = (v9 >> 2) / 3uLL;
  if ((int)v11 < 1) {
    v12 = 0x0.0p+0f;
    return v12 + (float)((float)(v8 - v12) * *(float*)(a1 + 16));
  }
  if (v7 == v6 || v10 <= 1 || v9 == 8) {
    goto LABEL_14;
  }
  v12 = *(float*)(v6 + 4);
  if ((_DWORD)v11 != 1) {
    if (v10 > 3 && v9 != 16 && v10 > 5) {
      v8 = *(float*)(v6 + 16);
      return v12 + (float)((float)(v8 - v12) * *(float*)(a1 + 16));
    }
  LABEL_14:
    GameRoutine_1800840_alt1();
  }
  return v12 + (float)((float)(v8 - v12) * *(float*)(a1 + 16));
}

_OWORD* PostEffectActor_17fca10(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _OWORD* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  char v18;
  __int64 v19;
  int v20;
  __int128 v21;

  v7 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 192LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      v12 = a7;
      v13 = a6;
      v14 = a5;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      a2 = v17;
      a3 = v16;
      result = v11;
      a4 = v15;
      a5 = v14;
      a6 = v13;
      a7 = v12;
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 192LL);
  }
  v18 = *(_BYTE*)(v10 + 272);
  v19 = *(_QWORD*)(v10 + 328);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(v10 + 320);
  *(_QWORD*)(v10 + 264) = v19;
  if ((v18 & 1) == 0) {
    *(_BYTE*)(v10 + 272) = 1;
  }
  v20 = *(_DWORD*)(v10 + 408);
  *(_BYTE*)(v10 + 376) = 1;
  *(_BYTE*)(v10 + 456) = 1;
  *(_BYTE*)(v10 + 536) = 1;
  *(_BYTE*)(v10 + 616) = 1;
  *(_BYTE*)(v10 + 696) = 1;
  *(_BYTE*)(v10 + 776) = 1;
  *(_WORD*)(v10 + 89) = 257;
  *(_DWORD*)(v10 + 372) = v20;
  *(_DWORD*)(v10 + 452) = *(_DWORD*)(v10 + 488);
  *(_DWORD*)(v10 + 532) = *(_DWORD*)(v10 + 568);
  *(_DWORD*)(v10 + 612) = *(_DWORD*)(v10 + 648);
  *(_DWORD*)(v10 + 692) = *(_DWORD*)(v10 + 728);
  *(_DWORD*)(v10 + 772) = *(_DWORD*)(v10 + 808);
  v21 = *result;
  *(float*)(v10 + 372) = a2;
  *(_BYTE*)(v10 + 376) = 1;
  *(float*)(v10 + 452) = a3;
  *(_BYTE*)(v10 + 456) = 1;
  *(float*)(v10 + 532) = a4;
  *(_BYTE*)(v10 + 536) = 1;
  *(float*)(v10 + 612) = a5;
  *(_BYTE*)(v10 + 616) = 1;
  *(float*)(v10 + 692) = a6;
  *(_BYTE*)(v10 + 696) = 1;
  *(float*)(v10 + 772) = a7;
  *(_BYTE*)(v10 + 776) = 1;
  *(_OWORD*)(v10 + 256) = v21;
  return result;
}

_OWORD* PostEffectActor_17fcb90(_OWORD* result, float a2, float a3, float a4,
                                float a5, float a6, float a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _OWORD* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  char v18;
  __int64 v19;
  int v20;
  __int128 v21;

  v7 = *(_QWORD*)(game_g_frame_clock + 13224);
  v8 = *(_QWORD*)(v7 + 48);
  v9 = *(_QWORD*)(v7 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 184LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      v12 = a7;
      v13 = a6;
      v14 = a5;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      a2 = v17;
      a3 = v16;
      result = v11;
      a4 = v15;
      a5 = v14;
      a6 = v13;
      a7 = v12;
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 8) + 184LL);
  }
  v18 = *(_BYTE*)(v10 + 192);
  v19 = *(_QWORD*)(v10 + 248);
  *(_QWORD*)(v10 + 176) = *(_QWORD*)(v10 + 240);
  *(_QWORD*)(v10 + 184) = v19;
  if ((v18 & 1) == 0) {
    *(_BYTE*)(v10 + 192) = 1;
  }
  v20 = *(_DWORD*)(v10 + 328);
  *(_BYTE*)(v10 + 296) = 1;
  *(_BYTE*)(v10 + 376) = 1;
  *(_BYTE*)(v10 + 456) = 1;
  *(_BYTE*)(v10 + 536) = 1;
  *(_BYTE*)(v10 + 616) = 1;
  *(_BYTE*)(v10 + 696) = 1;
  *(_WORD*)(v10 + 89) = 257;
  *(_DWORD*)(v10 + 292) = v20;
  *(_DWORD*)(v10 + 372) = *(_DWORD*)(v10 + 408);
  *(_DWORD*)(v10 + 452) = *(_DWORD*)(v10 + 488);
  *(_DWORD*)(v10 + 532) = *(_DWORD*)(v10 + 568);
  *(_DWORD*)(v10 + 612) = *(_DWORD*)(v10 + 648);
  *(_DWORD*)(v10 + 692) = *(_DWORD*)(v10 + 728);
  v21 = *result;
  *(float*)(v10 + 292) = a2;
  *(_BYTE*)(v10 + 296) = 1;
  *(float*)(v10 + 372) = a3;
  *(_BYTE*)(v10 + 376) = 1;
  *(float*)(v10 + 452) = a4;
  *(_BYTE*)(v10 + 456) = 1;
  *(float*)(v10 + 532) = a5;
  *(_BYTE*)(v10 + 536) = 1;
  *(float*)(v10 + 612) = a6;
  *(_BYTE*)(v10 + 616) = 1;
  *(float*)(v10 + 692) = a7;
  *(_BYTE*)(v10 + 696) = 1;
  *(_OWORD*)(v10 + 176) = v21;
  return result;
}

__int64 PostEffectActor_Unknown8(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* i;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  _QWORD v12[2];

  v2 = *(__int64**)(result + 8);
  for (i = *(__int64**)(result + 16); v2 != i; v2 += 3) {
    v5 = std___1___shared_weak_count_lock_alt1(v2[1]);
    v6 = *(_QWORD*)(a2 + 32);
    v7 = *(unsigned __int8*)(*v2 + 144);
    v8 = *v2 + 145;
    v9 = *(_QWORD*)(*v2 + 152);
    v10 = (v7 & 1) == 0;
    v11 = v7 >> 1;
    if (v10) {
      v9 = v11;
    }
    else {
      v8 = *(_QWORD*)(*v2 + 160);
    }
    v12[0] = v8;
    v12[1] = v9;
    if (v6 == 0) {
      GameRoutine_60a310_alt1();
    }
    result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 48LL))(v6, v12);
    v2[2] = result;
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

__int64 PostEffectActor_Unknown4(__int64 result, double a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  long double v8;
  long double v9;
  __int64 v10;
  __int64* v11;
  long double v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  long double v21;
  int v22;
  long double v23;
  long double v24;
  long double v25;
  int v26;
  long double v27;
  long double v28;
  float v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  long double v40;
  __int64 v41;
  long double v42;
  float v43;
  __int64 v44;
  unsigned int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  long double v52;
  int v53;
  long double v54;
  long double v55;
  long double v56;
  int v57;
  long double v58;
  long double v59;
  long double v60;
  int v61;
  long double v62;
  long double v63;
  long double v64;
  int v65;
  long double v66;
  long double v67;
  float v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64* v77;
  long double v78;
  long double v79;
  __int64 v80;
  long double v81;
  __int64 v82;
  unsigned int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _BYTE* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  long double v92;
  float v93;
  long double v94;
  long double v95;
  long double v96;
  float v97;
  long double v98;
  long double v99;
  long double v100;
  float v101;
  long double v102;
  long double v103;
  long double v104;
  float v105;
  long double v106;
  long double v107;
  long double v108;
  float v109;
  long double v110;
  long double v111;
  float v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64* v116;
  long double v117;
  long double v118;
  __int64 v119;
  long double v120;
  __int64 v121;
  unsigned int v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  _BYTE* v127;
  __int64 v128;
  long double v129;
  int v130;
  long double v131;
  long double v132;
  float v133;
  char v134;
  long double v135;
  long double v136;
  float v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  float v142;
  int v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64* v147;
  long double v148;
  long double v149;
  __int64 v150;
  long double v151;
  __int64 v152;
  unsigned int v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  long double v160;
  int v161;
  long double v162;
  long double v163;
  float v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  float v169;
  __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  __int64* v173;
  long double v174;
  long double v175;
  __int64 v176;
  long double v177;
  __int64 v178;
  unsigned int v179;
  int v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  _BYTE* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  long double v188;
  float v189;
  long double v190;
  long double v191;
  long double v192;
  float v193;
  long double v194;
  long double v195;
  long double v196;
  float v197;
  long double v198;
  long double v199;
  long double v200;
  float v201;
  long double v202;
  long double v203;
  long double v204;
  float v205;
  long double v206;
  long double v207;
  float v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64* v212;
  long double v213;
  long double v214;
  __int64 v215;
  long double v216;
  __int64 v217;
  unsigned int v218;
  int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  _BYTE* v223;
  __int64 v224;
  long double v225;
  int v226;
  long double v227;
  long double v228;
  long double v229;
  int v230;
  long double v231;
  long double v232;
  long double v233;
  int v234;
  long double v235;
  long double v236;
  float v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  float v242;
  __int64 v243;
  __int64 v244;
  unsigned __int64 v245;
  __int64* v246;
  __int64 v247;
  int v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  unsigned __int64 v261;
  _QWORD* v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  unsigned __int64 v270;
  _QWORD* v271;
  int v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  long double v279;
  long double v280;
  _QWORD v281[2];
  struct {
    __int64 v282;
    int v283;
    float v284;
    float v285;
  } v282_;

  v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v3 = *(_QWORD*)(result + 80);
  v5 = (_QWORD*)result;
  v6 = (unsigned __int64)(*(_QWORD*)(result + 88) - v3) >> 2;
  while ((int)v6 >= 1) {
    LODWORD(v6) = v6 - 1;
    if (*(float*)(v3 + 4LL * (unsigned int)v6) <= a3) {
      if ((v6 & 0x80000000) != 0) {
        break;
      }
      v7 = (__int64*)(*(_QWORD*)(result + 56) + 16 * (v6 & 0x7FFFFFFF));
      result = v7[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock_alt1(result),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (result == 0) {
        break;
      }
      v10 = *v7;
      if (v10 != 0) {
        v11 = game_g_frame_clock_ptr[0];
        if (*(_BYTE*)(v10 + 24) == 1) {
          v12 = *(long double*)(v10 + 32);
          LODWORD(v8) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          v13 = result;
          LODWORD(v9) = *(_DWORD*)(v10 + 8);
          v282_.v282 = v10 + 32;
          v282_.v283 = LODWORD(v9);
          v282_.v284 = a3;
          if ((unsigned int)(int)*(float*)&v12 <= 0xFFFFFFFD) {
            *(float*)&v9 = a3 - *(float*)&v9;
            *(_QWORD*)&v8 = 0;
            if (*(float*)&v9 > 0x0.0p+0f) {
              LODWORD(v8) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              if (*(float*)&v9 < *((float*)&v12 + 1)) {
                v14 = (int)*(float*)&v12 - 1;
                if (v14 > 2) {
                  v15 = 0;
                }
                else {
                  v15 = GameData_1c0b528_alt1[v14];
                }
                *(float*)&v8 = GameRoutine_618640_alt2(
                    v15, 0x0.0p+0f, 0x1.0000000000000p+0f, *(float*)&v9,
                    *((float*)&v12 + 1)),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            }
          }
          v282_.v285 = *(float*)&v8;
          *(float*)&v21 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v10 + 56), v8, v12, v9),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v22 = LODWORD(v21);
          *(float*)&v25 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v10 + 88), v21, v23, v24),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v26 = LODWORD(v25);
          v29 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                        (__int64*)(v10 + 120), v25, v27, v28),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v30 = *(_DWORD*)(v10 + 144);
          v31 = *(_QWORD*)(*v11 + 13224);
          v32 = *(_QWORD*)(v31 + 48);
          v33 = *(_QWORD*)(v31 + 56);
          if (v33 != 0) {
            result = v13;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                      memory_order_relaxed);
            v34 = *(_QWORD*)(*(_QWORD*)(v32 + 8) + 168LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v35 = v29;
              (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v33),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v29 = v35;
              goto LABEL_32;
            }
          }
          else {
            v34 = *(_QWORD*)(*(_QWORD*)(v32 + 8) + 168LL);
          LABEL_32:
            result = v13;
          }
          *(_DWORD*)(v34 + 92) = v22;
          *(_DWORD*)(v34 + 252) = v26;
          *(float*)(v34 + 332) = v29;
          *(_DWORD*)(v34 + 172) = v30;
          *(_BYTE*)(v34 + 96) = 1;
          *(_BYTE*)(v34 + 256) = 1;
          *(_BYTE*)(v34 + 336) = 1;
          *(_BYTE*)(v34 + 176) = 1;
        }
        else {
          v16 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
          v17 = *(_QWORD*)(v16 + 48);
          v18 = *(_QWORD*)(v16 + 56);
          if (v18 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                      memory_order_relaxed);
            v19 = *(_BYTE**)(*(_QWORD*)(v17 + 8) + 168LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v20 = result;
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v18),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = v20;
            }
          }
          else {
            v19 = *(_BYTE**)(*(_QWORD*)(v17 + 8) + 168LL);
          }
          if (v19[96] == 1) {
            v19[96] = 0;
          }
          if (v19[256] == 1) {
            v19[256] = 0;
          }
          if (v19[336] == 1) {
            v19[336] = 0;
          }
          if (v19[176] == 1) {
            v19[176] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v36 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v191 = COERCE_AS(__typeof__(v191),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v194 = COERCE_AS(__typeof__(v194),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v198 = COERCE_AS(__typeof__(v198),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v203 = COERCE_AS(__typeof__(v203),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v206 = COERCE_AS(__typeof__(v206),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v228 = COERCE_AS(__typeof__(v228),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v231 = COERCE_AS(__typeof__(v231),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v232 = COERCE_AS(__typeof__(v232),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v235 = COERCE_AS(__typeof__(v235),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v236 = COERCE_AS(__typeof__(v236),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v36),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      }
      break;
    }
  }
  v37 = v5[16];
  v38 = (unsigned __int64)(v5[17] - v37) >> 2;
  while ((int)v38 >= 1) {
    LODWORD(v38) = v38 - 1;
    if (*(float*)(v37 + 4LL * (unsigned int)v38) <= a3) {
      if ((v38 & 0x80000000) != 0) {
        break;
      }
      v39 = (__int64*)(v5[13] + 16 * (v38 & 0x7FFFFFFF));
      result = v39[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock_alt1(result),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (result == 0) {
        break;
      }
      v41 = *v39;
      if (v41 != 0) {
        if (*(_BYTE*)(v41 + 24) == 1) {
          v42 = *(long double*)(v41 + 32);
          v43 = 0x1.0000000000000p+0f;
          v44 = result;
          LODWORD(v40) = *(_DWORD*)(v41 + 8);
          v282_.v282 = v41 + 32;
          v282_.v283 = LODWORD(v40);
          v282_.v284 = a3;
          if ((unsigned int)(int)*(float*)&v42 <= 0xFFFFFFFD) {
            *(float*)&v40 = a3 - *(float*)&v40;
            v43 = 0x0.0p+0f;
            if (*(float*)&v40 > 0x0.0p+0f) {
              v43 = 0x1.0000000000000p+0f;
              if (*(float*)&v40 < *((float*)&v42 + 1)) {
                v45 = (int)*(float*)&v42 - 1;
                if (v45 > 2) {
                  v46 = 0;
                }
                else {
                  v46 = GameData_1c0b528_alt1[v45];
                }
                v43 = GameRoutine_618640_alt2(
                    v46, 0x0.0p+0f, 0x1.0000000000000p+0f, *(float*)&v40,
                    *((float*)&v42 + 1)),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            }
          }
          v282_.v285 = v43;
          v279 = *(long double*)(v41 + 48);
          *(float*)&v52 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v41 + 72), v279, v42, v40),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v53 = LODWORD(v52);
          *(float*)&v56 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v41 + 104), v52, v54, v55),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v57 = LODWORD(v56);
          *(float*)&v60 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v41 + 136), v56, v58, v59),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v61 = LODWORD(v60);
          *(float*)&v64 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v41 + 168), v60, v62, v63),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v65 = LODWORD(v64);
          v68 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                        (__int64*)(v41 + 200), v64, v66, v67),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v69 = *(_QWORD*)(game_g_frame_clock + 13224);
          v70 = *(_QWORD*)(v69 + 48);
          v71 = *(_QWORD*)(v69 + 56);
          if (v71 != 0) {
            result = v44;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                      memory_order_relaxed);
            v72 = *(_QWORD*)(*(_QWORD*)(v70 + 8) + 200LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v73 = v68;
              (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v71),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v68 = v73;
              goto LABEL_73;
            }
          }
          else {
            v72 = *(_QWORD*)(*(_QWORD*)(v70 + 8) + 200LL);
          LABEL_73:
            result = v44;
          }
          if ((*(_BYTE*)(v72 + 352) & 1) == 0) {
            *(_BYTE*)(v72 + 352) = 1;
          }
          *(_DWORD*)(v72 + 452) = v53;
          *(_DWORD*)(v72 + 164) = v57;
          *(_DWORD*)(v72 + 244) = v61;
          *(_DWORD*)(v72 + 532) = v65;
          *(float*)(v72 + 612) = v68;
          *(_WORD*)(v72 + 89) = 257;
          *(_BYTE*)(v72 + 456) = 1;
          *(_BYTE*)(v72 + 168) = 1;
          *(_BYTE*)(v72 + 248) = 1;
          *(_BYTE*)(v72 + 536) = 1;
          *(_BYTE*)(v72 + 616) = 1;
          *(long double*)(v72 + 336) = v279;
        }
        else {
          v47 = *(_QWORD*)(game_g_frame_clock + 13224);
          v48 = *(_QWORD*)(v47 + 48);
          v49 = *(_QWORD*)(v47 + 56);
          if (v49 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                      memory_order_relaxed);
            v50 = *(_BYTE**)(*(_QWORD*)(v48 + 8) + 200LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v51 = result;
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v49),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = v51;
            }
          }
          else {
            v50 = *(_BYTE**)(*(_QWORD*)(v48 + 8) + 200LL);
          }
          if (v50[90] == 1) {
            v50[90] = 0;
          }
          if (v50[352] == 1) {
            v50[352] = 0;
          }
          if (v50[456] == 1) {
            v50[456] = 0;
          }
          if (v50[168] == 1) {
            v50[168] = 0;
          }
          if (v50[248] == 1) {
            v50[248] = 0;
          }
          if (v50[536] == 1) {
            v50[536] = 0;
          }
          if (v50[616] == 1) {
            v50[616] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v74 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v191 = COERCE_AS(__typeof__(v191),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v194 = COERCE_AS(__typeof__(v194),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v198 = COERCE_AS(__typeof__(v198),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v203 = COERCE_AS(__typeof__(v203),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v206 = COERCE_AS(__typeof__(v206),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v228 = COERCE_AS(__typeof__(v228),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v231 = COERCE_AS(__typeof__(v231),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v232 = COERCE_AS(__typeof__(v232),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v235 = COERCE_AS(__typeof__(v235),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v236 = COERCE_AS(__typeof__(v236),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v74),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      }
      break;
    }
  }
  v75 = v5[22];
  v76 = (unsigned __int64)(v5[23] - v75) >> 2;
  while ((int)v76 >= 1) {
    LODWORD(v76) = v76 - 1;
    if (*(float*)(v75 + 4LL * (unsigned int)v76) <= a3) {
      if ((v76 & 0x80000000) == 0) {
        v77 = (__int64*)(v5[19] + 16 * (v76 & 0x7FFFFFFF));
        result = v77[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            v80 = *v77;
            if (v80 != 0) {
              if (*(_BYTE*)(v80 + 24) == 1) {
                v81 = *(long double*)(v80 + 32);
                LODWORD(v78) =
                    COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                v82 = result;
                LODWORD(v79) = *(_DWORD*)(v80 + 8);
                v282_.v282 = v80 + 32;
                v282_.v283 = LODWORD(v79);
                v282_.v284 = a3;
                if ((unsigned int)(int)*(float*)&v81 <= 0xFFFFFFFD) {
                  *(float*)&v79 = a3 - *(float*)&v79;
                  *(_QWORD*)&v78 = 0;
                  if (*(float*)&v79 > 0x0.0p+0f) {
                    LODWORD(v78) =
                        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                    if (*(float*)&v79 < *((float*)&v81 + 1)) {
                      v83 = (int)*(float*)&v81 - 1;
                      if (v83 > 2) {
                        v84 = 0;
                      }
                      else {
                        v84 = GameData_1c0b528_alt1[v83];
                      }
                      *(float*)&v78 = GameRoutine_618640_alt2(
                          v84, 0x0.0p+0f, 0x1.0000000000000p+0f, *(float*)&v79,
                          *((float*)&v81 + 1)),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                    }
                  }
                }
                v90 = *(_QWORD*)(v80 + 48);
                v91 = *(_QWORD*)(v80 + 56);
                v282_.v285 = *(float*)&v78;
                v281[0] = v90;
                v281[1] = v91;
                *(float*)&v92 = PostEffectActor_17fb700(
                    (__int64)&v282_.v282, (__int64*)(v80 + 72), v78, v81, v79),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v93 = *(float*)&v92;
                *(float*)&v96 = PostEffectActor_17fb700(
                    (__int64)&v282_.v282, (__int64*)(v80 + 104), v92, v94, v95),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v97 = *(float*)&v96;
                *(float*)&v100 = PostEffectActor_17fb700(
                    (__int64)&v282_.v282, (__int64*)(v80 + 136), v96, v98, v99),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v101 = *(float*)&v100;
                *(float*)&v104 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v80 + 168),
                                                         v100, v102, v103),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v105 = *(float*)&v104;
                *(float*)&v108 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v80 + 200),
                                                         v104, v106, v107),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v109 = *(float*)&v108;
                v112 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                               (__int64*)(v80 + 232), v108,
                                               v110, v111),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                PostEffectActor_17fca10(v281, v93, v97, v101, v105, v109, v112),
                    v102 = COERCE_AS(__typeof__(v102),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v106 = COERCE_AS(__typeof__(v106),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v107 = COERCE_AS(__typeof__(v107),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v110 = COERCE_AS(__typeof__(v110),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v111 = COERCE_AS(__typeof__(v111),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v131 = COERCE_AS(__typeof__(v131),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v132 = COERCE_AS(__typeof__(v132),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v135 = COERCE_AS(__typeof__(v135),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v162 = COERCE_AS(__typeof__(v162),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v163 = COERCE_AS(__typeof__(v163),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v190 = COERCE_AS(__typeof__(v190),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v191 = COERCE_AS(__typeof__(v191),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v194 = COERCE_AS(__typeof__(v194),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v195 = COERCE_AS(__typeof__(v195),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v198 = COERCE_AS(__typeof__(v198),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v199 = COERCE_AS(__typeof__(v199),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v202 = COERCE_AS(__typeof__(v202),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v203 = COERCE_AS(__typeof__(v203),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v206 = COERCE_AS(__typeof__(v206),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v207 = COERCE_AS(__typeof__(v207),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v227 = COERCE_AS(__typeof__(v227),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v228 = COERCE_AS(__typeof__(v228),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v231 = COERCE_AS(__typeof__(v231),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v232 = COERCE_AS(__typeof__(v232),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v235 = COERCE_AS(__typeof__(v235),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v236 = COERCE_AS(__typeof__(v236),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v27 = COERCE_AS(__typeof__(v27),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v54 = COERCE_AS(__typeof__(v54),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v55 = COERCE_AS(__typeof__(v55),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v59 = COERCE_AS(__typeof__(v59),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v66 = COERCE_AS(__typeof__(v66),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v67 = COERCE_AS(__typeof__(v67),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v94 = COERCE_AS(__typeof__(v94),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v98 = COERCE_AS(__typeof__(v98),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v99 = COERCE_AS(__typeof__(v99),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                result = v82;
              }
              else {
                v85 = *(_QWORD*)(game_g_frame_clock + 13224);
                v86 = *(_QWORD*)(v85 + 48);
                v87 = *(_QWORD*)(v85 + 56);
                if (v87 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8),
                                            1u, memory_order_relaxed);
                  v88 = *(_BYTE**)(*(_QWORD*)(v86 + 8) + 192LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v89 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v87),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    result = v89;
                  }
                }
                else {
                  v88 = *(_BYTE**)(*(_QWORD*)(v86 + 8) + 192LL);
                }
                if (v88[90] == 1) {
                  v88[90] = 0;
                }
                if (v88[272] == 1) {
                  v88[272] = 0;
                }
                if (v88[376] == 1) {
                  v88[376] = 0;
                }
                if (v88[536] == 1) {
                  v88[536] = 0;
                }
                if (v88[616] == 1) {
                  v88[616] = 0;
                }
                if (v88[456] == 1) {
                  v88[456] = 0;
                }
                if (v88[696] == 1) {
                  v88[696] = 0;
                }
                if (v88[776] == 1) {
                  v88[776] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v113 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v113),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v191 = COERCE_AS(__typeof__(v191),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v194 = COERCE_AS(__typeof__(v194),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v195 = COERCE_AS(__typeof__(v195),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v198 = COERCE_AS(__typeof__(v198),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v199 = COERCE_AS(__typeof__(v199),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v203 = COERCE_AS(__typeof__(v203),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v207 = COERCE_AS(__typeof__(v207),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v228 = COERCE_AS(__typeof__(v228),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v231 = COERCE_AS(__typeof__(v231),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v232 = COERCE_AS(__typeof__(v232),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v235 = COERCE_AS(__typeof__(v235),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v236 = COERCE_AS(__typeof__(v236),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
        }
      }
      break;
    }
  }
  v114 = v5[28];
  v115 = (unsigned __int64)(v5[29] - v114) >> 2;
  while ((int)v115 >= 1) {
    LODWORD(v115) = v115 - 1;
    if (*(float*)(v114 + 4LL * (unsigned int)v115) <= a3) {
      if ((v115 & 0x80000000) == 0) {
        v116 = (__int64*)(v5[25] + 16 * (v115 & 0x7FFFFFFF));
        result = v116[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            v119 = *v116;
            if (v119 != 0) {
              if (*(_BYTE*)(v119 + 24) == 1) {
                v120 = *(long double*)(v119 + 32);
                LODWORD(v117) =
                    COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                v121 = result;
                LODWORD(v118) = *(_DWORD*)(v119 + 8);
                v282_.v282 = v119 + 32;
                v282_.v283 = LODWORD(v118);
                v282_.v284 = a3;
                if ((unsigned int)(int)*(float*)&v120 <= 0xFFFFFFFD) {
                  *(float*)&v118 = a3 - *(float*)&v118;
                  *(_QWORD*)&v117 = 0;
                  if (*(float*)&v118 > 0x0.0p+0f) {
                    LODWORD(v117) =
                        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                    if (*(float*)&v118 < *((float*)&v120 + 1)) {
                      v122 = (int)*(float*)&v120 - 1;
                      if (v122 > 2) {
                        v123 = 0;
                      }
                      else {
                        v123 = GameData_1c0b528_alt1[v122];
                      }
                      *(float*)&v117 = GameRoutine_618640_alt2(
                          v123, 0x0.0p+0f, 0x1.0000000000000p+0f,
                          *(float*)&v118, *((float*)&v120 + 1)),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                    }
                  }
                }
                v282_.v285 = *(float*)&v117;
                *(float*)&v129 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v119 + 56),
                                                         v117, v120, v118),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v130 = LODWORD(v129);
                v133 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                               (__int64*)(v119 + 88), v129,
                                               v131, v132),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v134 = *(_BYTE*)(v119 + 112);
                v280 = *(long double*)(v119 + 128);
                v137 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                               (__int64*)(v119 + 152), v280,
                                               v135, v136),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v138 = *(_QWORD*)(game_g_frame_clock + 13224);
                v139 = *(_QWORD*)(v138 + 48);
                v140 = *(_QWORD*)(v138 + 56);
                if (v140 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8),
                                            1u, memory_order_relaxed);
                  v141 = *(_QWORD*)(*(_QWORD*)(v139 + 8) + 104LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v142 = v137;
                    (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v140),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    v137 = v142;
                  }
                }
                else {
                  v141 = *(_QWORD*)(*(_QWORD*)(v139 + 8) + 104LL);
                }
                *(_DWORD*)(v141 + 164) = v130;
                *(float*)(v141 + 244) = v133;
                result = v121;
                *(_WORD*)(v141 + 89) = 257;
                *(_BYTE*)(v141 + 168) = 1;
                *(_BYTE*)(v141 + 248) = 1;
                if ((v134 & 1) != 0) {
                  *(_DWORD*)(v141 + 764) = 1;
                  *(_BYTE*)(v141 + 768) = 1;
                  if ((*(_BYTE*)(v141 + 432) & 1) == 0) {
                    *(_BYTE*)(v141 + 432) = 1;
                  }
                  *(float*)(v141 + 532) = v137;
                  *(_BYTE*)(v141 + 536) = 1;
                  *(long double*)(v141 + 416) = v280;
                }
                else {
                  *(_BYTE*)(v141 + 768) = 1;
                  v143 = *(unsigned __int8*)(v141 + 432);
                  *(_DWORD*)(v141 + 764) = 2;
                  if (v143 == 1) {
                    *(_BYTE*)(v141 + 432) = 0;
                  }
                  if (*(_BYTE*)(v141 + 536) == 1) {
                    *(_BYTE*)(v141 + 536) = 0;
                  }
                }
              }
              else {
                v124 = *(_QWORD*)(game_g_frame_clock + 13224);
                v125 = *(_QWORD*)(v124 + 48);
                v126 = *(_QWORD*)(v124 + 56);
                if (v126 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v126 + 8),
                                            1u, memory_order_relaxed);
                  v127 = *(_BYTE**)(*(_QWORD*)(v125 + 8) + 104LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v126 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v128 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v126 + 16LL))(v126),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v126),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    result = v128;
                  }
                }
                else {
                  v127 = *(_BYTE**)(*(_QWORD*)(v125 + 8) + 104LL);
                }
                if (v127[90] == 1) {
                  v127[90] = 0;
                }
                if (v127[168] == 1) {
                  v127[168] = 0;
                }
                if (v127[248] == 1) {
                  v127[248] = 0;
                }
                if (v127[768] == 1) {
                  v127[768] = 0;
                }
                if (v127[432] == 1) {
                  v127[432] = 0;
                }
                if (v127[536] == 1) {
                  v127[536] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v144 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v144),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v191 = COERCE_AS(__typeof__(v191),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v194 = COERCE_AS(__typeof__(v194),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v195 = COERCE_AS(__typeof__(v195),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v198 = COERCE_AS(__typeof__(v198),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v199 = COERCE_AS(__typeof__(v199),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v203 = COERCE_AS(__typeof__(v203),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v207 = COERCE_AS(__typeof__(v207),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v228 = COERCE_AS(__typeof__(v228),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v231 = COERCE_AS(__typeof__(v231),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v232 = COERCE_AS(__typeof__(v232),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v235 = COERCE_AS(__typeof__(v235),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v236 = COERCE_AS(__typeof__(v236),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
        }
      }
      break;
    }
  }
  v145 = v5[34];
  v146 = (unsigned __int64)(v5[35] - v145) >> 2;
  while ((int)v146 >= 1) {
    LODWORD(v146) = v146 - 1;
    if (*(float*)(v145 + 4LL * (unsigned int)v146) <= a3) {
      if ((v146 & 0x80000000) != 0) {
        break;
      }
      v147 = (__int64*)(v5[31] + 16 * (v146 & 0x7FFFFFFF));
      result = v147[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock_alt1(result),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (result == 0) {
        break;
      }
      v150 = *v147;
      if (v150 != 0) {
        if (*(_BYTE*)(v150 + 24) == 1) {
          v151 = *(long double*)(v150 + 32);
          LODWORD(v148) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          v152 = result;
          LODWORD(v149) = *(_DWORD*)(v150 + 8);
          v282_.v282 = v150 + 32;
          v282_.v283 = LODWORD(v149);
          v282_.v284 = a3;
          if ((unsigned int)(int)*(float*)&v151 <= 0xFFFFFFFD) {
            *(float*)&v149 = a3 - *(float*)&v149;
            *(_QWORD*)&v148 = 0;
            if (*(float*)&v149 > 0x0.0p+0f) {
              LODWORD(v148) =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              if (*(float*)&v149 < *((float*)&v151 + 1)) {
                v153 = (int)*(float*)&v151 - 1;
                if (v153 > 2) {
                  v154 = 0;
                }
                else {
                  v154 = GameData_1c0b528_alt1[v153];
                }
                *(float*)&v148 = GameRoutine_618640_alt2(
                    v154, 0x0.0p+0f, 0x1.0000000000000p+0f, *(float*)&v149,
                    *((float*)&v151 + 1)),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            }
          }
          v282_.v285 = *(float*)&v148;
          *(float*)&v160 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v150 + 56), v148, v151, v149),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v161 = LODWORD(v160);
          v164 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v150 + 88), v160, v162, v163),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v165 = *(_QWORD*)(game_g_frame_clock + 13224);
          v166 = *(_QWORD*)(v165 + 48);
          v167 = *(_QWORD*)(v165 + 56);
          if (v167 != 0) {
            result = v152;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 8), 1u,
                                      memory_order_relaxed);
            v168 = *(_QWORD*)(*(_QWORD*)(v166 + 8) + 96LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v167 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v169 = v164;
              (*(void (**)(__int64))(*(_QWORD*)v167 + 16LL))(v167),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v167),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v164 = v169;
              goto LABEL_189;
            }
          }
          else {
            v168 = *(_QWORD*)(*(_QWORD*)(v166 + 8) + 96LL);
          LABEL_189:
            result = v152;
          }
          *(_DWORD*)(v168 + 92) = v161;
          *(float*)(v168 + 172) = v164;
          *(_BYTE*)(v168 + 96) = 1;
          *(_BYTE*)(v168 + 176) = 1;
        }
        else {
          v155 = *(_QWORD*)(game_g_frame_clock + 13224);
          v156 = *(_QWORD*)(v155 + 48);
          v157 = *(_QWORD*)(v155 + 56);
          if (v157 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v157 + 8), 1u,
                                      memory_order_relaxed);
            v158 = *(_QWORD*)(*(_QWORD*)(v156 + 8) + 96LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v157 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v159 = result;
              (*(void (**)(__int64))(*(_QWORD*)v157 + 16LL))(v157),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v157),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = v159;
            }
          }
          else {
            v158 = *(_QWORD*)(*(_QWORD*)(v156 + 8) + 96LL);
          }
          if (*(_BYTE*)(v158 + 96) == 1) {
            *(_BYTE*)(v158 + 96) = 0;
          }
          if (*(_BYTE*)(v158 + 176) == 1) {
            *(_BYTE*)(v158 + 176) = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v170 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v191 = COERCE_AS(__typeof__(v191),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v194 = COERCE_AS(__typeof__(v194),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v198 = COERCE_AS(__typeof__(v198),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v203 = COERCE_AS(__typeof__(v203),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v206 = COERCE_AS(__typeof__(v206),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v228 = COERCE_AS(__typeof__(v228),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v231 = COERCE_AS(__typeof__(v231),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v232 = COERCE_AS(__typeof__(v232),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v235 = COERCE_AS(__typeof__(v235),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v236 = COERCE_AS(__typeof__(v236),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v170),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      }
      break;
    }
  }
  v171 = v5[40];
  v172 = (unsigned __int64)(v5[41] - v171) >> 2;
  while ((int)v172 >= 1) {
    LODWORD(v172) = v172 - 1;
    if (*(float*)(v171 + 4LL * (unsigned int)v172) <= a3) {
      if ((v172 & 0x80000000) == 0) {
        v173 = (__int64*)(v5[37] + 16 * (v172 & 0x7FFFFFFF));
        result = v173[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            v176 = *v173;
            if (v176 != 0) {
              if (*(_BYTE*)(v176 + 24) == 1) {
                v177 = *(long double*)(v176 + 32);
                LODWORD(v174) =
                    COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                v178 = result;
                LODWORD(v175) = *(_DWORD*)(v176 + 8);
                v282_.v282 = v176 + 32;
                v282_.v283 = LODWORD(v175);
                v282_.v284 = a3;
                if ((unsigned int)(int)*(float*)&v177 <= 0xFFFFFFFD) {
                  *(float*)&v175 = a3 - *(float*)&v175;
                  *(_QWORD*)&v174 = 0;
                  if (*(float*)&v175 > 0x0.0p+0f) {
                    LODWORD(v174) =
                        COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                    if (*(float*)&v175 < *((float*)&v177 + 1)) {
                      v179 = (int)*(float*)&v177 - 1;
                      if (v179 > 2) {
                        v180 = 0;
                      }
                      else {
                        v180 = GameData_1c0b528_alt1[v179];
                      }
                      *(float*)&v174 = GameRoutine_618640_alt2(
                          v180, 0x0.0p+0f, 0x1.0000000000000p+0f,
                          *(float*)&v175, *((float*)&v177 + 1)),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                    }
                  }
                }
                v186 = *(_QWORD*)(v176 + 48);
                v187 = *(_QWORD*)(v176 + 56);
                v282_.v285 = *(float*)&v174;
                v281[0] = v186;
                v281[1] = v187;
                *(float*)&v188 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v176 + 72),
                                                         v174, v177, v175),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v189 = *(float*)&v188;
                *(float*)&v192 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v176 + 104),
                                                         v188, v190, v191),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v193 = *(float*)&v192;
                *(float*)&v196 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v176 + 136),
                                                         v192, v194, v195),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v197 = *(float*)&v196;
                *(float*)&v200 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v176 + 168),
                                                         v196, v198, v199),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v201 = *(float*)&v200;
                *(float*)&v204 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                                         (__int64*)(v176 + 200),
                                                         v200, v202, v203),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                v205 = *(float*)&v204;
                v208 = PostEffectActor_17fb700((__int64)&v282_.v282,
                                               (__int64*)(v176 + 232), v204,
                                               v206, v207),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
                PostEffectActor_17fcb90(v281, v189, v193, v197, v201, v205,
                                        v208),
                    v102 = COERCE_AS(__typeof__(v102),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v106 = COERCE_AS(__typeof__(v106),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v107 = COERCE_AS(__typeof__(v107),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v110 = COERCE_AS(__typeof__(v110),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v111 = COERCE_AS(__typeof__(v111),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v131 = COERCE_AS(__typeof__(v131),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v132 = COERCE_AS(__typeof__(v132),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v135 = COERCE_AS(__typeof__(v135),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v136 = COERCE_AS(__typeof__(v136),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v162 = COERCE_AS(__typeof__(v162),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v163 = COERCE_AS(__typeof__(v163),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v190 = COERCE_AS(__typeof__(v190),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v191 = COERCE_AS(__typeof__(v191),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v194 = COERCE_AS(__typeof__(v194),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v195 = COERCE_AS(__typeof__(v195),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v198 = COERCE_AS(__typeof__(v198),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v199 = COERCE_AS(__typeof__(v199),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v202 = COERCE_AS(__typeof__(v202),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v203 = COERCE_AS(__typeof__(v203),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v206 = COERCE_AS(__typeof__(v206),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v207 = COERCE_AS(__typeof__(v207),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v227 = COERCE_AS(__typeof__(v227),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v228 = COERCE_AS(__typeof__(v228),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v231 = COERCE_AS(__typeof__(v231),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v232 = COERCE_AS(__typeof__(v232),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v235 = COERCE_AS(__typeof__(v235),
                                     PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v236 = COERCE_AS(__typeof__(v236),
                                     PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v27 = COERCE_AS(__typeof__(v27),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v28 = COERCE_AS(__typeof__(v28),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v54 = COERCE_AS(__typeof__(v54),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v55 = COERCE_AS(__typeof__(v55),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v58 = COERCE_AS(__typeof__(v58),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v59 = COERCE_AS(__typeof__(v59),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v66 = COERCE_AS(__typeof__(v66),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v67 = COERCE_AS(__typeof__(v67),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v94 = COERCE_AS(__typeof__(v94),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v98 = COERCE_AS(__typeof__(v98),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v99 = COERCE_AS(__typeof__(v99),
                                    PSEUDO_REGISTER(__n128, "v2", "=w"));
                result = v178;
              }
              else {
                v181 = *(_QWORD*)(game_g_frame_clock + 13224);
                v182 = *(_QWORD*)(v181 + 48);
                v183 = *(_QWORD*)(v181 + 56);
                if (v183 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v183 + 8),
                                            1u, memory_order_relaxed);
                  v184 = *(_BYTE**)(*(_QWORD*)(v182 + 8) + 184LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v183 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v185 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v183 + 16LL))(v183),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v183),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    result = v185;
                  }
                }
                else {
                  v184 = *(_BYTE**)(*(_QWORD*)(v182 + 8) + 184LL);
                }
                if (v184[90] == 1) {
                  v184[90] = 0;
                }
                if (v184[192] == 1) {
                  v184[192] = 0;
                }
                if (v184[296] == 1) {
                  v184[296] = 0;
                }
                if (v184[376] == 1) {
                  v184[376] = 0;
                }
                if (v184[456] == 1) {
                  v184[456] = 0;
                }
                if (v184[536] == 1) {
                  v184[536] = 0;
                }
                if (v184[616] == 1) {
                  v184[616] = 0;
                }
                if (v184[696] == 1) {
                  v184[696] = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v209 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v209),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v191 = COERCE_AS(__typeof__(v191),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v194 = COERCE_AS(__typeof__(v194),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v195 = COERCE_AS(__typeof__(v195),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v198 = COERCE_AS(__typeof__(v198),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v199 = COERCE_AS(__typeof__(v199),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v203 = COERCE_AS(__typeof__(v203),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v207 = COERCE_AS(__typeof__(v207),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v228 = COERCE_AS(__typeof__(v228),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v231 = COERCE_AS(__typeof__(v231),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v232 = COERCE_AS(__typeof__(v232),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v235 = COERCE_AS(__typeof__(v235),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v236 = COERCE_AS(__typeof__(v236),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
        }
      }
      break;
    }
  }
  v210 = v5[46];
  v211 = (unsigned __int64)(v5[47] - v210) >> 2;
  while ((int)v211 >= 1) {
    LODWORD(v211) = v211 - 1;
    if (*(float*)(v210 + 4LL * (unsigned int)v211) <= a3) {
      if ((v211 & 0x80000000) != 0) {
        break;
      }
      v212 = (__int64*)(v5[43] + 16 * (v211 & 0x7FFFFFFF));
      result = v212[1];
      if (result == 0) {
        break;
      }
      result = std___1___shared_weak_count_lock_alt1(result),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      if (result == 0) {
        break;
      }
      v215 = *v212;
      if (v215 != 0) {
        if (*(_BYTE*)(v215 + 24) == 1) {
          v216 = *(long double*)(v215 + 32);
          LODWORD(v213) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          v217 = result;
          LODWORD(v214) = *(_DWORD*)(v215 + 8);
          v282_.v282 = v215 + 32;
          v282_.v283 = LODWORD(v214);
          v282_.v284 = a3;
          if ((unsigned int)(int)*(float*)&v216 <= 0xFFFFFFFD) {
            *(float*)&v214 = a3 - *(float*)&v214;
            *(_QWORD*)&v213 = 0;
            if (*(float*)&v214 > 0x0.0p+0f) {
              LODWORD(v213) =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              if (*(float*)&v214 < *((float*)&v216 + 1)) {
                v218 = (int)*(float*)&v216 - 1;
                if (v218 > 2) {
                  v219 = 0;
                }
                else {
                  v219 = GameData_1c0b528_alt1[v218];
                }
                *(float*)&v213 = GameRoutine_618640_alt2(
                    v219, 0x0.0p+0f, 0x1.0000000000000p+0f, *(float*)&v214,
                    *((float*)&v216 + 1)),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v106 = COERCE_AS(__typeof__(v106),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v107 = COERCE_AS(__typeof__(v107),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v111 = COERCE_AS(__typeof__(v111),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v131 = COERCE_AS(__typeof__(v131),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v132 = COERCE_AS(__typeof__(v132),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v135 = COERCE_AS(__typeof__(v135),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v136 = COERCE_AS(__typeof__(v136),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v162 = COERCE_AS(__typeof__(v162),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v163 = COERCE_AS(__typeof__(v163),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v190 = COERCE_AS(__typeof__(v190),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v191 = COERCE_AS(__typeof__(v191),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v194 = COERCE_AS(__typeof__(v194),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v195 = COERCE_AS(__typeof__(v195),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v198 = COERCE_AS(__typeof__(v198),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v199 = COERCE_AS(__typeof__(v199),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v202 = COERCE_AS(__typeof__(v202),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v203 = COERCE_AS(__typeof__(v203),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v206 = COERCE_AS(__typeof__(v206),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v207 = COERCE_AS(__typeof__(v207),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v227 = COERCE_AS(__typeof__(v227),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v228 = COERCE_AS(__typeof__(v228),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v231 = COERCE_AS(__typeof__(v231),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v232 = COERCE_AS(__typeof__(v232),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v235 = COERCE_AS(__typeof__(v235),
                                 PSEUDO_REGISTER(__n128, "v1", "=w")),
                v236 = COERCE_AS(__typeof__(v236),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v28 = COERCE_AS(__typeof__(v28),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v66 = COERCE_AS(__typeof__(v66),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v94 = COERCE_AS(__typeof__(v94),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v98 = COERCE_AS(__typeof__(v98),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(__n128, "v2", "=w"));
              }
            }
          }
          v282_.v285 = *(float*)&v213;
          *(float*)&v225 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v215 + 56), v213, v216, v214),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v226 = LODWORD(v225);
          *(float*)&v229 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v215 + 88), v225, v227, v228),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v230 = LODWORD(v229);
          *(float*)&v233 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v215 + 120), v229, v231, v232),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v234 = LODWORD(v233);
          v237 = PostEffectActor_17fb700(
              (__int64)&v282_.v282, (__int64*)(v215 + 152), v233, v235, v236),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v238 = *(_QWORD*)(game_g_frame_clock + 13224);
          v239 = *(_QWORD*)(v238 + 48);
          v240 = *(_QWORD*)(v238 + 56);
          if (v240 != 0) {
            result = v217;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v240 + 8), 1u,
                                      memory_order_relaxed);
            v241 = *(_QWORD*)(*(_QWORD*)(v239 + 8) + 176LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v240 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v242 = v237;
              (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(v240),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v240),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              v237 = v242;
              goto LABEL_262;
            }
          }
          else {
            v241 = *(_QWORD*)(*(_QWORD*)(v239 + 8) + 176LL);
          LABEL_262:
            result = v217;
          }
          *(_DWORD*)(v241 + 92) = v226;
          *(_DWORD*)(v241 + 172) = v230;
          *(_DWORD*)(v241 + 252) = v234;
          *(float*)(v241 + 332) = v237;
          *(_BYTE*)(v241 + 96) = 1;
          *(_BYTE*)(v241 + 176) = 1;
          *(_BYTE*)(v241 + 256) = 1;
          *(_BYTE*)(v241 + 336) = 1;
        }
        else {
          v220 = *(_QWORD*)(game_g_frame_clock + 13224);
          v221 = *(_QWORD*)(v220 + 48);
          v222 = *(_QWORD*)(v220 + 56);
          if (v222 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v222 + 8), 1u,
                                      memory_order_relaxed);
            v223 = *(_BYTE**)(*(_QWORD*)(v221 + 8) + 176LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v222 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v224 = result;
              (*(void (**)(__int64))(*(_QWORD*)v222 + 16LL))(v222),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v222),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = v224;
            }
          }
          else {
            v223 = *(_BYTE**)(*(_QWORD*)(v221 + 8) + 176LL);
          }
          if (v223[96] == 1) {
            v223[96] = 0;
          }
          if (v223[176] == 1) {
            v223[176] = 0;
          }
          if (v223[256] == 1) {
            v223[256] = 0;
          }
          if (v223[336] == 1) {
            v223[336] = 0;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v243 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
            v102 = COERCE_AS(__typeof__(v102),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v103 = COERCE_AS(__typeof__(v103),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v106 = COERCE_AS(__typeof__(v106),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v107 = COERCE_AS(__typeof__(v107),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v111 = COERCE_AS(__typeof__(v111),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v131 = COERCE_AS(__typeof__(v131),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v132 = COERCE_AS(__typeof__(v132),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v135 = COERCE_AS(__typeof__(v135),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v136 = COERCE_AS(__typeof__(v136),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v162 = COERCE_AS(__typeof__(v162),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v163 = COERCE_AS(__typeof__(v163),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v190 = COERCE_AS(__typeof__(v190),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v191 = COERCE_AS(__typeof__(v191),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v194 = COERCE_AS(__typeof__(v194),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v195 = COERCE_AS(__typeof__(v195),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v198 = COERCE_AS(__typeof__(v198),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v199 = COERCE_AS(__typeof__(v199),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v202 = COERCE_AS(__typeof__(v202),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v203 = COERCE_AS(__typeof__(v203),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v206 = COERCE_AS(__typeof__(v206),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v207 = COERCE_AS(__typeof__(v207),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v228 = COERCE_AS(__typeof__(v228),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v231 = COERCE_AS(__typeof__(v231),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v232 = COERCE_AS(__typeof__(v232),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v235 = COERCE_AS(__typeof__(v235),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v236 = COERCE_AS(__typeof__(v236),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v94 =
                COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v98 =
                COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v243),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v106 = COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v107 = COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v111 = COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v131 = COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v132 = COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v135 = COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v136 = COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v162 = COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v163 = COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v190 = COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v191 = COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v194 = COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v195 = COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v198 = COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v199 = COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v202 = COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v203 = COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v206 = COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v207 = COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v227 = COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v228 = COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v231 = COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v232 = COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v235 = COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v236 = COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
      }
      break;
    }
  }
  v244 = v5[52];
  v245 = (unsigned __int64)(v5[53] - v244) >> 2;
  while ((int)v245 >= 1) {
    LODWORD(v245) = v245 - 1;
    if (*(float*)(v244 + 4LL * (unsigned int)v245) <= a3) {
      if ((v245 & 0x80000000) == 0) {
        v246 = (__int64*)(v5[49] + 16 * (v245 & 0x7FFFFFFF));
        result = v246[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            v247 = *v246;
            if (*v246 != 0) {
              if (*(_BYTE*)(v247 + 24) == 1) {
                v248 = *(_DWORD*)(v247 + 48);
                v249 = *(_QWORD*)(game_g_frame_clock + 13224);
                v250 = *(_QWORD*)(v249 + 48);
                v251 = *(_QWORD*)(v249 + 56);
                if (v251 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v251 + 8),
                                            1u, memory_order_relaxed);
                  v252 = *(_QWORD*)(*(_QWORD*)(v250 + 8) + 256LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v251 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v253 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v251 + 16LL))(v251),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v251),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    result = v253;
                  }
                }
                else {
                  v252 = *(_QWORD*)(*(_QWORD*)(v250 + 8) + 256LL);
                }
                *(_DWORD*)(v252 + 164) = v248;
                *(_WORD*)(v252 + 89) = 257;
                *(_BYTE*)(v252 + 168) = 1;
              }
              else {
                v254 = *(_QWORD*)(game_g_frame_clock + 13224);
                v255 = *(_QWORD*)(v254 + 48);
                v256 = *(_QWORD*)(v254 + 56);
                if (v256 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v256 + 8),
                                            1u, memory_order_relaxed);
                  v257 = *(_QWORD*)(*(_QWORD*)(v255 + 8) + 256LL);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v256 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v258 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v256 + 16LL))(v256),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v256),
                        v102 = COERCE_AS(__typeof__(v102),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v106 = COERCE_AS(__typeof__(v106),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v107 = COERCE_AS(__typeof__(v107),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v110 = COERCE_AS(__typeof__(v110),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v111 = COERCE_AS(__typeof__(v111),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v131 = COERCE_AS(__typeof__(v131),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v132 = COERCE_AS(__typeof__(v132),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v135 = COERCE_AS(__typeof__(v135),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v136 = COERCE_AS(__typeof__(v136),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v162 = COERCE_AS(__typeof__(v162),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v163 = COERCE_AS(__typeof__(v163),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v190 = COERCE_AS(__typeof__(v190),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v191 = COERCE_AS(__typeof__(v191),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v194 = COERCE_AS(__typeof__(v194),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v195 = COERCE_AS(__typeof__(v195),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v198 = COERCE_AS(__typeof__(v198),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v199 = COERCE_AS(__typeof__(v199),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v202 = COERCE_AS(__typeof__(v202),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v203 = COERCE_AS(__typeof__(v203),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v206 = COERCE_AS(__typeof__(v206),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v207 = COERCE_AS(__typeof__(v207),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v227 = COERCE_AS(__typeof__(v227),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v228 = COERCE_AS(__typeof__(v228),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v231 = COERCE_AS(__typeof__(v231),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v232 = COERCE_AS(__typeof__(v232),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v235 = COERCE_AS(__typeof__(v235),
                                         PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v236 = COERCE_AS(__typeof__(v236),
                                         PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v24 = COERCE_AS(__typeof__(v24),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v28 = COERCE_AS(__typeof__(v28),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v54 = COERCE_AS(__typeof__(v54),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v62 = COERCE_AS(__typeof__(v62),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v63 = COERCE_AS(__typeof__(v63),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v66 = COERCE_AS(__typeof__(v66),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v67 = COERCE_AS(__typeof__(v67),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v94 = COERCE_AS(__typeof__(v94),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v98 = COERCE_AS(__typeof__(v98),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(__n128, "v2", "=w"));
                    result = v258;
                  }
                }
                else {
                  v257 = *(_QWORD*)(*(_QWORD*)(v255 + 8) + 256LL);
                }
                if (*(_BYTE*)(v257 + 90) == 1) {
                  *(_BYTE*)(v257 + 90) = 0;
                }
                if (*(_BYTE*)(v257 + 168) == 1) {
                  *(_BYTE*)(v257 + 168) = 0;
                }
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v259 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v259),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v191 = COERCE_AS(__typeof__(v191),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v194 = COERCE_AS(__typeof__(v194),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v195 = COERCE_AS(__typeof__(v195),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v198 = COERCE_AS(__typeof__(v198),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v199 = COERCE_AS(__typeof__(v199),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v203 = COERCE_AS(__typeof__(v203),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v207 = COERCE_AS(__typeof__(v207),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v228 = COERCE_AS(__typeof__(v228),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v231 = COERCE_AS(__typeof__(v231),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v232 = COERCE_AS(__typeof__(v232),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v235 = COERCE_AS(__typeof__(v235),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v236 = COERCE_AS(__typeof__(v236),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
        }
      }
      break;
    }
  }
  v260 = v5[58];
  v261 = (unsigned __int64)(v5[59] - v260) >> 2;
  while ((int)v261 >= 1) {
    LODWORD(v261) = v261 - 1;
    if (*(float*)(v260 + 4LL * (unsigned int)v261) <= a3) {
      if ((v261 & 0x80000000) == 0) {
        v262 = (_QWORD*)(v5[55] + 16 * (v261 & 0x7FFFFFFF));
        result = v262[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            if (*v262 != 0 && (*(_BYTE*)(*v262 + 24LL) & 1) == 0) {
              v263 = *(_QWORD*)(game_g_frame_clock + 13224);
              v264 = *(_QWORD*)(v263 + 48);
              v265 = *(_QWORD*)(v263 + 56);
              if (v265 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v265 + 8),
                                          1u, memory_order_relaxed);
                v266 = *(_QWORD*)(*(_QWORD*)(v264 + 8) + 320LL);
                if (atomic_fetch_add((atomic_ullong* volatile)(v265 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v267 = result;
                  (*(void (**)(__int64))(*(_QWORD*)v265 + 16LL))(v265),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v265),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  result = v267;
                }
              }
              else {
                v266 = *(_QWORD*)(*(_QWORD*)(v264 + 8) + 320LL);
              }
              *(_DWORD*)(v266 + 172) = 0;
              *(_BYTE*)(v266 + 176) = 1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v268 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v268),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v106 = COERCE_AS(__typeof__(v106),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v107 = COERCE_AS(__typeof__(v107),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v111 = COERCE_AS(__typeof__(v111),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v131 = COERCE_AS(__typeof__(v131),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v132 = COERCE_AS(__typeof__(v132),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v135 = COERCE_AS(__typeof__(v135),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v136 = COERCE_AS(__typeof__(v136),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v162 = COERCE_AS(__typeof__(v162),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v163 = COERCE_AS(__typeof__(v163),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v190 = COERCE_AS(__typeof__(v190),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v191 = COERCE_AS(__typeof__(v191),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v194 = COERCE_AS(__typeof__(v194),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v195 = COERCE_AS(__typeof__(v195),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v198 = COERCE_AS(__typeof__(v198),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v199 = COERCE_AS(__typeof__(v199),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v202 = COERCE_AS(__typeof__(v202),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v203 = COERCE_AS(__typeof__(v203),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v206 = COERCE_AS(__typeof__(v206),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v207 = COERCE_AS(__typeof__(v207),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v228 = COERCE_AS(__typeof__(v228),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v231 = COERCE_AS(__typeof__(v231),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v232 = COERCE_AS(__typeof__(v232),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v235 = COERCE_AS(__typeof__(v235),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v236 = COERCE_AS(__typeof__(v236),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v94 = COERCE_AS(__typeof__(v94),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v98 = COERCE_AS(__typeof__(v98),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
            }
          }
        }
      }
      break;
    }
  }
  v269 = v5[64];
  v270 = (unsigned __int64)(v5[65] - v269) >> 2;
  while ((int)v270 >= 1) {
    LODWORD(v270) = v270 - 1;
    if (*(float*)(v269 + 4LL * (unsigned int)v270) <= a3) {
      if ((v270 & 0x80000000) == 0) {
        v271 = (_QWORD*)(v5[61] + 16 * (v270 & 0x7FFFFFFF));
        result = v271[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v103 =
              COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v106 =
              COERCE_AS(__typeof__(v106), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v107 =
              COERCE_AS(__typeof__(v107), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v111 =
              COERCE_AS(__typeof__(v111), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v131 =
              COERCE_AS(__typeof__(v131), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v132 =
              COERCE_AS(__typeof__(v132), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v135 =
              COERCE_AS(__typeof__(v135), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v136 =
              COERCE_AS(__typeof__(v136), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v162 =
              COERCE_AS(__typeof__(v162), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v163 =
              COERCE_AS(__typeof__(v163), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v190 =
              COERCE_AS(__typeof__(v190), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v191 =
              COERCE_AS(__typeof__(v191), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v194 =
              COERCE_AS(__typeof__(v194), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v195 =
              COERCE_AS(__typeof__(v195), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v198 =
              COERCE_AS(__typeof__(v198), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v199 =
              COERCE_AS(__typeof__(v199), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v202 =
              COERCE_AS(__typeof__(v202), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v203 =
              COERCE_AS(__typeof__(v203), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v206 =
              COERCE_AS(__typeof__(v206), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v207 =
              COERCE_AS(__typeof__(v207), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v227 =
              COERCE_AS(__typeof__(v227), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v228 =
              COERCE_AS(__typeof__(v228), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v231 =
              COERCE_AS(__typeof__(v231), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v232 =
              COERCE_AS(__typeof__(v232), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v235 =
              COERCE_AS(__typeof__(v235), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v236 =
              COERCE_AS(__typeof__(v236), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v94 = COERCE_AS(__typeof__(v94), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v98 = COERCE_AS(__typeof__(v98), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(__n128, "v2", "=w"));
          if (result != 0) {
            if (*v271 != 0) {
              v272 = *(unsigned __int8*)(*v271 + 24LL);
              v273 = *(_QWORD*)(game_g_frame_clock + 13224);
              v274 = *(_QWORD*)(v273 + 48);
              v275 = *(_QWORD*)(v273 + 56);
              if (v275 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v275 + 8),
                                          1u, memory_order_relaxed);
                v276 = *(_QWORD*)(*(_QWORD*)(v274 + 8) + 112LL);
                if (atomic_fetch_add((atomic_ullong* volatile)(v275 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v277 = result;
                  (*(void (**)(__int64))(*(_QWORD*)v275 + 16LL))(v275),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v275),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v106 = COERCE_AS(__typeof__(v106),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v107 = COERCE_AS(__typeof__(v107),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v110 = COERCE_AS(__typeof__(v110),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v111 = COERCE_AS(__typeof__(v111),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v131 = COERCE_AS(__typeof__(v131),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v132 = COERCE_AS(__typeof__(v132),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v135 = COERCE_AS(__typeof__(v135),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v136 = COERCE_AS(__typeof__(v136),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v162 = COERCE_AS(__typeof__(v162),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v163 = COERCE_AS(__typeof__(v163),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v190 = COERCE_AS(__typeof__(v190),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v191 = COERCE_AS(__typeof__(v191),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v194 = COERCE_AS(__typeof__(v194),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v195 = COERCE_AS(__typeof__(v195),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v198 = COERCE_AS(__typeof__(v198),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v199 = COERCE_AS(__typeof__(v199),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v202 = COERCE_AS(__typeof__(v202),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v203 = COERCE_AS(__typeof__(v203),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v206 = COERCE_AS(__typeof__(v206),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v207 = COERCE_AS(__typeof__(v207),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v227 = COERCE_AS(__typeof__(v227),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v228 = COERCE_AS(__typeof__(v228),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v231 = COERCE_AS(__typeof__(v231),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v232 = COERCE_AS(__typeof__(v232),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v235 = COERCE_AS(__typeof__(v235),
                                       PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v236 = COERCE_AS(__typeof__(v236),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v28 = COERCE_AS(__typeof__(v28),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v54 = COERCE_AS(__typeof__(v54),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v66 = COERCE_AS(__typeof__(v66),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v67 = COERCE_AS(__typeof__(v67),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v94 = COERCE_AS(__typeof__(v94),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v98 = COERCE_AS(__typeof__(v98),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(__n128, "v2", "=w"));
                  result = v277;
                }
              }
              else {
                v276 = *(_QWORD*)(*(_QWORD*)(v274 + 8) + 112LL);
              }
              if (v272 != 0) {
                *(_WORD*)(v276 + 89) = 256;
              }
              else if (*(_BYTE*)(v276 + 90) == 1) {
                *(_BYTE*)(v276 + 90) = 0;
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v278 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v106 = COERCE_AS(__typeof__(v106),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v107 = COERCE_AS(__typeof__(v107),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v110 = COERCE_AS(__typeof__(v110),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v111 = COERCE_AS(__typeof__(v111),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v131 = COERCE_AS(__typeof__(v131),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v132 = COERCE_AS(__typeof__(v132),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v135 = COERCE_AS(__typeof__(v135),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v136 = COERCE_AS(__typeof__(v136),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v162 = COERCE_AS(__typeof__(v162),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v163 = COERCE_AS(__typeof__(v163),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v190 = COERCE_AS(__typeof__(v190),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v191 = COERCE_AS(__typeof__(v191),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v194 = COERCE_AS(__typeof__(v194),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v195 = COERCE_AS(__typeof__(v195),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v198 = COERCE_AS(__typeof__(v198),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v199 = COERCE_AS(__typeof__(v199),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v202 = COERCE_AS(__typeof__(v202),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v203 = COERCE_AS(__typeof__(v203),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v206 = COERCE_AS(__typeof__(v206),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v207 = COERCE_AS(__typeof__(v207),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v227 = COERCE_AS(__typeof__(v227),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v228 = COERCE_AS(__typeof__(v228),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v23 = COERCE_AS(__typeof__(v23),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v231 = COERCE_AS(__typeof__(v231),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v232 = COERCE_AS(__typeof__(v232),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v235 = COERCE_AS(__typeof__(v235),
                                   PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v236 = COERCE_AS(__typeof__(v236),
                                   PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v28 = COERCE_AS(__typeof__(v28),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v55 = COERCE_AS(__typeof__(v55),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v58 = COERCE_AS(__typeof__(v58),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v59 = COERCE_AS(__typeof__(v59),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v66 = COERCE_AS(__typeof__(v66),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v67 = COERCE_AS(__typeof__(v67),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v94 = COERCE_AS(__typeof__(v94),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v98 = COERCE_AS(__typeof__(v98),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(__n128, "v2", "=w"));
              return std___1___shared_weak_count___release_weak_alt1(v278);
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 PostEffectActor_Unknown5(__int64 result, float a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  long double v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  float v10;
  float v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  int v20;
  float v21;
  float32x2_t** v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float32x2_t* v26;
  __int64 v27;
  float32x2_t* v28;
  unsigned __int64 v29;
  unsigned int v30;
  unsigned int v31;
  char v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    float32x4_t v51;
    __int64 v52;
    __int64 v53;
    float32x4_t v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
  } v51_;
  struct {
    __int64 v63;
    float v64;
    float v65;
    int v66;
  } v63_;
  float32x4_t v67;
  float32x2_t v68[2];

  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v2 = *(_QWORD*)(result + 32);
  v3 = (unsigned __int64)(*(_QWORD*)(result + 40) - v2) >> 2;
  do {
    if ((int)v3 < 1) {
      return result;
    }
    LODWORD(v3) = v3 - 1;
  } while (*(float*)(v2 + 4LL * (unsigned int)v3) > a2);
  if ((v3 & 0x80000000) == 0) {
    v4 = (__int64*)(*(_QWORD*)(result + 8) + 24 * (v3 & 0x7FFFFFFF));
    result = v4[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (result != 0) {
        v7 = *v4;
        if (*v4 == 0) {
        LABEL_55:
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v50 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            return std___1___shared_weak_count___release_weak_alt1(v50);
          }
          return result;
        }
        if (*(_BYTE*)(v7 + 24) != 1) {
          v14 = *(_QWORD*)(game_g_frame_clock + 13224);
          v15 = *(_QWORD*)(v14 + 48);
          v16 = *(_QWORD*)(v14 + 56);
          if (v16 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                      memory_order_relaxed);
            v17 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v18 = result;
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v16),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              result = v18;
            }
          }
          else {
            v17 = *(_QWORD*)(*(_QWORD*)(v15 + 8) + 128LL);
          }
          *(_DWORD*)(v17 + 92) = 0;
          *(_BYTE*)(v17 + 96) = 1;
          if (*(_BYTE*)(v17 + 176) == 1) {
            *(_BYTE*)(v17 + 176) = 0;
          }
          if (*(_BYTE*)(v17 + 256) == 1) {
            *(_BYTE*)(v17 + 256) = 0;
          }
          if (*(_BYTE*)(v17 + 330) == 1) {
            *(_BYTE*)(v17 + 330) = 0;
          }
          goto LABEL_55;
        }
        v8 = *(_OWORD*)(v7 + 32);
        LODWORD(v6) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        v9 = result;
        v10 = *(float*)(v7 + 8);
        v63_.v63 = v7 + 32;
        v63_.v64 = v10;
        v63_.v65 = a2;
        if ((unsigned int)(int)*(float*)&v8 <= 0xFFFFFFFD) {
          v11 = a2 - v10;
          *(_QWORD*)&v6 = 0;
          if (v11 > 0x0.0p+0f) {
            LODWORD(v6) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
            if (v11 < *((float*)&v8 + 1)) {
              v12 = (int)*(float*)&v8 - 1;
              if (v12 > 2) {
                v13 = 0;
              }
              else {
                v13 = GameData_1c0b528_alt1[v12];
              }
              *(float*)&v6 =
                  GameRoutine_618640_alt2(v13, 0x0.0p+0f, 0x1.0000000000000p+0f,
                                          v11, *((float*)&v8 + 1)),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
            }
          }
        }
        v63_.v66 = LODWORD(v6);
        *(float*)&v19 = PostEffectActor_17fb700_alt2((__int64)&v63_.v63,
                                                     (__int64*)(v7 + 56), v6),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v20 = LODWORD(v19);
        v21 = PostEffectActor_17fb700_alt2((__int64)&v63_.v63,
                                           (__int64*)(v7 + 88), v19),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v22 = (float32x2_t**)v4[2];
        v23 = v21;
        if (v22 == nullptr) {
          result = v9;
        LABEL_50:
          v45 = *(_QWORD*)(game_g_frame_clock + 13224);
          v46 = *(_QWORD*)(v45 + 48);
          v47 = *(_QWORD*)(v45 + 56);
          if (v47 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                      memory_order_relaxed);
            v48 = *(_QWORD*)(*(_QWORD*)(v46 + 8) + 128LL);
            if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v49 = result;
              (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v47),
                  v39 = COERCE_AS(__typeof__(v39),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v41 = COERCE_AS(__typeof__(v41),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v3", "=w"));
              result = v49;
            }
          }
          else {
            v48 = *(_QWORD*)(*(_QWORD*)(v46 + 8) + 128LL);
          }
          *(_DWORD*)(v48 + 172) = v20;
          *(float*)(v48 + 252) = v23;
          *(_DWORD*)(v48 + 92) = 1;
          *(_BYTE*)(v48 + 96) = 1;
          *(_WORD*)(v48 + 329) = 257;
          *(_BYTE*)(v48 + 176) = 1;
          *(_BYTE*)(v48 + 256) = 1;
          goto LABEL_55;
        }
        v24 = (__int64)v22[1];
        if (v24 != 0 &&
            (v25 = std___1___shared_weak_count_lock_alt1(v24)) != 0) {
          v26 = *v22;
          v27 = v25;
          if (*v22 != nullptr && (v28 = v22[2]) != nullptr) {
            v29 = LANES64(v26[13]).n64_u64[0];
            v30 = LANES64(v26[6]).n64_u32[0];
            v31 = LANES64(v26[11]).n64_u32[0];
            v32 = LANES64(v26[16]).n64_i8[0];
            v68[0] = v26[12];
            LANES64(v68[1]).n64_u64[0] = v29;
            v33 = LANES64(v26[15]).n64_u64[0];
            LANES128(v67).n128_u64[0] = LANES64(v26[14]).n64_u64[0];
            LANES128(v67).n128_u64[1] = v33;
            GameRoutine_17fd670((void*)(&v51_.v51), v28, v30, v31, v68, &v67,
                                v32),
                v39 = COERCE_AS(__typeof__(v39),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v41 = COERCE_AS(__typeof__(v41),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v42 = COERCE_AS(__typeof__(v42),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          else {
            v51_.v61 = 0;
            v51_.v62 = 0;
            v51_.v59 = 0;
            v51_.v60 = 0;
            v51_.v57 = 0;
            v51_.v58 = 0;
            v51_.v55 = 0;
            v51_.v56 = 0;
            v51_.v54 = (__typeof__(v51_.v54)){0};
            v51_.v52 = 0;
            v51_.v53 = 0;
            v51_.v51 = (__typeof__(v51_.v51)){0};
          }
          result = v9;
          if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
          LABEL_37:
            if ((unsigned __int8)v51_.v55 == 1) {
              v34 = *(_QWORD*)(GameData_21c6978 + 32);
              if (*(_QWORD*)(GameData_21c6978 + 24) != v34) {
                v35 = *(_QWORD*)(v34 - 8);
                if (v35 != 0) {
                  v36 = *(_QWORD**)(v35 + 24);
                  v37 = *(_QWORD*)(v35 + 32);
                  if (v37 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v37 + 8), 1u,
                        memory_order_relaxed);
                  }
                  if (v36 != nullptr) {
                    v38 = result;
                    (*(__attribute__((swiftcall)) void (**)(
                        PSEUDO_X8, _QWORD*))(*v36 + 16LL))((void*)(v36), v36),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    if ((v51_.v55 & 1) == 0) {
                      GameRoutine_8123d0_alt1(),
                          v39 = COERCE_AS(__typeof__(v39),
                                          PSEUDO_REGISTER(__n128, "v0", "=w")),
                          v40 = COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                          v41 = COERCE_AS(__typeof__(v41),
                                          PSEUDO_REGISTER(__n128, "v2", "=w")),
                          v42 = COERCE_AS(__typeof__(v42),
                                          PSEUDO_REGISTER(__n128, "v3", "=w"));
                    }
                    v43 = PostEffectActor_17fb700_alt2(
                              (__int64)&v63_.v63, (__int64*)(v7 + 120),
                              COERCE_LONG_DOUBLE(vaddq_f32(
                                  v42,
                                  vmlaq_laneq_f32(
                                      vmlaq_lane_f32(
                                          vmulq_n_f32(v39, LANES128(v51_.v54)
                                                               .n128_f32[0]),
                                          v40,
                                          COERCE_AS(
                                              float32x2_t,
                                              LANES128(v51_.v54).n128_u64[0]),
                                          1),
                                      v41, v51_.v54, 2)))) -
                          LANES128(v39).n128_f32[2],
                    v39 = COERCE_AS(__typeof__(v39),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v40 = COERCE_AS(__typeof__(v40),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v41 = COERCE_AS(__typeof__(v41),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v42 = COERCE_AS(__typeof__(v42),
                                    PSEUDO_REGISTER(__n128, "v3", "=w"));
                    result = v38;
                    if (v43 >= 0x0.0p+0f) {
                      v23 = v43;
                    }
                    else {
                      v23 = 0x0.0p+0f;
                    }
                  }
                  if (v37 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v44 = result;
                    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    std___1___shared_weak_count___release_weak_alt1(v37),
                        v39 = COERCE_AS(__typeof__(v39),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v41 = COERCE_AS(__typeof__(v41),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v42 = COERCE_AS(__typeof__(v42),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
                    result = v44;
                  }
                }
              }
            }
            goto LABEL_50;
          }
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v27),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        else {
          v51_.v61 = 0;
          v51_.v62 = 0;
          v51_.v59 = 0;
          v51_.v60 = 0;
          v51_.v57 = 0;
          v51_.v58 = 0;
          v51_.v55 = 0;
          v51_.v56 = 0;
          v51_.v54 = (__typeof__(v51_.v54)){0};
          v51_.v52 = 0;
          v51_.v53 = 0;
          v51_.v51 = (__typeof__(v51_.v51)){0};
        }
        result = v9;
        goto LABEL_37;
      }
    }
  }
  return result;
}

void PostEffectActor_Unknown9(__int64 a1, __int64 a2)
{
  if ((*(_BYTE*)(a2 + 6) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                               32LL) -
                                    8LL) +
                         40LL) +
              226LL) = 1;
  }
}

void PostEffectActor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;

  v1 = a1[64];
  *a1 = game_cutscene_PostEffectActor_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[65] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[61];
  if (v6 != 0) {
    v7 = a1[62];
    if (v6 == v7) {
      goto LABEL_12;
    }
    do {
      v8 = *(_QWORD*)(v7 - 8);
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
      v7 -= 16;
    } while (v7 != v6);
    v9 = a1[61];
    a1[62] = v6;
    v6 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v6);
    }
  }
  v11 = a1[58];
  if (v11 != 0) {
    v12 = *(_QWORD*)v3;
    a1[59] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v12 + v13, v11);
  }
  v14 = a1[55];
  if (v14 != 0) {
    v15 = a1[56];
    if (v14 == v15) {
      goto LABEL_26;
    }
    do {
      v16 = *(_QWORD*)(v15 - 8);
      if (v16 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v16);
      }
      v15 -= 16;
    } while (v15 != v14);
    v17 = a1[55];
    a1[56] = v14;
    v14 = v17;
    if (v17 != 0) {
    LABEL_26:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, v14);
    }
  }
  v19 = a1[52];
  if (v19 != 0) {
    v20 = *(_QWORD*)v3;
    a1[53] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v20 + v21, v19);
  }
  v22 = a1[49];
  if (v22 != 0) {
    v23 = a1[50];
    if (v22 == v23) {
      goto LABEL_40;
    }
    do {
      v24 = *(_QWORD*)(v23 - 8);
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v24);
      }
      v23 -= 16;
    } while (v23 != v22);
    v25 = a1[49];
    a1[50] = v22;
    v22 = v25;
    if (v25 != 0) {
    LABEL_40:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v26, v22);
    }
  }
  v27 = a1[46];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    a1[47] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v28 + v29, v27);
  }
  v30 = a1[43];
  if (v30 != 0) {
    v31 = a1[44];
    if (v30 == v31) {
      goto LABEL_54;
    }
    do {
      v32 = *(_QWORD*)(v31 - 8);
      if (v32 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v32);
      }
      v31 -= 16;
    } while (v31 != v30);
    v33 = a1[43];
    a1[44] = v30;
    v30 = v33;
    if (v33 != 0) {
    LABEL_54:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v34, v30);
    }
  }
  v35 = a1[40];
  if (v35 != 0) {
    v36 = *(_QWORD*)v3;
    a1[41] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v36 + v37, v35);
  }
  v38 = a1[37];
  if (v38 != 0) {
    v39 = a1[38];
    if (v38 == v39) {
      goto LABEL_68;
    }
    do {
      v40 = *(_QWORD*)(v39 - 8);
      if (v40 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v40);
      }
      v39 -= 16;
    } while (v39 != v38);
    v41 = a1[37];
    a1[38] = v38;
    v38 = v41;
    if (v41 != 0) {
    LABEL_68:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v42, v38);
    }
  }
  v43 = a1[34];
  if (v43 != 0) {
    v44 = *(_QWORD*)v3;
    a1[35] = v43;
    v45 = 128;
    if (*(_QWORD*)(v44 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v44 + v45, v43);
  }
  v46 = a1[31];
  if (v46 != 0) {
    v47 = a1[32];
    if (v46 == v47) {
      goto LABEL_82;
    }
    do {
      v48 = *(_QWORD*)(v47 - 8);
      if (v48 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v48);
      }
      v47 -= 16;
    } while (v47 != v46);
    v49 = a1[31];
    a1[32] = v46;
    v46 = v49;
    if (v49 != 0) {
    LABEL_82:
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v50, v46);
    }
  }
  v51 = a1[28];
  if (v51 != 0) {
    v52 = *(_QWORD*)v3;
    a1[29] = v51;
    v53 = 128;
    if (*(_QWORD*)(v52 + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v52 + v53, v51);
  }
  v54 = a1[25];
  if (v54 != 0) {
    v55 = a1[26];
    if (v54 == v55) {
      goto LABEL_96;
    }
    do {
      v56 = *(_QWORD*)(v55 - 8);
      if (v56 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v56);
      }
      v55 -= 16;
    } while (v55 != v54);
    v57 = a1[25];
    a1[26] = v54;
    v54 = v57;
    if (v57 != 0) {
    LABEL_96:
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v58, v54);
    }
  }
  v59 = a1[22];
  if (v59 != 0) {
    v60 = *(_QWORD*)v3;
    a1[23] = v59;
    v61 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v60 + v61, v59);
  }
  v62 = a1[19];
  if (v62 != 0) {
    v63 = a1[20];
    if (v62 == v63) {
      goto LABEL_110;
    }
    do {
      v64 = *(_QWORD*)(v63 - 8);
      if (v64 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v64);
      }
      v63 -= 16;
    } while (v63 != v62);
    v65 = a1[19];
    a1[20] = v62;
    v62 = v65;
    if (v65 != 0) {
    LABEL_110:
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v66, v62);
    }
  }
  v67 = a1[16];
  if (v67 != 0) {
    v68 = *(_QWORD*)v3;
    a1[17] = v67;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v68 + v69, v67);
  }
  v70 = a1[13];
  if (v70 != 0) {
    v71 = a1[14];
    if (v70 == v71) {
      goto LABEL_124;
    }
    do {
      v72 = *(_QWORD*)(v71 - 8);
      if (v72 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v72);
      }
      v71 -= 16;
    } while (v71 != v70);
    v73 = a1[13];
    a1[14] = v70;
    v70 = v73;
    if (v73 != 0) {
    LABEL_124:
      v74 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v74 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v74, v70);
    }
  }
  v75 = a1[10];
  if (v75 != 0) {
    v76 = *(_QWORD*)v3;
    a1[11] = v75;
    v77 = 128;
    if (*(_QWORD*)(v76 + 200) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v76 + v77, v75);
  }
  v78 = a1[7];
  if (v78 != 0) {
    v79 = a1[8];
    if (v78 == v79) {
      goto LABEL_138;
    }
    do {
      v80 = *(_QWORD*)(v79 - 8);
      if (v80 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v80);
      }
      v79 -= 16;
    } while (v79 != v78);
    v81 = a1[7];
    a1[8] = v78;
    v78 = v81;
    if (v81 != 0) {
    LABEL_138:
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v82, v78);
    }
  }
  v83 = a1[4];
  if (v83 != 0) {
    v84 = *(_QWORD*)v3;
    a1[5] = v83;
    v85 = 128;
    if (*(_QWORD*)(v84 + 200) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v84 + v85, v83);
  }
  v86 = a1[1];
  if (v86 != 0) {
    v87 = a1[2];
    if (v86 == v87) {
      goto LABEL_152;
    }
    do {
      v88 = *(_QWORD*)(v87 - 16);
      if (v88 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v88);
      }
      v87 -= 24;
    } while (v87 != v86);
    v89 = a1[1];
    a1[2] = v86;
    v86 = v89;
    if (v89 != 0) {
    LABEL_152:
      v90 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v90 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v90, v86);
    }
  }
}

#pragma GCC visibility pop
