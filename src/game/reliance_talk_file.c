#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f2288;
extern __int64 GameData_21f2290;
extern __int64 GameData_21f22a0;
extern __int64 GameData_21f22a8;
extern __int64 GameData_21f22b8;
extern __int64 GameData_21f22c0;
extern __int64 GameData_21f22c8;
extern __int64 GameData_21f22d0;
extern __int64 GameData_21f22e0;
extern __int64 GameData_21f22e8;
extern __int64 GameData_21f22f0;
extern __int64 GameData_21f22f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f2308;
extern int GameData_21f230c;
__int64 RelianceTalkFile_Unknown5_alt1() __asm__("RelianceTalkFile_Unknown5");
__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
extern __int64 GameData_21c9000;
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
__int64 RelianceTalkFile_8cbf60(__int64 result);
_QWORD* GameRoutine_8d69e0(__int64, unsigned __int64, __int64*);
__int64* GameRoutine_8cfc00(__int64* result, unsigned __int64);
__int64* GameRoutine_8cfec0(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___next_prime(_QWORD);
extern __int64 GameData_212cb70[89];
extern __int64 GameData_21f2298;
extern __int64 GameData_21f22b0;
extern int GameData_21f22d8;
unsigned __int64 game_8cf920(unsigned __int64 result, unsigned __int8*, char*,
                             _QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_688200();
void __attribute__((noreturn)) GameRoutine_8cfe90();
void RelianceTalkFile_Unknown4();
__int64 RelianceTalkFile_8c90e0(float* a1, unsigned __int64 a2);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceTalkFile_Unknown5();

void RelianceTalkFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* i;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64* v45;
  unsigned __int64* v46;
  __int64* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned __int64 v61;
  int v62;
  __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64* v74;
  unsigned __int64 primeEm;
  unsigned __int64 v76;
  bool v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  __int64* v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64*** v86;
  __int64** v87;
  unsigned __int64 v88;
  __int64* v89;
  _QWORD* v90;
  float v91;
  _QWORD* v92;
  __int64 v93;
  float v94;
  float v95;
  _BOOL8 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  _QWORD* v111;
  _QWORD* v112;
  unsigned __int64 v113;
  __int64 v114;
  float v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  float v119;
  _BOOL8 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  _QWORD** v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  _QWORD* v141;
  unsigned __int64 v142;
  _QWORD* v143;
  _QWORD* v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64* v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  _QWORD* v157;
  unsigned __int64 v158;
  _QWORD* v159;
  _QWORD* v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  char v167;
  char* v168;
  unsigned __int64 v169;
  unsigned __int64* v170;
  __int64 v171;
  char* v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  unsigned __int64* v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64* v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  _QWORD* v208;
  __int64 v209;
  _QWORD* v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64* v214;
  unsigned __int64* v215;
  unsigned __int64* v216;
  unsigned __int64 v217;
  struct {
    unsigned __int64 v218;
    unsigned __int64 v219;
    _QWORD* v220;
    __int64 v221;
    int v222;
  } v218_;
  unsigned __int8 v223[4];
  unsigned __int64 v224;

  v0 = GameData_212cb70[0];
  v1 = *(_QWORD*)GameData_212cb70[0];
  v2 = *(__int64**)(*(_QWORD*)GameData_212cb70[0] + 64LL);
  v3 = *(__int64**)(*(_QWORD*)GameData_212cb70[0] + 72LL);
  if (v2 != v3) {
    do {
      v5 = *v2;
      v6 = *(unsigned __int16*)(*v2 + 16);
      if (*(_WORD*)(*v2 + 16) != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)(v1 + 64) + 8LL * (unsigned int)(v6 - 1));
        if (v6 != 0) {
          v6 = *(_QWORD*)(v6 + 24);
        }
      }
      *(_QWORD*)(*(_QWORD*)(v5 + 24) + 128LL) = v6;
      v7 = *(_QWORD*)(v1 + 64);
      v8 = *(unsigned __int16*)(v5 + 16) + 1LL;
      if ((int)v8 >= (int)((unsigned __int64)(*(_QWORD*)(v1 + 72) - v7) >> 3)) {
        v4 = 0;
      }
      else {
        v4 = *(_QWORD*)(v7 + 8 * v8);
        if (v4 != 0) {
          v4 = *(_QWORD*)(v4 + 24);
        }
      }
      ++v2;
      *(_QWORD*)(*(_QWORD*)(v5 + 24) + 136LL) = v4;
    } while (v2 != v3);
    v2 = *(__int64**)(v1 + 64);
    v3 = *(__int64**)(v1 + 72);
    if (v2 != v3) {
      do {
        v10 = *(_QWORD**)(*v2 + 24);
        v11 = v10;
        do {
          if (*v11 != 0) {
            break;
          }
          v11 = (_QWORD*)v11[16];
        } while (v11 != nullptr);
        v10[15] = v11;
        for (i = (_QWORD*)v11[17]; i != nullptr; i = (_QWORD*)i[17]) {
          if (*i != 0) {
            v12 = v11[13];
            v13 = i[13];
            v14 = v12 == 0 || v13 == 0;
            if (v14 || ((v15 = *(_QWORD*)(v12 + 40), v16 = *(_QWORD*)(v13 + 40),
                         v17 = *(_QWORD*)(v12 + 56), v15 != v16) ||
                        v17 != *(_QWORD*)(v13 + 56)) &&
                           (v17 != v16 || v15 != *(_QWORD*)(v13 + 56))) {
              i = nullptr;
              break;
            }
            if (*(unsigned __int8*)(v13 + 64) <
                (unsigned int)*(unsigned __int8*)(v12 + 64)) {
              break;
            }
          }
        }
        ++v2;
        v10[14] = i;
      } while (v2 != v3);
      v2 = *(__int64**)(v1 + 64);
      v3 = *(__int64**)(v1 + 72);
    }
  }
  while (v2 != v3) {
    v18 = *(_QWORD**)(*v2 + 24);
    if (v18[16] != 0 && *v18 != 0) {
      v18[16] = 0;
    }
    v20 = (_QWORD*)v18[17];
    if (v20 != nullptr && *v20 != 0) {
      v18[17] = 0;
    }
    ++v2;
  }
  if (GameData_21f22d0 != 0) {
    v21 = (_QWORD*)GameData_21f22c8;
    if (GameData_21f22c8 != 0) {
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        v24 = (_QWORD*)*v21;
        v25 = (_QWORD*)v21[5];
        if (v25 != nullptr) {
          do {
            v26 = (_QWORD*)*v25;
            if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v27, v25);
            v25 = v26;
          } while (v26 != nullptr);
        }
        v28 = v21[3];
        v21[3] = 0;
        if (v28 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v29, v28);
        }
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v23, v21);
        v21 = v24;
      } while (v24 != nullptr);
    }
    GameData_21f22c8 = 0;
    if (GameData_21f22c0 != 0) {
      v30 = GameData_21f22c0 & 7;
      if ((unsigned __int64)GameData_21f22c0 >= 8) {
        v32 = GameData_21f22c0 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        do {
          *(_QWORD*)(GameData_21f22b8 + 8 * v31) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 8) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 16) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 24) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 32) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 40) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v31 + 48) = 0;
          v33 = GameData_21f22b8 + 8 * v31;
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
          *(_QWORD*)(GameData_21f22b8 + v34) = 0;
          v34 += 8;
        } while (v30 != 0);
      }
    }
    GameData_21f22d0 = 0;
  }
  if (GameData_21f22f8 != 0) {
    v35 = (_QWORD*)GameData_21f22f0;
    if (GameData_21f22f0 != 0) {
      v36 = fw_memory_g_heap_manager_ptr;
      do {
        v37 = (_QWORD*)*v35;
        if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v36 + v38, v35);
        v35 = v37;
      } while (v37 != nullptr);
    }
    GameData_21f22f0 = 0;
    if (GameData_21f22e8 != 0) {
      v39 = GameData_21f22e8 & 7;
      if ((unsigned __int64)GameData_21f22e8 >= 8) {
        v41 = GameData_21f22e8 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = 0;
        do {
          *(_QWORD*)(GameData_21f22e0 + 8 * v40) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 8) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 16) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 24) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 32) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 40) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v40 + 48) = 0;
          v42 = GameData_21f22e0 + 8 * v40;
          v40 += 8;
          *(_QWORD*)(v42 + 56) = 0;
        } while (v41 != v40);
      }
      else {
        v40 = 0;
      }
      if (v39 != 0) {
        v43 = 8 * v40;
        do {
          --v39;
          *(_QWORD*)(GameData_21f22e0 + v43) = 0;
          v43 += 8;
        } while (v39 != 0);
      }
    }
    GameData_21f22f8 = 0;
  }
  v44 = *(_QWORD*)v0;
  v46 = *(unsigned __int64**)(*(_QWORD*)v0 + 64LL);
  v45 = *(unsigned __int64**)(v44 + 72);
  if (v46 == v45) {
    goto LABEL_346;
  }
  v47 = (__int64*)fw_memory_g_heap_manager_ptr;
  v214 = *(unsigned __int64**)(v44 + 72);
  while (2) {
    v49 = *v46;
    v50 = *(unsigned __int64**)(*v46 + 24);
    if (*v50 == 0) {
      goto LABEL_91;
    }
    v51 = *(_QWORD*)(v49 + 40);
    v52 = *(_QWORD*)(v49 + 56);
    if (v51 == 0 || v52 == 0) {
      v54 = game_HashString(0);
    }
    else {
      v55 = *(_QWORD*)(*(_QWORD*)(v51 + 24) + 1784LL);
      v56 = *(_QWORD*)(*(_QWORD*)(v52 + 24) + 1784LL);
      if (v55 == 0 || v56 == 0) {
        v54 = -1;
      }
      else {
        v58 = *(unsigned __int16*)(v55 + 16);
        v59 = *(unsigned __int16*)(v56 + 16);
        HIDWORD(v61) = v58 | (v59 << 16);
        LODWORD(v61) = HIDWORD(v61);
        v60 = v61 >> 16;
        if (v58 >= v59) {
          v62 = v60;
        }
        else {
          v62 = v58 | (v59 << 16);
        }
        v54 = v62;
      }
    }
    if (GameData_21f22c0 != 0 && GameData_21f22d0 != 0) {
      v64 = GameData_21f22c0 - 1;
      if ((GameData_21f22c0 & (GameData_21f22c0 - 1)) != 0) {
        v65 = v54;
        if (v54 >= GameData_21f22c0) {
          v65 = v54 % GameData_21f22c0;
        }
      }
      else {
        v65 = v64 & v54;
      }
      v66 = *(_QWORD**)(GameData_21f22b8 + 8 * v65);
      if (v66 != nullptr) {
        v67 = (_QWORD*)*v66;
        if (v67 != nullptr) {
          if ((GameData_21f22c0 & v64) == 0) {
            while (1) {
              v69 = v67[1];
              if (v69 == v54) {
                if (v67[2] == v54) {
                  goto LABEL_341;
                }
              }
              else if ((v69 & v64) != v65) {
                goto LABEL_132;
              }
              v67 = (_QWORD*)*v67;
              if (v67 == nullptr) {
                goto LABEL_132;
              }
            }
          }
          do {
            v68 = v67[1];
            if (v68 == v54) {
              if (v67[2] == v54) {
              LABEL_341:
                v167 = *(_BYTE*)(v49 + 64);
                v218_.v218 = v49;
                LOBYTE(v224) = v167;
                game_8cf920((unsigned __int64)(v67 + 3),
                            (unsigned __int8*)&v224, (char*)&v224, &v218_.v218);
                goto LABEL_297;
              }
            }
            else {
              if (v68 >= GameData_21f22c0) {
                v68 %= (unsigned __int64)GameData_21f22c0;
              }
              if (v68 != v65) {
                break;
              }
            }
            v67 = (_QWORD*)*v67;
          } while (v67 != nullptr);
        }
      }
    }
  LABEL_132:
    v218_.v220 = nullptr;
    v218_.v221 = 0;
    v218_.v218 = 0;
    v218_.v219 = 0;
    v224 = v49;
    v218_.v222 = 1065353216;
    v223[0] = *(_BYTE*)(v49 + 64);
    game_8cf920((unsigned __int64)&v218_.v218, v223, (char*)v223, &v224);
    v70 = fw_memory_HeapManager_Allocate(*v47, 64, 16, 0);
    v71 = v218_.v222;
    v72 = v218_.v219;
    *(_QWORD*)(v70 + 16) = v54;
    v73 = v70;
    *(_QWORD*)(v70 + 24) = 0;
    v74 = (__int64*)(v70 + 24);
    *(_QWORD*)v70 = 0;
    *(_QWORD*)(v70 + 8) = 0;
    *(_QWORD*)(v70 + 32) = 0;
    *(_QWORD*)(v70 + 40) = 0;
    *(_QWORD*)(v70 + 48) = 0;
    *(_DWORD*)(v70 + 56) = v71;
    if (v72 == 1) {
      v72 = 2;
    LABEL_148:
      GameRoutine_8cfc00(v74, v72);
      goto LABEL_149;
    }
    if ((v72 & (v72 - 1)) != 0) {
      primeEm = std___1___next_prime(v72);
      v76 = *(_QWORD*)(v73 + 32);
      v72 = primeEm;
      v77 = primeEm >= v76;
      if (primeEm > v76) {
        goto LABEL_148;
      }
    }
    else {
      v76 = 0;
      v77 = true;
      if (v72 != 0) {
        goto LABEL_148;
      }
    }
    if (!v77) {
      v78 = vcvtps_u64_f32((float)*(unsigned __int64*)(v73 + 48) /
                           *(float*)(v73 + 56));
      if (v76 < 3 || (v76 & (v76 - 1)) != 0) {
        v80 = v72;
        v78 = std___1___next_prime(v78);
        v72 = v80;
        v47 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      else {
        v79 = 1LL << -(char)__clz(v78 - 1);
        if (v78 >= 2) {
          v78 = v79;
        }
      }
      if (v72 <= v78) {
        v72 = v78;
      }
      if (v72 < v76) {
        goto LABEL_148;
      }
    }
  LABEL_149:
    v81 = v218_.v220;
    v216 = v50;
    v217 = v49;
    if (v218_.v220 != nullptr) {
      v82 = (__int64*)(v73 + 40);
      do {
        v83 = *((unsigned __int8*)v81 + 16);
        v84 = *(_QWORD*)(v73 + 32);
        if (v84 != 0) {
          v85 = v84 - 1;
          if ((v84 & (v84 - 1)) != 0) {
            v49 = *((unsigned __int8*)v81 + 16);
            if (v84 <= v83) {
              v49 = (unsigned int)v83 % (unsigned int)v84;
            }
          }
          else {
            v49 = ((_DWORD)v84 - 1) & (unsigned int)v83;
          }
          v86 = *(__int64****)(*v74 + 8 * v49);
          if (v86 != nullptr) {
            v87 = *v86;
            if (v87 != nullptr) {
              if ((v84 & v85) == 0) {
                while (1) {
                  v89 = v87[1];
                  if (v89 == (__int64*)v83) {
                    if (*((unsigned __int8*)v87 + 16) == (_DWORD)v83) {
                      goto LABEL_208;
                    }
                  }
                  else if (((unsigned __int64)v89 & v85) != v49) {
                    goto LABEL_171;
                  }
                  v87 = (__int64**)*v87;
                  if (v87 == nullptr) {
                    goto LABEL_171;
                  }
                }
              }
              do {
                v88 = (unsigned __int64)v87[1];
                if (v88 == v83) {
                  if (*((unsigned __int8*)v87 + 16) == (_DWORD)v83) {
                    goto LABEL_208;
                  }
                }
                else {
                  if (v88 >= v84) {
                    v88 %= v84;
                  }
                  if (v88 != v49) {
                    break;
                  }
                }
                v87 = (__int64**)*v87;
              } while (v87 != nullptr);
            }
          }
        }
      LABEL_171:
        v90 = (_QWORD*)fw_memory_HeapManager_Allocate(*v47, 32, 16, 0);
        *v90 = 0;
        v90[1] = v83;
        v91 = *(float*)(v73 + 56);
        v92 = v90;
        v93 = v81[3];
        v90[2] = v81[2];
        v90[3] = v93;
        v94 = (float)(unsigned __int64)(*(_QWORD*)(v73 + 48) + 1LL);
        if (v84 == 0 || (float)(v91 * (float)v84) < v94) {
          v95 = v94 / v91;
          v96 = (v84 & (v84 - 1)) != 0;
          if (v84 < 3) {
            v96 = true;
          }
          v97 = v96 | (2 * v84);
          v98 = vcvtps_u64_f32(v95);
          if (v97 <= v98) {
            v99 = v98;
          }
          else {
            v99 = v97;
          }
          if (v99 == 1) {
            v99 = 2;
          }
          else if ((v99 & (v99 - 1)) != 0) {
            v100 = std___1___next_prime(v99);
            v84 = *(_QWORD*)(v73 + 32);
            v99 = v100;
          }
          if (v99 > v84) {
            goto LABEL_183;
          }
          if (v99 < v84) {
            v101 = vcvtps_u64_f32((float)*(unsigned __int64*)(v73 + 48) /
                                  *(float*)(v73 + 56));
            if (v84 < 3 || (v84 & (v84 - 1)) != 0) {
              v101 = std___1___next_prime(v101);
            }
            else {
              v102 = 1LL << -(char)__clz(v101 - 1);
              if (v101 >= 2) {
                v101 = v102;
              }
            }
            if (v99 <= v101) {
              v99 = v101;
            }
            if (v99 < v84) {
            LABEL_183:
              GameRoutine_8cfc00(v74, v99);
            }
          }
          v84 = *(_QWORD*)(v73 + 32);
          if ((v84 & (v84 - 1)) != 0) {
            if (v84 <= v83) {
              v49 = v83 % v84;
            }
            else {
              v49 = v83;
            }
          }
          else {
            v49 = ((_DWORD)v84 - 1) & (unsigned int)v83;
          }
        }
        v103 = *v74;
        v104 = *(_QWORD**)(*v74 + 8 * v49);
        if (v104 != nullptr) {
          *v92 = *v104;
          *v104 = v92;
        }
        else {
          v105 = *v82;
          *v82 = (__int64)v92;
          *v92 = v105;
          *(_QWORD*)(v103 + 8 * v49) = v82;
          if (*v92 != 0) {
            v106 = *(_QWORD*)(*v92 + 8LL);
            if ((v84 & (v84 - 1)) != 0) {
              if (v106 >= v84) {
                v106 %= v84;
              }
            }
            else {
              v106 &= v84 - 1;
            }
            *(_QWORD*)(*v74 + 8 * v106) = v92;
          }
        }
        ++*(_QWORD*)(v73 + 48);
        v47 = (__int64*)fw_memory_g_heap_manager_ptr;
      LABEL_208:
        v81 = (_QWORD*)*v81;
      } while (v81 != nullptr);
    }
    v107 = *(_QWORD*)(v73 + 16);
    v108 = GameData_21f22c0;
    *(_QWORD*)(v73 + 8) = v107;
    if (v108 == 0) {
      goto LABEL_229;
    }
    v109 = v108 - 1;
    if ((v108 & (v108 - 1)) != 0) {
      v110 = v107;
      if (v107 >= v108) {
        v110 = v107 % v108;
      }
    }
    else {
      v110 = v109 & v107;
    }
    v111 = *(_QWORD**)(GameData_21f22b8 + 8 * v110);
    if (v111 == nullptr || (v112 = (_QWORD*)*v111) == nullptr) {
    LABEL_229:
      v115 = (float)(unsigned __int64)(GameData_21f22d0 + 1);
      if (v108 != 0 &&
          (float)(*(float*)&GameData_21f22d8 * (float)v108) >= v115) {
        goto LABEL_231;
      }
      v119 = v115 / *(float*)&GameData_21f22d8;
      v120 = (v108 & (v108 - 1)) != 0;
      if (v108 < 3) {
        v120 = true;
      }
      v121 = v120 | (2 * v108);
      v122 = vcvtps_u64_f32(v119);
      if (v121 <= v122) {
        v123 = v122;
      }
      else {
        v123 = v121;
      }
      if (v123 == 1) {
        v123 = 2;
      }
      else if ((v123 & (v123 - 1)) != 0) {
        v128 = std___1___next_prime(v123);
        v108 = GameData_21f22c0;
        v123 = v128;
      }
      if (v123 <= v108) {
        if (v123 >= v108) {
          goto LABEL_231;
        }
        v133 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f22d0 /
                              *(float*)&GameData_21f22d8);
        if (v108 < 3 || (v108 & (v108 - 1)) != 0) {
          v133 = std___1___next_prime(v133);
        }
        else {
          v134 = 1LL << -(char)__clz(v133 - 1);
          if (v133 >= 2) {
            v133 = v134;
          }
        }
        if (v123 <= v133) {
          v123 = v133;
        }
        if (v123 >= v108) {
          goto LABEL_231;
        }
        if (v123 == 0) {
          v165 = GameData_21f22b8;
          GameData_21f22b8 = 0;
          if (v165 != 0) {
            if (*(_QWORD*)(*v47 + 200) != 0) {
              v166 = 128;
            }
            else {
              v166 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v47 + v166, v165);
          }
          GameData_21f22c0 = 0;
          goto LABEL_231;
        }
      }
      if (v123 >> 61 != 0) {
      LABEL_423:
        GameRoutine_60a210();
      }
      v129 = fw_memory_HeapManager_Allocate(*v47, 8 * v123, 16, 0);
      v130 = GameData_21f22b8;
      GameData_21f22b8 = v129;
      if (v130 != 0) {
        if (*(_QWORD*)(*v47 + 200) != 0) {
          v131 = 128;
        }
        else {
          v131 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v47 + v131, v130);
      }
      GameData_21f22c0 = v123;
      if (v123 >= 8) {
        v132 = 0;
        do {
          *(_QWORD*)(GameData_21f22b8 + 8 * v132) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 8) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 16) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 24) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 32) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 40) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v132 + 48) = 0;
          v135 = GameData_21f22b8 + 8 * v132;
          v132 += 8;
          *(_QWORD*)(v135 + 56) = 0;
        } while ((v123 & 0x1FFFFFFFFFFFFFF8LL) != v132);
      }
      else {
        v132 = 0;
      }
      v136 = v123 & 7;
      if ((v123 & 7) != 0) {
        v137 = 8 * v132;
        do {
          --v136;
          *(_QWORD*)(GameData_21f22b8 + v137) = 0;
          v137 += 8;
        } while (v136 != 0);
      }
      v138 = (_QWORD**)GameData_21f22c8;
      if (GameData_21f22c8 == 0) {
        goto LABEL_231;
      }
      v139 = *(_QWORD*)(GameData_21f22c8 + 8);
      v140 = v123 - 1;
      if ((v123 & (v123 - 1)) == 0) {
        v156 = v139 & v140;
        *(_QWORD*)(GameData_21f22b8 + 8 * v156) = &GameData_21f22c8;
        while (1) {
          v157 = *v138;
          if (*v138 == nullptr) {
            break;
          }
          v158 = v157[1] & v140;
          if (v158 == v156) {
            v138 = (_QWORD**)*v138;
          }
          else if (*(_QWORD*)(GameData_21f22b8 + 8 * v158) != 0) {
            *v138 = (_QWORD*)*v157;
            *v157 = **(_QWORD**)(GameData_21f22b8 + 8 * v158);
            **(_QWORD**)(GameData_21f22b8 + 8 * v158) = v157;
          }
          else {
            *(_QWORD*)(GameData_21f22b8 + 8 * v158) = v138;
            v138 = (_QWORD**)v157;
            v156 = v158;
          }
        }
        goto LABEL_231;
      }
      if (v139 >= v123) {
        v139 %= v123;
      }
      *(_QWORD*)(GameData_21f22b8 + 8 * v139) = &GameData_21f22c8;
      v141 = *v138;
      if (*v138 == nullptr) {
      LABEL_231:
        v116 = GameData_21f22c0;
        v117 = *(_QWORD*)(v73 + 8);
        v118 = GameData_21f22c0 - 1;
        if ((v116 & (v116 - 1)) != 0) {
          v50 = v216;
          v49 = v217;
          if (v117 >= GameData_21f22c0) {
            v117 %= (unsigned __int64)GameData_21f22c0;
          }
        }
        else {
          v50 = v216;
          v49 = v217;
          v117 &= v118;
        }
        v124 = GameData_21f22b8;
        v125 = *(__int64**)(GameData_21f22b8 + 8 * v117);
        if (v125 != nullptr) {
          *(_QWORD*)v73 = *v125;
          *v125 = v73;
        }
        else {
          v126 = GameData_21f22c8;
          GameData_21f22c8 = v73;
          *(_QWORD*)v73 = v126;
          *(_QWORD*)(v124 + 8 * v117) = &GameData_21f22c8;
          if (*(_QWORD*)v73 != 0) {
            v127 = *(_QWORD*)(*(_QWORD*)v73 + 8LL);
            if ((v116 & v118) != 0) {
              if (v127 >= v116) {
                v127 %= v116;
              }
            }
            else {
              v127 &= v118;
            }
            *(_QWORD*)(GameData_21f22b8 + 8 * v127) = v73;
          }
        }
        ++GameData_21f22d0;
        v143 = v218_.v220;
        if (v218_.v220 == nullptr) {
          goto LABEL_291;
        }
        goto LABEL_287;
      }
      while (1) {
        v142 = v141[1];
        if (v142 >= v123) {
          v142 %= v123;
        }
        if (v142 != v139) {
          if (*(_QWORD*)(GameData_21f22b8 + 8 * v142) == 0) {
            *(_QWORD*)(GameData_21f22b8 + 8 * v142) = v138;
            goto LABEL_278;
          }
          *v138 = (_QWORD*)*v141;
          *v141 = **(_QWORD**)(GameData_21f22b8 + 8 * v142);
          **(_QWORD**)(GameData_21f22b8 + 8 * v142) = v141;
          v141 = v138;
        }
        v142 = v139;
      LABEL_278:
        v138 = (_QWORD**)v141;
        v141 = (_QWORD*)*v141;
        v139 = v142;
        if (v141 == nullptr) {
          goto LABEL_231;
        }
      }
    }
    if ((v108 & v109) == 0) {
      while (1) {
        v114 = v112[1];
        if (v114 == v107) {
          if (v112[2] == v107) {
            goto LABEL_315;
          }
        }
        else if ((v114 & v109) != v110) {
          goto LABEL_229;
        }
        v112 = (_QWORD*)*v112;
        if (v112 == nullptr) {
          goto LABEL_229;
        }
      }
    }
    while (1) {
      v113 = v112[1];
      if (v113 == v107) {
        break;
      }
      if (v113 >= v108) {
        v113 %= v108;
      }
      if (v113 != v110) {
        goto LABEL_229;
      }
    LABEL_219:
      v112 = (_QWORD*)*v112;
      if (v112 == nullptr) {
        goto LABEL_229;
      }
    }
    if (v112[2] != v107) {
      goto LABEL_219;
    }
  LABEL_315:
    v159 = *(_QWORD**)(v73 + 40);
    if (v159 != nullptr) {
      do {
        v160 = (_QWORD*)*v159;
        if (*(_QWORD*)(*v47 + 200) != 0) {
          v161 = 128;
        }
        else {
          v161 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v47 + v161, v159);
        v159 = v160;
      } while (v160 != nullptr);
    }
    v162 = *v74;
    v50 = v216;
    v49 = v217;
    *v74 = 0;
    if (v162 != 0) {
      if (*(_QWORD*)(*v47 + 200) != 0) {
        v163 = 128;
      }
      else {
        v163 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v47 + v163, v162);
    }
    if (*(_QWORD*)(*v47 + 200) != 0) {
      v164 = 128;
    }
    else {
      v164 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v47 + v164, v73);
    v143 = v218_.v220;
    if (v218_.v220 != nullptr) {
      do {
      LABEL_287:
        v144 = (_QWORD*)*v143;
        if (*(_QWORD*)(*v47 + 200) != 0) {
          v145 = 128;
        }
        else {
          v145 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v47 + v145, v143);
        v143 = v144;
      } while (v144 != nullptr);
    }
  LABEL_291:
    v146 = v218_.v218;
    v218_.v218 = 0;
    if (v146 != 0) {
      if (*(_QWORD*)(*v47 + 200) != 0) {
        v147 = 128;
      }
      else {
        v147 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v47 + v147, v146);
    }
    v45 = v214;
  LABEL_297:
    v148 = *v50;
    v149 = (__int64*)fw_memory_HeapManager_Allocate(*v47, 32, 16, 0);
    v149[2] = v148;
    v149[3] = v49;
    *v149 = 0;
    v149[1] = v148;
    if (GameRoutine_8d69e0((__int64)&GameData_21f22e0, v148, v149 + 2) !=
        nullptr) {
      if (*(_QWORD*)(*v47 + 200) != 0) {
        v48 = 128;
      }
      else {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v47 + v48, v149);
    }
    else {
      v150 = GameData_21f22e8;
      v151 = GameData_21f22e8 - 1;
      if ((GameData_21f22e8 & (GameData_21f22e8 - 1)) != 0) {
        if (v148 >= GameData_21f22e8) {
          v148 %= (unsigned __int64)GameData_21f22e8;
        }
      }
      else {
        v148 &= v151;
      }
      v152 = GameData_21f22e0;
      v153 = *(__int64**)(GameData_21f22e0 + 8 * v148);
      if (v153 != nullptr) {
        *v149 = *v153;
        *v153 = (__int64)v149;
      }
      else {
        v154 = GameData_21f22f0;
        GameData_21f22f0 = (__int64)v149;
        *v149 = v154;
        *(_QWORD*)(v152 + 8 * v148) = &GameData_21f22f0;
        if (*v149 != 0) {
          v155 = *(_QWORD*)(*v149 + 8);
          if ((v150 & v151) != 0) {
            if (v155 >= v150) {
              v155 %= v150;
            }
          }
          else {
            v155 &= v151;
          }
          *(_QWORD*)(GameData_21f22e0 + 8 * v155) = v149;
        }
      }
      ++GameData_21f22f8;
    }
  LABEL_91:
    if (++v46 != v45) {
      continue;
    }
    break;
  }
  v46 = *(unsigned __int64**)(*(_QWORD*)GameData_212cb70[0] + 64LL);
  v45 = *(unsigned __int64**)(*(_QWORD*)GameData_212cb70[0] + 72LL);
LABEL_346:
  v168 = (char*)GameData_21f2288;
  GameData_21f2290 = GameData_21f2288;
  if (v46 != v45) {
    do {
      v169 = *v46;
      if (*(_QWORD*)*v46 != 0 && *(_BYTE*)(v169 + 64) != 4) {
        if ((unsigned __int64)v168 < GameData_21f2298) {
          *(_QWORD*)v168 = v169;
          v168 += 8;
        }
        else {
          v170 = v45;
          v171 = GameData_21f2288;
          v172 = &v168[-GameData_21f2288];
          v173 = (__int64)&v168[-GameData_21f2288] >> 3;
          v174 = v173 + 1;
          if ((unsigned __int64)(v173 + 1) >> 61 != 0) {
            GameRoutine_8cfe90();
          }
          v175 = GameData_21f2298 - GameData_21f2288;
          if ((GameData_21f2298 - GameData_21f2288) >> 2 > v174) {
            v174 = v175 >> 2;
          }
          if ((unsigned __int64)v175 >= 0x7FFFFFFFFFFFFFF8LL) {
            v176 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v176 = v174;
          }
          if (v176 != 0) {
            if (v176 >> 61 != 0) {
              goto LABEL_423;
            }
            v177 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v176, 16, 0);
          }
          else {
            v177 = 0;
          }
          v178 = v177 + 8 * v176;
          v179 = (__int64)&v172[v177 + -8 * v173];
          *(_QWORD*)&v172[v177] = v169;
          v168 = &v172[v177 + 8];
          memcpy(v179, v171, v172);
          GameData_21f2288 = v179;
          GameData_21f2290 = (__int64)v168;
          GameData_21f2298 = v178;
          if (v171 != 0) {
            v180 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v180 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v180, v171);
          }
          v45 = v170;
        }
        GameData_21f2290 = (__int64)v168;
      }
      ++v46;
    } while (v46 != v45);
    v46 = *(unsigned __int64**)(*(_QWORD*)GameData_212cb70[0] + 64LL);
    v45 = *(unsigned __int64**)(*(_QWORD*)GameData_212cb70[0] + 72LL);
  }
  v218_.v220 = nullptr;
  v218_.v221 = 0;
  v218_.v218 = 0;
  v218_.v219 = 0;
  GameData_21f22a8 = GameData_21f22a0;
  v218_.v222 = 1065353216;
  if (v46 != v45) {
    v215 = v45;
    do {
      v182 = *v46;
      v183 = *(unsigned __int64**)(*v46 + 40);
      if (v183 != nullptr &&
          (RelianceTalkFile_8c90e0((float*)&v218_.v218, *v183) & 1) != 0) {
        v184 = GameData_21f22a8;
        if (GameData_21f22a8 >= (unsigned __int64)GameData_21f22b0) {
          v186 = GameData_21f22a0;
          v187 = GameData_21f22a8 - GameData_21f22a0;
          v188 = (GameData_21f22a8 - GameData_21f22a0) >> 3;
          v189 = v188 + 1;
          if ((unsigned __int64)(v188 + 1) >> 61 != 0) {
            goto LABEL_424;
          }
          v190 = GameData_21f22b0 - GameData_21f22a0;
          if ((GameData_21f22b0 - GameData_21f22a0) >> 2 > v189) {
            v189 = v190 >> 2;
          }
          if ((unsigned __int64)v190 >= 0x7FFFFFFFFFFFFFF8LL) {
            v191 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v191 = v189;
          }
          if (v191 != 0) {
            if (v191 >> 61 != 0) {
              goto LABEL_423;
            }
            v192 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v191, 16, 0);
          }
          else {
            v192 = 0;
          }
          v193 = v192 + 8 * v191;
          v194 = v192 + v187 - 8 * v188;
          *(_QWORD*)(v192 + v187) = v183;
          v185 = v192 + v187 + 8;
          memcpy(v194, v186, v187);
          GameData_21f22a0 = v194;
          GameData_21f22a8 = v185;
          GameData_21f22b0 = v193;
          if (v186 != 0) {
            v195 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v195 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v195, v186);
          }
          v45 = v215;
        }
        else {
          *(_QWORD*)GameData_21f22a8 = v183;
          v185 = v184 + 8;
        }
        GameData_21f22a8 = v185;
      }
      v196 = *(unsigned __int64**)(v182 + 56);
      if (v196 != nullptr &&
          (RelianceTalkFile_8c90e0((float*)&v218_.v218, *v196) & 1) != 0) {
        v197 = GameData_21f22a8;
        if (GameData_21f22a8 < (unsigned __int64)GameData_21f22b0) {
          *(_QWORD*)GameData_21f22a8 = v196;
          v181 = v197 + 8;
        }
        else {
          v198 = GameData_21f22a0;
          v199 = GameData_21f22a8 - GameData_21f22a0;
          v200 = (GameData_21f22a8 - GameData_21f22a0) >> 3;
          v201 = v200 + 1;
          if ((unsigned __int64)(v200 + 1) >> 61 != 0) {
          LABEL_424:
            GameRoutine_688200();
          }
          v202 = GameData_21f22b0 - GameData_21f22a0;
          if ((GameData_21f22b0 - GameData_21f22a0) >> 2 > v201) {
            v201 = v202 >> 2;
          }
          if ((unsigned __int64)v202 >= 0x7FFFFFFFFFFFFFF8LL) {
            v203 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v203 = v201;
          }
          if (v203 != 0) {
            if (v203 >> 61 != 0) {
              goto LABEL_423;
            }
            v204 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v203, 16, 0);
          }
          else {
            v204 = 0;
          }
          v205 = v204 + 8 * v203;
          v206 = v204 + v199 - 8 * v200;
          *(_QWORD*)(v204 + v199) = v196;
          v181 = v204 + v199 + 8;
          memcpy(v206, v198, v199);
          GameData_21f22a0 = v206;
          GameData_21f22a8 = v181;
          GameData_21f22b0 = v205;
          if (v198 != 0) {
            v207 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v207 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v207, v198);
          }
          v45 = v215;
        }
        GameData_21f22a8 = v181;
      }
      ++v46;
    } while (v46 != v45);
    v208 = v218_.v220;
    v209 = fw_memory_g_heap_manager_ptr;
    if (v218_.v220 != nullptr) {
      do {
        v210 = (_QWORD*)*v208;
        if (*(_QWORD*)(*(_QWORD*)v209 + 200LL) != 0) {
          v211 = 128;
        }
        else {
          v211 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v209 + v211, v208);
        v208 = v210;
      } while (v210 != nullptr);
    }
    v212 = v218_.v218;
    v218_.v218 = 0;
    if (v212 != 0) {
      v213 = 128;
      if (*(_QWORD*)(*(_QWORD*)v209 + 200LL) == 0) {
        v213 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v209 + v213, v212);
    }
  }
}

__int64 RelianceTalkFile_8c90e0(float* a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  _QWORD* v24;
  float v25;
  float v26;
  _BOOL8 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 primeEm;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;

  v3 = *((_QWORD*)a1 + 1);
  if (v3 != 0 && *((_QWORD*)a1 + 3) != 0) {
    v9 = v3 - 1;
    v10 = ((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
          (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
    v8 = (0x101010101010101LL * ((v10 + (v10 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
         56;
    if ((v3 & (v3 - 1)) != 0) {
      v11 = a2;
      if (a2 >= v3) {
        v11 = a2 % v3;
      }
    }
    else {
      v11 = v9 & a2;
    }
    v12 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v11);
    if (v12 != nullptr) {
      v13 = (_QWORD*)*v12;
      if (v13 != nullptr) {
        if ((v3 & v9) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == a2) {
              if (v13[2] == a2) {
                return 0;
              }
            }
            else if ((v15 & v9) != v11) {
              goto LABEL_6;
            }
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_6;
            }
          }
        }
        while (1) {
          v14 = v13[1];
          if (v14 == a2) {
            if (v13[2] == a2) {
              return 0;
            }
          }
          else {
            if (v14 >= v3) {
              v14 %= v3;
            }
            if (v14 != v11) {
              goto LABEL_6;
            }
          }
          v13 = (_QWORD*)*v13;
          if (v13 == nullptr) {
            goto LABEL_6;
          }
        }
      }
    }
    goto LABEL_24;
  }
LABEL_6:
  if (v3 != 0) {
    v7 = ((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
         (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) &
          0x3333333333333333LL);
    v8 = (0x101010101010101LL * ((v7 + (v7 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  LABEL_24:
    if (v8 > 1) {
      v2 = a2;
      if (a2 >= v3) {
        v2 = a2 % v3;
      }
    }
    else {
      v2 = (v3 - 1) & a2;
    }
    v17 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
    if (v17 != nullptr) {
      v18 = (_QWORD*)*v17;
      if (v18 != nullptr) {
        if (v8 < 2) {
          while (1) {
            v20 = v18[1];
            if (v20 == a2) {
              if (v18[2] == a2) {
                return 1;
              }
            }
            else if ((v20 & (v3 - 1)) != v2) {
              goto LABEL_48;
            }
            v18 = (_QWORD*)*v18;
            if (v18 == nullptr) {
              goto LABEL_48;
            }
          }
        }
        do {
          v19 = v18[1];
          if (v19 == a2) {
            if (v18[2] == a2) {
              return 1;
            }
          }
          else {
            if (v19 >= v3) {
              v19 %= v3;
            }
            if (v19 != v2) {
              break;
            }
          }
          v18 = (_QWORD*)*v18;
        } while (v18 != nullptr);
      }
    }
  }
LABEL_48:
  v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24, 16, 0);
  v22 = *((_QWORD*)a1 + 3);
  v23 = a1[8];
  v24 = (_QWORD*)v21;
  *(_QWORD*)(v21 + 8) = a2;
  *(_QWORD*)(v21 + 16) = a2;
  v25 = (float)(unsigned __int64)(v22 + 1);
  if (v3 == 0 || (float)(v23 * (float)v3) < v25) {
    v26 = v25 / v23;
    v27 = true;
    if (v3 >= 3) {
      v27 = (v3 & (v3 - 1)) != 0;
    }
    v28 = v27 | (2 * v3);
    v29 = vcvtps_u64_f32(v26);
    if (v28 <= v29) {
      v30 = v29;
    }
    else {
      v30 = v28;
    }
    if (v30 == 1) {
      v30 = 2;
    }
    else if ((v30 & (v30 - 1)) != 0) {
      primeEm = std___1___next_prime(v30);
      v3 = *((_QWORD*)a1 + 1);
      v30 = primeEm;
    }
    if (v30 > v3) {
      goto LABEL_60;
    }
    if (v30 < v3) {
      v32 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v3 < 3 || (v3 & (v3 - 1)) != 0) {
        v32 = std___1___next_prime(v32);
      }
      else {
        v33 = 1LL << -(char)__clz(v32 - 1);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (v30 <= v32) {
        v30 = v32;
      }
      if (v30 < v3) {
      LABEL_60:
        GameRoutine_8cfec0((__int64*)a1, v30);
      }
    }
    v3 = *((_QWORD*)a1 + 1);
    if ((v3 & (v3 - 1)) != 0) {
      if (a2 >= v3) {
        v2 = a2 % v3;
      }
      else {
        v2 = a2;
      }
    }
    else {
      v2 = (v3 - 1) & a2;
    }
  }
  v34 = *(_QWORD*)a1;
  v35 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v2);
  if (v35 != nullptr) {
    *v24 = *v35;
    *v35 = v24;
  }
  else {
    v36 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v24;
    *v24 = v36;
    *(_QWORD*)(v34 + 8 * v2) = a1 + 4;
    if (v36 != 0) {
      v37 = *(_QWORD*)(v36 + 8);
      if ((v3 & (v3 - 1)) != 0) {
        if (v37 >= v3) {
          v37 %= v3;
        }
      }
      else {
        v37 &= v3 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v24;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return 1;
}

void RelianceTalkFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  if (GameData_21f22d0 != 0) {
    v0 = (_QWORD*)GameData_21f22c8;
    if (GameData_21f22c8 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = (_QWORD*)v0[5];
        if (v4 != nullptr) {
          do {
            v5 = (_QWORD*)*v4;
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v6 = 128;
            }
            else {
              v6 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v6, (__int64)v4);
            v4 = v5;
          } while (v5 != nullptr);
        }
        v7 = v0[3];
        v0[3] = 0;
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v8, v7);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v2, (__int64)v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f22c8 = 0;
    if (GameData_21f22c0 != 0) {
      v9 = GameData_21f22c0 & 7;
      if ((unsigned __int64)GameData_21f22c0 >= 8) {
        v11 = GameData_21f22c0 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(GameData_21f22b8 + 8 * v10) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 8) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 16) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 24) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 32) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 40) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v10 + 48) = 0;
          v12 = GameData_21f22b8 + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(GameData_21f22b8 + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    GameData_21f22d0 = 0;
  }
  if (GameData_21f22f8 != 0) {
    v14 = (_QWORD*)GameData_21f22f0;
    if (GameData_21f22f0 != 0) {
      v15 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = (_QWORD*)*v14;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v15 + v17, (__int64)v14);
        v14 = v16;
      } while (v16 != nullptr);
    }
    GameData_21f22f0 = 0;
    if (GameData_21f22e8 != 0) {
      v18 = GameData_21f22e8 & 7;
      if ((unsigned __int64)GameData_21f22e8 >= 8) {
        v20 = GameData_21f22e8 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = 0;
        do {
          *(_QWORD*)(GameData_21f22e0 + 8 * v19) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 8) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 16) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 24) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 32) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 40) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v19 + 48) = 0;
          v21 = GameData_21f22e0 + 8 * v19;
          v19 += 8;
          *(_QWORD*)(v21 + 56) = 0;
        } while (v20 != v19);
      }
      else {
        v19 = 0;
      }
      if (v18 != 0) {
        v22 = 8 * v19;
        do {
          --v18;
          *(_QWORD*)(GameData_21f22e0 + v22) = 0;
          v22 += 8;
        } while (v18 != 0);
      }
    }
    GameData_21f22f8 = 0;
  }
  GameData_21f2290 = GameData_21f2288;
  GameData_21f22a8 = GameData_21f22a0;
  GameData_21f2308 = 0;
  GameData_21f230c = 0;
}

__int64 RelianceTalkFile_8cbf60(__int64 result)
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
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
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
  _QWORD* v60;
  __int64* v61;

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
    v60 = v2;
    if (v12 != v13) {
      v14 = &GameData_21c9000;
      v15 = GameData_21c97c8;
      v16 = GameData_21c97d0;
      v17 = GameData_21c97e0;
      v18 = GameData_21c97e8;
      v19 = fw_memory_g_heap_manager_ptr;
      v61 = (__int64*)v2[8];
      do {
        v20 = v16 - v15;
        v21 = *v12;
        v22 = v16 == v15;
        v23 = v18 + v17;
        v24 = (v20 << 6) - 1;
        if (v22) {
          v24 = 0;
        }
        if (v24 == v23) {
          result = GameRoutine_66d660(&GameData_21c97c0);
          v15 = GameData_21c97c8;
          v23 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v15 + 8 * (v23 >> 9)) + 8 * (v23 & 0x1FF)) = v21;
        v25 = v14[253] + 1;
        v14[253] = v25;
        v26 = *(_QWORD*)(v21 + 24);
        if (v26 == 0) {
          goto LABEL_81;
        }
        v27 = *(_QWORD*)(v26 + 216);
        if (v27 != 0) {
          v28 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 224) = v27;
          if (*(_QWORD*)(v28 + 200) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(v28 + v29);
        }
        v30 = *(_QWORD*)(v26 + 192);
        if (v30 != 0) {
          v31 = v14;
          v32 = *(_QWORD*)(v26 + 200);
          if (v30 == v32) {
            v14 = v31;
          }
          else {
            do {
              v33 = *(_QWORD*)(v32 - 24);
              if (v33 != 0) {
                *(_QWORD*)(v32 - 16) = v33;
                if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                  v34 = 128;
                }
                else {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v34);
              }
              v35 = v32 - 48;
              v36 = *(_QWORD*)(v32 - 48);
              if (v36 != 0) {
                *(_QWORD*)(v32 - 40) = v36;
                if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                  v37 = 128;
                }
                else {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v37);
              }
              v32 -= 48;
            } while (v35 != v30);
            v38 = *(_QWORD*)(v26 + 192);
            v13 = v61;
            v14 = v31;
            *(_QWORD*)(v26 + 200) = v30;
            if (v38 == 0) {
              goto LABEL_49;
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v39);
        }
      LABEL_49:
        v40 = *(_QWORD*)(v26 + 168);
        if (v40 != 0) {
          v41 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 176) = v40;
          if (*(_QWORD*)(v41 + 200) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(v41 + v42);
        }
        v43 = *(_QWORD*)(v26 + 144);
        if (v43 != 0) {
          v44 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 152) = v43;
          if (*(_QWORD*)(v44 + 200) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(v44 + v45);
        }
        if ((*(_BYTE*)(v26 + 80) & 1) != 0 && *(_QWORD*)(v26 + 96) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v46);
        }
        if ((*(_BYTE*)(v26 + 56) & 1) != 0 && *(_QWORD*)(v26 + 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v47);
        }
        if ((*(_BYTE*)(v26 + 16) & 1) != 0 && *(_QWORD*)(v26 + 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v48 = 128;
          }
          else {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v48);
        }
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v49);
        *(_QWORD*)(v21 + 24) = 0;
        v25 = v14[253];
      LABEL_81:
        v15 = GameData_21c97c8;
        v16 = GameData_21c97d0;
        v17 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v50 = 0;
        }
        else {
          v50 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v18 = v25 - 1;
        GameData_21c97e8 = v25 - 1;
        if ((unsigned __int64)(v50 - (v25 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v51);
            v15 = GameData_21c97c8;
            v16 = GameData_21c97d0;
            v17 = GameData_21c97e0;
            v18 = GameData_21c97e8;
          }
          v16 -= 8;
          GameData_21c97d0 = v16;
        }
        ++v12;
      } while (v12 != v13);
    }
    v52 = GameData_21c9770;
    v53 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v53 = 0;
    }
    *((_BYTE*)v60 + 248) = 0;
    v54 = GameData_21c9788--;
    if ((unsigned __int64)(v53 - (v54 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v52 - 8) != 0) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55);
        v52 = GameData_21c9770;
      }
      GameData_21c9770 = v52 - 8;
    }
    v56 = GameData_21c97a0;
    v57 = GameData_21c97b8;
    v58 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v58 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v58 - (v57 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
        v56 = GameData_21c97a0;
      }
      GameData_21c97a0 = v56 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
