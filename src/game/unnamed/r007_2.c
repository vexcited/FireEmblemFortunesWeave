#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 (*GameData_1fb0e30[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c540;
extern __int64 GameData_212c638;
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_22408e8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_12337e0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_12343d0(void);
void __attribute__((noreturn)) GameRoutine_12343f0(void);
__int64 GameRoutine_1234420(void);
void __attribute__((noreturn)) GameRoutine_12352b0(void);
void __attribute__((noreturn)) GameRoutine_12352d0(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
__int64 GameRoutine_971f60(_QWORD, _QWORD);
__int64 GameRoutine_a85600(_QWORD);
__attribute__((swiftcall)) void GameRoutine_c21740(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_c22ba0(_QWORD, _QWORD);
__int64 GameRoutine_c22d40(_QWORD, _QWORD);
__attribute__((swiftcall)) void wld_map_c21740(PSEUDO_X8, __int64 result,
                                               __int64, unsigned __int64);
__int64* GameRoutine_c22ba0_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_c22ba0");
__int64 GameRoutine_7a88a0_alt1(__int64*) __asm__("GameRoutine_7a88a0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_map_c22d40(__int64, __int64*);
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
void Seq_a85600(__int64);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_1389860(__int64 a1);
__int64 GameRoutine_1234420_alt1(__int64 result, unsigned int**, __int64,
                                 char) __asm__("GameRoutine_1234420");
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
void GameHr_12337e0(__int64*, __int64);
void __attribute__((noreturn))
GameRoutine_12343d0_alt1() __asm__("GameRoutine_12343d0");
void __attribute__((noreturn))
GameRoutine_12343f0_alt1() __asm__("GameRoutine_12343f0");
void __attribute__((noreturn))
GameRoutine_12352b0_alt1() __asm__("GameRoutine_12352b0");
void __attribute__((noreturn))
GameRoutine_12352d0_alt1() __asm__("GameRoutine_12352d0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void GameHr_1232400(_QWORD* a1, __int64 a2, __int64 a3);

void GameHr_1232400(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  _BYTE* v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int16 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _BYTE* v48;
  _WORD* v49;
  _WORD* j;
  _BYTE* v51;
  __int64 v52;
  _BYTE* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BYTE* v57;
  __int64 v58;
  _BYTE* v59;
  _BYTE* v60;
  char v61;
  __int64 v62;
  _QWORD* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  unsigned int** v67;
  __int64 v68;
  __int64 v69;
  unsigned __int16 v70;
  __int64 v71;
  int v72;
  unsigned int v73;
  __int64 v74;
  int v75;
  __int64 v76;
  _BYTE* v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  signed __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  int v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  char v103;
  char v104;
  int v105;
  int v106;
  signed __int64 v107;
  unsigned __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  int v124;
  __int64 v125;
  unsigned int v126;
  __int64 v127;
  int v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  int v132;
  __int64 v133;
  unsigned int v134;
  __int64 v135;
  int v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  int v140;
  int v141;
  __int64 v142;
  unsigned int v143;
  __int64 v144;
  int v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  int v151;
  char* v152;
  char v153;
  int v154;
  int v155;
  char v156;
  signed __int64 v157;
  unsigned __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v165;
  _BYTE* v166;
  __int64 v167;
  __int64 v168;
  _BYTE* v169;
  char v170;
  _QWORD* v171;
  unsigned __int64 v172;
  unsigned __int64 v173;
  int v174;
  _QWORD* v175;
  __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  _QWORD* v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64* v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  _BYTE* v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  _QWORD* v202;
  __int64 v203;
  _BYTE* v204;
  _BYTE* v205;
  __int64 v206;
  unsigned int v207;
  _QWORD* v208;
  __int64 v209;
  _QWORD* v210;
  __int64 v211;
  _BYTE* v212;
  __int64 v213;
  __int64 v214;
  __int16 v215;
  __int64 v216;
  __int64 v217;
  int v218;
  __int64 v219;
  int v220;
  int v221;
  int v222;
  unsigned __int64 v223;
  unsigned __int64 v224;
  __int64 v225;
  int v226;
  int v227;
  unsigned __int64 v228;
  __int64 v229;
  int v230;
  __int64 v231;
  __int64 v232;
  struct {
    _BYTE* v233;
    _BYTE* v234;
    __int64 v235;
  } v233_;

  if (a2 == 0) {
    return;
  }
  v4 = a2;
  v233_.v235 = 0;
  if (GameData_22408e8 != 0 && (v6 = *(_QWORD*)(GameData_22408e8 + 8)) != 0) {
    v7 = 9;
    do {
      v6 = *(_QWORD*)(v6 + 8);
      ++v7;
    } while (v6 != 0);
  }
  else {
    v7 = 9;
  }
  v8 = 5 * v7;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40 * v7, 16, 0);
  v11 = v10 + 8 * v8;
  v233_.v233 = (_BYTE*)v10;
  v233_.v234 = (_BYTE*)v10;
  v12 = *v9;
  v233_.v235 = v11;
  v13 = fw_memory_HeapManager_Allocate(v12, 32, 16, 0);
  v14 = v13 + 32;
  v15 = v13;
  if (GameData_22408e8 != 0) {
    for (i = *(_QWORD*)(GameData_22408e8 + 8); i != 0; i = *(_QWORD*)(i + 8)) {
      GameHr_12337e0((__int64*)&v233_.v233, i);
    }
  }
  v17 = (_BYTE*)v15;
  v208 = a1;
  v225 = a3;
  while (1) {
    v18 = *(unsigned __int8*)(v4 + 19);
    if (v18 <= 1) {
      break;
    }
    if (v18 == 2) {
      v49 = (_WORD*)v15;
      if ((_BYTE*)v15 != v17) {
        v49 = (_WORD*)v15;
        while (*(unsigned __int8*)v49 != *(unsigned __int8*)(v4 + 33)) {
          if (++v49 == (_WORD*)v17) {
            goto LABEL_91;
          }
        }
      }
      if (v49 != (_WORD*)v17) {
        for (j = v49 + 1; j != (_WORD*)v17; ++j) {
          if (*(unsigned __int8*)j != *(unsigned __int8*)(v4 + 33)) {
            *v49++ = *j;
          }
        }
        if (v49 != (_WORD*)v17) {
          v17 = v49;
        }
      }
    LABEL_91:
      GameHr_12337e0((__int64*)&v233_.v233, v4);
    LABEL_92:
      if (v4 == a3) {
        goto LABEL_109;
      }
      goto LABEL_93;
    }
    if (v18 != 3) {
      goto LABEL_92;
    }
    v48 = v233_.v233;
    if (v233_.v233 != v233_.v234) {
      while (*(_BYTE*)(*(_QWORD*)v48 + 19LL) != 2 || (v48[32] & 1) != 0 ||
             *(unsigned __int8*)(*(_QWORD*)v48 + 33LL) !=
                 *(unsigned __int8*)(v4 + 22)) {
        v48 += 40;
        if (v48 == v233_.v234) {
          goto LABEL_84;
        }
      }
    }
    if (v48 == v233_.v234) {
    LABEL_84:
      if ((unsigned __int64)v17 >= v14) {
        v51 = &v17[-v15];
        v52 = (__int64)&v17[-v15] >> 1;
        if (v52 <= -2) {
        LABEL_289:
          GameRoutine_12343d0_alt1();
        }
        v53 = v17;
        if (v14 - v15 <= v52 + 1) {
          v54 = v52 + 1;
        }
        else {
          v54 = v14 - v15;
        }
        if (v14 - v15 >= 0x7FFFFFFFFFFFFFFELL) {
          v55 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v55 = v54;
        }
        if (v55 < 0) {
          goto LABEL_287;
        }
        v56 = fw_memory_HeapManager_Allocate(*v9, 2 * v55, 16, 0);
        v57 = &v51[v56];
        v58 = (__int64)&v51[v56 + -2 * v52];
        *v57 = *(_BYTE*)(v4 + 22);
        v57[1] = *(_BYTE*)(v4 + 23);
        if ((_BYTE*)v15 != v53) {
          v59 = (_BYTE*)v15;
          v60 = (_BYTE*)v58;
          do {
            *v60 = *v59;
            v61 = v59[1];
            v59 += 2;
            v60[1] = v61;
            v60 += 2;
          } while (v59 != v53);
        }
        v14 = v56 + 2 * v55;
        v17 = v57 + 2;
        v62 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(*v9 + v62, v15);
        v15 = v58;
        if (v4 == a3) {
          goto LABEL_109;
        }
      }
      else {
        *v17 = *(_BYTE*)(v4 + 22);
        v17[1] = *(_BYTE*)(v4 + 23);
        v17 += 2;
        if (v4 == a3) {
          goto LABEL_109;
        }
      }
    }
    else {
      v48[32] = 1;
      if (v4 == a3) {
        goto LABEL_109;
      }
    }
  LABEL_93:
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == 0) {
      goto LABEL_109;
    }
  }
  if (*(_BYTE*)(v4 + 19) == 0) {
    goto LABEL_91;
  }
  v231 = *(unsigned __int16*)(v4 + 22);
  if (*(_WORD*)(v4 + 22) == 0) {
    goto LABEL_92;
  }
  v228 = v14;
  v19 = (__int64)v233_.v233;
  v204 = v17;
  v20 = 0;
  v211 = v15;
  do {
    v22 = v233_.v234;
    if ((_BYTE*)v19 == v233_.v234) {
      goto LABEL_18;
    }
    v23 = nullptr;
    v24 = (_BYTE*)v19;
    v25 = *(_QWORD*)(v4 + 24) + 24 * v20;
    do {
      v26 = v23;
      if ((v24[32] & 1) == 0) {
        v27 = *(_QWORD*)v24;
        v28 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v24 + 32LL))(*(_QWORD*)v24);
        v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
        if (v28 != 0) {
          v30 = *(unsigned __int8*)(v25 + 8);
          v31 = v28;
          v32 = (unsigned __int8*)(v29 + 9);
          while (v30 != *(v32 - 1) ||
                 (v30 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                     *(unsigned __int8*)(v25 + 9) != *v32) {
            v32 += 12;
            if (--v31 == 0) {
              goto LABEL_21;
            }
          }
          if (*(_BYTE*)(*(_QWORD*)v24 + 19LL) != 4) {
            if (v23 != nullptr && *(_BYTE*)(*(_QWORD*)v23 + 19LL) == 4) {
              v23[32] = 1;
            }
            v23 = v24;
          LABEL_35:
            v34 = *((_QWORD*)v23 + 1);
            v33 = *((__int64**)v23 + 2);
            v35 = (__int64)v33 - v34;
            if (v33 != (__int64*)v34) {
              v36 = *(unsigned __int8*)(v25 + 8);
              v37 = v35 >> 3;
              v38 = *((_QWORD*)v23 + 1);
              while (v36 != *(unsigned __int8*)(*(_QWORD*)v38 + 8LL) ||
                     (v36 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                         *(unsigned __int8*)(v25 + 9) !=
                             *(unsigned __int8*)(*(_QWORD*)v38 + 9LL)) {
                v38 += 8;
                if (--v37 == 0) {
                  goto LABEL_43;
                }
              }
              *(_QWORD*)v38 = v25;
              goto LABEL_18;
            }
          LABEL_43:
            v39 = *((_QWORD*)v23 + 3);
            if ((unsigned __int64)v33 < v39) {
              *v33 = v25;
              v21 = (__int64)(v33 + 1);
              goto LABEL_17;
            }
            v40 = (v35 >> 3) + 1;
            if (v40 >> 61 != 0) {
              GameRoutine_12343f0_alt1();
            }
            v41 = v39 - v34;
            if (v41 >> 2 > v40) {
              v40 = v41 >> 2;
            }
            if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
              v42 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v42 = v40;
            }
            if (v42 == 0) {
              v43 = 0;
              goto LABEL_58;
            }
            if (v42 >> 61 == 0) {
              v43 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0);
            LABEL_58:
              v44 = v43 + 8 * v42;
              v45 = (unsigned __int64)v33 - v34;
              v46 = v43 + v35 - 8 * (v35 >> 3);
              *(_QWORD*)(v43 + v35) = v25;
              v21 = v43 + v35 + 8;
              memcpy(v46, v34, v45);
              *((_QWORD*)v23 + 1) = v46;
              *((_QWORD*)v23 + 2) = v21;
              *((_QWORD*)v23 + 3) = v44;
              if (v34 != 0) {
                v47 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v47 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v34);
              }
            LABEL_17:
              *((_QWORD*)v23 + 2) = v21;
              goto LABEL_18;
            }
          LABEL_287:
            GameRoutine_60a210_alt1();
          }
          v23 = v24;
          if (v26 != nullptr) {
            v23 = v24;
            if (*(_BYTE*)(*(_QWORD*)v26 + 19LL) == 4) {
              v23 = v24;
              v26[32] = 1;
            }
          }
        }
      }
    LABEL_21:
      v24 += 40;
    } while (v24 != v22);
    if (v23 != nullptr) {
      goto LABEL_35;
    }
  LABEL_18:
    ++v20;
  } while (v20 != v231);
  v9 = &fw_memory_g_heap_manager;
  v15 = v211;
  v17 = v204;
  a3 = v225;
  v14 = v228;
  if (v4 != v225) {
    goto LABEL_93;
  }
LABEL_109:
  v64 = v233_.v233;
  v63 = v233_.v234;
  if (v233_.v233 != v233_.v234) {
    v212 = (_BYTE*)v15;
    v202 = v233_.v234;
    v203 = (__int64)&v17[-v15];
    v205 = v17;
    do {
      if ((v64[4] & 1) == 0 &&
          (*(__int64 (**)(_QWORD))(*(_QWORD*)*v64 + 16LL))(*v64) != 0) {
        v66 = v64[1];
        v67 = (unsigned int**)v64[2];
        if ((unsigned int**)v66 != v67) {
          GameRoutine_1234420_alt1(
              v66, v67, (2 * __clz(((__int64)v67 - v66) >> 3)) ^ 0x7E, 1);
        }
        v68 = *v64;
        v69 = fw_memory_HeapManager_Allocate(*v9, 491520, 16, 0);
        (*(void (**)(__int64))(*(_QWORD*)v68 + 24LL))(v68);
        v232 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
        v207 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 24LL))(v68);
        v70 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 32LL))(v68);
        v206 = v68;
        v214 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 40LL))(v68);
        v216 = v70;
        if (v70 != 0) {
          v219 = fw_memory_HeapManager_Allocate(*v9, 12LL * v70, 16, 0);
          v223 = v219 + 12LL * v70;
        }
        else {
          v219 = 0;
          v223 = 0;
        }
        v71 = v64[1];
        v209 = v69;
        v210 = v64;
        v213 = v64[2];
        if (v71 != v213) {
          v72 = 0;
          v73 = 0;
          v218 = 0;
          v74 = v69;
          v224 = v219;
          while (1) {
            if (v72 < (int)v216) {
              v76 = v216 - v72;
              v229 = v71;
              v77 = (_BYTE*)(v214 + 9 + 12LL * v72);
              do {
                v78 = (unsigned __int8)*(v77 - 1);
                v79 = *(unsigned __int8*)(*(_QWORD*)v229 + 8LL);
                if (v79 == v78) {
                  if (v79 != 3 && *(_BYTE*)(*(_QWORD*)v229 + 8LL) != 0) {
                    goto LABEL_151;
                  }
                  v80 = (unsigned __int8)*v77;
                  if (*(unsigned __int8*)(*(_QWORD*)v229 + 9LL) == v80) {
                    goto LABEL_151;
                  }
                }
                else {
                  LOBYTE(v80) = *v77;
                }
                v226 = v72;
                v81 = *(_DWORD*)(v77 - 9) + v218;
                v82 = *(_DWORD*)(v77 - 5);
                if (v224 >= v223) {
                  v83 = v224 - v219;
                  v84 =
                      1 - 0x5555555555555555LL * ((__int64)(v224 - v219) >> 2);
                  if (v84 > 0x1555555555555555LL) {
                    goto LABEL_286;
                  }
                  if (0x5555555555555556LL * ((__int64)(v223 - v219) >> 2) >
                      v84) {
                    v84 = 0x5555555555555556LL * ((__int64)(v223 - v219) >> 2);
                  }
                  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v223 - v219) >> 2) >=
                      0xAAAAAAAAAAAAAAALL) {
                    v85 = 0x1555555555555555LL;
                  }
                  else {
                    v85 = v84;
                  }
                  if (v85 != 0) {
                    if (v85 > 0x1555555555555555LL) {
                      goto LABEL_287;
                    }
                    v86 = fw_memory_HeapManager_Allocate(
                        fw_memory_g_heap_manager, 12 * v85, 16, 0);
                  }
                  else {
                    v86 = 0;
                  }
                  v87 = v86 + v83;
                  *(_BYTE*)(v87 + 8) = v78;
                  *(_DWORD*)v87 = v81;
                  *(_DWORD*)(v87 + 4) = v82;
                  *(_BYTE*)(v87 + 9) = v80;
                  v223 = v86 + 12 * v85;
                  v224 = v86 + v83 + 12;
                  v88 = v86 + v83 + 12 * (v83 / -12);
                  memcpy(v88, v219, v83);
                  if (v219 != 0) {
                    v89 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v89 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v219);
                  }
                  v219 = v88;
                }
                else {
                  *(_DWORD*)v224 = v81;
                  *(_DWORD*)(v224 + 4) = v82;
                  *(_BYTE*)(v224 + 8) = v78;
                  *(_BYTE*)(v224 + 9) = v80;
                  v224 += 12LL;
                }
                --v76;
                v77 += 12;
                v72 = v226 + 1;
              } while (v76 != 0);
              v72 = v216;
            LABEL_151:
              v71 = v229;
            }
            v227 = v72;
            v90 = *(unsigned __int16*)(*(_QWORD*)v71 + 12LL);
            if (*(_WORD*)(*(_QWORD*)v71 + 12LL) != 0) {
              v215 = *(_WORD*)(*(_QWORD*)v71 + 12LL);
              if ((unsigned int)v90 >= 4) {
                v114 = 0;
                v91 = 0;
                v230 = 0;
                v217 = 96 * (v90 >> 2);
                do {
                  v119 = *(_QWORD*)(*(_QWORD*)v71 + 16LL);
                  v120 = v119 + v114;
                  v121 = *(_DWORD*)(v119 + v114 + 4);
                  v122 = v121 - v73;
                  if (v121 != v73) {
                    memcpy(v74, v232 + v73, v122);
                    v74 += v122;
                  }
                  v123 = *(unsigned int*)(v120 + 12);
                  if ((_DWORD)v123 != 0) {
                    memcpy(v74, *(_QWORD*)(v119 + v114 + 16), v123);
                    v74 += *(unsigned int*)(v120 + 12);
                    v222 = *(_DWORD*)(v120 + 12);
                  }
                  else {
                    v222 = 0;
                  }
                  v124 = *(_DWORD*)(v119 + v114 + 8);
                  v125 = *(_QWORD*)(*(_QWORD*)v71 + 16LL);
                  v126 = *(_DWORD*)(v120 + 4) + v124;
                  v127 = v125 + v114;
                  v128 = *(_DWORD*)(v125 + v114 + 28);
                  v129 = v128 - v126;
                  if (v128 != v126) {
                    memcpy(v74, v232 + v126, v128 - v126);
                    v74 += v129;
                  }
                  v130 = *(unsigned int*)(v127 + 36);
                  v221 = v124;
                  if ((_DWORD)v130 != 0) {
                    memcpy(v74, *(_QWORD*)(v125 + v114 + 40), v130);
                    v116 = v74 + *(unsigned int*)(v127 + 36);
                    v220 = *(_DWORD*)(v127 + 36);
                  }
                  else {
                    v116 = v74;
                    v220 = 0;
                  }
                  v131 = v71;
                  v132 = *(_DWORD*)(v125 + v114 + 32);
                  v133 = *(_QWORD*)(*(_QWORD*)v71 + 16LL);
                  v134 = *(_DWORD*)(v127 + 28) + v132;
                  v135 = v133 + v114;
                  v136 = *(_DWORD*)(v133 + v114 + 52);
                  v137 = v136 - v134;
                  if (v136 != v134) {
                    memcpy(v116, v232 + v134, v136 - v134);
                    v116 += v137;
                  }
                  v138 = *(unsigned int*)(v135 + 60);
                  if ((_DWORD)v138 != 0) {
                    memcpy(v116, *(_QWORD*)(v133 + v114 + 64), v138);
                    v139 = *(unsigned int*)(v135 + 60);
                    v116 += v139;
                  }
                  else {
                    LODWORD(v139) = 0;
                  }
                  v140 = *(_DWORD*)(v133 + v114 + 56);
                  v141 = *(_DWORD*)(v135 + 52);
                  v142 = *(_QWORD*)(*(_QWORD*)v131 + 16LL);
                  v143 = v141 + v140;
                  v144 = v142 + v114;
                  v145 = *(_DWORD*)(v142 + v114 + 76);
                  v146 = v145 - v143;
                  if (v145 != v143) {
                    memcpy(v116, v232 + v143, v145 - v143);
                    v116 += v146;
                  }
                  v147 = *(unsigned int*)(v144 + 84);
                  if ((_DWORD)v147 != 0) {
                    memcpy(v116, *(_QWORD*)(v142 + v114 + 88), v147);
                    v115 = *(unsigned int*)(v144 + 84);
                    v116 += v115;
                  }
                  else {
                    LODWORD(v115) = 0;
                  }
                  v117 = v142 + v114;
                  v91 += 4;
                  v114 += 96;
                  LODWORD(v117) = *(_DWORD*)(v117 + 80);
                  v118 = v221 + v132 + v140;
                  v71 = v131;
                  v74 = v116;
                  v230 = v222 + v230 + v220 + v139 + v115 - v117 - v118;
                  v73 = *(_DWORD*)(v144 + 76) + v117;
                } while (v217 != v114);
              }
              else {
                v91 = 0;
                v230 = 0;
              }
              v92 = v230;
              v93 = v215 & 3;
              if ((v215 & 3) != 0) {
                v94 = 24 * v91;
                do {
                  v97 = *(_QWORD*)(*(_QWORD*)v71 + 16LL);
                  v98 = v97 + v94;
                  v99 = *(_DWORD*)(v97 + v94 + 4);
                  v100 = v99 - v73;
                  if (v99 != v73) {
                    memcpy(v74, v232 + v73, v100);
                    v74 += v100;
                  }
                  v101 = *(unsigned int*)(v98 + 12);
                  if ((_DWORD)v101 != 0) {
                    memcpy(v74, *(_QWORD*)(v97 + v94 + 16), v101);
                    v95 = *(unsigned int*)(v98 + 12);
                    v74 += v95;
                  }
                  else {
                    LODWORD(v95) = 0;
                  }
                  v96 = v97 + v94;
                  v94 += 24;
                  --v93;
                  LODWORD(v96) = *(_DWORD*)(v96 + 8);
                  v92 = v95 + v92 - v96;
                  v73 = *(_DWORD*)(v98 + 4) + v96;
                } while (v93 != 0);
              }
            }
            else {
              v92 = 0;
            }
            v102 = v214 + 12LL * v227;
            v103 = *(_BYTE*)(v102 + 8);
            v104 = *(_BYTE*)(v102 + 9);
            v105 = *(_DWORD*)v102 + v218;
            v106 = *(_DWORD*)(v102 + 4) + v92;
            if (v224 >= v223) {
              v107 = v224 - v219;
              v108 = 1 - 0x5555555555555555LL * ((__int64)(v224 - v219) >> 2);
              if (v108 > 0x1555555555555555LL) {
              LABEL_286:
                GameRoutine_12352b0_alt1();
              }
              v109 = v92;
              v110 = v74;
              v111 = v71;
              if (0x5555555555555556LL * ((__int64)(v223 - v219) >> 2) > v108) {
                v108 = 0x5555555555555556LL * ((__int64)(v223 - v219) >> 2);
              }
              if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v223 - v219) >> 2) >=
                  0xAAAAAAAAAAAAAAALL) {
                v112 = 0x1555555555555555LL;
              }
              else {
                v112 = v108;
              }
              if (v112 != 0) {
                if (v112 > 0x1555555555555555LL) {
                  goto LABEL_287;
                }
                v113 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      12 * v112, 16, 0);
              }
              else {
                v113 = 0;
              }
              v148 = v113 + v107;
              *(_BYTE*)(v148 + 9) = v104;
              *(_DWORD*)v148 = v105;
              *(_DWORD*)(v148 + 4) = v106;
              *(_BYTE*)(v148 + 8) = v103;
              v223 = v113 + 12 * v112;
              v224 = v113 + v107 + 12;
              v149 = v113 + v107 + 12 * (v107 / -12);
              memcpy(v149, v219, v107);
              if (v219 != 0) {
                v150 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v150 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v150, v219);
              }
              v75 = v227;
              v71 = v111;
              v74 = v110;
              v92 = v109;
              v219 = v149;
            }
            else {
              *(_BYTE*)(v224 + 8) = v103;
              v75 = v227;
              *(_DWORD*)v224 = v105;
              *(_DWORD*)(v224 + 4) = v106;
              *(_BYTE*)(v224 + 9) = v104;
              v224 += 12LL;
            }
            v72 = v75 + 1;
            v71 += 8;
            v218 += v92;
            if (v71 == v213) {
              goto LABEL_204;
            }
          }
        }
        v218 = 0;
        v73 = 0;
        v72 = 0;
        v74 = v69;
        v224 = v219;
      LABEL_204:
        if (v207 > v73) {
          memcpy(v74, v232 + v73, v207 - v73);
          LODWORD(v74) = v74 + v207 - v73;
          v151 = v216 - v72;
          if ((int)v216 > v72) {
            v9 = (__int64*)fw_memory_g_heap_manager_ptr;
            v152 = (char*)(v214 + 12LL * v72 + 9);
            while (1) {
              v153 = *(v152 - 1);
              v154 = *(_DWORD*)(v152 - 9) + v218;
              v155 = *(_DWORD*)(v152 - 5);
              v156 = *v152;
              if (v224 >= v223) {
                v157 = v224 - v219;
                v158 = 1 - 0x5555555555555555LL * ((__int64)(v224 - v219) >> 2);
                if (v158 > 0x1555555555555555LL) {
                  goto LABEL_286;
                }
                if (0x5555555555555556LL * ((__int64)(v223 - v219) >> 2) >
                    v158) {
                  v158 = 0x5555555555555556LL * ((__int64)(v223 - v219) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v223 - v219) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v159 = 0x1555555555555555LL;
                }
                else {
                  v159 = v158;
                }
                if (v159 != 0) {
                  if (v159 > 0x1555555555555555LL) {
                    goto LABEL_287;
                  }
                  v160 = fw_memory_HeapManager_Allocate(*v9, 12 * v159, 16, 0);
                }
                else {
                  v160 = 0;
                }
                v161 = v160 + v157;
                *(_BYTE*)(v161 + 8) = v153;
                *(_DWORD*)v161 = v154;
                *(_DWORD*)(v161 + 4) = v155;
                *(_BYTE*)(v161 + 9) = v156;
                v223 = v160 + 12 * v159;
                v224 = v160 + v157 + 12;
                v162 = v160 + v157 + 12 * (v157 / -12);
                memcpy(v162, v219, v157);
                if (v219 != 0) {
                  v163 = 128;
                  if (*(_QWORD*)(*v9 + 200) == 0) {
                    v163 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v9 + v163, v219);
                }
                v219 = v162;
              }
              else {
                *(_DWORD*)v224 = v154;
                *(_DWORD*)(v224 + 4) = v155;
                *(_BYTE*)(v224 + 8) = v153;
                *(_BYTE*)(v224 + 9) = v156;
                v224 += 12LL;
              }
              v152 += 12;
              if (--v151 == 0) {
                goto LABEL_226;
              }
            }
          }
        }
        v9 = &fw_memory_g_heap_manager;
      LABEL_226:
        if (*(_BYTE*)(*v210 + 19LL) != 0 || v205 == v212) {
          v165 = 0;
          v166 = nullptr;
          v167 = 0;
        }
        else {
          if (v203 < 0) {
            goto LABEL_289;
          }
          v168 = fw_memory_HeapManager_Allocate(*v9, v203, 16, 0);
          v169 = v212;
          v165 = v168;
          v166 = (_BYTE*)v168;
          do {
            *v166 = *v169;
            v170 = v169[1];
            v169 += 2;
            v166[1] = v170;
            v166 += 2;
          } while (v169 != v205);
          v167 = v168 + v203;
        }
        v171 = v208;
        v173 = v208[1];
        v172 = v208[2];
        v174 = v74 - v209;
        if (v173 < v172) {
          *(_QWORD*)(v173 + 48) = v165;
          *(_QWORD*)(v173 + 56) = v166;
          v65 = v173 + 72;
          v63 = v202;
          *(_DWORD*)(v173 + 40) = v174;
          *(_QWORD*)(v173 + 32) = v209;
          *(_QWORD*)(v173 + 64) = v167;
          *(_QWORD*)v173 = v206;
          *(_QWORD*)(v173 + 8) = v219;
          *(_QWORD*)(v173 + 16) = v224;
          *(_QWORD*)(v173 + 24) = v223;
        }
        else {
          v175 = (_QWORD*)*v208;
          v176 = v173 - *v208;
          v177 = 1 - 0x71C71C71C71C71C7LL * (v176 >> 3);
          if (v177 > 0x38E38E38E38E38ELL) {
            GameRoutine_12352d0_alt1();
          }
          v178 = 0x8E38E38E38E38E39LL * ((__int64)(v172 - (_QWORD)v175) >> 3);
          if (2 * v178 > v177) {
            v177 = 2 * v178;
          }
          if (v178 >= 0x1C71C71C71C71C7LL) {
            v179 = 0x38E38E38E38E38ELL;
          }
          else {
            v179 = v177;
          }
          if (v179 != 0) {
            if (v179 > 0x38E38E38E38E38ELL) {
              goto LABEL_287;
            }
            v180 = fw_memory_HeapManager_Allocate(*v9, 72 * v179, 16, 0);
            v175 = (_QWORD*)*v208;
            v173 = v208[1];
            v181 = v173 - *v208;
          }
          else {
            v180 = 0;
            v181 = v173 - *v208;
          }
          v182 = v180 + v176;
          *(_QWORD*)(v182 + 48) = v165;
          *(_QWORD*)(v182 + 56) = v166;
          v183 = v182 - v181;
          *(_DWORD*)(v182 + 40) = v174;
          *(_QWORD*)(v182 + 64) = v167;
          *(_QWORD*)v182 = v206;
          *(_QWORD*)(v182 + 8) = v219;
          *(_QWORD*)(v182 + 16) = v224;
          *(_QWORD*)(v182 + 24) = v223;
          *(_QWORD*)(v182 + 32) = v209;
          if (v175 == (_QWORD*)v173) {
            v194 = v208;
          }
          else {
            v184 = v175;
            v185 = v183;
            do {
              v186 = *v184;
              *(_QWORD*)(v185 + 16) = 0;
              *(_QWORD*)(v185 + 24) = 0;
              *(_QWORD*)v185 = v186;
              *(_QWORD*)(v185 + 8) = v184[1];
              *(_QWORD*)(v185 + 16) = v184[2];
              *(_QWORD*)(v185 + 24) = v184[3];
              v184[1] = 0;
              v184[2] = 0;
              v187 = v184[4];
              v184[3] = 0;
              v184[4] = 0;
              *(_QWORD*)(v185 + 32) = v187;
              LODWORD(v187) = *((_DWORD*)v184 + 10);
              *(_QWORD*)(v185 + 56) = 0;
              *(_QWORD*)(v185 + 64) = 0;
              *(_DWORD*)(v185 + 40) = v187;
              *(_QWORD*)(v185 + 48) = v184[6];
              *(_QWORD*)(v185 + 56) = v184[7];
              *(_QWORD*)(v185 + 64) = v184[8];
              v184[7] = 0;
              v184[8] = 0;
              v184[6] = 0;
              v184 += 9;
              v185 += 72LL;
            } while (v184 != (_QWORD*)v173);
            do {
              v188 = v175[6];
              if (v188 != 0) {
                v175[7] = v188;
                v189 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v189 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v189, v188);
              }
              v190 = v175[4];
              v175[4] = 0;
              if (v190 != 0) {
                v191 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v191 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v191, v190);
              }
              v192 = v175[1];
              if (v192 != 0) {
                v175[2] = v192;
                v193 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v193 = 56;
                }
                nn_mem_StandardAllocator_Free(*v9 + v193, v192);
              }
              v175 += 9;
            } while (v175 != (_QWORD*)v173);
            v194 = v208;
            v175 = (_QWORD*)*v208;
          }
          v65 = v182 + 72;
          *v194 = v183;
          v194[1] = v182 + 72;
          v194[2] = v180 + 72 * v179;
          if (v175 != nullptr) {
            v195 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v195 = 56;
            }
            nn_mem_StandardAllocator_Free(*v9 + v195, (__int64)v175);
          }
          v171 = v208;
          v63 = v202;
        }
        v171[1] = v65;
        v64 = v210;
        v15 = (__int64)v212;
      }
      v64 += 5;
    } while (v64 != v63);
  }
  v196 = 128;
  if (*(_QWORD*)(*v9 + 200) == 0) {
    v196 = 56;
  }
  nn_mem_StandardAllocator_Free(*v9 + v196, v15);
  v197 = (__int64)v233_.v233;
  if (v233_.v233 != nullptr) {
    v198 = v233_.v234;
    if (v233_.v233 != v233_.v234) {
      do {
        v199 = *((_QWORD*)v198 - 4);
        if (v199 != 0) {
          *((_QWORD*)v198 - 3) = v199;
          if (*(_QWORD*)(*v9 + 200) != 0) {
            v200 = 128;
          }
          else {
            v200 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v200, v199);
        }
        v198 -= 40;
      } while (v198 != (_BYTE*)v197);
    }
    v201 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v201 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v201, v197);
  }
}

__int64 GameHr_1354d40(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;
  int v22;

  v2 = *a2;
  v22 = 0;
  result = *(unsigned int*)(v2 + 84);
  if ((result & 0x80000000) == 0) {
    v20[0] = GameData_1fb0e30;
    v20[1] = &v22;
    v21 = v20;
    GameRoutine_971f60(result, v20);
    result = (__int64)v21;
    if (v21 == v20) {
      v5 = 32;
    }
    else {
      if (v21 == nullptr) {
        goto LABEL_7;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(void*))(*v21 + v5))(v21);
  LABEL_7:
    if (v22 != 0) {
      return result;
    }
  }
  v6 = *(__int64**)(a1 + 8);
  v8 = (_QWORD*)v6[1];
  v7 = v6[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *v6;
    v11 = (__int64)v8 - *v6;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_888610(result);
    }
    v13 = v7 - v10;
    v14 = GameData_212bf68;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v2;
    v9 = v16 + v11 + 8;
    result = GameRoutine_1a0b950(v18, v10, v11);
    *v6 = v18;
    v6[1] = v9;
    v6[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v19, (_QWORD)(v10));
    }
  }
  else {
    *v8 = v2;
    v9 = (__int64)(v8 + 1);
  }
  v6[1] = v9;
  return result;
}

void GameHr_1389860(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64* v5;
  _BYTE* v6;
  const char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  const char* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  _BYTE* v35;
  _BYTE* v36;
  _BYTE* v37;
  _BYTE* v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int128 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  __int64 v52[2];

  v1 = *(unsigned __int8*)(a1 + 8);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 16);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 104);
    v5 = (__int64*)GameData_212c638;
    if (v3 == 0) {
      goto LABEL_54;
    }
    v6 = *(_BYTE**)(v3 + 96);
    if (v6 != nullptr && *v6 != 0 &&
        (v7 = *(const char**)(v3 + 104)) != nullptr && *v7 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                 8LL) +
                      64LL);
      v9 = strlen(v7);
      wld_map_c21740((void*)(&v50_.v50), v8, (__int64)v7, v9);
      if (v50_.v50 != 0) {
        v10 = *(__int64**)(v50_.v50 + 88);
        v11 = *(__int64**)(v50_.v50 + 96);
        if (v10 != v11) {
          v12 = (__int64*)fw_memory_g_heap_manager_ptr;
          while (1) {
            v13 = *v10;
            v14 = strlen((const char*)(*v10 + 16));
            if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0();
            }
            v15 = v14;
            if (v14 >= 0x17) {
              break;
            }
            v16 = (char*)&v47_.v47 + 1;
            LOBYTE(v47_.v47) = 2 * v14;
            if (v14 != 0) {
              goto LABEL_22;
            }
          LABEL_23:
            v16[v15] = 0;
            v18 = *(_QWORD**)(a1 + 232);
            if (v18 != *(_QWORD**)(a1 + 240)) {
              v19 = (__int64)(v18 + 1);
              while (1) {
                v20 = (*(_BYTE*)(*v18 + 24LL) & 1) != 0
                          ? *(_QWORD*)(*v18 + 40LL)
                          : *v18 + 25LL;
                v21 = v47_.v49;
                v22 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
                if ((v47_.v47 & 1) != 0) {
                  v22 = v47_.v48;
                }
                else {
                  v21 = (char*)&v47_.v47 + 1;
                }
                v52[0] = (__int64)v21;
                v52[1] = v22;
                v23 = game_HashString(v20);
                if (v23 == GameRoutine_7a88a0_alt1(v52)) {
                  break;
                }
                ++v18;
                v19 += 8;
                if (v18 == *(_QWORD**)(a1 + 240)) {
                  goto LABEL_33;
                }
              }
              if (*v18 != 0) {
                (*(void (**)(_QWORD))(*(_QWORD*)*v18 + 8LL))(*v18);
                *v18 = 0;
              }
              v24 = *(_QWORD*)(a1 + 240);
              v25 = v24 - v19;
              if (v24 != v19) {
                memmove(v19 - 8, v19, v24 - v19);
              }
              *(_QWORD*)(a1 + 240) = v19 - 8 + v25;
              if ((v47_.v47 & 1) == 0) {
                goto LABEL_13;
              }
            LABEL_40:
              if (v47_.v49 != nullptr) {
                v26 = 128;
                if (*(_QWORD*)(*v12 + 200) == 0) {
                  v26 = 56;
                }
                nn_mem_StandardAllocator_Free(*v12 + v26, (__int64)v47_.v49);
              }
              goto LABEL_13;
            }
          LABEL_33:
            if ((v47_.v47 & 1) != 0) {
              goto LABEL_40;
            }
          LABEL_13:
            if (++v10 == v11) {
              goto LABEL_76;
            }
          }
          if ((v14 | 7) == 0x17) {
            v17 = 26;
          }
          else {
            v17 = (v14 | 7) + 1;
          }
          v16 = (char*)fw_memory_HeapManager_Allocate(*v12, v17, 16, 0);
          v47_.v48 = v15;
          v47_.v49 = v16;
          v47_.v47 = v17 | 1;
        LABEL_22:
          memmove((__int64)v16, v13 + 16, v15);
          goto LABEL_23;
        }
      LABEL_76:
        v27 = 0;
        v28 = v50_.v51;
        if (v50_.v51 == 0) {
          goto LABEL_48;
        }
        goto LABEL_46;
      }
    }
    else {
      v50_.v50 = 0;
      v50_.v51 = 0;
    }
    v27 = 1;
    v28 = v50_.v51;
    if (v50_.v51 == 0) {
    LABEL_48:
      if ((v27 & 1) == 0) {
        v29 = *v5;
        v30 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 104LL) != 0
                  ? *(const char**)(*(_QWORD*)(a1 + 104) + 104LL)
                  : &GameData_1a9f09e;
        v31 = strlen(v30);
        v32 = *(_QWORD*)(*(_QWORD*)(v29 + 32) - 8LL);
        v47_.v47 = (__int64)v30;
        v47_.v48 = v31;
        v33 = *(_QWORD*)(v32 + 64);
        v34 = GameRoutine_c22ba0_alt1((_QWORD*)(v33 + 104), &v47_.v47);
        if (v34 != nullptr) {
          wld_map_c22d40(v33 + 104, v34);
        }
      }
    LABEL_54:
      Seq_a85600(*v5);
      if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
        v35 = *(_BYTE**)(a1 + 24);
        *(_QWORD*)(a1 + 16) = 0;
      }
      else {
        v35 = (_BYTE*)(a1 + 9);
        *(_BYTE*)(a1 + 8) = 0;
      }
      *v35 = 0;
      if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
        v36 = *(_BYTE**)(a1 + 48);
        *(_QWORD*)(a1 + 40) = 0;
      }
      else {
        v36 = (_BYTE*)(a1 + 33);
        *(_BYTE*)(a1 + 32) = 0;
      }
      *v36 = 0;
      if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
        v37 = *(_BYTE**)(a1 + 72);
        *(_QWORD*)(a1 + 64) = 0;
      }
      else {
        v37 = (_BYTE*)(a1 + 57);
        *(_BYTE*)(a1 + 56) = 0;
      }
      *v37 = 0;
      if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
        v38 = *(_BYTE**)(a1 + 96);
        *(_QWORD*)(a1 + 88) = 0;
      }
      else {
        v38 = (_BYTE*)(a1 + 81);
        *(_BYTE*)(a1 + 80) = 0;
      }
      *v38 = 0;
      *(_QWORD*)(a1 + 104) = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
        v46 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v46;
        __cxa_guard_release((__int64)&GameData_21a6130);
      }
      *(_DWORD*)(a1 + 128) = 0;
      v39 = DWORD2(GameData_21a6120);
      v41 = *(_QWORD*)(a1 + 136);
      v40 = *(_QWORD*)(a1 + 144);
      *(_QWORD*)(a1 + 112) = GameData_21a6120;
      v42 = *(_OWORD*)(a1 + 112);
      *((_QWORD*)&v42 + 1) = v39;
      *(_OWORD*)(a1 + 112) = v42;
      if (v41 == v40) {
      LABEL_68:
        *(_QWORD*)(a1 + 144) = v41;
        return;
      }
      while (1) {
        v44 = *(_QWORD**)(v40 - 16);
        v45 = v40 - 48;
        if ((_QWORD*)(v40 - 48) == v44) {
          v43 = 32;
        }
        else {
          if (v44 == nullptr) {
            goto LABEL_72;
          }
          v43 = 40;
        }
        (*(void (**)(__int64))(*v44 + v43))((__int64)v44);
      LABEL_72:
        v40 = v45;
        if (v45 == v41) {
          goto LABEL_68;
        }
      }
    }
  LABEL_46:
    if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
    goto LABEL_48;
  }
}

#pragma GCC visibility pop
