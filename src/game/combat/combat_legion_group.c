#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_combat_CombatLegionGroup_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* CombatLegionGroup_Destructor_alt1(_QWORD* result) __asm__(
    "CombatLegionGroup_Destructor");
__int64 memcmp(_QWORD, _QWORD);
float CombatLegionGroup_e58940(__int64 a1, __int64 a2);
__int64
CombatLegionGroup_e58ae0_alt1(__int64 a1, __int64 a2,
                              __int64 a3) __asm__("CombatLegionGroup_e58ae0");
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_e56ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fe6cf0[])();
extern __int64 (*GameData_1fe6d40[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_e3e720(__int64, __int64*, __int64, __int64, unsigned __int64,
                        char, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_e58e80(_QWORD, long double);
_QWORD* game_combat_CombatLegionGroup_AddCharacter_alt1(
    _QWORD* a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5,
    long double a6) __asm__("game_combat_CombatLegionGroup_AddCharacter");
__int64* AssetTableFile_7eb9c0(__int64* result, __int64*);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 AssetTableFile_7e9e00(__int64, unsigned __int8*, unsigned int, char);
__int64 CharacterAppearance_10735d0(__int64);
__int64 TrickEntity_7d1480(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 game_character_CharacterAppearance_Setup(unsigned __int64, char**);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d448[9];
extern __int64 GameData_21c96d8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
void CombatLegionManager_e2ddb0(__int64, __int64, __int64);
void game_combat_e3f310(_QWORD*);
__attribute__((swiftcall)) void
CombatLegionGroup_e57320(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2,
                         unsigned int a3, char a4);
void CombatLegionGroup_e58720(__int64 a1);
__int64* GameHr_a867a0(__int64* result);
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameRoutine_e3e720_alt1(__int64, __int64*, __int64, __int64,
                                unsigned __int64, char,
                                unsigned __int64) __asm__("GameRoutine_e3e720");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameRoutine_e56ec0_alt1(__int64, _QWORD*, __int64,
                             unsigned __int64) __asm__("GameRoutine_e56ec0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_e58e80_alt1() __asm__("GameRoutine_e58e80");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CombatLegionGroup_Destructor(_QWORD* a1);
_QWORD* game_combat_CombatLegionGroup_AddCharacter(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   unsigned __int64 a5);
__int64 CombatLegionGroup_e58ae0(__int64 a1, __int64 a2, unsigned __int64 a3);
_QWORD* GameRoutine_70f1c0(_QWORD* result, unsigned __int64*);
__attribute__((swiftcall)) void
CombatLegionGroup_e57320_alt1(PSEUDO_X8, __int64, __int64, __int64,
                              char) __asm__("CombatLegionGroup_e57320");
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 GameHr_7e8000(__int64);
__int64 game_HashString(__int64 result);
__int64 game_character_1084940(__int64 result, char, float);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN GameData_1a9d735;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c890[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
void TrickEntity_7d1480_alt1(__int64) __asm__("TrickEntity_7d1480");
void __attribute__((noreturn)) GameRoutine_e58ea0();
void __attribute__((noreturn)) GameRoutine_e58fb0();
void __attribute__((noreturn)) GameRoutine_e58fd0();
void game_character_CharacterAppearance_Setup_alt1(
    unsigned __int64,
    __int64) __asm__("game_character_CharacterAppearance_Setup");
void CombatLegionGroup_e57880(_QWORD* a1);
__int64 GameHr_1083840(__int64 result);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
__int64 game_combat_CombatLegionGroup_AddCharacter_lambda0_Invoke(double a1,
                                                                  double a2,
                                                                  __int64 a3,
                                                                  __int64* a4);
__attribute__((swiftcall)) void

CombatLegionGroup_e57320(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2,
                         unsigned int a3, char a4)
{
  unsigned __int64* a5 = (unsigned __int64*)PSEUDO_X8_VALUE(x8_);
  int v5;
  int v6;
  int v7;
  unsigned int v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned int v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  int v21;
  char v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  const char* v39;
  struct {
    char* v40[30];
    int v41;
    int v42;
    int v43;
    char gap260_[68];
    __int64 v44;
    __int64 v45;
    char gap344_[8];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    int v51;
    char gap396_[4];
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v40_;

  v9 = *(_DWORD*)(a1 + 112);
  if (v9 != 0) {
    if (v9 != 1) {
    LABEL_17:
      v20 = 0;
      v21 = 0;
      v22 = 1;
      goto LABEL_21;
    }
    v9 = 1;
  }
  v11 = GameData_212d448[0];
  v12 = *GameData_212d448[0] + 24LL * v9;
  v13 = *(_QWORD*)(v12 + 32);
  if (v13 == 0) {
    goto LABEL_17;
  }
  v14 = a2;
  v15 = a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  v16 = *(_QWORD*)(v12 + 40);
  v17 = *(_QWORD*)(v13 + 8) == -1 || v16 == 0;
  if (v17 || (v18 = *(_QWORD*)(v16 + 80)) == 0 ||
      (*(_QWORD*)(v18 + 8) != -1 ? (v19 = *(_QWORD*)(v16 + 88) == 0)
                                 : (v19 = true),
       v19 || *(_QWORD*)(v13 + 8) == -1)) {
    std___1___shared_weak_count___release_weak_alt1(v13);
    v20 = 0;
    goto LABEL_19;
  }
  std___1___shared_weak_count___release_weak_alt1(v13);
  v20 = *(_QWORD*)(*(_QWORD*)(*v11 + 8) + 96LL * *(int*)(v16 + 96) + 256);
  if (v20 == 0) {
  LABEL_19:
    v21 = 0;
    v22 = 1;
    goto LABEL_20;
  }
  v39 = "BMAP";
  AssetTableFile_7e9960((__int64)v40_.v40, v20, (__int64*)&v39);
  v5 = v40_.v41;
  v6 = v40_.v42;
  v7 = v40_.v43;
  TrickEntity_7d1480((__int64)v40_.v40);
  v21 = 1;
  v22 = 0;
LABEL_20:
  a3 = v15;
  a2 = v14;
LABEL_21:
  v40_.v40[25] = nullptr;
  v40_.v40[27] = nullptr;
  memset(v40_.v40, 0, 192);
  v40_.v51 = 1065353216;
  v23 = (int*)GameData_21d9d18;
  v24 = GameData_21d9d20;
  v40_.v44 = 0;
  v40_.v45 = 0;
  v40_.v46 = 0;
  v40_.v47 = 0;
  v40_.v48 = 0;
  v40_.v49 = 0;
  v40_.v50 = 0;
  v40_.v52 = 0;
  v40_.v53 = 0;
  v40_.v54 = 0;
  v40_.v55 = 0;
  v40_.v56 = 0;
  v40_.v57 = 0;
  v40_.v58 = 0;
  v40_.v59 = 0;
  v40_.v60 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v25 = *v23++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v25) = 0;
    } while (v23 != (int*)v24);
    v23 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v23;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9d78 = 8;
  AssetTableFile_7e9e00((__int64)v40_.v40, a2, a3, a4 & 1);
  if ((v22 & 1) == 0) {
    v26 = *(_QWORD*)(v20 + 392);
    if (v26 != 0) {
      v27 = *(_QWORD*)(v26 + 24);
      v28 = *(__int64**)(v27 + 32);
      v29 = *(__int64**)(v27 + 40);
      if (v28 != v29) {
        AssetTableFile_7eb9c0(v28, v29);
        game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
      }
    }
  }
  AssetTableFile_7e8000((__int64)v40_.v40);
  if (v21 != 0) {
    v40_.v41 = v5;
    v40_.v42 = v6;
    v40_.v43 = v7;
  }
  if (v40_.v40[0] != nullptr && *v40_.v40[0] != 0) {
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
    v30[2] = 0;
    v31 = (unsigned __int64)(v30 + 3);
    v32 = (unsigned __int64)v30;
    *v30 = GameData_212d3c8[0] + 2;
    v30[1] = 0;
    CharacterAppearance_10735d0((__int64)(v30 + 3));
    *a5 = v31;
    a5[1] = v32;
    game_character_CharacterAppearance_Setup(v31, v40_.v40);
  }
  else {
    *a5 = 0;
    a5[1] = 0;
  }
  {
    TrickEntity_7d1480((__int64)v40_.v40);
    return;
  }
}

void CombatLegionGroup_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = (__int64*)a1[8];
  v2 = (__int64*)a1[9];
  *a1 = game_combat_CombatLegionGroup_vtable;
  if (v1 != v2) {
    do {
      v5 = *v1;
      v6 = *(_QWORD*)(*v1 + 48);
      if (v6 == 0 || (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v5 + 56) == 0)
                                               : (v7 = true),
                      v7)) {
        v4 = 0;
      }
      else {
        v4 = *(_QWORD*)(v5 + 8);
      }
      v25 = v4;
      GameHr_a867a0(&v25);
      ++v1;
    } while (v1 != v2);
    v1 = (__int64*)a1[8];
  }
  v8 = a1[11];
  v9 = a1[2];
  v10 = a1[3];
  a1[9] = v1;
  a1[12] = v8;
  if (v9 != v10) {
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
      v10 -= 16;
    } while (v10 != v9);
    v8 = a1[11];
  }
  a1[3] = v9;
  if (v8 != 0) {
    v12 = fw_memory_g_heap_manager;
    a1[12] = v8;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v12 + v13, v8);
  }
  v14 = a1[8];
  if (v14 != 0) {
    v15 = fw_memory_g_heap_manager;
    a1[9] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v15 + v16, v14);
  }
  v17 = a1[5];
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    a1[6] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v18 + v19, v17);
  }
  v20 = a1[2];
  if (v20 != 0) {
    v21 = a1[3];
    if (v20 == v21) {
      goto LABEL_39;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt2(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = a1[2];
    a1[3] = v20;
    v20 = v23;
    if (v23 != 0) {
    LABEL_39:
      v24 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v24, v20);
    }
  }
}

void CombatLegionGroup_e57880(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  char* v39;
  unsigned __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  int v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  char v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  bool v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  bool v80;
  _QWORD* v81;
  _QWORD* v82;
  __int64* v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  bool v88;
  atomic_ullong* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  char* v94;
  unsigned __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  char* v108;
  __int64* v109;
  unsigned __int64 add;
  __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v120;
  unsigned __int64 v121;
  _QWORD* v122;
  _QWORD* v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  int* v127;
  __int64 v128;
  __int64 v129;
  _QWORD* v130;
  unsigned __int64 v131;
  __int64 v132;
  atomic_ullong* v133;
  int i;
  unsigned __int64 v135;
  bool v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  bool v149;
  _QWORD* v150;
  __int64* v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  bool v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _QWORD* v160;
  __int64* v161;
  struct {
    __int64 v163;
    char* v164;
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
    __int64 v178;
    __int64 v179;
    __int64 v180;
    __int64 v181;
    __int64 v182;
    __int64 v183;
    __int64 v184;
    __int64 v185;
    __int64 v186;
    char gap240_[8];
    __int64 v187;
    char gap256_[8];
    __int64 v188;
    char gap272_[96];
    __int64 v189;
    __int64 v190;
    char gap384_[8];
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int64 v194;
    __int64 v195;
    int v196;
    char gap436_[4];
    __int64 v197;
    __int64 v198;
    __int64 v199;
    __int64 v200;
    __int64 v201;
    __int64 v202;
    __int64 v203;
    __int64 v204;
    __int64 v205;
  } v163_;
  __int64 v206;
  struct {
    unsigned __int64 v207;
    __int64 v208;
  } v207_;

  v1 = *(_QWORD*)(*(_QWORD*)(a1[1] + 40LL) + 128LL);
  if (v1 != 0) {
    v2 = *(_QWORD**)(v1 + 80);
    v3 = *(_QWORD**)(v1 + 88);
    if (v2 != v3) {
      v158 = *(_QWORD*)(*(_QWORD*)(a1[1] + 40LL) + 128LL);
      v4 = 0;
      v5 = nullptr;
      v6 = 0;
      do {
        v7 = wld_Crc32(0, "CreateLegion", 0xCu);
        if (v7 == (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v2 + 32LL))(*v2)) {
          v8 = *v2;
          if ((unsigned __int64)v5 < v4) {
            *v5++ = v8;
          }
          else {
            v9 = (unsigned __int64)v5 - v6;
            v10 = v6;
            v11 = ((__int64)v5 - v6) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              GameRoutine_e58fb0();
            }
            v13 = v4 - v10;
            v14 = v10;
            v15 = (__int64)(v4 - v10) >> 2;
            if (v15 > v12) {
              v12 = v15;
            }
            if (v13 >= 0x7FFFFFFFFFFFFFF8LL) {
              v16 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v16 = v12;
            }
            if (v16 != 0) {
              if (v16 >> 61 != 0) {
              LABEL_243:
                GameRoutine_60a210_alt1();
              }
              v17 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
            }
            else {
              v17 = 0;
            }
            v4 = v17 + 8 * v16;
            v6 = v17 + v9 - 8 * v11;
            *(_QWORD*)(v17 + v9) = v8;
            v5 = (_QWORD*)(v17 + v9 + 8);
            memcpy_alt1(v6, v14, v9);
            if (v14 != 0) {
              v18 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v18 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v14);
            }
          }
        }
        v2 += 2;
      } while (v2 != v3);
      v19 = (__int64)a1;
      v159 = v6;
      if ((_QWORD*)v6 != v5) {
        v20 = (_QWORD*)v6;
        v160 = v5;
        do {
          v22 = *v20;
          if (*(_QWORD*)(**(_QWORD**)(*v20 + 48LL) +
                         8LL * (((*(_DWORD*)(*(_QWORD*)(*v20 + 48LL) + 88LL) -
                                  1) &
                                 0xFFFFFFFD) == 0) +
                         16) == v19) {
            v23 = *(unsigned __int8*)(v22 + 64);
            if ((v23 & 1) != 0) {
              v24 = *(_QWORD*)(v22 + 72);
            }
            else {
              v24 = v23 >> 1;
            }
            if (v24 != 0) {
              v207_.v207 = 0;
              if ((*(_BYTE*)(*v20 + 64LL) & 1) != 0) {
                v25 = *(_QWORD*)(*v20 + 80LL);
              }
              else {
                v25 = *v20 + 65LL;
              }
              v163_.v164 = (char*)v25;
              v163_.v163 = game_HashString(v25);
              GameRoutine_70f1c0(&v207_.v207, (unsigned __int64*)&v163_.v163);
              v26 = *(_DWORD*)(*v20 + 56LL);
              if (v26 >= 6) {
                v27 = 6;
              }
              else {
                v27 = *(_DWORD*)(*v20 + 56LL);
              }
              if (v26 >= 1) {
                v28 = 0;
                v29 = 0;
                v30 = nullptr;
                v31 = 0;
                while (1) {
                  CombatLegionGroup_e57320_alt1((void*)(&v163_.v163), v19,
                                                (__int64)&v207_.v207, v28,
                                                *(_BYTE*)(*v20 + 88LL));
                  v32 = v163_.v163;
                  if (v163_.v163 != 0) {
                    if ((unsigned __int64)v30 >= v31) {
                      v34 = (unsigned __int64)v30 - v29;
                      v35 = ((__int64)v30 - v29) >> 4;
                      v36 = v35 + 1;
                      if ((unsigned __int64)(v35 + 1) >> 60 != 0) {
                        GameRoutine_e58ea0();
                      }
                      if ((__int64)(v31 - v29) >> 3 > v36) {
                        v36 = (__int64)(v31 - v29) >> 3;
                      }
                      if (v31 - v29 >= 0x7FFFFFFFFFFFFFF0LL) {
                        v37 = 0xFFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v37 = v36;
                      }
                      if (v37 >> 60 != 0) {
                        goto LABEL_243;
                      }
                      v38 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v37, 16,
                          0);
                      v39 = v163_.v164;
                      v40 = (unsigned __int64*)(v38 + v34);
                      *v40 = v32;
                      v40[1] = (unsigned __int64)v39;
                      if (v39 != nullptr) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v39 + 8), 1u,
                            memory_order_relaxed);
                      }
                      v41 = (__int64)&v40[-2 * v35];
                      v31 = v38 + 16 * v37;
                      v30 = (__int64*)(v40 + 2);
                      memcpy_alt1(v41, v29, v34);
                      if (v29 != 0) {
                        v42 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v42 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v29);
                      }
                      v19 = (__int64)a1;
                      v29 = v41;
                    }
                    else {
                      *v30 = v163_.v163;
                      v33 = v163_.v164;
                      v30[1] = (__int64)v163_.v164;
                      if (v33 != nullptr) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v33 + 8), 1u,
                            memory_order_relaxed);
                      }
                      v30 += 2;
                    }
                  }
                  v43 = (__int64)v163_.v164;
                  if (v163_.v164 != nullptr &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v163_.v164 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
                    std___1___shared_weak_count___release_weak_alt2(v43);
                  }
                  if (v27 == ++v28) {
                    goto LABEL_66;
                  }
                }
              }
              v30 = nullptr;
              v29 = 0;
            LABEL_66:
              v22 = *v20;
            }
            else {
              v30 = nullptr;
              v29 = 0;
            }
            if (*(int*)(v22 + 56) >= 1) {
              v44 = 0;
              while (1) {
                v45 = *(unsigned __int8*)(v22 + 64);
                v46 = *(_QWORD*)(v22 + 72);
                if ((v45 & 1) == 0) {
                  v46 = v45 >> 1;
                }
                if (v46 != 0) {
                  break;
                }
                v56 = *(_QWORD*)(v19 + 40);
                v57 = *(_QWORD*)(v19 + 48) - v56;
                if (v57 != 0) {
                  v58 = *(int*)(v19 + 124);
                  *(_DWORD*)(v19 + 124) = v58 + 1;
                  v59 = *(
                      _QWORD*)(*(_QWORD*)(v56 + 8LL * (int)(v58 % (v57 >> 3))) +
                               56LL);
                  v54 = *(_QWORD*)(v59 + 392);
                  v55 = *(_QWORD*)(v59 + 400);
                  if (v55 != 0) {
                  LABEL_79:
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v55 + 8), 1u,
                        memory_order_relaxed);
                  LABEL_80:
                    v60 = 0;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v55 + 8), 1u,
                        memory_order_relaxed);
                    goto LABEL_83;
                  }
                  goto LABEL_82;
                }
                v206 = 0;
                v163_.v164 = (char*)&GameData_1a9d735;
                v163_.v163 = game_HashString((__int64)&GameData_1a9d735);
                GameRoutine_70f1c0(&v206, (unsigned __int64*)&v163_.v163);
                v60 = 1;
                CombatLegionGroup_e57320_alt1((void*)(&v207_.v207), v19,
                                              (__int64)&v206, 0, 1);
                v54 = v207_.v207;
                v55 = v207_.v208;
                if (v207_.v208 != 0) {
                  goto LABEL_80;
                }
              LABEL_83:
                v61 = *v20;
                v163_.v163 = v54;
                v163_.v164 = (char*)v55;
                v62 = *(unsigned __int8*)(v61 + 24);
                v63 = v61 + 25;
                v66 = v61 + 32;
                v64 = *(_QWORD*)(v61 + 32);
                v65 = *(_QWORD*)(v66 + 8);
                v67 = (v62 & 1) == 0;
                v68 = v62 >> 1;
                if (v67) {
                  v69 = v63;
                }
                else {
                  v69 = v65;
                }
                if (v67) {
                  v70 = v68;
                }
                else {
                  v70 = v64;
                }
                if ((v60 & 1) == 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8),
                                            1u, memory_order_relaxed);
                }
                v71 = game_combat_CombatLegionGroup_AddCharacter(
                    (_QWORD*)v19, (__int64)&v163_.v163, 0, v69, v70);
                v72 = (__int64)v163_.v164;
                if (v163_.v164 != nullptr &&
                    atomic_fetch_add((atomic_ullong* volatile)(v163_.v164 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v81 = v71;
                  (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                  std___1___shared_weak_count___release_weak_alt2(v72);
                  v82 = v81;
                  v19 = (__int64)a1;
                  v73 = v82[17];
                  v74 = v82[18];
                  if (v74 != 0) {
                  LABEL_94:
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v74 + 8), 1u,
                        memory_order_relaxed);
                    v75 = *(__int64**)(v73 + 40);
                    v76 = *((_DWORD*)v75 + 5);
                    *((_DWORD*)v75 + 5) = v76 | 2;
                    if (v76 != (v76 | 2)) {
                      v77 = *v75;
                      v78 = *(_QWORD*)(v77 + 8);
                      if (v78 != 0) {
                        v79 = *(_QWORD*)(v77 + 16);
                        v80 = *(_QWORD*)(v78 + 8) == -1 || v79 == 0;
                        if (!v80 && *(_QWORD*)(v78 + 8) != -1 &&
                            (*(_BYTE*)(v77 + 61) & 1) == 0 &&
                            *(_DWORD*)(v77 + 64) != 1 &&
                            (*(_BYTE*)(v79 + 342) & 1) != 0) {
                          game_character_1084940(v79, 0, 0x0.0p+0f);
                          *(_BYTE*)(*(_QWORD*)(v79 + 8) + 289LL) = 0;
                        }
                      }
                    }
                    v19 = (__int64)a1;
                    if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
                      std___1___shared_weak_count___release_weak_alt2(v74);
                    }
                    goto LABEL_119;
                  }
                }
                else {
                  v73 = v71[17];
                  v74 = v71[18];
                  if (v74 != 0) {
                    goto LABEL_94;
                  }
                }
                v83 = *(__int64**)(v73 + 40);
                v84 = *((_DWORD*)v83 + 5);
                *((_DWORD*)v83 + 5) = v84 | 2;
                if (v84 != (v84 | 2)) {
                  v85 = *v83;
                  v86 = *(_QWORD*)(v85 + 8);
                  if (v86 != 0) {
                    v87 = *(_QWORD*)(v85 + 16);
                    v88 = *(_QWORD*)(v86 + 8) == -1 || v87 == 0;
                    if (!v88 && *(_QWORD*)(v86 + 8) != -1 &&
                        (*(_BYTE*)(v85 + 61) & 1) == 0 &&
                        *(_DWORD*)(v85 + 64) != 1 &&
                        (*(_BYTE*)(v87 + 342) & 1) != 0) {
                      game_character_1084940(v87, 0, 0x0.0p+0f);
                      *(_BYTE*)(*(_QWORD*)(v87 + 8) + 289LL) = 0;
                    }
                  }
                }
              LABEL_119:
                if ((v60 & 1) == 0) {
                  v89 = (atomic_ullong*)(v55 + 8);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
                    if (atomic_fetch_add(v89, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                    LABEL_122:
                      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
                      std___1___shared_weak_count___release_weak_alt2(v55);
                    }
                  }
                  else {
                    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
                    std___1___shared_weak_count___release_weak_alt2(v55);
                    if (atomic_fetch_add(v89, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      goto LABEL_122;
                    }
                  }
                }
                v22 = *v20;
                if (++v44 >= (signed __int32)*(_DWORD*)(*v20 + 56LL)) {
                  goto LABEL_125;
                }
              }
              if (v30 == (__int64*)v29) {
                v54 = 0;
                v55 = 0;
              }
              else {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v47 = game_map_MapRandom_instance__ptr[0];
                v48 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL));
                v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v50 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                      (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v47 + 1) = v48;
                v51 = (v50 >> 8) ^ (v49 >> 19) ^ v50 ^ v49;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47) = v49;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47 + 4) = v51;
                v52 = v51 & 0x7FFFFFFF;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                v53 =
                    (__int64*)(v29 +
                               16LL *
                                   (unsigned int)(v52 %
                                                  (int)(((unsigned __int64)v30 -
                                                         v29) >>
                                                        4)));
                v54 = *v53;
                v55 = v53[1];
                if (v55 != 0) {
                  goto LABEL_79;
                }
              }
            LABEL_82:
              v60 = 1;
              goto LABEL_83;
            }
          LABEL_125:
            v5 = v160;
            if (v29 != 0) {
              if ((__int64*)v29 != v30) {
                do {
                  v90 = *(v30 - 1);
                  if (v90 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
                    std___1___shared_weak_count___release_weak_alt2(v90);
                  }
                  v30 -= 2;
                } while (v30 != (__int64*)v29);
              }
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v29);
            }
          }
          ++v20;
        } while (v20 != v5);
      }
      v1 = v158;
      if (v159 != 0) {
        v91 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v91 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v159);
      }
    }
    v92 = *(_QWORD**)(v1 + 80);
    v93 = *(_QWORD**)(v1 + 88);
    if (v92 != v93) {
      v94 = nullptr;
      v95 = 0;
      v96 = 0;
      do {
        v97 = wld_Crc32(0, "CreateChara", 0xBu);
        if (v97 ==
            (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v92 + 32LL))(*v92)) {
          v98 = *v92;
          if ((unsigned __int64)v94 < v95) {
            *(_QWORD*)v94 = v98;
            v94 += 8;
          }
          else {
            v99 = &v94[-v96];
            v100 = (__int64)&v94[-v96] >> 3;
            v101 = v100 + 1;
            if ((unsigned __int64)(v100 + 1) >> 61 != 0) {
              GameRoutine_e58fd0();
            }
            if ((__int64)(v95 - v96) >> 2 > v101) {
              v101 = (__int64)(v95 - v96) >> 2;
            }
            if (v95 - v96 >= 0x7FFFFFFFFFFFFFF8LL) {
              v102 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v102 = v101;
            }
            if (v102 != 0) {
              if (v102 >> 61 != 0) {
                goto LABEL_243;
              }
              v103 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v102, 16, 0);
            }
            else {
              v103 = 0;
            }
            v95 = v103 + 8 * v102;
            v104 = (unsigned __int64)&v94[-v96];
            v105 = (__int64)&v99[v103 + -8 * v100];
            *(_QWORD*)&v99[v103] = v98;
            v94 = &v99[v103 + 8];
            memcpy_alt1(v105, v96, v104);
            if (v96 != 0) {
              v106 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v106 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, v96);
            }
            v96 = v105;
          }
        }
        v92 += 2;
      } while (v92 != v93);
      v107 = a1;
      if ((char*)v96 != v94) {
        v108 = (char*)v96;
        v109 = GameData_212c890[0];
        v161 = GameData_212d3c8[0] + 2;
        do {
          v111 = *(_QWORD*)v108;
          if (*(_QWORD**)(**(_QWORD**)(*(_QWORD*)v108 + 48LL) +
                          8LL *
                              (((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v108 + 48LL) +
                                            88LL) -
                                 1) &
                                0xFFFFFFFD) == 0) +
                          16) == v107) {
            v112 = *(unsigned __int8*)(v111 + 64);
            v113 = *(_QWORD*)(v111 + 72);
            if ((v112 & 1) == 0) {
              v113 = v112 >> 1;
            }
            if (v113 != 0) {
              v114 = *(_QWORD*)(v111 + 80);
              v115 = v111 + 65;
              v116 = (v112 & 1) != 0 ? v114 : v115;
              v117 = game_HashString(v116);
              if (v117 != 0) {
                v118 = *(_QWORD*)(*v109 + 96);
                if (v118 != 0 && *(_QWORD*)(*v109 + 112) != 0) {
                  v120 = v118 - 1;
                  if ((v118 & (v118 - 1)) != 0) {
                    v121 = v117;
                    if (v117 >= v118) {
                      v121 = v117 % v118;
                    }
                  }
                  else {
                    v121 = v120 & v117;
                  }
                  v122 = *(_QWORD**)(*(_QWORD*)(*v109 + 88) + 8 * v121);
                  if (v122 != nullptr) {
                    v123 = (_QWORD*)*v122;
                    if (v123 != nullptr) {
                      if ((v118 & v120) == 0) {
                        while (1) {
                          v125 = v123[1];
                          if (v125 == v117) {
                            if (v123[2] == v117) {
                              goto LABEL_195;
                            }
                          }
                          else if ((v125 & v120) != v121) {
                            goto LABEL_162;
                          }
                          v123 = (_QWORD*)*v123;
                          if (v123 == nullptr) {
                            goto LABEL_162;
                          }
                        }
                      }
                      while (1) {
                        v124 = v123[1];
                        if (v124 == v117) {
                          break;
                        }
                        if (v124 >= v118) {
                          v124 %= v118;
                        }
                        if (v124 != v121) {
                          goto LABEL_162;
                        }
                      LABEL_184:
                        v123 = (_QWORD*)*v123;
                        if (v123 == nullptr) {
                          goto LABEL_162;
                        }
                      }
                      if (v123[2] != v117) {
                        goto LABEL_184;
                      }
                    LABEL_195:
                      v126 = v123[3];
                      if (v126 != 0) {
                        v127 = (int*)GameData_21d9d18;
                        v128 = GameData_21d9d20;
                        v163_.v187 = 0;
                        v163_.v188 = 0;
                        v163_.v163 = 0;
                        v163_.v164 = nullptr;
                        v163_.v165 = 0;
                        v163_.v166 = 0;
                        v163_.v167 = 0;
                        v163_.v168 = 0;
                        v163_.v169 = 0;
                        v163_.v170 = 0;
                        v163_.v171 = 0;
                        v163_.v172 = 0;
                        v163_.v173 = 0;
                        v163_.v174 = 0;
                        v163_.v175 = 0;
                        v163_.v176 = 0;
                        v163_.v177 = 0;
                        v163_.v178 = 0;
                        v163_.v179 = 0;
                        v163_.v180 = 0;
                        v163_.v181 = 0;
                        v163_.v182 = 0;
                        v163_.v183 = 0;
                        v163_.v184 = 0;
                        v163_.v185 = 0;
                        v163_.v186 = 0;
                        v163_.v189 = 0;
                        v163_.v190 = 0;
                        v163_.v191 = 0;
                        v163_.v192 = 0;
                        v163_.v193 = 0;
                        v163_.v194 = 0;
                        v163_.v195 = 0;
                        v163_.v196 = 1065353216;
                        v163_.v197 = 0;
                        v163_.v198 = 0;
                        v163_.v199 = 0;
                        v163_.v200 = 0;
                        v163_.v201 = 0;
                        v163_.v202 = 0;
                        v163_.v203 = 0;
                        v163_.v204 = 0;
                        v163_.v205 = 0;
                        if (GameData_21d9d18 != GameData_21d9d20) {
                          do {
                            v129 = *v127++;
                            *(_QWORD*)(GameData_21d9d00 + 8 * v129) = 0;
                          } while (v127 != (int*)v128);
                          v127 = (int*)GameData_21d9d18;
                        }
                        GameData_21d9d20 = (__int64)v127;
                        GameData_21d9d60 = 0;
                        GameData_21d9d68 = 0;
                        GameData_21d9d70 = 0;
                        GameData_21d9d7c = 0;
                        GameData_21d9d38 = GameData_21d9d30;
                        GameData_21d9cf0 = GameData_21d9ce8;
                        GameData_21d9d50 = GameData_21d9d48;
                        GameData_21d9d78 = 8;
                        AssetTableFile_7e95e0((__int64)&v163_.v163, v126, 0);
                        GameHr_7e8000((__int64)&v163_.v163);
                        v130 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16,
                            0);
                        v131 = (unsigned __int64)(v130 + 3);
                        v132 = (__int64)v130;
                        v130[1] = 0;
                        v133 = (atomic_ullong*)(v130 + 1);
                        v130[2] = 0;
                        *v130 = v161;
                        CharacterAppearance_10735d0((__int64)(v130 + 3));
                        game_character_CharacterAppearance_Setup_alt1(
                            v131, (__int64)&v163_.v163);
                        if (*(int*)(*(_QWORD*)v108 + 56LL) >= 1) {
                          for (i = 0; i < (signed __int32)*(
                                              _DWORD*)(*(_QWORD*)v108 + 56LL);
                               ++i) {
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v132 + 8), 1u,
                                memory_order_relaxed);
                            v135 = *(unsigned __int8*)(*(_QWORD*)v108 + 24LL);
                            v136 = (v135 & 1) == 0;
                            v137 = v135 >> 1;
                            if (v136) {
                              v138 = v137;
                            }
                            else {
                              v138 = *(_QWORD*)(*(_QWORD*)v108 + 32LL);
                            }
                            if (v136) {
                              v139 = *(_QWORD*)v108 + 25LL;
                            }
                            else {
                              v139 = *(_QWORD*)(*(_QWORD*)v108 + 40LL);
                            }
                            v207_.v207 = v131;
                            v207_.v208 = v132;
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v132 + 8), 1u,
                                memory_order_relaxed);
                            v140 = game_combat_CombatLegionGroup_AddCharacter(
                                a1, (__int64)&v207_.v207, 0, v139, v138);
                            v141 = v207_.v208;
                            if (v207_.v208 != 0 &&
                                atomic_fetch_add(
                                    (atomic_ullong* volatile)(v207_.v208 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              v150 = v140;
                              (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(
                                  v141);
                              std___1___shared_weak_count___release_weak_alt2(
                                  v141);
                              v142 = v150[17];
                              v143 = v150[18];
                              if (v143 == 0) {
                              LABEL_227:
                                v151 = *(__int64**)(v142 + 40);
                                v152 = *((_DWORD*)v151 + 5);
                                *((_DWORD*)v151 + 5) = v152 | 2;
                                if (v152 != (v152 | 2)) {
                                  v153 = *v151;
                                  v154 = *(_QWORD*)(v153 + 8);
                                  if (v154 != 0) {
                                    v155 = *(_QWORD*)(v153 + 16);
                                    v156 =
                                        *(_QWORD*)(v154 + 8) == -1 || v155 == 0;
                                    if (!v156 && *(_QWORD*)(v154 + 8) != -1 &&
                                        (*(_BYTE*)(v153 + 61) & 1) == 0 &&
                                        *(_DWORD*)(v153 + 64) != 1 &&
                                        (*(_BYTE*)(v155 + 342) & 1) != 0) {
                                      game_character_1084940(v155, 0,
                                                             0x0.0p+0f);
                                      *(_BYTE*)(*(_QWORD*)(v155 + 8) + 289LL) =
                                          0;
                                    }
                                  }
                                }
                                goto LABEL_203;
                              }
                            }
                            else {
                              v142 = v140[17];
                              v143 = v140[18];
                              if (v143 == 0) {
                                goto LABEL_227;
                              }
                            }
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v143 + 8), 1u,
                                memory_order_relaxed);
                            v144 = *(__int64**)(v142 + 40);
                            v145 = *((_DWORD*)v144 + 5);
                            *((_DWORD*)v144 + 5) = v145 | 2;
                            if (v145 != (v145 | 2)) {
                              v146 = *v144;
                              v147 = *(_QWORD*)(v146 + 8);
                              if (v147 != 0) {
                                v148 = *(_QWORD*)(v146 + 16);
                                v149 = *(_QWORD*)(v147 + 8) == -1 || v148 == 0;
                                if (!v149 && *(_QWORD*)(v147 + 8) != -1 &&
                                    (*(_BYTE*)(v146 + 61) & 1) == 0 &&
                                    *(_DWORD*)(v146 + 64) != 1 &&
                                    (*(_BYTE*)(v148 + 342) & 1) != 0) {
                                  game_character_1084940(v148, 0, 0x0.0p+0f);
                                  *(_BYTE*)(*(_QWORD*)(v148 + 8) + 289LL) = 0;
                                }
                              }
                            }
                            if (atomic_fetch_add(
                                    (atomic_ullong* volatile)(v143 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(
                                  v143);
                              std___1___shared_weak_count___release_weak_alt2(
                                  v143);
                            }
                          LABEL_203:
                            if (atomic_fetch_add(v133, 0xFFFFFFFFFFFFFFFFLL) ==
                                0) {
                              (*(void (**)(__int64))(*(_QWORD*)v132 + 16LL))(
                                  v132);
                              std___1___shared_weak_count___release_weak_alt2(
                                  v132);
                            }
                          }
                        }
                        add = atomic_fetch_add(v133, 0xFFFFFFFFFFFFFFFFLL);
                        v109 = GameData_212c890[0];
                        if (add == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v132 + 16LL))(v132);
                          std___1___shared_weak_count___release_weak_alt2(v132);
                        }
                        TrickEntity_7d1480_alt1((__int64)&v163_.v163);
                        v107 = a1;
                      }
                    }
                  }
                }
              }
            }
          }
        LABEL_162:
          v108 += 8;
        } while (v108 != v94);
      }
      if (v96 != 0) {
        v157 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v157 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v157, v96);
      }
    }
  }
}

void CombatLegionGroup_e58720(__int64 a1)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  bool v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  _QWORD** v19;
  _QWORD** v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_DWORD*)(a1 + 112);
  if (v1 != 0) {
    if (v1 != 1) {
      goto LABEL_17;
    }
    v1 = 1;
  }
  v3 = *GameData_212d448[0] + 24LL * v1;
  v4 = *(_QWORD*)(v3 + 32);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 40);
    if (*(_QWORD*)(v4 + 8) != -1 && v5 != 0) {
      v7 = *(_QWORD*)(v5 + 80);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 8) == -1 || *(_QWORD*)(v5 + 88) == 0;
        if (!v8 && *(_QWORD*)(v4 + 8) != -1) {
          std___1___shared_weak_count___release_weak_alt1(v4);
          *(_DWORD*)(a1 + 128) = *(_DWORD*)(v5 + 40);
          *(_DWORD*)(a1 + 132) = *(_DWORD*)(v5 + 44);
          v9 = *(float*)(v5 + 48);
          *(float*)(a1 + 136) = v9;
          v10 =
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c190) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c190 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c190) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c190 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c190 *
                                                                                                    0x1.3bd3ce0000000p+1f)) *
                                                                                    0x1.3bd3ce0000000p+1f)) *
                                                                 0x1.3bd3ce0000000p+1f)) *
                                                 0x1.3bd3ce0000000p+1f)) *
                              0x1.3bd3ce0000000p+1f) +
                      0x1.0000000000000p+0f) *
              -0x1.921fb60000000p+0f;
          v11 = *(float*)(v5 + 52);
          v12 =
              (float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            0x1.3bd3ce0000000p+1f)) *
                                                                            0x1.3bd3ce0000000p+1f)) *
                                                         0x1.3bd3ce0000000p+1f)) *
                                         0x1.3bd3ce0000000p+1f)) *
                      0x1.3bd3ce0000000p+1f) +
              0x1.0000000000000p+0f;
          *(float*)(a1 + 140) = v11;
          *(float*)(a1 + 144) =
              (float)(PSEUDO_UNFUSED(v11 * v10)) + (float)(v9 * v12);
          *(float*)(a1 + 148) =
              (float)(PSEUDO_UNFUSED(v11 * v12)) - (float)(v9 * v10);
          goto LABEL_18;
        }
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
LABEL_17:
  v13 = *(_QWORD*)(a1 + 8);
  v22 = 0;
  v23 = 0;
  CombatLegionManager_e2ddb0(v13, (__int64)&v23, (__int64)&v22);
  *(_QWORD*)(a1 + 128) = v23;
  v14 =
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            0x1.3bd3ce0000000p+1f)) *
                                                                            0x1.3bd3ce0000000p+1f)) *
                                                         0x1.3bd3ce0000000p+1f)) *
                                         0x1.3bd3ce0000000p+1f)) *
                      0x1.3bd3ce0000000p+1f) +
              0x1.0000000000000p+0f) *
      0x1.921fb60000000p+0f;
  v15 = v22;
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) +
        (float)((float)-(
                    float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                     (_QWORD)GameData_212c188) -
                           (float)((float)(*((float*)GameData_212c188 + 1) -
                                           (float)(*(float*)GameData_212c188 *
                                                   0x1.3bd3ce0000000p+1f)) *
                                   0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f);
  v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  *(_QWORD*)(a1 + 144) = v22;
  v18 = (float)((float)-(float)(v17 - (float)(v16 * 0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f) +
        0x1.0000000000000p+0f;
  *(float*)(a1 + 136) = (float)(PSEUDO_UNFUSED(*((float*)&v15 + 1) * v14)) +
                        (float)(*(float*)&v15 * v18);
  *(float*)(a1 + 140) = (float)(PSEUDO_UNFUSED(*((float*)&v15 + 1) * v18)) -
                        (float)(*(float*)&v15 * v14);
LABEL_18:
  v20 = *(_QWORD***)(a1 + 88);
  v19 = *(_QWORD***)(a1 + 96);
  while (v20 != v19) {
    v21 = *v20++;
    game_combat_e3f310(v21);
  }
}

float CombatLegionGroup_e58940(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int8* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int8** v5;
  unsigned __int8** v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  _BOOL4 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;

  v3 = *(unsigned __int8*)(a2 + 152);
  v4 = (v3 & 1) == 0;
  v5 = *(unsigned __int8***)(a1 + 16);
  v6 = *(unsigned __int8***)(a1 + 24);
  v7 = v3 >> 1;
  if (v4) {
    v8 = a2 + 153;
  }
  else {
    v8 = *(_QWORD*)(a2 + 168);
  }
  if (v4) {
    v9 = v7;
  }
  else {
    v9 = *(_QWORD*)(a2 + 160);
  }
  if (v5 == v6) {
    goto LABEL_32;
  }
  while (1) {
    v12 = *v5;
    v11 = (__int64)v5[1];
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v13 = *v12;
    v14 = *((_QWORD*)v12 + 1);
    if ((v13 & 1) == 0) {
      v14 = v13 >> 1;
    }
    if (v9 != v14) {
      v17 = false;
      if (v11 == 0) {
        goto LABEL_23;
      }
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
      goto LABEL_23;
    }
    if ((v13 & 1) != 0) {
      v15 = *((_QWORD*)v12 + 2);
    }
    else {
      v15 = (__int64)(v12 + 1);
    }
    v16 = memcmp_alt1(v8, v15, v9);
    v17 = v16 == 0;
    if (v16 == 0) {
      v2 = v12;
    }
    if (v11 != 0) {
      goto LABEL_21;
    }
  LABEL_23:
    if (v17) {
      break;
    }
    v5 += 2;
    if (v5 == v6) {
      goto LABEL_32;
    }
  }
  if (v2 == nullptr) {
  LABEL_32:
    LODWORD(v23) = 0;
    v22 = 0;
    return (float)((float)v22 / (float)(int)v23) * 0x1.3880000000000p+13f;
  }
  v18 = *((__int64**)v2 + 3);
  v19 = *((_QWORD*)v2 + 4) - (_QWORD)v18;
  if (v19 != 0) {
    v20 = 0;
    while (1) {
      v21 = *v18;
      v18 += 2;
      if (a2 == v21) {
        break;
      }
      if (v19 >> 4 == ++v20) {
        goto LABEL_31;
      }
    }
    v22 = v20;
  }
  else {
  LABEL_31:
    v22 = 0;
  }
  v23 = (unsigned __int64)v19 >> 4;
  return (float)((float)v22 / (float)(int)v23) * 0x1.3880000000000p+13f;
}

__int64 CombatLegionGroup_e58ae0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8* v3;
  unsigned __int8** v4;
  unsigned __int8** v5;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  _BOOL4 v14;

  v4 = *(unsigned __int8***)(a1 + 16);
  v5 = *(unsigned __int8***)(a1 + 24);
  if (v4 == v5) {
    return 0;
  }
  while (1) {
    v9 = *v4;
    v8 = (__int64)v4[1];
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *v9;
    v11 = *((_QWORD*)v9 + 1);
    if ((v10 & 1) == 0) {
      v11 = v10 >> 1;
    }
    if (a3 != v11) {
      v14 = false;
      if (v8 == 0) {
        goto LABEL_17;
      }
    LABEL_15:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
      goto LABEL_17;
    }
    if ((v10 & 1) != 0) {
      v12 = *((_QWORD*)v9 + 2);
    }
    else {
      v12 = (__int64)(v9 + 1);
    }
    v13 = memcmp_alt1(a2, v12, a3);
    v14 = v13 == 0;
    if (v13 == 0) {
      v3 = v9;
    }
    if (v8 != 0) {
      goto LABEL_15;
    }
  LABEL_17:
    if (v14) {
      break;
    }
    v4 += 2;
    if (v4 == v5) {
      return 0;
    }
  }
  if (v3 != nullptr) {
    return (*((_QWORD*)v3 + 4) - *((_QWORD*)v3 + 3)) >> 4;
  }
  return 0;
}

_QWORD* game_combat_CombatLegionGroup_AddCharacter(_QWORD* a1, __int64 a2,
                                                   __int64 a3, __int64 a4,
                                                   unsigned __int64 a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  atomic_ullong* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v33;
  _QWORD v34[2];
  struct {
    __int64 v35[3];
    int v36;
    char gap60_[4];
    __int64* v37;
  } v35_;

  v35_.v35[0] = (__int64)GameData_1fe6d40;
  v35_.v37 = v35_.v35;
  v9 = GameHr_10784f0(a2, 3, (__int64)v35_.v35);
  if (v35_.v37 == v35_.v35) {
    v10 = 32;
  }
  else {
    if (v35_.v37 == nullptr) {
      goto LABEL_6;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v35_.v37 + v10))((__int64)v35_.v37);
LABEL_6:
  v12 = a1[11];
  v11 = a1[12];
  v35_.v35[0] = v9;
  v35_.v35[1] = 0;
  v35_.v35[2] = a3;
  v35_.v36 = 0;
  v13 = (v11 - v12) >> 3;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     272, 16, 0);
  v15 = v14 + 4;
  v16 = (__int64)v14;
  v14[2] = 0;
  *v14 = GameData_1fe6cf0;
  v14[1] = 0;
  v17 = (atomic_ullong*)(v14 + 1);
  GameRoutine_e3e720_alt1((__int64)(v14 + 4), v35_.v35, (__int64)a1, a4, a5, 1,
                          v13);
  v19 = (_QWORD*)a1[9];
  v18 = a1[10];
  if ((unsigned __int64)v19 >= v18) {
    v21 = a1[8];
    v33 = a5;
    v22 = (char*)v19 - v21;
    v23 = ((__int64)v19 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      GameRoutine_e58e80_alt1();
    }
    v25 = v18 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v27 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (unsigned __int64)v19 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v15;
    v20 = (__int64)&v22[v27 + 8];
    memcpy_alt1(v30, v21, v29);
    a1[8] = v30;
    a1[9] = v20;
    a1[10] = v28;
    if (v21 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v21);
    }
    a5 = v33;
  }
  else {
    *v19 = v15;
    v20 = (__int64)(v19 + 1);
  }
  a1[9] = v20;
  v34[0] = v15;
  v34[1] = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_e56ec0_alt1((__int64)a1, v34, a4, a5);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
    if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      return v15;
    }
  LABEL_27:
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
    return v15;
  }
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    goto LABEL_27;
  }
  return v15;
}

__int64 game_combat_CombatLegionGroup_AddCharacter_lambda0_Invoke(double a1,
                                                                  double a2,
                                                                  __int64 a3,
                                                                  __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int128 v16;
  __int64 result;
  float v18;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v4 = *a4;
    __asm__ volatile("" ::"r"(v4));
  }
  if (*a4 != 0) {
    *(_DWORD*)(v4 + 336) = 1065353216;
    {
      v5 = *(_QWORD*)(v4 + 392);
      __asm__ volatile("" ::"r"(v5));
    }
    if (v5 != 0) {
      {
        v6 = *(float32x4_t**)(v4 + 8);
        __asm__ volatile("" ::"r"(v6));
      }
      *(float*)&a2 = *(float*)(v5 + 40) +
                     (float)(0x1.0000000000000p+0f - *(float*)(v5 + 40));
      v7 = vdupq_lane_s32(*(int32x2_t*)&a2, 0);
      LANES128(v7).n128_u32[3] = 0;
      v8 = vsubq_f32(v6[22], v7);
      v9 = vmulq_f32(v8, v8);
      LANES128(v9).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
              .n64_u64[0];
      if (__builtin_islessgreater(
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                  .n64_f32[0],
              0x0.0p+0f)) {
        LANES128(v6[22]).n128_u32[0] = LODWORD(a2);
        LANES128(v6[22]).n128_u32[1] = LODWORD(a2);
        {
          v10 = v6[22];
          __asm__ volatile("" ::"w"(v10));
        }
        LANES128(v6[18]).n128_u32[2] |= 1u;
        LANES128(v10).n128_u64[1] = LODWORD(a2);
        v6[22] = v10;
        {
          v5 = *(_QWORD*)(v4 + 392);
          __asm__ volatile("" ::"r"(v5));
        }
      }
      {
        v11 = *(__int64**)(v4 + 528);
        __asm__ volatile("" ::"r"(v11));
      }
      {
        v12 = *(__int64**)(v4 + 536);
        __asm__ volatile("" ::"r"(v12));
      }
      if (v11 != v12) {
        {
          v18 = *(float*)(v5 + 44) +
                (float)(0x1.0000000000000p+0f - *(float*)(v5 + 44));
          __asm__ volatile("" ::"w"(v18));
        }
        do {
          {
            v13 = *v11++;
            __asm__ volatile("" ::"r"(v13));
          }
          {
            v14 = *(_DWORD*)(v13 + 128);
            __asm__ volatile("" ::"r"(v14));
          }
          {
            v15 = *(_QWORD*)v13;
            __asm__ volatile("" ::"r"(v15));
          }
          *(float*)(v13 + 112) = v18;
          *(float*)(v13 + 116) = v18;
          v16 = *(_OWORD*)(v13 + 112);
          *(_DWORD*)(v13 + 128) = v14 | 0x20;
          *((_QWORD*)&v16 + 1) = LODWORD(v18);
          *(_OWORD*)(v13 + 112) = v16;
          GameRoutine_a7c6a0(v15, v13),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        } while (v11 != v12);
      }
      return GameHr_1083840(v4);
    }
  }
  return result;
}

#pragma GCC visibility pop
