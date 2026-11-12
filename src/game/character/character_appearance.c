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
__int64 CharacterAppearance_10735d0_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("CharacterAppearance_10735d0");
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
__int64 game_character_CharacterAppearance_Setup_lambda0_Invoke_alt1(
    __int64 result,
    __int64*
        a2) __asm__("game_character_CharacterAppearance_Setup_lambda0_Invoke");
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
__int64 game_character_CharacterAppearance_Setup_alt1(
    unsigned __int64 a1,
    char** a2) __asm__("game_character_CharacterAppearance_Setup");
__int64 CharacterAppearance_10743e0(__int64 a1);
void CharacterAppearance_1075a00_alt3(
    __int64 a1, unsigned __int8* a2, unsigned __int64 a3,
    long double a4) __asm__("CharacterAppearance_1075a00");
_QWORD* game_character_1077500(unsigned int, char);
__attribute__((swiftcall)) void
GameRoutine_1076d60_alt1(PSEUDO_X8, __int64*,
                         char) __asm__("GameRoutine_1076d60");
__int64
GameRoutine_1073980_alt1(__int64,
                         unsigned __int8*) __asm__("GameRoutine_1073980");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_character_10778e0_alt1(__int64 result, __int64,
                            unsigned __int64) __asm__("game_character_10778e0");
__int64 game_character_1077fb0(const char*);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
const char* game_character_1077790_alt1(const char* result) __asm__(
    "game_character_1077790");
unsigned __int64 game_10f8580_alt1(__int64, _QWORD*) __asm__("game_10f8580");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void CharacterAppearance_1075a00_alt2(
    __int64, __int64, unsigned __int64) __asm__("CharacterAppearance_1075a00");
void FaceSetFile_10acb20_alt1(__int64, __int64) __asm__("FaceSetFile_10acb20");
void GameHr_1070d60(__int64, _QWORD*);
void GameHr_7f7720(__int64, __int64);
void __attribute__((noreturn))
GameRoutine_1075360_alt1() __asm__("GameRoutine_1075360");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60f930_alt1() __asm__("GameRoutine_60f930");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_character_CharacterAppearance_Setup(__int64 a1, __int64 a2);
void game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);
__attribute__((swiftcall)) void game_character_1076700(PSEUDO_X8, const char*,
                                                       unsigned __int64);
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 CharacterAppearance_10735d0(__int64 a1);
void CharacterAppearance_1075a00(__int64 a1, const char* a2,
                                 unsigned __int64 a3);

void game_character_CharacterAppearance_Setup(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  char* v2;
  __int64* v5;
  char v6;
  const char* v7;
  const char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  _BYTE* v16;
  unsigned __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  const char* v24;
  unsigned __int64 v25;
  const char* v26;
  unsigned __int64 v27;
  const char* v28;
  unsigned __int64 v29;
  const char* v30;
  unsigned __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  const char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  bool v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  char* v86;
  char* v87;
  char* v88;
  char* v89;
  const char* v90;
  float v91;
  float v92;
  char* v93;
  char* v94;
  __int64 v95;
  __int64* v96;
  _QWORD* v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  _QWORD* v103;
  _QWORD* v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  _QWORD* v111;
  _QWORD* v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  _QWORD* v119;
  _QWORD* v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  _QWORD* v127;
  _QWORD* v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  _QWORD* v135;
  _QWORD* v136;
  unsigned __int64 v137;
  __int64 v138;
  int v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  _QWORD* v144;
  _QWORD* v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  __int64 v150;
  unsigned int v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  bool v157;
  unsigned __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  _QWORD* v163;
  unsigned int v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  int v172;
  unsigned __int64 v173;
  __int64 v174;
  int v175;
  __int64 v177;
  __int64 v178;
  struct {
    __int64 v179;
    __int64 v180;
    __int64 v181;
    char gap40_[8];
    __int64* v182;
  } v179_;
  struct {
    __int64 v183;
    unsigned __int64 v184;
    char* v185;
  } v183_;
  __int64 v186;

  v183_.v184 = 0;
  v183_.v185 = nullptr;
  v183_.v183 = 0;
  v2 = *(char**)(a2 + 8);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != nullptr) {
    v6 = *v2;
    v7 = *(const char**)a2;
    if (*v2 != 0 && strchr_alt1(*(const char**)a2, 35) != 0) {
      GameRoutine_1076d60_alt1((void*)(&v179_.v179), (__int64*)(a2 + 392), v6);
      if ((v183_.v183 & 1) == 0) {
        goto LABEL_24;
      }
      goto LABEL_20;
    }
  }
  else {
    v7 = *(const char**)a2;
  }
  if (v7 != nullptr) {
    v8 = v7;
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = strlen_alt1(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(*v5, v12, 16, 0);
    v179_.v180 = v10;
    v179_.v181 = (__int64)v11;
    v179_.v179 = v12 | 1;
    goto LABEL_18;
  }
  LOBYTE(v179_.v179) = 2 * v9;
  v11 = (char*)&v179_.v179 + 1;
  if (v9 != 0) {
  LABEL_18:
    memmove_alt1((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  if ((v183_.v183 & 1) != 0) {
  LABEL_20:
    if (v183_.v185 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*v5 + v13, (__int64)v183_.v185);
    }
  }
LABEL_24:
  v183_.v183 = v179_.v179;
  v183_.v184 = v179_.v180;
  v183_.v185 = (char*)v179_.v181;
  if ((v179_.v179 & 1) != 0) {
    v14 = v183_.v185;
  }
  else {
    v14 = (char*)&v183_.v183 + 1;
  }
  if ((v179_.v179 & 1) != 0) {
    v15 = v183_.v184;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v179_.v179 >> 1;
  }
  CharacterAppearance_1075a00_alt2(a1 + 176, (__int64)v14, v15);
  v16 = *(_BYTE**)(a2 + 16);
  if (v16 != nullptr && *v16 != 0) {
    v17 = strlen_alt1(*(const char**)(a2 + 16));
    CharacterAppearance_1075a00_alt2(a1 + 248, (__int64)v16, v17);
    if (*(_QWORD*)(a2 + 24) != 0) {
      v18 = *(const char**)(a2 + 24);
    }
    else {
      v18 = &GameData_1a9f09e;
    }
    v19 = strlen_alt1(v18);
    CharacterAppearance_1075a00_alt2(a1 + 320, (__int64)v18, v19);
    if (*(_QWORD*)(a2 + 128) != 0) {
      v20 = *(const char**)(a2 + 128);
    }
    else {
      v20 = &GameData_1a9f09e;
    }
    v21 = strlen_alt1(v20);
    CharacterAppearance_1075a00_alt2(a1 + 1328, (__int64)v20, v21);
  }
  if (*(_QWORD*)(a2 + 64) != 0) {
    v22 = *(const char**)(a2 + 64);
  }
  else {
    v22 = &GameData_1a9f09e;
  }
  v23 = strlen_alt1(v22);
  CharacterAppearance_1075a00_alt2(a1 + 392, (__int64)v22, v23);
  if (*(_QWORD*)(a2 + 56) != 0) {
    v24 = *(const char**)(a2 + 56);
  }
  else {
    v24 = &GameData_1a9f09e;
  }
  v25 = strlen_alt1(v24);
  CharacterAppearance_1075a00_alt2(a1 + 464, (__int64)v24, v25);
  if (*(_QWORD*)(a2 + 32) != 0) {
    v26 = *(const char**)(a2 + 32);
  }
  else {
    v26 = &GameData_1a9f09e;
  }
  v27 = strlen_alt1(v26);
  CharacterAppearance_1075a00_alt2(a1 + 536, (__int64)v26, v27);
  if (*(_QWORD*)(a2 + 40) != 0) {
    v28 = *(const char**)(a2 + 40);
  }
  else {
    v28 = &GameData_1a9f09e;
  }
  v29 = strlen_alt1(v28);
  CharacterAppearance_1075a00_alt2(a1 + 608, (__int64)v28, v29);
  if (*(_QWORD*)(a2 + 48) != 0) {
    v30 = *(const char**)(a2 + 48);
  }
  else {
    v30 = &GameData_1a9f09e;
  }
  v31 = strlen_alt1(v30);
  CharacterAppearance_1075a00_alt2(a1 + 680, (__int64)v30, v31);
  v32 = 954437177 * ((*(_QWORD*)(a2 + 144) - *(_QWORD*)(a2 + 136)) >> 3);
  if (v32 >= 1) {
    v33 = (_QWORD*)(a1 + 1400);
    v34 = a1 + 752;
    v35 = 0;
    if ((unsigned int)v32 >= 4) {
      v36 = 4;
    }
    else {
      v36 = (unsigned int)v32;
    }
    do {
      if (*(_QWORD*)(*(_QWORD*)(a2 + 136) + 8 * v35) != 0) {
        v37 = *(const char**)(*(_QWORD*)(a2 + 136) + 8 * v35);
      }
      else {
        v37 = &GameData_1a9f09e;
      }
      v38 = strlen_alt1(v37);
      CharacterAppearance_1075a00_alt2(v34, (__int64)v37, v38);
      --v36;
      v34 += 72;
      v39 = *(_QWORD*)(a2 + 136) + 8 * v35;
      v35 += 9;
      *v33++ = *(_QWORD*)(v39 + 8);
    } while (v36 != 0);
  }
  v40 = *(__int64**)(a1 + 11640);
  v41 = *(__int64**)(a1 + 11632);
  while (v40 != v41) {
    v42 = v40;
    if ((*(_BYTE*)(v40 - 3) & 1) != 0) {
      v43 = *(v40 - 1);
      if (v43 != 0) {
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*v5 + v44, v43);
      }
    }
    v40 -= 6;
    if ((*(_BYTE*)(v42 - 6) & 1) != 0) {
      v45 = *(v42 - 4);
      if (v45 != 0) {
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*v5 + v46, v45);
      }
    }
  }
  *(_QWORD*)(a1 + 11640) = v41;
  v178 = a2;
  v47 = *(_QWORD*)(a2 + 160);
  v48 = *(_QWORD*)(a2 + 168);
  if (v47 != v48) {
    v49 = (__int64*)GameData_212d268;
    do {
      v52 = *(_QWORD*)(v47 + 48);
      v53 = (*(_QWORD*)(v47 + 56) - v52) >> 3;
      if (*(_QWORD*)(v47 + 56) == v52) {
        v54 = v49;
      }
      else {
        v54 = *(__int64**)(v47 + 48);
      }
      v55 = (__int64*)(v52 + 24);
      v56 = 0xAAAAAAAAAAAAAAABLL * v53 > 1;
      v57 = *(_QWORD*)(a1 + 11648);
      if (v56) {
        v58 = v55;
      }
      else {
        v58 = v49;
      }
      if ((unsigned __int64)v41 >= v57) {
        v61 = *(_QWORD*)(a1 + 11632);
        v62 = (char*)v41 - v61;
        v63 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v41 - v61) >> 4) + 1;
        if (v63 > 0x555555555555555LL) {
          GameRoutine_1075360_alt1();
        }
        v64 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v57 - v61) >> 4);
        if (2 * v64 > v63) {
          v63 = 2 * v64;
        }
        if (v64 >= 0x2AAAAAAAAAAAAAALL) {
          v65 = 0x555555555555555LL;
        }
        else {
          v65 = v63;
        }
        if (v65 != 0) {
          if (v65 > 0x555555555555555LL) {
            GameRoutine_60a210_alt1();
          }
          v66 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v65, 16, 0);
        }
        else {
          v66 = 0;
        }
        v67 = (__int64*)&v62[v66];
        if ((*(_BYTE*)v54 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(v67, v54[2], v54[1]);
          if ((*(_BYTE*)v58 & 1) == 0) {
            goto LABEL_108;
          }
        LABEL_106:
          fw_text_String_CopyTerminated_alt1(v67 + 3, v58[2], v58[1]);
        }
        else {
          v68 = *v54;
          v69 = v54[2];
          v67[1] = v54[1];
          v67[2] = v69;
          *v67 = v68;
          if ((*(_BYTE*)v58 & 1) != 0) {
            goto LABEL_106;
          }
        LABEL_108:
          v70 = *v58;
          v71 = v58[2];
          v67[4] = v58[1];
          v67[5] = v71;
          v67[3] = v70;
        }
        v72 = *(_QWORD*)(a1 + 11632);
        v73 = v66 + 48 * v65;
        v41 = v67 + 6;
        v74 = *(_QWORD*)(a1 + 11640) - v72;
        v75 = (__int64)v67 - v74;
        memcpy_alt1(v75, v72, v74);
        *(_QWORD*)(a1 + 11632) = v75;
        *(_QWORD*)(a1 + 11640) = v41;
        *(_QWORD*)(a1 + 11648) = v73;
        if (v72 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v72);
        }
        goto LABEL_81;
      }
      if ((*(_BYTE*)v54 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v41, v54[2], v54[1]);
        if ((*(_BYTE*)v58 & 1) != 0) {
        LABEL_102:
          fw_text_String_CopyTerminated_alt1(v41 + 3, v58[2], v58[1]);
          goto LABEL_80;
        }
      }
      else {
        v59 = *v54;
        v60 = v54[2];
        v41[1] = v54[1];
        v41[2] = v60;
        *v41 = v59;
        if ((*(_BYTE*)v58 & 1) != 0) {
          goto LABEL_102;
        }
      }
      v50 = *v58;
      v51 = v58[2];
      v41[4] = v58[1];
      v41[5] = v51;
      v41[3] = v50;
    LABEL_80:
      v41 += 6;
    LABEL_81:
      v47 += 72;
      *(_QWORD*)(a1 + 11640) = v41;
    } while (v47 != v48);
  }
  v77 = fw_memory_g_heap_manager_ptr;
  v78 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 5120, 16, 0);
  memset_alt1(v78, 0, 0x1400u);
  v79 = v78;
  v80 = *(_QWORD*)(a1 + 11608);
  *(_QWORD*)(a1 + 11608) = v79;
  if (v80 != 0) {
    v81 = v178;
    v82 = -5120;
    v83 = (__int64*)(v80 + 5112);
    do {
      v84 = *v83;
      *v83 = 0;
      if (v84 != 0) {
        GameHr_7f7720((__int64)v83, v84);
      }
      v82 += 8;
      --v83;
    } while (v82 != 0);
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)v77 + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v77 + v85, v80);
    v79 = *(_QWORD*)(a1 + 11608);
  }
  else {
    v81 = v178;
  }
  GameHr_1070d60(v79, (_QWORD*)(v81 + 104));
  FaceSetFile_10acb20_alt1(a1 + 1432, *(_QWORD*)(v81 + 128));
  v86 = *(char**)(v81 + 320);
  if (v86 == nullptr) {
    v86 = &GameData_1a9f09e;
  }
  *(_QWORD*)a1 = v86;
  v87 = *(char**)(v81 + 80);
  if (v87 == nullptr) {
    v87 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 8) = v87;
  v88 = *(char**)(v81 + 88);
  if (v88 == nullptr) {
    v88 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 16) = v88;
  v89 = *(char**)(v81 + 96);
  if (v89 == nullptr) {
    v89 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 24) = v89;
  *(_DWORD*)(a1 + 11800) = game_character_1077fb0(*(const char**)(v81 + 216));
  v90 = *(const char**)(v81 + 72);
  *(_QWORD*)(a1 + 11616) = v90;
  *(_DWORD*)(a1 + 11624) = (unsigned int)game_character_1077790_alt1(v90);
  v91 = *(float*)(v81 + 224);
  *(float*)(a1 + 40) = v91;
  v92 = *(float*)(v81 + 228);
  *(float*)(a1 + 32) = v92;
  *(_DWORD*)(a1 + 36) = *(_DWORD*)(v81 + 232);
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(v81 + 236);
  if (v92 > 0x0.0p+0f) {
    *(float*)(a1 + 40) = v91 / v92;
  }
  *(_QWORD*)(a1 + 48) = *(_QWORD*)(v81 + 344);
  *(_DWORD*)(a1 + 56) = *(_DWORD*)(v81 + 240);
  *(_DWORD*)(a1 + 60) = *(_DWORD*)(v81 + 244);
  *(_DWORD*)(a1 + 64) = *(_DWORD*)(v81 + 248);
  *(_DWORD*)(a1 + 68) = *(_DWORD*)(v81 + 256);
  *(_DWORD*)(a1 + 72) = *(_DWORD*)(v81 + 260);
  *(_DWORD*)(a1 + 76) = *(_DWORD*)(v81 + 264);
  *(_DWORD*)(a1 + 80) = *(_DWORD*)(v81 + 268);
  *(_DWORD*)(a1 + 84) = *(_DWORD*)(v81 + 272);
  *(_DWORD*)(a1 + 88) = *(_DWORD*)(v81 + 276);
  *(_DWORD*)(a1 + 92) = *(_DWORD*)(v81 + 280);
  *(_DWORD*)(a1 + 96) = *(_DWORD*)(v81 + 284);
  *(_DWORD*)(a1 + 100) = *(_DWORD*)(v81 + 288);
  *(_DWORD*)(a1 + 104) = *(_DWORD*)(v81 + 292);
  *(_DWORD*)(a1 + 108) = *(_DWORD*)(v81 + 296);
  *(_DWORD*)(a1 + 112) = *(_DWORD*)(v81 + 300);
  *(_DWORD*)(a1 + 116) = *(_DWORD*)(v81 + 304);
  *(_DWORD*)(a1 + 120) = *(_DWORD*)(v81 + 308);
  *(_DWORD*)(a1 + 124) = *(_DWORD*)(v81 + 312);
  *(_DWORD*)(a1 + 128) = *(_DWORD*)(v81 + 252);
  v93 = *(char**)(v81 + 184);
  if (v93 == nullptr) {
    v93 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 136) = v93;
  *(_DWORD*)(a1 + 144) = *(_DWORD*)(v81 + 192);
  v94 = *(char**)(v81 + 200);
  if (v94 == nullptr) {
    v94 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 152) = v94;
  *(_DWORD*)(a1 + 160) = *(_DWORD*)(v81 + 208);
  if ((GameRoutine_1073980_alt1(a1, (unsigned __int8*)(a1 + 400)) & 1) == 0) {
    GameRoutine_1073980_alt1(a1, (unsigned __int8*)(a1 + 472));
  }
  v95 = *(_QWORD*)(a1 + 11656);
  v96 = &v179_.v179;
  v179_.v182 = &v179_.v179;
  *(_QWORD*)(a1 + 11664) = v95;
  v97 = *(_QWORD**)(v81 + 368);
  v179_.v179 = (__int64)GameData_20064c0;
  v179_.v180 = a1;
  if (v97 == nullptr) {
    goto LABEL_146;
  }
  v96 = &v179_.v179;
  v186 = v97[3];
  while (1) {
    (*(void (**)(__int64*, __int64*))(*v96 + 48))(v96, &v186);
    v97 = (_QWORD*)*v97;
    v96 = v179_.v182;
    if (v97 == nullptr) {
      break;
    }
    v186 = v97[3];
    if (v179_.v182 == nullptr) {
      GameRoutine_60a310_alt1();
    }
  }
  if (v179_.v182 == &v179_.v179) {
  LABEL_146:
    v98 = 32;
  }
  else {
    if (v179_.v182 == nullptr) {
      goto LABEL_148;
    }
    v98 = 40;
  }
  (*(void (**)(__int64))(*v96 + v98))((__int64)v96);
LABEL_148:
  if (*(_QWORD*)(v81 + 376) != 0) {
    v99 = game_HashString_alt1((__int64)&GameData_1adf1c1);
    v100 = *(_QWORD*)(v81 + 360);
    if (v100 != 0 && *(_QWORD*)(v81 + 376) != 0) {
      v101 = v100 - 1;
      if ((v100 & (v100 - 1)) != 0) {
        v102 = v99;
        if (v99 >= v100) {
          v102 = v99 % v100;
        }
      }
      else {
        v102 = v101 & v99;
      }
      v103 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v102);
      if (v103 != nullptr) {
        v104 = (_QWORD*)*v103;
        if (v104 != nullptr) {
          if ((v100 & v101) == 0) {
            while (1) {
              v106 = v104[1];
              if (v99 == v106) {
                if (v104[2] == v99) {
                  goto LABEL_171;
                }
              }
              else if ((v106 & v101) != v102) {
                goto LABEL_172;
              }
              v104 = (_QWORD*)*v104;
              if (v104 == nullptr) {
                goto LABEL_172;
              }
            }
          }
          do {
            v105 = v104[1];
            if (v99 == v105) {
              if (v104[2] == v99) {
              LABEL_171:
                *(_DWORD*)(a1 + 11704) |= 0x1000u;
                break;
              }
            }
            else {
              if (v105 >= v100) {
                v105 %= v100;
              }
              if (v105 != v102) {
                break;
              }
            }
            v104 = (_QWORD*)*v104;
          } while (v104 != nullptr);
        }
      }
    }
  LABEL_172:
    v107 = game_HashString_alt1((__int64)&GameData_1ab7c2e);
    v108 = *(_QWORD*)(v81 + 360);
    if (v108 != 0 && *(_QWORD*)(v81 + 376) != 0) {
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
      v111 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v110);
      if (v111 != nullptr) {
        v112 = (_QWORD*)*v111;
        if (v112 != nullptr) {
          if ((v108 & v109) == 0) {
            while (1) {
              v114 = v112[1];
              if (v107 == v114) {
                if (v112[2] == v107) {
                  goto LABEL_258;
                }
              }
              else if ((v114 & v109) != v110) {
                goto LABEL_193;
              }
              v112 = (_QWORD*)*v112;
              if (v112 == nullptr) {
                goto LABEL_193;
              }
            }
          }
          do {
            v113 = v112[1];
            if (v107 == v113) {
              if (v112[2] == v107) {
              LABEL_258:
                v139 = *(_DWORD*)(a1 + 11704) | 4;
              LABEL_261:
                *(_DWORD*)(a1 + 11704) = v139;
                if ((v139 & 0x1C) == 0) {
                  goto LABEL_264;
                }
                goto LABEL_236;
              }
            }
            else {
              if (v113 >= v108) {
                v113 %= v108;
              }
              if (v113 != v110) {
                break;
              }
            }
            v112 = (_QWORD*)*v112;
          } while (v112 != nullptr);
        }
      }
    }
  LABEL_193:
    v115 = game_HashString_alt1((__int64)&GameData_1ac2fd3);
    v116 = *(_QWORD*)(v81 + 360);
    if (v116 != 0 && *(_QWORD*)(v81 + 376) != 0) {
      v117 = v116 - 1;
      if ((v116 & (v116 - 1)) != 0) {
        v118 = v115;
        if (v115 >= v116) {
          v118 = v115 % v116;
        }
      }
      else {
        v118 = v117 & v115;
      }
      v119 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v118);
      if (v119 != nullptr) {
        v120 = (_QWORD*)*v119;
        if (v120 != nullptr) {
          if ((v116 & v117) == 0) {
            while (1) {
              v122 = v120[1];
              if (v115 == v122) {
                if (v120[2] == v115) {
                  goto LABEL_259;
                }
              }
              else if ((v122 & v117) != v118) {
                goto LABEL_214;
              }
              v120 = (_QWORD*)*v120;
              if (v120 == nullptr) {
                goto LABEL_214;
              }
            }
          }
          do {
            v121 = v120[1];
            if (v115 == v121) {
              if (v120[2] == v115) {
              LABEL_259:
                v139 = *(_DWORD*)(a1 + 11704) | 8;
                goto LABEL_261;
              }
            }
            else {
              if (v121 >= v116) {
                v121 %= v116;
              }
              if (v121 != v118) {
                break;
              }
            }
            v120 = (_QWORD*)*v120;
          } while (v120 != nullptr);
        }
      }
    }
  LABEL_214:
    v123 = game_HashString_alt1((__int64)&GameData_1aed621);
    v124 = *(_QWORD*)(v81 + 360);
    if (v124 != 0 && *(_QWORD*)(v81 + 376) != 0) {
      v125 = v124 - 1;
      if ((v124 & (v124 - 1)) != 0) {
        v126 = v123;
        if (v123 >= v124) {
          v126 = v123 % v124;
        }
      }
      else {
        v126 = v125 & v123;
      }
      v127 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v126);
      if (v127 != nullptr) {
        v128 = (_QWORD*)*v127;
        if (v128 != nullptr) {
          if ((v124 & v125) == 0) {
            while (1) {
              v130 = v128[1];
              if (v123 == v130) {
                if (v128[2] == v123) {
                  goto LABEL_260;
                }
              }
              else if ((v130 & v125) != v126) {
                goto LABEL_235;
              }
              v128 = (_QWORD*)*v128;
              if (v128 == nullptr) {
                goto LABEL_235;
              }
            }
          }
          do {
            v129 = v128[1];
            if (v123 == v129) {
              if (v128[2] == v123) {
              LABEL_260:
                v139 = *(_DWORD*)(a1 + 11704) | 0x10;
                goto LABEL_261;
              }
            }
            else {
              if (v129 >= v124) {
                v129 %= v124;
              }
              if (v129 != v126) {
                break;
              }
            }
            v128 = (_QWORD*)*v128;
          } while (v128 != nullptr);
        }
      }
    }
  LABEL_235:
    if ((*(_DWORD*)(a1 + 11704) & 0x1C) == 0) {
    LABEL_264:
      v140 = game_HashString_alt1((__int64)&GameData_1a8e425);
      v141 = *(_QWORD*)(v81 + 360);
      if (v141 == 0 || *(_QWORD*)(v81 + 376) == 0) {
        goto LABEL_287;
      }
      v142 = v141 - 1;
      if ((v141 & (v141 - 1)) != 0) {
        v143 = v140;
        if (v140 >= v141) {
          v143 = v140 % v141;
        }
      }
      else {
        v143 = v142 & v140;
      }
      v144 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v143);
      if (v144 == nullptr) {
        goto LABEL_287;
      }
      v145 = (_QWORD*)*v144;
      if (v145 == nullptr) {
        goto LABEL_287;
      }
      if ((v141 & v142) == 0) {
        while (1) {
          v147 = v145[1];
          if (v140 == v147) {
            if (v145[2] == v140) {
              goto LABEL_286;
            }
          }
          else if ((v147 & v142) != v143) {
            goto LABEL_287;
          }
          v145 = (_QWORD*)*v145;
          if (v145 == nullptr) {
            goto LABEL_287;
          }
        }
      }
      while (1) {
        v146 = v145[1];
        if (v140 == v146) {
          if (v145[2] == v140) {
          LABEL_286:
            *(_DWORD*)(a1 + 11704) |= 0x80u;
            goto LABEL_287;
          }
        }
        else {
          if (v146 >= v141) {
            v146 %= v141;
          }
          if (v146 != v143) {
            goto LABEL_287;
          }
        }
        v145 = (_QWORD*)*v145;
        if (v145 == nullptr) {
          goto LABEL_287;
        }
      }
    }
  LABEL_236:
    v131 = game_HashString_alt1((__int64)&GameData_1ab10ed);
    v132 = *(_QWORD*)(v81 + 360);
    if (v132 == 0 || *(_QWORD*)(v81 + 376) == 0) {
      goto LABEL_264;
    }
    v133 = v132 - 1;
    if ((v132 & (v132 - 1)) != 0) {
      v134 = v131;
      if (v131 >= v132) {
        v134 = v131 % v132;
      }
    }
    else {
      v134 = v133 & v131;
    }
    v135 = *(_QWORD**)(*(_QWORD*)(v81 + 352) + 8 * v134);
    if (v135 == nullptr) {
      goto LABEL_264;
    }
    v136 = (_QWORD*)*v135;
    if (v136 == nullptr) {
      goto LABEL_264;
    }
    if ((v132 & v133) == 0) {
      while (1) {
        v138 = v136[1];
        if (v131 == v138) {
          if (v136[2] == v131) {
            goto LABEL_263;
          }
        }
        else if ((v138 & v133) != v134) {
          goto LABEL_264;
        }
        v136 = (_QWORD*)*v136;
        if (v136 == nullptr) {
          goto LABEL_264;
        }
      }
    }
    while (1) {
      v137 = v136[1];
      if (v131 == v137) {
        if (v136[2] == v131) {
        LABEL_263:
          *(_DWORD*)(a1 + 11704) |= 0x20u;
          goto LABEL_264;
        }
      }
      else {
        if (v137 >= v132) {
          v137 %= v132;
        }
        if (v137 != v134) {
          goto LABEL_264;
        }
      }
      v136 = (_QWORD*)*v136;
      if (v136 == nullptr) {
        goto LABEL_264;
      }
    }
  }
LABEL_287:
  v148 = 640;
  v149 = (__int64*)(*(_QWORD*)(a1 + 11608) + 40LL);
  while (1) {
    v150 = *(v149 - 5);
    if (v150 != 0) {
      break;
    }
    v150 = *(v149 - 4);
    if (v150 != 0) {
      break;
    }
    v150 = *(v149 - 3);
    if (v150 != 0) {
      break;
    }
    v150 = *(v149 - 2);
    if (v150 != 0) {
      break;
    }
    v150 = *(v149 - 1);
    if (v150 != 0) {
      break;
    }
    v150 = *v149;
    if (*v149 != 0) {
      break;
    }
    v150 = v149[1];
    if (v150 != 0) {
      break;
    }
    v150 = v149[2];
    if (v150 != 0) {
      break;
    }
    v150 = v149[3];
    if (v150 != 0) {
      break;
    }
    v150 = v149[4];
    if (v150 != 0) {
      break;
    }
    v149 += 10;
    v148 -= 10;
    if (v148 == 0) {
      v151 = *(_DWORD*)(a1 + 11784);
      goto LABEL_307;
    }
  }
  v152 = *(unsigned __int8*)(v150 + 8);
  v153 = v150 + 9;
  v156 = v150 + 16;
  v154 = *(_QWORD*)(v150 + 16);
  v155 = *(_QWORD*)(v156 + 8);
  v157 = (v152 & 1) == 0;
  v158 = v152 >> 1;
  if (v157) {
    v159 = v153;
  }
  else {
    v159 = v155;
  }
  if (v157) {
    v160 = v158;
  }
  else {
    v160 = v154;
  }
  game_character_10778e0_alt1((__int64)&v179_.v179, v159, v160);
  v151 = v179_.v179;
  *(_QWORD*)(a1 + 11784) = v179_.v179;
LABEL_307:
  v161 = *(unsigned __int8*)(a1 + 544);
  if ((v161 & 1) != 0) {
    v162 = *(_QWORD*)(a1 + 552);
  }
  else {
    v162 = v161 >> 1;
  }
  if (v162 == 0 && v151 - 2 <= 6) {
    v151 = GameData_1ba7f74[v151 - 2];
    *(_DWORD*)(a1 + 11784) = v151;
  }
  v163 = game_character_1077500(v151, *(_DWORD*)(a1 + 11788) == 1);
  *(_QWORD*)(a1 + 11792) = v163;
  if (v163 == nullptr) {
    *(_QWORD*)(a1 + 11792) = game_character_1077500(0, 0);
  }
  v164 = *(_DWORD*)(a1 + 11784);
  if (v164 <= 0x21 && ((1LL << v164) & 0x280100030LL) != 0) {
    v165 = *(unsigned __int8*)(a1 + 184);
    v166 = a1 + 185;
    v157 = (v165 & 1) == 0;
    v167 = v165 >> 1;
    if (!v157) {
      v166 = *(_QWORD*)(a1 + 200);
      v167 = *(_QWORD*)(a1 + 192);
    }
    if (v167 != 0) {
      v168 = 0;
      v169 = v166;
      while (v167 != v168) {
        v170 = v168;
        v171 = v169 + v167;
        --v169;
        v172 = *(unsigned __int8*)(v171 - 1);
        v168 = v170 + 1;
        if (v172 == 47) {
          if (v167 + 1 != v168) {
            if (v167 < v168) {
              String_60a250_alt1("string_view::substr");
            }
            v173 = v169 + v167;
            v167 = v170;
            v166 = v173 + 1;
          }
          break;
        }
      }
      if (v167 == 12) {
        v174 = *(_QWORD*)v166;
        v175 = *(_DWORD*)(v166 + 8);
        if (v174 == 0x7369766E495F4443LL && v175 == 1701601897) {
          *(_DWORD*)(a1 + 11704) |= 0x400u;
        }
      }
    }
  }
  game_10f8580_alt1(a1 + 11712, (_QWORD*)a1);
  *(_QWORD*)(a1 + 168) = *(_QWORD*)(v81 + 472);
  if ((v183_.v183 & 1) != 0 && v183_.v185 != nullptr) {
    v177 = 128;
    if (*(_QWORD*)(*(_QWORD*)v77 + 200LL) == 0) {
      v177 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v77 + v177,
                                       (__int64)v183_.v185);
  }
}

__int64 CharacterAppearance_10735d0(__int64 a1)
{
  __int64* v2;
  _DWORD* v3;
  int v4;
  int v5;
  __int64 result;

  v2 = GameData_212c690;
  *(_QWORD*)a1 = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 8) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 16) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 24) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 40) = 0x3F80000040200000LL;
  v3 = (_DWORD*)*v2;
  *(_DWORD*)(a1 + 56) = *v3;
  *(_DWORD*)(a1 + 60) = *v3;
  *(_DWORD*)(a1 + 64) = *v3;
  *(_DWORD*)(a1 + 68) = *v3;
  *(_DWORD*)(a1 + 72) = *v3;
  *(_DWORD*)(a1 + 76) = *v3;
  *(_DWORD*)(a1 + 80) = *v3;
  *(_DWORD*)(a1 + 84) = *v3;
  *(_DWORD*)(a1 + 88) = *v3;
  *(_DWORD*)(a1 + 92) = *v3;
  *(_DWORD*)(a1 + 96) = *v3;
  *(_DWORD*)(a1 + 100) = *v3;
  *(_DWORD*)(a1 + 104) = *v3;
  *(_DWORD*)(a1 + 108) = *v3;
  *(_DWORD*)(a1 + 112) = *v3;
  *(_DWORD*)(a1 + 116) = *v3;
  *(_DWORD*)(a1 + 120) = *v3;
  v4 = *v3;
  *(_QWORD*)(a1 + 136) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 124) = v4;
  *(_DWORD*)(a1 + 128) = 0;
  v5 = *v3;
  *(_QWORD*)(a1 + 152) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 144) = v5;
  LODWORD(v3) = *v3;
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
  *(_DWORD*)(a1 + 160) = (_DWORD)v3;
  result = memset_alt1(a1 + 1336, 0, 0x2834u);
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
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  struct {
    _BYTE v42[8];
    unsigned int v43;
  } v42_;

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
                  String_60a250_alt1("string_view::substr");
                }
                v35 = v36 - v37;
                v36 = v39 - 1;
              }
              break;
            }
          }
        }
        game_character_10778e0_alt1((__int64)v42_.v42, v35, v36);
        return v42_.v43;
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
    nn_mem_StandardAllocator_Free_alt3(*v2 + v25, (__int64)v28);
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

void game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 a1,
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
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[1458];
  v5 = v2[1459];
  if ((unsigned __int64)v4 >= v5) {
    v7 = v2[1457];
    v8 = (char*)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_60f930_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (unsigned __int64)v4 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = v3;
    v6 = (__int64)&v8[v14 + 8];
    memcpy_alt1(v17, v7, v16);
    v2[1457] = v17;
    v2[1458] = v6;
    v2[1459] = v15;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v12 + v18, v7);
    }
  }
  else {
    *v4 = v3;
    v6 = (__int64)(v4 + 1);
  }
  v2[1458] = v6;
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

void CharacterAppearance_1075a00(__int64 a1, const char* a2,
                                 unsigned __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  const char* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[3];

  if (*(_QWORD*)(a1 + 56) != 0) {
    v6 = *(_QWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 64) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  v7 = (_BYTE*)(a1 + 8);
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
  v8 = a2 - 1;
  v9 = 0;
  while (a3 != v9) {
    v10 = (unsigned __int8)v8[a3];
    ++v9;
    --v8;
    if (v10 == 41) {
      if (a3 + 1 != v9) {
        v11 = memchr_alt1((__int64)a2, 40, a3);
        if (v11 != 0) {
          v12 = v11 - (_QWORD)a2;
        }
        else {
          v12 = -1;
        }
        if (a3 < v12 + 1) {
          String_60a250_alt1("string_view::substr");
        }
        if (a3 - (v12 + 1) >= ~v9 + a3 - v12) {
          v13 = ~v9 + a3 - v12;
        }
        else {
          v13 = a3 - (v12 + 1);
        }
        GameRoutine_60a060((char*)(a1 + 32), (__int64)&a2[v12 + 1], v13);
        v14 = v12 - 1;
        if (a2[v12 - 1] != 32) {
          v14 = v12;
        }
        if (a3 >= v14) {
          a3 = v14;
        }
      }
      break;
    }
  }
  game_character_1076700((void*)((__int64)v18), a2, a3);
  if ((*v7 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 24);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  v17 = v18[1];
  *(_QWORD*)v7 = v18[0];
  *(_QWORD*)(a1 + 16) = v17;
  *(_QWORD*)(a1 + 24) = v18[2];
}

#pragma GCC visibility pop
