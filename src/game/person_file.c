#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99d0;
extern __int64 GameData_21c99d8;
extern __int64 GameData_21c99e8;
extern __int64 GameData_21c99f0;
extern __int64 GameData_21c99f8;
extern __int64 GameData_21c9a00;
extern __int64 GameData_21c9a38;
extern __int64 GameData_21c9a40;
extern __int64 GameData_21c9a48;
extern __int64 GameData_21c9a50;
extern __int64 GameData_21c9a60;
extern __int64 GameData_21c9a68;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9a90;
extern __int64 GameData_21c9a98;
extern __int64 GameData_21c9aa8;
extern __int64 GameData_21c9ab0;
extern __int64 GameData_21c9ac0;
extern __int64 GameData_21c9ac8;
extern __int64 GameData_21c9ad8;
extern __int64 GameData_21c9ae0;
extern __int64 GameData_21c9ae8;
extern __int64 GameData_21c9af0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 PersonFile_Unknown5();
__int64 GameRoutine_68d9a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9a70;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
unsigned __int64 game_PersonFile_OnBuild_lambda1_Invoke(__int64 a1, char* a2);
_QWORD* GameRoutine_688220(__int64, unsigned __int64, __int64*);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__int64* GameRoutine_68c980(_QWORD*, unsigned __int8*);
__int64* GameRoutine_68cb20(__int64* result, unsigned __int64);
__int64* GameRoutine_68cdc0(__int64* result, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameConst_7f97f0(__int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_6886c0(__int64 result, __int64*, __int64, char);
__int64 GameRoutine_68c910(__int64 result, _QWORD*);
__int64 Resources_66bfc0(unsigned __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1f90b60[])();
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c8f8[2];
extern __int64 GameData_21c9000;
extern __int64 GameData_21c99e0;
extern __int64 GameData_21c9a10;
extern __int64 GameData_21c9a18;
extern __int64 GameData_21c9a20;
extern __int64 GameData_21c9a28;
extern __int64 GameData_21c9a88;
extern __int64 GameData_21c9aa0;
extern __int64 GameData_21c9ab8;
extern __int64 GameData_21c9ad0;
extern int GameData_21c9a08;
extern int GameData_21c9a30;
unsigned __int64 GameRoutine_68d060(unsigned __int64 result, unsigned int,
                                    __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn)) String_60a1d0();
__int64 game_PersonFile_OnBuild(_QWORD* a1);
extern int GameData_21c9a58;
unsigned int* PersonFile_68d9a0(unsigned int* result, unsigned int* a2,
                                _BYTE* a3);

__int64 game_PersonFile_OnBuild(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  int v55;
  char* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64** v62;
  __int64* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64* v71;
  _QWORD* v72;
  char v73;
  _DWORD* v74;
  unsigned __int64 v75;
  float v76;
  _BOOL8 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 primeEm;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64* v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  char v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v97;
  __int64 v98;
  __int64*** v99;
  __int64** v100;
  unsigned __int64 v101;
  __int64* v102;
  int v103;
  __int64 v104;
  __int64*** v105;
  __int64** v106;
  unsigned __int64 v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  char v111;
  float v112;
  float v113;
  _BOOL8 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
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
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  _QWORD* v203;
  _QWORD* v204;
  unsigned __int64 v205;
  __int64 v206;
  _QWORD* v207;
  _QWORD* v208;
  __int64 v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  unsigned __int64 v212;
  _QWORD* v213;
  _QWORD* v214;
  unsigned __int64 v215;
  __int64 v216;
  float v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  float v221;
  _BOOL8 v222;
  unsigned __int64 v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  __int64 v226;
  _QWORD* v227;
  _QWORD* v228;
  unsigned __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  unsigned __int64 v238;
  __int64 v239;
  _QWORD* v240;
  unsigned __int64 v241;
  unsigned __int64 v242;
  _QWORD* v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  unsigned __int64 v250;
  __int64 v251;
  unsigned __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  unsigned __int64 v257;
  __int64* v258;
  unsigned __int64 v259;
  __int64** v260;
  unsigned __int64 v261;
  __int64* v262;
  __int64** v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  unsigned __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64* v277;
  __int64** v278;
  unsigned __int64 v279;
  __int64* v280;
  __int64* v281;
  __int64 v282;
  unsigned __int64 v283;
  __int64* v284;
  unsigned __int64 v285;
  unsigned __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64* v289;
  __int64 v290;
  unsigned __int64 v291;
  _QWORD* v292;
  _QWORD* v293;
  unsigned __int64 v294;
  __int64 v295;
  unsigned __int64 v296;
  _QWORD* v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  _QWORD* v302;
  _QWORD* v303;
  __int64 v304;
  unsigned __int64 v305;
  unsigned __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  __int64 v309;
  __int64 v310;
  unsigned int** v311;
  unsigned int** v312;
  unsigned int* v313;
  unsigned int v314;
  unsigned int v315;
  __int64 v316;
  __int64 result;
  _QWORD* v318;
  _QWORD* v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  int v323;
  __int64* v324;
  struct {
    __int64 v325;
    unsigned __int64 v326;
    char* v327;
    char gap72_[8];
    __int64* v328;
  } v325_;
  __int64** v329;
  struct {
    __int64* v330;
    __int64 v331;
  } v330_;
  _QWORD** v332;
  struct {
    _QWORD* v333[2];
    __int64 v334;
    unsigned __int64 v335;
  } v333_;
  struct {
    _QWORD* v336;
    unsigned __int64 v337;
    float v338;
  } v336_;

  v3 = GameData_21c99d0;
  v2 = GameData_21c99d8;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (GameData_21c99d0 != GameData_21c99d8) {
    v5 = GameData_21c99d8;
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v2 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v8, v7);
        }
      }
      v2 = v5;
    } while (v5 != v3);
  }
  GameData_21c99d8 = v3;
  if (GameData_21c9a00 != 0) {
    v9 = (_QWORD*)GameData_21c99f8;
    while (v9 != nullptr) {
      v11 = v9;
      v9 = (_QWORD*)*v9;
      if ((v11[2] & 1) != 0 && v11[4] != 0) {
        v12 = v11;
        v13 = v11[4];
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v14, v13);
        v11 = v12;
      }
      if (*(_QWORD*)(*v4 + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v10, v11);
    }
    GameData_21c99f8 = 0;
    if (GameData_21c99f0 != 0) {
      v15 = GameData_21c99f0 & 7;
      if ((unsigned __int64)GameData_21c99f0 >= 8) {
        v17 = GameData_21c99f0 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_21c99e8 + 8 * v16) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v16 + 48) = 0;
          v18 = GameData_21c99e8 + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(GameData_21c99e8 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_21c9a00 = 0;
  }
  if (GameData_21c9a28 != 0) {
    v20 = (_QWORD*)GameData_21c9a20;
    if (GameData_21c9a20 != 0) {
      do {
        v21 = (_QWORD*)*v20;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v22, v20);
        v20 = v21;
      } while (v21 != nullptr);
    }
    GameData_21c9a20 = 0;
    if (GameData_21c9a18 != 0) {
      v23 = GameData_21c9a18 & 7;
      if ((unsigned __int64)GameData_21c9a18 >= 8) {
        v25 = GameData_21c9a18 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(GameData_21c9a10 + 8 * v24) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 8) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 16) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 24) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 32) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 40) = 0;
          *(_QWORD*)(GameData_21c9a10 + 8 * v24 + 48) = 0;
          v26 = GameData_21c9a10 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(GameData_21c9a10 + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    GameData_21c9a28 = 0;
  }
  if (GameData_21c9a50 != 0) {
    v28 = (_QWORD*)GameData_21c9a48;
    if (GameData_21c9a48 != 0) {
      do {
        v29 = (_QWORD*)*v28;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v30, v28);
        v28 = v29;
      } while (v29 != nullptr);
    }
    GameData_21c9a48 = 0;
    if (GameData_21c9a40 != 0) {
      v31 = GameData_21c9a40 & 7;
      if ((unsigned __int64)GameData_21c9a40 >= 8) {
        v33 = GameData_21c9a40 & 0xFFFFFFFFFFFFFFF8LL;
        v32 = 0;
        do {
          *(_QWORD*)(GameData_21c9a38 + 8 * v32) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 8) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 16) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 24) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 32) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 40) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v32 + 48) = 0;
          v34 = GameData_21c9a38 + 8 * v32;
          v32 += 8;
          *(_QWORD*)(v34 + 56) = 0;
        } while (v33 != v32);
      }
      else {
        v32 = 0;
      }
      if (v31 != 0) {
        v35 = 8 * v32;
        do {
          --v31;
          *(_QWORD*)(GameData_21c9a38 + v35) = 0;
          v35 += 8;
        } while (v31 != 0);
      }
    }
    GameData_21c9a50 = 0;
  }
  v36 = (unsigned __int64)&GameData_21c9000;
  GameData_21c9a68 = GameData_21c9a60;
  GameData_21c9a80 = GameData_21c9a78;
  GameData_21c9a98 = GameData_21c9a90;
  GameData_21c9ab0 = GameData_21c9aa8;
  GameData_21c9ac8 = GameData_21c9ac0;
  if (GameData_21c9af0 != 0) {
    v37 = (_QWORD*)GameData_21c9ae8;
    if (GameData_21c9ae8 != 0) {
      do {
        v38 = (_QWORD*)*v37;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v39, v37);
        v37 = v38;
      } while (v38 != nullptr);
    }
    GameData_21c9ae8 = 0;
    if (GameData_21c9ae0 != 0) {
      v40 = GameData_21c9ae0 & 7;
      if ((unsigned __int64)GameData_21c9ae0 >= 8) {
        v42 = GameData_21c9ae0 & 0xFFFFFFFFFFFFFFF8LL;
        v41 = 0;
        do {
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 8) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 16) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 24) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 32) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 40) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v41 + 48) = 0;
          v43 = GameData_21c9ad8 + 8 * v41;
          v41 += 8;
          *(_QWORD*)(v43 + 56) = 0;
        } while (v42 != v41);
      }
      else {
        v41 = 0;
      }
      if (v40 != 0) {
        v44 = 8 * v41;
        do {
          --v40;
          *(_QWORD*)(GameData_21c9ad8 + v44) = 0;
          v44 += 8;
        } while (v40 != 0);
      }
    }
    GameData_21c9af0 = 0;
  }
  v336_.v336 = nullptr;
  v336_.v337 = 0;
  v333_.v334 = 0;
  v333_.v335 = 0;
  v333_.v333[0] = nullptr;
  v333_.v333[1] = nullptr;
  v330_.v330 = nullptr;
  v330_.v331 = 0;
  v336_.v338 = 0x1.0000000000000p+0f;
  v332 = v333_.v333;
  v329 = &v330_.v330;
  v45 = *(__int64**)(*GameData_212c890[0] + 64);
  v324 = *(__int64**)(*GameData_212c890[0] + 72);
  while (v45 != v324) {
    v47 = *v45;
    v48 = *(_QWORD**)(*v45 + 624);
    if (v48 != nullptr) {
      v49 = v48[80];
      *(_QWORD*)(v47 + 648) = v48[81];
      *(_QWORD*)(v47 + 640) = v49;
      *(_QWORD*)(v47 + 632) = v48[79];
    }
    v50 = *(_QWORD*)(v47 + 40);
    if (v50 == 0) {
      goto LABEL_190;
    }
    v51 = strlen(*(_QWORD*)(v47 + 40));
    if (v51 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v52 = v51;
    if (v51 >= 0x17) {
      if ((v51 | 7) == 0x17) {
        v54 = 26;
      }
      else {
        v54 = (v51 | 7) + 1;
      }
      v53 = (char*)fw_memory_HeapManager_Allocate_alt1(*v4, v54, 16, 0);
      v325_.v326 = v52;
      v325_.v327 = v53;
      v325_.v325 = v54 | 1;
    }
    else {
      v53 = (char*)&v325_.v325 + 1;
      LOBYTE(v325_.v325) = 2 * v51;
      if (v51 == 0) {
        goto LABEL_95;
      }
    }
    memmove(v53, v50, v52);
  LABEL_95:
    v53[v52] = 0;
    if (GameRoutine_68c980(&GameData_21c99e8, (unsigned __int8*)&v325_.v325) !=
        nullptr) {
      if ((v325_.v325 & 1) == 0) {
        goto LABEL_190;
      }
    LABEL_186:
      if (v325_.v327 != nullptr) {
        v92 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v92, v325_.v327);
      }
      goto LABEL_190;
    }
    v55 = *(unsigned __int16*)(v47 + 16);
    if ((v325_.v325 & 1) != 0) {
      v56 = v325_.v327;
    }
    else {
      v56 = (char*)&v325_.v325 + 1;
    }
    if ((v325_.v325 & 1) != 0) {
      v57 = v325_.v326;
    }
    else {
      v57 = (unsigned __int64)(unsigned __int8)v325_.v325 >> 1;
    }
    v58 = std___1___hash_memory(v56, v57);
    v59 = v58;
    v60 = GameData_21c99f0;
    if (GameData_21c99f0 != 0) {
      v61 = GameData_21c99f0 - 1;
      if ((GameData_21c99f0 & (GameData_21c99f0 - 1)) != 0) {
        v36 = v58;
        if (v58 >= GameData_21c99f0) {
          v36 = v58 % GameData_21c99f0;
        }
      }
      else {
        v36 = v61 & v58;
      }
      v62 = *(__int64***)(GameData_21c99e8 + 8 * v36);
      if (v62 != nullptr) {
        v323 = v55;
        v63 = *v62;
        if (*v62 != nullptr) {
          if ((GameData_21c99f0 & v61) == 0) {
            while (1) {
              v68 = v63[1];
              if (v68 == v59) {
                v69 = *((unsigned __int8*)v63 + 16);
                v70 = v63[3];
                if ((v69 & 1) == 0) {
                  v70 = v69 >> 1;
                }
                if (v70 == v57) {
                  v71 = (v69 & 1) != 0 ? (__int64*)v63[4]
                                       : (__int64*)((char*)v63 + 17);
                  if ((unsigned int)memcmp(v71, v56, v57) == 0) {
                    goto LABEL_180;
                  }
                }
              }
              else if ((v68 & v61) != v36) {
                goto LABEL_137;
              }
              v63 = (__int64*)*v63;
              if (v63 == nullptr) {
                goto LABEL_137;
              }
            }
          }
          do {
            v64 = v63[1];
            if (v64 == v59) {
              v65 = *((unsigned __int8*)v63 + 16);
              v66 = v63[3];
              if ((v65 & 1) == 0) {
                v66 = v65 >> 1;
              }
              if (v66 == v57) {
                v67 = (v65 & 1) != 0 ? (__int64*)v63[4]
                                     : (__int64*)((char*)v63 + 17);
                if ((unsigned int)memcmp(v67, v56, v57) == 0) {
                  goto LABEL_180;
                }
              }
            }
            else {
              if (v64 >= v60) {
                v64 %= v60;
              }
              if (v64 != v36) {
                break;
              }
            }
            v63 = (__int64*)*v63;
          } while (v63 != nullptr);
        }
      LABEL_137:
        v4 = (__int64*)fw_memory_g_heap_manager_ptr;
        v55 = v323;
      }
      else {
        v4 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
    }
    v72 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v4, 48, 16, 0);
    v73 = v325_.v325;
    v74 = v72;
    *v72 = 0;
    v72[1] = v59;
    if ((v73 & 1) != 0) {
      fw_text_String_CopyTerminated(v72 + 2, (__int64)v325_.v327, v325_.v326);
    }
    else {
      v75 = v325_.v326;
      v72[2] = v325_.v325;
      v72[3] = v75;
      v72[4] = v325_.v327;
    }
    v74[10] = v55;
    v76 = (float)(unsigned __int64)(GameData_21c9a00 + 1);
    if (v60 == 0 || (float)(*(float*)&GameData_21c9a08 * (float)v60) < v76) {
      v77 = v60 < 3 || (v60 & (v60 - 1)) != 0;
      v78 = v77 | (2 * v60);
      v79 = vcvtps_u64_f32(v76 / *(float*)&GameData_21c9a08);
      if (v78 <= v79) {
        primeEm = v79;
      }
      else {
        primeEm = v78;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v81 = GameData_21c99f0;
      if (primeEm > GameData_21c99f0) {
        goto LABEL_155;
      }
      if (primeEm < GameData_21c99f0) {
        v82 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21c9a00 /
                             *(float*)&GameData_21c9a08);
        if ((unsigned __int64)GameData_21c99f0 < 3 ||
            (GameData_21c99f0 & (GameData_21c99f0 - 1)) != 0) {
          v82 = std___1___next_prime(v82);
        }
        else {
          v83 = 1LL << (-(char)__clz(v82 - 1) & 63);
          if (v82 >= 2) {
            v82 = v83;
          }
        }
        if (primeEm <= v82) {
          primeEm = v82;
        }
        if (primeEm < v81) {
        LABEL_155:
          GameRoutine_68cb20(&GameData_21c99e8, primeEm);
        }
      }
      v60 = GameData_21c99f0;
      if ((GameData_21c99f0 & (GameData_21c99f0 - 1)) != 0) {
        if (v59 >= GameData_21c99f0) {
          v36 = v59 % GameData_21c99f0;
        }
        else {
          v36 = v59;
        }
      }
      else {
        v36 = (GameData_21c99f0 - 1) & v59;
      }
    }
    v84 = GameData_21c99e8;
    v85 = *(_QWORD**)(GameData_21c99e8 + 8 * v36);
    if (v85 != nullptr) {
      *(_QWORD*)v74 = *v85;
      *v85 = v74;
    }
    else {
      v86 = GameData_21c99f8;
      GameData_21c99f8 = (__int64)v74;
      *(_QWORD*)v74 = v86;
      *(_QWORD*)(v84 + 8 * v36) = &GameData_21c99f8;
      if (*(_QWORD*)v74 != 0) {
        v87 = *(_QWORD*)(*(_QWORD*)v74 + 8LL);
        if ((v60 & (v60 - 1)) != 0) {
          if (v87 >= v60) {
            v87 %= v60;
          }
        }
        else {
          v87 &= v60 - 1;
        }
        *(_QWORD*)(GameData_21c99e8 + 8 * v87) = v74;
      }
    }
    ++GameData_21c9a00;
  LABEL_180:
    v88 = (__int64*)GameData_21c99d8;
    if (GameData_21c99d8 >= (unsigned __int64)GameData_21c99e0) {
      v91 = Manager_66cc20(&GameData_21c99d0, &v325_.v325);
    }
    else if ((v325_.v325 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)GameData_21c99d8,
                                    (__int64)v325_.v327, v325_.v326);
      v91 = v88 + 3;
    }
    else {
      v89 = v325_.v325;
      v90 = (__int64)v325_.v327;
      v91 = (_QWORD*)(GameData_21c99d8 + 24);
      *(_QWORD*)(GameData_21c99d8 + 8) = v325_.v326;
      v88[2] = v90;
      *v88 = v89;
    }
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    GameData_21c99d8 = (__int64)v91;
    if ((v325_.v325 & 1) != 0) {
      goto LABEL_186;
    }
  LABEL_190:
    v93 = *(_BYTE*)(v47 + 49);
    if ((v93 & 1) != 0) {
      v94 = *(unsigned __int8*)(v47 + 48);
      if (*(_BYTE*)(v47 + 48) != 0) {
        v95 = GameData_21c9a18;
        if (GameData_21c9a18 != 0 && GameData_21c9a28 != 0) {
          v97 = GameData_21c9a18 - 1;
          if ((GameData_21c9a18 & (GameData_21c9a18 - 1)) != 0) {
            v98 = *(unsigned __int8*)(v47 + 48);
            if (GameData_21c9a18 <= v94) {
              v98 = (unsigned int)v94 % (unsigned int)GameData_21c9a18;
            }
          }
          else {
            v98 = ((_DWORD)GameData_21c9a18 - 1) & (unsigned int)v94;
          }
          v99 = *(__int64****)(GameData_21c9a10 + 8 * v98);
          if (v99 != nullptr) {
            v100 = *v99;
            if (v100 != nullptr) {
              if ((GameData_21c9a18 & v97) == 0) {
                while (1) {
                  v102 = v100[1];
                  if (v102 == (__int64*)v94) {
                    if (*((unsigned __int8*)v100 + 16) == (_DWORD)v94) {
                      goto LABEL_274;
                    }
                  }
                  else if (((unsigned __int64)v102 & v97) != v98) {
                    goto LABEL_215;
                  }
                  v100 = (__int64**)*v100;
                  if (v100 == nullptr) {
                    goto LABEL_215;
                  }
                }
              }
              do {
                v101 = (unsigned __int64)v100[1];
                if (v101 == v94) {
                  if (*((unsigned __int8*)v100 + 16) == (_DWORD)v94) {
                    goto LABEL_274;
                  }
                }
                else {
                  if (v101 >= GameData_21c9a18) {
                    v101 %= (unsigned __int64)GameData_21c9a18;
                  }
                  if (v101 != v98) {
                    break;
                  }
                }
                v100 = (__int64**)*v100;
              } while (v100 != nullptr);
            }
          }
        }
      LABEL_215:
        if ((_DWORD)v94 != 255) {
          v103 = *(unsigned __int16*)(v47 + 16);
          if (GameData_21c9a18 != 0) {
            v104 = GameData_21c9a18 - 1;
            if ((GameData_21c9a18 & (GameData_21c9a18 - 1)) != 0) {
              v36 = *(unsigned __int8*)(v47 + 48);
              if (GameData_21c9a18 <= v94) {
                v36 = (unsigned int)v94 % (unsigned int)GameData_21c9a18;
              }
            }
            else {
              v36 = ((_DWORD)GameData_21c9a18 - 1) & (unsigned int)v94;
            }
            v105 = *(__int64****)(GameData_21c9a10 + 8 * v36);
            if (v105 != nullptr) {
              v106 = *v105;
              if (v106 != nullptr) {
                if ((GameData_21c9a18 & v104) == 0) {
                  while (1) {
                    v108 = v106[1];
                    if (v108 == (__int64*)v94) {
                      if (*((unsigned __int8*)v106 + 16) == (_DWORD)v94) {
                        goto LABEL_274;
                      }
                    }
                    else if (((unsigned __int64)v108 & v104) != v36) {
                      goto LABEL_236;
                    }
                    v106 = (__int64**)*v106;
                    if (v106 == nullptr) {
                      goto LABEL_236;
                    }
                  }
                }
                do {
                  v107 = (unsigned __int64)v106[1];
                  if (v107 == v94) {
                    if (*((unsigned __int8*)v106 + 16) == (_DWORD)v94) {
                      goto LABEL_274;
                    }
                  }
                  else {
                    if (v107 >= GameData_21c9a18) {
                      v107 %= (unsigned __int64)GameData_21c9a18;
                    }
                    if (v107 != v36) {
                      break;
                    }
                  }
                  v106 = (__int64**)*v106;
                } while (v106 != nullptr);
              }
            }
          }
        LABEL_236:
          v109 = fw_memory_HeapManager_Allocate_alt1(*v4, 24, 16, 0);
          *(_QWORD*)v109 = 0;
          *(_QWORD*)(v109 + 8) = v94;
          v110 = v109;
          v111 = *(_BYTE*)(v47 + 48);
          v112 = *(float*)&GameData_21c9a30;
          *(_DWORD*)(v109 + 20) = v103;
          *(_BYTE*)(v109 + 16) = v111;
          v113 = (float)(unsigned __int64)(GameData_21c9a28 + 1);
          if (v95 == 0 || (float)(v112 * (float)v95) < v113) {
            v114 = v95 < 3 || (v95 & (v95 - 1)) != 0;
            v115 = v114 | (2 * v95);
            v116 = vcvtps_u64_f32(v113 / v112);
            if (v115 <= v116) {
              v117 = v116;
            }
            else {
              v117 = v115;
            }
            if (v117 == 1) {
              v117 = 2;
            }
            else if ((v117 & (v117 - 1)) != 0) {
              v117 = std___1___next_prime(v117);
              v95 = GameData_21c9a18;
            }
            if (v117 > v95) {
              goto LABEL_249;
            }
            if (v117 < v95) {
              v118 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21c9a28 /
                                    *(float*)&GameData_21c9a30);
              if (v95 < 3 || (v95 & (v95 - 1)) != 0) {
                v118 = std___1___next_prime(v118);
              }
              else {
                v119 = 1LL << (-(char)__clz(v118 - 1) & 63);
                if (v118 >= 2) {
                  v118 = v119;
                }
              }
              if (v117 <= v118) {
                v117 = v118;
              }
              if (v117 < v95) {
              LABEL_249:
                GameRoutine_68cdc0(&GameData_21c9a10, v117);
              }
            }
            v95 = GameData_21c9a18;
            if ((GameData_21c9a18 & (GameData_21c9a18 - 1)) != 0) {
              if (GameData_21c9a18 <= v94) {
                v36 = v94 % GameData_21c9a18;
              }
              else {
                v36 = v94;
              }
            }
            else {
              v36 = ((_DWORD)GameData_21c9a18 - 1) & (unsigned int)v94;
            }
          }
          v120 = GameData_21c9a10;
          v121 = *(__int64**)(GameData_21c9a10 + 8 * v36);
          if (v121 != nullptr) {
            *(_QWORD*)v110 = *v121;
            *v121 = v110;
          }
          else {
            v122 = GameData_21c9a20;
            GameData_21c9a20 = v110;
            *(_QWORD*)v110 = v122;
            *(_QWORD*)(v120 + 8 * v36) = &GameData_21c9a20;
            if (*(_QWORD*)v110 != 0) {
              v123 = *(_QWORD*)(*(_QWORD*)v110 + 8LL);
              if ((v95 & (v95 - 1)) != 0) {
                if (v123 >= v95) {
                  v123 %= v95;
                }
              }
              else {
                v123 &= v95 - 1;
              }
              *(_QWORD*)(GameData_21c9a10 + 8 * v123) = v110;
            }
          }
          ++GameData_21c9a28;
        }
      LABEL_274:
        v124 = GameData_21c9a98;
        if (GameData_21c9a98 >= (unsigned __int64)GameData_21c9aa0) {
          v126 = GameData_21c9a90;
          v127 = GameData_21c9a98 - GameData_21c9a90;
          v36 = (GameData_21c9a98 - GameData_21c9a90) >> 3;
          v128 = v36 + 1;
          if ((v36 + 1) >> 61 != 0) {
            goto LABEL_615;
          }
          v129 = GameData_21c9aa0 - GameData_21c9a90;
          if ((GameData_21c9aa0 - GameData_21c9a90) >> 2 > v128) {
            v128 = v129 >> 2;
          }
          if ((unsigned __int64)v129 >= 0x7FFFFFFFFFFFFFF8LL) {
            v130 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v130 = v128;
          }
          if (v130 != 0) {
            if (v130 >> 61 != 0) {
              goto LABEL_617;
            }
            v131 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v130, 16, 0);
          }
          else {
            v131 = 0;
          }
          v132 = v131 + 8 * v130;
          v133 = v131 + v127 - 8 * v36;
          *(_QWORD*)(v131 + v127) = v47;
          v125 = v131 + v127 + 8;
          memcpy(v133, v126, v127);
          GameData_21c9a90 = v133;
          GameData_21c9a98 = v125;
          GameData_21c9aa0 = v132;
          if (v126 != 0) {
            v134 = 128;
            if (*(_QWORD*)(*v4 + 200) == 0) {
              v134 = 56;
            }
            nn_mem_StandardAllocator_Free(*v4 + v134, v126);
          }
        }
        else {
          *(_QWORD*)GameData_21c9a98 = v47;
          v125 = v124 + 8;
        }
        GameData_21c9a98 = v125;
        v93 = *(_BYTE*)(v47 + 49);
      }
    }
    if ((v93 & 1) != 0) {
      v183 = GameData_21c9a80;
      if (GameData_21c9a80 < (unsigned __int64)GameData_21c9a88) {
        *(_QWORD*)GameData_21c9a80 = v47;
        v184 = v183 + 8;
        goto LABEL_364;
      }
      v185 = GameData_21c9a78;
      v186 = GameData_21c9a80 - GameData_21c9a78;
      v187 = (GameData_21c9a80 - GameData_21c9a78) >> 3;
      v188 = v187 + 1;
      if ((unsigned __int64)(v187 + 1) >> 61 != 0) {
      LABEL_615:
        GameRoutine_688200_alt1();
      }
      v189 = GameData_21c9a88 - GameData_21c9a78;
      if ((GameData_21c9a88 - GameData_21c9a78) >> 2 > v188) {
        v188 = v189 >> 2;
      }
      if ((unsigned __int64)v189 >= 0x7FFFFFFFFFFFFFF8LL) {
        v190 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v190 = v188;
      }
      if (v190 != 0) {
        if (v190 >> 61 == 0) {
          v191 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v190, 16, 0);
          goto LABEL_360;
        }
      LABEL_617:
        GameRoutine_60a210_alt1();
      }
      v191 = 0;
    LABEL_360:
      v196 = v191 + 8 * v190;
      v197 = v191 + v186 - 8 * v187;
      *(_QWORD*)(v191 + v186) = v47;
      v184 = v191 + v186 + 8;
      memcpy(v197, v185, v186);
      GameData_21c9a78 = v197;
      GameData_21c9a80 = v184;
      GameData_21c9a88 = v196;
      if (v185 != 0) {
        v198 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v198 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v198, v185);
      }
    LABEL_364:
      v36 = *(_QWORD*)(v47 + 40);
      GameData_21c9a80 = v184;
      if (v36 == 0) {
        goto LABEL_463;
      }
      v199 = v333_.v335;
      if (v333_.v335 != 0 && v336_.v337 != 0) {
        v325_.v325 = v36;
        v200 = std___1___hash_memory(&v325_.v325, 8);
        v201 = v199 - 1;
        if ((v199 & (v199 - 1)) != 0) {
          v202 = v200;
          if (v200 >= v199) {
            v202 = v200 % v199;
          }
        }
        else {
          v202 = v200 & v201;
        }
        v203 = *(_QWORD**)(v333_.v334 + 8 * v202);
        if (v203 != nullptr) {
          v204 = (_QWORD*)*v203;
          if (v204 != nullptr) {
            if ((v199 & v201) == 0) {
              while (1) {
                v206 = v204[1];
                if (v206 == v200) {
                  if (v204[2] == v36) {
                    goto LABEL_463;
                  }
                }
                else if ((v206 & v201) != v202) {
                  goto LABEL_386;
                }
                v204 = (_QWORD*)*v204;
                if (v204 == nullptr) {
                  goto LABEL_386;
                }
              }
            }
            do {
              v205 = v204[1];
              if (v205 == v200) {
                if (v204[2] == v36) {
                  goto LABEL_463;
                }
              }
              else {
                if (v205 >= v199) {
                  v205 %= v199;
                }
                if (v205 != v202) {
                  break;
                }
              }
              v204 = (_QWORD*)*v204;
            } while (v204 != nullptr);
          }
        }
      }
    LABEL_386:
      v207 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v4, 32, 16, 0);
      *v207 = 0;
      v208 = v207;
      v209 = *(_QWORD*)(v47 + 40);
      v207[2] = v209;
      v207[3] = v47;
      v325_.v325 = v209;
      v207[1] = std___1___hash_memory(&v325_.v325, 8);
      v325_.v325 = v209;
      v210 = std___1___hash_memory(&v325_.v325, 8);
      v36 = v333_.v335;
      v208[1] = v210;
      if (v36 != 0) {
        v211 = v36 - 1;
        if ((v36 & (v36 - 1)) != 0) {
          v212 = v210;
          if (v210 >= v36) {
            v212 = v210 % v36;
          }
        }
        else {
          v212 = v211 & v210;
        }
        v213 = *(_QWORD**)(v333_.v334 + 8 * v212);
        if (v213 != nullptr) {
          v214 = (_QWORD*)*v213;
          if (v214 != nullptr) {
            if ((v36 & v211) == 0) {
              while (1) {
                v216 = v214[1];
                if (v216 == v210) {
                  if (v214[2] == v209) {
                    goto LABEL_561;
                  }
                }
                else if ((v216 & v211) != v212) {
                  goto LABEL_406;
                }
                v214 = (_QWORD*)*v214;
                if (v214 == nullptr) {
                  goto LABEL_406;
                }
              }
            }
            do {
              v215 = v214[1];
              if (v215 == v210) {
                if (v214[2] == v209) {
                LABEL_561:
                  v299 = 128;
                  if (*(_QWORD*)(*v4 + 200) == 0) {
                    v299 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v4 + v299, v208);
                  goto LABEL_463;
                }
              }
              else {
                if (v215 >= v36) {
                  v215 %= v36;
                }
                if (v215 != v212) {
                  break;
                }
              }
              v214 = (_QWORD*)*v214;
            } while (v214 != nullptr);
          }
        }
      }
    LABEL_406:
      v217 = (float)(v336_.v337 + 1);
      if (v36 == 0 || (float)(v336_.v338 * (float)v36) < v217) {
        v221 = v217 / v336_.v338;
        v222 = (v36 & (v36 - 1)) != 0;
        if (v36 < 3) {
          v222 = true;
        }
        v223 = v222 | (2 * v36);
        v224 = vcvtps_u64_f32(v221);
        if (v223 <= v224) {
          v225 = v224;
        }
        else {
          v225 = v223;
        }
        if (v225 == 1) {
          v225 = 2;
        }
        else if ((v225 & (v225 - 1)) != 0) {
          v230 = std___1___next_prime(v225);
          v36 = v333_.v335;
          v225 = v230;
        }
        if (v225 <= v36) {
          if (v225 >= v36) {
            goto LABEL_408;
          }
          v235 = vcvtps_u64_f32((float)v336_.v337 / v336_.v338);
          if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
            v235 = std___1___next_prime(v235);
          }
          else {
            v236 = 1LL << (-(char)__clz(v235 - 1) & 63);
            if (v235 >= 2) {
              v235 = v236;
            }
          }
          if (v225 <= v235) {
            v225 = v235;
          }
          if (v225 >= v36) {
            goto LABEL_408;
          }
          if (v225 == 0) {
            v300 = v333_.v334;
            v333_.v334 = 0;
            if (v300 != 0) {
              v301 = 128;
              if (*(_QWORD*)(*v4 + 200) == 0) {
                v301 = 56;
              }
              nn_mem_StandardAllocator_Free(*v4 + v301, v300);
            }
            v333_.v335 = 0;
            goto LABEL_408;
          }
        }
        if (v225 >> 61 != 0) {
          goto LABEL_617;
        }
        v231 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v225, 16, 0);
        v232 = v333_.v334;
        v333_.v334 = v231;
        if (v232 != 0) {
          v233 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v233 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v233, v232);
        }
        v333_.v335 = v225;
        if (v225 >= 8) {
          v234 = 0;
          do {
            *(_QWORD*)(v333_.v334 + 8 * v234) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 8) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 16) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 24) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 32) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 40) = 0;
            *(_QWORD*)(v333_.v334 + 8 * v234 + 48) = 0;
            v237 = v333_.v334 + 8 * v234;
            v234 += 8;
            *(_QWORD*)(v237 + 56) = 0;
          } while ((v225 & 0x1FFFFFFFFFFFFFF8LL) != v234);
        }
        else {
          v234 = 0;
        }
        v238 = v225 & 7;
        if ((v225 & 7) != 0) {
          v239 = 8 * v234;
          do {
            --v238;
            *(_QWORD*)(v333_.v334 + v239) = 0;
            v239 += 8;
          } while (v238 != 0);
        }
        v240 = v336_.v336;
        if (v336_.v336 != nullptr) {
          v241 = v336_.v336[1];
          v242 = v225 - 1;
          if ((v225 & (v225 - 1)) != 0) {
            if (v241 >= v225) {
              v241 %= v225;
            }
            *(_QWORD*)(v333_.v334 + 8 * v241) = &v336_.v336;
            v243 = (_QWORD*)*v240;
            if (*v240 == 0) {
              goto LABEL_408;
            }
            while (2) {
              v244 = v243[1];
              if (v244 >= v225) {
                v244 %= v225;
              }
              if (v244 != v241) {
                if (*(_QWORD*)(v333_.v334 + 8 * v244) == 0) {
                  *(_QWORD*)(v333_.v334 + 8 * v244) = v240;
                LABEL_454:
                  v240 = v243;
                  v243 = (_QWORD*)*v243;
                  v241 = v244;
                  if (v243 == nullptr) {
                    goto LABEL_408;
                  }
                  continue;
                }
                *v240 = *v243;
                *v243 = **(_QWORD**)(v333_.v334 + 8 * v244);
                **(_QWORD**)(v333_.v334 + 8 * v244) = v243;
                v243 = v240;
              }
              break;
            }
            v244 = v241;
            goto LABEL_454;
          }
          v296 = v241 & v242;
          *(_QWORD*)(v333_.v334 + 8 * v296) = &v336_.v336;
          while (1) {
            v297 = (_QWORD*)*v240;
            if (*v240 == 0) {
              break;
            }
            v298 = v297[1] & v242;
            if (v298 == v296) {
              v240 = (_QWORD*)*v240;
            }
            else if (*(_QWORD*)(v333_.v334 + 8 * v298) != 0) {
              *v240 = *v297;
              *v297 = **(_QWORD**)(v333_.v334 + 8 * v298);
              **(_QWORD**)(v333_.v334 + 8 * v298) = v297;
            }
            else {
              *(_QWORD*)(v333_.v334 + 8 * v298) = v240;
              v240 = v297;
              v296 = v298;
            }
          }
        }
      }
    LABEL_408:
      v218 = v333_.v335;
      v219 = v208[1];
      v220 = v333_.v335 - 1;
      if ((v218 & (v218 - 1)) != 0) {
        if (v219 >= v333_.v335) {
          v219 %= v333_.v335;
        }
      }
      else {
        v219 &= v220;
      }
      v226 = v333_.v334;
      v227 = *(_QWORD**)(v333_.v334 + 8 * v219);
      if (v227 != nullptr) {
        *v208 = *v227;
        *v227 = v208;
      }
      else {
        v228 = v336_.v336;
        v336_.v336 = v208;
        *v208 = v228;
        *(_QWORD*)(v226 + 8 * v219) = &v336_.v336;
        if (*v208 != 0) {
          v229 = *(_QWORD*)(*v208 + 8LL);
          if ((v218 & v220) != 0) {
            if (v229 >= v218) {
              v229 %= v218;
            }
          }
          else {
            v229 &= v220;
          }
          *(_QWORD*)(v333_.v334 + 8 * v229) = v208;
        }
      }
      ++v336_.v337;
      goto LABEL_463;
    }
    v135 = *(_QWORD*)(v47 + 696);
    if (v135 != 0) {
      goto LABEL_293;
    }
    v36 = *(_QWORD*)(v47 + 40);
    if (v36 != 0) {
      v192 = v333_.v335;
      if (v333_.v335 != 0 && v336_.v337 != 0) {
        v325_.v325 = *(_QWORD*)(v47 + 40);
        v193 = std___1___hash_memory(&v325_.v325, 8);
        v194 = v192 - 1;
        if ((v192 & (v192 - 1)) != 0) {
          v195 = v193;
          if (v193 >= v192) {
            v195 = v193 % v192;
          }
        }
        else {
          v195 = v193 & v194;
        }
        v292 = *(_QWORD**)(v333_.v334 + 8 * v195);
        if (v292 != nullptr) {
          v293 = (_QWORD*)*v292;
          if (v293 != nullptr) {
            if ((v192 & v194) == 0) {
              while (1) {
                v295 = v293[1];
                if (v295 == v193) {
                  if (v293[2] == v36) {
                    goto LABEL_574;
                  }
                }
                else if ((v295 & v194) != v195) {
                  goto LABEL_463;
                }
                v293 = (_QWORD*)*v293;
                if (v293 == nullptr) {
                  goto LABEL_463;
                }
              }
            }
            do {
              v294 = v293[1];
              if (v294 == v193) {
                if (v293[2] == v36) {
                LABEL_574:
                  v135 = v293[3];
                  if (v135 == 0) {
                    break;
                  }
                LABEL_293:
                  v136 = *(_QWORD*)(v47 + 24);
                  *(_QWORD*)(v136 + 1784) = v135;
                  GameRoutine_60a020(
                      v136 + 1008, *(_QWORD*)(*(_QWORD*)(v135 + 24) + 1000LL));
                  if ((*(_BYTE*)(v136 + 1008) & 1) != 0) {
                    v137 = *(_QWORD*)(v136 + 1024);
                  }
                  else {
                    v137 = v136 + 1009;
                  }
                  v138 = game_HashString_alt1(v137);
                  v139 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 992) = v138;
                  *(_QWORD*)(v136 + 1000) = v137;
                  GameRoutine_60a020(
                      v136 + 1088, *(_QWORD*)(*(_QWORD*)(v139 + 24) + 1080LL));
                  if ((*(_BYTE*)(v136 + 1088) & 1) != 0) {
                    v140 = *(_QWORD*)(v136 + 1104);
                  }
                  else {
                    v140 = v136 + 1089;
                  }
                  v141 = game_HashString_alt1(v140);
                  v142 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1072) = v141;
                  *(_QWORD*)(v136 + 1080) = v140;
                  GameRoutine_60a020(
                      v136 + 1128, *(_QWORD*)(*(_QWORD*)(v142 + 24) + 1120LL));
                  if ((*(_BYTE*)(v136 + 1128) & 1) != 0) {
                    v143 = *(_QWORD*)(v136 + 1144);
                  }
                  else {
                    v143 = v136 + 1129;
                  }
                  v144 = game_HashString_alt1(v143);
                  v145 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1112) = v144;
                  *(_QWORD*)(v136 + 1120) = v143;
                  GameRoutine_60a020(
                      v136 + 1048, *(_QWORD*)(*(_QWORD*)(v145 + 24) + 1040LL));
                  if ((*(_BYTE*)(v136 + 1048) & 1) != 0) {
                    v146 = *(_QWORD*)(v136 + 1064);
                  }
                  else {
                    v146 = v136 + 1049;
                  }
                  v147 = game_HashString_alt1(v146);
                  v148 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1032) = v147;
                  *(_QWORD*)(v136 + 1040) = v146;
                  GameRoutine_60a020(
                      v136 + 1168, *(_QWORD*)(*(_QWORD*)(v148 + 24) + 1160LL));
                  if ((*(_BYTE*)(v136 + 1168) & 1) != 0) {
                    v149 = *(_QWORD*)(v136 + 1184);
                  }
                  else {
                    v149 = v136 + 1169;
                  }
                  v150 = game_HashString_alt1(v149);
                  v151 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1152) = v150;
                  *(_QWORD*)(v136 + 1160) = v149;
                  GameRoutine_60a020(
                      v136 + 1208, *(_QWORD*)(*(_QWORD*)(v151 + 24) + 1200LL));
                  if ((*(_BYTE*)(v136 + 1208) & 1) != 0) {
                    v152 = *(_QWORD*)(v136 + 1224);
                  }
                  else {
                    v152 = v136 + 1209;
                  }
                  v153 = game_HashString_alt1(v152);
                  v154 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1192) = v153;
                  *(_QWORD*)(v136 + 1200) = v152;
                  GameRoutine_60a020(
                      v136 + 1248, *(_QWORD*)(*(_QWORD*)(v154 + 24) + 1240LL));
                  if ((*(_BYTE*)(v136 + 1248) & 1) != 0) {
                    v155 = *(_QWORD*)(v136 + 1264);
                  }
                  else {
                    v155 = v136 + 1249;
                  }
                  v156 = game_HashString_alt1(v155);
                  v157 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1232) = v156;
                  *(_QWORD*)(v136 + 1240) = v155;
                  GameRoutine_60a020(
                      v136 + 1288, *(_QWORD*)(*(_QWORD*)(v157 + 24) + 1280LL));
                  if ((*(_BYTE*)(v136 + 1288) & 1) != 0) {
                    v158 = *(_QWORD*)(v136 + 1304);
                  }
                  else {
                    v158 = v136 + 1289;
                  }
                  v159 = game_HashString_alt1(v158);
                  v160 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1272) = v159;
                  *(_QWORD*)(v136 + 1280) = v158;
                  GameRoutine_60a020(
                      v136 + 1328, *(_QWORD*)(*(_QWORD*)(v160 + 24) + 1320LL));
                  if ((*(_BYTE*)(v136 + 1328) & 1) != 0) {
                    v161 = *(_QWORD*)(v136 + 1344);
                  }
                  else {
                    v161 = v136 + 1329;
                  }
                  v162 = game_HashString_alt1(v161);
                  v163 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1312) = v162;
                  *(_QWORD*)(v136 + 1320) = v161;
                  GameRoutine_60a020(
                      v136 + 1408, *(_QWORD*)(*(_QWORD*)(v163 + 24) + 1400LL));
                  if ((*(_BYTE*)(v136 + 1408) & 1) != 0) {
                    v164 = *(_QWORD*)(v136 + 1424);
                  }
                  else {
                    v164 = v136 + 1409;
                  }
                  v165 = game_HashString_alt1(v164);
                  v166 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1392) = v165;
                  *(_QWORD*)(v136 + 1400) = v164;
                  GameRoutine_60a020(
                      v136 + 1448, *(_QWORD*)(*(_QWORD*)(v166 + 24) + 1440LL));
                  if ((*(_BYTE*)(v136 + 1448) & 1) != 0) {
                    v167 = *(_QWORD*)(v136 + 1464);
                  }
                  else {
                    v167 = v136 + 1449;
                  }
                  v168 = game_HashString_alt1(v167);
                  v169 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1432) = v168;
                  *(_QWORD*)(v136 + 1440) = v167;
                  GameRoutine_60a020(
                      v136 + 1488, *(_QWORD*)(*(_QWORD*)(v169 + 24) + 1480LL));
                  if ((*(_BYTE*)(v136 + 1488) & 1) != 0) {
                    v170 = *(_QWORD*)(v136 + 1504);
                  }
                  else {
                    v170 = v136 + 1489;
                  }
                  v171 = game_HashString_alt1(v170);
                  v172 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1472) = v171;
                  *(_QWORD*)(v136 + 1480) = v170;
                  GameRoutine_60a020(
                      v136 + 1528, *(_QWORD*)(*(_QWORD*)(v172 + 24) + 1520LL));
                  if ((*(_BYTE*)(v136 + 1528) & 1) != 0) {
                    v173 = *(_QWORD*)(v136 + 1544);
                  }
                  else {
                    v173 = v136 + 1529;
                  }
                  v174 = game_HashString_alt1(v173);
                  v175 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1512) = v174;
                  *(_QWORD*)(v136 + 1520) = v173;
                  GameRoutine_60a020(
                      v136 + 1568, *(_QWORD*)(*(_QWORD*)(v175 + 24) + 1560LL));
                  if ((*(_BYTE*)(v136 + 1568) & 1) != 0) {
                    v176 = *(_QWORD*)(v136 + 1584);
                  }
                  else {
                    v176 = v136 + 1569;
                  }
                  v177 = game_HashString_alt1(v176);
                  v178 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1552) = v177;
                  *(_QWORD*)(v136 + 1560) = v176;
                  GameRoutine_60a020(
                      v136 + 1608, *(_QWORD*)(*(_QWORD*)(v178 + 24) + 1600LL));
                  if ((*(_BYTE*)(v136 + 1608) & 1) != 0) {
                    v179 = *(_QWORD*)(v136 + 1624);
                  }
                  else {
                    v179 = v136 + 1609;
                  }
                  v180 = game_HashString_alt1(v179);
                  v181 = *(_QWORD*)(v136 + 1784);
                  *(_QWORD*)(v136 + 1592) = v180;
                  *(_QWORD*)(v136 + 1600) = v179;
                  GameRoutine_60a020(
                      v136 + 1648, *(_QWORD*)(*(_QWORD*)(v181 + 24) + 1640LL));
                  if ((*(_BYTE*)(v136 + 1648) & 1) != 0) {
                    v182 = *(_QWORD*)(v136 + 1664);
                  }
                  else {
                    v182 = v136 + 1649;
                  }
                  *(_QWORD*)(v136 + 1632) = game_HashString_alt1(v182);
                  *(_QWORD*)(v136 + 1640) = v182;
                  break;
                }
              }
              else {
                if (v294 >= v192) {
                  v294 %= v192;
                }
                if (v294 != v195) {
                  break;
                }
              }
              v293 = (_QWORD*)*v293;
            } while (v293 != nullptr);
          }
        }
      }
    }
  LABEL_463:
    v245 = *(_QWORD*)(v47 + 336);
    if (v245 != 0 && v245 != **(_QWORD**)(*GameData_212c8f8[0] + 64)) {
      v246 = GameData_21c9ab0;
      if (GameData_21c9ab0 >= (unsigned __int64)GameData_21c9ab8) {
        v248 = GameData_21c9aa8;
        v249 = GameData_21c9ab0 - GameData_21c9aa8;
        v36 = (GameData_21c9ab0 - GameData_21c9aa8) >> 3;
        v250 = v36 + 1;
        if ((v36 + 1) >> 61 != 0) {
          goto LABEL_615;
        }
        v251 = GameData_21c9ab8 - GameData_21c9aa8;
        if ((GameData_21c9ab8 - GameData_21c9aa8) >> 2 > v250) {
          v250 = v251 >> 2;
        }
        if ((unsigned __int64)v251 >= 0x7FFFFFFFFFFFFFF8LL) {
          v252 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v252 = v250;
        }
        if (v252 != 0) {
          if (v252 >> 61 != 0) {
            goto LABEL_617;
          }
          v253 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v252, 16, 0);
        }
        else {
          v253 = 0;
        }
        v254 = v253 + 8 * v252;
        v255 = v253 + v249 - 8 * v36;
        *(_QWORD*)(v253 + v249) = v47;
        v247 = v253 + v249 + 8;
        memcpy(v255, v248, v249);
        GameData_21c9aa8 = v255;
        GameData_21c9ab0 = v247;
        GameData_21c9ab8 = v254;
        if (v248 != 0) {
          v256 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v256 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v256, v248);
        }
      }
      else {
        *(_QWORD*)GameData_21c9ab0 = v47;
        v247 = v246 + 8;
      }
      GameData_21c9ab0 = v247;
    }
    if (*(_QWORD*)(v47 + 288) != 0) {
      v257 = game_HashString_alt1(*(_QWORD*)(v47 + 280));
      v258 = v330_.v330;
      v259 = v257;
      if (v330_.v330 == nullptr) {
        goto LABEL_495;
      }
      v260 = &v330_.v330;
      do {
        v261 = v258[4];
        v262 = v258;
        v263 = v260;
        v264 = v261 < v257;
        if (v261 >= v257) {
          v260 = (__int64**)v262;
        }
        v258 = (__int64*)v262[v264];
      } while (v258 != nullptr);
      if (v260 == &v330_.v330) {
        goto LABEL_495;
      }
      if (v261 < v257) {
        v262 = (__int64*)v263;
      }
      if (v257 < v262[4]) {
      LABEL_495:
        v265 = GameData_21c9ac8;
        if (GameData_21c9ac8 >= (unsigned __int64)GameData_21c9ad0) {
          v267 = GameData_21c9ac0;
          v268 = GameData_21c9ac8 - GameData_21c9ac0;
          v269 = (GameData_21c9ac8 - GameData_21c9ac0) >> 3;
          v270 = v269 + 1;
          if ((unsigned __int64)(v269 + 1) >> 61 != 0) {
            goto LABEL_615;
          }
          v271 = GameData_21c9ad0 - GameData_21c9ac0;
          if ((GameData_21c9ad0 - GameData_21c9ac0) >> 2 > v270) {
            v270 = v271 >> 2;
          }
          if ((unsigned __int64)v271 >= 0x7FFFFFFFFFFFFFF8LL) {
            v272 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v272 = v270;
          }
          if (v272 != 0) {
            if (v272 >> 61 != 0) {
              goto LABEL_617;
            }
            v273 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v272, 16, 0);
          }
          else {
            v273 = 0;
          }
          v274 = v273 + 8 * v272;
          v275 = v273 + v268 - 8 * v269;
          *(_QWORD*)(v273 + v268) = v47;
          v266 = v273 + v268 + 8;
          memcpy(v275, v267, v268);
          GameData_21c9ac0 = v275;
          GameData_21c9ac8 = v266;
          GameData_21c9ad0 = v274;
          v4 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v267 != 0) {
            v276 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v276 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v276, v267);
          }
        }
        else {
          *(_QWORD*)GameData_21c9ac8 = v47;
          v266 = v265 + 8;
        }
        GameData_21c9ac8 = v266;
        v277 = v330_.v330;
        v278 = &v330_.v330;
      LABEL_513:
        v36 = (unsigned __int64)v278;
        if (v277 != nullptr) {
          do {
            v278 = (__int64**)v277;
            v279 = v277[4];
            if (v259 < v279) {
              v277 = *v278;
              goto LABEL_513;
            }
            if (v279 >= v259) {
              goto LABEL_522;
            }
            v277 = v278[1];
          } while (v277 != nullptr);
          v36 = (unsigned __int64)(v278 + 1);
        }
        v280 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v4, 40, 16, 0);
        v280[4] = v259;
        *v280 = 0;
        v280[1] = 0;
        v280[2] = (__int64)v278;
        *(_QWORD*)v36 = v280;
        if (*v329 != nullptr) {
          v329 = (__int64**)*v329;
          v281 = *(__int64**)v36;
        }
        else {
          v281 = v280;
        }
        fw_containers_BalanceAfterInsert(v330_.v330, v281);
        ++v330_.v331;
      }
    }
  LABEL_522:
    v282 = *(_QWORD*)(v47 + 632);
    if (v282 != 0) {
      v283 = game_HashString_alt1(*(_QWORD*)(v47 + 632));
      v284 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v4, 40, 16, 0);
      v284[2] = v283;
      v284[3] = v283;
      v284[4] = v282;
      *v284 = 0;
      v284[1] = v283;
      if (GameRoutine_688220((__int64)&GameData_21c9ad8, v283, v284 + 2) !=
          nullptr) {
        v46 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v46, v284);
      }
      else {
        v285 = v284[1];
        v286 = GameData_21c9ae0;
        v287 = GameData_21c9ae0 - 1;
        if ((GameData_21c9ae0 & (GameData_21c9ae0 - 1)) != 0) {
          if (v285 >= GameData_21c9ae0) {
            v285 %= (unsigned __int64)GameData_21c9ae0;
          }
        }
        else {
          v285 &= v287;
        }
        v288 = GameData_21c9ad8;
        v289 = *(__int64**)(GameData_21c9ad8 + 8 * v285);
        if (v289 != nullptr) {
          *v284 = *v289;
          *v289 = (__int64)v284;
        }
        else {
          v290 = GameData_21c9ae8;
          GameData_21c9ae8 = (__int64)v284;
          *v284 = v290;
          *(_QWORD*)(v288 + 8 * v285) = &GameData_21c9ae8;
          if (*v284 != 0) {
            v291 = *(_QWORD*)(*v284 + 8);
            if ((v286 & v287) != 0) {
              if (v291 >= v286) {
                v291 %= v286;
              }
            }
            else {
              v291 &= v287;
            }
            *(_QWORD*)(GameData_21c9ad8 + 8 * v291) = v284;
          }
        }
        ++GameData_21c9af0;
      }
    }
    ++v45;
  }
  if (GameData_21c9a90 != GameData_21c9a98) {
    GameRoutine_6886c0(
        GameData_21c9a90, (__int64*)GameData_21c9a98,
        (2 * __clz((GameData_21c9a98 - GameData_21c9a90) >> 3)) ^ 0x7E, 1);
  }
  if (a1[19] != 0) {
    v302 = (_QWORD*)a1[18];
    if (v302 != nullptr) {
      do {
        v303 = (_QWORD*)*v302;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v304 = 128;
        }
        else {
          v304 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v304, v302);
        v302 = v303;
      } while (v303 != nullptr);
    }
    v305 = a1[17];
    a1[18] = 0;
    if (v305 != 0) {
      v306 = v305 & 7;
      if (v305 >= 8) {
        v308 = v305 & 0xFFFFFFFFFFFFFFF8LL;
        v307 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v307) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v307 + 48) = 0;
          v309 = a1[16] + 8 * v307;
          v307 += 8;
          *(_QWORD*)(v309 + 56) = 0;
        } while (v308 != v307);
      }
      else {
        v307 = 0;
      }
      if (v306 != 0) {
        v310 = 8 * v307;
        do {
          --v306;
          *(_QWORD*)(a1[16] + v310) = 0;
          v310 += 8;
        } while (v306 != 0);
      }
    }
    a1[19] = 0;
  }
  v311 = (unsigned int**)a1[8];
  v312 = (unsigned int**)a1[9];
  while (v311 != v312) {
    v313 = *v311;
    v314 = **v311;
    if (v314 != 0) {
      GameRoutine_68d060((unsigned __int64)(a1 + 1), v314, (__int64)*v311);
    }
    v315 = Resources_66bfc0((unsigned __int64*)v313);
    if (v315 != 0) {
      GameRoutine_68d060((unsigned __int64)(a1 + 1), v315, (__int64)v313);
    }
    ++v311;
  }
  v325_.v325 = (__int64)GameData_1f90b60;
  v325_.v328 = &v325_.v325;
  GameConst_7f97f0((__int64)&v325_.v325);
  if (v325_.v328 == &v325_.v325) {
    v316 = 32;
  }
  else {
    if (v325_.v328 == nullptr) {
      goto LABEL_605;
    }
    v316 = 40;
  }
  (*(void (**)(__int64))(*v325_.v328 + v316))((__int64)v325_.v328);
LABEL_605:
  GameRoutine_68c910((__int64)&v329, v330_.v330);
  result = GameRoutine_68c910((__int64)&v332, v333_.v333[0]);
  v318 = v336_.v336;
  if (v336_.v336 != nullptr) {
    do {
      v319 = (_QWORD*)*v318;
      if (*(_QWORD*)(*v4 + 200) != 0) {
        v320 = 128;
      }
      else {
        v320 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v4 + v320, v318);
      v318 = v319;
    } while (v319 != nullptr);
  }
  v321 = v333_.v334;
  v333_.v334 = 0;
  if (v321 != 0) {
    v322 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v322 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v4 + v322, v321);
  }
  return result;
}

__int64 PersonFile_Unknown5()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _QWORD* i;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = GameData_21c99d0;
  v0 = GameData_21c99d8;
  v2 = fw_memory_g_heap_manager_ptr;
  if (GameData_21c99d0 != GameData_21c99d8) {
    v3 = GameData_21c99d8;
    do {
      v4 = *(_BYTE*)(v3 - 24);
      v3 -= 24;
      if ((v4 & 1) != 0) {
        v5 = *(_QWORD*)(v0 - 8);
        if (v5 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
        }
      }
      v0 = v3;
    } while (v3 != v1);
  }
  GameData_21c99d8 = v1;
  if (GameData_21c9a00 != 0) {
    for (i = (_QWORD*)GameData_21c99f8; i != nullptr;
         result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, v10)) {
      v10 = i;
      i = (_QWORD*)*i;
      if ((v10[2] & 1) != 0 && v10[4] != 0) {
        v11 = v10;
        v12 = v10[4];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v13, v12);
        v10 = v11;
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
    }
    GameData_21c99f8 = 0;
    if (GameData_21c99f0 != 0) {
      v14 = GameData_21c99f0 & 7;
      if ((unsigned __int64)GameData_21c99f0 >= 8) {
        v16 = GameData_21c99f0 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(GameData_21c99e8 + 8 * v15) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 8) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 16) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 24) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 32) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 40) = 0;
          *(_QWORD*)(GameData_21c99e8 + 8 * v15 + 48) = 0;
          v17 = GameData_21c99e8 + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(GameData_21c99e8 + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    GameData_21c9a00 = 0;
  }
  if (GameData_21c9a50 != 0) {
    v19 = (_QWORD*)GameData_21c9a48;
    if (GameData_21c9a48 != 0) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21, v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    GameData_21c9a48 = 0;
    if (GameData_21c9a40 != 0) {
      v22 = GameData_21c9a40 & 7;
      if ((unsigned __int64)GameData_21c9a40 >= 8) {
        v24 = GameData_21c9a40 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(GameData_21c9a38 + 8 * v23) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 8) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 16) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 24) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 32) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 40) = 0;
          *(_QWORD*)(GameData_21c9a38 + 8 * v23 + 48) = 0;
          v25 = GameData_21c9a38 + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(GameData_21c9a38 + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    GameData_21c9a50 = 0;
  }
  GameData_21c9a68 = GameData_21c9a60;
  GameData_21c9a80 = GameData_21c9a78;
  GameData_21c9a98 = GameData_21c9a90;
  GameData_21c9ab0 = GameData_21c9aa8;
  GameData_21c9ac8 = GameData_21c9ac0;
  if (GameData_21c9af0 != 0) {
    v27 = (_QWORD*)GameData_21c9ae8;
    if (GameData_21c9ae8 != 0) {
      do {
        v28 = (_QWORD*)*v27;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v29, v27);
        v27 = v28;
      } while (v28 != nullptr);
    }
    GameData_21c9ae8 = 0;
    if (GameData_21c9ae0 != 0) {
      v30 = GameData_21c9ae0 & 7;
      if ((unsigned __int64)GameData_21c9ae0 >= 8) {
        v32 = GameData_21c9ae0 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        do {
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 8) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 16) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 24) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 32) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 40) = 0;
          *(_QWORD*)(GameData_21c9ad8 + 8 * v31 + 48) = 0;
          v33 = GameData_21c9ad8 + 8 * v31;
          v31 += 8;
          *(_QWORD*)(v33 + 56) = 0;
        } while (v32 != v31);
      }
      else {
        v31 = 0;
      }
      if (v30 != 0) {
        v34 = 8 * v31;
        do {
          --v30;
          *(_QWORD*)(GameData_21c9ad8 + v34) = 0;
          v34 += 8;
        } while (v30 != 0);
      }
    }
    GameData_21c9af0 = 0;
  }
  return result;
}

unsigned __int64 game_PersonFile_OnBuild_lambda1_Invoke(__int64 a1, char* a2)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  char v27[4];

  v2 = (__int64)*(&game_g_hero_ids + (unsigned __int8)*a2);
  v27[0] = *a2;
  result = game_HashString(v2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v11 & v6) != v7) {
                return result;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_26:
                v12 = (int*)v9[3];
                if (v12 != nullptr) {
                  v13 = GameData_21c9a68;
                  if (GameData_21c9a68 >= (unsigned __int64)GameData_21c9a70) {
                    v15 = GameData_21c9a60;
                    v16 = GameData_21c9a68 - GameData_21c9a60;
                    v17 = (GameData_21c9a68 - GameData_21c9a60) >> 3;
                    v18 = v17 + 1;
                    if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
                      GameRoutine_688200();
                    }
                    v19 = GameData_21c9a70 - GameData_21c9a60;
                    v20 = fw_memory_g_heap_manager_ptr;
                    if ((GameData_21c9a70 - GameData_21c9a60) >> 2 > v18) {
                      v18 = v19 >> 2;
                    }
                    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v21 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v21 = v18;
                    }
                    if (v21 != 0) {
                      if (v21 >> 61 != 0) {
                        GameRoutine_60a210(result);
                      }
                      v22 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v21, 16,
                          0);
                    }
                    else {
                      v22 = 0;
                    }
                    v23 = v22 + 8 * v21;
                    v24 = v22 + v16 - 8 * v17;
                    *(_QWORD*)(v22 + v16) = v12;
                    v14 = v22 + v16 + 8;
                    memcpy(v24, v15, v16);
                    GameData_21c9a60 = v24;
                    GameData_21c9a68 = v14;
                    GameData_21c9a70 = v23;
                    if (v15 != 0) {
                      v25 = 128;
                      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
                        v25 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v15);
                    }
                  }
                  else {
                    *(_QWORD*)GameData_21c9a68 = v12;
                    v14 = v13 + 8;
                  }
                  GameData_21c9a68 = v14;
                  v26 = *v12;
                  return GameRoutine_68d9a0(&v26, &v26, v27);
                }
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return result;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return result;
}

unsigned int* PersonFile_68d9a0(unsigned int* result, unsigned int* a2,
                                _BYTE* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD** v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;

  v4 = *result;
  v7 = GameData_21c9a40;
  if (GameData_21c9a40 != 0) {
    v8 = GameData_21c9a40 - 1;
    if ((GameData_21c9a40 & (GameData_21c9a40 - 1)) != 0) {
      v3 = *result;
      if (GameData_21c9a40 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)GameData_21c9a40;
      }
    }
    else {
      v3 = ((_DWORD)GameData_21c9a40 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64***)(GameData_21c9a38 + 8 * v3);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 != nullptr) {
        if ((GameData_21c9a40 & v8) == 0) {
          while (1) {
            v12 = v10[1];
            if (v12 == v4) {
              if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            v10 = (__int64*)*v10;
            if (v10 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = v10[1];
          if (v11 == v4) {
            if (*((_DWORD*)v10 + 4) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= GameData_21c9a40) {
              v11 %= (unsigned __int64)GameData_21c9a40;
            }
            if (v11 != v3) {
              break;
            }
          }
          v10 = (__int64*)*v10;
        } while (v10 != nullptr);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (unsigned int*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v14 = *a2;
  v15 = (__int64)result;
  *(_QWORD*)result = 0;
  *((_QWORD*)result + 1) = v4;
  v16 = *(float*)&GameData_21c9a58;
  result[4] = v14;
  *((_BYTE*)result + 20) = *a3;
  v17 = (float)(unsigned __int64)(GameData_21c9a50 + 1);
  if (v7 == 0 || (float)(v16 * (float)v7) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v7 >= 3) {
      v19 = (v7 & (v7 - 1)) != 0;
    }
    v20 = v19 | (2 * v7);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      v22 = v21;
    }
    else {
      v22 = v20;
    }
    if (v22 == 1) {
      v22 = 2;
    }
    else if ((v22 & (v22 - 1)) != 0) {
      result = (unsigned int*)std___1___next_prime(v22);
      v7 = GameData_21c9a40;
      v22 = (unsigned __int64)result;
    }
    if (v22 <= v7) {
      if (v22 >= v7) {
        goto LABEL_83;
      }
      result = (unsigned int*)vcvtps_u64_f32(
          (float)(unsigned __int64)GameData_21c9a50 /
          *(float*)&GameData_21c9a58);
      if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
        result = (unsigned int*)std___1___next_prime(result);
      }
      else {
        v27 = 1LL << (-(char)__clz((unsigned __int64)result - 1) & 63);
        if ((unsigned __int64)result >= 2) {
          result = (unsigned int*)v27;
        }
      }
      if (v22 <= (unsigned __int64)result) {
        v22 = (unsigned __int64)result;
      }
      if (v22 >= v7) {
        goto LABEL_83;
      }
      if (v22 == 0) {
        v38 = GameData_21c9a38;
        GameData_21c9a38 = 0;
        if (v38 != 0) {
          v39 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v39 = 56;
          }
          result =
              (unsigned int*)nn_mem_StandardAllocator_Free(*v13 + v39, v38);
        }
        GameData_21c9a40 = 0;
        goto LABEL_83;
      }
    }
    if (v22 >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    result = (unsigned int*)fw_memory_HeapManager_Allocate_alt1(*v13, 8 * v22,
                                                                16, 0);
    v23 = GameData_21c9a38;
    GameData_21c9a38 = (__int64)result;
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v24 = 56;
      }
      result = (unsigned int*)nn_mem_StandardAllocator_Free(*v13 + v24, v23);
    }
    v25 = v22 & 7;
    GameData_21c9a40 = v22;
    if (v22 >= 8) {
      v26 = 0;
      do {
        *(_QWORD*)(GameData_21c9a38 + 8 * v26) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 8) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 16) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 24) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 32) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 40) = 0;
        *(_QWORD*)(GameData_21c9a38 + 8 * v26 + 48) = 0;
        v28 = GameData_21c9a38 + 8 * v26;
        v26 += 8;
        *(_QWORD*)(v28 + 56) = 0;
      } while ((v22 & 0x1FFFFFFFFFFFFFF8LL) != v26);
    }
    else {
      v26 = 0;
    }
    if ((v22 & 7) != 0) {
      v29 = 8 * v26;
      do {
        --v25;
        *(_QWORD*)(GameData_21c9a38 + v29) = 0;
        v29 += 8;
      } while (v25 != 0);
    }
    v30 = (_QWORD**)GameData_21c9a48;
    if (GameData_21c9a48 != 0) {
      v31 = *(_QWORD*)(GameData_21c9a48 + 8);
      v32 = v22 - 1;
      if ((v22 & (v22 - 1)) != 0) {
        if (v31 >= v22) {
          v31 %= v22;
        }
        *(_QWORD*)(GameData_21c9a38 + 8 * v31) = &GameData_21c9a48;
        v33 = *v30;
        if (*v30 == nullptr) {
          goto LABEL_83;
        }
        while (1) {
          v34 = v33[1];
          if (v34 >= v22) {
            v34 %= v22;
          }
          if (v34 != v31) {
            if (*(_QWORD*)(GameData_21c9a38 + 8 * v34) == 0) {
              *(_QWORD*)(GameData_21c9a38 + 8 * v34) = v30;
              goto LABEL_60;
            }
            *v30 = (_QWORD*)*v33;
            *v33 = **(_QWORD**)(GameData_21c9a38 + 8 * v34);
            **(_QWORD**)(GameData_21c9a38 + 8 * v34) = v33;
            v33 = v30;
          }
          v34 = v31;
        LABEL_60:
          v30 = (_QWORD**)v33;
          v33 = (_QWORD*)*v33;
          v31 = v34;
          if (v33 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v35 = v31 & v32;
      *(_QWORD*)(GameData_21c9a38 + 8 * v35) = &GameData_21c9a48;
      while (1) {
        v36 = *v30;
        if (*v30 == nullptr) {
          break;
        }
        v37 = v36[1] & v32;
        if (v37 == v35) {
          v30 = (_QWORD**)*v30;
        }
        else if (*(_QWORD*)(GameData_21c9a38 + 8 * v37) != 0) {
          *v30 = (_QWORD*)*v36;
          *v36 = **(_QWORD**)(GameData_21c9a38 + 8 * v37);
          **(_QWORD**)(GameData_21c9a38 + 8 * v37) = v36;
        }
        else {
          *(_QWORD*)(GameData_21c9a38 + 8 * v37) = v30;
          v30 = (_QWORD**)v36;
          v35 = v37;
        }
      }
    }
  LABEL_83:
    v7 = GameData_21c9a40;
    if ((v7 & (v7 - 1)) != 0) {
      if (GameData_21c9a40 <= v4) {
        v3 = v4 % GameData_21c9a40;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)GameData_21c9a40 - 1) & (unsigned int)v4;
    }
  }
  v40 = GameData_21c9a38;
  v41 = *(__int64**)(GameData_21c9a38 + 8 * v3);
  if (v41 != nullptr) {
    *(_QWORD*)v15 = *v41;
    *v41 = v15;
  }
  else {
    v42 = GameData_21c9a48;
    GameData_21c9a48 = v15;
    *(_QWORD*)v15 = v42;
    *(_QWORD*)(v40 + 8 * v3) = &GameData_21c9a48;
    if (*(_QWORD*)v15 != 0) {
      v43 = *(_QWORD*)(*(_QWORD*)v15 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v43 >= v7) {
          v43 %= v7;
        }
      }
      else {
        v43 &= v7 - 1;
      }
      *(_QWORD*)(GameData_21c9a38 + 8 * v43) = v15;
    }
  }
  ++GameData_21c9a50;
  return result;
}

#pragma GCC visibility pop
