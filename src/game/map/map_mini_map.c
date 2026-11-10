#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2109f98[])();
extern __int64 (*GameData_210a030[])();
extern __int64 (*game_map_MapChip_vtable[])();
extern __int64 (*game_map_MapMiniMap_vtable[])();
extern __int64 GameData_21cf838;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_226b694;
__int64 MapMiniMap_Destructor(__int64 a1);
__int64 MapMiniMap_Unknown4(__int64 result);
__int64 MapMiniMap_18e99d0(__int64 result);
__int64 MapMiniMap_Unknown5(__int64 result);
__int64 MapMiniMap_DeletingDestructor(__int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_1125f00(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_18ecc60(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1560520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, double);
__int64 Manager_136ac50(_QWORD, _QWORD, _QWORD);
__int64 MapChip_19fc0b0(_QWORD, _QWORD, long double);
__int64 MapChip_19fc2e0(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_210a060[])();
extern __int64 (*GameData_210a0b0[])();
extern __int64 (*GameData_210a100[])();
extern __int64 (*GameData_210a150[])();
extern __int64 (*GameData_210a1a0[])();
extern __int64 (*GameData_210a1f0[])();
extern __int64 (*GameData_210a240[])();
extern __int64 (*GameData_210a290[])();
extern __int64 (*GameData_210a2e0[])();
extern __int64 (*GameData_210a330[])();
extern __int64 (*GameData_210a380[])();
extern __int64 (*GameData_210a3d0[])();
extern __int64 (*GameData_210a420[])();
extern __int64 (*GameData_210a470[])();
extern __int64 (*GameData_210a4c0[])();
extern __int64 (*GameData_210a510[])();
extern __int64 (*GameData_210a560[])();
extern __int64 (*GameData_210a5b0[])();
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130140[27];
extern __int64* GameData_2130148[26];
extern __int64* GameData_2130150[25];
extern __int64* GameData_2130158[24];
extern __int64* GameData_2130160[23];
extern __int64* GameData_2130168[22];
extern __int64* GameData_2130170[21];
extern __int64* GameData_2130180[19];
extern __int64* GameData_2130190[17];
extern __int64* GameData_2130198[16];
extern __int64* GameData_21301a0[15];
extern __int64* GameData_21301a8[14];
extern __int64* GameData_21301b0[13];
extern __int64* GameData_21301c0[11];
extern __int64* GameData_21301c8[10];
extern __int64* GameData_21301d0[9];
extern __int64* GameData_21301d8[8];
extern __int64* GameData_21301e0[7];
extern __int64* GameData_21301e8[6];
extern __int64* GameData_21301f0[5];
extern __int64 GameData_21ca310;
extern __int64 ui_Manager_instance_;
extern float GameData_1a83720[4];
extern float GameData_1b01608[8];
void __attribute__((noreturn)) GameRoutine_18ece80(long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void MapMiniMap_18e9a40(__int64 a1);

__int64 MapMiniMap_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 (***v7)(_QWORD);
  __int64 (***v8)(_QWORD);
  __int64 (***v9)(_QWORD);
  __int64 (***v10)(_QWORD);
  __int64 (**v11)(_QWORD);
  bool v12;
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

  *(_QWORD*)a1 = game_map_MapMiniMap_vtable;
  *(_QWORD*)(a1 + 8) = GameData_2109f98;
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  result = GameRoutine_155e140(*(_QWORD*)(a1 + 40));
  v5 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)(a1 + 152) = game_map_MapChip_vtable;
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(__int64 (****)(_QWORD))(a1 + 128);
  if (v7 != nullptr) {
    v8 = *(__int64 (****)(_QWORD))(a1 + 136);
    if (v7 == v8) {
      goto LABEL_20;
    }
    v9 = v8 - 5;
    v10 = v8 - 5;
    do {
      v11 = *v10;
      v10 -= 5;
      result = (*v11)(v9);
      v12 = v9 == v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v7;
    if (v13 != 0) {
    LABEL_20:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  v15 = *(_QWORD*)(a1 + 104);
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 112);
    if (v15 == v16) {
      goto LABEL_31;
    }
    do {
      v17 = *(_QWORD*)(v16 - 8);
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        result = std___1___shared_weak_count___release_weak(v17);
      }
      v16 -= 16;
    } while (v16 != v15);
    v18 = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 112) = v15;
    if (v18 != 0) {
    LABEL_31:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
  }
  v20 = *(_QWORD*)(a1 + 80);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 88);
    if (v20 == v21) {
      goto LABEL_42;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v20;
    if (v23 != 0) {
    LABEL_42:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    }
  }
  v25 = *(_QWORD*)(a1 + 56);
  if (v25 != 0) {
    v26 = *(_QWORD*)(a1 + 64);
    if (v25 == v26) {
      goto LABEL_53;
    }
    do {
      v27 = *(_QWORD*)(v26 - 8);
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        result = std___1___shared_weak_count___release_weak(v27);
      }
      v26 -= 16;
    } while (v26 != v25);
    v28 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v25;
    if (v28 != 0) {
    LABEL_53:
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
    }
  }
  v30 = *(_QWORD*)(a1 + 48);
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
  }
  v31 = *(_QWORD*)(a1 + 32);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  *(_QWORD*)a1 = GameData_210a030;
  if (GameData_21cf838 == a1) {
    GameData_21cf838 = 0;
    GameData_226b694 = 0;
  }
  return result;
}

__int64 MapMiniMap_Unknown4(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  return result;
}

__int64 MapMiniMap_18e99d0(__int64 result)
{
  if (*(_BYTE*)(result + 12) == 1) {
    *(_BYTE*)(result + 12) = 0;
  }
  return result;
}

__int64 MapMiniMap_Unknown5(__int64 result)
{
  if ((*(_BYTE*)(result + 20) & 1) == 0) {
    *(_BYTE*)(result + 20) = 1;
    *(_BYTE*)(result + 220) = 1;
  }
  return result;
}

__int64 MapMiniMap_DeletingDestructor(__int64 result)
{
  if ((*(_BYTE*)(result + 12) & 1) == 0) {
    *(_BYTE*)(result + 12) = 1;
    *(_BYTE*)(result + 212) = 1;
  }
  return result;
}

void MapMiniMap_18e9a40(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  float v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  float v21;
  int v22;
  bool v23;
  unsigned int v24;
  int v25;
  int v26;
  float v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64* v35;
  __int64 v36;
  __int64** v37;
  __int64* v38;
  __int64** v39;
  __int64 v40;
  __n128 v41;
  atomic_ullong* v42;
  __int64*** v43;
  _QWORD* v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64** v49;
  unsigned __int64 v50;
  long double v51;
  unsigned __int64 v52;
  float v53;
  _QWORD* v54;
  __int64* v55;
  __int64 v56;
  __int64** v57;
  __int64* v58;
  __int64** v59;
  __int64 v60;
  _QWORD* v61;
  __int64* v62;
  __int64 v63;
  __int64** v64;
  __int64* v65;
  __int64** v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  float v70;
  __int64 v71;
  __int64 v72;
  int v73;
  float v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  float v82;
  __int64 v83;
  unsigned int v84;
  int v85;
  unsigned __int64 v86;
  __int64 v87;
  float v88;
  int v89;
  float v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  _QWORD* v99;
  atomic_ullong* v100;
  _QWORD* v101;
  __int64** v102;
  long double v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  long double v107;
  _QWORD* v108;
  _QWORD* v109;
  __int64* v110;
  __int64 v111;
  __int64* v112;
  __int64** v113;
  long double v114;
  __int64 v115;
  long double v116;
  long double v117;
  int v118;
  _QWORD* v119;
  atomic_ullong* v120;
  _QWORD* v121;
  __int64** v122;
  long double v123;
  __int64 v124;
  __int64 v125;
  long double v126;
  _QWORD* v127;
  _QWORD* v128;
  __int64* v129;
  __int64 v130;
  __int64* v131;
  __int64** v132;
  __int64 v133;
  long double v134;
  long double v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  _QWORD* v139;
  __int64* v140;
  __int64 v141;
  __int64** v142;
  __int64** v143;
  __int64 v144;
  long double v145;
  long double v146;
  __int64 v147;
  __n128 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  char* v152;
  __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  int v158;
  int v159;
  int v160;
  _QWORD* v161;
  _QWORD* v162;
  __int64* v163;
  __int64** v164;
  __int64* v165;
  __int64 v166;
  __int64 v167;
  int v168;
  int v169;
  long double v170;
  long double v171;
  __int64 v172;
  __int64 v173;
  char* v174;
  __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64 v179;
  char v180;
  __int64 v181;
  unsigned int v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  int v190;
  unsigned int v191;
  unsigned int v192;
  __int64 v193;
  int v194;
  unsigned int v195;
  __int64 v196;
  int v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  unsigned int v202;
  __int64 v203;
  int v204;
  __int64 v205;
  int v206;
  int v207;
  float v208;
  unsigned int v209;
  int v210;
  _QWORD* v211;
  _QWORD* v212;
  __int64* v213;
  __int64 v214;
  __int64* v215;
  __int64** v216;
  __int64 v217;
  __int64** v218;
  long double v219;
  long double v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  _QWORD* v228;
  _QWORD* v229;
  __int64* v230;
  __int64 v231;
  __int64* v232;
  __int64** v233;
  __int64 v234;
  long double v235;
  __int64 v236;
  long double v237;
  long double v238;
  __int64*** v239;
  __int64*** v240;
  __int64** v241;
  __int64** v242;
  __int64* v243;
  __int64 v244;
  __int64 v245;
  float v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  int v250;
  float v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64* v255;
  float v256;
  __n128 v257;
  __int64 v258;
  _DWORD* v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  int v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  float v269;
  float v270;
  __int64 v271;
  char v272;
  _BOOL4 v273;
  _QWORD* v274;
  __int64** v275;
  _QWORD* v276;
  unsigned __int64 v277;
  __int64 v278;
  __int64* v279;
  __int64 v280;
  __n128 v281;
  int v282;
  int v283;
  __int64*** v284;
  __int64 v285;
  __int64 v286;
  __int64* v287;
  __int64 v288;
  unsigned __int64 add;
  __int64 v290;
  _DWORD* v291;
  char v292;
  __int64 v293;
  __int64** v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64* v298;
  __int64 v299;
  __n128 v300;
  int v301;
  int v302;
  __int64*** v303;
  __int64 v304;
  __int64 v305;
  unsigned __int64 v306;
  __int64 v307;
  _DWORD* v308;
  char v309;
  __int64 v310;
  __int64** v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64* v315;
  __int64 v316;
  __n128 v317;
  int v318;
  int v319;
  __int64*** v320;
  __int64 v321;
  __int64 v322;
  unsigned __int64 v323;
  __int64 v324;
  _QWORD* v325;
  _QWORD* v326;
  __int64* v327;
  __int64 v328;
  __int64 v329;
  __int64* v330;
  __int64** v331;
  __int64 v332;
  long double v333;
  unsigned __int64 v334;
  int v335;
  int v336;
  void (***v337)(_QWORD, long double);
  void (***v338)(_QWORD, long double);
  void (***v339)(_QWORD, long double);
  void (***v340)(_QWORD, long double);
  void (**v341)(_QWORD, long double);
  __int64 v342;
  long double v343;
  __int64* v344;
  unsigned __int64 v345;
  unsigned __int64 v346;
  char* v347;
  __int64 v348;
  __int64* v349;
  char v350;
  unsigned __int64 v351;
  __int64* v352;
  __int64 v353;
  char* v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  long double v359;
  __int64* v360;
  double v361;
  unsigned __int64 v362;
  char* v363;
  __int64 v364;
  __int64* v365;
  char v366;
  __int64 v367;
  unsigned __int64 v368;
  int v369;
  int v370;
  __int64* v371;
  __int64 v372;
  long double v373;
  __int64* v374;
  unsigned __int64 v375;
  char* v376;
  __int64 v377;
  char v378;
  unsigned __int64 v379;
  __int64* v380;
  __int64 v381;
  char* v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  char* v386;
  unsigned __int64 v387;
  char v388;
  __int64 v389;
  __int64 v390;
  unsigned __int64 v391;
  unsigned int v392;
  unsigned int v393;
  int v394;
  int v395;
  __int64 v396;
  __int64* v397;
  int v398;
  int v399;
  unsigned int v400;
  unsigned int v401;
  __int64 v402;
  atomic_ullong* v403;
  __int64 v404;
  __int64* v405;
  __int64* v406;
  __int64 v407;
  atomic_ullong* v408;
  __int64 v409;
  unsigned __int64 v410;
  __int64*** v411;
  unsigned int v412;
  __int64 v413;
  __int64 v414;
  __int64* v415;
  int v416;
  __int64* v417;
  int v418;
  int v419;
  int v420;
  __int64 v421;
  int v422;
  int v423;
  __int64 v424;
  int v425;
  int v426;
  __int64 v427;
  int v428;
  __int64 v429;
  __int64 v430;
  unsigned __int64 v431;
  char* v432;
  __int64* v433;
  __int64 v434;
  unsigned __int64 v435;
  char* v436;
  int v437;
  _QWORD v438[4];
  _QWORD* v439;
  _QWORD v440[2];
  _QWORD v441[2];
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  _QWORD v446[2];
  unsigned int v447;
  __int64** v448;
  _QWORD* v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  __int64 v453;
  __int64** v454;
  _QWORD* v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64** v460;
  __int64 v461;
  __int64** v462;
  _QWORD* v463;
  __int64 v464;
  __int64 v465;
  __int64** v466;
  __int64 v467;
  __int64** v468;
  _QWORD* v469;
  __int64 v470;
  __int64 v471;
  __int64** v472;
  __int64 v473;
  __int64** v474;
  _QWORD* v475;
  __int64 v476;
  __int64 v477;
  __int64** v478;
  _QWORD* v479;
  __int64** v480;
  _QWORD* v481;
  __int64 v482;
  __int64 v483;
  __int64** v484;
  _QWORD* v485;
  __int64** v486;
  _QWORD* v487;

  v3 = Manager_136ac50(ui_Manager_instance_ + 1264, 8, "Battle_MiniMap_Base");
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 40), "Map_Base");
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
    *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v6) + 24) + 8LL) = v4;
  }
  v7 = *(_QWORD*)(a1 + 48);
  v438[0] = *(_QWORD*)(a1 + 40);
  v438[1] = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v421 = a1;
  MapChip_19fc2e0(a1 + 56, v438);
  if (v438[1] != 0) {
    std___1___shared_weak_count___release_weak_alt1(v438[1]);
  }
  v8 = 0x1.0000000000000p+0;
  v9 = *GameData_212ce98[0];
  v11 = *(_QWORD*)(v421 + 40);
  v10 = *(_QWORD*)(v421 + 48);
  v12 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v426 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  if (*(_DWORD*)(v421 + 224) == 2) {
    v13 = 0x1.0000000000000p+0;
  }
  else {
    v13 = 0x1.3333340000000p-1;
  }
  v423 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  v14 = *(unsigned __int8*)(v9 + 31);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v14 - v426;
  v16 = std___1___shared_weak_count_lock(v10);
  v17 = ui_LayoutAccessor_FindPane(v11, "N_Map");
  if (v17 != 0) {
    v18 = Pane_58fac0(v17, "MapMargin");
    if (v18 != 0) {
      v8 = (float)*(int*)(v18 + *(unsigned int*)(v18 + 4));
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  std___1___shared_weak_count___release_weak_alt1(v10);
  LODWORD(v466) = 0;
  if ((v15 & 0x80000000) == 0 && ((v423 - v12) & 0x80000000) == 0) {
    v19 = 0;
    v20 = GameData_212c930;
    v418 = v15;
    v21 = (float)-v8 / v13;
    v22 = 32 * v426;
    do {
      v24 = v423 - v12;
      v25 = v15 - v19;
      v26 = v423;
      v27 = v21 + (float)((float)v25 * -0x1.0000000000000p+4);
      do {
        v28 = v22 + v26;
        if ((unsigned int)(v22 + v26) >= 0x400) {
          v28 = 0;
        }
        v29 = *(_QWORD*)(*(_QWORD*)(*v20 + 64) +
                         8LL * *(unsigned __int16*)(*(_QWORD*)(v9 + 72) +
                                                    2LL * v28 + 8));
        if (v29 != 0 &&
            *(unsigned __int8*)(*GameData_212ce98[0] + 18) >
                (unsigned int)(unsigned __int8)(v26 -
                                                *(_BYTE*)(*GameData_212ce98[0] +
                                                          16)) &&
            *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
                (unsigned int)(unsigned __int8)(v19 + v426 -
                                                *(_BYTE*)(*GameData_212ce98[0] +
                                                          17))) {
          v30 = *(_BYTE*)(*GameData_212ce90[0] +
                          *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                          16) == 1
                    ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                    : 0LL;
          if (((*(_DWORD*)(*(_QWORD*)(v9 + 160) + (v30 << 7) +
                           4LL * ((v22 + v26) >> 5) + 8) >>
                v26) &
               1) != 0) {
            v31 = *(_QWORD*)(v29 + 48);
            if (*(unsigned __int8*)(v31 + 40) != 255) {
              if (*(unsigned __int8*)(v31 + 33) == 255) {
                v44 = (_QWORD*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                v44[1] = 0;
                v44[2] = 0;
                v34 = v44;
                *v44 = GameData_210a060;
                v45 = GameData_21301a0[0];
                v44[6] = 0;
                v44[7] = 0;
                *((_DWORD*)v44 + 14) = 1098907648;
                v44[4] = 0;
                v44[5] = 0;
                v47 = *(__int64**)(v421 + 40);
                v46 = *(_QWORD*)(v421 + 48);
                v48 = v45 + 2;
                v44[3] = v48;
                v49 = (__int64**)(v44 + 3);
                v433 = v47;
                v434 = v46;
                if (v46 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16),
                                            1u, memory_order_relaxed);
                  v48 = *v49;
                }
                ((void (*)(_QWORD*, __int64**, _QWORD))v48[2])(
                    v44 + 3, &v433, (unsigned int)v466);
                if (v434 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v434);
                }
                v50 = *(_QWORD*)(v421 + 48);
                v430 = *(_QWORD*)(v421 + 40);
                v431 = v50;
                if (v50 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 16),
                                            1u, memory_order_relaxed);
                }
                ((void (*)(__int64**, __int64*, __int64***, float, float,
                           double))(*v49)[7])(
                    v49, &v430, &v466,
                    v21 + (float)((float)v24 * -0x1.0000000000000p+4), v27,
                    0.0);
                if (v431 != 0) {
                  v41 = std___1___shared_weak_count___release_weak_alt1(v431);
                }
                v486 = v49;
                v487 = v34;
                v42 = (atomic_ullong*)(v34 + 2);
                v43 = &v486;
              }
              else {
                v32 = *(char*)(v29 + 66) <= 0 && *(char*)(v29 + 67) <= 0;
                if (v32 && *(char*)(v29 + 68) <= 0) {
                  if (*(_BYTE*)(v29 + 57) == 11) {
                    v52 = *(unsigned __int8*)(v29 + 112);
                    v53 = 0.0;
                    if (v52 <= 3) {
                      v53 = GameData_1a83720[v52];
                    }
                    v54 = (_QWORD*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v54[1] = 0;
                    v54[2] = 0;
                    v34 = v54;
                    *v54 = GameData_210a100;
                    v55 = GameData_21301b0[0];
                    v54[6] = 0;
                    v54[7] = 0;
                    *((_DWORD*)v54 + 14) = 1098907648;
                    v54[4] = 0;
                    v54[5] = 0;
                    v57 = *(__int64***)(v421 + 40);
                    v56 = *(_QWORD*)(v421 + 48);
                    v58 = v55 + 2;
                    v54[3] = v58;
                    v59 = (__int64**)(v54 + 3);
                    v478 = v57;
                    v479 = (_QWORD*)v56;
                    if (v56 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v56 + 16), 1u,
                          memory_order_relaxed);
                      v58 = *v59;
                    }
                    ((void (*)(_QWORD*, __int64***, _QWORD))v58[2])(
                        v54 + 3, &v478, (unsigned int)v466);
                    if (v479 != nullptr) {
                      std___1___shared_weak_count___release_weak_alt1(v479);
                    }
                    v60 = *(_QWORD*)(v421 + 48);
                    v476 = *(_QWORD*)(v421 + 40);
                    v477 = v60;
                    if (v60 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v60 + 16), 1u,
                          memory_order_relaxed);
                    }
                    ((void (*)(__int64**, __int64*, __int64***, float, float,
                               float))(*v59)[7])(
                        v59, &v476, &v466,
                        v21 + (float)((float)v24 * -0x1.0000000000000p+4), v27,
                        v53);
                    if (v477 != 0) {
                      v41 =
                          std___1___shared_weak_count___release_weak_alt1(v477);
                    }
                    v474 = v59;
                    v475 = v34;
                    v42 = (atomic_ullong*)(v34 + 2);
                    v43 = &v474;
                  }
                  else {
                    v61 = (_QWORD*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v61[1] = 0;
                    v61[2] = 0;
                    v34 = v61;
                    *v61 = GameData_210a150;
                    v62 = GameData_2130198[0];
                    v61[6] = 0;
                    v61[7] = 0;
                    *((_DWORD*)v61 + 14) = 1098907648;
                    v61[4] = 0;
                    v61[5] = 0;
                    v64 = *(__int64***)(v421 + 40);
                    v63 = *(_QWORD*)(v421 + 48);
                    v65 = v62 + 2;
                    v61[3] = v65;
                    v66 = (__int64**)(v61 + 3);
                    v472 = v64;
                    v473 = v63;
                    if (v63 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v63 + 16), 1u,
                          memory_order_relaxed);
                      v65 = *v66;
                    }
                    ((void (*)(_QWORD*, __int64***, _QWORD))v65[2])(
                        v61 + 3, &v472, (unsigned int)v466);
                    if (v473 != 0) {
                      std___1___shared_weak_count___release_weak_alt1(v473);
                    }
                    v67 = *(_QWORD*)(v421 + 48);
                    v470 = *(_QWORD*)(v421 + 40);
                    v471 = v67;
                    if (v67 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v67 + 16), 1u,
                          memory_order_relaxed);
                    }
                    ((void (*)(__int64**, __int64*, __int64***, float, float,
                               double))(*v66)[7])(
                        v66, &v470, &v466,
                        v21 + (float)((float)v24 * -0x1.0000000000000p+4), v27,
                        0.0);
                    if (v471 != 0) {
                      v41 =
                          std___1___shared_weak_count___release_weak_alt1(v471);
                    }
                    v468 = v66;
                    v469 = v34;
                    v42 = (atomic_ullong*)(v34 + 2);
                    v43 = &v468;
                  }
                }
                else {
                  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                  v33[1] = 0;
                  v33[2] = 0;
                  v34 = v33;
                  *v33 = GameData_210a0b0;
                  v35 = GameData_21301a8[0];
                  v33[6] = 0;
                  v33[7] = 0;
                  *((_DWORD*)v33 + 14) = 1098907648;
                  v33[4] = 0;
                  v33[5] = 0;
                  v37 = *(__int64***)(v421 + 40);
                  v36 = *(_QWORD*)(v421 + 48);
                  v38 = v35 + 2;
                  v33[3] = v38;
                  v39 = (__int64**)(v33 + 3);
                  v484 = v37;
                  v485 = (_QWORD*)v36;
                  if (v36 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v36 + 16), 1u,
                        memory_order_relaxed);
                    v38 = *v39;
                  }
                  ((void (*)(_QWORD*, __int64***, _QWORD))v38[2])(
                      v33 + 3, &v484, (unsigned int)v466);
                  if (v485 != nullptr) {
                    std___1___shared_weak_count___release_weak_alt1(v485);
                  }
                  v40 = *(_QWORD*)(v421 + 48);
                  v482 = *(_QWORD*)(v421 + 40);
                  v483 = v40;
                  if (v40 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v40 + 16), 1u,
                        memory_order_relaxed);
                  }
                  ((void (*)(__int64**, __int64*, __int64***, float, float,
                             double))(*v39)[7])(
                      v39, &v482, &v466,
                      v21 + (float)((float)v24 * -0x1.0000000000000p+4), v27,
                      0.0);
                  if (v483 != 0) {
                    v41 = std___1___shared_weak_count___release_weak_alt1(v483);
                  }
                  v480 = v39;
                  v481 = v34;
                  v42 = (atomic_ullong*)(v34 + 2);
                  v43 = &v480;
                }
              }
              atomic_fetch_add_explicit(v42, 1u, memory_order_relaxed);
              MapChip_19fc0b0(v421 + 56, v43, *(long double*)&v41);
              *(__n128*)&v51 =
                  std___1___shared_weak_count___release_weak_alt1(v34);
              if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v34 + 16LL))(v34, v51);
                std___1___shared_weak_count___release_weak_alt1(v34);
              }
            }
          }
        }
        --v26;
        v32 = (int)v24-- <= 0;
      } while (!v32);
      v15 = v418;
      v22 += 32;
      v23 = v418 == v19++;
    } while (!v23);
  }
  v68 = v421;
  v69 = *(_QWORD*)(v421 + 48);
  v438[0] = *(_QWORD*)(v421 + 40);
  v438[1] = v69;
  if (v69 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                              memory_order_relaxed);
  }
  MapChip_19fc2e0(v421 + 80, v438);
  if (v438[1] != 0) {
    std___1___shared_weak_count___release_weak_alt1(v438[1]);
  }
  v70 = 0x1.0000000000000p+0;
  v72 = *(_QWORD*)(v421 + 40);
  v71 = *(_QWORD*)(v421 + 48);
  v424 = *GameData_212ce98[0];
  v393 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v396 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v73 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  v416 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
  if (*(_DWORD*)(v421 + 224) == 2) {
    v74 = 0x1.0000000000000p+0;
  }
  else {
    v74 = 0x1.3333340000000p-1;
  }
  if (v71 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16), 1u,
                              memory_order_relaxed);
  }
  v395 = v73 - v396;
  v75 = std___1___shared_weak_count_lock(v71);
  v76 = ui_LayoutAccessor_FindPane(v72, "N_Map");
  if (v76 != 0) {
    v77 = Pane_58fac0(v76, "MapMargin");
    if (v77 != 0) {
      v70 = (float)*(int*)(v77 + *(unsigned int*)(v77 + 4));
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    std___1___shared_weak_count___release_weak_alt1(v75);
  }
  std___1___shared_weak_count___release_weak_alt1(v71);
  v447 = 0;
  if ((v395 & 0x80000000) == 0) {
    v80 = v416 - v393;
    if ((v80 & 0x80000000) == 0) {
      v81 = 0;
      v82 = (float)-v70 / v74;
      v409 = 0;
      v410 = 0;
      v411 = nullptr;
      v83 = v80 + v393;
      v84 = 32 * v396 - 32;
      v85 = 32 * v396 + v416;
      v419 = v85;
      v86 = ((unsigned __int64)(unsigned int)v396 << 6) + 2 * v83 + 10;
      v394 = v416 - 1;
      v413 = v83;
      v414 = v83 + 32 * v396;
      v399 = v85 - 1;
      v398 = v85 - 33;
      v406 = GameData_2130168[0] + 2;
      v397 = GameData_2130148[0] + 2;
      v405 = GameData_2130150[0] + 2;
      while (1) {
        v87 = 0;
        v392 = v84;
        v407 = v81;
        v391 = v86;
        v402 = 2 * (v413 + v84);
        v412 = v81 + v396;
        v400 = v81 + v396 - 1;
        v401 = v81 + v396 + 1;
        v88 = v82 + (float)((float)(v395 - v81) * -0x1.0000000000000p+4);
        do {
          v89 = v80 + v87;
          v90 = v82 + (float)((float)(unsigned int)(v80 + v87) *
                              -0x1.0000000000000p+4);
          v91 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v427 = *GameData_212cfb8[0];
          v422 = v419 + v87;
          if ((unsigned int)(v419 + v87) >= 0x400) {
            v92 = 0;
          }
          else {
            v92 = (unsigned int)(v419 + v87);
          }
          v93 = *(__int16*)(v91 + 2LL * (unsigned int)v92 + 4200);
          v94 = *(_QWORD*)(v91 + 8);
          if ((v93 < 0 || v94 == 0) &&
              ((v93 = *(__int16*)(v91 + 2 * v92 + 2152)) < 0 || v94 == 0)) {
            v151 = *(__int16*)(v91 + 104 + 2 * v92);
            if (v151 < 0) {
              goto LABEL_231;
            }
            v95 = v94 + 144LL * (unsigned int)v151;
            if (v95 == 0) {
              goto LABEL_231;
            }
          }
          else {
            v95 = v94 + 144LL * (unsigned int)v93;
            if (v95 == 0) {
              goto LABEL_231;
            }
          }
          v96 = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 224LL))(v95);
          if (v96 != 0) {
            v97 = *(unsigned __int8*)(v96 + 57);
            v98 = v96;
            if (v97 == 2) {
              if (*(_BYTE*)(v96 + 59) != 0) {
                v99 = (_QWORD*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
                v99[6] = 0;
                v99[7] = 0;
                v99[1] = 0;
                v100 = (atomic_ullong*)(v99 + 1);
                v101 = v99;
                v99[2] = 0;
                v99[4] = 0;
                v99[5] = 0;
                v99[8] = 0;
                v99[9] = 0;
                *v99 = GameData_210a1a0;
                v99[3] = v397;
                v102 = (__int64**)(v99 + 3);
                *((_DWORD*)v99 + 14) = 1098907648;
                *((_BYTE*)v99 + 72) = 9;
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95) &
                     1) != 0) {
                  v104 = *(_QWORD*)(v68 + 48);
                  v433 = *(__int64**)(v68 + 40);
                  v434 = v104;
                  if (v104 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v104 + 16), 1u,
                        memory_order_relaxed);
                  }
                  ((void (*)(__int64**, __int64**, _QWORD))(*v102)[2])(
                      v102, &v433, v447);
                  if (v434 != 0) {
                    std___1___shared_weak_count___release_weak_alt1(v434);
                  }
                  v106 = *(_QWORD*)(v68 + 40);
                  v105 = *(_QWORD*)(v68 + 48);
                  v101[8] = v95;
                  v430 = v106;
                  v431 = v105;
                  if (v105 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v105 + 16), 1u,
                        memory_order_relaxed);
                  }
                  ((void (*)(__int64**, __int64*, __int64, unsigned int*, float,
                             float, double))(*v102)[7])(v102, &v430, v98, &v447,
                                                        v90, v88, 0.0);
                  if (v431 != 0) {
                    *(__n128*)&v107 =
                        std___1___shared_weak_count___release_weak_alt1(v431);
                  }
                  v486 = v102;
                  v487 = v101;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 2),
                                            1u, memory_order_relaxed);
                  MapChip_19fc0b0(v68 + 80, &v486, v107);
                  *(__n128*)&v103 =
                      std___1___shared_weak_count___release_weak_alt1(v101);
                }
                if (atomic_fetch_add(v100, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(_QWORD*, long double))(*v101 + 16LL))(v101,
                                                                     v103);
                  std___1___shared_weak_count___release_weak_alt1(v101);
                }
              }
              v97 = *(unsigned __int8*)(v98 + 57);
            }
            if (v97 == 3) {
              v108 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v108[1] = 0;
              v108[2] = 0;
              v109 = v108;
              *v108 = GameData_210a1f0;
              v110 = GameData_2130140[0];
              v108[6] = 0;
              v108[7] = 0;
              *((_DWORD*)v108 + 14) = 1098907648;
              v108[4] = 0;
              v108[5] = 0;
              v111 = *(_QWORD*)(v68 + 48);
              v112 = v110 + 2;
              v484 = *(__int64***)(v68 + 40);
              v485 = (_QWORD*)v111;
              v108[3] = v112;
              v113 = (__int64**)(v108 + 3);
              if (v111 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v111 + 16),
                                          1u, memory_order_relaxed);
                v112 = *v113;
              }
              ((void (*)(_QWORD*, __int64***, _QWORD))v112[2])(v108 + 3, &v484,
                                                               v447);
              if (v485 != nullptr) {
                *(__n128*)&v114 =
                    std___1___shared_weak_count___release_weak_alt1(v485);
              }
              *((_BYTE*)v109 + 60) = (*(__int64 (**)(__int64, long double))(
                                         *(_QWORD*)v95 + 16LL))(v95, v114) &
                                     1;
              v115 = *(_QWORD*)(v68 + 48);
              v482 = *(_QWORD*)(v68 + 40);
              v483 = v115;
              if (v115 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 16),
                                          1u, memory_order_relaxed);
              }
              ((void (*)(__int64**, __int64*, __int64, unsigned int*, float,
                         float, double))(*v113)[7])(v113, &v482, v98, &v447,
                                                    v90, v88, 0.0);
              if (v483 != 0) {
                *(__n128*)&v116 =
                    std___1___shared_weak_count___release_weak_alt1(v483);
              }
              v480 = v113;
              v481 = v109;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v109 + 2), 1u,
                                        memory_order_relaxed);
              MapChip_19fc0b0(v68 + 80, &v480, v116);
              *(__n128*)&v117 =
                  std___1___shared_weak_count___release_weak_alt1(v109);
              if (atomic_fetch_add((atomic_ullong* volatile)(v109 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v109 + 16LL))(v109, v117);
                std___1___shared_weak_count___release_weak_alt1(v109);
              }
            }
            v118 = *(unsigned __int8*)(v98 + 57);
            if ((unsigned int)(v118 - 4) <= 2) {
              v119 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v119[1] = 0;
              v120 = (atomic_ullong*)(v119 + 1);
              v119[2] = 0;
              v121 = v119;
              v119[4] = 0;
              v119[5] = 0;
              v119[6] = 0;
              v119[7] = 0;
              *v119 = GameData_210a240;
              v119[3] = v405;
              v122 = (__int64**)(v119 + 3);
              *((_DWORD*)v119 + 14) = 1098907648;
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95) & 1) !=
                  0) {
                v124 = *(_QWORD*)(v68 + 48);
                v478 = *(__int64***)(v68 + 40);
                v479 = (_QWORD*)v124;
                if (v124 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v124 + 16), 1u,
                      memory_order_relaxed);
                }
                ((void (*)(__int64**, __int64***, _QWORD))(*v122)[2])(
                    v122, &v478, v447);
                if (v479 != nullptr) {
                  std___1___shared_weak_count___release_weak_alt1(v479);
                }
                v125 = *(_QWORD*)(v68 + 48);
                v476 = *(_QWORD*)(v68 + 40);
                v477 = v125;
                if (v125 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v125 + 16), 1u,
                      memory_order_relaxed);
                }
                ((void (*)(__int64**, __int64*, __int64, unsigned int*, float,
                           float, double))(*v122)[7])(v122, &v476, v98, &v447,
                                                      v90, v88, 0.0);
                if (v477 != 0) {
                  *(__n128*)&v126 =
                      std___1___shared_weak_count___release_weak_alt1(v477);
                }
                v474 = v122;
                v475 = v121;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v121 + 2),
                                          1u, memory_order_relaxed);
                MapChip_19fc0b0(v68 + 80, &v474, v126);
                *(__n128*)&v123 =
                    std___1___shared_weak_count___release_weak_alt1(v121);
              }
              if (atomic_fetch_add(v120, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v121 + 16LL))(v121, v123);
                std___1___shared_weak_count___release_weak_alt1(v121);
              }
              v118 = *(unsigned __int8*)(v98 + 57);
            }
            if (v118 == 1) {
              v127 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
              v127[1] = 0;
              v127[2] = 0;
              v128 = v127;
              *v127 = GameData_210a290;
              v129 = GameData_2130160[0];
              v127[6] = 0;
              v127[7] = 0;
              *((_DWORD*)v127 + 14) = 1098907648;
              v127[4] = 0;
              v127[5] = 0;
              v130 = *(_QWORD*)(v68 + 48);
              v131 = v129 + 2;
              v472 = *(__int64***)(v68 + 40);
              v473 = v130;
              v127[3] = v131;
              v132 = (__int64**)(v127 + 3);
              if (v130 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v130 + 16),
                                          1u, memory_order_relaxed);
                v131 = *v132;
              }
              ((void (*)(_QWORD*, __int64***, _QWORD))v131[2])(v127 + 3, &v472,
                                                               v447);
              if (v473 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v473);
              }
              v133 = *(_QWORD*)(v68 + 48);
              v470 = *(_QWORD*)(v68 + 40);
              v471 = v133;
              if (v133 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v133 + 16),
                                          1u, memory_order_relaxed);
              }
              ((void (*)(__int64**, __int64*, __int64, unsigned int*, float,
                         float, double))(*v132)[7])(v132, &v470, v98, &v447,
                                                    v90, v88, 0.0);
              if (v471 != 0) {
                *(__n128*)&v134 =
                    std___1___shared_weak_count___release_weak_alt1(v471);
              }
              v468 = v132;
              v469 = v128;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v128 + 2), 1u,
                                        memory_order_relaxed);
              MapChip_19fc0b0(v68 + 80, &v468, v134);
              *(__n128*)&v135 =
                  std___1___shared_weak_count___release_weak_alt1(v128);
              if (atomic_fetch_add((atomic_ullong* volatile)(v128 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v128 + 16LL))(v128, v135);
                std___1___shared_weak_count___release_weak_alt1(v128);
              }
            }
          }
          v136 = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 224LL))(v95);
          if (v136 != 0 && (v137 = v136, *(_BYTE*)(v136 + 57) == 7)) {
            v138 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
            v138[1] = 0;
            v138[2] = 0;
            v139 = v138;
            v138[4] = 0;
            v138[5] = 0;
            v138[6] = 0;
            v138[7] = 0;
            v138[8] = 0;
            v138[9] = 0;
            v138[10] = 0;
            v138[11] = 0;
            *v138 = GameData_210a2e0;
            v408 = (atomic_ullong*)(v138 + 1);
            v138[12] = 0;
            v138[13] = 0;
            v138[14] = 0;
            v138[15] = 0;
            v140 = GameData_2130170[0] + 2;
            *((_DWORD*)v138 + 14) = 1098907648;
            *((_DWORD*)v138 + 24) = 1098907648;
            v138[8] = v406;
            v138[15] = 0;
            v138[16] = 0;
            v138[16] = 0;
            v138[17] = 0;
            v138[17] = 0;
            v138[18] = 0;
            v138[18] = 0;
            v138[19] = 0;
            v138[19] = 0;
            v138[20] = 0;
            v138[20] = 0;
            v138[21] = 0;
            v138[21] = 0;
            v138[22] = 0;
            *((_WORD*)v138 + 88) = 0;
            *((_DWORD*)v138 + 26) = 1065353216;
            *((_DWORD*)v138 + 28) = 1065353216;
            v142 = *(__int64***)(v68 + 40);
            v141 = *(_QWORD*)(v68 + 48);
            v138[3] = v140;
            v143 = (__int64**)(v138 + 3);
            v466 = v142;
            v467 = v141;
            if (v141 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v141 + 16),
                                        1u, memory_order_relaxed);
              v140 = *v143;
            }
            ((void (*)(_QWORD*, __int64***, _QWORD))v140[2])(v138 + 3, &v466,
                                                             v447);
            if (v467 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v467);
            }
            v144 = *(_QWORD*)(v68 + 48);
            v464 = *(_QWORD*)(v68 + 40);
            v465 = v144;
            if (v144 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v144 + 16),
                                        1u, memory_order_relaxed);
            }
            ((void (*)(__int64**, __int64*, __int64, unsigned int*, float,
                       float, double))(*v143)[7])(v143, &v464, v137, &v447, v90,
                                                  v88, 0.0);
            if (v465 != 0) {
              *(__n128*)&v145 =
                  std___1___shared_weak_count___release_weak_alt1(v465);
            }
            v462 = v143;
            v463 = v139;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v139 + 2), 1u,
                                      memory_order_relaxed);
            MapChip_19fc0b0(v68 + 80, &v462, v145);
            *(__n128*)&v146 =
                std___1___shared_weak_count___release_weak_alt1(v139);
            *((float*)v139 + 40) = v90;
            *((float*)v139 + 41) = v88;
            v139[18] = v137;
            v139[19] = v95;
            *((_DWORD*)v139 + 42) = v89;
            *((_DWORD*)v139 + 43) = v407;
            v147 = *(_QWORD*)(v68 + 48);
            v460 = *(__int64***)(v68 + 40);
            v461 = v147;
            if (v147 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 16),
                                        1u, memory_order_relaxed);
            }
            ((void (*)(__int64**, __int64***, long double))(*v143)[6])(
                v143, &v460, v146);
            v149 = v461;
            if (v461 != 0) {
              v148 = std___1___shared_weak_count___release_weak_alt1(v461);
            }
            if ((unsigned __int64)v411 >= v410) {
              v152 = (char*)v411 - v409;
              v153 = ((__int64)v411 - v409) >> 3;
              v154 = v153 + 1;
              if ((unsigned __int64)(v153 + 1) >> 61 != 0) {
                goto LABEL_616;
              }
              if ((__int64)(v410 - v409) >> 2 > v154) {
                v154 = (__int64)(v410 - v409) >> 2;
              }
              if (v410 - v409 >= 0x7FFFFFFFFFFFFFF8LL) {
                v155 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v155 = v154;
              }
              if (v155 != 0) {
                if (v155 >> 61 != 0) {
                  goto LABEL_617;
                }
                v156 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v155, 16, 0);
              }
              else {
                v156 = 0;
              }
              *(_QWORD*)&v152[v156] = v143;
              v150 = (__int64)&v152[v156 + -8 * v153];
              v410 = v156 + 8 * v155;
              v411 = (__int64***)&v152[v156 + 8];
              memcpy(v150, v409, v152);
              if (v409 != 0) {
                v157 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v157 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v157);
              }
              v68 = v421;
            }
            else {
              *v411 = v143;
              v150 = v409;
              ++v411;
            }
            v158 = (*(__int64 (**)(__int64, long double))(
                *(_QWORD*)v95 + 328LL))(v95, *(long double*)&v148);
            v159 = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 336LL))(v95);
            if (*(_QWORD*)(*(_QWORD*)(v137 + 128) + 128LL) != 0) {
              v80 = v416 - v393;
              v409 = v150;
            }
            else {
              v404 = v150;
              v160 = v159;
              v161 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 184, 16, 0);
              v161[1] = 0;
              v161[2] = 0;
              v162 = v161;
              v161[4] = 0;
              v161[5] = 0;
              v161[6] = 0;
              v161[7] = 0;
              v161[8] = 0;
              v161[9] = 0;
              v161[10] = 0;
              v161[11] = 0;
              *v161 = GameData_210a2e0;
              v403 = (atomic_ullong*)(v161 + 1);
              v161[12] = 0;
              v161[13] = 0;
              v161[14] = 0;
              v161[15] = 0;
              v163 = GameData_2130170[0] + 2;
              *((_DWORD*)v161 + 14) = 1098907648;
              *((_DWORD*)v161 + 24) = 1098907648;
              v161[3] = v163;
              v164 = (__int64**)(v161 + 3);
              v165 = GameData_2130168[0];
              v161[15] = 0;
              v161[16] = 0;
              v161[16] = 0;
              v161[17] = 0;
              v161[17] = 0;
              v161[18] = 0;
              v161[18] = 0;
              v161[19] = 0;
              v161[19] = 0;
              v161[20] = 0;
              v161[20] = 0;
              v161[21] = 0;
              v161[21] = 0;
              v161[22] = 0;
              *((_WORD*)v161 + 88) = 0;
              v161[8] = v165 + 2;
              *((_DWORD*)v161 + 26) = 1065353216;
              *((_DWORD*)v161 + 28) = 1065353216;
              v166 = *(_QWORD*)(v68 + 48);
              v458 = *(_QWORD*)(v68 + 40);
              v459 = v166;
              if (v166 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v166 + 16),
                                          1u, memory_order_relaxed);
                v163 = *v164;
              }
              ((void (*)(_QWORD*, __int64*, _QWORD))v163[2])(v161 + 3, &v458,
                                                             v447);
              if (v459 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v459);
              }
              v167 = *(_QWORD*)(v68 + 48);
              v456 = *(_QWORD*)(v68 + 40);
              v457 = v167;
              if (v167 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 16),
                                          1u, memory_order_relaxed);
              }
              v168 = v160 - v396;
              v169 = v158 - v393;
              ((void (*)(__int64**, __int64*, _QWORD, unsigned int*, float,
                         float, double))(*v164)[7])(
                  v164, &v456, *(_QWORD*)(v137 + 128), &v447,
                  v82 + (float)((float)v169 * -0x1.0000000000000p+4),
                  v82 + (float)((float)(v395 - v168) * -0x1.0000000000000p+4),
                  0.0);
              if (v457 != 0) {
                *(__n128*)&v170 =
                    std___1___shared_weak_count___release_weak_alt1(v457);
              }
              v454 = v164;
              v455 = v162;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v162 + 2), 1u,
                                        memory_order_relaxed);
              MapChip_19fc0b0(v68 + 80, &v454, v170);
              *(__n128*)&v171 =
                  std___1___shared_weak_count___release_weak_alt1(v162);
              *((float*)v162 + 40) =
                  v82 + (float)((float)v169 * -0x1.0000000000000p+4);
              *((float*)v162 + 41) =
                  v82 + (float)((float)(v395 - v168) * -0x1.0000000000000p+4);
              v172 = *(_QWORD*)(v137 + 128);
              *((_DWORD*)v162 + 42) = v169;
              *((_DWORD*)v162 + 43) = v168;
              v162[18] = v172;
              v162[19] = 0;
              v173 = *(_QWORD*)(v68 + 48);
              v452 = *(_QWORD*)(v68 + 40);
              v453 = v173;
              if (v173 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v173 + 16),
                                          1u, memory_order_relaxed);
              }
              ((void (*)(__int64**, __int64*, long double))(*v164)[6])(
                  v164, &v452, v171);
              v149 = v453;
              v80 = v416 - v393;
              if (v453 != 0) {
                v148 = std___1___shared_weak_count___release_weak_alt1(v453);
              }
              if ((unsigned __int64)v411 >= v410) {
                v174 = (char*)v411 - v404;
                v175 = ((__int64)v411 - v404) >> 3;
                v176 = v175 + 1;
                if ((unsigned __int64)(v175 + 1) >> 61 != 0) {
                LABEL_616:
                  GameRoutine_18ece80(*(long double*)&v148);
                }
                if ((__int64)(v410 - v404) >> 2 > v176) {
                  v176 = (__int64)(v410 - v404) >> 2;
                }
                if (v410 - v404 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v177 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v177 = v176;
                }
                if (v177 != 0) {
                  if (v177 >> 61 != 0) {
                  LABEL_617:
                    GameRoutine_60a210(v149);
                  }
                  v178 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v177, 16, 0);
                }
                else {
                  v178 = 0;
                }
                *(_QWORD*)&v174[v178] = v164;
                v410 = v178 + 8 * v177;
                v411 = (__int64***)&v174[v178 + 8];
                v409 = (__int64)&v174[v178 + -8 * v175];
                memcpy(v409, v404, v174);
                if (v404 != 0) {
                  v179 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v179 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v179);
                }
                v68 = v421;
                v80 = v416 - v393;
              }
              else {
                *v411++ = v164;
                v409 = v404;
              }
              if (atomic_fetch_add(v403, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v162 + 16LL))(
                    v162, *(long double*)&v148);
                v148 = std___1___shared_weak_count___release_weak_alt1(v162);
              }
            }
            if (atomic_fetch_add(v408, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(_QWORD*, long double))(*v139 + 16LL))(
                  v139, *(long double*)&v148);
              std___1___shared_weak_count___release_weak_alt1(v139);
            }
          }
          else {
            v80 = v416 - v393;
          }
        LABEL_231:
          v180 = v413 + v87;
          if ((unsigned __int64)(v414 + v87) >= 0x400) {
            v181 = 0;
          }
          else {
            v181 = (unsigned int)(v414 + v87);
          }
          v182 = v416 + v87;
          v183 = *(_QWORD*)(v424 + 32);
          v184 = v183 + 8;
          v185 = *(unsigned __int16*)(v183 + 8 + 2 * v181);
          v186 = *(_QWORD*)(*GameData_212c930 + 64);
          v187 = *(_QWORD*)(v186 + 8 * v185);
          if (v187 != 0) {
            if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
                    (unsigned int)(unsigned __int8)(v180 -
                                                    *(_BYTE*)(*GameData_212ce98
                                                                  [0] +
                                                              16)) ||
                *(unsigned __int8*)(*GameData_212ce98[0] + 19) <=
                    (unsigned int)(unsigned __int8)(v412 -
                                                    *(_BYTE*)(*GameData_212ce98
                                                                  [0] +
                                                              17))) {
              goto LABEL_100;
            }
            v188 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
            v189 = *(_BYTE*)(*GameData_212ce90[0] + v188 + 16) == 1
                       ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                       : 0LL;
            if (((*(_DWORD*)(*(_QWORD*)(v424 + 160) + (v189 << 7) +
                             4LL * (v422 >> 5) + 8) >>
                  v182) &
                 1) == 0) {
              goto LABEL_100;
            }
            if ((*(_BYTE*)(v187 + 217) & 8) != 0) {
              v190 = v394 + v87;
              if (((v394 + (_DWORD)v87) | v412) > 0x1F) {
                v191 = v400;
                v192 = v401;
                v194 = 0;
              }
              else {
                v191 = v400;
                v192 = v401;
                v193 = *(
                    _QWORD*)(v186 +
                             8LL *
                                 *(unsigned __int16*)(v184 +
                                                      2LL *
                                                          (unsigned int)(v399 +
                                                                         v87)));
                if (v193 != 0) {
                  LOBYTE(v188) = (*(_BYTE*)(v193 + 217) & 8) != 0;
                }
                v194 = (v193 != 0) & (unsigned __int8)v188;
              }
              v195 = v416 + v87 + 1;
              if ((v195 | v412) > 0x1F) {
                v197 = 0;
              }
              else {
                v196 =
                    *(_QWORD*)(v186 + 8LL * *(unsigned __int16*)(v183 + v86));
                if (v196 != 0) {
                  LOBYTE(v85) = (*(_BYTE*)(v196 + 217) & 8) != 0;
                }
                if (((v196 != 0) & (unsigned __int8)v85) != 0) {
                  v197 = 4;
                }
                else {
                  v197 = 0;
                }
              }
              if ((v191 | v182) > 0x1F) {
                v85 = 0;
              }
              else {
                v198 =
                    *(_QWORD*)(v186 + 8LL * *(unsigned __int16*)(v183 + v402 +
                                                                 2 * v87 + 8));
                if (v198 != 0) {
                  LOBYTE(v78) = (*(_BYTE*)(v198 + 217) & 8) != 0;
                }
                if (((v198 != 0) & (unsigned __int8)v78) != 0) {
                  v85 = 2;
                }
                else {
                  v85 = 0;
                }
              }
              if ((v182 | v192) > 0x1F) {
                v78 = 0;
              }
              else {
                v199 = *(_QWORD*)(v186 +
                                  8LL * *(unsigned __int16*)(v183 + v86 + 62));
                if (v199 != 0) {
                  LOBYTE(v79) = (*(_BYTE*)(v199 + 217) & 8) != 0;
                }
                if (((v199 != 0) & (unsigned __int8)v79) != 0) {
                  v78 = 8;
                }
                else {
                  v78 = 0;
                }
              }
              if ((v190 | v191) > 0x1F) {
                v79 = 0;
              }
              else {
                v200 = *(
                    _QWORD*)(v186 +
                             8LL *
                                 *(unsigned __int16*)(v184 +
                                                      2LL *
                                                          (unsigned int)(v398 +
                                                                         v87)));
                if (v200 != 0) {
                  LOBYTE(v1) = (*(_BYTE*)(v200 + 217) & 8) != 0;
                }
                v79 = (v200 != 0) & (unsigned __int8)v1;
              }
              if ((v191 | v195) > 0x1F) {
                v1 = 0;
              }
              else {
                v201 =
                    *(_QWORD*)(v186 + 8LL * *(unsigned __int16*)(v183 + v402 +
                                                                 2 * v87 + 10));
                if (v201 != 0) {
                  LOBYTE(v191) = (*(_BYTE*)(v201 + 217) & 8) != 0;
                }
                if (((v201 != 0) & (unsigned __int8)v191) != 0) {
                  v1 = 2;
                }
                else {
                  v1 = 0;
                }
              }
              v202 = v195 | v192;
              if (v202 > 0x1F) {
                v204 = 0;
              }
              else {
                v203 = *(_QWORD*)(v186 +
                                  8LL * *(unsigned __int16*)(v183 + v86 + 64));
                if (v203 != 0) {
                  LOBYTE(v202) = (*(_BYTE*)(v203 + 217) & 8) != 0;
                }
                if (((v203 != 0) & (unsigned __int8)v202) != 0) {
                  v204 = 4;
                }
                else {
                  v204 = 0;
                }
              }
              if ((v190 | v192) > 0x1F) {
                v206 = 0;
              }
              else {
                v205 = *(
                    _QWORD*)(v186 +
                             8LL *
                                 *(unsigned __int16*)(v184 +
                                                      2LL *
                                                          (unsigned int)(v419 +
                                                                         v87 +
                                                                         31)));
                if (v205 != 0) {
                  LOBYTE(v186) = (*(_BYTE*)(v205 + 217) & 8) != 0;
                }
                if (((v205 != 0) & (unsigned __int8)v186) != 0) {
                  v206 = 8;
                }
                else {
                  v206 = 0;
                }
              }
              v207 = 7;
              v208 = 0.0;
              switch (v197 | v194 | v85 | v78) {
              case 0:
                goto LABEL_317;
              case 1:
                v207 = 6;
                goto LABEL_310;
              case 2:
                v207 = 6;
                goto LABEL_317;
              case 3:
                v207 = 4;
                goto LABEL_317;
              case 4:
                v207 = 6;
                goto LABEL_312;
              case 5:
                v207 = 5;
                goto LABEL_310;
              case 6:
                v207 = 4;
                goto LABEL_312;
              case 7:
                v207 = 3;
              LABEL_312:
                v210 = 1132920832;
                goto LABEL_316;
              case 8:
                v207 = 6;
                goto LABEL_315;
              case 9:
                v207 = 4;
                goto LABEL_310;
              case 0xA:
                v207 = 5;
                goto LABEL_317;
              case 0xB:
                v207 = 3;
                goto LABEL_317;
              case 0xC:
                v207 = 4;
                goto LABEL_315;
              case 0xD:
                v207 = 3;
              LABEL_310:
                v210 = 1119092736;
                goto LABEL_316;
              case 0xE:
                v207 = 3;
              LABEL_315:
                v210 = 1127481344;
              LABEL_316:
                v208 = *(float*)&v210;
                goto LABEL_317;
              case 0xF:
                v80 = v416 - v393;
                v209 = (v1 | v79 | v204 | v206) - 7;
                if (v209 > 7 || ((0xD1u >> v209) & 1) == 0) {
                  break;
                }
                v207 = 1;
                v208 = GameData_1b01608[v209];
              LABEL_317:
                v211 = (_QWORD*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                v211[1] = 0;
                v211[2] = 0;
                v212 = v211;
                *v211 = GameData_210a330;
                v213 = GameData_2130180[0];
                v211[6] = 0;
                v211[7] = 0x141800000LL;
                v211[4] = 0;
                v211[5] = 0;
                v214 = *(_QWORD*)(v68 + 48);
                v215 = v213 + 2;
                v450 = *(_QWORD*)(v68 + 40);
                v451 = v214;
                v211[3] = v215;
                v216 = (__int64**)(v211 + 3);
                if (v214 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v214 + 16), 1u,
                      memory_order_relaxed);
                  v215 = *v216;
                }
                ((void (*)(_QWORD*, __int64*, _QWORD))v215[2])(v211 + 3, &v450,
                                                               v447);
                if (v451 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v451);
                }
                v218 = *(__int64***)(v68 + 40);
                v217 = *(_QWORD*)(v68 + 48);
                *((_DWORD*)v212 + 15) = v207;
                v448 = v218;
                v449 = (_QWORD*)v217;
                if (v217 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v217 + 16), 1u,
                      memory_order_relaxed);
                }
                ((void (*)(__int64**, __int64***, __int64, unsigned int*, float,
                           float, float))(*v216)[7])(v216, &v448, v187, &v447,
                                                     v90, v88, v208);
                if (v449 != nullptr) {
                  *(__n128*)&v219 =
                      std___1___shared_weak_count___release_weak_alt1(v449);
                }
                v446[0] = v216;
                v446[1] = v212;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v212 + 2),
                                          1u, memory_order_relaxed);
                MapChip_19fc0b0(v68 + 80, v446, v219);
                *(__n128*)&v220 =
                    std___1___shared_weak_count___release_weak_alt1(v212);
                v80 = v416 - v393;
                if (atomic_fetch_add((atomic_ullong* volatile)(v212 + 1),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(_QWORD*, long double))(*v212 + 16LL))(v212,
                                                                     v220);
                  std___1___shared_weak_count___release_weak_alt1(v212);
                }
                break;
              default:
                abort();
              }
            }
          }
          v221 = *(_QWORD*)(v427 + 16);
          v222 = *(__int16*)(v221 + 2 * v92 + 2152);
          if ((v222 & 0x8000000000000000LL) == 0) {
            v223 = *(_QWORD*)(v221 + 8);
            if (v223 != 0) {
              v224 = v223 + 144LL * (int)v222;
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v224 + 272LL))(v224) &
                   1) != 0 &&
                  *(unsigned __int8*)(*GameData_212ce98[0] + 18) >
                      (unsigned int)(unsigned __int8)(v180 -
                                                      *(_BYTE*)(*GameData_212ce98
                                                                    [0] +
                                                                16)) &&
                  *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
                      (unsigned int)(unsigned __int8)(v412 -
                                                      *(_BYTE*)(*GameData_212ce98
                                                                    [0] +
                                                                17))) {
                v225 =
                    *(_BYTE*)(*GameData_212ce90[0] +
                              *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                              16) == 1
                        ? *(unsigned __int8*)(*GameData_212ce90[0] + 24)
                        : 0LL;
                if (((*(_DWORD*)(*(_QWORD*)(v424 + 160) + (v225 << 7) +
                                 4LL * (v422 >> 5) + 8) >>
                      v182) &
                     1) != 0) {
                  v226 =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v224 + 224LL))(v224);
                  if (v226 != 0 && *(_BYTE*)(v226 + 57) == 10) {
                    v227 = v226;
                    v228 = (_QWORD*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
                    v228[1] = 0;
                    v228[2] = 0;
                    v229 = v228;
                    *v228 = GameData_210a380;
                    v230 = GameData_2130158[0];
                    v228[6] = 0;
                    v228[7] = 0;
                    *((_DWORD*)v228 + 14) = 1098907648;
                    v228[4] = 0;
                    v228[5] = 0;
                    v231 = *(_QWORD*)(v68 + 48);
                    v232 = v230 + 2;
                    v444 = *(_QWORD*)(v68 + 40);
                    v445 = v231;
                    v228[3] = v232;
                    v233 = (__int64**)(v228 + 3);
                    if (v231 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v231 + 16), 1u,
                          memory_order_relaxed);
                      v232 = *v233;
                    }
                    ((void (*)(_QWORD*, __int64*, _QWORD))v232[2])(v228 + 3,
                                                                   &v444, v447);
                    if (v445 != 0) {
                      std___1___shared_weak_count___release_weak_alt1(v445);
                    }
                    v234 = *(_QWORD*)(v68 + 48);
                    v442 = *(_QWORD*)(v68 + 40);
                    v443 = v234;
                    if (v234 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v234 + 16), 1u,
                          memory_order_relaxed);
                    }
                    ((void (*)(__int64**, __int64*, __int64, unsigned int*,
                               float, float, double))(*v233)[7])(
                        v233, &v442, v227, &v447, v90, v88, 0.0);
                    if (v443 != 0) {
                      *(__n128*)&v235 =
                          std___1___shared_weak_count___release_weak_alt1(v443);
                    }
                    v236 = *(_QWORD*)(v68 + 48);
                    v441[0] = *(_QWORD*)(v68 + 40);
                    v441[1] = v236;
                    if (v236 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v236 + 16), 1u,
                          memory_order_relaxed);
                      GameRoutine_1125f00(v233, v441, v224, v235);
                      *(__n128*)&v237 =
                          std___1___shared_weak_count___release_weak_alt1(v236);
                    }
                    else {
                      GameRoutine_1125f00(v233, v441, v224, v235);
                    }
                    v440[0] = v233;
                    v440[1] = v229;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v229 + 2), 1u,
                        memory_order_relaxed);
                    MapChip_19fc0b0(v68 + 80, v440, v237);
                    *(__n128*)&v238 =
                        std___1___shared_weak_count___release_weak_alt1(v229);
                    v80 = v416 - v393;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v229 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(_QWORD*, long double))(*v229 + 16LL))(v229,
                                                                         v238);
                      std___1___shared_weak_count___release_weak_alt1(v229);
                    }
                  }
                }
              }
            }
          }
        LABEL_100:
          --v87;
          v86 -= 2LL;
        } while (v80 + v87 + 1 > 0);
        v81 = v407 + 1;
        v84 = v392 + 32;
        v86 = v391 + 64;
        v419 += 32;
        v414 += 32;
        v398 += 32;
        v399 += 32;
        if (v407 + 1 == v395 + 1) {
          if ((__int64***)v409 != v411) {
            v239 = (__int64***)v409;
            do {
              v240 = (__int64***)v409;
              do {
                v241 = *v239;
                v242 = *v240;
                if (*v239 != *v240) {
                  v243 = v241[15];
                  if (*v243 != 0 && (__int64*)v243[16] == v242[15] &&
                      v241[14] == nullptr && v242[14] == nullptr) {
                    v241[14] = (__int64*)v242;
                    v242[14] = (__int64*)v241;
                    v241[12] = v241[17];
                    *((_DWORD*)v241 + 26) = (unsigned int)v242[17];
                    *((_DWORD*)v241 + 27) = *((_DWORD*)v242 + 35);
                    v242[12] = v242[17];
                    *((_DWORD*)v242 + 26) = (unsigned int)v241[17];
                    *((_DWORD*)v242 + 27) = *((_DWORD*)v241 + 35);
                  }
                }
                ++v240;
              } while (v240 != v411);
              ++v239;
            } while (v239 != v411);
          }
          if (v409 != 0) {
            v244 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v244 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v244);
          }
          break;
        }
      }
    }
  }
  v245 = *(_QWORD*)(v68 + 48);
  v433 = *(__int64**)(v68 + 40);
  v434 = v245;
  if (v245 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v245 + 16), 1u,
                              memory_order_relaxed);
  }
  MapChip_19fc2e0(v68 + 104, &v433);
  if (v434 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v434);
  }
  v246 = 0x1.0000000000000p+0;
  v247 = *GameData_212ce98[0];
  v249 = *(_QWORD*)(v421 + 40);
  v248 = *(_QWORD*)(v421 + 48);
  v250 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
  v428 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v425 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  if (*(_DWORD*)(v421 + 224) == 2) {
    v251 = 0x1.0000000000000p+0;
  }
  else {
    v251 = 0x1.3333340000000p-1;
  }
  if (v248 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v248 + 16), 1u,
                              memory_order_relaxed);
  }
  v252 = std___1___shared_weak_count_lock(v248);
  v253 = ui_LayoutAccessor_FindPane(v249, "N_Map");
  if (v253 != 0) {
    v254 = Pane_58fac0(v253, "MapMargin");
    v255 = GameData_212ce90[0];
    if (v254 != 0) {
      v246 = (float)*(int*)(v254 + *(unsigned int*)(v254 + 4));
    }
  }
  else {
    v255 = GameData_212ce90[0];
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v252 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v252 + 16LL))(v252);
    std___1___shared_weak_count___release_weak_alt1(v252);
  }
  v256 = v246 / v251;
  v257 = std___1___shared_weak_count___release_weak_alt1(v248);
  LODWORD(v446[0]) = 0;
  v258 = 0;
  v259 = (_DWORD*)game_g_shared_system_skills_ptr;
  v417 = GameData_21301c8[0] + 2;
  v420 = v250;
  v415 = GameData_21301d8[0] + 2;
  do {
    v260 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 24 * v258 + 556000);
    if (v260 != 0) {
      while (1) {
        v261 = (unsigned int)*(char*)(v260 + 584);
        v262 = (unsigned int)*(char*)(v260 + 585);
        v263 = *(unsigned __int8*)(*v255 + 24);
        v264 = *(unsigned __int8*)(*v255 + v263 + 16);
        LOBYTE(v444) = 0;
        v438[2] = &v444;
        v439 = v438;
        v265 = v264 == 1 ? (unsigned int)v263 : 0LL;
        v266 = *(_QWORD*)(v247 + 160) + (v265 << 7) + 8;
        v438[0] = GameData_1f94310;
        v438[1] = v266;
        Unit_6c8a80(v260, v261, v262, v438, *(long double*)&v257);
        if (v439 == v438) {
          break;
        }
        if (v439 != nullptr) {
          v267 = 40;
        LABEL_393:
          (*(void (**)(__int64))(*v439 + v267))((__int64)v439);
        }
        if ((unsigned __int8)v444 != 1) {
          goto LABEL_385;
        }
        if ((*(_BYTE*)(v260 + 417) & 0x1C) != 0) {
          goto LABEL_385;
        }
        v268 = *(_QWORD*)(v260 + 440);
        if (v268 == 0) {
          goto LABEL_385;
        }
        v269 = (float)((float)(*(char*)(v260 + 584) - v250) *
                       -0x1.0000000000000p+4) -
               v256;
        LANES128(v257).n128_f32[0] = (float)(v425 - *(char*)(v260 + 585));
        v270 =
            (float)(LANES128(v257).n128_f32[0] * -0x1.0000000000000p+4) - v256;
        if (*(_BYTE*)(v268 + 16) != 0) {
          goto LABEL_424;
        }
        LODWORD(v438[0]) = *v259 & 0xFFF;
        if ((game_HasSkill(v260 + 1744, v438) & 1) != 0) {
          v271 = *(_QWORD*)(v260 + 440);
          v272 = v271 != 0 ? *(_BYTE*)(v271 + 16) : 9;
          v273 = ((1 << v272) & 0xF1) != 0;
        }
        else {
          v273 = false;
        }
        v274 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v275 = (__int64**)(v274 + 3);
        v276 = v274;
        v274[1] = 0;
        v274[2] = 0;
        if (v273) {
          v274[7] = 0;
          v274[8] = 0;
          v274[9] = 0;
          v274[10] = 0;
          v274[5] = 0;
          v274[6] = 0;
          v274[9] = 0;
          v274[10] = 0;
          v274[11] = 0;
          v274[12] = 0;
          v274[11] = 0;
          *((_DWORD*)v274 + 24) = 0;
          *v274 = GameData_210a3d0;
          *((_DWORD*)v274 + 14) = 1098907648;
          v278 = *(_QWORD*)(v421 + 40);
          v277 = *(_QWORD*)(v421 + 48);
          v279 = GameData_21301f0[0] + 2;
          v274[8] = v260;
          v274[3] = v279;
          v274[4] = 0;
          v430 = v278;
          v431 = v277;
          if (v277 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v277 + 16), 1u,
                                      memory_order_relaxed);
            v279 = *v275;
          }
          v259 = (_DWORD*)game_g_shared_system_skills_ptr;
          ((void (*)(_QWORD*, __int64*, _QWORD))v279[2])(v274 + 3, &v430,
                                                         LODWORD(v446[0]));
          if (v431 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v431);
          }
          v280 = *(_QWORD*)(v421 + 48);
          v486 = *(__int64***)(v421 + 40);
          v487 = (_QWORD*)v280;
          if (v280 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v280 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64***, _QWORD*, float, float, double))(
              *v275)[8])(v275, &v486, v446, v269, v270, 0.0);
          if (v487 != nullptr) {
            v281 = std___1___shared_weak_count___release_weak_alt1(v487);
          }
          v282 = v428;
          v283 = v425 - v428 + 1;
          *((float*)v276 + 22) = v256;
          v284 = &v484;
          v484 = v275;
          v485 = v276;
        }
        else {
          v274[7] = 0;
          v274[8] = 0;
          v274[9] = 0;
          v274[10] = 0;
          v274[5] = 0;
          v274[6] = 0;
          v274[9] = 0;
          v274[10] = 0;
          v274[11] = 0;
          v274[12] = 0;
          v274[11] = 0;
          *((_DWORD*)v274 + 24) = 0;
          *v274 = GameData_210a420;
          *((_DWORD*)v274 + 14) = 1098907648;
          v286 = *(_QWORD*)(v421 + 40);
          v285 = *(_QWORD*)(v421 + 48);
          v287 = GameData_21301c0[0] + 2;
          v274[8] = v260;
          v274[3] = v287;
          v274[4] = 0;
          v482 = v286;
          v483 = v285;
          if (v285 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v285 + 16), 1u,
                                      memory_order_relaxed);
            v287 = *v275;
          }
          v259 = (_DWORD*)game_g_shared_system_skills_ptr;
          ((void (*)(_QWORD*, __int64*, _QWORD))v287[2])(v274 + 3, &v482,
                                                         LODWORD(v446[0]));
          if (v483 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v483);
          }
          v288 = *(_QWORD*)(v421 + 48);
          v480 = *(__int64***)(v421 + 40);
          v481 = (_QWORD*)v288;
          if (v288 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v288 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64***, _QWORD*, float, float, double))(
              *v275)[8])(v275, &v480, v446, v269, v270, 0.0);
          if (v481 != nullptr) {
            v281 = std___1___shared_weak_count___release_weak_alt1(v481);
          }
          v282 = v428;
          v283 = v425 - v428 + 1;
          *((float*)v276 + 22) = v256;
          v284 = &v478;
          v478 = v275;
          v479 = v276;
        }
        *((_DWORD*)v276 + 20) = v250;
        *((_DWORD*)v276 + 21) = v282;
        *((_DWORD*)v276 + 23) = v283;
        *((_DWORD*)v276 + 24) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v276 + 2), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0(v421 + 104, v284, *(long double*)&v281);
        v257 = std___1___shared_weak_count___release_weak_alt1(v276);
        add = atomic_fetch_add((atomic_ullong* volatile)(v276 + 1),
                               0xFFFFFFFFFFFFFFFFLL);
        v255 = GameData_212ce90[0];
        if (add != 0) {
        LABEL_424:
          v290 = *(_QWORD*)(v260 + 440);
          if (v290 == 0) {
            goto LABEL_385;
          }
        }
        else {
          (*(void (**)(_QWORD*, long double))(*v276 + 16LL))(
              v276, *(long double*)&v257);
          v257 = std___1___shared_weak_count___release_weak_alt1(v276);
          v290 = *(_QWORD*)(v260 + 440);
          if (v290 == 0) {
            goto LABEL_385;
          }
        }
        if (*(_BYTE*)(v290 + 16) != 1) {
          goto LABEL_446;
        }
        LODWORD(v438[0]) =
            *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v259) &
            0xFFF;
        v291 = v259;
        v292 = game_HasSkill(v260 + 1744, v438);
        v293 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v294 = (__int64**)(v293 + 24);
        v295 = v293;
        *(_QWORD*)(v293 + 8) = 0;
        *(_QWORD*)(v293 + 16) = 0;
        if ((v292 & 1) != 0) {
          *(_QWORD*)(v293 + 56) = 0;
          *(_QWORD*)(v293 + 64) = 0;
          *(_QWORD*)(v293 + 72) = 0;
          *(_QWORD*)(v293 + 80) = 0;
          *(_QWORD*)(v293 + 40) = 0;
          *(_QWORD*)(v293 + 48) = 0;
          *(_QWORD*)(v293 + 72) = 0;
          *(_QWORD*)(v293 + 80) = 0;
          *(_QWORD*)(v293 + 88) = 0;
          *(_QWORD*)(v293 + 96) = 0;
          *(_QWORD*)(v293 + 88) = 0;
          *(_DWORD*)(v293 + 96) = 0;
          *(_QWORD*)v293 = GameData_210a470;
          *(_DWORD*)(v293 + 56) = 1098907648;
          v297 = *(_QWORD*)(v421 + 40);
          v296 = *(_QWORD*)(v421 + 48);
          v298 = GameData_21301d0[0] + 2;
          *(_QWORD*)(v293 + 64) = v260;
          *(_QWORD*)(v293 + 24) = v298;
          *(_QWORD*)(v293 + 32) = 0;
          v476 = v297;
          v477 = v296;
          if (v296 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v296 + 16), 1u,
                                      memory_order_relaxed);
            v298 = *v294;
          }
          v259 = (_DWORD*)game_g_shared_system_skills_ptr;
          v250 = v420;
          ((void (*)(__int64, __int64*, _QWORD))v298[2])(v293 + 24, &v476,
                                                         LODWORD(v446[0]));
          if (v477 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v477);
          }
          v299 = *(_QWORD*)(v421 + 48);
          v474 = *(__int64***)(v421 + 40);
          v475 = (_QWORD*)v299;
          if (v299 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v299 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64***, _QWORD*, float, float, double))(
              *v294)[8])(v294, &v474, v446, v269, v270, 0.0);
          if (v475 != nullptr) {
            v300 = std___1___shared_weak_count___release_weak_alt1(v475);
          }
          v301 = v428;
          v302 = v425 - v428 + 1;
          *(float*)(v295 + 88) = v256;
          v303 = &v472;
          v472 = v294;
          v473 = v295;
        }
        else {
          *(_QWORD*)(v293 + 56) = 0;
          *(_QWORD*)(v293 + 64) = 0;
          *(_QWORD*)(v293 + 72) = 0;
          *(_QWORD*)(v293 + 80) = 0;
          *(_QWORD*)(v293 + 40) = 0;
          *(_QWORD*)(v293 + 48) = 0;
          *(_QWORD*)(v293 + 72) = 0;
          *(_QWORD*)(v293 + 80) = 0;
          *(_QWORD*)(v293 + 88) = 0;
          *(_QWORD*)(v293 + 96) = 0;
          *(_QWORD*)(v293 + 88) = 0;
          *(_DWORD*)(v293 + 96) = 0;
          *(_QWORD*)(v293 + 64) = v260;
          *(_QWORD*)v293 = GameData_210a4c0;
          *(_DWORD*)(v293 + 56) = 1098907648;
          *(_QWORD*)(v293 + 24) = v417;
          *(_QWORD*)(v293 + 32) = 0;
          LODWORD(v438[0]) =
              *(int*)((_BYTE*)((int*)0x24LL) + (_QWORD)v291) & 0xFFF;
          v259 = v291;
          *(_BYTE*)(v293 + 100) = game_HasSkill(v260 + 1744, v438) & 1;
          v304 = *(_QWORD*)(v421 + 48);
          v470 = *(_QWORD*)(v421 + 40);
          v471 = v304;
          if (v304 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v304 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, _QWORD))(*v294)[2])(v294, &v470,
                                                              LODWORD(v446[0]));
          v250 = v420;
          if (v471 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v471);
          }
          v305 = *(_QWORD*)(v421 + 48);
          v468 = *(__int64***)(v421 + 40);
          v469 = (_QWORD*)v305;
          if (v305 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v305 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64***, _QWORD*, float, float, double))(
              *v294)[8])(v294, &v468, v446, v269, v270, 0.0);
          if (v469 != nullptr) {
            v300 = std___1___shared_weak_count___release_weak_alt1(v469);
          }
          v301 = v428;
          v302 = v425 - v428 + 1;
          *(float*)(v295 + 88) = v256;
          v303 = &v466;
          v466 = v294;
          v467 = v295;
        }
        *(_DWORD*)(v295 + 80) = v250;
        *(_DWORD*)(v295 + 84) = v301;
        *(_DWORD*)(v295 + 92) = v302;
        *(_DWORD*)(v295 + 96) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v295 + 16), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0(v421 + 104, v303, *(long double*)&v300);
        v257 = std___1___shared_weak_count___release_weak_alt1(v295);
        v306 = atomic_fetch_add((atomic_ullong* volatile)(v295 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v255 = GameData_212ce90[0];
        if (v306 == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v295 + 16LL))(
              v295, *(long double*)&v257);
          v257 = std___1___shared_weak_count___release_weak_alt1(v295);
          v307 = *(_QWORD*)(v260 + 440);
          if (v307 == 0) {
            goto LABEL_385;
          }
        }
        else {
        LABEL_446:
          v307 = *(_QWORD*)(v260 + 440);
          if (v307 == 0) {
            goto LABEL_385;
          }
        }
        if (*(_BYTE*)(v307 + 16) != 2) {
          goto LABEL_472;
        }
        LODWORD(v438[0]) =
            *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v259) &
            0xFFF;
        v308 = v259;
        v309 = game_HasSkill(v260 + 1744, v438);
        v310 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
        v311 = (__int64**)(v310 + 24);
        v312 = v310;
        *(_QWORD*)(v310 + 8) = 0;
        *(_QWORD*)(v310 + 16) = 0;
        if ((v309 & 1) != 0) {
          *(_QWORD*)(v310 + 56) = 0;
          *(_QWORD*)(v310 + 64) = 0;
          *(_QWORD*)(v310 + 72) = 0;
          *(_QWORD*)(v310 + 80) = 0;
          *(_QWORD*)(v310 + 40) = 0;
          *(_QWORD*)(v310 + 48) = 0;
          *(_QWORD*)(v310 + 72) = 0;
          *(_QWORD*)(v310 + 80) = 0;
          *(_QWORD*)(v310 + 88) = 0;
          *(_QWORD*)(v310 + 96) = 0;
          *(_QWORD*)(v310 + 88) = 0;
          *(_DWORD*)(v310 + 96) = 0;
          *(_QWORD*)v310 = GameData_210a510;
          *(_DWORD*)(v310 + 56) = 1098907648;
          v314 = *(_QWORD*)(v421 + 40);
          v313 = *(_QWORD*)(v421 + 48);
          v315 = GameData_21301e0[0] + 2;
          *(_QWORD*)(v310 + 64) = v260;
          *(_QWORD*)(v310 + 24) = v315;
          *(_QWORD*)(v310 + 32) = 0;
          v464 = v314;
          v465 = v313;
          if (v313 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v313 + 16), 1u,
                                      memory_order_relaxed);
            v315 = *v311;
          }
          v259 = (_DWORD*)game_g_shared_system_skills_ptr;
          v250 = v420;
          ((void (*)(__int64, __int64*, _QWORD))v315[2])(v310 + 24, &v464,
                                                         LODWORD(v446[0]));
          if (v465 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v465);
          }
          v316 = *(_QWORD*)(v421 + 48);
          v462 = *(__int64***)(v421 + 40);
          v463 = (_QWORD*)v316;
          if (v316 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v316 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64***, _QWORD*, float, float, double))(
              *v311)[8])(v311, &v462, v446, v269, v270, 0.0);
          if (v463 != nullptr) {
            v317 = std___1___shared_weak_count___release_weak_alt1(v463);
          }
          v318 = v428;
          v319 = v425 - v428 + 1;
          *(float*)(v312 + 88) = v256;
          v320 = &v460;
          v460 = v311;
          v461 = v312;
        }
        else {
          *(_QWORD*)(v310 + 56) = 0;
          *(_QWORD*)(v310 + 64) = 0;
          *(_QWORD*)(v310 + 72) = 0;
          *(_QWORD*)(v310 + 80) = 0;
          *(_QWORD*)(v310 + 40) = 0;
          *(_QWORD*)(v310 + 48) = 0;
          *(_QWORD*)(v310 + 72) = 0;
          *(_QWORD*)(v310 + 80) = 0;
          *(_QWORD*)(v310 + 88) = 0;
          *(_QWORD*)(v310 + 96) = 0;
          *(_QWORD*)(v310 + 88) = 0;
          *(_DWORD*)(v310 + 96) = 0;
          *(_QWORD*)(v310 + 64) = v260;
          *(_QWORD*)v310 = GameData_210a560;
          *(_DWORD*)(v310 + 56) = 1098907648;
          *(_QWORD*)(v310 + 24) = v415;
          *(_QWORD*)(v310 + 32) = 0;
          LODWORD(v438[0]) =
              *(int*)((_BYTE*)((int*)0x24LL) + (_QWORD)v308) & 0xFFF;
          v259 = v308;
          *(_BYTE*)(v310 + 100) = game_HasSkill(v260 + 1744, v438) & 1;
          v321 = *(_QWORD*)(v421 + 48);
          v458 = *(_QWORD*)(v421 + 40);
          v459 = v321;
          if (v321 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v321 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, _QWORD))(*v311)[2])(v311, &v458,
                                                              LODWORD(v446[0]));
          v250 = v420;
          if (v459 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v459);
          }
          v322 = *(_QWORD*)(v421 + 48);
          v456 = *(_QWORD*)(v421 + 40);
          v457 = v322;
          if (v322 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v322 + 16), 1u,
                                      memory_order_relaxed);
          }
          ((void (*)(__int64**, __int64*, _QWORD*, float, float, double))(
              *v311)[8])(v311, &v456, v446, v269, v270, 0.0);
          if (v457 != 0) {
            v317 = std___1___shared_weak_count___release_weak_alt1(v457);
          }
          v318 = v428;
          v319 = v425 - v428 + 1;
          *(float*)(v312 + 88) = v256;
          v320 = &v454;
          v454 = v311;
          v455 = (_QWORD*)v312;
        }
        *(_DWORD*)(v312 + 80) = v250;
        *(_DWORD*)(v312 + 84) = v318;
        *(_DWORD*)(v312 + 92) = v319;
        *(_DWORD*)(v312 + 96) = 1098907648;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v312 + 16), 1u,
                                  memory_order_relaxed);
        MapChip_19fc0b0(v421 + 104, v320, *(long double*)&v317);
        v257 = std___1___shared_weak_count___release_weak_alt1(v312);
        v323 = atomic_fetch_add((atomic_ullong* volatile)(v312 + 8),
                                0xFFFFFFFFFFFFFFFFLL);
        v255 = GameData_212ce90[0];
        if (v323 == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v312 + 16LL))(
              v312, *(long double*)&v257);
          v257 = std___1___shared_weak_count___release_weak_alt1(v312);
          v324 = *(_QWORD*)(v260 + 440);
          if (v324 != 0) {
          LABEL_473:
            if (*(_BYTE*)(v324 + 16) == 3) {
              v325 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
              v325[1] = 0;
              v325[2] = 0;
              v326 = v325;
              *v325 = GameData_210a5b0;
              v327 = GameData_21301e8[0];
              v325[6] = 0;
              v325[7] = 0;
              *((_DWORD*)v325 + 14) = 1098907648;
              v325[11] = 0;
              v325[12] = 0;
              v325[4] = 0;
              v325[5] = 0;
              v329 = *(_QWORD*)(v421 + 40);
              v328 = *(_QWORD*)(v421 + 48);
              v330 = v327 + 2;
              v325[9] = 0;
              v325[10] = 0;
              *((_DWORD*)v325 + 24) = 0;
              v325[8] = v260;
              v325[3] = v330;
              v331 = (__int64**)(v325 + 3);
              v452 = v329;
              v453 = v328;
              if (v328 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v328 + 16),
                                          1u, memory_order_relaxed);
                v330 = *v331;
              }
              ((void (*)(_QWORD*, __int64*, _QWORD))v330[2])(v325 + 3, &v452,
                                                             LODWORD(v446[0]));
              if (v453 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v453);
              }
              v332 = *(_QWORD*)(v421 + 48);
              v450 = *(_QWORD*)(v421 + 40);
              v451 = v332;
              if (v332 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v332 + 16),
                                          1u, memory_order_relaxed);
              }
              ((void (*)(__int64**, __int64*, _QWORD*, float, float, double))(
                  *v331)[8])(v331, &v450, v446, v269, v270, 0.0);
              if (v451 != 0) {
                *(__n128*)&v333 =
                    std___1___shared_weak_count___release_weak_alt1(v451);
              }
              *((float*)v326 + 22) = v256;
              v448 = v331;
              v449 = v326;
              *((_DWORD*)v326 + 20) = v250;
              *((_DWORD*)v326 + 21) = v428;
              *((_DWORD*)v326 + 23) = v425 - v428 + 1;
              *((_DWORD*)v326 + 24) = 1098907648;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v326 + 2), 1u,
                                        memory_order_relaxed);
              MapChip_19fc0b0(v421 + 104, &v448, v333);
              v257 = std___1___shared_weak_count___release_weak_alt1(v326);
              v334 = atomic_fetch_add((atomic_ullong* volatile)(v326 + 1),
                                      0xFFFFFFFFFFFFFFFFLL);
              v255 = GameData_212ce90[0];
              if (v334 == 0) {
                (*(void (**)(_QWORD*, long double))(*v326 + 16LL))(
                    v326, *(long double*)&v257);
                v257 = std___1___shared_weak_count___release_weak_alt1(v326);
              }
            }
          }
        }
        else {
        LABEL_472:
          v324 = *(_QWORD*)(v260 + 440);
          if (v324 != 0) {
            goto LABEL_473;
          }
        }
      LABEL_385:
        v260 = *(_QWORD*)(v260 + 432);
        if (v260 == 0) {
          goto LABEL_382;
        }
      }
      v267 = 32;
      goto LABEL_393;
    }
  LABEL_382:
    ++v258;
  } while (v258 != 4);
  v335 = *(unsigned __int8*)(*GameData_212ce98[0] + 30) -
         *(unsigned __int8*)(*GameData_212ce98[0] + 28) + 1;
  v336 = v335 + v335 * (*(unsigned __int8*)(*GameData_212ce98[0] + 31) -
                        *(unsigned __int8*)(*GameData_212ce98[0] + 29));
  v337 = *(void (****)(_QWORD, long double))(v421 + 128);
  v429 = v421 + 128;
  v338 = *(void (****)(_QWORD, long double))(v421 + 136);
  if (v337 != v338) {
    v339 = v338 - 5;
    v340 = v338 - 5;
    do {
      v341 = *v340;
      v340 -= 5;
      (*v341)(v339, *(long double*)&v257);
      v23 = v339 == v337;
      v339 = v340;
    } while (!v23);
  }
  *(_QWORD*)(v421 + 136) = v337;
  if (v336 < 1) {
    goto LABEL_528;
  }
  sprintf(v438, "L_Move%d", 0);
  LayoutAccessor_1560070((void*)(&v433), *(_QWORD*)(v421 + 40), v438);
  if (v434 == 0) {
    goto LABEL_527;
  }
  v342 = std___1___shared_weak_count_lock(v434);
  v344 = v433;
  if (v434 != 0) {
    *(__n128*)&v343 = std___1___shared_weak_count___release_weak_alt1(v434);
  }
  if (v342 == 0 || v344 == nullptr) {
    if (v342 == 0) {
    LABEL_527:
      if (v336 == 1) {
        goto LABEL_528;
      }
      goto LABEL_552;
    }
    goto LABEL_526;
  }
  v345 = strlen(v438);
  if (v345 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_618;
  }
  v346 = v345;
  if (v345 >= 0x17) {
    if ((v345 | 7) == 0x17) {
      v348 = 26;
    }
    else {
      v348 = (v345 | 7) + 1;
    }
    v347 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v348, 16, 0);
    v431 = v346;
    v432 = v347;
    v430 = v348 | 1;
  }
  else {
    v347 = (char*)&v430 + 1;
    LOBYTE(v430) = 2 * v345;
    if (v345 == 0) {
      goto LABEL_507;
    }
  }
  memcpy(v347, v438, v346);
LABEL_507:
  v347[v346] = 0;
  v349 = GameData_2130190[0];
  v350 = v430;
  v433 = GameData_2130190[0] + 2;
  if ((v430 & 1) != 0) {
    fw_text_String_CopyTerminated(&v434, v432, v431);
  }
  else {
    v434 = v430;
    v435 = v431;
    v436 = v432;
  }
  v437 = 1098907648;
  v351 = *(_QWORD*)(v421 + 136);
  if (v351 >= *(_QWORD*)(v421 + 144)) {
    v355 = GameRoutine_18ecc60(v429, &v433);
  }
  else {
    *(_QWORD*)v351 = v349 + 2;
    v352 = (__int64*)(v351 + 8);
    if ((v434 & 1) != 0) {
      fw_text_String_CopyTerminated(v352, v436, v435);
    }
    else {
      v353 = v434;
      v354 = v436;
      *(_QWORD*)(v351 + 16) = v435;
      *(_QWORD*)(v351 + 24) = v354;
      *v352 = v353;
    }
    LODWORD(v343) = v437;
    v355 = v351 + 40;
    *(_DWORD*)(v351 + 32) = v437;
  }
  *(_QWORD*)(v421 + 136) = v355;
  v433 = v349 + 2;
  if ((v434 & 1) != 0 && v436 != nullptr) {
    v356 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v356 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v356);
  }
  if ((v350 & 1) != 0 && v432 != nullptr) {
    v357 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v357 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v357);
  }
LABEL_526:
  if (atomic_fetch_add((atomic_ullong* volatile)(v342 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_527;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v342 + 16LL))(v342, v343);
  std___1___shared_weak_count___release_weak_alt1(v342);
  if (v336 != 1) {
  LABEL_552:
    v369 = 1;
    if ((unsigned int)v336 >= 0x400) {
      v370 = 1024;
    }
    else {
      v370 = v336;
    }
    v371 = GameData_2130190[0] + 2;
    do {
      sprintf(v438, "L_Move%d", v369);
      LayoutAccessor_1560520(*(_QWORD*)(v421 + 40), "L_Move0", "N_Move", v438);
      LayoutAccessor_1560070((void*)(&v433), *(_QWORD*)(v421 + 40), v438);
      if (v434 != 0) {
        v372 = std___1___shared_weak_count_lock(v434);
        v374 = v433;
        if (v434 != 0) {
          *(__n128*)&v373 =
              std___1___shared_weak_count___release_weak_alt1(v434);
        }
        if (v372 != 0 && v374 != nullptr) {
          v345 = strlen(v438);
          if (v345 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_618;
          }
          v375 = v345;
          if (v345 >= 0x17) {
            if ((v345 | 7) == 0x17) {
              v377 = 26;
            }
            else {
              v377 = (v345 | 7) + 1;
            }
            v376 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v377, 16, 0);
            v431 = v375;
            v432 = v376;
            v430 = v377 | 1;
          }
          else {
            v376 = (char*)&v430 + 1;
            LOBYTE(v430) = 2 * v345;
            if (v345 == 0) {
              goto LABEL_573;
            }
          }
          memcpy(v376, v438, v375);
        LABEL_573:
          v376[v375] = 0;
          v433 = v371;
          v378 = v430;
          if ((v430 & 1) != 0) {
            fw_text_String_CopyTerminated(&v434, v432, v431);
          }
          else {
            v434 = v430;
            v435 = v431;
            v436 = v432;
          }
          v437 = 1098907648;
          v379 = *(_QWORD*)(v421 + 136);
          if (v379 >= *(_QWORD*)(v421 + 144)) {
            v383 = GameRoutine_18ecc60(v429, &v433);
          }
          else {
            *(_QWORD*)v379 = GameData_2130190[0] + 2;
            v380 = (__int64*)(v379 + 8);
            if ((v434 & 1) != 0) {
              fw_text_String_CopyTerminated(v380, v436, v435);
            }
            else {
              v381 = v434;
              v382 = v436;
              *(_QWORD*)(v379 + 16) = v435;
              *(_QWORD*)(v379 + 24) = v382;
              *v380 = v381;
            }
            LODWORD(v373) = v437;
            v383 = v379 + 40;
            *(_DWORD*)(v379 + 32) = v437;
          }
          *(_QWORD*)(v421 + 136) = v383;
          v433 = GameData_2130190[0] + 2;
          if ((v434 & 1) != 0 && v436 != nullptr) {
            v384 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v384 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v384);
          }
          if ((v378 & 1) != 0 && v432 != nullptr) {
            v385 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v385 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v385);
          }
        LABEL_592:
          if (atomic_fetch_add((atomic_ullong* volatile)(v372 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v372 + 16LL))(v372,
                                                                        v373);
            std___1___shared_weak_count___release_weak_alt1(v372);
          }
          goto LABEL_556;
        }
        if (v372 != 0) {
          goto LABEL_592;
        }
      }
    LABEL_556:
      ++v369;
    } while (v370 != v369);
  }
LABEL_528:
  strcpy((char*)v438, "L_Cursor");
  LayoutAccessor_1560070((void*)(&v433), *(_QWORD*)(v421 + 40), v438);
  if (v434 == 0) {
    return;
  }
  v358 = std___1___shared_weak_count_lock(v434);
  v360 = v433;
  if (v434 != 0) {
    *(__n128*)&v359 = std___1___shared_weak_count___release_weak_alt1(v434);
  }
  if (v358 == 0 || v360 == nullptr) {
    if (v358 == 0) {
      return;
    }
    goto LABEL_613;
  }
  v345 = strlen(v438);
  if (v345 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_618:
    String_60a1d0(v345);
  }
  v362 = v345;
  if (v345 >= 0x17) {
    if ((v345 | 7) == 0x17) {
      v364 = 26;
    }
    else {
      v364 = (v345 | 7) + 1;
    }
    v363 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v364, 16, 0);
    v431 = v362;
    v432 = v363;
    v430 = v364 | 1;
  }
  else {
    LOBYTE(v430) = 2 * v345;
    v363 = (char*)&v430 + 1;
    if (v345 == 0) {
      goto LABEL_544;
    }
  }
  memcpy(v363, v438, v362);
LABEL_544:
  v363[v362] = 0;
  v365 = GameData_2130190[0];
  v366 = v430;
  v433 = GameData_2130190[0] + 2;
  if ((v430 & 1) != 0) {
    fw_text_String_CopyTerminated(&v434, v432, v431);
  }
  else {
    v434 = v430;
    v435 = v431;
    v436 = v432;
  }
  v367 = v421;
  v437 = 1098907648;
  if ((__int64**)(v421 + 152) != &v433) {
    if ((*(_BYTE*)(v421 + 160) & 1) != 0) {
      if ((v434 & 1) != 0) {
        v386 = v436;
      }
      else {
        v386 = (char*)&v434 + 1;
      }
      if ((v434 & 1) != 0) {
        v387 = v435;
      }
      else {
        v387 = (unsigned __int64)(unsigned __int8)v434 >> 1;
      }
      SpineModel_64dde0(v421 + 160, v386, v387);
    }
    else if ((v434 & 1) != 0) {
      v367 = v421;
      GameRoutine_64df20(v421 + 160, v436, v435);
    }
    else {
      v368 = v435;
      v367 = v421;
      *(_QWORD*)(v421 + 160) = v434;
      *(_QWORD*)(v421 + 168) = v368;
      *(_QWORD*)(v421 + 176) = v436;
    }
  }
  v433 = v365 + 2;
  v388 = v434;
  *(_DWORD*)(v367 + 184) = v437;
  if ((v388 & 1) != 0 && v436 != nullptr) {
    v389 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v389 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v389);
  }
  if ((v366 & 1) != 0 && v432 != nullptr) {
    v390 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v390 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                  v390);
  }
  LODWORD(v361) = 0x1.0000000000000p+0;
  LayoutAccessor_1562680(v360, "Loop", v361);
LABEL_613:
  if (atomic_fetch_add((atomic_ullong* volatile)(v358 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v358 + 16LL))(v358, v359);
    std___1___shared_weak_count___release_weak_alt1(v358);
  }
}

#pragma GCC visibility pop
