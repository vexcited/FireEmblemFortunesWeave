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
__int64 RecallCategoryFile_9eeb60(__int64 result);
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
unsigned __int64 RecallCategoryFile_Unknown4();
__int64 RecallCategoryFile_Unknown5();

unsigned __int64 RecallCategoryFile_Unknown4()
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
  char* v65;
  __int64 v66;
  __int64 v67;
  unsigned __int8 v68;
  _QWORD* i;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  char* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int8** v97;
  unsigned __int8* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int8* v109;
  bool v110;
  unsigned __int8* v111;
  unsigned __int8* v112;
  unsigned __int8* v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int8* v117;
  bool v118;
  unsigned __int8* v119;
  unsigned __int8* v120;
  unsigned __int8* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int8* v125;
  _QWORD* v126;
  unsigned __int8* v127;
  unsigned __int8** v128;
  char* v129;
  unsigned __int64 v130;
  unsigned __int8* v131;
  bool v132;
  unsigned __int8* v133;
  unsigned __int8* v134;
  unsigned __int8* v135;
  char* v136;
  unsigned __int64 v137;
  unsigned __int8* v138;
  bool v139;
  unsigned __int8* v140;
  unsigned __int8* v141;
  unsigned __int8* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  unsigned __int8* v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  __int64 v150;
  unsigned __int64 v151;
  char* v152;
  unsigned __int64 v153;
  bool v154;
  unsigned __int64 v155;
  char* v156;
  char* v157;
  _QWORD* v158;
  char* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  char* v164;
  unsigned __int64 v165;
  bool v166;
  unsigned __int64 v167;
  char* v168;
  char* v169;
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
  _QWORD* v181;
  _QWORD* v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64* v193;
  __int64 v194;
  _QWORD* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  _QWORD* v221;
  _QWORD* v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 j;
  __int64* v230;
  _QWORD* v231;
  __int64* v232;
  _QWORD* v233;
  __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  unsigned __int64 v238;
  __int64 v239;
  unsigned __int64 result;
  __int64 k;
  __int64** v242;
  __int64* v243;
  __int64* v244;
  __int64* v245;
  __int64 v246;
  __int64 v247;
  unsigned __int64 v248;
  unsigned __int64 v250;
  unsigned __int64 v251;
  _QWORD* v252;
  _QWORD* v253;
  unsigned __int64 v254;
  __int64 v255;
  _QWORD* v256;
  __int64 v257;
  _QWORD* v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  unsigned __int64** v262;
  char v263;
  unsigned __int64** v264;
  __int64 v265;
  unsigned __int64 v266;
  __int64 v267;
  unsigned __int8 v268;
  __int64* v269;
  unsigned __int8 v270[4];
  struct {
    __int64 v271;
    unsigned __int64 v272;
  } v271_;
  struct {
    _QWORD* v273;
    unsigned __int64 v274;
    float v275;
  } v273_;
  struct {
    unsigned __int8* v276;
    __int64 v277;
    __int64 v278;
    char* v279;
  } v276_;
  struct {
    __int64 v280[3];
    __int64 v281;
    char* v282;
  } v280_;
  struct {
    __int64 v283[3];
    __int64 v284;
    __int64 v285;
    __int64 v286;
    unsigned __int8* v287;
  } v283_;
  __int64 v288[2];
  unsigned __int64 v289[4];

  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
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
          nn_mem_StandardAllocator_Free(v6 + v7),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v3),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
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
  v273_.v273 = nullptr;
  v273_.v274 = 0;
  v271_.v271 = 0;
  v271_.v272 = 0;
  GameData_21f9050 = GameData_21f9048;
  GameData_21f9038 = GameData_21f9030;
  v273_.v275 = 0x1.0000000000000p+0f;
  do {
    v14 = game_9e68c0(v13),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v15 = *v14;
    v16 = v271_.v272;
    if (v271_.v272 != 0) {
      v17 = v271_.v272 - 1;
      if ((v271_.v272 & (v271_.v272 - 1)) != 0) {
        v0 = *v14;
        if (v15 >= v271_.v272) {
          v0 = v15 % v271_.v272;
        }
      }
      else {
        v0 = v17 & v15;
      }
      v18 = *(_QWORD**)(v271_.v271 + 8 * v0);
      if (v18 != nullptr) {
        v19 = (_QWORD*)*v18;
        if (v19 != nullptr) {
          if ((v271_.v272 & v17) == 0) {
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
              if (v20 >= v271_.v272) {
                v20 %= v271_.v272;
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
    v22 = fw_memory_HeapManager_Allocate(*v1, 32, 16, 0),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v23 = v273_.v274;
    v24 = v273_.v275;
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
        primeEm = std___1___next_prime(v31),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v16 = v271_.v272;
        v31 = primeEm;
      }
      if (v31 > v16) {
        goto LABEL_55;
      }
      if (v31 < v16) {
        v33 = vcvtps_u64_f32((float)v273_.v274 / v273_.v275);
        if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
          v33 = std___1___next_prime(v33),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
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
          GameRoutine_9f1800(&v271_.v271, v31),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      v16 = v271_.v272;
      if ((v271_.v272 & (v271_.v272 - 1)) != 0) {
        if (v15 >= v271_.v272) {
          v0 = v15 % v271_.v272;
        }
        else {
          v0 = v15;
        }
      }
      else {
        v0 = (v271_.v272 - 1) & v15;
      }
    }
    v35 = v271_.v271;
    v36 = *(__int64**)(v271_.v271 + 8 * v0);
    if (v36 != nullptr) {
      *(_QWORD*)v25 = *v36;
      *v36 = v25;
    }
    else {
      v37 = v273_.v273;
      v273_.v273 = (_QWORD*)v25;
      *(_QWORD*)v25 = v37;
      *(_QWORD*)(v35 + 8 * v0) = &v273_.v273;
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
        *(_QWORD*)(v271_.v271 + 8 * v38) = v25;
      }
    }
    ++v273_.v274;
  LABEL_80:
    v39 = v13++;
  } while (v39 < 0x23);
  v270[0] = 0;
  v40 = *(unsigned __int64***)(*GameData_212cdc8[0] + 64);
  v262 = *(unsigned __int64***)(*GameData_212cdc8[0] + 72);
  if (v40 != v262) {
  LABEL_85:
    v42 = *v40;
    v264 = v40;
    v43 = **v40;
    if (v43 != 0) {
      if (v271_.v272 != 0 && v273_.v274 != 0) {
        v45 = v271_.v272 - 1;
        if ((v271_.v272 & (v271_.v272 - 1)) != 0) {
          v46 = *v42;
          if (v43 >= v271_.v272) {
            v46 = v43 % v271_.v272;
          }
        }
        else {
          v46 = v45 & v43;
        }
        v53 = *(__int64***)(v271_.v271 + 8 * v46);
        if (v53 != nullptr) {
          v54 = *v53;
          if (v54 != nullptr) {
            if ((v271_.v272 & v45) == 0) {
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
                  v270[0] = *((_BYTE*)v54 + 24);
                  v276_.v276 = v270;
                  v41 = GameRoutine_9f9420(v270, &v276_.v276),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v88 = COERCE_AS(
                      __typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v90 = COERCE_AS(
                      __typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v91 = COERCE_AS(
                      __typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  *(_QWORD*)(v41 + 32) = *(_QWORD*)(v41 + 24);
                  goto LABEL_84;
                }
              }
              else {
                if (v55 >= v271_.v272) {
                  v55 %= v271_.v272;
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
    if (v270[0] == 0) {
      goto LABEL_84;
    }
    v47 = (__int64*)v42[3];
    if (v47 == nullptr) {
      goto LABEL_84;
    }
    v276_.v276 = v270;
    v48 = (_QWORD*)GameRoutine_9f9420(v270, &v276_.v276),
    v79 = COERCE_AS(__typeof__(v79),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v80 = COERCE_AS(__typeof__(v80),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v90 = COERCE_AS(__typeof__(v90),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v91 = COERCE_AS(__typeof__(v91),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v50 = (unsigned __int64**)v48[4];
    v49 = v48[5];
    v51 = v48;
    if ((unsigned __int64)v50 >= v49) {
      v57 = v48[3];
      v58 = (char*)v50 - v57;
      v59 = ((__int64)v50 - v57) >> 3;
      v60 = v59 + 1;
      if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
        GameRoutine_9f1790(),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
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
          GameRoutine_60a210(),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v63 = fw_memory_HeapManager_Allocate(*v1, 8 * v62, 16, 0),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      else {
        v63 = 0;
      }
      v64 = v63 + 8 * v62;
      v65 = (char*)v50 - v57;
      v66 = (__int64)&v58[v63 + -8 * v59];
      *(_QWORD*)&v58[v63] = v42;
      v52 = (__int64)&v58[v63 + 8];
      memcpy(v66, v57, v65),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v51[3] = v66;
      v51[4] = v52;
      v51[5] = v64;
      if (v57 != 0) {
        v67 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v67 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v67),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    else {
      *v50 = v42;
      v52 = (__int64)(v50 + 1);
    }
    v51[4] = v52;
    v68 = v270[0];
    v70 = (_QWORD*)v47[1];
    for (i = (_QWORD*)v47[2]; i != v70; i -= 16) {
      v74 = *(i - 4);
      if (v74 != 0) {
        *(i - 3) = v74;
        v75 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v75 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v75),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if ((*(_BYTE*)(i - 7) & 1) != 0 && *(i - 5) != 0) {
        v76 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v76),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if ((*(_BYTE*)(i - 12) & 1) != 0 && *(i - 10) != 0) {
        v77 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v77 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v77),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    v71 = v47[4];
    v47[2] = (__int64)v70;
    v269 = v47 + 4;
    v47[5] = v71;
    v72 = *(_QWORD*)(*v47 + 40);
    if (v72 != 0) {
      v73 = *(_QWORD*)(*v47 + 40);
      v268 = v68;
      v267 = v73;
      while (1) {
        LODWORD(v276_.v276) = 0;
        memset(v280_.v280, 0, sizeof(v280_.v280));
        v280_.v281 = 0;
        memset(v283_.v283, 0, sizeof(v283_.v283));
        v283_.v284 = 0;
        v283_.v285 = 0;
        v283_.v286 = 0;
        v283_.v287 = nullptr;
        v276_.v277 = v73;
        v276_.v278 = 0;
        v276_.v279 = &GameData_1a9f09e;
        v280_.v282 = &GameData_1a9f09e;
        LODWORD(v276_.v276) = *(unsigned __int8*)(*v47 + 48);
        v78 = game_9e68c0(v68),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v83 = game_util_Format(GameData_1ae5b6b, v78[1], *(_QWORD*)(v72 + 8),
                               **(unsigned int**)(v73 + 24), v79, v80, v81, v82,
                               (char)v262),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        GameRoutine_65bed0(v288, (__int64)v83),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v276_.v278 = v288[0];
        v276_.v279 = (char*)v288[1];
        if ((v280_.v280[0] & 1) != 0) {
          break;
        }
        if ((v289[0] & 1) == 0) {
          qmemcpy(v280_.v280, v289, sizeof(v280_.v280));
          goto LABEL_164;
        }
        GameRoutine_64df20(v280_.v280, v289[2], v289[1]),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if ((v289[0] & 1) != 0) {
          goto LABEL_159;
        }
      LABEL_164:
        v87 = game_9e68c0(v68),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v92 = game_util_Format(GameData_1afcff3, v87[1], *(_QWORD*)(v72 + 8),
                               **(unsigned int**)(v73 + 24), v88, v89, v90, v91,
                               v263),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        if (*(_QWORD*)(v276_.v277 + 96) != 0) {
          GameRoutine_65bed0(v288, (__int64)v92),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v280_.v281 = v288[0];
          v280_.v282 = (char*)v288[1];
          if ((v283_.v283[0] & 1) != 0) {
            if ((v289[0] & 1) != 0) {
              v93 = (char*)v289[2];
            }
            else {
              v93 = (char*)v289 + 1;
            }
            if ((v289[0] & 1) != 0) {
              v94 = v289[1];
            }
            else {
              v94 = (unsigned __int64)LOBYTE(v289[0]) >> 1;
            }
            SpineModel_64dde0(v283_.v283, (__int64)v93, v94),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if ((v289[0] & 1) != 0) {
            LABEL_180:
              if (v289[2] != 0) {
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v95 = 128;
                }
                else {
                  v95 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v95),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
            }
          }
          else if ((v289[0] & 1) != 0) {
            GameRoutine_64df20(v283_.v283, v289[2], v289[1]),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            if ((v289[0] & 1) != 0) {
              goto LABEL_180;
            }
          }
          else {
            qmemcpy(v283_.v283, v289, sizeof(v283_.v283));
          }
        }
        else {
          v280_.v281 = 0;
          v280_.v282 = &GameData_1a9f09e;
          if ((v283_.v283[0] & 1) != 0) {
            *(_BYTE*)v283_.v283[2] = 0;
            v283_.v283[1] = 0;
          }
          else {
            LOWORD(v283_.v283[0]) = 0;
          }
        }
        v97 = (unsigned __int8**)v47[2];
        v96 = v47[3];
        if ((unsigned __int64)v97 >= v96) {
          v101 = v47[1];
          v102 = (__int64)v97 - v101;
          v103 = (v102 >> 7) + 1;
          if (v103 >> 57 != 0) {
            GameRoutine_9f17d0(),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v104 = v96 - v101;
          v105 = v104 >> 6;
          if (v104 >> 6 <= v103) {
            v105 = (v102 >> 7) + 1;
          }
          if ((unsigned __int64)v104 >= 0x7FFFFFFFFFFFFF80LL) {
            v106 = 0x1FFFFFFFFFFFFFFLL;
          }
          else {
            v106 = v105;
          }
          if (v106 != 0) {
            if (v106 >> 57 != 0) {
              goto LABEL_452;
            }
            v107 = fw_memory_HeapManager_Allocate(*v1, v106 << 7, 16, 0),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            v107 = 0;
          }
          v127 = (unsigned __int8*)v276_.v277;
          v128 = (unsigned __int8**)(v107 + v102);
          *v128 = v276_.v276;
          v128[1] = v127;
          v129 = v276_.v279;
          v128[2] = (unsigned __int8*)v276_.v278;
          v128[3] = (unsigned __int8*)v129;
          if ((v280_.v280[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v128 + 4, v280_.v280[2],
                                          v280_.v280[1]),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            qmemcpy(v128 + 4, v280_.v280, 24);
          }
          v130 = *((unsigned __int8*)v128 + 32);
          v265 = v107;
          v266 = v106;
          v131 = (unsigned __int8*)(v130 >> 1);
          v132 = (v130 & 1) == 0;
          v133 = v128[5];
          if (v132) {
            v133 = v131;
          }
          v134 = (unsigned __int8*)v128 + 33;
          if (!v132) {
            v134 = v128[6];
          }
          if (v133 != nullptr) {
            v135 = v134;
          }
          else {
            v135 = nullptr;
          }
          v128[3] = v135;
          v136 = v280_.v282;
          v128[7] = (unsigned __int8*)v280_.v281;
          v128[8] = (unsigned __int8*)v136;
          if ((v283_.v283[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v128 + 9, v283_.v283[2],
                                          v283_.v283[1]),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            qmemcpy(v128 + 9, v283_.v283, 24);
          }
          v137 = *((unsigned __int8*)v128 + 72);
          v128[12] = nullptr;
          v128[13] = nullptr;
          v128[14] = nullptr;
          v138 = (unsigned __int8*)(v137 >> 1);
          v139 = (v137 & 1) == 0;
          v140 = v128[10];
          if (v139) {
            v140 = v138;
          }
          v141 = (unsigned __int8*)v128 + 73;
          if (!v139) {
            v141 = v128[11];
          }
          if (v140 != nullptr) {
            v142 = v141;
          }
          else {
            v142 = nullptr;
          }
          v128[8] = v142;
          v143 = v283_.v284;
          v144 = v283_.v285 - v283_.v284;
          if (v283_.v285 != v283_.v284) {
            if (v144 < 0) {
            LABEL_451:
              GameRoutine_9f17b0(),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v88 = COERCE_AS(
                      __typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v90 = COERCE_AS(
                      __typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v91 = COERCE_AS(
                      __typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            v145 = fw_memory_HeapManager_Allocate(*v1, v283_.v285 - v283_.v284,
                                                  16, 0),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v146 = (unsigned __int8*)(v145 + v144);
            v128[12] = (unsigned __int8*)v145;
            v128[13] = (unsigned __int8*)v145;
            v128[14] = (unsigned __int8*)(v145 + v144);
            memcpy(v145, v143, v144),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v128[13] = v146;
          }
          v128[15] = v283_.v287;
          v148 = v47[1];
          v147 = v47[2];
          v149 = (char*)v128 + v148 - v147;
          if (v147 != v148) {
            v150 = 0;
            do {
              v159 = &v149[v150];
              v160 = *(_QWORD*)(v148 + v150 + 8);
              *(_QWORD*)v159 = *(_QWORD*)(v148 + v150);
              *((_QWORD*)v159 + 1) = v160;
              *((_QWORD*)v159 + 2) = *(_QWORD*)(v148 + v150 + 16);
              *((_QWORD*)v159 + 3) = *(_QWORD*)(v148 + v150 + 24);
              if ((*(_BYTE*)(v148 + v150 + 32) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)v159 + 4,
                                              *(_QWORD*)(v148 + v150 + 48),
                                              *(_QWORD*)(v148 + v150 + 40)),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              else {
                v161 = *(_QWORD*)(v148 + v150 + 32);
                v162 = *(_QWORD*)(v148 + v150 + 48);
                *((_QWORD*)v159 + 5) = *(_QWORD*)(v148 + v150 + 40);
                *((_QWORD*)v159 + 6) = v162;
                *((_QWORD*)v159 + 4) = v161;
              }
              v163 = (unsigned __int8)v159[32];
              v164 = &v149[v150];
              v165 = v163 >> 1;
              v166 = (v163 & 1) == 0;
              v167 = *(_QWORD*)&v149[v150 + 40];
              if (v166) {
                v167 = v165;
              }
              v168 = v164 + 33;
              if (!v166) {
                v168 = *(char**)&v149[v150 + 48];
              }
              if (v167 != 0) {
                v169 = v168;
              }
              else {
                v169 = nullptr;
              }
              *((_QWORD*)v159 + 3) = v169;
              *((_QWORD*)v164 + 7) = *(_QWORD*)(v148 + v150 + 56);
              *((_QWORD*)v164 + 8) = *(_QWORD*)(v148 + v150 + 64);
              if ((*(_BYTE*)(v148 + v150 + 72) & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)v164 + 9,
                                              *(_QWORD*)(v148 + v150 + 88),
                                              *(_QWORD*)(v148 + v150 + 80)),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              else {
                v170 = *(_QWORD*)(v148 + v150 + 72);
                v171 = *(_QWORD*)(v148 + v150 + 88);
                *((_QWORD*)v164 + 10) = *(_QWORD*)(v148 + v150 + 80);
                *((_QWORD*)v164 + 11) = v171;
                *((_QWORD*)v164 + 9) = v170;
              }
              v151 = (unsigned __int8)v164[72];
              v152 = &v149[v150];
              *((_QWORD*)v152 + 12) = 0;
              *((_QWORD*)v152 + 13) = 0;
              *((_QWORD*)v152 + 14) = 0;
              v153 = v151 >> 1;
              v154 = (v151 & 1) == 0;
              v155 = *(_QWORD*)&v149[v150 + 80];
              if (v154) {
                v155 = v153;
              }
              v156 = v152 + 73;
              if (!v154) {
                v156 = *(char**)&v149[v150 + 88];
              }
              if (v155 != 0) {
                v157 = v156;
              }
              else {
                v157 = nullptr;
              }
              *((_QWORD*)v164 + 8) = v157;
              v158 = (_QWORD*)(v148 + v150);
              v150 += 128;
              *((_QWORD*)v152 + 12) = v158[12];
              *((_QWORD*)v152 + 13) = v158[13];
              *((_QWORD*)v152 + 14) = v158[14];
              v158[13] = 0;
              v158[14] = 0;
              v158[12] = 0;
              *((_QWORD*)v152 + 15) = v158[15];
            } while (v148 + v150 != v147);
            v1 = (__int64*)fw_memory_g_heap_manager_ptr;
            do {
              v172 = *(_QWORD*)(v148 + 96);
              if (v172 != 0) {
                *(_QWORD*)(v148 + 104) = v172;
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v173 = 128;
                }
                else {
                  v173 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v173),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              if ((*(_BYTE*)(v148 + 72) & 1) != 0 &&
                  *(_QWORD*)(v148 + 88) != 0) {
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v174 = 128;
                }
                else {
                  v174 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v174),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              if ((*(_BYTE*)(v148 + 32) & 1) != 0 &&
                  *(_QWORD*)(v148 + 48) != 0) {
                if (*(_QWORD*)(*v1 + 200) != 0) {
                  v175 = 128;
                }
                else {
                  v175 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v175),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              v148 += 128;
            } while (v148 != v147);
            v148 = v47[1];
          }
          v126 = v128 + 16;
          v47[1] = (__int64)v149;
          v47[2] = (__int64)(v128 + 16);
          v47[3] = v265 + (v266 << 7);
          if (v148 != 0) {
            v176 = 56;
            if (*(_QWORD*)(*v1 + 200) != 0) {
              v176 = 128;
            }
            nn_mem_StandardAllocator_Free(*v1 + v176),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
        }
        else {
          v98 = (unsigned __int8*)v276_.v277;
          *v97 = v276_.v276;
          v97[1] = v98;
          v97[2] = (unsigned __int8*)v276_.v278;
          v97[3] = (unsigned __int8*)v276_.v279;
          if ((v280_.v280[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v97 + 4, v280_.v280[2],
                                          v280_.v280[1]),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            v99 = v280_.v280[0];
            v100 = v280_.v280[2];
            v97[5] = (unsigned __int8*)v280_.v280[1];
            v97[6] = (unsigned __int8*)v100;
            v97[4] = (unsigned __int8*)v99;
          }
          v108 = *((unsigned __int8*)v97 + 32);
          v109 = (unsigned __int8*)(v108 >> 1);
          v110 = (v108 & 1) == 0;
          v111 = v97[5];
          if (v110) {
            v111 = v109;
          }
          v112 = (unsigned __int8*)v97 + 33;
          if (!v110) {
            v112 = v97[6];
          }
          if (v111 != nullptr) {
            v113 = v112;
          }
          else {
            v113 = nullptr;
          }
          v97[3] = v113;
          v97[7] = (unsigned __int8*)v280_.v281;
          v97[8] = (unsigned __int8*)v280_.v282;
          if ((v283_.v283[0] & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v97 + 9, v283_.v283[2],
                                          v283_.v283[1]),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            v114 = v283_.v283[0];
            v115 = v283_.v283[2];
            v97[10] = (unsigned __int8*)v283_.v283[1];
            v97[11] = (unsigned __int8*)v115;
            v97[9] = (unsigned __int8*)v114;
          }
          v116 = *((unsigned __int8*)v97 + 72);
          v97[12] = nullptr;
          v97[13] = nullptr;
          v97[14] = nullptr;
          v117 = (unsigned __int8*)(v116 >> 1);
          v118 = (v116 & 1) == 0;
          v119 = v97[10];
          if (v118) {
            v119 = v117;
          }
          v120 = (unsigned __int8*)v97 + 73;
          if (!v118) {
            v120 = v97[11];
          }
          if (v119 != nullptr) {
            v121 = v120;
          }
          else {
            v121 = nullptr;
          }
          v97[8] = v121;
          v122 = v283_.v284;
          v123 = v283_.v285 - v283_.v284;
          if (v283_.v285 != v283_.v284) {
            if (v123 < 0) {
              goto LABEL_451;
            }
            v124 = fw_memory_HeapManager_Allocate(*v1, v283_.v285 - v283_.v284,
                                                  16, 0),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v125 = (unsigned __int8*)(v124 + v123);
            v97[12] = (unsigned __int8*)v124;
            v97[13] = (unsigned __int8*)v124;
            v97[14] = (unsigned __int8*)(v124 + v123);
            memcpy(v124, v122, v123),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v97[13] = v125;
          }
          v97[15] = v283_.v287;
          v126 = v97 + 16;
        }
        v47[2] = (__int64)v126;
        v68 = v268;
        v72 = v267;
        if (v283_.v284 != 0) {
          v177 = *v1;
          v283_.v285 = v283_.v284;
          if (*(_QWORD*)(v177 + 200) != 0) {
            v178 = 128;
          }
          else {
            v178 = 56;
          }
          nn_mem_StandardAllocator_Free(v177 + v178),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        if ((v283_.v283[0] & 1) != 0 && v283_.v283[2] != 0) {
          if (*(_QWORD*)(*v1 + 200) != 0) {
            v179 = 128;
          }
          else {
            v179 = 56;
          }
          nn_mem_StandardAllocator_Free(*v1 + v179),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        if ((v280_.v280[0] & 1) != 0 && v280_.v280[2] != 0) {
          if (*(_QWORD*)(*v1 + 200) != 0) {
            v180 = 128;
          }
          else {
            v180 = 56;
          }
          nn_mem_StandardAllocator_Free(*v1 + v180),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
        v73 = *(_QWORD*)(*(_QWORD*)(v73 + 24) + 32LL);
        if (v73 == 0) {
          v70 = (_QWORD*)v47[2];
          goto LABEL_308;
        }
      }
      if ((v289[0] & 1) != 0) {
        v84 = (char*)v289[2];
      }
      else {
        v84 = (char*)v289 + 1;
      }
      if ((v289[0] & 1) != 0) {
        v85 = v289[1];
      }
      else {
        v85 = (unsigned __int64)LOBYTE(v289[0]) >> 1;
      }
      SpineModel_64dde0(v280_.v280, (__int64)v84, v85),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if ((v289[0] & 1) == 0) {
        goto LABEL_164;
      }
    LABEL_159:
      if (v289[2] != 0) {
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v86 = 128;
        }
        else {
          v86 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v86),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      goto LABEL_164;
    }
  LABEL_308:
    v181 = (_QWORD*)v47[1];
    if (v181 != v70) {
      v182 = (_QWORD*)v47[5];
      do {
        v183 = v47[6];
        if ((unsigned __int64)v182 < v183) {
          *v182++ = v181;
        }
        else {
          v184 = *v269;
          v185 = (__int64)v182 - *v269;
          v186 = (v185 >> 3) + 1;
          if (v186 >> 61 != 0) {
            goto LABEL_451;
          }
          v187 = v183 - v184;
          if (v187 >> 2 > v186) {
            v186 = v187 >> 2;
          }
          if ((unsigned __int64)v187 >= 0x7FFFFFFFFFFFFFF8LL) {
            v188 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v188 = v186;
          }
          if (v188 != 0) {
            if (v188 >> 61 != 0) {
              goto LABEL_452;
            }
            v189 = fw_memory_HeapManager_Allocate(*v1, 8 * v188, 16, 0),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          else {
            v189 = 0;
          }
          v190 = v189 + 8 * v188;
          v191 = v189 + v185 - 8 * (v185 >> 3);
          *(_QWORD*)(v189 + v185) = v181;
          v182 = (_QWORD*)(v189 + v185 + 8);
          memcpy(v191, v184, v185),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v47[4] = v191;
          v47[5] = (__int64)v182;
          v47[6] = v190;
          if (v184 != 0) {
            v192 = 128;
            if (*(_QWORD*)(*v1 + 200) == 0) {
              v192 = 56;
            }
            nn_mem_StandardAllocator_Free(*v1 + v192),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
        }
        v181 += 16;
        v47[5] = (__int64)v182;
      } while (v181 != v70);
      v181 = (_QWORD*)v47[1];
      v70 = (_QWORD*)v47[2];
    }
    if (v181 == v70) {
      goto LABEL_360;
    }
    v193 = v181 + 12;
    while (1) {
      if (v193 == v269) {
        goto LABEL_332;
      }
      v197 = v47[4];
      v196 = v47[5];
      v198 = v193[2];
      v199 = v196 - v197;
      v200 = *v193;
      if (v196 - v197 <= (unsigned __int64)(v198 - *v193)) {
        v205 = v193[1];
        v206 = v205 - v200;
        if (v199 > (unsigned __int64)(v205 - v200)) {
          if (v205 != v200) {
            memmove(*v193, v47[4], v205 - v200),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v205 = v193[1];
          }
          v207 = v197 + v206;
          v208 = v196 - (v197 + v206);
          if (v208 != 0) {
            memmove(v205, v207, v208),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v194 = v205 + v208;
          goto LABEL_331;
        }
        if (v196 != v197) {
          memmove(*v193, v47[4], v196 - v197),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      else {
        if (v200 != 0) {
          v193[1] = v200;
          v201 = 128;
          if (*(_QWORD*)(*v1 + 200) == 0) {
            v201 = 56;
          }
          nn_mem_StandardAllocator_Free(*v1 + v201),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v198 = 0;
          v193[1] = 0;
          v193[2] = 0;
          *v193 = 0;
        }
        v202 = v199 >> 3;
        if ((unsigned __int64)(v199 >> 3) >> 61 != 0) {
          goto LABEL_451;
        }
        if (v198 >> 2 > v202) {
          v202 = v198 >> 2;
        }
        v203 = (unsigned __int64)v198 >= 0x7FFFFFFFFFFFFFF8LL
                   ? 0x1FFFFFFFFFFFFFFFLL
                   : v202;
        if (v203 >> 61 != 0) {
          goto LABEL_451;
        }
        v204 = fw_memory_HeapManager_Allocate(*v1, 8 * v203, 16, 0),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v80 = COERCE_AS(__typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v90 = COERCE_AS(__typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v91 = COERCE_AS(__typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v200 = v204;
        *v193 = v204;
        v193[1] = v204;
        v193[2] = v204 + 8 * v203;
        if (v196 != v197) {
          memcpy(v204, v197, v196 - v197),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      }
      v194 = v200 + v199;
    LABEL_331:
      v193[1] = v194;
    LABEL_332:
      v195 = v193 + 4;
      v193 += 16;
      if (v195 == v70) {
        v181 = (_QWORD*)v47[1];
        v70 = (_QWORD*)v47[2];
      LABEL_360:
        while (v181 != v70) {
          if (v181[7] != 0) {
            v210 = GameData_21f9038;
            if (GameData_21f9038 < (unsigned __int64)GameData_21f9040) {
              *(_QWORD*)GameData_21f9038 = v181;
              v209 = v210 + 8;
            }
            else {
              v211 = GameData_21f9030;
              v212 = GameData_21f9038 - GameData_21f9030;
              v213 = (GameData_21f9038 - GameData_21f9030) >> 3;
              v214 = v213 + 1;
              if ((unsigned __int64)(v213 + 1) >> 61 != 0) {
                goto LABEL_451;
              }
              v215 = GameData_21f9040 - GameData_21f9030;
              if ((GameData_21f9040 - GameData_21f9030) >> 2 > v214) {
                v214 = v215 >> 2;
              }
              if ((unsigned __int64)v215 >= 0x7FFFFFFFFFFFFFF8LL) {
                v216 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v216 = v214;
              }
              if (v216 != 0) {
                if (v216 >> 61 != 0) {
                  goto LABEL_452;
                }
                v217 = fw_memory_HeapManager_Allocate(*v1, 8 * v216, 16, 0),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v80 =
                    COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v81 =
                    COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v82 =
                    COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                v88 =
                    COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v89 =
                    COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v90 =
                    COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v91 =
                    COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
              else {
                v217 = 0;
              }
              v218 = v217 + 8 * v216;
              v219 = v217 + v212 - 8 * v213;
              *(_QWORD*)(v217 + v212) = v181;
              v209 = v217 + v212 + 8;
              memcpy(v219, v211, v212),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v80 = COERCE_AS(
                      __typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v81 = COERCE_AS(
                      __typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v82 = COERCE_AS(
                      __typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v88 = COERCE_AS(
                      __typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v89 = COERCE_AS(
                      __typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v90 = COERCE_AS(
                      __typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v91 = COERCE_AS(
                      __typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              GameData_21f9030 = v219;
              GameData_21f9038 = v209;
              GameData_21f9040 = v218;
              if (v211 != 0) {
                v220 = 128;
                if (*(_QWORD*)(*v1 + 200) == 0) {
                  v220 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v220),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v80 = COERCE_AS(
                        __typeof__(v80),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v81 = COERCE_AS(
                        __typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v82 = COERCE_AS(
                        __typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v88 = COERCE_AS(
                        __typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                    v89 = COERCE_AS(
                        __typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                    v90 = COERCE_AS(
                        __typeof__(v90),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                    v91 = COERCE_AS(
                        __typeof__(v91),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
            }
            GameData_21f9038 = v209;
          }
          v181 += 16;
        }
      LABEL_84:
        v40 = v264 + 1;
        if (v264 + 1 == v262) {
          break;
        }
        goto LABEL_85;
      }
    }
  }
  GameData_21f85f8 = GameData_21f85f0;
  if (GameData_21f9020 != 0) {
    v221 = (_QWORD*)GameData_21f9018;
    if (GameData_21f9018 != 0) {
      do {
        v222 = (_QWORD*)*v221;
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v223 = 128;
        }
        else {
          v223 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v223),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v80 = COERCE_AS(__typeof__(v80),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v81 = COERCE_AS(__typeof__(v81),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v88 = COERCE_AS(__typeof__(v88),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v89 = COERCE_AS(__typeof__(v89),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v90 = COERCE_AS(__typeof__(v90),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v91 = COERCE_AS(__typeof__(v91),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v221 = v222;
      } while (v222 != nullptr);
    }
    GameData_21f9018 = 0;
    if (GameData_21f9010 != 0) {
      v224 = GameData_21f9010 & 7;
      if ((unsigned __int64)GameData_21f9010 >= 8) {
        v226 = GameData_21f9010 & 0xFFFFFFFFFFFFFFF8LL;
        v225 = 0;
        do {
          *(_QWORD*)(GameData_21f9008 + 8 * v225) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 8) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 16) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 24) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 32) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 40) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v225 + 48) = 0;
          v227 = GameData_21f9008 + 8 * v225;
          v225 += 8;
          *(_QWORD*)(v227 + 56) = 0;
        } while (v226 != v225);
      }
      else {
        v225 = 0;
      }
      if (v224 != 0) {
        v228 = 8 * v225;
        do {
          --v224;
          *(_QWORD*)(GameData_21f9008 + v228) = 0;
          v228 += 8;
        } while (v224 != 0);
      }
    }
    GameData_21f9020 = 0;
  }
  for (j = 0; j != 36; ++j) {
    v230 = &GameData_21f8980[5 * j];
    GameData_21f8620[3 * j + 1] = GameData_21f8620[3 * j];
    if (v230[3] != 0) {
      v231 = (_QWORD*)v230[2];
      v232 = v1;
      if (v231 != nullptr) {
        do {
          v233 = (_QWORD*)*v231;
          if (*(_QWORD*)(*v232 + 200) != 0) {
            v234 = 128;
          }
          else {
            v234 = 56;
          }
          nn_mem_StandardAllocator_Free(*v232 + v234),
              v79 = COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v80 = COERCE_AS(__typeof__(v80),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
              v88 = COERCE_AS(__typeof__(v88),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
              v90 = COERCE_AS(__typeof__(v90),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v231 = v233;
        } while (v233 != nullptr);
      }
      v235 = v230[1];
      v230[2] = 0;
      v1 = v232;
      if (v235 != 0) {
        if (v235 >= 8) {
          v236 = 0;
          do {
            *(_QWORD*)(*v230 + 8 * v236) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 8) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 16) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 24) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 32) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 40) = 0;
            *(_QWORD*)(*v230 + 8 * v236 + 48) = 0;
            v237 = *v230 + 8 * v236;
            v236 += 8;
            *(_QWORD*)(v237 + 56) = 0;
          } while ((v235 & 0xFFFFFFFFFFFFFFF8LL) != v236);
        }
        else {
          v236 = 0;
        }
        v238 = v235 & 7;
        if (v238 != 0) {
          v239 = 8 * v236;
          do {
            --v238;
            *(_QWORD*)(*v230 + v239) = 0;
            v239 += 8;
          } while (v238 != 0);
        }
      }
      v230[3] = 0;
    }
  }
  GameRoutine_9eb2c0(1u, 0, 0),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(2u, 1u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(3u, 2u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(4u, 3u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(5u, 4u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(6u, 5u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(7u, 6u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(8u, 7u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(9u, 8u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xAu, 1u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xBu, 2u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xCu, 3u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xDu, 4u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xEu, 5u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0xFu, 6u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x10u, 8u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x11u, 9u, 0),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x12u, 9u, 3),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x13u, 1u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x14u, 2u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x15u, 3u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x16u, 4u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x17u, 5u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x18u, 6u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x19u, 7u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Au, 8u, 1),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Bu, 1u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Cu, 2u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Du, 3u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Eu, 4u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x1Fu, 5u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x20u, 6u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x21u, 8u, 2),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_9eb2c0(0x22u, 9u, 0),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = GameRoutine_9eb2c0(0x23u, 9u, 3),
  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v80 = COERCE_AS(__typeof__(v80),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v90 = COERCE_AS(__typeof__(v90),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v91 = COERCE_AS(__typeof__(v91),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  for (k = 0; k != 36; ++k) {
    v242 = (__int64**)&GameData_21f8620[3 * k];
    v243 = *v242;
    v244 = v242[1];
    if (*v242 != v244) {
      v245 = &GameData_21f8980[5 * k];
      do {
        v246 = *v243;
        v247 = *(_QWORD*)(*(_QWORD*)(*v243 + 8) + 48LL);
        if (v247 != 0) {
          result = game_HashString(*(_QWORD*)(v247 + 32)),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v80 = COERCE_AS(__typeof__(v80),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v81 = COERCE_AS(__typeof__(v81),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v82 = COERCE_AS(__typeof__(v82),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v88 = COERCE_AS(__typeof__(v88),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v89 = COERCE_AS(__typeof__(v89),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v90 = COERCE_AS(__typeof__(v90),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v91 = COERCE_AS(__typeof__(v91),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v248 = v245[1];
          if (v248 != 0 && v245[3] != 0) {
            v250 = v248 - 1;
            if ((v248 & (v248 - 1)) != 0) {
              v251 = result;
              if (result >= v248) {
                v251 = result % v248;
              }
            }
            else {
              v251 = v250 & result;
            }
            v252 = *(_QWORD**)(*v245 + 8 * v251);
            if (v252 != nullptr) {
              v253 = (_QWORD*)*v252;
              if (v253 != nullptr) {
                if ((v248 & v250) == 0) {
                  while (1) {
                    v255 = v253[1];
                    if (v255 == result) {
                      if (v253[2] == result) {
                        goto LABEL_414;
                      }
                    }
                    else if ((v255 & v250) != v251) {
                      goto LABEL_415;
                    }
                    v253 = (_QWORD*)*v253;
                    if (v253 == nullptr) {
                      goto LABEL_415;
                    }
                  }
                }
                do {
                  v254 = v253[1];
                  if (v254 == result) {
                    if (v253[2] == result) {
                    LABEL_414:
                      *(_QWORD*)(v246 + 120) = v253[3];
                      break;
                    }
                  }
                  else {
                    if (v254 >= v248) {
                      v254 %= v248;
                    }
                    if (v254 != v251) {
                      break;
                    }
                  }
                  v253 = (_QWORD*)*v253;
                } while (v253 != nullptr);
              }
            }
          }
        }
      LABEL_415:
        ++v243;
      } while (v243 != v244);
    }
  }
  v256 = v273_.v273;
  v257 = fw_memory_g_heap_manager_ptr;
  if (v273_.v273 != nullptr) {
    do {
      v258 = (_QWORD*)*v256;
      if (*(_QWORD*)(*(_QWORD*)v257 + 200LL) != 0) {
        v259 = 128;
      }
      else {
        v259 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v257 + v259),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v80 = COERCE_AS(__typeof__(v80),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v90 = COERCE_AS(__typeof__(v90),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v91 = COERCE_AS(__typeof__(v91),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v256 = v258;
    } while (v258 != nullptr);
  }
  v260 = v271_.v271;
  v271_.v271 = 0;
  if (v260 != 0) {
    v261 = 128;
    if (*(_QWORD*)(*(_QWORD*)v257 + 200LL) == 0) {
      v261 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v257 + v261);
  }
  return result;
}

__int64 RecallCategoryFile_Unknown5()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = fw_memory_g_heap_manager_ptr;
  if (GameData_21f9078 != 0) {
    v1 = (_QWORD*)GameData_21f9070;
    if (GameData_21f9070 != 0) {
      do {
        v4 = (_QWORD*)*v1;
        v5 = v1[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v0;
          v1[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v2);
        v1 = v4;
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
  GameData_21f9050 = GameData_21f9048;
  GameData_21f9038 = GameData_21f9030;
  GameData_21f85f8 = GameData_21f85f0;
  if (GameData_21f9020 != 0) {
    v13 = (_QWORD*)GameData_21f9018;
    if (GameData_21f9018 != 0) {
      do {
        v14 = (_QWORD*)*v13;
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v15);
        v13 = v14;
      } while (v14 != nullptr);
    }
    GameData_21f9018 = 0;
    if (GameData_21f9010 != 0) {
      v16 = GameData_21f9010 & 7;
      if ((unsigned __int64)GameData_21f9010 >= 8) {
        v18 = GameData_21f9010 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(GameData_21f9008 + 8 * v17) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 8) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 16) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 24) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 32) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 40) = 0;
          *(_QWORD*)(GameData_21f9008 + 8 * v17 + 48) = 0;
          v19 = GameData_21f9008 + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(GameData_21f9008 + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    GameData_21f9020 = 0;
  }
  for (i = 0; i != 36; ++i) {
    v22 = &GameData_21f8980[5 * i];
    GameData_21f8620[3 * i + 1] = GameData_21f8620[3 * i];
    if (v22[3] != 0) {
      v23 = (_QWORD*)v22[2];
      if (v23 != nullptr) {
        do {
          v24 = (_QWORD*)*v23;
          if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v25);
          v23 = v24;
        } while (v24 != nullptr);
      }
      v26 = v22[1];
      v22[2] = 0;
      if (v26 != 0) {
        if (v26 >= 8) {
          v27 = 0;
          do {
            *(_QWORD*)(*v22 + 8 * v27) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 8) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 16) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 24) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 32) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 40) = 0;
            *(_QWORD*)(*v22 + 8 * v27 + 48) = 0;
            v28 = *v22 + 8 * v27;
            v27 += 8;
            *(_QWORD*)(v28 + 56) = 0;
          } while ((v26 & 0xFFFFFFFFFFFFFFF8LL) != v27);
        }
        else {
          v27 = 0;
        }
        v29 = v26 & 7;
        if (v29 != 0) {
          v30 = 8 * v27;
          do {
            --v29;
            *(_QWORD*)(*v22 + v30) = 0;
            v30 += 8;
          } while (v29 != 0);
        }
      }
      v22[3] = 0;
    }
  }
  return result;
}

__int64 RecallCategoryFile_9eeb60(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
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
  _QWORD* v49;

  if (*(_BYTE*)(result + 248) == 1) {
    v1 = *(_QWORD**)(result + 8);
    v2 = (_QWORD*)result;
    if (*(_QWORD**)(result + 16) == v1) {
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
      GameRoutine_66cf00(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = v2[4];
    if (v2[5] == v7) {
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
      GameRoutine_66cf00(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    ++GameData_21c97b8;
    result = (*(__int64 (**)(_QWORD*))(*v2 + 48LL))(v2);
    v12 = (__int64*)v2[7];
    v13 = (__int64*)v2[8];
    v49 = v2;
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
          result = GameRoutine_66d660(&GameData_21c97c0);
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
          nn_mem_StandardAllocator_Free(v27 + v28);
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
                nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v33);
              }
              if ((*(_BYTE*)(v31 - 56) & 1) != 0 && *(_QWORD*)(v31 - 40) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                  v34 = 128;
                }
                else {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v34);
              }
              if ((*(_BYTE*)(v31 - 96) & 1) != 0 && *(_QWORD*)(v31 - 80) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
                  v35 = 128;
                }
                else {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v35);
              }
              v31 -= 128;
            } while (v31 != v29);
            v36 = v25[1];
            v13 = v30;
            v25[2] = v29;
            if (v36 == 0) {
              goto LABEL_56;
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v37 = 128;
          }
          else {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v37);
        }
      LABEL_56:
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v38);
        *(_QWORD*)(v20 + 24) = 0;
        v24 = GameData_21c97e8;
      LABEL_60:
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v39 = 0;
        }
        else {
          v39 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = v24 - 1;
        GameData_21c97e8 = v24 - 1;
        if ((unsigned __int64)(v39 - (v24 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v40 = 128;
            }
            else {
              v40 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v40);
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
    v41 = GameData_21c9770;
    v42 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v42 = 0;
    }
    *((_BYTE*)v49 + 248) = 0;
    v43 = GameData_21c9788--;
    if ((unsigned __int64)(v42 - (v43 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v41 - 8) != 0) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
        v41 = GameData_21c9770;
      }
      GameData_21c9770 = v41 - 8;
    }
    v45 = GameData_21c97a0;
    v46 = GameData_21c97b8;
    v47 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v47 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v47 - (v46 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
        v45 = GameData_21c97a0;
      }
      GameData_21c97a0 = v45 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
