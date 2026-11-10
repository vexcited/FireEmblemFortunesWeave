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
bool ReplacementFile_a11400(__int64 a1, __int64 a2, __int64 a3, int a4);

bool ReplacementFile_a11400(__int64 a1, __int64 a2, __int64 a3, int a4)
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
  __int64 v18;
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
  char* v37;
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
  char* v71;
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
  char* v94;
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
  char* v117;
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
  _QWORD* v142;
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
  _QWORD* v157;
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
  char* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  char* v181;
  __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  char* v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  char* v200;
  __int64 v201;
  _QWORD* v202;
  _QWORD* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  _QWORD* v209;
  _QWORD* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  char v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  int v222;
  __int64* v223;
  __int64 v224;
  __int64 v225;
  int v226;
  __int64 v227;
  struct {
    _QWORD v228[2];
    char* v229;
  } v228_;
  struct {
    __int64 v230;
    __int64 v231;
  } v230_;
  int v232;
  __int64 v233;
  struct {
    __int64 v234;
    unsigned __int64 v235;
    _QWORD* v236;
    __int64 v237;
    int v238;
  } v234_;
  struct {
    __int64 v239;
    unsigned __int64 v240;
  } v239_;
  struct {
    _QWORD* v241;
    __int64 v242;
    int v243;
  } v241_;

  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = strlen(a2),
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
    v228_.v228[1] = v9;
    v228_.v229 = v11;
    v228_.v228[0] = v12 | 1;
    goto LABEL_9;
  }
  LOBYTE(v228_.v228[0]) = 2 * v8;
  v11 = (char*)v228_.v228 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy(v11, a2, v9),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11[v9] = 0;
  Manager_66c4e0((void*)((__int64)&v230_.v230), (unsigned __int8*)v228_.v228),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_a10aa0((_QWORD*)a1),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = v230_.v230;
  v13 = v230_.v231;
  v234_.v236 = nullptr;
  v234_.v237 = 0;
  v234_.v234 = 0;
  v234_.v235 = 0;
  v234_.v238 = 1065353216;
  if (v230_.v230 != v230_.v231) {
    v15 = (__int64*)(a1 + 176);
    v16 = 0;
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        v18 = *(_QWORD*)(v14 + 16);
      }
      else {
        v18 = v14 + 1;
      }
      v19 = hub_AcquireTableResource((_QWORD*)a1, v18),
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
                    v222 = a4;
                    v34 = *(_QWORD**)(a1 + 40);
                    v33 = *(_QWORD*)(a1 + 48);
                    v223 = v15;
                    v226 = v16;
                    v225 = v28[3];
                    if ((unsigned __int64)v34 >= v33) {
                      v36 = *(_QWORD*)(a1 + 32);
                      v37 = (char*)v34 - v36;
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
                      v44 = (__int64)&v37[v42 + -8 * v38];
                      *(_QWORD*)&v37[v42] = v225;
                      v35 = (__int64)&v37[v42 + 8];
                      memcpy(v44, v36, v37),
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
                        nn_mem_StandardAllocator_Free(*v10 + v45),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v16 = v226;
                      v31 = v225;
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
                        v224 = a3;
                        while (1) {
                          v233 = v46 + 40 * v47;
                          if (v46 == 0) {
                            goto LABEL_150;
                          }
                          v227 = v46 + 40 * v47;
                          v48 = *(unsigned __int16*)(v227 + 22) + 1LL;
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
                            nn_mem_StandardAllocator_Free(*v10 + v50),
                                v108 = COERCE_AS(
                                    __typeof__(v108),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v112 = COERCE_AS(
                                    __typeof__(v112),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v51 = v227;
                            if (v16 < 1) {
                              goto LABEL_111;
                            }
                          }
                          else {
                            v52 = *(_QWORD*)(a1 + 168);
                            v53 = *(_QWORD*)(v49 + 8);
                            v54 = v52 - 1;
                            if ((v52 & (v52 - 1)) != 0) {
                              v51 = v227;
                              if (v53 >= v52) {
                                v53 %= v52;
                              }
                            }
                            else {
                              v51 = v227;
                              v53 &= v54;
                            }
                            v55 = *(_QWORD*)(a1 + 160);
                            v56 = *(__int64**)(v55 + 8 * v53);
                            if (v56 != nullptr) {
                              *(_QWORD*)v49 = *v56;
                              *v56 = v49;
                            }
                            else {
                              v57 = *v223;
                              *v223 = v49;
                              *(_QWORD*)v49 = v57;
                              *(_QWORD*)(v55 + 8 * v53) = v223;
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
                              v232 = *(unsigned __int16*)(v51 + 22) + 1;
                              v239_.v239 = (__int64)(*(_QWORD*)(a1 + 64) -
                                                     *(_QWORD*)(a1 + 56)) >>
                                           3;
                              GameRoutine_60f380((float*)&v234_.v234, &v232,
                                                 &v232, &v239_.v239),
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
                              v71 = (char*)v68 - v70;
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
                                v79 = (__int64)&v71[v77 + -8 * v72];
                                *(_QWORD*)&v71[v77] = v227;
                                v69 = (__int64)&v71[v77 + 8];
                                memcpy(v79, v70, v71),
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
                                  nn_mem_StandardAllocator_Free(
                                      fw_memory_g_heap_manager + v80),
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
                                a3 = v224;
                                v31 = v225;
                                v51 = v227;
                              LABEL_128:
                                *(_QWORD*)(a1 + 64) = v69;
                                v16 = v226;
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
                                  v239_.v240 = v81;
                                  v239_.v239 = game_HashString(v81),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_a12700(
                                      (_QWORD*)a1,
                                      (unsigned __int64*)&v239_.v239, v51),
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
                                    v98 = strchr(*(_QWORD*)(v51 + 8), 95),
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
                                  v31 = v225;
                                  v239_.v240 = v97;
                                  v239_.v239 = game_HashString(v97),
                                  v108 = COERCE_AS(
                                      __typeof__(v108),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v112 = COERCE_AS(
                                      __typeof__(v112),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_a12700(
                                      (_QWORD*)a1,
                                      (unsigned __int64*)&v239_.v239, v51),
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
                                    v94 = (char*)v83 - v85;
                                    v95 = (__int64)&v87[v92 + -8 * v88];
                                    *(_QWORD*)&v87[v92] = v81;
                                    v84 = (__int64)&v87[v92 + 8];
                                    memcpy(v95, v85, v94),
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
                                      nn_mem_StandardAllocator_Free(
                                          fw_memory_g_heap_manager + v96),
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
                                    v16 = v226;
                                    v47 = v86;
                                    a3 = v224;
                                    v51 = v227;
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
                              v234_.v235 == 0 || v234_.v237 == 0) {
                            goto LABEL_111;
                          }
                          v99 = v234_.v235 - 1;
                          v100 = *(unsigned __int16*)(v64[3] + 22LL) + 1LL;
                          if ((v234_.v235 & (v234_.v235 - 1)) != 0) {
                            v101 = *(unsigned __int16*)(v64[3] + 22LL) + 1LL;
                            if (v234_.v235 <= v100) {
                              v101 =
                                  (unsigned int)v100 % (unsigned int)v234_.v235;
                            }
                          }
                          else {
                            v101 =
                                ((_DWORD)v234_.v235 - 1) & (unsigned int)v100;
                          }
                          v102 = *(__int64***)(v234_.v234 + 8 * v101);
                          if (v102 == nullptr) {
                            goto LABEL_111;
                          }
                          v103 = *v102;
                          if (v103 == nullptr) {
                            goto LABEL_111;
                          }
                          if ((v234_.v235 & v99) == 0) {
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
                              if (v104 >= v234_.v235) {
                                v104 %= v234_.v235;
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
                            v239_.v239 = game_HashString(v106),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v107 = GameRoutine_a12920(
                                (float*)(a1 + 80),
                                (unsigned __int64*)&v239_.v239, &v239_.v239,
                                &v233),
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
                              v110 = strchr(*(_QWORD*)(v51 + 8), 95),
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
                            v239_.v239 = game_HashString(v109),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v111 = GameRoutine_a12920(
                                (float*)(a1 + 80),
                                (unsigned __int64*)&v239_.v239, &v239_.v239,
                                &v233),
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
                      v117 = (char*)v115 - v116;
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
                      v125 = (__int64)&v117[v123 + -8 * v118];
                      *(_QWORD*)&v117[v123] = v113;
                      v17 = (__int64)&v117[v123 + 8];
                      memcpy(v125, v116, v117),
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
                        nn_mem_StandardAllocator_Free(*v10 + v126),
                            v108 = COERCE_AS(__typeof__(v108),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v112 = COERCE_AS(__typeof__(v112),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      v16 = v226;
                    }
                    v15 = v223;
                    *(_QWORD*)(a1 + 208) = v17;
                    a4 = v222;
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
              v134 = (__int64*)GameRoutine_1a09d20(8 * v132, v133),
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
            GameRoutine_a130e0(v130, v131, ((__int64)v131 - v130) >> 3, v134,
                               v132),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v178 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v178 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v178),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v179 = *(_QWORD*)(a1 + 56);
          if (*(_QWORD*)(a1 + 64) != v179) {
            v180 = 0;
            do {
              *(_WORD*)(*(_QWORD*)(v179 + 8 * v180) + 16LL) = v180;
              ++v180;
              v179 = *(_QWORD*)(a1 + 56);
            } while (v180 < (*(_QWORD*)(a1 + 64) - v179) >> 3);
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
          v241_.v241 = nullptr;
          v241_.v242 = 0;
          v239_.v239 = 0;
          v239_.v240 = 0;
          v241_.v243 = 1065353216;
          if (v139 != v140) {
            do {
              v145 = *v139;
              if (v239_.v240 != 0 && v241_.v242 != 0) {
                v147 = *v145;
                v148 = v239_.v240 - 1;
                if ((v239_.v240 & (v239_.v240 - 1)) != 0) {
                  v149 = *v145;
                  if (v147 >= v239_.v240) {
                    v149 = v147 % v239_.v240;
                  }
                }
                else {
                  v149 = v148 & v147;
                }
                v152 = *(_QWORD**)(v239_.v239 + 8 * v149);
                if (v152 != nullptr) {
                  v153 = (_QWORD*)*v152;
                  if (v153 != nullptr) {
                    if ((v239_.v240 & v148) == 0) {
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
                        if (v154 >= v239_.v240) {
                          v154 %= v239_.v240;
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
              v142 = v141;
              v143 = *v145;
              v141[3] = v145;
              v141[2] = v143;
              v141[1] = v143;
              if (GameRoutine_a12ee0((__int64)&v239_.v239, v143, v141 + 2) !=
                  nullptr) {
                if (*(_QWORD*)(*v10 + 200) != 0) {
                  v144 = 128;
                }
                else {
                  v144 = 56;
                }
                nn_mem_StandardAllocator_Free(*v10 + v144),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v150 = v239_.v240;
                v151 = v239_.v240 - 1;
                if ((v150 & (v150 - 1)) != 0) {
                  if (v143 >= v239_.v240) {
                    v143 %= v239_.v240;
                  }
                }
                else {
                  v143 &= v151;
                }
                v156 = v239_.v239;
                v157 = *(_QWORD**)(v239_.v239 + 8 * v143);
                if (v157 != nullptr) {
                  *v142 = *v157;
                  *v157 = v142;
                }
                else {
                  v158 = v241_.v241;
                  v241_.v241 = v142;
                  *v142 = v158;
                  *(_QWORD*)(v156 + 8 * v143) = &v241_.v241;
                  if (*v142 != 0) {
                    v159 = *(_QWORD*)(*v142 + 8LL);
                    if ((v150 & v151) != 0) {
                      if (v159 >= v150) {
                        v159 %= v150;
                      }
                    }
                    else {
                      v159 &= v151;
                    }
                    *(_QWORD*)(v239_.v239 + 8 * v159) = v142;
                  }
                }
                ++v241_.v242;
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
              if ((v239_.v240 & (v239_.v240 - 1)) != 0) {
                v168 = **v139;
                if (v167 >= v239_.v240) {
                  v168 = v167 % v239_.v240;
                }
                v169 = *(_QWORD**)(v239_.v239 + 8 * v168);
                do {
                  do {
                    v169 = (_QWORD*)*v169;
                  } while (v169[1] != v167);
                } while (v169[2] != v167);
              }
              else {
                v169 = *(_QWORD**)(v239_.v239 + 8 * ((v239_.v240 - 1) & v167));
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
                  v175 = (char*)v163 - v165;
                  v176 = (__int64)&v170[v174 + -8 * v171];
                  *(_QWORD*)&v170[v174] = v166;
                  v163 = (__int64*)&v170[v174 + 8];
                  memcpy(v176, v165, v175),
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
                    nn_mem_StandardAllocator_Free(*v162 + v177),
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
          v181 = (char*)v163 - v165;
          v182 = ((__int64)v163 - v165) >> 3;
          if (v182 < 129) {
            v186 = 0;
            v10 = v162;
          LABEL_310:
            GameRoutine_a130e0(v165, v163, ((__int64)v163 - v165) >> 3, nullptr,
                               v186),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v183 = ((__int64)v163 - v165) >> 3;
            v10 = v162;
            v184 = GameData_212c060;
            while (1) {
              v185 = (__int64*)GameRoutine_1a09d20(8 * v183, v184),
              v108 = COERCE_AS(__typeof__(v108),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v112 = COERCE_AS(__typeof__(v112),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (v185 != nullptr) {
                break;
              }
              v186 = v183 >> 1;
              v136 = v183 > 1;
              v183 >>= 1;
              if (!v136) {
                goto LABEL_310;
              }
            }
            GameRoutine_a130e0(v165, v163, ((__int64)v163 - v165) >> 3, v185,
                               v183),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v187 = 128;
            if (*(_QWORD*)(*v162 + 200) == 0) {
              v187 = 56;
            }
            nn_mem_StandardAllocator_Free(*v162 + v187),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v188 = *(_QWORD*)(a1 + 72);
          v189 = *(_QWORD*)(a1 + 56);
          if ((unsigned __int64)v181 <= v188 - v189) {
            v197 = *(_QWORD*)(a1 + 64);
            v198 = v197 - v189;
            if ((unsigned __int64)v181 <= v197 - v189) {
              if (v163 != (__int64*)v165) {
                memmove(*(_QWORD*)(a1 + 56), v165, (char*)v163 - v165),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v196 = &v181[v189];
            }
            else {
              v199 = v165 + v198;
              if (v197 != v189) {
                memmove(*(_QWORD*)(a1 + 56), v165, v198),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v197 = *(_QWORD*)(a1 + 64);
              }
              v200 = (char*)v163 - v199;
              if (v200 != nullptr) {
                memmove(v197, v199, v200),
                    v108 = COERCE_AS(
                        __typeof__(v108),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v112 = COERCE_AS(
                        __typeof__(v112),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v196 = &v200[v197];
            }
          }
          else {
            if (v189 != 0) {
              v190 = *v10;
              *(_QWORD*)(a1 + 64) = v189;
              v191 = 128;
              if (*(_QWORD*)(v190 + 200) == 0) {
                v191 = 56;
              }
              nn_mem_StandardAllocator_Free(v190 + v191),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v188 = 0;
              *(_QWORD*)(a1 + 64) = 0;
              *(_QWORD*)(a1 + 72) = 0;
              *(_QWORD*)(a1 + 56) = 0;
            }
            if ((unsigned __int64)v182 >> 61 != 0) {
              goto LABEL_381;
            }
            v192 = v188 >> 2;
            if (v188 >> 2 <= (unsigned __int64)v182) {
              v192 = ((__int64)v163 - v165) >> 3;
            }
            v193 = (unsigned __int64)v188 >= 0x7FFFFFFFFFFFFFF8LL
                       ? 0x1FFFFFFFFFFFFFFFLL
                       : v192;
            if (v193 >> 61 != 0) {
              goto LABEL_381;
            }
            v194 = fw_memory_HeapManager_Allocate(*v10, 8 * v193, 16, 0),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v195 = v194;
            *(_QWORD*)(a1 + 56) = v194;
            *(_QWORD*)(a1 + 64) = v194;
            *(_QWORD*)(a1 + 72) = v194 + 8 * v193;
            if (v163 != (__int64*)v165) {
              memcpy(v194, v165, (char*)v163 - v165),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v196 = &v181[v195];
          }
          *(_QWORD*)(a1 + 64) = v196;
          if (v165 != 0) {
            v201 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v201 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v201),
                v108 =
                    COERCE_AS(__typeof__(v108),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v202 = v241_.v241;
          if (v241_.v241 != nullptr) {
            do {
              v203 = (_QWORD*)*v202;
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v204 = 128;
              }
              else {
                v204 = 56;
              }
              nn_mem_StandardAllocator_Free(*v10 + v204),
                  v108 = COERCE_AS(
                      __typeof__(v108),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v112 = COERCE_AS(
                      __typeof__(v112),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v202 = v203;
            } while (v203 != nullptr);
          }
          v205 = v239_.v239;
          v239_.v239 = 0;
          if (v205 != 0) {
            v206 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v206 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v206),
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
  v208 = *(_QWORD*)(a1 + 32);
  v207 = *(_QWORD*)(a1 + 40);
  v209 = v234_.v236;
  if (v234_.v236 != nullptr) {
    do {
      v210 = (_QWORD*)*v209;
      if (*(_QWORD*)(*v10 + 200) != 0) {
        v211 = 128;
      }
      else {
        v211 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v211),
          v108 = COERCE_AS(__typeof__(v108),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v209 = v210;
    } while (v210 != nullptr);
  }
  v212 = v234_.v234;
  v234_.v234 = 0;
  if (v212 != 0) {
    v213 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v213 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v213),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v214 = v230_.v230;
  if (v230_.v230 != 0) {
    v215 = v230_.v231;
    if (v230_.v230 == v230_.v231) {
      goto LABEL_371;
    }
    v216 = v230_.v231;
    do {
      v217 = *(_BYTE*)(v216 - 24);
      v216 -= 24;
      if ((v217 & 1) != 0 && *(_QWORD*)(v215 - 8) != 0) {
        if (*(_QWORD*)(*v10 + 200) != 0) {
          v218 = 128;
        }
        else {
          v218 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v218),
            v108 = COERCE_AS(__typeof__(v108),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v215 = v216;
    } while (v216 != v214);
    v230_.v231 = v214;
    if (v230_.v230 != 0) {
    LABEL_371:
      v219 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v219 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v219),
          v108 = COERCE_AS(__typeof__(v108),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((v228_.v228[0] & 1) != 0 && v228_.v229 != nullptr) {
    v220 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v220 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v220),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v207 != v208;
}

#pragma GCC visibility pop
