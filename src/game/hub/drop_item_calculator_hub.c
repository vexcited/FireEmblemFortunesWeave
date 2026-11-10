#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffd948[])();
extern __int64 (*game_hub_DropItemCalculatorHub_vtable[])();
extern __int64 GameData_22124f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_222e198;
void DropItemCalculatorHub_Destructor(_QWORD* a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_db6240(__int64*, _QWORD*);
__attribute__((swiftcall)) void game_hub_e009e0(PSEUDO_X8, _QWORD*,
                                                unsigned __int64*);
__int64* GameRoutine_fcf860(__int64**, __int64*);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_dbde80();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212ec00;
extern __int64 GameData_21c9f30;
extern __int64 GameData_220f950;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_fcf840();
void __attribute__((noreturn)) GameRoutine_fcfbb0();
void __attribute__((noreturn)) GameRoutine_fcfbd0();
void __attribute__((noreturn)) GameRoutine_fcfc90();
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 DropItemCalculatorHub_fcd580(_QWORD* a1);
void DropItemCalculatorHub_fce960(_QWORD* a1);

void DropItemCalculatorHub_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = a1[7];
  *a1 = game_hub_DropItemCalculatorHub_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[8];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[7];
    a1[8] = v1;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
    }
  }
  v8 = a1[4];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[5] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10);
  }
  v11 = a1[1];
  if (v11 != 0) {
    v12 = a1[2];
    if (v11 == v12) {
      goto LABEL_37;
    }
    do {
      v13 = *(_QWORD*)(v12 - 24);
      v14 = v12;
      if (v13 != 0) {
        *(_QWORD*)(v12 - 16) = v13;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
      }
      if ((*(_BYTE*)(v12 - 48) & 1) != 0 && *(_QWORD*)(v12 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
      }
      v12 -= 72;
      if ((*(_BYTE*)(v14 - 72) & 1) != 0 && *(_QWORD*)(v14 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
    } while (v12 != v11);
    v18 = a1[1];
    a1[2] = v11;
    if (v18 != 0) {
    LABEL_37:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  *a1 = GameData_1ffd948;
  if ((_QWORD*)GameData_22124f0 == a1) {
    GameData_22124f0 = 0;
    GameData_222e198 = 0;
  }
}

unsigned __int64 DropItemCalculatorHub_fcd580(_QWORD* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  char* v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  char* v11;
  char* v12;
  char* v13;
  unsigned __int64 result;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64** v44;
  __int64* v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 (*v52)(_QWORD);
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int8* v59;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int8* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int8* v69;
  char v70;
  _BOOL4 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int8* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int8* v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  int v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  char* v91;
  __int64 v92;
  _QWORD* v93;
  _QWORD* v94;
  _QWORD* v95;
  _QWORD* v96;
  unsigned __int64 v97;
  _QWORD* v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  _QWORD* v102;
  _QWORD* v103;
  __int64 v104;
  __int64 v105;
  char* v106;
  char* v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int8* v110;
  unsigned __int8* v111;
  unsigned __int64 v112;
  char* v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int8* v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  char* v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  char* v127;
  char* v128;
  char* v129;
  unsigned __int64 v130;
  char* v131;
  __int64 v132;
  __int64 v133;
  char* v134;
  __int64* v135;
  int v136;
  unsigned int v137;
  unsigned int v138;
  int v139;
  int v140;
  __int64 v141;
  unsigned __int64 v142;
  _QWORD* v143;
  __int64 v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  char* j;
  __int64 v160;
  char* v161;
  char* v162;
  unsigned __int64 v163;
  __int64 v164;
  char* v165;
  unsigned __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned int v174;
  __int64 v175;
  __int64 v176;
  int v177;
  __int64 v178;
  __int16* v179;
  __int64 v180;
  int v181;
  int v182;
  int v183;
  __int16* v184;
  int v185;
  __int64* v186;
  int v187;
  unsigned int v188;
  unsigned int v189;
  int v190;
  __int64 v191;
  __int64 v192;
  int v193;
  unsigned __int64 v194;
  __int16* v195;
  int v196;
  __int64 v197;
  char* v198;
  char* v199;
  char* v200;
  unsigned __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  char* v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  char* v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  char* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64** v221;
  __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  char v225;
  int v226;
  __int64 v227;
  _QWORD* v228;
  __int64 i;
  struct {
    __int64 v230;
    unsigned __int64 v231;
    char* v232;
  } v230_;
  struct {
    __int64 v233;
    unsigned __int64 v234;
    char* v235;
  } v233_;
  struct {
    __int64 v236;
    unsigned __int64 v237;
    char* v238;
  } v236_;
  struct {
    __int64 v239;
    unsigned __int64 v240;
    __int64 v241;
    char* v242;
    char* v243;
    unsigned __int64 v244;
  } v239_;
  struct {
    __int64 v245;
    __int64 v246;
    __int64 v247;
  } v245_;

  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    fw_text_String_CopyTerminated(
        &v230_.v230, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL),
        *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
    v3 = *(char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
    v230_.v230 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
    v230_.v231 = v2;
    v230_.v232 = v3;
  }
  if ((v230_.v230 & 1) != 0) {
    v4 = v230_.v231;
  }
  else {
    v4 = (unsigned __int64)(unsigned __int8)v230_.v230 >> 1;
  }
  if ((v230_.v230 & 1) != 0) {
    v5 = v230_.v232;
  }
  else {
    v5 = (char*)&v230_.v230 + 1;
  }
  v6 = v4 + 3;
  if (v4 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_398:
    String_60a1d0();
  }
  if (v6 > 0x16) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    v236_.v237 = v4 + 3;
    v236_.v238 = (char*)v8;
    v236_.v236 = v9 | 1;
    v7 = v9 | 1;
  }
  else {
    v7 = 2 * v6;
    v8 = 0;
    v236_.v237 = 0;
    v236_.v238 = nullptr;
    v236_.v236 = (unsigned __int8)(2 * v6);
  }
  v10 = (v7 & 1) == 0;
  if ((v7 & 1) != 0) {
    v11 = (char*)v8;
  }
  else {
    v11 = (char*)&v236_.v236 + 1;
  }
  v11[2] = 95;
  *(_WORD*)v11 = 21060;
  if (v10) {
    v12 = (char*)&v236_.v236 + 4;
  }
  else {
    v12 = (char*)(v8 + 3);
  }
  if (v4 != 0) {
    memmove(v12, v5, v4);
  }
  v12[v4] = 0;
  if ((v236_.v236 & 1) != 0) {
    v13 = v236_.v238;
  }
  else {
    v13 = (char*)&v236_.v236 + 1;
  }
  result = game_HashString((__int64)v13);
  if (result == 0) {
    goto LABEL_52;
  }
  v15 = *(_QWORD*)(GameData_21c9f30 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c9f30 + 112) == 0) {
    goto LABEL_52;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = result;
    if (result >= v15) {
      v18 = result % v15;
    }
  }
  else {
    v18 = v17 & result;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f30 + 88) + 8 * v18);
  if (v19 != nullptr && (v20 = (_QWORD*)*v19) != nullptr) {
    if ((v15 & v17) == 0) {
      while (1) {
        v22 = v20[1];
        if (v22 == result) {
          if (v20[2] == result) {
            goto LABEL_394;
          }
        }
        else if ((v22 & v17) != v18) {
          goto LABEL_52;
        }
        v20 = (_QWORD*)*v20;
        v222 = 0;
        if (v20 == nullptr) {
          goto LABEL_55;
        }
      }
    }
    do {
      v21 = v20[1];
      if (v21 == result) {
        if (v20[2] == result) {
        LABEL_394:
          v222 = v20[3];
          if ((v236_.v236 & 1) != 0) {
            goto LABEL_56;
          }
          goto LABEL_60;
        }
      }
      else {
        if (v21 >= v15) {
          v21 %= v15;
        }
        if (v21 != v18) {
          goto LABEL_52;
        }
      }
      v20 = (_QWORD*)*v20;
    } while (v20 != nullptr);
    v222 = 0;
  LABEL_55:
    if ((v236_.v236 & 1) == 0) {
      goto LABEL_60;
    }
  }
  else {
  LABEL_52:
    v222 = 0;
    if ((v236_.v236 & 1) == 0) {
      goto LABEL_60;
    }
  }
LABEL_56:
  if (v236_.v238 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
  }
LABEL_60:
  if (v222 != 0) {
    v24 = a1[1];
    v25 = (char*)a1[4];
    v221 = (__int64**)(a1 + 1);
    a1[5] = v25;
    v228 = a1;
    for (i = a1[2]; v24 != i; v24 += 72) {
      v27 = *(_QWORD*)(v24 + 48);
      v26 = *(_QWORD*)(v24 + 56);
      while (v27 != v26) {
        v28 = a1[6];
        if ((unsigned __int64)v25 < v28) {
          *(_QWORD*)v25 = *(_QWORD*)(v27 + 8);
          v25 += 8;
        }
        else {
          v29 = a1[4];
          v30 = &v25[-v29];
          v31 = (__int64)&v25[-v29] >> 3;
          v32 = v31 + 1;
          if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
            goto LABEL_396;
          }
          v33 = v28 - v29;
          if (v33 >> 2 > v32) {
            v32 = v33 >> 2;
          }
          if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
            v34 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v34 = v32;
          }
          if (v34 != 0) {
            if (v34 >> 61 != 0) {
              goto LABEL_397;
            }
            v35 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                 8 * v34, 16, 0);
          }
          else {
            v35 = 0;
          }
          v36 = v35 + 8 * v34;
          v37 = (__int64)&v30[v35 + -8 * v31];
          *(_QWORD*)&v30[v35] = *(_QWORD*)(v27 + 8);
          v25 = &v30[v35 + 8];
          LOBYTE(result) = memcpy(v37, v29, v30);
          v228[4] = v37;
          v228[5] = v25;
          v228[6] = v36;
          a1 = v228;
          if (v29 != 0) {
            v38 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v38 = 56;
            }
            LOBYTE(result) = nn_mem_StandardAllocator_Free_alt1(
                fw_memory_g_heap_manager + v38);
          }
        }
        a1[5] = v25;
        v27 += 24;
      }
    }
    v39 = **(_QWORD**)(v222 + 40);
    v40 = (_QWORD*)GameData_212dbb8[0];
    v41 = *(_QWORD*)(*(_QWORD*)(v222 + 40) + 8LL) - v39;
    if ((int)((unsigned __int64)v41 >> 3) >= 1) {
      v42 = 0;
      while (1) {
        if (v42 >= v41 >> 3) {
          GameRoutine_fcfc90();
        }
        v43 = *(_QWORD*)(v39 + 8 * v42);
        v223 = v42;
        if (v43 == 0 || *(_BYTE*)(v43 + 88) == 0) {
          goto LABEL_85;
        }
        v44 = *(__int64***)(v43 + 24);
        v224 = v43;
        v46 = *v44;
        v45 = v44[1];
        if (v45 != *v44) {
          v47 = 0;
          do {
            v48 = *v46;
            v49 = v46[1];
            if (v49 == *v46) {
            LABEL_91:
              ++v47;
            }
            else {
              while (1) {
                if (*(_QWORD*)v48 != 0) {
                  v50 = game_GameModeData_instance_;
                  if (game_GameModeData_instance_ != 0) {
                    v51 = game_GameVariableTable_Find(
                        *(_QWORD**)(game_GameModeData_instance_ + 48),
                        (unsigned __int64*)v48);
                    if (v51 != 0) {
                      v52 = *(__int64 (**)(_QWORD))(v51 + 72);
                      v53 = *(_QWORD*)(v51 + 80);
                      v54 = (_QWORD*)(v51 + (v53 >> 1));
                      if ((v53 & 1) != 0) {
                        v52 = *(__int64 (**)(_QWORD))((char*)v52 + *v54);
                      }
                      LOBYTE(result) = v52(v54);
                    }
                    else {
                      LOBYTE(result) = 1;
                    }
                  }
                  if (*(_BYTE*)(v48 + 16) != ((v50 == 0) | result & 1)) {
                    break;
                  }
                }
                v48 += 24;
                if (v48 == v49) {
                  goto LABEL_91;
                }
              }
            }
            v46 += 6;
          } while (v46 != v45);
          v43 = v224;
          if (v47 == 0) {
            goto LABEL_85;
          }
        }
        v55 = (_QWORD*)*v40;
        v227 = *(_QWORD*)(v43 + 32);
        result = strlen(v227);
        if (result >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_398;
        }
        v56 = result;
        if (result >= 0x17) {
          break;
        }
        v57 = (char*)&v236_.v236 + 1;
        LOBYTE(v236_.v236) = 2 * result;
        if (result != 0) {
          goto LABEL_113;
        }
      LABEL_114:
        v57[v56] = 0;
        v59 = (unsigned __int8*)a1[1];
        v60 = (unsigned __int8*)a1[2];
        if (v59 == v60) {
          v70 = v236_.v236;
          goto LABEL_142;
        }
        if ((v55[8] & 1) != 0) {
          v61 = v55[9];
        }
        else {
          v61 = *((_BYTE*)v55 + 64) >> 1;
        }
        if ((v55[8] & 1) == 0) {
          v225 = v236_.v236;
          if ((v236_.v236 & 1) != 0) {
            v62 = v236_.v237;
          }
          else {
            v62 = (unsigned __int64)(unsigned __int8)v236_.v236 >> 1;
          }
          if ((v236_.v236 & 1) != 0) {
            v63 = v236_.v238;
          }
          else {
            v63 = (char*)&v236_.v236 + 1;
          }
          while (1) {
            v64 = *v59;
            v65 = *((_QWORD*)v59 + 1);
            if ((v64 & 1) == 0) {
              v65 = v64 >> 1;
            }
            if (v65 == v61) {
              v66 = (v64 & 1) != 0 ? *((unsigned __int8**)v59 + 2) : v59 + 1;
              LODWORD(result) = memcmp(v66, (char*)v55 + 65, v61);
              if ((_DWORD)result == 0) {
                v67 = v59[24];
                v68 = *((_QWORD*)v59 + 4);
                if ((v67 & 1) == 0) {
                  v68 = v67 >> 1;
                }
                if (v68 == v62) {
                  v69 =
                      (v67 & 1) != 0 ? *((unsigned __int8**)v59 + 5) : v59 + 25;
                  LODWORD(result) = memcmp(v69, v63, v62);
                  if ((_DWORD)result == 0) {
                    break;
                  }
                }
              }
            }
            v59 += 72;
            if (v59 == v60) {
              goto LABEL_167;
            }
          }
          v70 = v225;
        LABEL_142:
          v71 = v59 == v60;
          v72 = v224;
          if ((v70 & 1) == 0) {
            goto LABEL_172;
          }
        LABEL_168:
          if (v236_.v238 != nullptr) {
            v82 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v82 = 56;
            }
            LOBYTE(result) = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v82);
          }
          goto LABEL_172;
        }
        v73 = v55[10];
        v225 = v236_.v236;
        if ((v236_.v236 & 1) != 0) {
          v74 = v236_.v237;
        }
        else {
          v74 = (unsigned __int64)(unsigned __int8)v236_.v236 >> 1;
        }
        if ((v236_.v236 & 1) != 0) {
          v75 = v236_.v238;
        }
        else {
          v75 = (char*)&v236_.v236 + 1;
        }
        do {
          v76 = *v59;
          v77 = *((_QWORD*)v59 + 1);
          if ((v76 & 1) == 0) {
            v77 = v76 >> 1;
          }
          if (v77 == v61) {
            v78 = (v76 & 1) != 0 ? *((unsigned __int8**)v59 + 2) : v59 + 1;
            LODWORD(result) = memcmp(v78, v73, v61);
            if ((_DWORD)result == 0) {
              v79 = v59[24];
              v80 = *((_QWORD*)v59 + 4);
              if ((v79 & 1) == 0) {
                v80 = v79 >> 1;
              }
              if (v80 == v74) {
                v81 = (v79 & 1) != 0 ? *((unsigned __int8**)v59 + 5) : v59 + 25;
                LODWORD(result) = memcmp(v81, v75, v74);
                if ((_DWORD)result == 0) {
                  a1 = v228;
                  v70 = v225;
                  goto LABEL_142;
                }
              }
            }
          }
          v59 += 72;
        } while (v59 != v60);
        a1 = v228;
      LABEL_167:
        v71 = true;
        v72 = v224;
        if ((v225 & 1) != 0) {
          goto LABEL_168;
        }
      LABEL_172:
        if (v71) {
          v83 = v55 + 8;
          v239_.v243 = nullptr;
          v239_.v244 = 0;
          v239_.v241 = 0;
          v239_.v242 = nullptr;
          v239_.v239 = 0;
          v239_.v240 = 0;
          v236_.v237 = 0;
          v236_.v238 = nullptr;
          v236_.v236 = 0;
          if (&v236_.v236 != v55 + 8) {
            if ((*(_BYTE*)v83 & 1) != 0) {
              GameRoutine_64df20(&v236_.v236, v55[10], v55[9]);
            }
            else {
              v84 = *v83;
              v85 = v55[9];
              v86 = v55[10];
              v236_.v236 = v84;
              v236_.v237 = v85;
              v236_.v238 = (char*)v86;
            }
          }
          GameRoutine_60a020((__int64)&v239_.v239, v227);
          if (*(_BYTE*)(v72 + 88) != 0) {
            v87 = 0;
            do {
              v89 = strlen(v227);
              if (v89 >= 0xFFFFFFFFFFFFFFF7LL) {
                goto LABEL_398;
              }
              v90 = v89;
              v226 = v87;
              if (v89 >= 0x17) {
                if ((v89 | 7) == 0x17) {
                  v92 = 26;
                }
                else {
                  v92 = (v89 | 7) + 1;
                }
                v91 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v92, 16, 0);
                v233_.v234 = v90;
                v233_.v235 = v91;
                v233_.v233 = v92 | 1;
              }
              else {
                v91 = (char*)&v233_.v233 + 1;
                LOBYTE(v233_.v233) = 2 * v89;
                if (v89 == 0) {
                  goto LABEL_191;
                }
              }
              memmove(v91, v227, v90);
            LABEL_191:
              v91[v90] = 0;
              v93 = (_QWORD*)*v40;
              v245_.v245 = 0;
              v245_.v246 = 0;
              v245_.v247 = 0;
              v94 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 32LL);
              v95 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 40LL);
              if (v94 == v95) {
                goto LABEL_264;
              }
              v96 = v94 + 3;
              do {
                v98 = v96 - 3;
                v97 = *((unsigned __int8*)v96 - 24);
                if ((v97 & 1) != 0) {
                  v99 = *(v96 - 2);
                }
                else {
                  v99 = v97 >> 1;
                }
                v100 = *((unsigned __int8*)v93 + 88);
                v101 = v93[12];
                if ((v100 & 1) == 0) {
                  v101 = v100 >> 1;
                }
                if (v99 == v101) {
                  v102 = (v97 & 1) != 0 ? (_QWORD*)*(v96 - 1)
                                        : (_QWORD*)((char*)v96 - 23);
                  v103 = (v100 & 1) != 0 ? (_QWORD*)v93[13]
                                         : (_QWORD*)((char*)v93 + 89);
                  if ((unsigned int)memcmp(v102, v103, v99) == 0) {
                    GameRoutine_db6240(&v245_.v245, v96);
                  }
                }
                v96 += 5;
              } while (v98 + 5 != v95);
              v104 = v245_.v245;
              v105 = v245_.v246;
              if (v245_.v245 == v245_.v246) {
              LABEL_264:
                v106 = nullptr;
                v107 = nullptr;
                goto LABEL_311;
              }
              v106 = nullptr;
              v107 = nullptr;
              v108 = 0;
              do {
                v109 = *(_QWORD*)v104;
                v111 = *(unsigned __int8**)(*(_QWORD*)v104 + 112LL);
                v110 = *(unsigned __int8**)(*(_QWORD*)v104 + 120LL);
                if (v111 != v110) {
                  if ((v233_.v233 & 1) != 0) {
                    v112 = v233_.v234;
                  }
                  else {
                    v112 = (unsigned __int64)(unsigned __int8)v233_.v233 >> 1;
                  }
                  if ((v233_.v233 & 1) != 0) {
                    v113 = v233_.v235;
                  }
                  else {
                    v113 = (char*)&v233_.v233 + 1;
                  }
                  while (1) {
                    v114 = *v111;
                    v115 = *((_QWORD*)v111 + 1);
                    if ((v114 & 1) == 0) {
                      v115 = v114 >> 1;
                    }
                    if (v115 == v112) {
                      v116 = (v114 & 1) != 0 ? *((unsigned __int8**)v111 + 2)
                                             : v111 + 1;
                      if ((unsigned int)memcmp(v116, v113, v112) == 0) {
                        break;
                      }
                    }
                    v111 += 24;
                    if (v111 == v110) {
                      goto LABEL_211;
                    }
                  }
                }
                if (v111 != v110) {
                  v117 = *(_QWORD*)(v109 + 56);
                  if ((unsigned __int64)v107 < v108) {
                    *(_QWORD*)v107 = v117;
                    v107 += 8;
                  }
                  else {
                    v118 = (char*)(v107 - v106);
                    v119 = (v107 - v106) >> 3;
                    v120 = v119 + 1;
                    if ((unsigned __int64)(v119 + 1) >> 61 != 0) {
                      goto LABEL_396;
                    }
                    if ((__int64)(v108 - (_QWORD)v106) >> 2 > v120) {
                      v120 = (__int64)(v108 - (_QWORD)v106) >> 2;
                    }
                    if (v108 - (unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v121 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v121 = v120;
                    }
                    if (v121 != 0) {
                      if (v121 >> 61 != 0) {
                        goto LABEL_397;
                      }
                      v122 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v121, 16,
                          0);
                    }
                    else {
                      v122 = 0;
                    }
                    v108 = v122 + 8 * v121;
                    v123 = (char*)(v107 - v106);
                    v124 = (__int64)&v118[v122 + -8 * v119];
                    *(_QWORD*)&v118[v122] = v117;
                    v107 = &v118[v122 + 8];
                    memcpy(v124, v106, v123);
                    if (v106 != nullptr) {
                      v125 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v125 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v125);
                    }
                    v106 = (char*)v124;
                  }
                }
              LABEL_211:
                v104 += 16;
              } while (v104 != v105);
              v126 = v228;
              v127 = v106;
              v40 = (_QWORD*)GameData_212dbb8[0];
              if (v106 != v107) {
                v128 = (char*)v228[4];
                v129 = (char*)v228[5];
                if (v128 != v129) {
                  v127 = v106;
                  v130 = v129 - v128 - 8;
                  while (1) {
                    v132 = *(_QWORD*)v127;
                    v131 = (char*)v228[4];
                    if ((v130 & 0x18) == 0x18) {
                    LABEL_254:
                      if (v130 < 0x18) {
                        goto LABEL_249;
                      }
                      v131 += 16;
                      while (1) {
                        if (*((_QWORD*)v131 - 2) == v132) {
                          v131 -= 16;
                          goto LABEL_248;
                        }
                        if (*((_QWORD*)v131 - 1) == v132) {
                          v131 -= 8;
                          goto LABEL_248;
                        }
                        if (*(_QWORD*)v131 == v132) {
                          goto LABEL_248;
                        }
                        if (*((_QWORD*)v131 + 1) == v132) {
                          break;
                        }
                        v134 = v131 + 16;
                        v131 += 32;
                        if (v134 == v129) {
                          goto LABEL_249;
                        }
                      }
                      v131 += 8;
                    }
                    else {
                      v133 =
                          ((unsigned __int8)((unsigned int)v130 >> 3) + 1) & 3;
                      v131 = (char*)v228[4];
                      while (*(_QWORD*)v131 != v132) {
                        v131 += 8;
                        if (--v133 == 0) {
                          goto LABEL_254;
                        }
                      }
                    }
                  LABEL_248:
                    if (v131 != v129) {
                      goto LABEL_283;
                    }
                  LABEL_249:
                    v127 += 8;
                    if (v127 == v107) {
                      goto LABEL_310;
                    }
                  }
                }
                v127 = v107;
              }
            LABEL_283:
              if (v127 == v107) {
                goto LABEL_310;
              }
              for (j = v127 + 8; j != v107; j += 8) {
                v160 = *(_QWORD*)j;
                v162 = (char*)v228[4];
                v161 = (char*)v228[5];
                if (v162 != v161) {
                  v163 = v161 - v162 - 8;
                  if ((~(_BYTE)v163 & 0x18) == 0) {
                  LABEL_293:
                    if (v163 >= 0x18) {
                      v162 += 16;
                      while (1) {
                        if (*((_QWORD*)v162 - 2) == v160) {
                          if (v162 - 16 != v161) {
                            goto LABEL_286;
                          }
                          goto LABEL_285;
                        }
                        if (*((_QWORD*)v162 - 1) == v160) {
                          v162 -= 8;
                          goto LABEL_304;
                        }
                        if (*(_QWORD*)v162 == v160) {
                          goto LABEL_304;
                        }
                        if (*((_QWORD*)v162 + 1) == v160) {
                          break;
                        }
                        v165 = v162 + 16;
                        v162 += 32;
                        if (v165 == v161) {
                          goto LABEL_285;
                        }
                      }
                      if (v162 + 8 != v161) {
                        continue;
                      }
                    }
                  LABEL_285:
                    *(_QWORD*)v127 = v160;
                    v127 += 8;
                    continue;
                  }
                  v164 = ((unsigned __int8)((unsigned int)v163 >> 3) + 1) & 3;
                  while (*(_QWORD*)v162 != v160) {
                    v162 += 8;
                    if (--v164 == 0) {
                      goto LABEL_293;
                    }
                  }
                }
              LABEL_304:
                if (v162 == v161) {
                  goto LABEL_285;
                }
              LABEL_286:;
              }
              if (v127 != v107) {
                v107 = v127;
              }
            LABEL_310:
              if (v107 != v106) {
                nn_os_LockMutex(&game_g_random_mutex);
                v135 = game_map_MapRandom_instance__ptr[0];
                v136 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((_UNKNOWN**)0x8LL));
                v137 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v138 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v135 + 1) = v136;
                v139 = (v138 >> 8) ^ (v137 >> 19) ^ v138 ^ v137;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v135) = v137;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v135 + 4) =
                    v139;
                v140 = v139 & 0x7FFFFFFF;
                nn_os_UnlockMutex(&game_g_random_mutex);
                v141 = *(
                    _QWORD*)&v106[8 * (v140 %
                                       (int)((unsigned __int64)(v107 - v106) >>
                                             3))];
                v143 = (_QWORD*)v228[5];
                v142 = v228[6];
                if ((unsigned __int64)v143 < v142) {
                  *v143 = v141;
                  v144 = (__int64)(v143 + 1);
                LABEL_281:
                  v156 = v224;
                  v126[5] = v144;
                  v157 = v141 & 0xFFFFFFFFFFFFFF00LL;
                  v158 = (unsigned __int8)v141;
                  goto LABEL_312;
                }
                v145 = v228[4];
                v146 = (char*)v143 - v145;
                v147 = ((__int64)v143 - v145) >> 3;
                v148 = v147 + 1;
                if ((unsigned __int64)(v147 + 1) >> 61 == 0) {
                  v149 = v142 - v145;
                  if (v149 >> 2 > v148) {
                    v148 = v149 >> 2;
                  }
                  if ((unsigned __int64)v149 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v150 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v150 = v148;
                  }
                  if (v150 == 0) {
                    v151 = 0;
                  LABEL_277:
                    v152 = v151 + 8 * v150;
                    v153 = (char*)v143 - v145;
                    v154 = (__int64)&v146[v151 + -8 * v147];
                    *(_QWORD*)&v146[v151] = v141;
                    v144 = (__int64)&v146[v151 + 8];
                    memcpy(v154, v145, v153);
                    v228[4] = v154;
                    v228[5] = v144;
                    v126 = v228;
                    v228[6] = v152;
                    if (v145 != 0) {
                      v155 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v155 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v155);
                    }
                    goto LABEL_281;
                  }
                  if (v150 >> 61 == 0) {
                    v151 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v150, 16,
                        0);
                    goto LABEL_277;
                  }
                LABEL_397:
                  GameRoutine_60a210();
                }
              LABEL_396:
                GameRoutine_65c760();
              }
            LABEL_311:
              v156 = v224;
              v157 = 0;
              v158 = 0;
              v166 = 0;
              v167 = 0;
              if (v106 != nullptr) {
              LABEL_312:
                v168 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v168 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v168);
                v166 = v157;
                v167 = v158;
              }
              v169 = v245_.v245;
              if (v245_.v245 != 0) {
                v170 = v245_.v246;
                if (v245_.v245 == v245_.v246) {
                  goto LABEL_323;
                }
                do {
                  v171 = *(_QWORD*)(v170 - 8);
                  if (v171 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171);
                    std___1___shared_weak_count___release_weak(v171);
                  }
                  v170 -= 16;
                } while (v170 != v169);
                v245_.v246 = v169;
                if (v245_.v245 != 0) {
                LABEL_323:
                  v172 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v172 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v172);
                }
              }
              if ((v233_.v233 & 1) != 0 && v233_.v235 != nullptr) {
                v173 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v173 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v173);
              }
              v174 = *(unsigned __int16*)(v156 + 72);
              if (*(_WORD*)(v156 + 72) == 0) {
                goto LABEL_181;
              }
              v175 = *(_QWORD*)(v156 + 80);
              if (v174 >= 8) {
                v179 = (__int16*)(v175 + 8);
                v180 = 0;
                v177 = 0;
                do {
                  v180 -= 8;
                  v181 = v179[3];
                  v182 = v177 + *(v179 - 4) + *(v179 - 3) + *(v179 - 2) +
                         *(v179 - 1) + *v179 + v179[1];
                  v183 = v179[2];
                  v179 += 8;
                  v177 = v182 + v183 + v181;
                } while (-(__int64)((unsigned __int16)v174 & 0xFFF8) != v180);
                v176 = -v180;
                v178 = v174 & 7;
                if (v178 == 0) {
                  goto LABEL_340;
                }
              LABEL_338:
                v184 = (__int16*)(v175 + 2 * v176);
                do {
                  v185 = *v184++;
                  --v178;
                  v177 += v185;
                } while (v178 != 0);
                goto LABEL_340;
              }
              v176 = 0;
              v177 = 0;
              v178 = v174 & 7;
              if (v178 != 0) {
                goto LABEL_338;
              }
            LABEL_340:
              if (v177 == 0) {
                goto LABEL_181;
              }
              nn_os_LockMutex(&game_g_random_mutex);
              v186 = game_map_MapRandom_instance__ptr[0];
              v156 = v224;
              v187 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL));
              v188 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v189 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                     (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v186 + 1) = v187;
              v190 = (v189 >> 8) ^ (v188 >> 19) ^ v189 ^ v188;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186) = v188;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v186 + 4) = v190;
              nn_os_UnlockMutex(&game_g_random_mutex);
              v191 = *(unsigned __int16*)(v224 + 56);
              if (*(_WORD*)(v224 + 56) == 0) {
                goto LABEL_181;
              }
              v192 = 8;
              v193 = 0;
              v194 = v167 | v166;
              v195 = *(__int16**)(v224 + 80);
              while (1) {
                v196 = *v195++;
                v193 += v196;
                if ((float)((float)((float)(unsigned __int16)v190 /
                                    0x1.fffe000000000p+15f) *
                            (float)v177) < (float)v193) {
                  break;
                }
                v192 += 16;
                if (--v191 == 0) {
                  goto LABEL_181;
                }
              }
              if (v107 == v106) {
                goto LABEL_181;
              }
              v197 = **(_QWORD**)(*(_QWORD*)(v224 + 64) + v192);
              v198 = v239_.v243;
              if ((unsigned __int64)v239_.v243 < v239_.v244) {
                *(_QWORD*)v239_.v243 = v197;
                *((_QWORD*)v198 + 1) = v194;
                v88 = (__int64)(v198 + 24);
                *((_QWORD*)v198 + 2) = 0;
                goto LABEL_180;
              }
              v199 = v239_.v242;
              v200 = (char*)(v239_.v243 - v239_.v242);
              v201 =
                  1 - 0x5555555555555555LL * ((v239_.v243 - v239_.v242) >> 3);
              if (v201 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_400;
              }
              if (0x5555555555555556LL *
                      ((__int64)(v239_.v244 - (_QWORD)v239_.v242) >> 3) >
                  v201) {
                v201 = 0x5555555555555556LL *
                       ((__int64)(v239_.v244 - (_QWORD)v239_.v242) >> 3);
              }
              if (0xAAAAAAAAAAAAAAABLL *
                      ((__int64)(v239_.v244 - (_QWORD)v239_.v242) >> 3) >=
                  0x555555555555555LL) {
                v202 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v202 = v201;
              }
              if (v202 == 0) {
                v203 = 0;
                goto LABEL_358;
              }
              if (v202 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_397;
              }
              v203 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    24 * v202, 16, 0);
            LABEL_358:
              v204 = &v200[v203];
              v205 = v203 + 24 * v202;
              *(_QWORD*)v204 = v197;
              *((_QWORD*)v204 + 1) = v194;
              *((_QWORD*)v204 + 2) = 0;
              v88 = (__int64)&v200[v203 + 24];
              memcpy(v203, v199, v200);
              v239_.v242 = (char*)v203;
              v239_.v243 = (char*)v88;
              v239_.v244 = v205;
              if (v199 != nullptr) {
                v206 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v206 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v206);
              }
            LABEL_180:
              v239_.v243 = (char*)v88;
            LABEL_181:
              a1 = v228;
              v87 = v226 + 1;
            } while (v226 + 1 < (unsigned int)*(unsigned __int8*)(v156 + 88));
          }
          v207 = (__int64*)a1[2];
          if ((unsigned __int64)v207 >= a1[3]) {
            result = (unsigned __int64)GameRoutine_fcf860(v221, &v236_.v236);
          }
          else {
            if ((v236_.v236 & 1) != 0) {
              fw_text_String_CopyTerminated((__int64*)a1[2],
                                            (__int64)v236_.v238, v236_.v237);
              if ((v239_.v239 & 1) == 0) {
                goto LABEL_368;
              }
            LABEL_365:
              fw_text_String_CopyTerminated(v207 + 3, v239_.v241, v239_.v240);
            }
            else {
              v208 = v236_.v236;
              v209 = (__int64)v236_.v238;
              v207[1] = v236_.v237;
              v207[2] = v209;
              *v207 = v208;
              if ((v239_.v239 & 1) != 0) {
                goto LABEL_365;
              }
            LABEL_368:
              v210 = v239_.v239;
              v211 = v239_.v241;
              v207[4] = v239_.v240;
              v207[5] = v211;
              v207[3] = v210;
            }
            v207[7] = 0;
            v207[8] = 0;
            v207[6] = 0;
            v212 = v239_.v242;
            v213 = v239_.v243 - v239_.v242;
            if (v239_.v243 != v239_.v242) {
              if (0xAAAAAAAAAAAAAAABLL * (v213 >> 3) > 0xAAAAAAAAAAAAAAALL) {
              LABEL_400:
                GameRoutine_fcf840();
              }
              v214 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                  v239_.v243 - v239_.v242, 16, 0);
              v215 = v214 + v213;
              v207[6] = v214;
              v207[7] = v214;
              v207[8] = v214 + v213;
              memcpy(v214, v212, v213 - 7);
              v207[7] = v215;
            }
            result = (unsigned __int64)(v207 + 9);
          }
          v216 = v239_.v242;
          a1[2] = result;
          if (v216 != nullptr) {
            v239_.v243 = v216;
            v217 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v217 = 56;
            }
            LOBYTE(result) = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v217);
          }
          if ((v239_.v239 & 1) != 0 && v239_.v241 != 0) {
            v218 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v218 = 56;
            }
            LOBYTE(result) = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v218);
          }
          if ((v236_.v236 & 1) != 0 && v236_.v238 != nullptr) {
            v219 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v219 = 56;
            }
            LOBYTE(result) = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v219);
          }
        }
      LABEL_85:
        v42 = v223 + 1;
        v39 = **(_QWORD**)(v222 + 40);
        v41 = *(_QWORD*)(*(_QWORD*)(v222 + 40) + 8LL) - v39;
        if ((__int64)(v223 + 1) >= (int)((unsigned __int64)v41 >> 3)) {
          goto LABEL_387;
        }
      }
      if ((result | 7) == 0x17) {
        v58 = 26;
      }
      else {
        v58 = (result | 7) + 1;
      }
      v57 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v58,
                                                  16, 0);
      v236_.v237 = v56;
      v236_.v238 = v57;
      v236_.v236 = v58 | 1;
    LABEL_113:
      LOBYTE(result) = memmove(v57, v227, v56);
      goto LABEL_114;
    }
  LABEL_387:
    result = GameRoutine_dbde80();
  }
  if ((v230_.v230 & 1) != 0 && v230_.v232 != nullptr) {
    v220 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v220 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v220);
  }
  return result;
}

void DropItemCalculatorHub_fce960(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64** v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64** v47;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;

  v1 = a1[1];
  v2 = (__int64*)a1[2];
  if ((__int64*)v1 != v2) {
    v3 = (__int64*)(v1 + 48);
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = *(_QWORD*)GameData_212dbb8[0];
    v9 = *(_QWORD*)GameData_212dbb8[0] + 65LL;
    v45 = v9;
    do {
      v11 = v3 - 6;
      v10 = *((unsigned __int8*)v3 - 48);
      if ((v10 & 1) != 0) {
        v12 = *(v3 - 5);
      }
      else {
        v12 = v10 >> 1;
      }
      v13 = *(unsigned __int8*)(v8 + 64);
      v14 = *(_QWORD*)(v8 + 72);
      if ((v13 & 1) == 0) {
        v14 = v13 >> 1;
      }
      if (v12 == v14) {
        v15 = (v10 & 1) != 0 ? (__int64*)*(v3 - 4) : (__int64*)((char*)v3 - 47);
        v16 = (v13 & 1) != 0 ? *(_QWORD*)(v8 + 80) : v9;
        if ((unsigned int)memcmp(v15, v16, v12) == 0) {
          if ((unsigned __int64)v5 < v6) {
            *v5++ = v3;
          }
          else {
            v17 = (__int64)v5 - v7;
            v18 = (v17 >> 3) + 1;
            if (v18 >> 61 != 0) {
              GameRoutine_fcfbb0();
            }
            v19 = v7;
            if ((__int64)(v6 - v7) >> 2 > v18) {
              v18 = (__int64)(v6 - v7) >> 2;
            }
            if (v6 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
              v20 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v20 = v18;
            }
            if (v20 != 0) {
              if (v20 >> 61 != 0) {
              LABEL_66:
                GameRoutine_60a210();
              }
              v21 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
            }
            else {
              v21 = 0;
            }
            v22 = v21 + 8 * v20;
            v23 = v7;
            v7 = v21 + v17 - 8 * (v17 >> 3);
            *(_QWORD*)(v21 + v17) = v3;
            v24 = v21 + v17 + 8;
            memcpy(v7, v23, v17);
            if (v19 != 0) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
            }
            v5 = (__int64**)v24;
            v6 = v22;
            v9 = v45;
          }
        }
      }
      v3 += 9;
    } while (v11 + 9 != v2);
    v46 = v7;
    if ((__int64**)v7 != v5) {
      v26 = (__int64**)v7;
      v47 = v5;
      do {
        v27 = **v26;
        v28 = (*v26)[1];
        while (v27 != v28) {
          if ((*(_BYTE*)(v27 + 16) & 1) != 0) {
            goto LABEL_38;
          }
          game_hub_e009e0((void*)(&v48_.v48), (_QWORD*)GameData_220f950,
                          (unsigned __int64*)v27);
          v29 = (_QWORD*)a1[8];
          v30 = a1[9];
          if ((unsigned __int64)v29 >= v30) {
            v32 = a1[7];
            v33 = (__int64)v29 - v32;
            v34 = ((__int64)v29 - v32) >> 4;
            v35 = v34 + 1;
            if ((unsigned __int64)(v34 + 1) >> 60 != 0) {
              GameRoutine_fcfbd0();
            }
            v36 = v30 - v32;
            if (v36 >> 3 > v35) {
              v35 = v36 >> 3;
            }
            if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF0LL) {
              v37 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v37 = v35;
            }
            if (v37 >> 60 != 0) {
              goto LABEL_66;
            }
            v38 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v37, 16, 0);
            v31 = v48_.v49;
            v39 = (_QWORD*)(v38 + v33);
            *v39 = v48_.v48;
            v39[1] = v31;
            if (v31 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                        memory_order_relaxed);
              v32 = a1[7];
              v33 = a1[8] - v32;
              v34 = v33 >> 4;
            }
            v40 = &v39[-2 * v34];
            v41 = v38 + 16 * v37;
            v42 = v39 + 2;
            memcpy(v40, v32, v33);
            a1[7] = v40;
            a1[8] = v42;
            a1[9] = v41;
            if (v32 != 0) {
              v43 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v43 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
              v31 = v48_.v49;
            }
            a1[8] = v42;
            if (v31 != 0) {
            LABEL_60:
              std___1___shared_weak_count___release_weak(v31);
            }
          }
          else {
            *v29 = v48_.v48;
            v31 = v48_.v49;
            v29[1] = v48_.v49;
            if (v31 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                        memory_order_relaxed);
            }
            a1[8] = v29 + 2;
            if (v31 != 0) {
              goto LABEL_60;
            }
          }
        LABEL_38:
          v27 += 24;
        }
        ++v26;
      } while (v26 != v47);
    }
    if (v46 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
    }
  }
}

#pragma GCC visibility pop
