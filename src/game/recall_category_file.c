#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RecallCategoryFile_9eeb60_alt1(__int64 result) __asm__(
    "RecallCategoryFile_9eeb60");
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_9f1800(__int64* result, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_9e68c0(unsigned __int8);
__int64 GameRoutine_65bed0(__int64*, __int64);
__int64 GameRoutine_9f9420(unsigned __int8*, _BYTE**);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
char* game_util_Format(const char*, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _QWORD GameData_21f8620[3];
extern __int64* GameData_212cdc8[14];
extern __int64 GameData_21f85f0;
extern __int64 GameData_21f85f8;
extern __int64 GameData_21f8980[];
extern __int64 GameData_21f9008;
extern __int64 GameData_21f9010;
extern __int64 GameData_21f9018;
extern __int64 GameData_21f9020;
extern __int64 GameData_21f9030;
extern __int64 GameData_21f9038;
extern __int64 GameData_21f9040;
extern __int64 GameData_21f9048;
extern __int64 GameData_21f9050;
extern __int64 GameData_21f9060;
extern __int64 GameData_21f9068;
extern __int64 GameData_21f9070;
extern __int64 GameData_21f9078;
extern char GameData_1a9f09e;
extern char GameData_1ae5b6b[];
extern char GameData_1afcff3[];
unsigned __int64 GameRoutine_9eb2c0(unsigned __int64 result, unsigned __int8,
                                    __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9f1790();
void __attribute__((noreturn)) GameRoutine_9f17b0();
void __attribute__((noreturn)) GameRoutine_9f17d0();
unsigned __int64
RecallCategoryFile_Unknown4_alt1() __asm__("RecallCategoryFile_Unknown4");
__int64
RecallCategoryFile_Unknown5_alt1() __asm__("RecallCategoryFile_Unknown5");
__int64 GameRoutine_65bed0_alt1(__int64*,
                                const char*) __asm__("GameRoutine_65bed0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameRoutine_66cf00_alt1(__int64*) __asm__("GameRoutine_66cf00");
void GameRoutine_66d660_alt1(__int64*) __asm__("GameRoutine_66d660");
void GameRoutine_9eb2c0_alt1(unsigned __int8, unsigned __int8,
                             __int64) __asm__("GameRoutine_9eb2c0");
void GameRoutine_9f1800_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_9f1800");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RecallCategoryFile_Unknown4();
void RecallCategoryFile_Unknown5();
void RecallCategoryFile_9eeb60(__int64 a1);

void RecallCategoryFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  _BOOL8 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 primeEm;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned int v39;
  unsigned __int64** v40;
  __int64 v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64** v50;
  _QWORD* v51;
  __int64 v52;
  __int64** v53;
  __int64* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int8 v68;
  __int64 i;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  char* v81;
  char* v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64* v85;
  char* v86;
  char* v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int8** v91;
  unsigned __int8* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int8* v103;
  bool v104;
  unsigned __int8* v105;
  unsigned __int8* v106;
  unsigned __int8* v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int8* v111;
  bool v112;
  unsigned __int8* v113;
  unsigned __int8* v114;
  unsigned __int8* v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  _QWORD* v120;
  unsigned __int8* v121;
  unsigned __int8** v122;
  char* v123;
  unsigned __int64 v124;
  unsigned __int8* v125;
  bool v126;
  unsigned __int8* v127;
  unsigned __int8* v128;
  unsigned __int8* v129;
  char* v130;
  unsigned __int64 v131;
  unsigned __int8* v132;
  bool v133;
  unsigned __int8* v134;
  unsigned __int8* v135;
  unsigned __int8* v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  char* v143;
  __int64 v144;
  unsigned __int64 v145;
  char* v146;
  unsigned __int64 v147;
  bool v148;
  unsigned __int64 v149;
  char* v150;
  char* v151;
  _QWORD* v152;
  char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  char* v158;
  unsigned __int64 v159;
  bool v160;
  unsigned __int64 v161;
  char* v162;
  char* v163;
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
  __int64* v178;
  unsigned __int64 v179;
  __int64 v180;
  signed __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64* v189;
  __int64 v190;
  __int64* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  _QWORD* v217;
  _QWORD* v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  unsigned __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 j;
  __int64* v226;
  _QWORD* v227;
  __int64* v228;
  _QWORD* v229;
  __int64 v230;
  unsigned __int64 v231;
  __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  __int64 k;
  __int64** v237;
  __int64* v238;
  __int64* v239;
  __int64* v240;
  __int64 v241;
  __int64 v242;
  unsigned __int64 v243;
  unsigned __int64 v244;
  unsigned __int64 v246;
  unsigned __int64 v247;
  _QWORD* v248;
  _QWORD* v249;
  unsigned __int64 v250;
  __int64 v251;
  _QWORD* v252;
  __int64 v253;
  _QWORD* v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  unsigned __int64** v258;
  unsigned __int64** v259;
  __int64 v260;
  unsigned __int64 v261;
  __int64 v262;
  unsigned __int8 v263;
  __int64* v264;
  unsigned __int8 v265[4];
  struct {
    __int64 v266;
    unsigned __int64 v267;
  } v266_;
  struct {
    _QWORD* v268;
    unsigned __int64 v269;
    float v270;
  } v268_;
  struct {
    unsigned __int8* v271;
    __int64 v272;
    __int64 v273;
    char* v274;
  } v271_;
  struct {
    __int64 v275[3];
    __int64 v276;
    char* v277;
  } v275_;
  struct {
    __int64 v278[3];
    __int64 v279;
    __int64 v280;
    __int64 v281;
    unsigned __int8* v282;
  } v278_;
  __int64 v283[2];
  unsigned __int64 v284[4];

  v1 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (GameData_21f9078 != 0) {
    v2 = (_QWORD*)GameData_21f9070;
    if (GameData_21f9070 != 0) {
      v0 = 128;
      do {
        v4 = (_QWORD*)*v2;
        v5 = v2[3];
        if (v5 != 0) {
          v6 = *v1;
          v2[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
        }
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v1 + v3, (__int64)v2);
        v2 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f9070 = 0;
    if (GameData_21f9068 != 0) {
      v8 = GameData_21f9068 & 7;
      if ((unsigned __int64)GameData_21f9068 >= 8) {
        v10 = GameData_21f9068 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21f9060 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v9 + 48) = 0;
          v11 = GameData_21f9060 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21f9060 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21f9078 = 0;
  }
  v13 = 0;
  v268_.v268 = nullptr;
  v268_.v269 = 0;
  v266_.v266 = 0;
  v266_.v267 = 0;
  GameData_21f9050 = GameData_21f9048;
  GameData_21f9038 = GameData_21f9030;
  v268_.v270 = 0x1.0000000000000p+0f;
  do {
    v14 = game_9e68c0(v13);
    v15 = *v14;
    v16 = v266_.v267;
    if (v266_.v267 != 0) {
      v17 = v266_.v267 - 1;
      if ((v266_.v267 & (v266_.v267 - 1)) != 0) {
        v0 = *v14;
        if (v15 >= v266_.v267) {
          v0 = v15 % v266_.v267;
        }
      }
      else {
        v0 = v17 & v15;
      }
      v18 = *(_QWORD**)(v266_.v266 + 8 * v0);
      if (v18 != nullptr) {
        v19 = (_QWORD*)*v18;
        if (v19 != nullptr) {
          if ((v266_.v267 & v17) == 0) {
            while (1) {
              v21 = v19[1];
              if (v21 == v15) {
                if (v19[2] == v15) {
                  goto LABEL_80;
                }
              }
              else if ((v21 & v17) != v0) {
                goto LABEL_43;
              }
              v19 = (_QWORD*)*v19;
              if (v19 == nullptr) {
                goto LABEL_43;
              }
            }
          }
          do {
            v20 = v19[1];
            if (v20 == v15) {
              if (v19[2] == v15) {
                goto LABEL_80;
              }
            }
            else {
              if (v20 >= v266_.v267) {
                v20 %= v266_.v267;
              }
              if (v20 != v0) {
                break;
              }
            }
            v19 = (_QWORD*)*v19;
          } while (v19 != nullptr);
        }
      }
    }
  LABEL_43:
    v22 = fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
    v23 = v268_.v269;
    v24 = v268_.v270;
    v25 = v22;
    *(_QWORD*)v22 = 0;
    *(_QWORD*)(v22 + 8) = v15;
    *(_QWORD*)(v22 + 16) = v15;
    *(_BYTE*)(v22 + 24) = v13;
    v26 = (float)(v23 + 1);
    if (v16 == 0 || (float)(v24 * (float)v16) < v26) {
      v27 = v26 / v24;
      v28 = (v16 & (v16 - 1)) != 0;
      if (v16 < 3) {
        v28 = true;
      }
      v29 = v28 | (2 * v16);
      v30 = vcvtps_u64_f32(v27);
      if (v29 <= v30) {
        v31 = v30;
      }
      else {
        v31 = v29;
      }
      if (v31 == 1) {
        v31 = 2;
      }
      else if ((v31 & (v31 - 1)) != 0) {
        primeEm = std___1___next_prime_alt1(v31);
        v16 = v266_.v267;
        v31 = primeEm;
      }
      if (v31 > v16) {
        goto LABEL_55;
      }
      if (v31 < v16) {
        v33 = vcvtps_u64_f32((float)v268_.v269 / v268_.v270);
        if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
          v33 = std___1___next_prime_alt1(v33);
        }
        else {
          v34 = 1LL << -(char)__clz(v33 - 1);
          if (v33 >= 2) {
            v33 = v34;
          }
        }
        if (v31 <= v33) {
          v31 = v33;
        }
        if (v31 < v16) {
        LABEL_55:
          GameRoutine_9f1800_alt1(&v266_.v266, v31);
        }
      }
      v16 = v266_.v267;
      if ((v266_.v267 & (v266_.v267 - 1)) != 0) {
        if (v15 >= v266_.v267) {
          v0 = v15 % v266_.v267;
        }
        else {
          v0 = v15;
        }
      }
      else {
        v0 = (v266_.v267 - 1) & v15;
      }
    }
    v35 = v266_.v266;
    v36 = *(__int64**)(v266_.v266 + 8 * v0);
    if (v36 != nullptr) {
      *(_QWORD*)v25 = *v36;
      *v36 = v25;
    }
    else {
      v37 = v268_.v268;
      v268_.v268 = (_QWORD*)v25;
      *(_QWORD*)v25 = v37;
      *(_QWORD*)(v35 + 8 * v0) = &v268_.v268;
      if (*(_QWORD*)v25 != 0) {
        v38 = *(_QWORD*)(*(_QWORD*)v25 + 8LL);
        if ((v16 & (v16 - 1)) != 0) {
          if (v38 >= v16) {
            v38 %= v16;
          }
        }
        else {
          v38 &= v16 - 1;
        }
        *(_QWORD*)(v266_.v266 + 8 * v38) = v25;
      }
    }
    ++v268_.v269;
  LABEL_80:
    v39 = v13++;
  } while (v39 < 0x23);
  v265[0] = 0;
  v40 = *(unsigned __int64***)(*GameData_212cdc8[0] + 64);
  v258 = *(unsigned __int64***)(*GameData_212cdc8[0] + 72);
  if (v40 != v258) {
  LABEL_85:
    v42 = *v40;
    v259 = v40;
    v43 = **v40;
    if (v43 != 0) {
      if (v266_.v267 != 0 && v268_.v269 != 0) {
        v45 = v266_.v267 - 1;
        if ((v266_.v267 & (v266_.v267 - 1)) != 0) {
          v46 = *v42;
          if (v43 >= v266_.v267) {
            v46 = v43 % v266_.v267;
          }
        }
        else {
          v46 = v45 & v43;
        }
        v53 = *(__int64***)(v266_.v266 + 8 * v46);
        if (v53 != nullptr) {
          v54 = *v53;
          if (v54 != nullptr) {
            if ((v266_.v267 & v45) == 0) {
              while (1) {
                v56 = v54[1];
                if (v56 == v43) {
                  if (v54[2] == v43) {
                    goto LABEL_83;
                  }
                }
                else if ((v56 & v45) != v46) {
                  goto LABEL_84;
                }
                v54 = (__int64*)*v54;
                if (v54 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            while (1) {
              v55 = v54[1];
              if (v55 == v43) {
                if (v54[2] == v43) {
                LABEL_83:
                  v265[0] = *((_BYTE*)v54 + 24);
                  v271_.v271 = v265;
                  v41 = GameRoutine_9f9420(v265, &v271_.v271);
                  *(_QWORD*)(v41 + 32) = *(_QWORD*)(v41 + 24);
                  goto LABEL_84;
                }
              }
              else {
                if (v55 >= v266_.v267) {
                  v55 %= v266_.v267;
                }
                if (v55 != v46) {
                  goto LABEL_84;
                }
              }
              v54 = (__int64*)*v54;
              if (v54 == nullptr) {
                goto LABEL_84;
              }
            }
          }
        }
      }
      goto LABEL_84;
    }
    if (v265[0] == 0) {
      goto LABEL_84;
    }
    v47 = (__int64*)v42[3];
    if (v47 == nullptr) {
      goto LABEL_84;
    }
    v271_.v271 = v265;
    v48 = (_QWORD*)GameRoutine_9f9420(v265, &v271_.v271);
    v50 = (unsigned __int64**)v48[4];
    v49 = v48[5];
    v51 = v48;
    if ((unsigned __int64)v50 >= v49) {
      v57 = v48[3];
      v58 = (char*)v50 - v57;
      v59 = ((__int64)v50 - v57) >> 3;
      v60 = v59 + 1;
      if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
        GameRoutine_9f1790();
      }
      v61 = v49 - v57;
      if (v61 >> 2 > v60) {
        v60 = v61 >> 2;
      }
      if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF8LL) {
        v62 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v62 = v60;
      }
      if (v62 != 0) {
        if (v62 >> 61 != 0) {
        LABEL_452:
          GameRoutine_60a210();
        }
        v63 = fw_memory_HeapManager_Allocate(*v1, 8 * v62, 16, 0);
      }
      else {
        v63 = 0;
      }
      v64 = v63 + 8 * v62;
      v65 = (unsigned __int64)v50 - v57;
      v66 = (__int64)&v58[v63 + -8 * v59];
      *(_QWORD*)&v58[v63] = v42;
      v52 = (__int64)&v58[v63 + 8];
      memcpy_alt1(v66, v57, v65);
      v51[3] = v66;
      v51[4] = v52;
      v51[5] = v64;
      if (v57 != 0) {
        v67 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v1 + v67, v57);
      }
    }
    else {
      *v50 = v42;
      v52 = (__int64)(v50 + 1);
    }
    v51[4] = v52;
    v68 = v265[0];
    v70 = (__int64*)v47[1];
    for (i = v47[2]; (__int64*)i != v70; i -= 128) {
      v74 = *(_QWORD*)(i - 32);
      if (v74 != 0) {
        *(_QWORD*)(i - 24) = v74;
        v75 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v75 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v1 + v75, v74);
      }
      if ((*(_BYTE*)(i - 56) & 1) != 0) {
        v76 = *(_QWORD*)(i - 40);
        if (v76 != 0) {
          v77 = 128;
          if (*(_QWORD*)(*v1 + 200) == 0) {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v1 + v77, v76);
        }
      }
      if ((*(_BYTE*)(i - 96) & 1) != 0) {
        v78 = *(_QWORD*)(i - 80);
        if (v78 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*v1 + 200) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v1 + v79, v78);
        }
      }
    }
    v71 = v47[4];
    v47[2] = (__int64)v70;
    v264 = v47 + 4;
    v47[5] = v71;
    v72 = *(_QWORD*)(*v47 + 40);
    if (v72 != 0) {
      v73 = *(_QWORD*)(*v47 + 40);
      v263 = v68;
      v262 = v73;
      while (1) {
        LODWORD(v271_.v271) = 0;
        memset(v275_.v275, 0, sizeof(v275_.v275));
        v275_.v276 = 0;
        memset(v278_.v278, 0, sizeof(v278_.v278));
        v278_.v279 = 0;
        v278_.v280 = 0;
        v278_.v281 = 0;
        v278_.v282 = nullptr;
        v271_.v272 = v73;
        v271_.v273 = 0;
        v271_.v274 = &GameData_1a9f09e;
        v275_.v277 = &GameData_1a9f09e;
        LODWORD(v271_.v271) = *(unsigned __int8*)(*v47 + 48);
        v80 = game_9e68c0(v68);
        v81 =
            game_util_Format_alt1(GameData_1ae5b6b, v80[1], *(_QWORD*)(v72 + 8),
                                  **(unsigned int**)(v73 + 24));
        GameRoutine_65bed0_alt1(v283, v81);
        v271_.v273 = v283[0];
        v271_.v274 = (char*)v283[1];
        if ((v275_.v275[0] & 1) != 0) {
          break;
        }
        if ((v284[0] & 1) == 0) {
          qmemcpy(v275_.v275, v284, sizeof(v275_.v275));
          goto LABEL_164;
        }
        GameRoutine_64df20(v275_.v275, v284[2], v284[1]);
        if ((v284[0] & 1) != 0) {
          goto LABEL_159;
        }
      LABEL_164:
        v85 = game_9e68c0(v68);
        v86 =
            game_util_Format_alt1(GameData_1afcff3, v85[1], *(_QWORD*)(v72 + 8),
                                  **(unsigned int**)(v73 + 24));
        if (*(_QWORD*)(v271_.v272 + 96) != 0) {
          GameRoutine_65bed0_alt1(v283, v86);
          v275_.v276 = v283[0];
          v275_.v277 = (char*)v283[1];
          if ((v278_.v278[0] & 1) != 0) {
            if ((v284[0] & 1) != 0) {
              v87 = (char*)v284[2];
            }
            else {
              v87 = (char*)v284 + 1;
            }
            if ((v284[0] & 1) != 0) {
              v88 = v284[1];
            }
            else {
              v88 = (unsigned __int64)LOBYTE(v284[0]) >> 1;
            }
            SpineModel_64dde0(v278_.v278, (__int64)v87, v88);
            if ((v284[0] & 1) != 0) {
            LABEL_180:
              if (v284[2] != 0) {
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v89 = 128;
                }
                else {
                  v89 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v1 + v89, v284[2]);
              }
            }
          }
          else if ((v284[0] & 1) != 0) {
            GameRoutine_64df20(v278_.v278, v284[2], v284[1]);
            if ((v284[0] & 1) != 0) {
              goto LABEL_180;
            }
          }
          else {
            qmemcpy(v278_.v278, v284, sizeof(v278_.v278));
          }
        }
        else {
          v275_.v276 = 0;
          v275_.v277 = &GameData_1a9f09e;
          if ((v278_.v278[0] & 1) != 0) {
            *(_BYTE*)v278_.v278[2] = 0;
            v278_.v278[1] = 0;
          }
          else {
            LOWORD(v278_.v278[0]) = 0;
          }
        }
        v91 = (unsigned __int8**)v47[2];
        v90 = v47[3];
        if ((unsigned __int64)v91 >= v90) {
          v95 = v47[1];
          v96 = (__int64)v91 - v95;
          v97 = (v96 >> 7) + 1;
          if (v97 >> 57 != 0) {
            GameRoutine_9f17d0();
          }
          v98 = v90 - v95;
          v99 = v98 >> 6;
          if (v98 >> 6 <= v97) {
            v99 = (v96 >> 7) + 1;
          }
          if ((unsigned __int64)v98 >= 0x7FFFFFFFFFFFFF80LL) {
            v100 = 0x1FFFFFFFFFFFFFFLL;
          }
          else {
            v100 = v99;
          }
          if (v100 != 0) {
            if (v100 >> 57 != 0) {
              goto LABEL_452;
            }
            v101 = fw_memory_HeapManager_Allocate(*v1, v100 << 7, 16, 0);
          }
          else {
            v101 = 0;
          }
          v121 = (unsigned __int8*)v271_.v272;
          v122 = (unsigned __int8**)(v101 + v96);
          *v122 = v271_.v271;
          v122[1] = v121;
          v123 = v271_.v274;
          v122[2] = (unsigned __int8*)v271_.v273;
          v122[3] = (unsigned __int8*)v123;
          if ((v275_.v275[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v122 + 4, v275_.v275[2],
                                          v275_.v275[1]);
          }
          else {
            qmemcpy(v122 + 4, v275_.v275, 24);
          }
          v124 = *((unsigned __int8*)v122 + 32);
          v260 = v101;
          v261 = v100;
          v125 = (unsigned __int8*)(v124 >> 1);
          v126 = (v124 & 1) == 0;
          v127 = v122[5];
          if (v126) {
            v127 = v125;
          }
          v128 = (unsigned __int8*)v122 + 33;
          if (!v126) {
            v128 = v122[6];
          }
          if (v127 != nullptr) {
            v129 = v128;
          }
          else {
            v129 = nullptr;
          }
          v122[3] = v129;
          v130 = v275_.v277;
          v122[7] = (unsigned __int8*)v275_.v276;
          v122[8] = (unsigned __int8*)v130;
          if ((v278_.v278[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v122 + 9, v278_.v278[2],
                                          v278_.v278[1]);
          }
          else {
            qmemcpy(v122 + 9, v278_.v278, 24);
          }
          v131 = *((unsigned __int8*)v122 + 72);
          v122[12] = nullptr;
          v122[13] = nullptr;
          v122[14] = nullptr;
          v132 = (unsigned __int8*)(v131 >> 1);
          v133 = (v131 & 1) == 0;
          v134 = v122[10];
          if (v133) {
            v134 = v132;
          }
          v135 = (unsigned __int8*)v122 + 73;
          if (!v133) {
            v135 = v122[11];
          }
          if (v134 != nullptr) {
            v136 = v135;
          }
          else {
            v136 = nullptr;
          }
          v122[8] = v136;
          v137 = v278_.v279;
          v138 = v278_.v280 - v278_.v279;
          if (v278_.v280 != v278_.v279) {
            if ((v138 & 0x8000000000000000LL) != 0) {
            LABEL_451:
              GameRoutine_9f17b0();
            }
            v139 = fw_memory_HeapManager_Allocate(*v1, v278_.v280 - v278_.v279,
                                                  16, 0);
            v140 = v139 + v138;
            v122[12] = (unsigned __int8*)v139;
            v122[13] = (unsigned __int8*)v139;
            v122[14] = (unsigned __int8*)(v139 + v138);
            memcpy_alt1(v139, v137, v138);
            v122[13] = (unsigned __int8*)v140;
          }
          v122[15] = v278_.v282;
          v142 = v47[1];
          v141 = v47[2];
          v143 = (char*)v122 + v142 - v141;
          if (v141 != v142) {
            v144 = 0;
            do {
              v153 = &v143[v144];
              v154 = *(_QWORD*)(v142 + v144 + 8);
              *(_QWORD*)v153 = *(_QWORD*)(v142 + v144);
              *((_QWORD*)v153 + 1) = v154;
              *((_QWORD*)v153 + 2) = *(_QWORD*)(v142 + v144 + 16);
              *((_QWORD*)v153 + 3) = *(_QWORD*)(v142 + v144 + 24);
              if ((*(_BYTE*)(v142 + v144 + 32) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)v153 + 4,
                                              *(_QWORD*)(v142 + v144 + 48),
                                              *(_QWORD*)(v142 + v144 + 40));
              }
              else {
                v155 = *(_QWORD*)(v142 + v144 + 32);
                v156 = *(_QWORD*)(v142 + v144 + 48);
                *((_QWORD*)v153 + 5) = *(_QWORD*)(v142 + v144 + 40);
                *((_QWORD*)v153 + 6) = v156;
                *((_QWORD*)v153 + 4) = v155;
              }
              v157 = (unsigned __int8)v153[32];
              v158 = &v143[v144];
              v159 = v157 >> 1;
              v160 = (v157 & 1) == 0;
              v161 = *(_QWORD*)&v143[v144 + 40];
              if (v160) {
                v161 = v159;
              }
              v162 = v158 + 33;
              if (!v160) {
                v162 = *(char**)&v143[v144 + 48];
              }
              if (v161 != 0) {
                v163 = v162;
              }
              else {
                v163 = nullptr;
              }
              *((_QWORD*)v153 + 3) = v163;
              *((_QWORD*)v158 + 7) = *(_QWORD*)(v142 + v144 + 56);
              *((_QWORD*)v158 + 8) = *(_QWORD*)(v142 + v144 + 64);
              if ((*(_BYTE*)(v142 + v144 + 72) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)v158 + 9,
                                              *(_QWORD*)(v142 + v144 + 88),
                                              *(_QWORD*)(v142 + v144 + 80));
              }
              else {
                v164 = *(_QWORD*)(v142 + v144 + 72);
                v165 = *(_QWORD*)(v142 + v144 + 88);
                *((_QWORD*)v158 + 10) = *(_QWORD*)(v142 + v144 + 80);
                *((_QWORD*)v158 + 11) = v165;
                *((_QWORD*)v158 + 9) = v164;
              }
              v145 = (unsigned __int8)v158[72];
              v146 = &v143[v144];
              *((_QWORD*)v146 + 12) = 0;
              *((_QWORD*)v146 + 13) = 0;
              *((_QWORD*)v146 + 14) = 0;
              v147 = v145 >> 1;
              v148 = (v145 & 1) == 0;
              v149 = *(_QWORD*)&v143[v144 + 80];
              if (v148) {
                v149 = v147;
              }
              v150 = v146 + 73;
              if (!v148) {
                v150 = *(char**)&v143[v144 + 88];
              }
              if (v149 != 0) {
                v151 = v150;
              }
              else {
                v151 = nullptr;
              }
              *((_QWORD*)v158 + 8) = v151;
              v152 = (_QWORD*)(v142 + v144);
              v144 += 128;
              *((_QWORD*)v146 + 12) = v152[12];
              *((_QWORD*)v146 + 13) = v152[13];
              *((_QWORD*)v146 + 14) = v152[14];
              v152[13] = 0;
              v152[14] = 0;
              v152[12] = 0;
              *((_QWORD*)v146 + 15) = v152[15];
            } while (v142 + v144 != v141);
            v1 = (__int64*)fw_memory_g_heap_manager_ptr;
            do {
              v166 = *(_QWORD*)(v142 + 96);
              if (v166 != 0) {
                *(_QWORD*)(v142 + 104) = v166;
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v167 = 128;
                }
                else {
                  v167 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v1 + v167, v166);
              }
              if ((*(_BYTE*)(v142 + 72) & 1) != 0) {
                v168 = *(_QWORD*)(v142 + 88);
                if (v168 != 0) {
                  if (*(_QWORD*)(*v1 + 200) != 0) {
                    v169 = 128;
                  }
                  else {
                    v169 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v1 + v169, v168);
                }
              }
              if ((*(_BYTE*)(v142 + 32) & 1) != 0) {
                v170 = *(_QWORD*)(v142 + 48);
                if (v170 != 0) {
                  if (*(_QWORD*)(*v1 + 200) != 0) {
                    v171 = 128;
                  }
                  else {
                    v171 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v1 + v171, v170);
                }
              }
              v142 += 128;
            } while (v142 != v141);
            v142 = v47[1];
          }
          v120 = v122 + 16;
          v47[1] = (__int64)v143;
          v47[2] = (__int64)(v122 + 16);
          v47[3] = v260 + (v261 << 7);
          if (v142 != 0) {
            v172 = 56;
            if (*(_QWORD*)(*v1 + 200) != 0) {
              v172 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*v1 + v172, v142);
          }
        }
        else {
          v92 = (unsigned __int8*)v271_.v272;
          *v91 = v271_.v271;
          v91[1] = v92;
          v91[2] = (unsigned __int8*)v271_.v273;
          v91[3] = (unsigned __int8*)v271_.v274;
          if ((v275_.v275[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v91 + 4, v275_.v275[2],
                                          v275_.v275[1]);
          }
          else {
            v93 = v275_.v275[0];
            v94 = v275_.v275[2];
            v91[5] = (unsigned __int8*)v275_.v275[1];
            v91[6] = (unsigned __int8*)v94;
            v91[4] = (unsigned __int8*)v93;
          }
          v102 = *((unsigned __int8*)v91 + 32);
          v103 = (unsigned __int8*)(v102 >> 1);
          v104 = (v102 & 1) == 0;
          v105 = v91[5];
          if (v104) {
            v105 = v103;
          }
          v106 = (unsigned __int8*)v91 + 33;
          if (!v104) {
            v106 = v91[6];
          }
          if (v105 != nullptr) {
            v107 = v106;
          }
          else {
            v107 = nullptr;
          }
          v91[3] = v107;
          v91[7] = (unsigned __int8*)v275_.v276;
          v91[8] = (unsigned __int8*)v275_.v277;
          if ((v278_.v278[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v91 + 9, v278_.v278[2],
                                          v278_.v278[1]);
          }
          else {
            v108 = v278_.v278[0];
            v109 = v278_.v278[2];
            v91[10] = (unsigned __int8*)v278_.v278[1];
            v91[11] = (unsigned __int8*)v109;
            v91[9] = (unsigned __int8*)v108;
          }
          v110 = *((unsigned __int8*)v91 + 72);
          v91[12] = nullptr;
          v91[13] = nullptr;
          v91[14] = nullptr;
          v111 = (unsigned __int8*)(v110 >> 1);
          v112 = (v110 & 1) == 0;
          v113 = v91[10];
          if (v112) {
            v113 = v111;
          }
          v114 = (unsigned __int8*)v91 + 73;
          if (!v112) {
            v114 = v91[11];
          }
          if (v113 != nullptr) {
            v115 = v114;
          }
          else {
            v115 = nullptr;
          }
          v91[8] = v115;
          v116 = v278_.v279;
          v117 = v278_.v280 - v278_.v279;
          if (v278_.v280 != v278_.v279) {
            if ((v117 & 0x8000000000000000LL) != 0) {
              goto LABEL_451;
            }
            v118 = fw_memory_HeapManager_Allocate(*v1, v278_.v280 - v278_.v279,
                                                  16, 0);
            v119 = v118 + v117;
            v91[12] = (unsigned __int8*)v118;
            v91[13] = (unsigned __int8*)v118;
            v91[14] = (unsigned __int8*)(v118 + v117);
            memcpy_alt1(v118, v116, v117);
            v91[13] = (unsigned __int8*)v119;
          }
          v91[15] = v278_.v282;
          v120 = v91 + 16;
        }
        v47[2] = (__int64)v120;
        v68 = v263;
        v72 = v262;
        if (v278_.v279 != 0) {
          v173 = *v1;
          v278_.v280 = v278_.v279;
          if (*(_QWORD*)(v173 + 200) != 0) {
            v174 = 128;
          }
          else {
            v174 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v173 + v174, v278_.v279);
        }
        if ((v278_.v278[0] & 1) != 0 && v278_.v278[2] != 0) {
          if (*(_QWORD*)(*v1 + 200) != 0) {
            v175 = 128;
          }
          else {
            v175 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v1 + v175, v278_.v278[2]);
        }
        if ((v275_.v275[0] & 1) != 0 && v275_.v275[2] != 0) {
          if (*(_QWORD*)(*v1 + 200) != 0) {
            v176 = 128;
          }
          else {
            v176 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v1 + v176, v275_.v275[2]);
        }
        v73 = *(_QWORD*)(*(_QWORD*)(v73 + 24) + 32LL);
        if (v73 == 0) {
          v70 = (__int64*)v47[2];
          goto LABEL_308;
        }
      }
      if ((v284[0] & 1) != 0) {
        v82 = (char*)v284[2];
      }
      else {
        v82 = (char*)v284 + 1;
      }
      if ((v284[0] & 1) != 0) {
        v83 = v284[1];
      }
      else {
        v83 = (unsigned __int64)LOBYTE(v284[0]) >> 1;
      }
      SpineModel_64dde0(v275_.v275, (__int64)v82, v83);
      if ((v284[0] & 1) == 0) {
        goto LABEL_164;
      }
    LABEL_159:
      if (v284[2] != 0) {
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v84 = 128;
        }
        else {
          v84 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v1 + v84, v284[2]);
      }
      goto LABEL_164;
    }
  LABEL_308:
    v177 = v47[1];
    if ((__int64*)v177 != v70) {
      v178 = (__int64*)v47[5];
      do {
        v179 = v47[6];
        if ((unsigned __int64)v178 < v179) {
          *v178++ = v177;
        }
        else {
          v180 = *v264;
          v181 = (signed __int64)v178 - *v264;
          v182 = (v181 >> 3) + 1;
          if (v182 >> 61 != 0) {
            goto LABEL_451;
          }
          v183 = v179 - v180;
          if (v183 >> 2 > v182) {
            v182 = v183 >> 2;
          }
          if ((unsigned __int64)v183 >= 0x7FFFFFFFFFFFFFF8LL) {
            v184 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v184 = v182;
          }
          if (v184 != 0) {
            if (v184 >> 61 != 0) {
              goto LABEL_452;
            }
            v185 = fw_memory_HeapManager_Allocate(*v1, 8 * v184, 16, 0);
          }
          else {
            v185 = 0;
          }
          v186 = v185 + 8 * v184;
          v187 = v185 + v181 - 8 * (v181 >> 3);
          *(_QWORD*)(v185 + v181) = v177;
          v178 = (__int64*)(v185 + v181 + 8);
          memcpy_alt1(v187, v180, v181);
          v47[4] = v187;
          v47[5] = (__int64)v178;
          v47[6] = v186;
          if (v180 != 0) {
            v188 = 128;
            if (*(_QWORD*)(*v1 + 200) == 0) {
              v188 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v1 + v188, v180);
          }
        }
        v177 += 128;
        v47[5] = (__int64)v178;
      } while ((__int64*)v177 != v70);
      v177 = v47[1];
      v70 = (__int64*)v47[2];
    }
    if ((__int64*)v177 == v70) {
      goto LABEL_360;
    }
    v189 = (__int64*)(v177 + 96);
    while (1) {
      if (v189 == v264) {
        goto LABEL_332;
      }
      v193 = v47[4];
      v192 = v47[5];
      v194 = v189[2];
      v195 = v192 - v193;
      v196 = *v189;
      if (v192 - v193 <= (unsigned __int64)(v194 - *v189)) {
        v201 = v189[1];
        v202 = v201 - v196;
        if (v195 > (unsigned __int64)(v201 - v196)) {
          if (v201 != v196) {
            memmove_alt1(*v189, v47[4], v201 - v196);
            v201 = v189[1];
          }
          v203 = v193 + v202;
          v204 = v192 - (v193 + v202);
          if (v204 != 0) {
            memmove_alt1(v201, v203, v204);
          }
          v190 = v201 + v204;
          goto LABEL_331;
        }
        if (v192 != v193) {
          memmove_alt1(*v189, v47[4], v192 - v193);
        }
      }
      else {
        if (v196 != 0) {
          v189[1] = v196;
          v197 = 128;
          if (*(_QWORD*)(*v1 + 200) == 0) {
            v197 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v1 + v197, v196);
          v194 = 0;
          v189[1] = 0;
          v189[2] = 0;
          *v189 = 0;
        }
        v198 = v195 >> 3;
        if ((unsigned __int64)(v195 >> 3) >> 61 != 0) {
          goto LABEL_451;
        }
        if (v194 >> 2 > v198) {
          v198 = v194 >> 2;
        }
        v199 = (unsigned __int64)v194 >= 0x7FFFFFFFFFFFFFF8LL
                   ? 0x1FFFFFFFFFFFFFFFLL
                   : v198;
        if (v199 >> 61 != 0) {
          goto LABEL_451;
        }
        v200 = fw_memory_HeapManager_Allocate(*v1, 8 * v199, 16, 0);
        v196 = v200;
        *v189 = v200;
        v189[1] = v200;
        v189[2] = v200 + 8 * v199;
        if (v192 != v193) {
          memcpy_alt1(v200, v193, v192 - v193);
        }
      }
      v190 = v196 + v195;
    LABEL_331:
      v189[1] = v190;
    LABEL_332:
      v191 = v189 + 4;
      v189 += 16;
      if (v191 == v70) {
        v177 = v47[1];
        v70 = (__int64*)v47[2];
      LABEL_360:
        while ((__int64*)v177 != v70) {
          if (*(_QWORD*)(v177 + 56) != 0) {
            v206 = GameData_21f9038;
            if (GameData_21f9038 < (unsigned __int64)GameData_21f9040) {
              *(_QWORD*)GameData_21f9038 = v177;
              v205 = v206 + 8;
            }
            else {
              v207 = GameData_21f9030;
              v208 = GameData_21f9038 - GameData_21f9030;
              v209 = (GameData_21f9038 - GameData_21f9030) >> 3;
              v210 = v209 + 1;
              if ((unsigned __int64)(v209 + 1) >> 61 != 0) {
                goto LABEL_451;
              }
              v211 = GameData_21f9040 - GameData_21f9030;
              if ((GameData_21f9040 - GameData_21f9030) >> 2 > v210) {
                v210 = v211 >> 2;
              }
              if ((unsigned __int64)v211 >= 0x7FFFFFFFFFFFFFF8LL) {
                v212 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v212 = v210;
              }
              if (v212 != 0) {
                if (v212 >> 61 != 0) {
                  goto LABEL_452;
                }
                v213 = fw_memory_HeapManager_Allocate(*v1, 8 * v212, 16, 0);
              }
              else {
                v213 = 0;
              }
              v214 = v213 + 8 * v212;
              v215 = v213 + v208 - 8 * v209;
              *(_QWORD*)(v213 + v208) = v177;
              v205 = v213 + v208 + 8;
              memcpy_alt1(v215, v207, v208);
              GameData_21f9030 = v215;
              GameData_21f9038 = v205;
              GameData_21f9040 = v214;
              if (v207 != 0) {
                v216 = 128;
                if (*(_QWORD*)(*v1 + 200) == 0) {
                  v216 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v1 + v216, v207);
              }
            }
            GameData_21f9038 = v205;
          }
          v177 += 128;
        }
      LABEL_84:
        v40 = v259 + 1;
        if (v259 + 1 == v258) {
          break;
        }
        goto LABEL_85;
      }
    }
  }
  GameData_21f85f8 = GameData_21f85f0;
  if (GameData_21f9020 != 0) {
    v217 = (_QWORD*)GameData_21f9018;
    if (GameData_21f9018 != 0) {
      do {
        v218 = (_QWORD*)*v217;
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v219 = 128;
        }
        else {
          v219 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v1 + v219, (__int64)v217);
        v217 = v218;
      } while (v218 != nullptr);
    }
    GameData_21f9018 = 0;
    if (GameData_21f9010 != 0) {
      v220 = GameData_21f9010 & 7;
      if ((unsigned __int64)GameData_21f9010 >= 8) {
        v222 = GameData_21f9010 & 0xFFFFFFFFFFFFFFF8LL;
        v221 = 0;
        do {
          *(_QWORD*)(GameData_21f9008 + 8 * v221) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 8) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 16) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 24) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 32) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 40) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v221 + 48) = 0;
          v223 = GameData_21f9008 + 8 * v221;
          v221 += 8;
          *(_QWORD*)(v223 + 56) = 0;
        } while (v222 != v221);
      }
      else {
        v221 = 0;
      }
      if (v220 != 0) {
        v224 = 8 * v221;
        do {
          --v220;
          *(_QWORD*)(GameData_21f9008 + v224) = 0;
          v224 += 8;
        } while (v220 != 0);
      }
    }
    GameData_21f9020 = 0;
  }
  for (j = 0; j != 36; ++j) {
    v226 = &GameData_21f8980[5 * j];
    GameData_21f8620[3 * j + 1] = GameData_21f8620[3 * j];
    if (v226[3] != 0) {
      v227 = (_QWORD*)v226[2];
      v228 = v1;
      if (v227 != nullptr) {
        do {
          v229 = (_QWORD*)*v227;
          if (*(_QWORD*)(*v228 + 200) != 0) {
            v230 = 128;
          }
          else {
            v230 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v228 + v230, (__int64)v227);
          v227 = v229;
        } while (v229 != nullptr);
      }
      v231 = v226[1];
      v226[2] = 0;
      v1 = v228;
      if (v231 != 0) {
        if (v231 >= 8) {
          v232 = 0;
          do {
            *(_QWORD*)(*v226 + 8 * v232) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 8) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 16) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 24) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 32) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 40) = 0;
            *(_QWORD*)(*v226 + 8 * v232 + 48) = 0;
            v233 = *v226 + 8 * v232;
            v232 += 8;
            *(_QWORD*)(v233 + 56) = 0;
          } while ((v231 & 0xFFFFFFFFFFFFFFF8LL) != v232);
        }
        else {
          v232 = 0;
        }
        v234 = v231 & 7;
        if (v234 != 0) {
          v235 = 8 * v232;
          do {
            --v234;
            *(_QWORD*)(*v226 + v235) = 0;
            v235 += 8;
          } while (v234 != 0);
        }
      }
      v226[3] = 0;
    }
  }
  GameRoutine_9eb2c0_alt1(1u, 0, 0);
  GameRoutine_9eb2c0_alt1(2u, 1u, 1);
  GameRoutine_9eb2c0_alt1(3u, 2u, 1);
  GameRoutine_9eb2c0_alt1(4u, 3u, 1);
  GameRoutine_9eb2c0_alt1(5u, 4u, 1);
  GameRoutine_9eb2c0_alt1(6u, 5u, 1);
  GameRoutine_9eb2c0_alt1(7u, 6u, 1);
  GameRoutine_9eb2c0_alt1(8u, 7u, 1);
  GameRoutine_9eb2c0_alt1(9u, 8u, 1);
  GameRoutine_9eb2c0_alt1(0xAu, 1u, 2);
  GameRoutine_9eb2c0_alt1(0xBu, 2u, 2);
  GameRoutine_9eb2c0_alt1(0xCu, 3u, 2);
  GameRoutine_9eb2c0_alt1(0xDu, 4u, 2);
  GameRoutine_9eb2c0_alt1(0xEu, 5u, 2);
  GameRoutine_9eb2c0_alt1(0xFu, 6u, 2);
  GameRoutine_9eb2c0_alt1(0x10u, 8u, 2);
  GameRoutine_9eb2c0_alt1(0x11u, 9u, 0);
  GameRoutine_9eb2c0_alt1(0x12u, 9u, 3);
  GameRoutine_9eb2c0_alt1(0x13u, 1u, 1);
  GameRoutine_9eb2c0_alt1(0x14u, 2u, 1);
  GameRoutine_9eb2c0_alt1(0x15u, 3u, 1);
  GameRoutine_9eb2c0_alt1(0x16u, 4u, 1);
  GameRoutine_9eb2c0_alt1(0x17u, 5u, 1);
  GameRoutine_9eb2c0_alt1(0x18u, 6u, 1);
  GameRoutine_9eb2c0_alt1(0x19u, 7u, 1);
  GameRoutine_9eb2c0_alt1(0x1Au, 8u, 1);
  GameRoutine_9eb2c0_alt1(0x1Bu, 1u, 2);
  GameRoutine_9eb2c0_alt1(0x1Cu, 2u, 2);
  GameRoutine_9eb2c0_alt1(0x1Du, 3u, 2);
  GameRoutine_9eb2c0_alt1(0x1Eu, 4u, 2);
  GameRoutine_9eb2c0_alt1(0x1Fu, 5u, 2);
  GameRoutine_9eb2c0_alt1(0x20u, 6u, 2);
  GameRoutine_9eb2c0_alt1(0x21u, 8u, 2);
  GameRoutine_9eb2c0_alt1(0x22u, 9u, 0);
  GameRoutine_9eb2c0_alt1(0x23u, 9u, 3);
  for (k = 0; k != 36; ++k) {
    v237 = (__int64**)&GameData_21f8620[3 * k];
    v238 = *v237;
    v239 = v237[1];
    if (*v237 != v239) {
      v240 = &GameData_21f8980[5 * k];
      do {
        v241 = *v238;
        v242 = *(_QWORD*)(*(_QWORD*)(*v238 + 8) + 48LL);
        if (v242 != 0) {
          v243 = game_HashString(*(_QWORD*)(v242 + 32));
          v244 = v240[1];
          if (v244 != 0 && v240[3] != 0) {
            v246 = v244 - 1;
            if ((v244 & (v244 - 1)) != 0) {
              v247 = v243;
              if (v243 >= v244) {
                v247 = v243 % v244;
              }
            }
            else {
              v247 = v246 & v243;
            }
            v248 = *(_QWORD**)(*v240 + 8 * v247);
            if (v248 != nullptr) {
              v249 = (_QWORD*)*v248;
              if (v249 != nullptr) {
                if ((v244 & v246) == 0) {
                  while (1) {
                    v251 = v249[1];
                    if (v251 == v243) {
                      if (v249[2] == v243) {
                        goto LABEL_414;
                      }
                    }
                    else if ((v251 & v246) != v247) {
                      goto LABEL_415;
                    }
                    v249 = (_QWORD*)*v249;
                    if (v249 == nullptr) {
                      goto LABEL_415;
                    }
                  }
                }
                do {
                  v250 = v249[1];
                  if (v250 == v243) {
                    if (v249[2] == v243) {
                    LABEL_414:
                      *(_QWORD*)(v241 + 120) = v249[3];
                      break;
                    }
                  }
                  else {
                    if (v250 >= v244) {
                      v250 %= v244;
                    }
                    if (v250 != v247) {
                      break;
                    }
                  }
                  v249 = (_QWORD*)*v249;
                } while (v249 != nullptr);
              }
            }
          }
        }
      LABEL_415:
        ++v238;
      } while (v238 != v239);
    }
  }
  v252 = v268_.v268;
  v253 = fw_memory_g_heap_manager_ptr;
  if (v268_.v268 != nullptr) {
    do {
      v254 = (_QWORD*)*v252;
      if (*(_QWORD*)(*(_QWORD*)v253 + 200LL) != 0) {
        v255 = 128;
      }
      else {
        v255 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v253 + v255, (__int64)v252);
      v252 = v254;
    } while (v254 != nullptr);
  }
  v256 = v266_.v266;
  v266_.v266 = 0;
  if (v256 != 0) {
    v257 = 128;
    if (*(_QWORD*)(*(_QWORD*)v253 + 200LL) == 0) {
      v257 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v253 + v257, v256);
  }
}

void RecallCategoryFile_Unknown5()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  v0 = fw_memory_g_heap_manager_ptr;
  if (GameData_21f9078 != 0) {
    v1 = (_QWORD*)GameData_21f9070;
    if (GameData_21f9070 != 0) {
      do {
        v3 = (_QWORD*)*v1;
        v4 = v1[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v0;
          v1[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v2, (__int64)v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f9070 = 0;
    if (GameData_21f9068 != 0) {
      v7 = GameData_21f9068 & 7;
      if ((unsigned __int64)GameData_21f9068 >= 8) {
        v9 = GameData_21f9068 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f9060 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f9060 + 8 * v8 + 48) = 0;
          v10 = GameData_21f9060 + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(GameData_21f9060 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f9078 = 0;
  }
  GameData_21f9050 = GameData_21f9048;
  GameData_21f9038 = GameData_21f9030;
  GameData_21f85f8 = GameData_21f85f0;
  if (GameData_21f9020 != 0) {
    v12 = (_QWORD*)GameData_21f9018;
    if (GameData_21f9018 != 0) {
      do {
        v13 = (_QWORD*)*v12;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v14, (__int64)v12);
        v12 = v13;
      } while (v13 != nullptr);
    }
    GameData_21f9018 = 0;
    if (GameData_21f9010 != 0) {
      v15 = GameData_21f9010 & 7;
      if ((unsigned __int64)GameData_21f9010 >= 8) {
        v17 = GameData_21f9010 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_21f9008 + 8 * v16) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v16 + 48) = 0;
          v18 = GameData_21f9008 + 8 * v16;
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
          *(_QWORD*)(GameData_21f9008 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_21f9020 = 0;
  }
  for (i = 0; i != 36; ++i) {
    v21 = &GameData_21f8980[5 * i];
    GameData_21f8620[3 * i + 1] = GameData_21f8620[3 * i];
    if (v21[3] != 0) {
      v22 = (_QWORD*)v21[2];
      if (v22 != nullptr) {
        do {
          v23 = (_QWORD*)*v22;
          if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v0 + v24, (__int64)v22);
          v22 = v23;
        } while (v23 != nullptr);
      }
      v25 = v21[1];
      v21[2] = 0;
      if (v25 != 0) {
        if (v25 >= 8) {
          v26 = 0;
          do {
            *(_QWORD*)(*v21 + 8 * v26) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 8) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 16) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 24) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 32) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 40) = 0;
            *(_QWORD*)(*v21 + 8 * v26 + 48) = 0;
            v27 = *v21 + 8 * v26;
            v26 += 8;
            *(_QWORD*)(v27 + 56) = 0;
          } while ((v25 & 0xFFFFFFFFFFFFFFF8LL) != v26);
        }
        else {
          v26 = 0;
        }
        v28 = v25 & 7;
        if (v28 != 0) {
          v29 = 8 * v26;
          do {
            --v28;
            *(_QWORD*)(*v21 + v29) = 0;
            v29 += 8;
          } while (v28 != 0);
        }
      }
      v21[3] = 0;
    }
  }
}

void RecallCategoryFile_9eeb60(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
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

  if (*(_BYTE*)(a1 + 248) == 1) {
    v1 = *(_QWORD**)(a1 + 8);
    if (*(_QWORD**)(a1 + 16) == v1) {
      v3 = 0;
    }
    else {
      v3 = *v1 + 16LL;
    }
    v4 = GameData_21c9768;
    v5 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v5 = 0;
    }
    v6 = GameData_21c9788 + GameData_21c9780;
    if (v5 == GameData_21c9788 + GameData_21c9780) {
      GameRoutine_66cf00_alt1(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = *(_QWORD*)(a1 + 32);
    if (*(_QWORD*)(a1 + 40) == v7) {
      v8 = 0;
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    }
    v9 = GameData_21c9798;
    v10 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v10 = 0;
    }
    v11 = GameData_21c97b8 + GameData_21c97b0;
    if (v10 == GameData_21c97b8 + GameData_21c97b0) {
      GameRoutine_66cf00_alt1(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    ++GameData_21c97b8;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    v12 = *(__int64**)(a1 + 56);
    v13 = *(__int64**)(a1 + 64);
    v54 = a1;
    if (v12 != v13) {
      v14 = GameData_21c97c8;
      v15 = GameData_21c97d0;
      v16 = GameData_21c97e0;
      v17 = GameData_21c97e8;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = v15 - v14;
        v20 = *v12;
        v21 = v15 == v14;
        v22 = v17 + v16;
        v23 = (v19 << 6) - 1;
        if (v21) {
          v23 = 0;
        }
        if (v23 == v22) {
          GameRoutine_66d660_alt1(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v22 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v20;
        v24 = ++GameData_21c97e8;
        v25 = *(_QWORD**)(v20 + 24);
        if (v25 == nullptr) {
          goto LABEL_60;
        }
        v26 = v25[4];
        if (v26 != 0) {
          v27 = *(_QWORD*)v18;
          v25[5] = v26;
          if (*(_QWORD*)(v27 + 200) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v27 + v28, v26);
        }
        v29 = v25[1];
        if (v29 != 0) {
          v30 = v13;
          v31 = v25[2];
          if (v29 == v31) {
            v13 = v30;
          }
          else {
            do {
              v32 = *(_QWORD*)(v31 - 32);
              if (v32 != 0) {
                *(_QWORD*)(v31 - 24) = v32;
                if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                  v33 = 128;
                }
                else {
                  v33 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v33, v32);
              }
              if ((*(_BYTE*)(v31 - 56) & 1) != 0) {
                v34 = *(_QWORD*)(v31 - 40);
                if (v34 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                    v35 = 128;
                  }
                  else {
                    v35 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v35, v34);
                }
              }
              if ((*(_BYTE*)(v31 - 96) & 1) != 0) {
                v36 = *(_QWORD*)(v31 - 80);
                if (v36 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                    v37 = 128;
                  }
                  else {
                    v37 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v37, v36);
                }
              }
              v31 -= 128;
            } while (v31 != v29);
            v38 = v25[1];
            v13 = v30;
            v25[2] = v29;
            v29 = v38;
            if (v38 == 0) {
              goto LABEL_56;
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v39, v29);
        }
      LABEL_56:
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v40, (__int64)v25);
        *(_QWORD*)(v20 + 24) = 0;
        v24 = GameData_21c97e8;
      LABEL_60:
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v41 = 0;
        }
        else {
          v41 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = v24 - 1;
        GameData_21c97e8 = v24 - 1;
        if ((unsigned __int64)(v41 - (v24 + GameData_21c97e0) + 1) >= 0x400) {
          v42 = *(_QWORD*)(GameData_21c97d0 - 8);
          if (v42 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v43 = 128;
            }
            else {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v43, v42);
            v14 = GameData_21c97c8;
            v15 = GameData_21c97d0;
            v16 = GameData_21c97e0;
            v17 = GameData_21c97e8;
          }
          v15 -= 8;
          GameData_21c97d0 = v15;
        }
        ++v12;
      } while (v12 != v13);
    }
    v44 = GameData_21c9770;
    v45 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v45 = 0;
    }
    *(_BYTE*)(v54 + 248) = 0;
    v46 = GameData_21c9788--;
    if ((unsigned __int64)(v45 - (v46 + GameData_21c9780) + 1) >= 0x400) {
      v47 = *(_QWORD*)(v44 - 8);
      if (v47 != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47);
        v44 = GameData_21c9770;
      }
      GameData_21c9770 = v44 - 8;
    }
    v49 = GameData_21c97a0;
    v50 = GameData_21c97b8;
    v51 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v51 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v51 - (v50 + GameData_21c97b0) + 1) >= 0x400) {
      v52 = *(_QWORD*)(GameData_21c97a0 - 8);
      if (v52 != 0) {
        v53 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
        v49 = GameData_21c97a0;
      }
      GameData_21c97a0 = v49 - 8;
    }
  }
}

#pragma GCC visibility pop
