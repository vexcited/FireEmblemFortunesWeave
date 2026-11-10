#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterModel_106fae0(__int64);
__int64 CharacterModel_106fdc0(__int64*);
__int64 CharacterModel_106fe40(__int64 result);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2006540[])();
extern __int64 (*GameData_20065c0[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c690;
extern char GameData_1a9f09e;
__int64 CharacterAppearance_10735d0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6);
__int64 game_character_CharacterAppearance_LoadAsync(__int64 a1);
__int64 CharacterAppearance_1074940(__int64 a1);
__int64 CharacterAppearance_1074de0(__int64 a1);
__int64 game_character_CharacterAppearance_LoadAsync_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
__int64 game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
__attribute__((swiftcall)) void GameRoutine_1076700(PSEUDO_X8, unsigned __int8*,
                                                    unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_1076d60(PSEUDO_X8, _QWORD, _QWORD);
__int64 CharacterAppearance_1075a00_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "CharacterAppearance_1075a00");
__int64 CharacterModel_1070d60(__int64, _QWORD*, __int64, __int64, __int64,
                               __int64);
__int64 FaceSetFile_10acb20(_QWORD, _QWORD);
__int64 GameRoutine_1073980(_QWORD, _QWORD);
__int64 GameRoutine_1077500(_QWORD, _QWORD);
__int64 GameRoutine_1077fb0(_QWORD);
__int64 GameRoutine_7f7720(_QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_10f8580(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_character_1077790(_QWORD);
__int64 game_character_10778e0(_QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212d268;
extern _UNKNOWN GameData_1a8e425;
extern _UNKNOWN GameData_1ab10ed;
extern _UNKNOWN GameData_1adf1c1;
extern __int64 (*GameData_20064c0[])();
extern __int64 GameData_1ab7c2e;
extern __int64 GameData_1ac2fd3;
extern __int64 GameData_1aed621;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern unsigned int GameData_1ba7f74[7];
void __attribute__((noreturn)) GameRoutine_1075360(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
__int64 game_character_CharacterAppearance_Setup(unsigned __int64 a1,
                                                 char** a2);
__int64 CharacterAppearance_10743e0(__int64 a1);
void CharacterAppearance_1075a00(__int64 a1, unsigned __int8* a2,
                                 unsigned __int64 a3, long double a4);

__int64 game_character_CharacterAppearance_Setup(unsigned __int64 a1, char** a2)
{
  char* v2;
  _QWORD* v5;
  unsigned int v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  bool v55;
  unsigned __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  float* v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  char* v94;
  char* v95;
  __int64 v96;
  float v97;
  float v98;
  char* v99;
  char* v100;
  __int64 v101;
  __int64* v102;
  _QWORD* v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  _QWORD* v109;
  _QWORD* v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  _QWORD* v117;
  _QWORD* v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  _QWORD* v125;
  _QWORD* v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  _QWORD* v133;
  _QWORD* v134;
  unsigned __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  _QWORD* v141;
  _QWORD* v142;
  unsigned __int64 v143;
  __int64 v144;
  int v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  _QWORD* v150;
  _QWORD* v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  bool v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned int v170;
  unsigned __int64 v171;
  __int64* v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  __int64* v175;
  unsigned __int64 v176;
  __int64 v177;
  int v178;
  __int64 v179;
  __int64 v180;
  int v181;
  __int64 result;
  __int64 v184;
  char** v185;
  __int64 v186;
  unsigned __int64 v187;
  char* v188;
  __int64* v189;
  __int64 v190;
  unsigned __int64 v191;
  char* v192;
  __int64 v193;

  v191 = 0;
  v192 = nullptr;
  v190 = 0;
  v2 = a2[1];
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v2 != nullptr) {
    v6 = (unsigned __int8)*v2;
    v7 = *a2;
    if (*v2 != 0 && strchr(*a2, 35) != 0) {
      GameRoutine_1076d60((void*)(&v186), a2 + 49, v6);
      if ((v190 & 1) == 0) {
        goto LABEL_24;
      }
      goto LABEL_20;
    }
  }
  else {
    v7 = *a2;
  }
  if (v7 != nullptr) {
    v8 = v7;
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v9);
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(*v5, v12, 16, 0);
    v187 = v10;
    v188 = v11;
    v186 = v12 | 1;
    goto LABEL_18;
  }
  LOBYTE(v186) = 2 * v9;
  v11 = (char*)&v186 + 1;
  if (v9 != 0) {
  LABEL_18:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  if ((v190 & 1) != 0) {
  LABEL_20:
    if (v192 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v13);
    }
  }
LABEL_24:
  v190 = v186;
  v191 = v187;
  v192 = v188;
  if ((v186 & 1) != 0) {
    v14 = v192;
  }
  else {
    v14 = (char*)&v190 + 1;
  }
  if ((v186 & 1) != 0) {
    v15 = v191;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v186 >> 1;
  }
  CharacterAppearance_1075a00_alt1(a1 + 176, v14, v15);
  v16 = a2[2];
  if (v16 != nullptr && *v16 != 0) {
    v17 = strlen(a2[2]);
    CharacterAppearance_1075a00_alt1(a1 + 248, v16, v17);
    if (a2[3] != nullptr) {
      v18 = a2[3];
    }
    else {
      v18 = &GameData_1a9f09e;
    }
    v19 = strlen(v18);
    CharacterAppearance_1075a00_alt1(a1 + 320, v18, v19);
    if (a2[16] != nullptr) {
      v20 = a2[16];
    }
    else {
      v20 = &GameData_1a9f09e;
    }
    v21 = strlen(v20);
    CharacterAppearance_1075a00_alt1(a1 + 1328, v20, v21);
  }
  if (a2[8] != nullptr) {
    v22 = a2[8];
  }
  else {
    v22 = &GameData_1a9f09e;
  }
  v23 = strlen(v22);
  CharacterAppearance_1075a00_alt1(a1 + 392, v22, v23);
  if (a2[7] != nullptr) {
    v24 = a2[7];
  }
  else {
    v24 = &GameData_1a9f09e;
  }
  v25 = strlen(v24);
  CharacterAppearance_1075a00_alt1(a1 + 464, v24, v25);
  if (a2[4] != nullptr) {
    v26 = a2[4];
  }
  else {
    v26 = &GameData_1a9f09e;
  }
  v27 = strlen(v26);
  CharacterAppearance_1075a00_alt1(a1 + 536, v26, v27);
  if (a2[5] != nullptr) {
    v28 = a2[5];
  }
  else {
    v28 = &GameData_1a9f09e;
  }
  v29 = strlen(v28);
  CharacterAppearance_1075a00_alt1(a1 + 608, v28, v29);
  if (a2[6] != nullptr) {
    v30 = a2[6];
  }
  else {
    v30 = &GameData_1a9f09e;
  }
  v31 = strlen(v30);
  v32 = CharacterAppearance_1075a00_alt1(a1 + 680, v30, v31);
  v33 = 954437177 * ((unsigned __int64)(a2[18] - a2[17]) >> 3);
  if (v33 >= 1) {
    v34 = (_QWORD*)(a1 + 1400);
    v35 = a1 + 752;
    v36 = 0;
    if ((unsigned int)v33 >= 4) {
      v37 = 4;
    }
    else {
      v37 = (unsigned int)v33;
    }
    do {
      if (*(_QWORD*)&a2[17][8 * v36] != 0) {
        v38 = *(char**)&a2[17][8 * v36];
      }
      else {
        v38 = &GameData_1a9f09e;
      }
      v39 = strlen(v38);
      v32 = CharacterAppearance_1075a00_alt1(v35, v38, v39);
      --v37;
      v35 += 72LL;
      v40 = (__int64)&a2[17][8 * v36];
      v36 += 9;
      *v34++ = *(_QWORD*)(v40 + 8);
    } while (v37 != 0);
  }
  v41 = *(_QWORD**)(a1 + 11640);
  v42 = *(_QWORD**)(a1 + 11632);
  while (v41 != v42) {
    v43 = v41;
    if ((*(_BYTE*)(v41 - 3) & 1) != 0 && *(v41 - 1) != 0) {
      if (*(_QWORD*)(*v5 + 200LL) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      v32 = nn_mem_StandardAllocator_Free(*v5 + v44);
    }
    v41 -= 6;
    if ((*(_BYTE*)(v43 - 6) & 1) != 0 && *(v43 - 4) != 0) {
      if (*(_QWORD*)(*v5 + 200LL) != 0) {
        v45 = 128;
      }
      else {
        v45 = 56;
      }
      v32 = nn_mem_StandardAllocator_Free(*v5 + v45);
    }
  }
  *(_QWORD*)(a1 + 11640) = v42;
  v185 = a2;
  v46 = a2[20];
  v47 = a2[21];
  if (v46 != v47) {
    v48 = (__int64*)GameData_212d268;
    do {
      v51 = *((_QWORD*)v46 + 6);
      v52 = (*((_QWORD*)v46 + 7) - v51) >> 3;
      if (*((_QWORD*)v46 + 7) == v51) {
        v53 = v48;
      }
      else {
        v53 = *((__int64**)v46 + 6);
      }
      v54 = (__int64*)(v51 + 24);
      v55 = 0xAAAAAAAAAAAAAAABLL * v52 > 1;
      v56 = *(_QWORD*)(a1 + 11648);
      if (v55) {
        v57 = v54;
      }
      else {
        v57 = v48;
      }
      if ((unsigned __int64)v42 >= v56) {
        v60 = *(_QWORD*)(a1 + 11632);
        v61 = (char*)v42 - v60;
        v62 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v42 - v60) >> 4) + 1;
        if (v62 > 0x555555555555555LL) {
          GameRoutine_1075360(v32);
        }
        v63 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v56 - v60) >> 4);
        if (2 * v63 > v62) {
          v62 = 2 * v63;
        }
        if (v63 >= 0x2AAAAAAAAAAAAAALL) {
          v64 = 0x555555555555555LL;
        }
        else {
          v64 = v62;
        }
        if (v64 != 0) {
          if (v64 > 0x555555555555555LL) {
            GameRoutine_60a210(v32);
          }
          v65 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v64, 16, 0);
        }
        else {
          v65 = 0;
        }
        v66 = &v61[v65];
        if ((*(_BYTE*)v53 & 1) != 0) {
          fw_text_String_CopyTerminated(v66, v53[2], v53[1]);
          if ((*(_BYTE*)v57 & 1) == 0) {
            goto LABEL_108;
          }
        LABEL_106:
          fw_text_String_CopyTerminated(v66 + 24, v57[2], v57[1]);
        }
        else {
          v67 = *v53;
          v68 = v53[2];
          *((_QWORD*)v66 + 1) = v53[1];
          *((_QWORD*)v66 + 2) = v68;
          *(_QWORD*)v66 = v67;
          if ((*(_BYTE*)v57 & 1) != 0) {
            goto LABEL_106;
          }
        LABEL_108:
          v69 = *v57;
          v70 = v57[2];
          *((_QWORD*)v66 + 4) = v57[1];
          *((_QWORD*)v66 + 5) = v70;
          *((_QWORD*)v66 + 3) = v69;
        }
        v71 = *(_QWORD*)(a1 + 11632);
        v72 = v65 + 48 * v64;
        v42 = v66 + 48;
        v73 = *(_QWORD*)(a1 + 11640) - v71;
        v74 = &v66[-v73];
        v32 = memcpy(v74, v71, v73);
        *(_QWORD*)(a1 + 11632) = v74;
        *(_QWORD*)(a1 + 11640) = v42;
        *(_QWORD*)(a1 + 11648) = v72;
        if (v71 != 0) {
          v75 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v75 = 56;
          }
          v32 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
        }
        goto LABEL_81;
      }
      if ((*(_BYTE*)v53 & 1) != 0) {
        v32 = fw_text_String_CopyTerminated(v42, v53[2], v53[1]);
        if ((*(_BYTE*)v57 & 1) != 0) {
        LABEL_102:
          v32 = fw_text_String_CopyTerminated(v42 + 3, v57[2], v57[1]);
          goto LABEL_80;
        }
      }
      else {
        v58 = *v53;
        v59 = v53[2];
        v42[1] = v53[1];
        v42[2] = v59;
        *v42 = v58;
        if ((*(_BYTE*)v57 & 1) != 0) {
          goto LABEL_102;
        }
      }
      v49 = *v57;
      v50 = v57[2];
      v42[4] = v57[1];
      v42[5] = v50;
      v42[3] = v49;
    LABEL_80:
      v42 += 6;
    LABEL_81:
      v46 += 72;
      *(_QWORD*)(a1 + 11640) = v42;
    } while (v46 != v47);
  }
  v76 = fw_memory_g_heap_manager_ptr;
  v77 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       5120, 16, 0);
  memset(v77, 0, 5120, v78, v79, v80);
  v85 = v77;
  v86 = *(_QWORD*)(a1 + 11608);
  *(_QWORD*)(a1 + 11608) = v85;
  if (v86 != 0) {
    v87 = (float*)v185;
    v88 = -5120;
    v89 = (__int64*)(v86 + 5112);
    do {
      v90 = *v89;
      *v89 = 0;
      if (v90 != 0) {
        GameRoutine_7f7720(v89);
      }
      v88 += 8;
      --v89;
    } while (v88 != 0);
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)v76 + 200LL) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v76 + v91);
    v85 = *(_QWORD*)(a1 + 11608);
  }
  else {
    v87 = (float*)v185;
  }
  CharacterModel_1070d60(v85, (_QWORD*)v87 + 13, v81, v82, v83, v84);
  FaceSetFile_10acb20(a1 + 1432, *((_QWORD*)v87 + 16));
  v92 = *((char**)v87 + 40);
  if (v92 == nullptr) {
    v92 = &GameData_1a9f09e;
  }
  *(_QWORD*)a1 = v92;
  v93 = *((char**)v87 + 10);
  if (v93 == nullptr) {
    v93 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 8) = v93;
  v94 = *((char**)v87 + 11);
  if (v94 == nullptr) {
    v94 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 16) = v94;
  v95 = *((char**)v87 + 12);
  if (v95 == nullptr) {
    v95 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 24) = v95;
  *(_DWORD*)(a1 + 11800) = GameRoutine_1077fb0(*((_QWORD*)v87 + 27));
  v96 = *((_QWORD*)v87 + 9);
  *(_QWORD*)(a1 + 11616) = v96;
  *(_DWORD*)(a1 + 11624) = game_character_1077790(v96);
  v97 = v87[56];
  *(float*)(a1 + 40) = v97;
  v98 = v87[57];
  *(float*)(a1 + 32) = v98;
  *(float*)(a1 + 36) = v87[58];
  *(float*)(a1 + 44) = v87[59];
  if (v98 > 0.0f) {
    *(float*)(a1 + 40) = v97 / v98;
  }
  *(_QWORD*)(a1 + 48) = *((_QWORD*)v87 + 43);
  *(float*)(a1 + 56) = v87[60];
  *(float*)(a1 + 60) = v87[61];
  *(float*)(a1 + 64) = v87[62];
  *(float*)(a1 + 68) = v87[64];
  *(float*)(a1 + 72) = v87[65];
  *(float*)(a1 + 76) = v87[66];
  *(float*)(a1 + 80) = v87[67];
  *(float*)(a1 + 84) = v87[68];
  *(float*)(a1 + 88) = v87[69];
  *(float*)(a1 + 92) = v87[70];
  *(float*)(a1 + 96) = v87[71];
  *(float*)(a1 + 100) = v87[72];
  *(float*)(a1 + 104) = v87[73];
  *(float*)(a1 + 108) = v87[74];
  *(float*)(a1 + 112) = v87[75];
  *(float*)(a1 + 116) = v87[76];
  *(float*)(a1 + 120) = v87[77];
  *(float*)(a1 + 124) = v87[78];
  *(float*)(a1 + 128) = v87[63];
  v99 = *((char**)v87 + 23);
  if (v99 == nullptr) {
    v99 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 136) = v99;
  *(float*)(a1 + 144) = v87[48];
  v100 = *((char**)v87 + 25);
  if (v100 == nullptr) {
    v100 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 152) = v100;
  *(float*)(a1 + 160) = v87[52];
  if ((GameRoutine_1073980(a1, a1 + 400) & 1) == 0) {
    GameRoutine_1073980(a1, a1 + 472);
  }
  v101 = *(_QWORD*)(a1 + 11656);
  v102 = &v186;
  v189 = &v186;
  *(_QWORD*)(a1 + 11664) = v101;
  v103 = *((_QWORD**)v87 + 46);
  v186 = (__int64)GameData_20064c0;
  v187 = a1;
  if (v103 == nullptr) {
    goto LABEL_146;
  }
  v102 = &v186;
  v193 = v103[3];
  while (1) {
    (*(void (**)(__int64*, __int64*))(*v102 + 48))(v102, &v193);
    v103 = (_QWORD*)*v103;
    v102 = v189;
    if (v103 == nullptr) {
      break;
    }
    v193 = v103[3];
    if (v189 == nullptr) {
      GameRoutine_60a310(0);
    }
  }
  if (v189 == &v186) {
  LABEL_146:
    v104 = 32;
  }
  else {
    if (v189 == nullptr) {
      goto LABEL_148;
    }
    v104 = 40;
  }
  (*(void (**)(__int64))(*v102 + v104))((__int64)v102);
LABEL_148:
  if (*((_QWORD*)v87 + 47) != 0) {
    v105 = game_HashString(&GameData_1adf1c1);
    v106 = *((_QWORD*)v87 + 45);
    if (v106 != 0 && *((_QWORD*)v87 + 47) != 0) {
      v107 = v106 - 1;
      if ((v106 & (v106 - 1)) != 0) {
        v108 = v105;
        if (v105 >= v106) {
          v108 = v105 % v106;
        }
      }
      else {
        v108 = v107 & v105;
      }
      v109 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v108);
      if (v109 != nullptr) {
        v110 = (_QWORD*)*v109;
        if (v110 != nullptr) {
          if ((v106 & v107) == 0) {
            while (1) {
              v112 = v110[1];
              if (v105 == v112) {
                if (v110[2] == v105) {
                  goto LABEL_171;
                }
              }
              else if ((v112 & v107) != v108) {
                goto LABEL_172;
              }
              v110 = (_QWORD*)*v110;
              if (v110 == nullptr) {
                goto LABEL_172;
              }
            }
          }
          do {
            v111 = v110[1];
            if (v105 == v111) {
              if (v110[2] == v105) {
              LABEL_171:
                *(_DWORD*)(a1 + 11704) |= 0x1000u;
                break;
              }
            }
            else {
              if (v111 >= v106) {
                v111 %= v106;
              }
              if (v111 != v108) {
                break;
              }
            }
            v110 = (_QWORD*)*v110;
          } while (v110 != nullptr);
        }
      }
    }
  LABEL_172:
    v113 = game_HashString(&GameData_1ab7c2e);
    v114 = *((_QWORD*)v87 + 45);
    if (v114 != 0 && *((_QWORD*)v87 + 47) != 0) {
      v115 = v114 - 1;
      if ((v114 & (v114 - 1)) != 0) {
        v116 = v113;
        if (v113 >= v114) {
          v116 = v113 % v114;
        }
      }
      else {
        v116 = v115 & v113;
      }
      v117 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v116);
      if (v117 != nullptr) {
        v118 = (_QWORD*)*v117;
        if (v118 != nullptr) {
          if ((v114 & v115) == 0) {
            while (1) {
              v120 = v118[1];
              if (v113 == v120) {
                if (v118[2] == v113) {
                  goto LABEL_258;
                }
              }
              else if ((v120 & v115) != v116) {
                goto LABEL_193;
              }
              v118 = (_QWORD*)*v118;
              if (v118 == nullptr) {
                goto LABEL_193;
              }
            }
          }
          do {
            v119 = v118[1];
            if (v113 == v119) {
              if (v118[2] == v113) {
              LABEL_258:
                v145 = *(_DWORD*)(a1 + 11704) | 4;
              LABEL_261:
                *(_DWORD*)(a1 + 11704) = v145;
                if ((v145 & 0x1C) == 0) {
                  goto LABEL_264;
                }
                goto LABEL_236;
              }
            }
            else {
              if (v119 >= v114) {
                v119 %= v114;
              }
              if (v119 != v116) {
                break;
              }
            }
            v118 = (_QWORD*)*v118;
          } while (v118 != nullptr);
        }
      }
    }
  LABEL_193:
    v121 = game_HashString(&GameData_1ac2fd3);
    v122 = *((_QWORD*)v87 + 45);
    if (v122 != 0 && *((_QWORD*)v87 + 47) != 0) {
      v123 = v122 - 1;
      if ((v122 & (v122 - 1)) != 0) {
        v124 = v121;
        if (v121 >= v122) {
          v124 = v121 % v122;
        }
      }
      else {
        v124 = v123 & v121;
      }
      v125 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v124);
      if (v125 != nullptr) {
        v126 = (_QWORD*)*v125;
        if (v126 != nullptr) {
          if ((v122 & v123) == 0) {
            while (1) {
              v128 = v126[1];
              if (v121 == v128) {
                if (v126[2] == v121) {
                  goto LABEL_259;
                }
              }
              else if ((v128 & v123) != v124) {
                goto LABEL_214;
              }
              v126 = (_QWORD*)*v126;
              if (v126 == nullptr) {
                goto LABEL_214;
              }
            }
          }
          do {
            v127 = v126[1];
            if (v121 == v127) {
              if (v126[2] == v121) {
              LABEL_259:
                v145 = *(_DWORD*)(a1 + 11704) | 8;
                goto LABEL_261;
              }
            }
            else {
              if (v127 >= v122) {
                v127 %= v122;
              }
              if (v127 != v124) {
                break;
              }
            }
            v126 = (_QWORD*)*v126;
          } while (v126 != nullptr);
        }
      }
    }
  LABEL_214:
    v129 = game_HashString(&GameData_1aed621);
    v130 = *((_QWORD*)v87 + 45);
    if (v130 != 0 && *((_QWORD*)v87 + 47) != 0) {
      v131 = v130 - 1;
      if ((v130 & (v130 - 1)) != 0) {
        v132 = v129;
        if (v129 >= v130) {
          v132 = v129 % v130;
        }
      }
      else {
        v132 = v131 & v129;
      }
      v133 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v132);
      if (v133 != nullptr) {
        v134 = (_QWORD*)*v133;
        if (v134 != nullptr) {
          if ((v130 & v131) == 0) {
            while (1) {
              v136 = v134[1];
              if (v129 == v136) {
                if (v134[2] == v129) {
                  goto LABEL_260;
                }
              }
              else if ((v136 & v131) != v132) {
                goto LABEL_235;
              }
              v134 = (_QWORD*)*v134;
              if (v134 == nullptr) {
                goto LABEL_235;
              }
            }
          }
          do {
            v135 = v134[1];
            if (v129 == v135) {
              if (v134[2] == v129) {
              LABEL_260:
                v145 = *(_DWORD*)(a1 + 11704) | 0x10;
                goto LABEL_261;
              }
            }
            else {
              if (v135 >= v130) {
                v135 %= v130;
              }
              if (v135 != v132) {
                break;
              }
            }
            v134 = (_QWORD*)*v134;
          } while (v134 != nullptr);
        }
      }
    }
  LABEL_235:
    if ((*(_DWORD*)(a1 + 11704) & 0x1C) == 0) {
    LABEL_264:
      v146 = game_HashString(&GameData_1a8e425);
      v147 = *((_QWORD*)v87 + 45);
      if (v147 == 0 || *((_QWORD*)v87 + 47) == 0) {
        goto LABEL_287;
      }
      v148 = v147 - 1;
      if ((v147 & (v147 - 1)) != 0) {
        v149 = v146;
        if (v146 >= v147) {
          v149 = v146 % v147;
        }
      }
      else {
        v149 = v148 & v146;
      }
      v150 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v149);
      if (v150 == nullptr) {
        goto LABEL_287;
      }
      v151 = (_QWORD*)*v150;
      if (v151 == nullptr) {
        goto LABEL_287;
      }
      if ((v147 & v148) == 0) {
        while (1) {
          v153 = v151[1];
          if (v146 == v153) {
            if (v151[2] == v146) {
              goto LABEL_286;
            }
          }
          else if ((v153 & v148) != v149) {
            goto LABEL_287;
          }
          v151 = (_QWORD*)*v151;
          if (v151 == nullptr) {
            goto LABEL_287;
          }
        }
      }
      while (1) {
        v152 = v151[1];
        if (v146 == v152) {
          if (v151[2] == v146) {
          LABEL_286:
            *(_DWORD*)(a1 + 11704) |= 0x80u;
            goto LABEL_287;
          }
        }
        else {
          if (v152 >= v147) {
            v152 %= v147;
          }
          if (v152 != v149) {
            goto LABEL_287;
          }
        }
        v151 = (_QWORD*)*v151;
        if (v151 == nullptr) {
          goto LABEL_287;
        }
      }
    }
  LABEL_236:
    v137 = game_HashString(&GameData_1ab10ed);
    v138 = *((_QWORD*)v87 + 45);
    if (v138 == 0 || *((_QWORD*)v87 + 47) == 0) {
      goto LABEL_264;
    }
    v139 = v138 - 1;
    if ((v138 & (v138 - 1)) != 0) {
      v140 = v137;
      if (v137 >= v138) {
        v140 = v137 % v138;
      }
    }
    else {
      v140 = v139 & v137;
    }
    v141 = *(_QWORD**)(*((_QWORD*)v87 + 44) + 8 * v140);
    if (v141 == nullptr) {
      goto LABEL_264;
    }
    v142 = (_QWORD*)*v141;
    if (v142 == nullptr) {
      goto LABEL_264;
    }
    if ((v138 & v139) == 0) {
      while (1) {
        v144 = v142[1];
        if (v137 == v144) {
          if (v142[2] == v137) {
            goto LABEL_263;
          }
        }
        else if ((v144 & v139) != v140) {
          goto LABEL_264;
        }
        v142 = (_QWORD*)*v142;
        if (v142 == nullptr) {
          goto LABEL_264;
        }
      }
    }
    while (1) {
      v143 = v142[1];
      if (v137 == v143) {
        if (v142[2] == v137) {
        LABEL_263:
          *(_DWORD*)(a1 + 11704) |= 0x20u;
          goto LABEL_264;
        }
      }
      else {
        if (v143 >= v138) {
          v143 %= v138;
        }
        if (v143 != v140) {
          goto LABEL_264;
        }
      }
      v142 = (_QWORD*)*v142;
      if (v142 == nullptr) {
        goto LABEL_264;
      }
    }
  }
LABEL_287:
  v154 = 640;
  v155 = (__int64*)(*(_QWORD*)(a1 + 11608) + 40LL);
  while (1) {
    v156 = *(v155 - 5);
    if (v156 != 0) {
      break;
    }
    v156 = *(v155 - 4);
    if (v156 != 0) {
      break;
    }
    v156 = *(v155 - 3);
    if (v156 != 0) {
      break;
    }
    v156 = *(v155 - 2);
    if (v156 != 0) {
      break;
    }
    v156 = *(v155 - 1);
    if (v156 != 0) {
      break;
    }
    v156 = *v155;
    if (*v155 != 0) {
      break;
    }
    v156 = v155[1];
    if (v156 != 0) {
      break;
    }
    v156 = v155[2];
    if (v156 != 0) {
      break;
    }
    v156 = v155[3];
    if (v156 != 0) {
      break;
    }
    v156 = v155[4];
    if (v156 != 0) {
      break;
    }
    v155 += 10;
    v154 -= 10;
    if (v154 == 0) {
      v157 = *(unsigned int*)(a1 + 11784);
      goto LABEL_307;
    }
  }
  v158 = *(unsigned __int8*)(v156 + 8);
  v159 = v156 + 9;
  v162 = v156 + 16;
  v160 = *(_QWORD*)(v156 + 16);
  v161 = *(_QWORD*)(v162 + 8);
  v163 = (v158 & 1) == 0;
  v164 = v158 >> 1;
  if (v163) {
    v165 = v159;
  }
  else {
    v165 = v161;
  }
  if (v163) {
    v166 = v164;
  }
  else {
    v166 = v160;
  }
  game_character_10778e0(&v186, v165, v166);
  v157 = (unsigned int)v186;
  *(_QWORD*)(a1 + 11784) = v186;
LABEL_307:
  v167 = *(unsigned __int8*)(a1 + 544);
  if ((v167 & 1) != 0) {
    v168 = *(_QWORD*)(a1 + 552);
  }
  else {
    v168 = v167 >> 1;
  }
  if (v168 == 0 && (unsigned int)(v157 - 2) <= 6) {
    v157 = GameData_1ba7f74[(unsigned int)(v157 - 2)];
    *(_DWORD*)(a1 + 11784) = v157;
  }
  v169 = GameRoutine_1077500(v157, *(_DWORD*)(a1 + 11788) == 1);
  *(_QWORD*)(a1 + 11792) = v169;
  if (v169 == 0) {
    *(_QWORD*)(a1 + 11792) = GameRoutine_1077500(0, 0);
  }
  v170 = *(_DWORD*)(a1 + 11784);
  if (v170 <= 0x21 && ((1LL << v170) & 0x280100030LL) != 0) {
    v171 = *(unsigned __int8*)(a1 + 184);
    v172 = (__int64*)(a1 + 185);
    v163 = (v171 & 1) == 0;
    v173 = v171 >> 1;
    if (!v163) {
      v172 = *(__int64**)(a1 + 200);
      v173 = *(_QWORD*)(a1 + 192);
    }
    if (v173 != 0) {
      v174 = 0;
      v175 = v172;
      while (v173 != v174) {
        v176 = v174;
        v177 = (__int64)v175 + v173;
        v175 = (__int64*)((char*)v175 - 1);
        v178 = *(unsigned __int8*)(v177 - 1);
        v174 = v176 + 1;
        if (v178 == 47) {
          if (v173 + 1 != v174) {
            if (v173 < v174) {
              String_60a250("string_view::substr");
            }
            v179 = (__int64)v175 + v173;
            v173 = v176;
            v172 = (__int64*)(v179 + 1);
          }
          break;
        }
      }
      if (v173 == 12) {
        v180 = *v172;
        v181 = *((_DWORD*)v172 + 2);
        if (v180 == 0x7369766E495F4443LL && v181 == 1701601897) {
          *(_DWORD*)(a1 + 11704) |= 0x400u;
        }
      }
    }
  }
  result = game_10f8580(a1 + 11712, a1);
  *(_QWORD*)(a1 + 168) = *((_QWORD*)v87 + 59);
  if ((v190 & 1) != 0 && v192 != nullptr) {
    v184 = 128;
    if (*(_QWORD*)(*(_QWORD*)v76 + 200LL) == 0) {
      v184 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v76 + v184);
  }
  return result;
}

__int64 CharacterAppearance_10735d0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6)
{
  __int64* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 result;

  v7 = GameData_212c690;
  *(_QWORD*)a1 = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 8) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 16) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 24) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 40) = 0x3F80000040200000LL;
  v8 = (_DWORD*)*v7;
  *(_DWORD*)(a1 + 56) = *v8;
  *(_DWORD*)(a1 + 60) = *v8;
  *(_DWORD*)(a1 + 64) = *v8;
  *(_DWORD*)(a1 + 68) = *v8;
  *(_DWORD*)(a1 + 72) = *v8;
  *(_DWORD*)(a1 + 76) = *v8;
  *(_DWORD*)(a1 + 80) = *v8;
  *(_DWORD*)(a1 + 84) = *v8;
  *(_DWORD*)(a1 + 88) = *v8;
  *(_DWORD*)(a1 + 92) = *v8;
  *(_DWORD*)(a1 + 96) = *v8;
  *(_DWORD*)(a1 + 100) = *v8;
  *(_DWORD*)(a1 + 104) = *v8;
  *(_DWORD*)(a1 + 108) = *v8;
  *(_DWORD*)(a1 + 112) = *v8;
  *(_DWORD*)(a1 + 116) = *v8;
  *(_DWORD*)(a1 + 120) = *v8;
  v9 = *v8;
  *(_QWORD*)(a1 + 136) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 124) = v9;
  *(_DWORD*)(a1 + 128) = 0;
  v10 = *v8;
  *(_QWORD*)(a1 + 152) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 144) = v10;
  LODWORD(v8) = *v8;
  *(_QWORD*)(a1 + 168) = -1;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 11768) = 0;
  *(_QWORD*)(a1 + 11760) = 0;
  *(_QWORD*)(a1 + 11752) = 0;
  *(_QWORD*)(a1 + 11744) = 0;
  *(_QWORD*)(a1 + 11736) = 0;
  *(_QWORD*)(a1 + 11728) = 0;
  *(_QWORD*)(a1 + 11720) = 0;
  *(_QWORD*)(a1 + 11712) = 0;
  *(_DWORD*)(a1 + 11704) = 0;
  *(_QWORD*)(a1 + 11696) = 0;
  *(_QWORD*)(a1 + 11688) = 0;
  *(_QWORD*)(a1 + 11680) = 0;
  *(_QWORD*)(a1 + 11672) = 0;
  *(_QWORD*)(a1 + 11664) = 0;
  *(_QWORD*)(a1 + 11656) = 0;
  *(_QWORD*)(a1 + 11648) = 0;
  *(_QWORD*)(a1 + 11640) = 0;
  *(_QWORD*)(a1 + 11632) = 0;
  *(_DWORD*)(a1 + 160) = (_DWORD)v8;
  result = memset(a1 + 1336, 0, 10292, a4, a5, a6);
  *(_QWORD*)(a1 + 11784) = -1;
  *(_QWORD*)(a1 + 11792) = 0;
  *(_DWORD*)(a1 + 11800) = 0;
  *(_DWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 11776) = 1065353216;
  *(_DWORD*)(a1 + 248) = 1;
  *(_DWORD*)(a1 + 320) = 2;
  *(_DWORD*)(a1 + 392) = 3;
  *(_DWORD*)(a1 + 464) = 4;
  *(_DWORD*)(a1 + 536) = 5;
  *(_DWORD*)(a1 + 608) = 6;
  *(_DWORD*)(a1 + 680) = 7;
  *(_DWORD*)(a1 + 752) = 8;
  *(_DWORD*)(a1 + 824) = 9;
  *(_DWORD*)(a1 + 896) = 10;
  *(_DWORD*)(a1 + 968) = 11;
  *(_DWORD*)(a1 + 1040) = 12;
  *(_DWORD*)(a1 + 1112) = 13;
  *(_DWORD*)(a1 + 1184) = 14;
  *(_DWORD*)(a1 + 1256) = 15;
  *(_DWORD*)(a1 + 1328) = 16;
  return result;
}

__int64 CharacterAppearance_10743e0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int8 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int8* v14;
  int v15;
  unsigned __int8 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  _BYTE v42[8];
  unsigned int v43;

  v1 = *(unsigned __int8*)(a1 + 472);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 480);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = 464;
  LABEL_11:
    v6 = a1 + v3;
    v7 = *(_BYTE*)(v6 + 8);
    v8 = *(_QWORD*)(v6 + 16);
    v9 = (v7 & 1) == 0;
    v10 = v7 >> 1;
    if (v9) {
      v11 = v6 + 9;
    }
    else {
      v11 = *(_QWORD*)(v6 + 24);
    }
    if (!v9) {
      v10 = v8;
    }
    if (v10 != 0) {
      while (v10 != 0) {
        v12 = *(unsigned __int8*)(v11 - 1 + v10--);
        if (v12 == 47) {
          v13 = v10 + 1;
          if (v13 != 0) {
            goto LABEL_21;
          }
          break;
        }
      }
      v13 = 0;
    LABEL_21:
      v14 = (unsigned __int8*)(v11 + v13);
      v15 = *v14;
      if (v15 == 87 || v15 == 69) {
        v16 = v14[1];
        v17 = (unsigned __int8)(v16 - 49);
        v18 = (unsigned __int8)(v16 - 48);
        if (v17 >= 8) {
          return 0;
        }
        else {
          return v18;
        }
      }
    }
    return 0;
  }
  v4 = *(unsigned __int8*)(a1 + 400);
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v3 = 392;
    goto LABEL_11;
  }
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v21 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v22 = 119788728;
      if ((unsigned __int64)GameData_22356f8 <= 0x723D4B8) {
        v22 = 0x723D4B8 % (unsigned int)GameData_22356f8;
      }
    }
    else {
      v22 = ((_DWORD)GameData_22356f8 - 1) & 0x723D4B8;
    }
    v23 = *(__int64***)(GameData_22356f0 + 8 * v22);
    if (v23 != nullptr) {
      v24 = *v23;
      if (*v23 != nullptr) {
        v25 = 639;
        if ((GameData_22356f8 & v21) == 0) {
          while (1) {
            v41 = v24[1];
            if (v41 == 119788728) {
              if (*((_DWORD*)v24 + 4) == 119788728) {
                goto LABEL_67;
              }
            }
            else if ((v41 & v21) != v22) {
              goto LABEL_46;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_46;
            }
          }
        }
        while (1) {
          v26 = v24[1];
          if (v26 == 119788728) {
            break;
          }
          if (v26 >= GameData_22356f8) {
            v26 %= (unsigned __int64)GameData_22356f8;
          }
          if (v26 != v22) {
            goto LABEL_46;
          }
        LABEL_39:
          v24 = (__int64*)*v24;
          if (v24 == nullptr) {
            goto LABEL_46;
          }
        }
        if (*((_DWORD*)v24 + 4) != 119788728) {
          goto LABEL_39;
        }
      LABEL_67:
        v25 = *((int*)v24 + 5);
      LABEL_46:
        v27 = *(_QWORD*)(*(_QWORD*)(a1 + 11608) + 8 * v25);
        if (v27 == 0) {
          return 0;
        }
        v28 = *(unsigned __int8*)(v27 + 8);
        v29 = v27 + 9;
        v32 = v27 + 16;
        v30 = *(_QWORD*)(v27 + 16);
        v31 = *(_QWORD*)(v32 + 8);
        v33 = (v28 & 1) == 0;
        v34 = v28 >> 1;
        if (v33) {
          v35 = v29;
        }
        else {
          v35 = v31;
        }
        if (v33) {
          v36 = v34;
        }
        else {
          v36 = v30;
        }
        if (v36 != 0) {
          v37 = ~v35;
          v38 = v35 - 1;
          v39 = 0;
          while (v36 != v39) {
            v40 = *(unsigned __int8*)(v38 + v36);
            ++v39;
            ++v37;
            --v38;
            if (v40 == 47) {
              if (v36 + 1 != v39) {
                if (v36 < v39) {
                  String_60a250("string_view::substr");
                }
                v35 = v36 - v37;
                v36 = v39 - 1;
              }
              break;
            }
          }
        }
        game_character_10778e0(v42, v35, v36);
        return v43;
      }
    }
  }
  v25 = 639;
  goto LABEL_46;
}

__int64 game_character_CharacterAppearance_LoadAsync(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 result;
  _QWORD v27[2];
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD v31[4];
  _QWORD* v32;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 816, 16, 0);
  v3[4] = 0;
  v3[10] = 0;
  v3[16] = 0;
  v3[22] = 0;
  v3[28] = 0;
  v3[34] = 0;
  v3[40] = 0;
  v3[46] = 0;
  v3[52] = 0;
  v29 = v3 + 102;
  v30 = v3 + 102;
  v3[58] = 0;
  v3[64] = 0;
  v3[70] = 0;
  v3[76] = 0;
  v3[82] = 0;
  v3[88] = 0;
  v3[94] = 0;
  v3[100] = 0;
  v28 = v3;
  v4 = (_QWORD*)GameData_21323e8[0];
  v5 = *(_QWORD*)GameData_21323e8[0];
  v27[0] = a1;
  v27[1] = &v28;
  fw_world_JobContext_Drain(v5);
  v6 = *v4;
  v7 = *v4 + 32LL;
  do {
    v8 = *(_DWORD*)(v6 + 8);
    v9 = (v8 + 1) & 0xFFFFFF;
    if (v8 + 1 <= 0) {
      v9 = -(-(v8 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v6 + 8) = v9;
    v10 = atomic_load((unsigned __int64*)(v7 + 32LL * (v8 & 0x3F)));
    if (v10 != 0) {
      v8 = -1;
    }
  } while (v8 < 0);
  v11 = v8 | 0xC0000000;
  v12 = (unsigned __int64*)(v7 + 32LL * (v8 & 0x3F));
  nn_os_ClearLightEvent(v12 + 1);
  v13 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  v13[2] = 0;
  v14 = v13;
  v15 = GameData_212e368[0];
  v13[8] = 0;
  *v13 = v15 + 16;
  v13[1] = 0;
  v16 = v12[3];
  v12[3] = (unsigned __int64)v14;
  if (v16 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  atomic_store(v11, v12);
  v14[1] = v6;
  *((_DWORD*)v14 + 4) = v11;
  v31[0] = GameData_2006540;
  v31[1] = 17;
  v32 = v31;
  v31[2] = v27;
  fw_world_SwapCallables(v31, v14 + 4);
  if (v32 == v31) {
    v17 = 32;
    goto LABEL_13;
  }
  if (v32 != nullptr) {
    v17 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v32 + v17))((__int64)v32);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v6 + 16), v11);
  fw_world_JobContext_Wait(*v4, v11);
  v18 = v28;
  v19 = v29;
  if (v28 == v29) {
    if (v28 == nullptr) {
      goto LABEL_33;
    }
  }
  else {
    do {
      v20 = v18[4];
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 48LL))(v20);
      }
      v18 += 6;
    } while (v18 != v19);
    v18 = v28;
    if (v28 == nullptr) {
      goto LABEL_33;
    }
  }
  v21 = v29;
  if (v18 == v29) {
  LABEL_30:
    v25 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v25);
    goto LABEL_33;
  }
  do {
    v23 = (_QWORD*)*(v21 - 2);
    v24 = v21 - 6;
    if (v21 - 6 == v23) {
      v22 = 32;
    LABEL_24:
      (*(void (**)(__int64))(*v23 + v22))((__int64)v23);
      goto LABEL_25;
    }
    if (v23 != nullptr) {
      v22 = 40;
      goto LABEL_24;
    }
  LABEL_25:
    v21 = v24;
  } while (v24 != v18);
  v29 = v18;
  if (v28 != nullptr) {
    goto LABEL_30;
  }
LABEL_33:
  result = *(_QWORD*)(a1 + 11608);
  if (result != 0) {
    return CharacterModel_106fae0(result);
  }
  return result;
}

__int64 CharacterAppearance_1074940(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 result;
  char v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64 v74;

  v1 = *(unsigned __int8*)(a1 + 184);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 192);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 232);
    if (v3 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v3 + 165) != 1) {
      return 0;
    }
    v4 = a1;
    v5 = GameRoutine_ad7390(*(_QWORD*)(a1 + 232));
    a1 = v4;
    if ((v5 & 1) == 0) {
      return 0;
    }
  }
  v6 = *(unsigned __int8*)(a1 + 256);
  v7 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 264) : v6 >> 1;
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 304);
    if (v8 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v8 + 165) != 1) {
      return 0;
    }
    v9 = a1;
    v10 = GameRoutine_ad7390(*(_QWORD*)(a1 + 304));
    a1 = v9;
    if ((v10 & 1) == 0) {
      return 0;
    }
  }
  v11 = *(unsigned __int8*)(a1 + 328);
  v12 = (v11 & 1) != 0 ? *(_QWORD*)(a1 + 336) : v11 >> 1;
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 376);
    if (v13 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v13 + 165) != 1) {
      return 0;
    }
    v14 = a1;
    v15 = GameRoutine_ad7390(*(_QWORD*)(a1 + 376));
    a1 = v14;
    if ((v15 & 1) == 0) {
      return 0;
    }
  }
  v16 = *(unsigned __int8*)(a1 + 400);
  v17 = (v16 & 1) != 0 ? *(_QWORD*)(a1 + 408) : v16 >> 1;
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 448);
    if (v18 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v18 + 165) != 1) {
      return 0;
    }
    v19 = a1;
    v20 = GameRoutine_ad7390(*(_QWORD*)(a1 + 448));
    a1 = v19;
    if ((v20 & 1) == 0) {
      return 0;
    }
  }
  v21 = *(unsigned __int8*)(a1 + 472);
  v22 = (v21 & 1) != 0 ? *(_QWORD*)(a1 + 480) : v21 >> 1;
  if (v22 != 0) {
    v23 = *(_QWORD*)(a1 + 520);
    if (v23 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v23 + 165) != 1) {
      return 0;
    }
    v24 = a1;
    v25 = GameRoutine_ad7390(*(_QWORD*)(a1 + 520));
    a1 = v24;
    if ((v25 & 1) == 0) {
      return 0;
    }
  }
  v26 = *(unsigned __int8*)(a1 + 544);
  v27 = (v26 & 1) != 0 ? *(_QWORD*)(a1 + 552) : v26 >> 1;
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 592);
    if (v28 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v28 + 165) != 1) {
      return 0;
    }
    v29 = a1;
    v30 = GameRoutine_ad7390(*(_QWORD*)(a1 + 592));
    a1 = v29;
    if ((v30 & 1) == 0) {
      return 0;
    }
  }
  v31 = *(unsigned __int8*)(a1 + 616);
  v32 = (v31 & 1) != 0 ? *(_QWORD*)(a1 + 624) : v31 >> 1;
  if (v32 != 0) {
    v33 = *(_QWORD*)(a1 + 664);
    if (v33 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v33 + 165) != 1) {
      return 0;
    }
    v34 = a1;
    v35 = GameRoutine_ad7390(*(_QWORD*)(a1 + 664));
    a1 = v34;
    if ((v35 & 1) == 0) {
      return 0;
    }
  }
  v36 = *(unsigned __int8*)(a1 + 688);
  v37 = (v36 & 1) != 0 ? *(_QWORD*)(a1 + 696) : v36 >> 1;
  if (v37 != 0) {
    v38 = *(_QWORD*)(a1 + 736);
    if (v38 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v38 + 165) != 1) {
      return 0;
    }
    v39 = a1;
    v40 = GameRoutine_ad7390(*(_QWORD*)(a1 + 736));
    a1 = v39;
    if ((v40 & 1) == 0) {
      return 0;
    }
  }
  v41 = *(unsigned __int8*)(a1 + 760);
  v42 = (v41 & 1) != 0 ? *(_QWORD*)(a1 + 768) : v41 >> 1;
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 808);
    if (v43 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v43 + 165) != 1) {
      return 0;
    }
    v44 = a1;
    v45 = GameRoutine_ad7390(*(_QWORD*)(a1 + 808));
    a1 = v44;
    if ((v45 & 1) == 0) {
      return 0;
    }
  }
  v46 = *(unsigned __int8*)(a1 + 832);
  v47 = (v46 & 1) != 0 ? *(_QWORD*)(a1 + 840) : v46 >> 1;
  if (v47 != 0) {
    v48 = *(_QWORD*)(a1 + 880);
    if (v48 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v48 + 165) != 1) {
      return 0;
    }
    v49 = a1;
    v50 = GameRoutine_ad7390(*(_QWORD*)(a1 + 880));
    a1 = v49;
    if ((v50 & 1) == 0) {
      return 0;
    }
  }
  v51 = *(unsigned __int8*)(a1 + 904);
  v52 = (v51 & 1) != 0 ? *(_QWORD*)(a1 + 912) : v51 >> 1;
  if (v52 != 0) {
    v53 = *(_QWORD*)(a1 + 952);
    if (v53 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v53 + 165) != 1) {
      return 0;
    }
    v54 = a1;
    v55 = GameRoutine_ad7390(*(_QWORD*)(a1 + 952));
    a1 = v54;
    if ((v55 & 1) == 0) {
      return 0;
    }
  }
  v56 = *(unsigned __int8*)(a1 + 976);
  v57 = (v56 & 1) != 0 ? *(_QWORD*)(a1 + 984) : v56 >> 1;
  if (v57 != 0) {
    v58 = *(_QWORD*)(a1 + 1024);
    if (v58 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v58 + 165) != 1) {
      return 0;
    }
    v59 = a1;
    v60 = GameRoutine_ad7390(*(_QWORD*)(a1 + 1024));
    a1 = v59;
    if ((v60 & 1) == 0) {
      return 0;
    }
  }
  v61 = *(unsigned __int8*)(a1 + 1048);
  v74 = a1;
  v62 = (v61 & 1) != 0 ? *(_QWORD*)(a1 + 1056) : v61 >> 1;
  if (v62 != 0) {
    result = *(_QWORD*)(a1 + 1096);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1) {
      return 0;
    }
    v64 = GameRoutine_ad7390(result);
    a1 = v74;
    if ((v64 & 1) == 0) {
      return 0;
    }
  }
  v65 = *(unsigned __int8*)(a1 + 1120);
  v66 = (v65 & 1) != 0 ? *(_QWORD*)(a1 + 1128) : v65 >> 1;
  if (v66 != 0) {
    result = *(_QWORD*)(v74 + 1168);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v67 = *(unsigned __int8*)(v74 + 1192);
  v68 = *(_QWORD*)(v74 + 1200);
  if ((v67 & 1) == 0) {
    v68 = v67 >> 1;
  }
  if (v68 != 0) {
    result = *(_QWORD*)(v74 + 1240);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v69 = *(unsigned __int8*)(v74 + 1264);
  v70 = *(_QWORD*)(v74 + 1272);
  if ((v69 & 1) == 0) {
    v70 = v69 >> 1;
  }
  if (v70 != 0) {
    result = *(_QWORD*)(v74 + 1312);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v71 = *(unsigned __int8*)(v74 + 1336);
  v72 = *(_QWORD*)(v74 + 1344);
  if ((v71 & 1) == 0) {
    v72 = v71 >> 1;
  }
  if (v72 != 0) {
    result = *(_QWORD*)(v74 + 1384);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v73 = *(__int64**)(v74 + 11608);
  return v73 == nullptr || (CharacterModel_106fdc0(v73) & 1) != 0;
}

__int64 CharacterAppearance_1074de0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 result;

  v1 = *(unsigned __int8*)(a1 + 184);
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 240) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  v5 = *(unsigned __int8*)(a1 + 256);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 264);
  }
  else {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 304) = 0;
    *(_QWORD*)(a1 + 312) = 0;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v8 = *(unsigned __int8*)(a1 + 328);
  if ((v8 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 336);
  }
  else {
    v9 = v8 >> 1;
  }
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 376) = 0;
    *(_QWORD*)(a1 + 384) = 0;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(unsigned __int8*)(a1 + 400);
  if ((v11 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 408);
  }
  else {
    v12 = v11 >> 1;
  }
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 456);
    *(_QWORD*)(a1 + 448) = 0;
    *(_QWORD*)(a1 + 456) = 0;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  v14 = *(unsigned __int8*)(a1 + 472);
  if ((v14 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 480);
  }
  else {
    v15 = v14 >> 1;
  }
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 528);
    *(_QWORD*)(a1 + 520) = 0;
    *(_QWORD*)(a1 + 528) = 0;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = *(unsigned __int8*)(a1 + 544);
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 552);
  }
  else {
    v18 = v17 >> 1;
  }
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 600);
    *(_QWORD*)(a1 + 592) = 0;
    *(_QWORD*)(a1 + 600) = 0;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  v20 = *(unsigned __int8*)(a1 + 616);
  if ((v20 & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 624);
  }
  else {
    v21 = v20 >> 1;
  }
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 672);
    *(_QWORD*)(a1 + 664) = 0;
    *(_QWORD*)(a1 + 672) = 0;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  v23 = *(unsigned __int8*)(a1 + 688);
  if ((v23 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 696);
  }
  else {
    v24 = v23 >> 1;
  }
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 736) = 0;
    *(_QWORD*)(a1 + 744) = 0;
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  v26 = *(unsigned __int8*)(a1 + 760);
  if ((v26 & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 768);
  }
  else {
    v27 = v26 >> 1;
  }
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 816);
    *(_QWORD*)(a1 + 808) = 0;
    *(_QWORD*)(a1 + 816) = 0;
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  }
  v29 = *(unsigned __int8*)(a1 + 832);
  if ((v29 & 1) != 0) {
    v30 = *(_QWORD*)(a1 + 840);
  }
  else {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    v31 = *(_QWORD*)(a1 + 888);
    *(_QWORD*)(a1 + 880) = 0;
    *(_QWORD*)(a1 + 888) = 0;
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
  }
  v32 = *(unsigned __int8*)(a1 + 904);
  if ((v32 & 1) != 0) {
    v33 = *(_QWORD*)(a1 + 912);
  }
  else {
    v33 = v32 >> 1;
  }
  if (v33 != 0) {
    v34 = *(_QWORD*)(a1 + 960);
    *(_QWORD*)(a1 + 952) = 0;
    *(_QWORD*)(a1 + 960) = 0;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  v35 = *(unsigned __int8*)(a1 + 976);
  if ((v35 & 1) != 0) {
    v36 = *(_QWORD*)(a1 + 984);
  }
  else {
    v36 = v35 >> 1;
  }
  if (v36 != 0) {
    v37 = *(_QWORD*)(a1 + 1032);
    *(_QWORD*)(a1 + 1024) = 0;
    *(_QWORD*)(a1 + 1032) = 0;
    if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak(v37);
    }
  }
  v38 = *(unsigned __int8*)(a1 + 1048);
  if ((v38 & 1) != 0) {
    v39 = *(_QWORD*)(a1 + 1056);
  }
  else {
    v39 = v38 >> 1;
  }
  if (v39 != 0) {
    v40 = *(_QWORD*)(a1 + 1104);
    *(_QWORD*)(a1 + 1096) = 0;
    *(_QWORD*)(a1 + 1104) = 0;
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
  }
  v41 = *(unsigned __int8*)(a1 + 1120);
  if ((v41 & 1) != 0) {
    v42 = *(_QWORD*)(a1 + 1128);
  }
  else {
    v42 = v41 >> 1;
  }
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 1176);
    *(_QWORD*)(a1 + 1168) = 0;
    *(_QWORD*)(a1 + 1176) = 0;
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  }
  v44 = *(unsigned __int8*)(a1 + 1192);
  if ((v44 & 1) != 0) {
    v45 = *(_QWORD*)(a1 + 1200);
  }
  else {
    v45 = v44 >> 1;
  }
  if (v45 != 0) {
    v46 = *(_QWORD*)(a1 + 1248);
    *(_QWORD*)(a1 + 1240) = 0;
    *(_QWORD*)(a1 + 1248) = 0;
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
  }
  v47 = *(unsigned __int8*)(a1 + 1264);
  if ((v47 & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 1272);
  }
  else {
    v48 = v47 >> 1;
  }
  if (v48 != 0) {
    v49 = *(_QWORD*)(a1 + 1320);
    *(_QWORD*)(a1 + 1312) = 0;
    *(_QWORD*)(a1 + 1320) = 0;
    if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      std___1___shared_weak_count___release_weak(v49);
    }
  }
  v50 = *(unsigned __int8*)(a1 + 1336);
  if ((v50 & 1) != 0) {
    v51 = *(_QWORD*)(a1 + 1344);
  }
  else {
    v51 = v50 >> 1;
  }
  if (v51 == 0 ||
      (v52 = *(_QWORD*)(a1 + 1392), *(_QWORD*)(a1 + 1384) = 0,
       *(_QWORD*)(a1 + 1392) = 0, v52 == 0) ||
      atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 11608);
    if (result == 0) {
      return result;
    }
    return CharacterModel_106fe40(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
  std___1___shared_weak_count___release_weak(v52);
  result = *(_QWORD*)(a1 + 11608);
  if (result != 0) {
    return CharacterModel_106fe40(result);
  }
  return result;
}

__int64 game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  long double v18;
  __int64 v19;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[1458];
  v5 = v2[1459];
  if ((unsigned __int64)v4 >= v5) {
    v7 = v2[1457];
    v8 = (char*)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_60f930();
    }
    v11 = v5 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 2 > v10) {
      v10 = v11 >> 2;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (char*)v4 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = v3;
    v6 = (__int64)&v8[v14 + 8];
    result = memcpy(v17, v7, v16);
    v2[1457] = v17;
    v2[1458] = v6;
    v2[1459] = v15;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v19, v18);
    }
  }
  else {
    *v4 = v3;
    v6 = (__int64)(v4 + 1);
  }
  v2[1458] = v6;
  return result;
}

__int64 game_character_CharacterAppearance_LoadAsync_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  signed int v9;
  signed int add;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_uint* v26;
  _QWORD v27[4];
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  v5 = *(_DWORD*)(result + 8);
  if (v5 >= 1) {
    v29 = v3;
    v30 = v4;
    v6 = result;
    v26 = a3;
    v7 = v5 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if (v7 <= 1) {
      v8 = 1;
    }
    else {
      v8 = v7;
    }
    while (1) {
      add = atomic_fetch_add(a3, v8);
      v9 = *(_DWORD*)(v6 + 8);
      if (v9 > add) {
        break;
      }
    LABEL_6:
      if (v8 >> 1 <= 1) {
        v8 = 1;
      }
      else {
        v8 >>= 1;
      }
      if (add >= v9) {
        return result;
      }
    }
    v11 = add;
    if (v9 >= (int)(add + v8)) {
      v9 = add + v8;
    }
    v12 = v9;
    v13 = 48LL * add;
    v14 = 72LL * add;
    while (1) {
      v15 = *(__int64**)(v6 + 16);
      v16 = *v15;
      v17 = *v15 + v14;
      v18 = *(unsigned __int8*)(v17 + 184);
      if ((v18 & 1) != 0) {
        v19 = *(_QWORD*)(v17 + 192);
      }
      else {
        v19 = v18 >> 1;
      }
      if (v19 == 0) {
        goto LABEL_15;
      }
      v28 = nullptr;
      v20 = GameRoutine_1075d50(v17 + 176, v27);
      if (v28 == v27) {
        v21 = 32;
      }
      else {
        if (v28 == nullptr) {
          goto LABEL_25;
        }
        v21 = 40;
      }
      (*(void (**)(void*))(*v28 + v21))(v28);
    LABEL_25:
      if ((v20 & 1) != 0) {
        v27[0] = GameData_20065c0;
        v27[1] = v14 + v16 + 176;
        v22 = v27;
      }
      else {
        v22 = nullptr;
      }
      v28 = v22;
      v23 = *(_QWORD*)v15[1] + v13;
      result = *(_QWORD*)(v23 + 32);
      *(_QWORD*)(v23 + 32) = 0;
      if (v23 == result) {
        v24 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_33;
        }
        v24 = 40;
      }
      result = (*(__int64 (**)(void*))(*(_QWORD*)result + v24))((void*)result);
    LABEL_33:
      if (v28 != nullptr) {
        if (v28 != v27) {
          *(_QWORD*)(v23 + 32) = v28;
          goto LABEL_15;
        }
        *(_QWORD*)(v23 + 32) = v23;
        (*(void (**)(_QWORD*, __int64))(*v28 + 24LL))(v28, v23);
      }
      else {
        *(_QWORD*)(v23 + 32) = 0;
      }
      result = (__int64)v28;
      if (v28 == v27) {
        v25 = 32;
        goto LABEL_41;
      }
      if (v28 != nullptr) {
        v25 = 40;
      LABEL_41:
        result = (*(__int64 (**)(void*))(*v28 + v25))(v28);
      }
    LABEL_15:
      ++v11;
      v13 += 48;
      v14 += 72;
      if (v11 >= v12) {
        v9 = *(_DWORD*)(v6 + 8);
        a3 = v26;
        add = v11;
        goto LABEL_6;
      }
    }
  }
  return result;
}

void CharacterAppearance_1075a00(__int64 a1, unsigned __int8* a2,
                                 unsigned __int64 a3, long double a4)
{

#pragma clang fp contract(off)
  __int64 v7;
  _BYTE* v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];

  if (*(_QWORD*)(a1 + 56) != 0) {
    v7 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 64) = 0;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(v7, a4);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v8 = (_BYTE*)(a1 + 8);
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    **(_BYTE**)(a1 + 24) = 0;
    *(_QWORD*)(a1 + 16) = 0;
  }
  else {
    *(_WORD*)(a1 + 8) = 0;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    **(_BYTE**)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    if (a3 == 0) {
      return;
    }
  }
  else {
    *(_WORD*)(a1 + 32) = 0;
    if (a3 == 0) {
      return;
    }
  }
  v9 = a2 - 1;
  v10 = 0;
  while (a3 != v10) {
    v11 = v9[a3];
    ++v10;
    --v9;
    if (v11 == 41) {
      if (a3 + 1 != v10) {
        v12 = memchr(a2, 40, a3);
        if (v12 != 0) {
          v13 = v12 - (_QWORD)a2;
        }
        else {
          v13 = -1;
        }
        if (a3 < v13 + 1) {
          String_60a250_alt1("string_view::substr");
        }
        if (a3 - (v13 + 1) >= ~v10 + a3 - v13) {
          v14 = ~v10 + a3 - v13;
        }
        else {
          v14 = a3 - (v13 + 1);
        }
        GameRoutine_60a060((char*)(a1 + 32), (__int64)&a2[v13 + 1], v14);
        v15 = v13 - 1;
        if (a2[v13 - 1] != 32) {
          v15 = v13;
        }
        if (a3 >= v15) {
          a3 = v15;
        }
      }
      break;
    }
  }
  GameRoutine_1076700((void*)((__int64)v18), a2, a3);
  if ((*v8 & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v16);
  }
  v17 = v18[1];
  *(_QWORD*)v8 = v18[0];
  *(_QWORD*)(a1 + 16) = v17;
  *(_QWORD*)(a1 + 24) = v18[2];
}

#pragma GCC visibility pop
