#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda2_Invoke(__int64 a1,
                                                         __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1fd1140[])();
extern __int64 (*GameData_1fd11c0[])();
extern __int64 (*GameData_1fd1240[])();
extern __int64* game_g_frame_clock_ptr[3];
float cosf(float);
float exp2f(float);
float sinf(float);
long double GameRoutine_652ba0(_QWORD, float, float);
__int64 (***gfxa_TaskCharaSceneBuffers_Impl_Impl(__int64* a1, __int64 a2))();
__int64 TaskCharaSceneBuffers_bfcea0(__int64 result, _QWORD* a2, int8x16_t* a3);

__int64 (***gfxa_TaskCharaSceneBuffers_Impl_Impl(__int64* a1, __int64 a2))()
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 (***result)();
  __int64 v8;
  struct {
    __int64 (**v9)();
    int v10;
    char gap12_[20];
    __int64 (***v11)();
  } v9_;
  struct {
    __int64 v12;
    int v13;
  } v12_;
  struct {
    __int64 v14;
    int v15;
  } v14_;
  struct {
    __int64 v16;
    int v17;
  } v16_;
  struct {
    _QWORD v18[2];
    __int64 v19;
    __int64 v20;
  } v18_;

  *a1 = a2;
  a1[1] = 0;
  a1[3] = 0;
  a1[5] = 0;
  a1[7] = 0;
  *((_DWORD*)a1 + 4) = -1;
  *((_DWORD*)a1 + 8) = -1;
  *((_DWORD*)a1 + 12) = -1;
  *((_DWORD*)a1 + 16) = -1;
  GameRoutine_604020(a1 + 9);
  a1[24] = -1;
  GameRoutine_604020(a1 + 25);
  a1[40] = -1;
  GameRoutine_604020(a1 + 41);
  v3 = *a1;
  a1[56] = -1;
  a1[57] = 0;
  GameRoutine_b34420((void*)((__int64)&v16_.v16), *(_QWORD**)(v3 + 13424),
                     (__int64)"Graphics/Textures/character_default", 0x23u,
                     (__int64)"CMN_Character_Noise", 0x13u, 0);
  a1[1] = v16_.v16;
  *((_DWORD*)a1 + 4) = v16_.v17;
  GameRoutine_b34420((void*)((__int64)&v14_.v14), *(_QWORD**)(*a1 + 13424),
                     (__int64)"Graphics/Textures/character_default", 0x23u,
                     (__int64)"CMN_Character_Dissolve_Noise", 0x1Cu, 0);
  a1[3] = v14_.v14;
  *((_DWORD*)a1 + 8) = v14_.v15;
  GameRoutine_b34420((void*)((__int64)&v12_.v12), *(_QWORD**)(*a1 + 13424),
                     (__int64)"Graphics/Textures/character_default", 0x23u,
                     (__int64)"CMN_Charactor_SelfShadowColor", 0x1Du, 0);
  a1[5] = v12_.v12;
  *((_DWORD*)a1 + 12) = v12_.v13;
  GameRoutine_b34420((void*)((__int64)&v9_.v9), *(_QWORD**)(*a1 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_BC", 0xEu, 0);
  v9_.v11 = &v9_.v9;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18[0] = 0;
  v18_.v18[1] = 0;
  a1[7] = (__int64)v9_.v9;
  *((_DWORD*)a1 + 16) = v9_.v10;
  v9_.v9 = GameData_1fd1140;
  GameRoutine_5fc230((__int64)v18_.v18);
  if (v9_.v11 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v9_.v11)[6])(v9_.v11, v18_.v18);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 9),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v18_.v18);
  a1[24] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), (__int64)(a1 + 9));
  if (v9_.v11 == &v9_.v9) {
    v5 = 4;
  }
  else {
    if (v9_.v11 == nullptr) {
      goto LABEL_8;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v9_.v11)[v5])((__int64)v9_.v11);
LABEL_8:
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18[0] = 0;
  v18_.v18[1] = 0;
  v9_.v9 = GameData_1fd11c0;
  v9_.v11 = &v9_.v9;
  GameRoutine_5fc230((__int64)v18_.v18);
  if (v9_.v11 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v9_.v11)[6])(v9_.v11, v18_.v18);
  }
  GameRoutine_604060((__int64)(a1 + 25), (__int64*)(*v4 + 568),
                     (__int64)v18_.v18);
  a1[40] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), (__int64)(a1 + 25));
  if (v9_.v11 == &v9_.v9) {
    v6 = 4;
  }
  else {
    if (v9_.v11 == nullptr) {
      goto LABEL_15;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v9_.v11)[v6])((__int64)v9_.v11);
LABEL_15:
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18[0] = 0;
  v18_.v18[1] = 0;
  v9_.v9 = GameData_1fd1240;
  v9_.v11 = &v9_.v9;
  GameRoutine_5fc230((__int64)v18_.v18);
  if (v9_.v11 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v9_.v11)[6])(v9_.v11, v18_.v18);
  }
  GameRoutine_604060((__int64)(a1 + 41), (__int64*)(*v4 + 568),
                     (__int64)v18_.v18);
  a1[56] = GameRoutine_615760(*(_QWORD*)(*v4 + 552), (__int64)(a1 + 41));
  result = v9_.v11;
  if (v9_.v11 == &v9_.v9) {
    v8 = 4;
  }
  else {
    if (v9_.v11 == nullptr) {
      return result;
    }
    v8 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v9_.v11)[v8])(
      (__int64)v9_.v11);
}

__int64 TaskCharaSceneBuffers_bfcea0(__int64 result, _QWORD* a2, int8x16_t* a3)
{
  __int64 v3;
  unsigned int* v4;
  __int64 v7;
  _UNKNOWN** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 i;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  unsigned __int64 v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  _BYTE* v34;
  int32x4_t* v35;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int8x16_t v43;
  __int64 v44;
  float v45;
  __int64 v46;
  float32x4_t v47;
  unsigned __int64 v48;
  float32x4_t v49;
  unsigned __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  bool v66;
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
  float32x4_t v82;
  float32x4_t v83;
  float v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  int8x16_t v88;
  float v89;
  float v90;
  float v91;
  bool v92;
  float v93;
  float v94;
  float32x4_t v95;
  float v96;
  int8x16_t v97;
  int8x16_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  int8x16_t v105;
  unsigned __int64 v106;
  int8x16_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  int8x16_t v112;
  int8x16_t v113;
  float32x4_t v114;
  float32x4_t v115;
  int8x16_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float v123;
  float v124;
  __int64 v125;
  float v126;
  __int64 v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  int32x4_t* v133;
  unsigned __int32 v134;
  float v135;
  __int64 v136;
  int32x4_t v137;
  int32x4_t* v138;
  unsigned __int32 v139;
  __int64 v140;
  int v141;
  long double v142;
  int8x16_t v143;
  int8x16_t v144;
  int8x16_t v145;
  unsigned __int32 v146;
  __int64 v147;
  float v148;
  __int64 v149;
  float v150;
  __int64 v151;
  float v152;
  unsigned __int32 v153;
  float v154;
  float v155;
  float32x4_t v156;
  __int64 v157;
  float32x4_t v158;
  __int64 v159;
  __int64 v160;
  int32x4_t v161;
  __int64 v162;
  int32x4_t v163;
  __int64 v164;
  float v165;
  __int64 v166;
  unsigned __int32 v167;
  __int64 v168;
  unsigned __int32 v169;
  __int64 v170;
  unsigned __int32 v171;
  __int64 v172;
  float v173;
  __int64 v174;
  int32x4_t v175;
  __int64 v176;
  unsigned int v177;
  int8x16_t v178;
  int8x16_t v179;
  int8x16_t v180;
  unsigned __int32 v181;
  float v182;
  int8x16_t v183;
  int8x16_t v184;
  int8x16_t v185;
  unsigned __int32 v186;
  float32x4_t v187;
  float v188;
  char* v189;
  float v190;
  float v191;
  char v192;
  __int64 v193;
  unsigned __int32 v194;
  char* v195;
  float* v196;
  float* v197;
  char v198;
  __int64 v199;
  float v200;
  float32x4_t v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int32 v205;
  __int64 v206;
  unsigned __int32 v207;
  __int64 v208;
  unsigned __int32 v209;
  __int64 v210;
  unsigned __int32 v211;
  int8x16_t* v212;
  int8x16_t v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  float32x4_t v218;
  __int64 v219;
  float v220;
  __int64 v221;
  float v222;
  int v223;
  __int64 v224;
  float v225;
  __int64 v226;
  int v227;
  __int64 v228;
  __int64 v229;
  float v230;
  float32x4_t v231;
  int8x16_t v232;
  float32x4_t v233;
  float32x4_t v234;
  float v235;
  char* v236;
  char v237;
  bool v238;
  __int64 v239;
  float v240;
  float32x4_t v241;
  float32x4_t v242;
  __int64 v243;
  long double v244;

  v3 = *(_QWORD*)(result + 456);
  if (v3 == 0) {
    return result;
  }
  v4 = (unsigned int*)result;
  v243 = *(_QWORD*)(v3 + 8LL * *(int*)(v3 + 16));
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v243 + 56LL))(v243);
  v8 = GameData_212e4d8[0];
  *(_QWORD*)v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, LANES128(*(a3)).n128_u32[2],
      v4[48]);
  *(_QWORD*)(v7 + 8) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, LANES128(a3[1]).n128_u32[2],
      v4[48]);
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
  *(_QWORD*)(v7 + 16) =
      ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10);
  *(_QWORD*)(v7 + 24) =
      ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  v11 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
  *(_QWORD*)(v7 + 32) =
      ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
  *(_QWORD*)(v7 + 40) =
      ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  v13 = a2[23];
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    (*(void (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
    *(_QWORD*)(v7 + 48) =
        ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  }
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[24] + 16LL))(a2[24]);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
  *(_QWORD*)(v7 + 56) =
      ((__int64 (*)(__int64))*v8)(*(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL);
  *(_QWORD*)(v7 + 64) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[4], v4[48]);
  *(_QWORD*)(v7 + 72) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[8], v4[80]);
  *(_QWORD*)(v7 + 80) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, LANES128(a3[2]).n128_u32[2],
      v4[48]);
  *(_QWORD*)(v7 + 88) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[12], v4[48]);
  if ((*(_BYTE*)(LANES128(a3[6]).n128_u64[0] + 92) & 1) != 0) {
    v16 = a2 + 7;
    for (i = 0; i != 16; ++i) {
      if ((*(__int64 (**)(_QWORD))(*(_QWORD*)v16[i] + 16LL))(v16[i]) != 0) {
        v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v16[i] + 16LL))(v16[i]);
        (*(void (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
      }
      else {
        v18 = *((_QWORD*)v4 + 8);
      }
      *(_QWORD*)(v7 + 104 + i * 8) =
          ((__int64 (*)(__int64, __int64, _QWORD))*v8)(
              *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v18, v4[112]);
    }
  }
  else {
    *(_QWORD*)(v7 + 104) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 112) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 120) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 128) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 136) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 144) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 152) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 160) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 168) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 176) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 184) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 192) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 200) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 208) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 216) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
    *(_QWORD*)(v7 + 224) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
        *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
  }
  v20 = v4 + 16;
  *(_QWORD*)(v7 + 232) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, v4[16], v4[112]);
  v21 = LANES128(a3[3]).n128_u64[0];
  v22 = *(_DWORD*)(v21 + 16);
  v23 = *(_QWORD*)(v21 + 8);
  *(_DWORD*)(v7 + 252) = 0;
  *(_QWORD*)(v7 + 240) = v23;
  *(_DWORD*)(v7 + 248) = v22;
  v24 = LANES128(a3[3]).n128_u64[0];
  v25 = *(_DWORD*)(v24 + 28);
  v26 = *(_DWORD*)(v24 + 56);
  *(_QWORD*)(v7 + 256) = *(_QWORD*)(v24 + 20);
  *(_DWORD*)(v7 + 264) = v25;
  *(_DWORD*)(v7 + 268) = v26;
  v27 = LANES128(a3[3]).n128_u64[0];
  v28 = *(_DWORD*)(v27 + 40);
  v29 = *(_DWORD*)(v27 + 60);
  *(_QWORD*)(v7 + 272) = *(_QWORD*)(v27 + 32);
  *(_DWORD*)(v7 + 280) = v28;
  *(_DWORD*)(v7 + 284) = v29;
  v30 = LANES128(a3[3]).n128_u64[0];
  v31 = *(_DWORD*)(v30 + 52);
  v32 = *(_DWORD*)(v30 + 64);
  v33 = *(_QWORD*)(v30 + 44);
  *(_DWORD*)(v7 + 304) = 1077936128;
  *(_QWORD*)(v7 + 288) = v33;
  *(_DWORD*)(v7 + 296) = v31;
  *(_DWORD*)(v7 + 300) = v32;
  *(_DWORD*)(v7 + 308) = *(_DWORD*)(LANES128(a3[3]).n128_u64[0] + 4);
  v34 = (_BYTE*)LANES128(a3[6]).n128_u64[1];
  v35 = (int32x4_t*)LANES128(a3[7]).n128_u64[0];
  v36 = (_BYTE*)LANES128(a3[9]).n128_u64[1];
  v37 = 330;
  if (LANES128(v35[80]).n128_u8[8] != 0) {
    v37 = 321;
  }
  *(_DWORD*)(v7 + 312) = LANES128(*(v35)).n128_u32[v37];
  v38 = 350;
  if (LANES128(v35[85]).n128_u8[8] != 0) {
    v38 = 341;
  }
  *(_DWORD*)(v7 + 324) = LANES128(*(v35)).n128_u32[v38];
  v39 = 370;
  if (LANES128(v35[90]).n128_u8[8] != 0) {
    v39 = 361;
  }
  *(_DWORD*)(v7 + 332) = LANES128(*(v35)).n128_u32[v39];
  v40 = 390;
  if (LANES128(v35[95]).n128_u8[8] != 0) {
    v40 = 381;
  }
  *(_DWORD*)(v7 + 328) = LANES128(*(v35)).n128_u32[v40];
  v41 = 52;
  if (LANES128(v35[11]).n128_u8[0] != 0) {
    v41 = 43;
  }
  *(_DWORD*)(v7 + 320) = LANES128(*(v35)).n128_u32[v41];
  v42 = 32;
  if (LANES128(v35[6]).n128_u8[0] != 0) {
    v42 = 23;
  }
  if (LANES128(*(v35)).n128_u32[v42] == 1) {
    v43 = a3[4];
    v44 = 124;
    if (LANES128(v35[29]).n128_u8[0] != 0) {
      v44 = 115;
    }
    v45 = LANES128(*(v35)).n128_f32[v44] * 0x1.1df46a0000000p-6;
    v46 = 144;
    if (LANES128(v35[34]).n128_u8[0] != 0) {
      v46 = 135;
    }
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v48 = LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    LANES128(v53).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v50 = LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v51).n128_u64[0] = LANES128(v47).n128_u64[0];
    LANES128(v52).n128_u64[0] = LANES128(v53).n128_u64[0];
    *(int8x8_t*)&LANES128(v49).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v53).n128_u64[0];
    LANES128(v53).n128_u64[1] = LANES128(v47).n128_u64[0];
    LANES128(v47).n128_u64[1] = v48;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v52).n128_u64[1] = v50;
    *(int8x8_t*)&LANES128(v54).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
    v56 = vmlsq_f32(vmulq_f32(v47, v49), v54, v52);
    v57 = vmulq_f32(v56, v56);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
            .n64_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v57).n128_u64[0];
    v58 = vrsqrteq_f32(v57);
    v59 = vmulq_f32(v58, vrsqrtsq_f32(v58, vmulq_f32(v57, v58)));
    v60 = vbicq_s8(
        vmulq_f32(v56, vmulq_f32(v59, vrsqrtsq_f32(v59, vmulq_f32(v57, v59)))),
        vceqzq_f32(v57));
    v61 = (float)(v45 * 0.5) +
          (float)(roundf((float)(v45 * 0.5) * 0x1.45f3060000000p-3) *
                  -0x1.921fb60000000p+2);
    v62 = -0x1.921fb60000000p+1 - v61;
    v63 = -0x1.0000000000000p+0;
    if (v61 < -0x1.921fb60000000p+0) {
      v64 = -0x1.0000000000000p+0;
    }
    else {
      v64 = 0x1.0000000000000p+0;
    }
    if (v61 >= -0x1.921fb60000000p+0) {
      v62 = v61;
    }
    v65 = 0x1.921fb60000000p+1 - v61;
    v66 = v61 <= 0x1.921fb60000000p+0;
    if (v61 > 0x1.921fb60000000p+0) {
      v67 = -0x1.0000000000000p+0;
    }
    else {
      v67 = v64;
    }
    if (v66) {
      v68 = v62;
    }
    else {
      v68 = v65;
    }
    v69 = *((float*)GameData_212c190 + 1);
    v71 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v70 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v72 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    v73 = v68 * v68;
    v74 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v75 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v76 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v77 =
        -(float)(v71 - (float)((float)(v69 - (float)(*(float*)GameData_212c190 *
                                                     (float)(v68 * v68))) *
                               (float)(v68 * v68)));
    v78 = -v71;
    v79 = -(float)(v72 -
                   (float)((float)(v70 + (float)(v77 * (float)(v68 * v68))) *
                           (float)(v68 * v68)));
    v80 = -v72;
    v81 = *((float*)GameData_212c188 + 1);
    v82 = vmulq_n_f32(v60, v68 * (float)((float)(v79 * (float)(v68 * v68)) +
                                         0x1.0000000000000p+0));
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                             COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
            .n64_u64[0];
    LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
    v84 =
        v67 *
        (float)((float)((float)-(
                            float)(v76 -
                                   (float)((float)(v75 +
                                                   (float)((float)-(
                                                               float)(v74 -
                                                                      (float)((float)(v81 -
                                                                                      (float)(*(float*)
                                                                                                  GameData_212c188 *
                                                                                              v73)) *
                                                                              v73)) *
                                                           v73)) *
                                           v73)) *
                        v73) +
                0x1.0000000000000p+0);
    v85 = v82;
    LANES128(v85).n128_f32[3] = v84;
    v86 = vrsqrteq_f32(v83);
    v87 = vmulq_f32(v86, vrsqrtsq_f32(v86, vmulq_f32(v83, v86)));
    v88 = vbicq_s8(
        vmulq_f32(vmulq_f32(v87, vrsqrtsq_f32(v87, vmulq_f32(v83, v87))),
                  COERCE_AS(float32x4_t, GameData_1a83610)),
        vceqzq_f32(v83));
    v89 =
        (float)((float)(LANES128(*(v35)).n128_f32[v46] * 0x1.1df46a0000000p-6) *
                0.5) +
        (float)(roundf((float)((float)(LANES128(*(v35)).n128_f32[v46] *
                                       0x1.1df46a0000000p-6) *
                               0.5) *
                       0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
    if (v89 < -0x1.921fb60000000p+0) {
      v90 = -0x1.0000000000000p+0;
    }
    else {
      v90 = 0x1.0000000000000p+0;
    }
    v91 = -0x1.921fb60000000p+1 - v89;
    if (v89 >= -0x1.921fb60000000p+0) {
      v91 = v89;
    }
    v92 = v89 <= 0x1.921fb60000000p+0;
    if (v89 <= 0x1.921fb60000000p+0) {
      v63 = v90;
    }
    v93 = 0x1.921fb60000000p+1 - v89;
    if (v92) {
      v93 = v91;
    }
    v94 = v93 * v93;
    v95 = vmulq_n_f32(
        v88,
        v93 *
            (float)((float)((float)(v80 +
                                    (float)((float)(v70 +
                                                    (float)((float)(v78 +
                                                                    (float)((float)(v69 +
                                                                                    (float)((float)-*(
                                                                                                float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v93 *
                                                                                                    v93))) *
                                                                            (float)(v93 *
                                                                                    v93))) *
                                                            (float)(v93 *
                                                                    v93))) *
                                            (float)(v93 * v93))) *
                            (float)(v93 * v93)) +
                    0x1.0000000000000p+0));
    v96 =
        (float)((float)((float)((float)(v75 +
                                        (float)((float)((float)((float)(v81 +
                                                                        (float)((float)-*(
                                                                                    float*)
                                                                                    GameData_212c188 *
                                                                                v94)) *
                                                                v94) -
                                                        v74) *
                                                v94)) *
                                v94) -
                        v76) *
                v94) +
        0x1.0000000000000p+0;
    v97 = v95;
    v98 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v97).n128_f32[3] = v63 * v96;
    LANES128(v99).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v99).n128_i8[8] =
        vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v100 =
        vmlaq_f32(vmulq_f32(v98, v55), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v43, v99));
    LANES128(v101).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v101).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v98).n128_u64[0]), 1);
    LANES128(v102).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v51).n128_u64[1] = LANES128(a3[4]).n128_u64[0];
    v103 = vmulq_f32(v51, v101);
    LANES128(v104).n128_u64[0] = LANES128(v82).n128_u64[0];
    *(int8x8_t*)&LANES128(v102).n128_i8[8] =
        vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v105 = vmlsq_f32(
        vmlaq_f32(v100, COERCE_AS(float32x4_t, GameData_1a83800), v103), v102,
        v53);
    v106 = LANES128_OF(vextq_s8(v85, v85, 8u)).n128_u64[0];
    LANES128(v107).n128_u64[0] = LANES128(v82).n128_u64[0];
    LANES128(v107).n128_u64[1] = v106;
    LANES128(v98).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v105, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v98).n128_i8[8] =
        vqtbl1_s8(v105, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v108).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v107, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v108).n128_u64[1] = LANES128(v108).n128_u64[0];
    v109 = vmulq_f32(v108, v105);
    LANES128(v108).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v107, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v107).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v107, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v104).n128_u64[1] = LANES128(v108).n128_u64[0];
    LANES128(v108).n128_u64[1] = LANES128(v107).n128_u64[0];
    LANES128(v107).n128_u64[1] = LANES128(v82).n128_u64[0];
    v110 = vmlaq_f32(v109, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v104, v98));
    LANES128(v98).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v105, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v98).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v105).n128_u64[0]), 1);
    LANES128(v111).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v105, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v111).n128_i8[8] =
        vqtbl1_s8(v105, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v112 = vmlsq_f32(vmlaq_f32(v110, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v107, v98)),
                     v111, v108);
    v113 = vmulq_f32(v97, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v114).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v112).n128_u32[3] = 0;
    *(int8x8_t*)&LANES128(v114).n128_i8[8] =
        vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v98).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v108).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v107).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v105).n128_u64[0] = LANES128(v112).n128_u64[0];
    LANES128(v108).n128_u64[1] = LANES128(v108).n128_u64[0];
    LANES128(v105).n128_u64[1] = LANES128(v107).n128_u64[0];
    *(int32x2_t*)&LANES128(v98).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v113).n128_u64[0]), 1);
    v115 = vmlaq_f32(vmulq_f32(v113, v108),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v105, v114));
    LANES128(v114).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v107).n128_u64[1] = LANES128(v114).n128_u64[0];
    LANES128(v114).n128_u64[1] = LANES128(v112).n128_u64[0];
    LANES128(v112).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v112).n128_i8[8] =
        vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v113).n128_u64[0] = LANES128(v95).n128_u64[0];
    v116 = vmlsq_f32(vmlaq_f32(v115, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v114, v98)),
                     v112, v107);
    LANES128(v112).n128_u64[0] =
        LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0];
    LANES128(v97).n128_u64[0] = LANES128(v95).n128_u64[0];
    LANES128(v113).n128_u64[1] = LANES128(v112).n128_u64[0];
    LANES128(v112).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v117).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v112).n128_u64[1] = LANES128(v112).n128_u64[0];
    *(int8x8_t*)&LANES128(v117).n128_i8[8] =
        vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v118 = vmulq_f32(v112, v116);
    LANES128(v112).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v119).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v97).n128_u64[1] = LANES128(v112).n128_u64[0];
    *(int32x2_t*)&LANES128(v119).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v116).n128_u64[0]), 1);
    v120 = vmlaq_f32(v118, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v97, v117));
    LANES128(v117).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v121).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v112).n128_u64[1] = LANES128(v117).n128_u64[0];
    LANES128(v117).n128_u64[1] = LANES128(v95).n128_u64[0];
    *(int8x8_t*)&LANES128(v121).n128_i8[8] =
        vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v122 = vmlsq_f32(vmlaq_f32(v120, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v117, v119)),
                     v121, v112);
    v123 = LANES128(v122).n128_f32[1];
    v124 = LANES128(v122).n128_f32[2];
  }
  else {
    v125 = 164;
    if (LANES128(v35[39]).n128_u8[0] != 0) {
      v125 = 155;
    }
    v126 = LANES128(*(v35)).n128_f32[v125] * 0x1.1df46a0000000p-6;
    v127 = 184;
    if (LANES128(v35[44]).n128_u8[0] != 0) {
      v127 = 175;
    }
    v128 = LANES128(*(v35)).n128_f32[v127] * 0x1.1df46a0000000p-6;
    v129 = sinf(v128);
    v240 = -(float)(v129 * cosf(v126));
    v123 = -sinf(v126);
    v130 = cosf(v128);
    v131 = cosf(v126);
    LANES128(v122).n128_f32[0] = v240;
    v124 = v130 * v131;
  }
  v132 = 0.0;
  if (LANES128(v35[6]).n128_u8[0] != 0) {
    v133 = (int32x4_t*)((char*)v35 + 92);
  }
  else {
    v133 = v35 + 8;
  }
  v134 = LANES128(*(v133)).n128_u32[0];
  *(_DWORD*)(v7 + 336) = LANES128(v122).n128_u32[0];
  *(float*)(v7 + 340) = v123;
  *(float*)(v7 + 344) = v124;
  if (v134 == 1) {
    v135 = 0x1.0000000000000p+0;
  }
  else {
    v135 = 0.0;
  }
  *(float*)(v7 + 348) = v135;
  v136 = 21;
  if (LANES128(v35[18]).n128_u8[0] != 0) {
    v136 = 17;
  }
  v137 = v35[v136];
  if (LANES128(v35[6]).n128_u8[0] != 0) {
    v138 = (int32x4_t*)((char*)v35 + 92);
  }
  else {
    v138 = v35 + 8;
  }
  v139 = LANES128(*(v138)).n128_u32[0];
  *(_QWORD*)(v7 + 352) = LANES128(v137).n128_u64[0];
  if (v139 != 0) {
    v132 = 0x1.0000000000000p+0;
  }
  *(_DWORD*)(v7 + 360) = LANES128(v137).n128_u32[2];
  *(float*)(v7 + 364) = v132;
  v140 = 64;
  v141 = *(_DWORD*)(*(_QWORD*)v4 + 13240LL);
  if (LANES128(v35[61]).n128_u8[0] != 0) {
    v140 = 60;
  }
  v142 = *(long double*)&v35[v140];
  v244 = v142;
  if ((unsigned int)(v141 - 3) <= 3) {
    if ((unsigned int)(v141 - 5) > 1) {
      v143 = vmulq_f32(*(float32x4_t*)&v142,
                       COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v143).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
              .n64_u64[0];
      v144 = vmulq_f32(*(float32x4_t*)&v142,
                       COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v144).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
              .n64_u64[0];
      v145 = vmulq_f32(*(float32x4_t*)&v142,
                       COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v145).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v145, v145, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
              .n64_u64[0];
      v146 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v145).n128_u64[0])))
                 .n64_u32[0];
      *(_QWORD*)&v142 =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
               .n64_u32[0]
           << 32);
      *((_QWORD*)&v142 + 1) = v146;
    }
    else {
      v142 =
          GameRoutine_652ba0(&v244, 0x1.0000000000000p+0, 0x1.0000000000000p+0);
    }
  }
  v147 = 224;
  if (LANES128(v35[54]).n128_u8[0] != 0) {
    v147 = 215;
  }
  v148 = LANES128(*(v35)).n128_f32[v147];
  v149 = 278;
  if (LANES128(v35[67]).n128_u8[8] != 0) {
    v149 = 269;
  }
  v150 = LANES128(*(v35)).n128_f32[v149];
  v151 = 204;
  if (LANES128(v35[49]).n128_u8[0] != 0) {
    v151 = 195;
  }
  v152 = v148 * v150;
  v153 = LANES128(*(v35)).n128_u32[v151];
  if (v153 - 3 >= 2) {
    if (v153 == 2) {
      v154 = 0x1.921fb60000000p+1;
    }
    else {
      if (v153 != 1) {
        v152 = 0.0;
        goto LABEL_86;
      }
      v154 = 0x1.921fb60000000p+3;
    }
    v152 = v152 / v154;
  }
LABEL_86:
  *(_DWORD*)(v7 + 316) = v153;
  v155 = 0.0;
  v156 = vmulq_f32(*(float32x4_t*)&v142, vdupq_n_s32(0x3C23D70Au));
  v157 = 32;
  if (LANES128(v35[6]).n128_u8[0] != 0) {
    v157 = 23;
  }
  v158 = vmulq_n_f32(v156, v152);
  if (LANES128(*(v35)).n128_u32[v157] == 1) {
    v159 = 416;
    if (LANES128(v35[24]).n128_u8[2] != 0) {
      v159 = 385;
    }
    if ((LANES128(*(v35)).n128_u8[v159] & 1) != 0) {
      v155 = 0x1.0000000000000p+0;
    }
  }
  *(_QWORD*)(v7 + 384) = LANES128(v158).n128_u64[0];
  *(_DWORD*)(v7 + 392) = LANES128(v158).n128_u32[2];
  *(float*)(v7 + 396) = v155;
  v160 = 77;
  if (LANES128(v35[74]).n128_u8[0] != 0) {
    v160 = 73;
  }
  v161 = v35[v160];
  *(_DWORD*)(v7 + 380) = 0;
  *(_QWORD*)(v7 + 368) = LANES128(v161).n128_u64[0];
  *(_DWORD*)(v7 + 376) = LANES128(v161).n128_u32[2];
  v162 = 288;
  if (v34[256] != 0) {
    v162 = 252;
  }
  *(_DWORD*)(v7 + 544) = *(_DWORD*)&v34[v162];
  if (LANES128(v35[132]).n128_u8[0] == 1) {
    v163 = v35[131];
  }
  else {
    v164 = 400;
    if (v36[352] != 0) {
      v164 = 336;
    }
    v163 = *(int32x4_t*)&v36[v164];
  }
  if (LANES128(v35[115]).n128_u8[0] == 1) {
    v165 = LANES128(v35[114]).n128_f32[3];
  }
  else {
    v166 = 280;
    if (v36[248] != 0) {
      v166 = 244;
    }
    v165 = *(float*)&v36[v166];
  }
  if (LANES128(v35[125]).n128_u8[0] == 1) {
    v167 = LANES128(v35[124]).n128_u32[3];
  }
  else {
    v168 = 200;
    if (v36[168] != 0) {
      v168 = 164;
    }
    v167 = *(_DWORD*)&v36[v168];
  }
  if (LANES128(v35[110]).n128_u8[0] == 1) {
    v169 = LANES128(v35[109]).n128_u32[3];
  }
  else {
    v170 = 488;
    if (v36[456] != 0) {
      v170 = 452;
    }
    v169 = *(_DWORD*)&v36[v170];
  }
  if (LANES128(v35[138]).n128_u8[8] == 1) {
    v171 = LANES128(v35[138]).n128_u32[1];
  }
  else {
    v172 = 856;
    if (v36[824] != 0) {
      v172 = 820;
    }
    v171 = *(_DWORD*)&v36[v172];
  }
  if (LANES128(v35[143]).n128_u8[8] == 1) {
    v173 = LANES128(v35[143]).n128_f32[1];
  }
  else {
    v174 = 640;
    if (v36[608] != 0) {
      v174 = 604;
    }
    v173 = *(float*)&v36[v174];
  }
  if (LANES128(v35[150]).n128_u8[0] == 1) {
    v175 = v35[149];
  }
  else {
    v176 = 768;
    if (v36[720] != 0) {
      v176 = 704;
    }
    v175 = *(int32x4_t*)&v36[v176];
  }
  v177 = *(_DWORD*)(*(_QWORD*)v4 + 13240LL) - 3;
  if (v177 <= 3) {
    v178 = vmulq_f32(v163, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v178).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v178, v178, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0])))
            .n64_u64[0];
    v179 = vmulq_f32(v163, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v179).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v179, v179, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v179).n128_u64[0])))
            .n64_u64[0];
    v180 = vmulq_f32(v163, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v180).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v180, v180, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
            .n64_u64[0];
    v181 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
               .n64_u32[0];
    LANES128(v163).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v179).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v179).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v163).n128_u64[1] = v181;
  }
  v182 =
      LANES128_OF(
          vaddq_f32(vdupq_laneq_s32(v163, 2),
                    vaddq_f32(v163, vdupq_lane_s32(
                                        COERCE_AS(int32x2_t,
                                                  LANES128(v163).n128_u64[0]),
                                        1))))
          .n128_f32[0] /
      0x1.8000000000000p+1;
  if (v182 > 0x1.0000000000000p-23) {
    v163 = vmulq_n_f32(v163, 0x1.0000000000000p+0 / v182);
    LANES128(v163).n128_u32[3] = 0;
  }
  if (v177 <= 3) {
    v183 = vmulq_f32(v175, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v183).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v183, v183, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])))
            .n64_u64[0];
    v184 = vmulq_f32(v175, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v184).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v184, v184, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0])))
            .n64_u64[0];
    v185 = vmulq_f32(v175, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v185).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v185, v185, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
            .n64_u64[0];
    v186 = LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
               .n64_u32[0];
    LANES128(v175).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v183).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v184).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v175).n128_u64[1] = v186;
  }
  v187 = vmulq_n_f32(v163, v165);
  v188 =
      LANES128_OF(
          vaddq_f32(vdupq_laneq_s32(v175, 2),
                    vaddq_f32(v175, vdupq_lane_s32(
                                        COERCE_AS(int32x2_t,
                                                  LANES128(v175).n128_u64[0]),
                                        1))))
          .n128_f32[0] /
      0x1.8000000000000p+1;
  if (v188 > 0x1.0000000000000p-23) {
    v175 = vmulq_n_f32(v175, 0x1.0000000000000p+0 / v188);
    LANES128(v175).n128_u32[3] = 0;
  }
  *(_QWORD*)(v7 + 400) = LANES128(v187).n128_u64[0];
  v189 = v36 + 89;
  v190 = 0.0;
  *(_DWORD*)(v7 + 408) = LANES128(v187).n128_u32[2];
  v191 = 0x1.0000000000000p+0;
  *(_DWORD*)(v7 + 412) = 1065353216;
  if (v36[90] == 0) {
    v189 = v36 + 120;
  }
  v192 = *v189;
  *(_DWORD*)(v7 + 420) = v167;
  if ((v192 & 1) != 0) {
    v190 = 0x1.0000000000000p+0;
  }
  *(float*)(v7 + 416) = v190;
  v193 = 488;
  if (LANES128(v35[120]).n128_u8[0] != 0) {
    v193 = 479;
  }
  v194 = LANES128(*(v35)).n128_u32[v193];
  *(_DWORD*)(v7 + 428) = v169;
  v195 = v36 + 529;
  *(_DWORD*)(v7 + 424) = v194;
  if (v36[530] == 0) {
    v195 = v36 + 560;
  }
  v196 = (float*)(v36 + 900);
  if (v36[904] != 0) {
    v197 = (float*)(v36 + 900);
  }
  else {
    v197 = (float*)(v36 + 936);
  }
  v198 = *v195;
  *(float*)(v7 + 432) = -*v197;
  v199 = 1016;
  if (v36[984] != 0) {
    v199 = 980;
  }
  if (v36[904] == 0) {
    v196 = (float*)(v36 + 936);
  }
  v200 = *(float*)&v36[v199] - *v196;
  if (v200 < 0x1.0624de0000000p-10) {
    v200 = 0x1.0624de0000000p-10;
  }
  *(float*)(v7 + 436) = 0x1.0000000000000p+0 / v200;
  if ((v198 & 1) != 0) {
    v201 = vmulq_n_f32(v175, v173);
    v202 = 1096;
    if (v36[1064] != 0) {
      v202 = 1060;
    }
    v191 = *(float*)&v36[v202];
    *(_QWORD*)(v7 + 448) = LANES128(v201).n128_u64[0];
    *(_DWORD*)(v7 + 460) = 1065353216;
    *(_DWORD*)(v7 + 456) = LANES128(v201).n128_u32[2];
  }
  else {
    v203 = *(_QWORD*)(v7 + 408);
    v171 = v169;
    *(_QWORD*)(v7 + 448) = *(_QWORD*)(v7 + 400);
    *(_QWORD*)(v7 + 456) = v203;
  }
  *(float*)(v7 + 440) = v191;
  *(_DWORD*)(v7 + 444) = v171;
  v204 = 634;
  if (LANES128(v35[156]).n128_u8[8] != 0) {
    v204 = 625;
  }
  v205 = LANES128(*(v35)).n128_u32[v204];
  v206 = 654;
  if (LANES128(v35[161]).n128_u8[8] != 0) {
    v206 = 645;
  }
  v207 = LANES128(*(v35)).n128_u32[v206];
  v208 = 674;
  if (LANES128(v35[166]).n128_u8[8] != 0) {
    v208 = 665;
  }
  v209 = LANES128(*(v35)).n128_u32[v208];
  v210 = 694;
  if (LANES128(v35[171]).n128_u8[8] != 0) {
    v210 = 685;
  }
  v211 = LANES128(*(v35)).n128_u32[v210];
  *(_DWORD*)(v7 + 464) = v205;
  *(_DWORD*)(v7 + 468) = v207;
  *(_DWORD*)(v7 + 472) = v209;
  *(_DWORD*)(v7 + 476) = v211;
  v212 = (int8x16_t*)LANES128(a3[10]).n128_u64[0];
  if (v212 != nullptr) {
    v213 = v212[1];
    *(_QWORD*)(v7 + 480) = LANES128(v213).n128_u64[0];
    *(_QWORD*)(v7 + 488) = LANES128_OF(vextq_s8(v213, v213, 8u)).n128_u64[0];
    v214 = LANES128(a3[10]).n128_u64[0];
    v216 = *(_QWORD*)(v214 + 32);
    v215 = *(_QWORD*)(v214 + 40);
    *(_QWORD*)(v7 + 496) = v216;
    *(_QWORD*)(v7 + 504) = v215;
    v20 = (unsigned int*)(LANES128(a3[10]).n128_u64[0] + 8);
  }
  else {
    *(_QWORD*)(v7 + 496) = 0;
    *(_QWORD*)(v7 + 504) = 0;
    *(_QWORD*)(v7 + 480) = 0;
    *(_QWORD*)(v7 + 488) = 0;
  }
  *(_QWORD*)(v7 + 96) = ((__int64 (*)(__int64, _QWORD, _QWORD))*v8)(
      *(_QWORD*)(*(_QWORD*)v4 + 256LL) + 8LL, *v20, v4[48]);
  v217 = 368;
  if (v34[336] != 0) {
    v217 = 332;
  }
  *(_DWORD*)(v7 + 548) = *(_DWORD*)&v34[v217];
  v218 = a3[4];
  v219 = 128;
  if (v34[96] != 0) {
    v219 = 92;
  }
  v220 = *(float*)&v34[v219];
  v221 = 208;
  if (v34[176] != 0) {
    v221 = 172;
  }
  v222 = 0x1.0000000000000p+0 - v220;
  v223 = *(_DWORD*)&v34[v221];
  v224 = 714;
  if (LANES128(v35[176]).n128_u8[8] != 0) {
    v224 = 705;
  }
  v225 = LANES128(*(v35)).n128_f32[v224];
  v226 = 448;
  if (v34[416] != 0) {
    v226 = 412;
  }
  v227 = *(_DWORD*)&v34[v226];
  v228 = 680;
  if (v34[650] != 0) {
    v228 = 649;
  }
  if ((v34[v228] & 1) != 0) {
    v229 = 760;
    if (v34[728] != 0) {
      v229 = 724;
    }
    v241 = a3[4];
    v230 = *(float*)&v34[v229] * 0x1.1df46a0000000p-6;
    if (sinf(v230) >= (float)-LANES128(v218).n128_f32[1]) {
      v218 = v241;
    }
    else {
      v231 = v241;
      LANES128(v231).n128_u32[1] = 0;
      v232 = vmulq_f32(v231, v231);
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
      LANES128(v232).n128_u64[1] = LANES128(v232).n128_u64[0];
      v233 = vrsqrteq_f32(v232);
      v234 = vmulq_f32(v233, vrsqrtsq_f32(v233, vmulq_f32(v232, v233)));
      v242 = vmulq_n_f32(
          vbicq_s8(vmulq_f32(v231,
                             vmulq_f32(v234, vrsqrtsq_f32(
                                                 v234, vmulq_f32(v232, v234)))),
                   vceqzq_f32(v232)),
          cosf(v230));
      v235 = sinf(v230);
      v218 = v242;
      LANES128(v218).n128_f32[1] = -v235;
    }
  }
  v236 = v34 + 801;
  if (v34[802] == 0) {
    v236 = v34 + 832;
  }
  v237 = *v236;
  *(_QWORD*)(v7 + 512) = LANES128(v218).n128_u64[0];
  v238 = (v237 & 1) == 0;
  v239 = 0x3F80000000000000LL;
  if (v238) {
    v239 = 0;
  }
  *(_QWORD*)(v7 + 520) = v239 | LANES128(v218).n128_u32[2];
  *(float*)(v7 + 540) = exp2f(v225);
  *(_DWORD*)(v7 + 528) = v223;
  *(_DWORD*)(v7 + 532) = v227;
  *(float*)(v7 + 536) = v222;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v243 + 64LL))(v243);
}

void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void gfxa_TaskCharaSceneBuffers_Impl_Impl_lambda2_Invoke(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
