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
__int64 GameRoutine_1a0a4e0(_QWORD);
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

__int64 GameHr_1232400(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
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
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int16 v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  _WORD* v48;
  _WORD* j;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _BYTE* v56;
  __int64 v57;
  _BYTE* v58;
  _BYTE* v59;
  char v60;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int16 v67;
  __int64 v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  __int64 v73;
  _BYTE* v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  signed __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  char v101;
  int v102;
  int v103;
  signed __int64 v104;
  unsigned __int64 v105;
  int v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  unsigned int v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  int v138;
  __int64 v139;
  unsigned int v140;
  __int64 v141;
  int v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  char* v149;
  char v150;
  int v151;
  int v152;
  char v153;
  signed __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v162;
  _BYTE* v163;
  _BYTE* v164;
  _BYTE* v165;
  char v166;
  _QWORD* v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  int v170;
  _QWORD* v171;
  __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  _QWORD* v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64* v190;
  __int64 v191;
  __int64 v192;
  _BYTE* v193;
  _BYTE* v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  _QWORD* v198;
  unsigned __int64 v199;
  _BYTE* v200;
  _BYTE* v201;
  __int64 v202;
  unsigned int v203;
  _QWORD* v204;
  __int64 v205;
  _QWORD* v206;
  __int64 v207;
  _BYTE* v208;
  __int64 v209;
  __int64 v210;
  __int16 v211;
  __int64 v212;
  __int64 v213;
  int v214;
  unsigned __int64 v215;
  int v216;
  int v217;
  int v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  __int64 v221;
  int v222;
  int v223;
  unsigned __int64 v224;
  __int64 v225;
  int v226;
  __int64 v227;
  __int64 v228;
  _BYTE* v229;
  _BYTE* v230;
  __int64 v231;

  if (a2 == 0) {
    return result;
  }
  v4 = a2;
  v5 = (_QWORD*)result;
  v231 = 0;
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
  v9 = (__int64*)GameData_212bf68;
  v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40 * v7, 16, 0);
  v11 = v10 + 8 * v8;
  v229 = (_BYTE*)v10;
  v230 = (_BYTE*)v10;
  v12 = *v9;
  v231 = v11;
  v13 = GameRoutine_651b90(v12, 32, 16, 0);
  v14 = v13 + 32;
  v15 = v13;
  if (GameData_22408e8 != 0) {
    for (i = *(_QWORD*)(GameData_22408e8 + 8); i != 0; i = *(_QWORD*)(i + 8)) {
      v13 = GameRoutine_12337e0(&v229, i);
    }
  }
  v17 = (_BYTE*)v15;
  v204 = v5;
  v221 = a3;
  while (1) {
    v18 = *(unsigned __int8*)(v4 + 19);
    if (v18 <= 1) {
      break;
    }
    if (v18 == 2) {
      v48 = (_WORD*)v15;
      if ((_BYTE*)v15 != v17) {
        v48 = (_WORD*)v15;
        while (*(unsigned __int8*)v48 != *(unsigned __int8*)(v4 + 33)) {
          if (++v48 == (_WORD*)v17) {
            goto LABEL_91;
          }
        }
      }
      if (v48 != (_WORD*)v17) {
        for (j = v48 + 1; j != (_WORD*)v17; ++j) {
          if (*(unsigned __int8*)j != *(unsigned __int8*)(v4 + 33)) {
            *v48++ = *j;
          }
        }
        if (v48 != (_WORD*)v17) {
          v17 = v48;
        }
      }
    LABEL_91:
      v13 = GameRoutine_12337e0(&v229, v4);
    LABEL_92:
      if (v4 == a3) {
        goto LABEL_109;
      }
      goto LABEL_93;
    }
    if (v18 != 3) {
      goto LABEL_92;
    }
    v47 = v229;
    if (v229 != v230) {
      while (*(_BYTE*)(*(_QWORD*)v47 + 19LL) != 2 || (v47[32] & 1) != 0 ||
             *(unsigned __int8*)(*(_QWORD*)v47 + 33LL) !=
                 *(unsigned __int8*)(v4 + 22)) {
        v47 += 40;
        if (v47 == v230) {
          goto LABEL_84;
        }
      }
    }
    if (v47 == v230) {
    LABEL_84:
      if ((unsigned __int64)v17 >= v14) {
        v50 = &v17[-v15];
        v51 = (__int64)&v17[-v15] >> 1;
        if (v51 <= -2) {
        LABEL_289:
          GameRoutine_12343d0();
        }
        v52 = v17;
        if (v14 - v15 <= v51 + 1) {
          v53 = v51 + 1;
        }
        else {
          v53 = v14 - v15;
        }
        if (v14 - v15 >= 0x7FFFFFFFFFFFFFFELL) {
          v54 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v54 = v53;
        }
        if (v54 < 0) {
          goto LABEL_287;
        }
        v55 = GameRoutine_651b90(*v9, 2 * v54, 16, 0);
        v56 = &v50[v55];
        v57 = (__int64)&v50[v55 + -2 * v51];
        *v56 = *(_BYTE*)(v4 + 22);
        v56[1] = *(_BYTE*)(v4 + 23);
        if ((_BYTE*)v15 != v52) {
          v58 = (_BYTE*)v15;
          v59 = (_BYTE*)v57;
          do {
            *v59 = *v58;
            v60 = v58[1];
            v58 += 2;
            v59[1] = v60;
            v59 += 2;
          } while (v58 != v52);
        }
        v14 = v55 + 2 * v54;
        v17 = v56 + 2;
        v61 = 128;
        if (*(_QWORD*)(*v9 + 200) == 0) {
          v61 = 56;
        }
        v13 = GameRoutine_1a0a4e0(*v9 + v61);
        v15 = v57;
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
      v47[32] = 1;
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
  v227 = *(unsigned __int16*)(v4 + 22);
  if (*(_WORD*)(v4 + 22) == 0) {
    goto LABEL_92;
  }
  v224 = v14;
  v19 = v229;
  v200 = v17;
  v20 = 0;
  v207 = v15;
  do {
    v22 = v230;
    if (v19 == v230) {
      goto LABEL_18;
    }
    v23 = nullptr;
    v24 = v19;
    v25 = *(_QWORD*)(v4 + 24) + 24 * v20;
    do {
      v26 = v23;
      if ((v24[32] & 1) == 0) {
        v27 = *(_QWORD*)v24;
        v28 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v24 + 32LL))(*(_QWORD*)v24);
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
        if (v28 != 0) {
          v29 = *(unsigned __int8*)(v25 + 8);
          v30 = v28;
          v31 = (unsigned __int8*)(v13 + 9);
          while (v29 != *(v31 - 1) ||
                 (v29 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                     *(unsigned __int8*)(v25 + 9) != *v31) {
            v31 += 12;
            if (--v30 == 0) {
              goto LABEL_21;
            }
          }
          if (*(_BYTE*)(*(_QWORD*)v24 + 19LL) != 4) {
            if (v23 != nullptr && *(_BYTE*)(*(_QWORD*)v23 + 19LL) == 4) {
              v23[32] = 1;
            }
            v23 = v24;
          LABEL_35:
            v33 = *((__int64**)v23 + 1);
            v32 = *((__int64**)v23 + 2);
            v34 = (char*)v32 - (char*)v33;
            if (v32 != v33) {
              v35 = *(unsigned __int8*)(v25 + 8);
              v36 = v34 >> 3;
              v37 = *((_QWORD*)v23 + 1);
              while (v35 != *(unsigned __int8*)(*(_QWORD*)v37 + 8LL) ||
                     (v35 == 3 || *(_BYTE*)(v25 + 8) == 0) &&
                         *(unsigned __int8*)(v25 + 9) !=
                             *(unsigned __int8*)(*(_QWORD*)v37 + 9LL)) {
                v37 += 8;
                if (--v36 == 0) {
                  goto LABEL_43;
                }
              }
              *(_QWORD*)v37 = v25;
              goto LABEL_18;
            }
          LABEL_43:
            v38 = *((_QWORD*)v23 + 3);
            if ((unsigned __int64)v32 < v38) {
              *v32 = v25;
              v21 = (__int64)(v32 + 1);
              goto LABEL_17;
            }
            v39 = (v34 >> 3) + 1;
            if (v39 >> 61 != 0) {
              GameRoutine_12343f0();
            }
            v40 = v38 - (_QWORD)v33;
            if (v40 >> 2 > v39) {
              v39 = v40 >> 2;
            }
            if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
              v41 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v41 = v39;
            }
            if (v41 == 0) {
              v42 = 0;
              goto LABEL_58;
            }
            if (v41 >> 61 == 0) {
              v42 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v41, 16,
                                       0);
            LABEL_58:
              v43 = v42 + 8 * v41;
              v44 = (char*)((char*)v32 - (char*)v33);
              v45 = v42 + v34 - 8 * (v34 >> 3);
              *(_QWORD*)(v42 + v34) = v25;
              v21 = v42 + v34 + 8;
              v13 = GameRoutine_1a0b950(v45, v33, v44);
              *((_QWORD*)v23 + 1) = v45;
              *((_QWORD*)v23 + 2) = v21;
              *((_QWORD*)v23 + 3) = v43;
              if (v33 != nullptr) {
                v46 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v46 = 56;
                }
                v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v46);
              }
            LABEL_17:
              *((_QWORD*)v23 + 2) = v21;
              goto LABEL_18;
            }
          LABEL_287:
            GameRoutine_60a210(v13);
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
  } while (v20 != v227);
  v9 = &GameData_2265ee0;
  v15 = v207;
  v17 = v200;
  a3 = v221;
  v14 = v224;
  if (v4 != v221) {
    goto LABEL_93;
  }
LABEL_109:
  v63 = v229;
  v62 = v230;
  if (v229 != v230) {
    v208 = (_BYTE*)v15;
    v198 = v230;
    v199 = (unsigned __int64)&v17[-v15];
    v201 = v17;
    do {
      if ((v63[4] & 1) == 0 &&
          (*(__int64 (**)(_QWORD))(*(_QWORD*)*v63 + 16LL))(*v63) != 0) {
        if (v63[1] != v63[2]) {
          GameRoutine_1234420();
        }
        v65 = *v63;
        v66 = GameRoutine_651b90(*v9, 491520, 16, 0);
        (*(void (**)(__int64))(*(_QWORD*)v65 + 24LL))(v65);
        v228 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
        v203 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 24LL))(v65);
        v67 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 32LL))(v65);
        v202 = v65;
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 40LL))(v65);
        v210 = v13;
        v212 = v67;
        if (v67 != 0) {
          v13 = GameRoutine_651b90(*v9, 12LL * v67, 16, 0);
          v215 = v13;
          v219 = v13 + 12LL * v67;
        }
        else {
          v215 = 0;
          v219 = 0;
        }
        v68 = v63[1];
        v205 = v66;
        v206 = v63;
        v209 = v63[2];
        if (v68 != v209) {
          v69 = 0;
          v70 = 0;
          v214 = 0;
          v71 = v66;
          v220 = v215;
          while (1) {
            if (v69 < (int)v212) {
              v73 = v212 - v69;
              v225 = v68;
              v74 = (_BYTE*)(v210 + 9 + 12LL * v69);
              do {
                v75 = (unsigned __int8)*(v74 - 1);
                v76 = *(unsigned __int8*)(*(_QWORD*)v225 + 8LL);
                if (v76 == v75) {
                  if (v76 != 3 && *(_BYTE*)(*(_QWORD*)v225 + 8LL) != 0) {
                    goto LABEL_151;
                  }
                  v77 = (unsigned __int8)*v74;
                  if (*(unsigned __int8*)(*(_QWORD*)v225 + 9LL) == v77) {
                    goto LABEL_151;
                  }
                }
                else {
                  LOBYTE(v77) = *v74;
                }
                v222 = v69;
                v78 = *(_DWORD*)(v74 - 9) + v214;
                v79 = *(_DWORD*)(v74 - 5);
                if (v220 >= v219) {
                  v80 = v220 - v215;
                  v81 =
                      1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
                  if (v81 > 0x1555555555555555LL) {
                    goto LABEL_286;
                  }
                  if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) >
                      v81) {
                    v81 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
                  }
                  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                      0xAAAAAAAAAAAAAAALL) {
                    v82 = 0x1555555555555555LL;
                  }
                  else {
                    v82 = v81;
                  }
                  if (v82 != 0) {
                    if (v82 > 0x1555555555555555LL) {
                      goto LABEL_287;
                    }
                    v83 = GameRoutine_651b90(GameData_2265ee0, 12 * v82, 16, 0);
                  }
                  else {
                    v83 = 0;
                  }
                  v84 = v83 + v80;
                  *(_BYTE*)(v84 + 8) = v75;
                  *(_DWORD*)v84 = v78;
                  *(_DWORD*)(v84 + 4) = v79;
                  *(_BYTE*)(v84 + 9) = v77;
                  v219 = v83 + 12 * v82;
                  v220 = v83 + v80 + 12;
                  v85 = v83 + v80 + 12 * (v80 / -12);
                  v13 = GameRoutine_1a0b950(v85, v215, v80);
                  if (v215 != 0) {
                    v86 = 128;
                    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                      v86 = 56;
                    }
                    v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v86);
                  }
                  v215 = v85;
                }
                else {
                  *(_DWORD*)v220 = v78;
                  *(_DWORD*)(v220 + 4) = v79;
                  *(_BYTE*)(v220 + 8) = v75;
                  *(_BYTE*)(v220 + 9) = v77;
                  v220 += 12LL;
                }
                --v73;
                v74 += 12;
                v69 = v222 + 1;
              } while (v73 != 0);
              v69 = v212;
            LABEL_151:
              v68 = v225;
            }
            v223 = v69;
            v87 = *(unsigned __int16*)(*(_QWORD*)v68 + 12LL);
            if (*(_WORD*)(*(_QWORD*)v68 + 12LL) != 0) {
              v211 = *(_WORD*)(*(_QWORD*)v68 + 12LL);
              if ((unsigned int)v87 >= 4) {
                v111 = 0;
                v88 = 0;
                v226 = 0;
                v213 = 96 * (v87 >> 2);
                do {
                  v116 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v117 = v116 + v111;
                  v118 = *(_DWORD*)(v116 + v111 + 4);
                  v119 = v118 - v70;
                  if (v118 != v70) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v70, v119);
                    v71 += v119;
                  }
                  v120 = *(unsigned int*)(v117 + 12);
                  if ((_DWORD)v120 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v116 + v111 + 16),
                                              v120);
                    v71 += *(unsigned int*)(v117 + 12);
                    v218 = *(_DWORD*)(v117 + 12);
                  }
                  else {
                    v218 = 0;
                  }
                  v121 = *(_DWORD*)(v116 + v111 + 8);
                  v122 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v123 = *(_DWORD*)(v117 + 4) + v121;
                  v124 = v122 + v111;
                  v125 = *(_DWORD*)(v122 + v111 + 28);
                  v126 = v125 - v123;
                  if (v125 != v123) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v123, v125 - v123);
                    v71 += v126;
                  }
                  v127 = *(unsigned int*)(v124 + 36);
                  v217 = v121;
                  if ((_DWORD)v127 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v122 + v111 + 40),
                                              v127);
                    v113 = v71 + *(unsigned int*)(v124 + 36);
                    v216 = *(_DWORD*)(v124 + 36);
                  }
                  else {
                    v113 = v71;
                    v216 = 0;
                  }
                  v128 = v68;
                  v129 = *(_DWORD*)(v122 + v111 + 32);
                  v130 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v131 = *(_DWORD*)(v124 + 28) + v129;
                  v132 = v130 + v111;
                  v133 = *(_DWORD*)(v130 + v111 + 52);
                  v134 = v133 - v131;
                  if (v133 != v131) {
                    v13 = GameRoutine_1a0b950(v113, v228 + v131, v133 - v131);
                    v113 += v134;
                  }
                  v135 = *(unsigned int*)(v132 + 60);
                  if ((_DWORD)v135 != 0) {
                    v13 = GameRoutine_1a0b950(
                        v113, *(_QWORD*)(v130 + v111 + 64), v135);
                    v136 = *(unsigned int*)(v132 + 60);
                    v113 += v136;
                  }
                  else {
                    LODWORD(v136) = 0;
                  }
                  v137 = *(_DWORD*)(v130 + v111 + 56);
                  v138 = *(_DWORD*)(v132 + 52);
                  v139 = *(_QWORD*)(*(_QWORD*)v128 + 16LL);
                  v140 = v138 + v137;
                  v141 = v139 + v111;
                  v142 = *(_DWORD*)(v139 + v111 + 76);
                  v143 = v142 - v140;
                  if (v142 != v140) {
                    v13 = GameRoutine_1a0b950(v113, v228 + v140, v142 - v140);
                    v113 += v143;
                  }
                  v144 = *(unsigned int*)(v141 + 84);
                  if ((_DWORD)v144 != 0) {
                    v13 = GameRoutine_1a0b950(
                        v113, *(_QWORD*)(v139 + v111 + 88), v144);
                    v112 = *(unsigned int*)(v141 + 84);
                    v113 += v112;
                  }
                  else {
                    LODWORD(v112) = 0;
                  }
                  v114 = v139 + v111;
                  v88 += 4;
                  v111 += 96;
                  LODWORD(v114) = *(_DWORD*)(v114 + 80);
                  v115 = v217 + v129 + v137;
                  v68 = v128;
                  v71 = v113;
                  v226 = v218 + v226 + v216 + v136 + v112 - v114 - v115;
                  v70 = *(_DWORD*)(v141 + 76) + v114;
                } while (v213 != v111);
              }
              else {
                v88 = 0;
                v226 = 0;
              }
              v89 = v226;
              v90 = v211 & 3;
              if ((v211 & 3) != 0) {
                v91 = 24 * v88;
                do {
                  v94 = *(_QWORD*)(*(_QWORD*)v68 + 16LL);
                  v95 = v94 + v91;
                  v96 = *(_DWORD*)(v94 + v91 + 4);
                  v97 = v96 - v70;
                  if (v96 != v70) {
                    v13 = GameRoutine_1a0b950(v71, v228 + v70, v97);
                    v71 += v97;
                  }
                  v98 = *(unsigned int*)(v95 + 12);
                  if ((_DWORD)v98 != 0) {
                    v13 = GameRoutine_1a0b950(v71, *(_QWORD*)(v94 + v91 + 16),
                                              v98);
                    v92 = *(unsigned int*)(v95 + 12);
                    v71 += v92;
                  }
                  else {
                    LODWORD(v92) = 0;
                  }
                  v93 = v94 + v91;
                  v91 += 24;
                  --v90;
                  LODWORD(v93) = *(_DWORD*)(v93 + 8);
                  v89 = v92 + v89 - v93;
                  v70 = *(_DWORD*)(v95 + 4) + v93;
                } while (v90 != 0);
              }
            }
            else {
              v89 = 0;
            }
            v99 = v210 + 12LL * v223;
            v100 = *(_BYTE*)(v99 + 8);
            v101 = *(_BYTE*)(v99 + 9);
            v102 = *(_DWORD*)v99 + v214;
            v103 = *(_DWORD*)(v99 + 4) + v89;
            if (v220 >= v219) {
              v104 = v220 - v215;
              v105 = 1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
              if (v105 > 0x1555555555555555LL) {
              LABEL_286:
                GameRoutine_12352b0();
              }
              v106 = v89;
              v107 = v71;
              v108 = v68;
              if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) > v105) {
                v105 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
              }
              if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                  0xAAAAAAAAAAAAAAALL) {
                v109 = 0x1555555555555555LL;
              }
              else {
                v109 = v105;
              }
              if (v109 != 0) {
                if (v109 > 0x1555555555555555LL) {
                  goto LABEL_287;
                }
                v110 = GameRoutine_651b90(GameData_2265ee0, 12 * v109, 16, 0);
              }
              else {
                v110 = 0;
              }
              v145 = v110 + v104;
              *(_BYTE*)(v145 + 9) = v101;
              *(_DWORD*)v145 = v102;
              *(_DWORD*)(v145 + 4) = v103;
              *(_BYTE*)(v145 + 8) = v100;
              v219 = v110 + 12 * v109;
              v220 = v110 + v104 + 12;
              v146 = v110 + v104 + 12 * (v104 / -12);
              v13 = GameRoutine_1a0b950(v146, v215, v104);
              if (v215 != 0) {
                v147 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v147 = 56;
                }
                v13 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v147);
              }
              v72 = v223;
              v68 = v108;
              v71 = v107;
              v89 = v106;
              v215 = v146;
            }
            else {
              *(_BYTE*)(v220 + 8) = v100;
              v72 = v223;
              *(_DWORD*)v220 = v102;
              *(_DWORD*)(v220 + 4) = v103;
              *(_BYTE*)(v220 + 9) = v101;
              v220 += 12LL;
            }
            v69 = v72 + 1;
            v68 += 8;
            v214 += v89;
            if (v68 == v209) {
              goto LABEL_204;
            }
          }
        }
        v214 = 0;
        v70 = 0;
        v69 = 0;
        v71 = v66;
        v220 = v215;
      LABEL_204:
        if (v203 > v70) {
          v13 = GameRoutine_1a0b950(v71, v228 + v70, v203 - v70);
          LODWORD(v71) = v71 + v203 - v70;
          v148 = v212 - v69;
          if ((int)v212 > v69) {
            v9 = (__int64*)GameData_212bf68;
            v149 = (char*)(v210 + 12LL * v69 + 9);
            while (1) {
              v150 = *(v149 - 1);
              v151 = *(_DWORD*)(v149 - 9) + v214;
              v152 = *(_DWORD*)(v149 - 5);
              v153 = *v149;
              if (v220 >= v219) {
                v154 = v220 - v215;
                v155 = 1 - 0x5555555555555555LL * ((__int64)(v220 - v215) >> 2);
                if (v155 > 0x1555555555555555LL) {
                  goto LABEL_286;
                }
                if (0x5555555555555556LL * ((__int64)(v219 - v215) >> 2) >
                    v155) {
                  v155 = 0x5555555555555556LL * ((__int64)(v219 - v215) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v219 - v215) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v156 = 0x1555555555555555LL;
                }
                else {
                  v156 = v155;
                }
                if (v156 != 0) {
                  if (v156 > 0x1555555555555555LL) {
                    goto LABEL_287;
                  }
                  v157 = GameRoutine_651b90(*v9, 12 * v156, 16, 0);
                }
                else {
                  v157 = 0;
                }
                v158 = v157 + v154;
                *(_BYTE*)(v158 + 8) = v150;
                *(_DWORD*)v158 = v151;
                *(_DWORD*)(v158 + 4) = v152;
                *(_BYTE*)(v158 + 9) = v153;
                v219 = v157 + 12 * v156;
                v220 = v157 + v154 + 12;
                v159 = v157 + v154 + 12 * (v154 / -12);
                v13 = GameRoutine_1a0b950(v159, v215, v154);
                if (v215 != 0) {
                  v160 = 128;
                  if (*(_QWORD*)(*v9 + 200) == 0) {
                    v160 = 56;
                  }
                  v13 = GameRoutine_1a0a4e0(*v9 + v160);
                }
                v215 = v159;
              }
              else {
                *(_DWORD*)v220 = v151;
                *(_DWORD*)(v220 + 4) = v152;
                *(_BYTE*)(v220 + 8) = v150;
                *(_BYTE*)(v220 + 9) = v153;
                v220 += 12LL;
              }
              v149 += 12;
              if (--v148 == 0) {
                goto LABEL_226;
              }
            }
          }
        }
        v9 = &GameData_2265ee0;
      LABEL_226:
        if (*(_BYTE*)(*v206 + 19LL) != 0 || v201 == v208) {
          v162 = 0;
          v163 = nullptr;
          v164 = nullptr;
        }
        else {
          if ((v199 & 0x8000000000000000LL) != 0) {
            goto LABEL_289;
          }
          v13 = GameRoutine_651b90(*v9, v199, 16, 0);
          v165 = v208;
          v162 = v13;
          v163 = (_BYTE*)v13;
          do {
            *v163 = *v165;
            v166 = v165[1];
            v165 += 2;
            v163[1] = v166;
            v163 += 2;
          } while (v165 != v201);
          v164 = (_BYTE*)(v13 + v199);
        }
        v167 = v204;
        v169 = v204[1];
        v168 = v204[2];
        v170 = v71 - v205;
        if (v169 < v168) {
          *(_QWORD*)(v169 + 48) = v162;
          *(_QWORD*)(v169 + 56) = v163;
          v64 = v169 + 72;
          v62 = v198;
          *(_DWORD*)(v169 + 40) = v170;
          *(_QWORD*)(v169 + 32) = v205;
          *(_QWORD*)(v169 + 64) = v164;
          *(_QWORD*)v169 = v202;
          *(_QWORD*)(v169 + 8) = v215;
          *(_QWORD*)(v169 + 16) = v220;
          *(_QWORD*)(v169 + 24) = v219;
        }
        else {
          v171 = (_QWORD*)*v204;
          v172 = v169 - *v204;
          v173 = 1 - 0x71C71C71C71C71C7LL * (v172 >> 3);
          if (v173 > 0x38E38E38E38E38ELL) {
            GameRoutine_12352d0();
          }
          v174 = 0x8E38E38E38E38E39LL * ((__int64)(v168 - (_QWORD)v171) >> 3);
          if (2 * v174 > v173) {
            v173 = 2 * v174;
          }
          if (v174 >= 0x1C71C71C71C71C7LL) {
            v175 = 0x38E38E38E38E38ELL;
          }
          else {
            v175 = v173;
          }
          if (v175 != 0) {
            if (v175 > 0x38E38E38E38E38ELL) {
              goto LABEL_287;
            }
            v176 = GameRoutine_651b90(*v9, 72 * v175, 16, 0);
            v171 = (_QWORD*)*v204;
            v169 = v204[1];
            v177 = v169 - *v204;
          }
          else {
            v176 = 0;
            v177 = v169 - *v204;
          }
          v178 = v176 + v172;
          *(_QWORD*)(v178 + 48) = v162;
          *(_QWORD*)(v178 + 56) = v163;
          v179 = v178 - v177;
          *(_DWORD*)(v178 + 40) = v170;
          *(_QWORD*)(v178 + 64) = v164;
          *(_QWORD*)v178 = v202;
          *(_QWORD*)(v178 + 8) = v215;
          *(_QWORD*)(v178 + 16) = v220;
          *(_QWORD*)(v178 + 24) = v219;
          *(_QWORD*)(v178 + 32) = v205;
          if (v171 == (_QWORD*)v169) {
            v190 = v204;
          }
          else {
            v180 = v171;
            v181 = v179;
            do {
              v182 = *v180;
              *(_QWORD*)(v181 + 16) = 0;
              *(_QWORD*)(v181 + 24) = 0;
              *(_QWORD*)v181 = v182;
              *(_QWORD*)(v181 + 8) = v180[1];
              *(_QWORD*)(v181 + 16) = v180[2];
              *(_QWORD*)(v181 + 24) = v180[3];
              v180[1] = 0;
              v180[2] = 0;
              v183 = v180[4];
              v180[3] = 0;
              v180[4] = 0;
              *(_QWORD*)(v181 + 32) = v183;
              LODWORD(v183) = *((_DWORD*)v180 + 10);
              *(_QWORD*)(v181 + 56) = 0;
              *(_QWORD*)(v181 + 64) = 0;
              *(_DWORD*)(v181 + 40) = v183;
              *(_QWORD*)(v181 + 48) = v180[6];
              *(_QWORD*)(v181 + 56) = v180[7];
              *(_QWORD*)(v181 + 64) = v180[8];
              v180[7] = 0;
              v180[8] = 0;
              v180[6] = 0;
              v180 += 9;
              v181 += 72LL;
            } while (v180 != (_QWORD*)v169);
            do {
              v184 = v171[6];
              if (v184 != 0) {
                v171[7] = v184;
                v185 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v185 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v185);
              }
              v186 = v171[4];
              v171[4] = 0;
              if (v186 != 0) {
                v187 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v187 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v187);
              }
              v188 = v171[1];
              if (v188 != 0) {
                v171[2] = v188;
                v189 = 128;
                if (*(_QWORD*)(*v9 + 200) == 0) {
                  v189 = 56;
                }
                GameRoutine_1a0a4e0(*v9 + v189);
              }
              v171 += 9;
            } while (v171 != (_QWORD*)v169);
            v190 = v204;
            v171 = (_QWORD*)*v204;
          }
          v64 = v178 + 72;
          *v190 = v179;
          v190[1] = v178 + 72;
          v190[2] = v176 + 72 * v175;
          if (v171 != nullptr) {
            v191 = 128;
            if (*(_QWORD*)(*v9 + 200) == 0) {
              v191 = 56;
            }
            GameRoutine_1a0a4e0(*v9 + v191);
          }
          v167 = v204;
          v62 = v198;
        }
        v167[1] = v64;
        v63 = v206;
      }
      v63 += 5;
    } while (v63 != v62);
  }
  v192 = 128;
  if (*(_QWORD*)(*v9 + 200) == 0) {
    v192 = 56;
  }
  result = GameRoutine_1a0a4e0(*v9 + v192);
  v193 = v229;
  if (v229 != nullptr) {
    v194 = v230;
    if (v229 != v230) {
      do {
        v195 = *((_QWORD*)v194 - 4);
        if (v195 != 0) {
          *((_QWORD*)v194 - 3) = v195;
          if (*(_QWORD*)(*v9 + 200) != 0) {
            v196 = 128;
          }
          else {
            v196 = 56;
          }
          GameRoutine_1a0a4e0(*v9 + v196);
        }
        v194 -= 40;
      } while (v194 != v193);
    }
    v197 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v197 = 56;
    }
    return GameRoutine_1a0a4e0(*v9 + v197);
  }
  return result;
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
      result = GameRoutine_1a0a4e0(*(_QWORD*)v14 + v19);
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
