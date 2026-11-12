#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a10aa0(_QWORD* result);
_QWORD* GameRoutine_a12700(_QWORD* result, unsigned __int64*, __int64);
_QWORD* GameRoutine_a12920(float*, unsigned __int64*, __int64*, __int64*);
_QWORD* GameRoutine_a12ee0(__int64, unsigned __int64, __int64*);
__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8, unsigned __int8*);
__int64* GameRoutine_60e940(__int64, unsigned __int64, int*);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_60f380(float*, int*, int*, _QWORD*);
__int64 GameRoutine_a130e0(__int64 result, __int64*, __int64, __int64*,
                           __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 hub_AcquireTableResource(_QWORD*, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
const char* hub_ResourceVariant(unsigned __int8*);
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60e910();
void __attribute__((noreturn)) GameRoutine_60f930();
void __attribute__((noreturn)) GameRoutine_a12eb0();
void __attribute__((noreturn)) String_60a1d0();
bool ReplacementFile_a11400_alt1(__int64 a1, __int64 a2, __int64 a3,
                                 int a4) __asm__("ReplacementFile_a11400");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64
hub_AcquireTableResource_alt1(_QWORD*,
                              const char*) __asm__("hub_AcquireTableResource");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_a10aa0_alt1(_QWORD*) __asm__("GameRoutine_a10aa0");
void GameRoutine_a12700_alt1(_QWORD*, unsigned __int64*,
                             __int64) __asm__("GameRoutine_a12700");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool ReplacementFile_a11400(__int64 a1, const char* a2, __int64 a3, int a4);

bool ReplacementFile_a11400(__int64 a1, const char* a2, __int64 a3, int a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _DWORD* v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  _QWORD* v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64** v102;
  __int64* v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  char v108;
  __int64 v109;
  __int64 v110;
  _QWORD* v111;
  char v112;
  const char* v113;
  unsigned __int64 v114;
  const char** v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  const char* v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  bool v136;
  __int64 v137;
  unsigned __int64 v138;
  unsigned __int64** v139;
  unsigned __int64** v140;
  _QWORD* v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64* v145;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  _QWORD* v152;
  _QWORD* v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64* v157;
  _QWORD* v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64* v162;
  __int64* v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64* v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  _QWORD* v169;
  char* v170;
  __int64 v171;
  unsigned __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  char* v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  _QWORD* v204;
  _QWORD* v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  _QWORD* v211;
  _QWORD* v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  char v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  int v225;
  __int64* v226;
  __int64 v227;
  __int64 v228;
  int v229;
  __int64 v230;
  struct {
    _QWORD v231[2];
    char* v232;
  } v231_;
  struct {
    __int64 v233;
    __int64 v234;
  } v233_;
  int v235;
  __int64 v236;
  struct {
    __int64 v237;
    unsigned __int64 v238;
    _QWORD* v239;
    __int64 v240;
    int v241;
  } v237_;
  struct {
    __int64 v242;
    unsigned __int64 v243;
  } v242_;
  struct {
    _QWORD* v244;
    __int64 v245;
    int v246;
  } v244_;

  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = strlen_alt1(a2),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = v8;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v8 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v231_.v231[1] = v9;
    v231_.v232 = v11;
    v231_.v231[0] = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v231_.v231[0]) = 2 * v8;
  v11 = (char*)v231_.v231 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v11, (__int64)a2, v9),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11[v9] = 0;
  Manager_66c4e0((void*)((__int64)&v233_.v233), (unsigned __int8*)v231_.v231),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_a10aa0_alt1((_QWORD*)a1),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = v233_.v233;
  v13 = v233_.v234;
  v237_.v239 = nullptr;
  v237_.v240 = 0;
  v237_.v237 = 0;
  v237_.v238 = 0;
  v237_.v241 = 1065353216;
  if (v233_.v233 != v233_.v234) {
    v15 = (__int64*)(a1 + 176);
    v16 = 0;
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        v18 = *(const char**)(v14 + 16);
      }
      else {
        v18 = (const char*)(v14 + 1);
      }
      v19 = hub_AcquireTableResource_alt1((_QWORD*)a1, v18),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v19 != 0) {
        v20 = v19;
        v21 = game_HashString(a3),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v21 != 0) {
          v22 = *(_QWORD**)(v20 + 808);
          v23 = v22[2];
          if (v23 != 0 && v22[4] != 0) {
            v25 = v23 - 1;
            if ((v23 & (v23 - 1)) != 0) {
              v26 = v21;
              if (v21 >= v23) {
                v26 = v21 % v23;
              }
            }
            else {
              v26 = v25 & v21;
            }
            v27 = *(_QWORD**)(v22[1] + 8 * v26);
            if (v27 != nullptr) {
              v28 = (_QWORD*)*v27;
              if (v28 != nullptr) {
                if ((v23 & v25) == 0) {
                  while (1) {
                    v30 = v28[1];
                    if (v21 == v30) {
                      if (v28[2] == v21) {
                        goto LABEL_44;
                      }
                    }
                    else if ((v30 & v25) != v26) {
                      goto LABEL_14;
                    }
                    v28 = (_QWORD*)*v28;
                    if (v28 == nullptr) {
                      goto LABEL_14;
                    }
                  }
                }
                while (1) {
                  v29 = v28[1];
                  if (v21 == v29) {
                    break;
                  }
                  if (v29 >= v23) {
                    v29 %= v23;
                  }
                  if (v29 != v26) {
                    goto LABEL_14;
                  }
                LABEL_33:
                  v28 = (_QWORD*)*v28;
                  if (v28 == nullptr) {
                    goto LABEL_14;
                  }
                }
                if (v28[2] != v21) {
                  goto LABEL_33;
                }
              LABEL_44:
                v31 = v28[3];
                if (v31 != 0) {
                  v32 = *(_DWORD**)(v31 + 32);
                  if (v32 != nullptr && *v32 == 539300353 && v32[4] == 40) {
                    v225 = a4;
                    v34 = *(_QWORD**)(a1 + 40);
                    v33 = *(_QWORD*)(a1 + 48);
                    v226 = v15;
                    v229 = v16;
                    v228 = v28[3];
                    if ((unsigned __int64)v34 >= v33) {
                      v36 = *(_QWORD*)(a1 + 32);
                      v37 = (unsigned __int64)v34 - v36;
                      v38 = ((__int64)v34 - v36) >> 3;
                      v39 = v38 + 1;
                      if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
                        GameRoutine_60e910(),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v40 = v33 - v36;
                      if (v40 >> 2 > v39) {
                        v39 = v40 >> 2;
                      }
                      if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v41 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v41 = v39;
                      }
                      if (v41 != 0) {
                        if (v41 >> 61 != 0) {
                          goto LABEL_382;
                        }
                        v42 = fw_memory_HeapManager_Allocate(*v10, 8 * v41, 16,
                                                             0),
                        v108 = COERCE_AS(
                            __typeof__(v108),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v112 = COERCE_AS(
                            __typeof__(v112),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      }
                      else {
                        v42 = 0;
                      }
                      v43 = v42 + 8 * v41;
                      v44 = v42 + v37 - 8 * v38;
                      *(_QWORD*)(v42 + v37) = v228;
                      v35 = v42 + v37 + 8;
                      memcpy_alt1(v44, v36, v37),
                          v108 = COERCE_AS(
                              __typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v112 = COERCE_AS(
                              __typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      *(_QWORD*)(a1 + 32) = v44;
                      *(_QWORD*)(a1 + 40) = v35;
                      *(_QWORD*)(a1 + 48) = v43;
                      if (v36 != 0) {
                        v45 = 128;
                        if (*(_QWORD*)(*v10 + 200) == 0) {
                          v45 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(*v10 + v45, v36),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v16 = v229;
                      v31 = v228;
                    }
                    else {
                      *v34 = v31;
                      v35 = (__int64)(v34 + 1);
                    }
                    *(_QWORD*)(a1 + 40) = v35;
                    if (*(_WORD*)(v31 + 18) != 0) {
                      v46 = *(_QWORD*)(v31 + 40);
                      if (v46 != 0) {
                        v47 = 0;
                        v227 = a3;
                        while (1) {
                          v236 = v46 + 40 * v47;
                          if (v46 == 0) {
                            goto LABEL_150;
                          }
                          v230 = v46 + 40 * v47;
                          v48 = *(unsigned __int16*)(v230 + 22) + 1LL;
                          v49 = fw_memory_HeapManager_Allocate(*v10, 24, 16, 0),
                          v108 = COERCE_AS(
                              __typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v112 = COERCE_AS(
                              __typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          *(_DWORD*)(v49 + 16) = v48;
                          *(_DWORD*)(v49 + 20) = v16;
                          *(_QWORD*)v49 = 0;
                          *(_QWORD*)(v49 + 8) = v48;
                          if (GameRoutine_60e940(a1 + 160, v48,
                                                 (int*)(v49 + 16)) != nullptr) {
                            v50 = 128;
                            if (*(_QWORD*)(*v10 + 200) == 0) {
                              v50 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt1(*v10 + v50, v49),
                                v108 = COERCE_AS(
                                    __typeof__(v108),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v112 = COERCE_AS(
                                    __typeof__(v112),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v51 = v230;
                            if (v16 < 1) {
                              goto LABEL_111;
                            }
                          }
                          else {
                            v52 = *(_QWORD*)(a1 + 168);
                            v53 = *(_QWORD*)(v49 + 8);
                            v54 = v52 - 1;
                            if ((v52 & (v52 - 1)) != 0) {
                              v51 = v230;
                              if (v53 >= v52) {
                                v53 %= v52;
                              }
                            }
                            else {
                              v51 = v230;
                              v53 &= v54;
                            }
                            v55 = *(_QWORD*)(a1 + 160);
                            v56 = *(__int64**)(v55 + 8 * v53);
                            if (v56 != nullptr) {
                              *(_QWORD*)v49 = *v56;
                              *v56 = v49;
                            }
                            else {
                              v57 = *v226;
                              *v226 = v49;
                              *(_QWORD*)v49 = v57;
                              *(_QWORD*)(v55 + 8 * v53) = v226;
                              if (*(_QWORD*)v49 != 0) {
                                v58 = *(_QWORD*)(*(_QWORD*)v49 + 8LL);
                                if ((v52 & v54) != 0) {
                                  if (v58 >= v52) {
                                    v58 %= v52;
                                  }
                                }
                                else {
                                  v58 &= v54;
                                }
                                *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8 * v58) =
                                    v49;
                              }
                            }
                            ++*(_QWORD*)(a1 + 184);
                            if (v16 < 1) {
                            LABEL_111:
                              v235 = *(unsigned __int16*)(v51 + 22) + 1;
                              v242_.v242 = (__int64)(*(_QWORD*)(a1 + 64) -
                                                     *(_QWORD*)(a1 + 56)) >>
                                           3;
                              GameRoutine_60f380((float*)&v237_.v237, &v235,
                                                 &v235, &v242_.v242),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v68 = *(__int64**)(a1 + 64);
                              v67 = *(_QWORD*)(a1 + 72);
                              if ((unsigned __int64)v68 < v67) {
                                *v68 = v51;
                                v69 = (__int64)(v68 + 1);
                                goto LABEL_128;
                              }
                              v70 = *(_QWORD*)(a1 + 56);
                              v71 = (unsigned __int64)v68 - v70;
                              v72 = ((__int64)v68 - v70) >> 3;
                              v73 = v72 + 1;
                              if ((unsigned __int64)(v72 + 1) >> 61 == 0) {
                                v74 = v67 - v70;
                                v75 = v47;
                                if (v74 >> 2 > v73) {
                                  v73 = v74 >> 2;
                                }
                                if ((unsigned __int64)v74 >=
                                    0x7FFFFFFFFFFFFFF8LL) {
                                  v76 = 0x1FFFFFFFFFFFFFFFLL;
                                }
                                else {
                                  v76 = v73;
                                }
                                if (v76 == 0) {
                                  v77 = 0;
                                  goto LABEL_123;
                                }
                                if (v76 >> 61 != 0) {
                                  goto LABEL_382;
                                }
                                v77 = fw_memory_HeapManager_Allocate(
                                    *v10, 8 * v76, 16, 0),
                                v108 = COERCE_AS(
                                    __typeof__(v108),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v112 = COERCE_AS(
                                    __typeof__(v112),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                              LABEL_123:
                                v78 = v77 + 8 * v76;
                                v79 = v77 + v71 - 8 * v72;
                                *(_QWORD*)(v77 + v71) = v230;
                                v69 = v77 + v71 + 8;
                                memcpy_alt1(v79, v70, v71),
                                    v108 = COERCE_AS(
                                        __typeof__(v108),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v112 = COERCE_AS(
                                        __typeof__(v112),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                *(_QWORD*)(a1 + 56) = v79;
                                *(_QWORD*)(a1 + 64) = v69;
                                *(_QWORD*)(a1 + 72) = v78;
                                v10 = &fw_memory_g_heap_manager;
                                if (v70 != 0) {
                                  v80 = 128;
                                  if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                 200) == 0) {
                                    v80 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free_alt1(
                                      fw_memory_g_heap_manager + v80, v70),
                                      v108 = COERCE_AS(
                                          __typeof__(v108),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v112 = COERCE_AS(
                                          __typeof__(v112),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                v47 = v75;
                                a3 = v227;
                                v31 = v228;
                                v51 = v230;
                              LABEL_128:
                                *(_QWORD*)(a1 + 64) = v69;
                                v16 = v229;
                                v81 = *(_QWORD*)(v51 + 8);
                                if (v81 == 0) {
                                  goto LABEL_150;
                                }
                                v83 = *(__int64**)(a1 + 232);
                                v82 = *(_QWORD*)(a1 + 240);
                                if ((unsigned __int64)v83 < v82) {
                                  *v83 = v81;
                                  v84 = (__int64)(v83 + 1);
                                LABEL_146:
                                  *(_QWORD*)(a1 + 232) = v84;
                                  v242_.v243 = v81;
                                  v242_.v242 = game_HashString(v81),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_a12700_alt1(
                                      (_QWORD*)a1,
                                      (unsigned __int64*)&v242_.v242, v51),
                                      v108 = COERCE_AS(
                                          __typeof__(v108),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v112 = COERCE_AS(
                                          __typeof__(v112),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  v97 = *(_QWORD*)(v51 + 8);
                                  if (v97 != 0) {
                                    v98 = strchr_alt1(*(const char**)(v51 + 8),
                                                      95),
                                    v108 = COERCE_AS(
                                        __typeof__(v108),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v112 = COERCE_AS(
                                        __typeof__(v112),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    if (v98 != 0) {
                                      v97 = v98 + 1;
                                    }
                                  }
                                  v31 = v228;
                                  v242_.v243 = v97;
                                  v242_.v242 = game_HashString(v97),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_a12700_alt1(
                                      (_QWORD*)a1,
                                      (unsigned __int64*)&v242_.v242, v51),
                                      v108 = COERCE_AS(
                                          __typeof__(v108),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v112 = COERCE_AS(
                                          __typeof__(v112),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  goto LABEL_150;
                                }
                                v85 = *(_QWORD*)(a1 + 224);
                                v86 = v47;
                                v87 = (char*)v83 - v85;
                                v88 = ((__int64)v83 - v85) >> 3;
                                v89 = v88 + 1;
                                if ((unsigned __int64)(v88 + 1) >> 61 == 0) {
                                  v90 = v82 - v85;
                                  if (v90 >> 2 > v89) {
                                    v89 = v90 >> 2;
                                  }
                                  if ((unsigned __int64)v90 >=
                                      0x7FFFFFFFFFFFFFF8LL) {
                                    v91 = 0x1FFFFFFFFFFFFFFFLL;
                                  }
                                  else {
                                    v91 = v89;
                                  }
                                  if (v91 == 0) {
                                    v92 = 0;
                                    goto LABEL_141;
                                  }
                                  if (v91 >> 61 == 0) {
                                    v92 = fw_memory_HeapManager_Allocate(
                                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v91, 16, 0),
                                    v108 = COERCE_AS(
                                        __typeof__(v108),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v112 = COERCE_AS(
                                        __typeof__(v112),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                  LABEL_141:
                                    v93 = v92 + 8 * v91;
                                    v94 = (unsigned __int64)v83 - v85;
                                    v95 = (__int64)&v87[v92 + -8 * v88];
                                    *(_QWORD*)&v87[v92] = v81;
                                    v84 = (__int64)&v87[v92 + 8];
                                    memcpy_alt1(v95, v85, v94),
                                        v108 = COERCE_AS(
                                            __typeof__(v108),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                                        v112 = COERCE_AS(
                                            __typeof__(v112),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    *(_QWORD*)(a1 + 224) = v95;
                                    *(_QWORD*)(a1 + 232) = v84;
                                    *(_QWORD*)(a1 + 240) = v93;
                                    v10 = &fw_memory_g_heap_manager;
                                    if (v85 != 0) {
                                      v96 = 128;
                                      if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                     200) == 0) {
                                        v96 = 56;
                                      }
                                      nn_mem_StandardAllocator_Free_alt1(
                                          fw_memory_g_heap_manager + v96, v85),
                                          v108 =
                                              COERCE_AS(__typeof__(v108),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r")),
                                          v112 =
                                              COERCE_AS(__typeof__(v112),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    v16 = v229;
                                    v47 = v86;
                                    a3 = v227;
                                    v51 = v230;
                                    goto LABEL_146;
                                  }
                                LABEL_382:
                                  GameRoutine_60a210(),
                                      v108 = COERCE_AS(
                                          __typeof__(v108),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r")),
                                      v112 = COERCE_AS(
                                          __typeof__(v112),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                              LABEL_383:
                                GameRoutine_60f930(),
                                    v108 = COERCE_AS(
                                        __typeof__(v108),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r")),
                                    v112 = COERCE_AS(
                                        __typeof__(v112),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                            LABEL_381:
                              GameRoutine_a12eb0(),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                            }
                          }
                          v59 = *(_QWORD*)v51;
                          if (*(_QWORD*)v51 == 0) {
                            goto LABEL_111;
                          }
                          v60 = *(_QWORD*)(a1 + 88);
                          if (v60 == 0 || *(_QWORD*)(a1 + 104) == 0) {
                            goto LABEL_111;
                          }
                          v61 = v60 - 1;
                          if ((v60 & (v60 - 1)) != 0) {
                            v62 = *(_QWORD*)v51;
                            if (v59 >= v60) {
                              v62 = v59 % v60;
                            }
                          }
                          else {
                            v62 = v61 & v59;
                          }
                          v63 = *(_QWORD**)(*(_QWORD*)(a1 + 80) + 8 * v62);
                          if (v63 == nullptr) {
                            goto LABEL_111;
                          }
                          v64 = (_QWORD*)*v63;
                          if (v64 == nullptr) {
                            goto LABEL_111;
                          }
                          if ((v60 & v61) == 0) {
                            while (1) {
                              v66 = v64[1];
                              if (v66 == v59) {
                                if (v64[2] == v59) {
                                  goto LABEL_110;
                                }
                              }
                              else if ((v66 & v61) != v62) {
                                goto LABEL_111;
                              }
                              v64 = (_QWORD*)*v64;
                              if (v64 == nullptr) {
                                goto LABEL_111;
                              }
                            }
                          }
                          while (1) {
                            v65 = v64[1];
                            if (v65 == v59) {
                              break;
                            }
                            if (v65 >= v60) {
                              v65 %= v60;
                            }
                            if (v65 != v62) {
                              goto LABEL_111;
                            }
                          LABEL_99:
                            v64 = (_QWORD*)*v64;
                            if (v64 == nullptr) {
                              goto LABEL_111;
                            }
                          }
                          if (v64[2] != v59) {
                            goto LABEL_99;
                          }
                        LABEL_110:
                          if (*(_BYTE*)(*(_QWORD*)(v31 + 32) + 4LL) == 2 ||
                              v237_.v238 == 0 || v237_.v240 == 0) {
                            goto LABEL_111;
                          }
                          v99 = v237_.v238 - 1;
                          v100 = *(unsigned __int16*)(v64[3] + 22LL) + 1LL;
                          if ((v237_.v238 & (v237_.v238 - 1)) != 0) {
                            v101 = *(unsigned __int16*)(v64[3] + 22LL) + 1LL;
                            if (v237_.v238 <= v100) {
                              v101 =
                                  (unsigned int)v100 % (unsigned int)v237_.v238;
                            }
                          }
                          else {
                            v101 =
                                ((_DWORD)v237_.v238 - 1) & (unsigned int)v100;
                          }
                          v102 = *(__int64***)(v237_.v237 + 8 * v101);
                          if (v102 == nullptr) {
                            goto LABEL_111;
                          }
                          v103 = *v102;
                          if (v103 == nullptr) {
                            goto LABEL_111;
                          }
                          if ((v237_.v238 & v99) == 0) {
                            while (1) {
                              v105 = v103[1];
                              if (v105 == v100) {
                                if (*((_DWORD*)v103 + 4) == (_DWORD)v100) {
                                  goto LABEL_174;
                                }
                              }
                              else if ((v105 & v99) != v101) {
                                goto LABEL_111;
                              }
                              v103 = (__int64*)*v103;
                              if (v103 == nullptr) {
                                goto LABEL_111;
                              }
                            }
                          }
                          while (2) {
                            v104 = v103[1];
                            if (v104 != v100) {
                              if (v104 >= v237_.v238) {
                                v104 %= v237_.v238;
                              }
                              if (v104 != v101) {
                                goto LABEL_111;
                              }
                            }
                            else if (*((_DWORD*)v103 + 4) == (_DWORD)v100) {
                              break;
                            }
                            v103 = (__int64*)*v103;
                            if (v103 == nullptr) {
                              goto LABEL_111;
                            }
                            continue;
                          }
                        LABEL_174:
                          *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v103[3]) = v51;
                          v106 = *(_QWORD*)(v51 + 8);
                          if (v106 != 0) {
                            v242_.v242 = game_HashString(v106),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v107 = GameRoutine_a12920(
                                (float*)(a1 + 80),
                                (unsigned __int64*)&v242_.v242, &v242_.v242,
                                &v236),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v108 & 1) == 0) {
                              v107[3] = v51;
                            }
                            v109 = *(_QWORD*)(v51 + 8);
                            if (v109 != 0) {
                              v110 = strchr_alt1(*(const char**)(v51 + 8), 95),
                              v108 =
                                  COERCE_AS(__typeof__(v108),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v112 =
                                  COERCE_AS(__typeof__(v112),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              if (v110 != 0) {
                                v109 = v110 + 1;
                              }
                            }
                            v242_.v242 = game_HashString(v109),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v111 = GameRoutine_a12920(
                                (float*)(a1 + 80),
                                (unsigned __int64*)&v242_.v242, &v242_.v242,
                                &v236),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            if ((v112 & 1) == 0) {
                              v111[3] = v51;
                            }
                          }
                        LABEL_150:
                          if (++v47 >= (unsigned __int64)*(
                                           unsigned __int16*)(v31 + 18)) {
                            break;
                          }
                          v46 = *(_QWORD*)(v31 + 40);
                        }
                      }
                    }
                    v113 = hub_ResourceVariant((unsigned __int8*)v14),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v115 = *(const char***)(a1 + 208);
                    v114 = *(_QWORD*)(a1 + 216);
                    if ((unsigned __int64)v115 < v114) {
                      *v115 = v113;
                      v17 = (__int64)(v115 + 1);
                    }
                    else {
                      v116 = *(_QWORD*)(a1 + 200);
                      v117 = (unsigned __int64)v115 - v116;
                      v118 = ((__int64)v115 - v116) >> 3;
                      v119 = v118 + 1;
                      if ((unsigned __int64)(v118 + 1) >> 61 != 0) {
                        goto LABEL_383;
                      }
                      v120 = v114 - v116;
                      if (v120 >> 2 > v119) {
                        v119 = v120 >> 2;
                      }
                      if ((unsigned __int64)v120 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v121 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v121 = v119;
                      }
                      if (v121 != 0) {
                        if (v121 >> 61 != 0) {
                          goto LABEL_382;
                        }
                        v122 = v113;
                        v123 = fw_memory_HeapManager_Allocate(*v10, 8 * v121,
                                                              16, 0),
                        v108 = COERCE_AS(
                            __typeof__(v108),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v112 = COERCE_AS(
                            __typeof__(v112),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v113 = v122;
                      }
                      else {
                        v123 = 0;
                      }
                      v124 = v123 + 8 * v121;
                      v125 = v123 + v117 - 8 * v118;
                      *(_QWORD*)(v123 + v117) = v113;
                      v17 = v123 + v117 + 8;
                      memcpy_alt1(v125, v116, v117),
                          v108 = COERCE_AS(
                              __typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v112 = COERCE_AS(
                              __typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      *(_QWORD*)(a1 + 200) = v125;
                      *(_QWORD*)(a1 + 208) = v17;
                      *(_QWORD*)(a1 + 216) = v124;
                      if (v116 != 0) {
                        v126 = 128;
                        if (*(_QWORD*)(*v10 + 200) == 0) {
                          v126 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(*v10 + v126, v116),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v16 = v229;
                    }
                    v15 = v226;
                    *(_QWORD*)(a1 + 208) = v17;
                    a4 = v225;
                    ++v16;
                  }
                }
              }
            }
          }
        }
      }
    LABEL_14:
      v14 += 24;
    } while (v14 != v13);
    if (v16 > 1) {
      v127 = *(__int64**)(a1 + 32);
      v128 = *(__int64**)(a1 + 40);
      if (v127 == v128) {
      LABEL_202:
        if ((a4 & 1) != 0) {
          v130 = *(_QWORD*)(a1 + 56);
          v131 = *(__int64**)(a1 + 64);
          if (((__int64)v131 - v130) >> 3 < 129) {
            v135 = 0;
          LABEL_259:
            GameRoutine_a130e0(v130, v131, ((__int64)v131 - v130) >> 3, nullptr,
                               v135),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v132 = ((__int64)v131 - v130) >> 3;
            v133 = GameData_212c060;
            while (1) {
              v134 = (__int64*)GameRoutine_1a09d20_alt1(8 * v132, v133),
              v108 = COERCE_AS(__typeof__(v108),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v134 != nullptr) {
                break;
              }
              v135 = v132 >> 1;
              v136 = v132 > 1;
              v132 >>= 1;
              if (!v136) {
                goto LABEL_259;
              }
            }
            v178 = (__int64)v134;
            GameRoutine_a130e0(v130, v131, ((__int64)v131 - v130) >> 3, v134,
                               v132),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v179 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v179 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v179, v178),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v180 = *(_QWORD*)(a1 + 56);
          if (*(_QWORD*)(a1 + 64) != v180) {
            v181 = 0;
            do {
              *(_WORD*)(*(_QWORD*)(v180 + 8 * v181) + 16LL) = v181;
              ++v181;
              v180 = *(_QWORD*)(a1 + 56);
            } while (v181 < (*(_QWORD*)(a1 + 64) - v180) >> 3);
          }
        }
        else {
          v137 = *(_QWORD*)(a1 + 56);
          if (*(_QWORD*)(a1 + 64) != v137) {
            v138 = 0;
            do {
              *(_WORD*)(*(_QWORD*)(v137 + 8 * v138) + 16LL) = v138;
              ++v138;
              v137 = *(_QWORD*)(a1 + 56);
            } while (v138 < (*(_QWORD*)(a1 + 64) - v137) >> 3);
          }
        }
      }
      else {
        while (1) {
          v129 = *v127++;
          if (*(_BYTE*)(*(_QWORD*)(v129 + 32) + 4LL) == 2) {
            break;
          }
          if (v127 == v128) {
            goto LABEL_202;
          }
        }
        if ((a4 & 1) != 0) {
          v139 = *(unsigned __int64***)(a1 + 56);
          v140 = *(unsigned __int64***)(a1 + 64);
          v244_.v244 = nullptr;
          v244_.v245 = 0;
          v242_.v242 = 0;
          v242_.v243 = 0;
          v244_.v246 = 1065353216;
          if (v139 != v140) {
            do {
              v145 = *v139;
              if (v242_.v243 != 0 && v244_.v245 != 0) {
                v147 = *v145;
                v148 = v242_.v243 - 1;
                if ((v242_.v243 & (v242_.v243 - 1)) != 0) {
                  v149 = *v145;
                  if (v147 >= v242_.v243) {
                    v149 = v147 % v242_.v243;
                  }
                }
                else {
                  v149 = v148 & v147;
                }
                v152 = *(_QWORD**)(v242_.v242 + 8 * v149);
                if (v152 != nullptr) {
                  v153 = (_QWORD*)*v152;
                  if (v153 != nullptr) {
                    if ((v242_.v243 & v148) == 0) {
                      while (1) {
                        v155 = v153[1];
                        if (v155 == v147) {
                          if (v153[2] == v147) {
                            goto LABEL_220;
                          }
                        }
                        else if ((v155 & v148) != v149) {
                          goto LABEL_215;
                        }
                        v153 = (_QWORD*)*v153;
                        if (v153 == nullptr) {
                          goto LABEL_215;
                        }
                      }
                    }
                    do {
                      v154 = v153[1];
                      if (v154 == v147) {
                        if (v153[2] == v147) {
                          goto LABEL_220;
                        }
                      }
                      else {
                        if (v154 >= v242_.v243) {
                          v154 %= v242_.v243;
                        }
                        if (v154 != v149) {
                          break;
                        }
                      }
                      v153 = (_QWORD*)*v153;
                    } while (v153 != nullptr);
                  }
                }
              }
            LABEL_215:
              v141 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0),
              v108 = COERCE_AS(__typeof__(v108),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *v141 = 0;
              v142 = (__int64)v141;
              v143 = *v145;
              v141[3] = v145;
              v141[2] = v143;
              v141[1] = v143;
              if (GameRoutine_a12ee0((__int64)&v242_.v242, v143, v141 + 2) !=
                  nullptr) {
                if (*(_QWORD*)(*v10 + 200) != 0) {
                  v144 = 128;
                }
                else {
                  v144 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v10 + v144, v142),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v150 = v242_.v243;
                v151 = v242_.v243 - 1;
                if ((v150 & (v150 - 1)) != 0) {
                  if (v143 >= v242_.v243) {
                    v143 %= v242_.v243;
                  }
                }
                else {
                  v143 &= v151;
                }
                v156 = v242_.v242;
                v157 = *(__int64**)(v242_.v242 + 8 * v143);
                if (v157 != nullptr) {
                  *(_QWORD*)v142 = *v157;
                  *v157 = v142;
                }
                else {
                  v158 = v244_.v244;
                  v244_.v244 = (_QWORD*)v142;
                  *(_QWORD*)v142 = v158;
                  *(_QWORD*)(v156 + 8 * v143) = &v244_.v244;
                  if (*(_QWORD*)v142 != 0) {
                    v159 = *(_QWORD*)(*(_QWORD*)v142 + 8LL);
                    if ((v150 & v151) != 0) {
                      if (v159 >= v150) {
                        v159 %= v150;
                      }
                    }
                    else {
                      v159 &= v151;
                    }
                    *(_QWORD*)(v242_.v242 + 8 * v159) = v142;
                  }
                }
                ++v244_.v245;
              }
            LABEL_220:
              ++v139;
            } while (v139 != v140);
            v139 = *(unsigned __int64***)(a1 + 56);
            v140 = *(unsigned __int64***)(a1 + 64);
          }
          v162 = v10;
          if (v139 != v140) {
            v163 = nullptr;
            v164 = 0;
            v165 = 0;
            while (1) {
              v166 = *v139;
              v167 = **v139;
              if ((v242_.v243 & (v242_.v243 - 1)) != 0) {
                v168 = **v139;
                if (v167 >= v242_.v243) {
                  v168 = v167 % v242_.v243;
                }
                v169 = *(_QWORD**)(v242_.v242 + 8 * v168);
                do {
                  do {
                    v169 = (_QWORD*)*v169;
                  } while (v169[1] != v167);
                } while (v169[2] != v167);
              }
              else {
                v169 = *(_QWORD**)(v242_.v242 + 8 * ((v242_.v243 - 1) & v167));
                do {
                  do {
                    v169 = (_QWORD*)*v169;
                  } while (v169[1] != v167);
                } while (v169[2] != v167);
              }
              if ((unsigned __int64*)v169[3] == v166) {
                if ((unsigned __int64)v163 < v164) {
                  *v163++ = (__int64)v166;
                }
                else {
                  v170 = (char*)v163 - v165;
                  v171 = ((__int64)v163 - v165) >> 3;
                  v172 = v171 + 1;
                  if ((unsigned __int64)(v171 + 1) >> 61 != 0) {
                    goto LABEL_381;
                  }
                  if ((__int64)(v164 - v165) >> 2 > v172) {
                    v172 = (__int64)(v164 - v165) >> 2;
                  }
                  if (v164 - v165 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v173 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v173 = v172;
                  }
                  if (v173 != 0) {
                    if (v173 >> 61 != 0) {
                      goto LABEL_382;
                    }
                    v174 =
                        fw_memory_HeapManager_Allocate(*v162, 8 * v173, 16, 0),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    v174 = 0;
                  }
                  v164 = v174 + 8 * v173;
                  v175 = (unsigned __int64)v163 - v165;
                  v176 = (__int64)&v170[v174 + -8 * v171];
                  *(_QWORD*)&v170[v174] = v166;
                  v163 = (__int64*)&v170[v174 + 8];
                  memcpy_alt1(v176, v165, v175),
                      v108 = COERCE_AS(
                          __typeof__(v108),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v112 = COERCE_AS(
                          __typeof__(v112),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v165 != 0) {
                    v177 = 128;
                    if (*(_QWORD*)(*v162 + 200) == 0) {
                      v177 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v162 + v177, v165),
                        v108 = COERCE_AS(
                            __typeof__(v108),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v112 = COERCE_AS(
                            __typeof__(v112),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v165 = v176;
                }
              }
              if (++v139 == v140) {
                goto LABEL_304;
              }
            }
          }
          v163 = nullptr;
          v165 = 0;
        LABEL_304:
          v182 = (char*)v163 - v165;
          v183 = ((__int64)v163 - v165) >> 3;
          if (v183 < 129) {
            v187 = 0;
            v10 = v162;
          LABEL_310:
            GameRoutine_a130e0(v165, v163, ((__int64)v163 - v165) >> 3, nullptr,
                               v187),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v184 = ((__int64)v163 - v165) >> 3;
            v10 = v162;
            v185 = GameData_212c060;
            while (1) {
              v186 = (__int64*)GameRoutine_1a09d20_alt1(8 * v184, v185),
              v108 = COERCE_AS(__typeof__(v108),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v186 != nullptr) {
                break;
              }
              v187 = v184 >> 1;
              v136 = v184 > 1;
              v184 >>= 1;
              if (!v136) {
                goto LABEL_310;
              }
            }
            v188 = (__int64)v186;
            GameRoutine_a130e0(v165, v163, ((__int64)v163 - v165) >> 3, v186,
                               v184),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v189 = 128;
            if (*(_QWORD*)(*v162 + 200) == 0) {
              v189 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v162 + v189, v188),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v190 = *(_QWORD*)(a1 + 72);
          v191 = *(_QWORD*)(a1 + 56);
          if ((unsigned __int64)v182 <= v190 - v191) {
            v199 = *(_QWORD*)(a1 + 64);
            v200 = v199 - v191;
            if ((unsigned __int64)v182 <= v199 - v191) {
              if (v163 != (__int64*)v165) {
                memmove_alt1(*(_QWORD*)(a1 + 56), v165,
                             (unsigned __int64)v163 - v165),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v198 = (unsigned __int64)&v182[v191];
            }
            else {
              v201 = v165 + v200;
              if (v199 != v191) {
                memmove_alt1(*(_QWORD*)(a1 + 56), v165, v200),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v199 = *(_QWORD*)(a1 + 64);
              }
              v202 = (unsigned __int64)v163 - v201;
              if (v202 != 0) {
                memmove_alt1(v199, v201, v202),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v198 = v199 + v202;
            }
          }
          else {
            if (v191 != 0) {
              v192 = *v10;
              *(_QWORD*)(a1 + 64) = v191;
              v193 = 128;
              if (*(_QWORD*)(v192 + 200) == 0) {
                v193 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(v192 + v193, v191),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v190 = 0;
              *(_QWORD*)(a1 + 64) = 0;
              *(_QWORD*)(a1 + 72) = 0;
              *(_QWORD*)(a1 + 56) = 0;
            }
            if ((unsigned __int64)v183 >> 61 != 0) {
              goto LABEL_381;
            }
            v194 = v190 >> 2;
            if (v190 >> 2 <= (unsigned __int64)v183) {
              v194 = ((__int64)v163 - v165) >> 3;
            }
            v195 = (unsigned __int64)v190 >= 0x7FFFFFFFFFFFFFF8LL
                       ? 0x1FFFFFFFFFFFFFFFLL
                       : v194;
            if (v195 >> 61 != 0) {
              goto LABEL_381;
            }
            v196 = fw_memory_HeapManager_Allocate(*v10, 8 * v195, 16, 0),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v197 = v196;
            *(_QWORD*)(a1 + 56) = v196;
            *(_QWORD*)(a1 + 64) = v196;
            *(_QWORD*)(a1 + 72) = v196 + 8 * v195;
            if (v163 != (__int64*)v165) {
              memcpy_alt1(v196, v165, (unsigned __int64)v163 - v165),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v198 = (unsigned __int64)&v182[v197];
          }
          *(_QWORD*)(a1 + 64) = v198;
          if (v165 != 0) {
            v203 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v203 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v203, v165),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v204 = v244_.v244;
          if (v244_.v244 != nullptr) {
            do {
              v205 = (_QWORD*)*v204;
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v206 = 128;
              }
              else {
                v206 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v10 + v206, (__int64)v204),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v204 = v205;
            } while (v205 != nullptr);
          }
          v207 = v242_.v242;
          v242_.v242 = 0;
          if (v207 != 0) {
            v208 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v208 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v208, v207),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          v160 = *(_QWORD*)(a1 + 56);
          if (*(_QWORD*)(a1 + 64) != v160) {
            v161 = 0;
            do {
              *(_WORD*)(*(_QWORD*)(v160 + 8 * v161) + 16LL) = v161;
              ++v161;
              v160 = *(_QWORD*)(a1 + 56);
            } while (v161 < (*(_QWORD*)(a1 + 64) - v160) >> 3);
          }
        }
      }
    }
  }
  v210 = *(_QWORD*)(a1 + 32);
  v209 = *(_QWORD*)(a1 + 40);
  v211 = v237_.v239;
  if (v237_.v239 != nullptr) {
    do {
      v212 = (_QWORD*)*v211;
      if (*(_QWORD*)(*v10 + 200) != 0) {
        v213 = 128;
      }
      else {
        v213 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v10 + v213, (__int64)v211),
          v108 = COERCE_AS(__typeof__(v108),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v211 = v212;
    } while (v212 != nullptr);
  }
  v214 = v237_.v237;
  v237_.v237 = 0;
  if (v214 != 0) {
    v215 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v215 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v10 + v215, v214),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v216 = v233_.v233;
  if (v233_.v233 != 0) {
    v217 = v233_.v234;
    if (v233_.v233 == v233_.v234) {
      goto LABEL_371;
    }
    v218 = v233_.v234;
    do {
      v219 = *(_BYTE*)(v218 - 24);
      v218 -= 24;
      if ((v219 & 1) != 0) {
        v220 = *(_QWORD*)(v217 - 8);
        if (v220 != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v221 = 128;
          }
          else {
            v221 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v221, v220),
              v108 = COERCE_AS(__typeof__(v108),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v217 = v218;
    } while (v218 != v216);
    v233_.v234 = v216;
    v216 = v233_.v233;
    if (v233_.v233 != 0) {
    LABEL_371:
      v222 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v222 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v10 + v222, v216),
          v108 = COERCE_AS(__typeof__(v108),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v231_.v231[0] & 1) != 0 && v231_.v232 != nullptr) {
    v223 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v223 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v10 + v223, (__int64)v231_.v232),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v209 != v210;
}

#pragma GCC visibility pop
