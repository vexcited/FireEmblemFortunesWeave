#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DeployData_f25050_alt1(_QWORD) __asm__("DeployData_f25050");
__int64 GameRoutine_6fcce0(void);
__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74db00(_QWORD);
__int64 GameRoutine_844950(_QWORD, _QWORD);
__int64 GameRoutine_844ee0(_QWORD);
__int64 GameRoutine_8450e0(void);
__int64 GameRoutine_8450e0_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_8450e0");
__int64 GameRoutine_845b40(_QWORD, _QWORD);
__int64 GameRoutine_f24160(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_f24160_alt1() __asm__("GameRoutine_f24160");
extern __int16 GameData_21ca458;
extern __int64 (*GameData_1ff2e90[])();
extern __int64 (*GameData_1ff2f68[])();
extern __int64 (*GameData_1ff2fe8[])();
extern __int64 (*GameData_1ff3068[])();
extern __int64 (*GameData_1ff30e8[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd120;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cff0[4];
extern __int64* game_g_empty_item_ptr;
extern unsigned int GameData_1b998f4[15];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_f2a4a0(void);
__int64 game_map_DeployData_TargetEnumerate(__int64 a1, __int64* a2, int a3);
__int64 DeployData_f25050(__int64 a1);
_QWORD* game_map_DeployData_TargetEnumerateSubTarget(__int64 a1, __int64* a2,
                                                     int a3);
__int64 game_map_DeployData_TargetEnumerate_lambda2_Invoke(__int64 result,
                                                           __int64 a2,
                                                           __int64 a3);
__int64 game_map_DeployData_TargetEnumerateSubTarget_lambda0_Invoke(
    __int64 result, __int64 a2, __int64 a3);
__int64
game_map_DeployData_BuildDeploy_LocalTargetSelect_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
__int64 game_map_DeployData_BuildDeploy_Trick_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64
game_map_DeployData_BuildDeploy_AssistEnumerate_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
__int64
game_map_DeployData_BuildDeploy_AssistEnumerate_lambda1_Invoke(__int64 result,
                                                               __int64 a2);
__int64 game_map_DeployData_BuildDeploy_PostSetup_lambda0_Invoke(__int64 result,
                                                                 __int64 a2);
__int64 game_map_DeployData_BuildDeploy_PostSetup_lambda1_Invoke(__int64 result,
                                                                 __int64 a2);
__int64
game_map_DeployData_CommitMindSummonTargetData_lambda0_Invoke(__int64 result,
                                                              _QWORD* a2);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_74e220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_757f60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_777820(_QWORD);
__int64 GameRoutine_777f60(_QWORD);
__int64 GameRoutine_845d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_93edf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d5ffa0(_QWORD);
__int64 GameRoutine_f23940(_QWORD);
__int64 GameRoutine_f23ea0(_QWORD);
__int64 GameRoutine_f25920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f28c20(_QWORD, _QWORD);
__int64 GameRoutine_f28ee0(_QWORD, _QWORD);
__int64 GameRoutine_fbb8a0(_QWORD, _QWORD, _QWORD);
__int64 IDeploy_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ITarget_775580(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(_QWORD, _QWORD);
__int64 Mind_746340(void);
__int64 UnitItem_6e91b0(_QWORD, _QWORD);
__int64 VTarget_778140(_QWORD, _QWORD);
__int64 VTarget_779940(_QWORD, _QWORD);
__int64 game_6c51e0(_QWORD);
__int64 game_6c6ec0(_QWORD);
__int64 game_UnitItemList_Find_70f780(_QWORD);
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_IsLocked(_QWORD);
__int64 game_map_ITarget_EachSelectable(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _DWORD GameData_1b99930[15];
extern _QWORD game_g_shared_system_skills_ptr;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1ff3168[])();
extern __int64 (*GameData_1ff31b8[])();
extern __int64 (*GameData_1ff3238[])();
extern __int64 (*GameData_1ff32b8[])();
extern __int64 (*GameData_1ff3338[])();
extern __int64 (*GameData_1ff33b8[])();
extern __int64 (*GameData_1ff3438[])();
extern __int64 (*GameData_1ff34b8[])();
extern __int64 (*GameData_1ff3538[])();
extern __int64 (*game_UnitEquipScope_vtable[])();
extern __int64 (*game_map_MapDrawTarget_vtable[])();
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212f7c0[6];
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd130;
extern __int64 GameData_21d8840;
extern __int64 fw_memory_g_heap_manager;
extern char* GameData_1ff2ed0;
unsigned __int64* game_map_f0ee60(unsigned __int64* result, __int64);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_f29120(void);
void __attribute__((noreturn)) String_60a1d0(void);
__attribute__((swiftcall)) void
DeployData_f256b0_alt1(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3,
                       __int64 a4) __asm__("DeployData_f256b0");
__int64 DeployData_f25a60(unsigned int* a1, unsigned int* a2);
__int64* GameHr_fbb8a0(unsigned int, unsigned int, __int64);
__int64 GameRoutine_f25920_alt1(__int64, int, int, unsigned int,
                                __int16) __asm__("GameRoutine_f25920");
__attribute__((swiftcall)) void DeployData_f256b0(PSEUDO_X8 x8_, __int64 a1,
                                                  unsigned int a2,
                                                  unsigned int a3,
                                                  unsigned int a4);
__int16* GameRoutine_8450e0_alt2(__int64, __int16,
                                 __int16) __asm__("GameRoutine_8450e0");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_74d660_alt1(__int64, int, char,
                                char) __asm__("GameRoutine_74d660");
__int64 GameRoutine_844950_alt1(__int64, __int64) __asm__("GameRoutine_844950");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int* game_map_74db00(unsigned int);
void GameRoutine_844ee0_alt1(__int64) __asm__("GameRoutine_844ee0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_map_DeployData_TargetEnumerate_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_DeployData_BuildDeploy_Trick_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2,
                                                             _DWORD* a3);

__int64 game_map_DeployData_TargetEnumerate(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  __int64* v18;
  int* v19;
  _BYTE* v20;
  _BYTE* v21;
  __int16 v22;
  __int16 v23;
  __int64 v24;
  __int16* v25;
  char v26;
  char v27;
  char v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64* v32;
  __int64 v33;
  int v34;
  char* v35;
  char* v36;
  _QWORD* v37;
  int v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  bool v45;
  unsigned int v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v50;
  __int64 v51;
  unsigned int v52;
  bool v53;
  __int64 v54;
  int v55;
  __int16 v56;
  __int16 v57;
  __int64 v58;
  __int16* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  __int16 v65;
  __int16 v66;
  __int64 v67;
  __int16* v68;
  char v69;
  char v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  int v78;
  bool v79;
  __int64 v80;
  int v81;
  int j;
  int k;
  __int16 v84;
  __int16 v85;
  __int64 v86;
  __int16* v87;
  char v88;
  char v89;
  _QWORD* v90;
  _QWORD* v91;
  _QWORD* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  unsigned int v112;
  __int64 v113;
  __int64 v114;
  unsigned int v115;
  int v116;
  __int64* v117;
  int v118;
  int v119;
  int v120;
  int i;
  __int16 v122;
  __int16 v123;
  __int64 v124;
  __int16* v125;
  _QWORD* v126;
  _QWORD* v127;
  _QWORD* v128;
  __int64* v129;
  __int64 v130;
  int v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  char v137;
  char v138;
  char v139;
  __int16 v140;
  char v141;
  __int16 v142;
  int v143;
  char v144;
  char v145;
  char v146;
  __int16 v147;
  char v148;
  __int16 v149;
  int v150;
  char v151;
  char v152;
  char v153;
  __int16 v154;
  char v155;
  __int16 v156;
  int v157;
  char v158;
  char v159;
  char v160;
  __int16 v161;
  char v162;
  __int16 v163;
  int v164;
  char v165;
  char v166;
  char v167;
  __int16 v168;
  char v169;
  __int16 v170;
  int v171;
  struct {
    _QWORD v172[2];
    __int64* v173;
    char gap120_[8];
    _QWORD* v174;
  } v172_;
  struct {
    __int64 v175;
    char* v176;
    __int64 v177;
    __int64 v178;
  } v175_;
  __int64* v179;
  __int64* v180;
  int v181;
  struct {
    __int64 v182;
    __int64 v183;
  } v182_;
  struct {
    __int64 v184;
    __int64 v185;
  } v184_;
  int v186;
  int v187[5];

  result = DeployData_f25050(a1);
  if ((_DWORD)result != a3) {
    return result;
  }
  v184_.v184 = 0;
  v184_.v185 = 0;
  v7 = a1 + 127160;
  v182_.v182 = 0;
  v182_.v183 = 0;
  v181 = -1;
  v179 = &v182_.v182;
  v180 = &v184_.v184;
  v8 = GameData_212cff0[0];
  v134 = a2;
  v9 = *GameData_212cff0[0];
  if (*GameData_212cff0[0] != 0 && *(_BYTE*)(v9 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    if ((*(_DWORD*)(v9 + 48) & 0xFFF) == 0) {
      v46 = *(unsigned __int16*)(v9 + 40);
      if (*(_WORD*)(v9 + 40) == 0) {
        v46 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v47 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v46);
      v10 = *(_QWORD*)(v47 + 192);
      v48 = *(unsigned __int8*)(v47 + 72);
      if (v10 == 0 || v48 > 7) {
        goto LABEL_15;
      }
      v11 = *(unsigned __int8*)(v10 + 105);
      if (*(_BYTE*)(v10 + 105) == 0 || *(_BYTE*)(v10 + 104) == 2) {
        goto LABEL_15;
      }
      goto LABEL_10;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v9 + 48) & 0xFFF));
    if (v10 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v10 = *(_QWORD*)v7;
    if (*(_QWORD*)v7 == 0) {
      goto LABEL_13;
    }
  }
  v11 = *(unsigned __int8*)(v10 + 105);
LABEL_10:
  if (v11 == 4 && *(_BYTE*)(v10 + 278) == 0 && *(_BYTE*)(v10 + 279) == 0 &&
      *(_QWORD*)(v10 + 608) != 0) {
    goto LABEL_99;
  }
LABEL_13:
  if (v9 == 0 || *(_BYTE*)(v9 + 32) == 0) {
  LABEL_19:
    v12 = *(_QWORD*)v7;
    if (*(_QWORD*)v7 == 0) {
      goto LABEL_27;
    }
    goto LABEL_20;
  }
LABEL_15:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_19;
  }
  if ((*(_DWORD*)(v9 + 48) & 0xFFF) == 0) {
    v41 = *(unsigned __int16*)(v9 + 40);
    if (*(_WORD*)(v9 + 40) == 0) {
      v41 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v42 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v41);
    v43 = *(_QWORD*)(v42 + 192);
    v44 = *(unsigned __int8*)(v42 + 72);
    v45 = v43 == 0 || v44 > 7;
    if (v45 || *(_BYTE*)(v43 + 105) == 0 || *(_BYTE*)(v43 + 104) != 9) {
      goto LABEL_29;
    }
    v13 = *(_BYTE*)(a1 + 127308);
    v14 = *(_BYTE*)(a1 + 127309);
  LABEL_23:
    if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) -
                       7) <= 1) {
      if ((*(_DWORD*)(v9 + 48) & 0xFFF) != 0) {
        v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*(_DWORD*)(v9 + 48) & 0xFFF)) +
                         592LL);
        if (v15 == 0) {
          goto LABEL_99;
        }
      }
      else {
        v115 = *(unsigned __int16*)(v9 + 40);
        if (v115 == 0) {
          v115 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * v115) +
                                    192LL) +
                         592LL);
        if (v15 == 0) {
          goto LABEL_99;
        }
      }
      goto LABEL_46;
    }
  LABEL_45:
    v15 = *(_QWORD*)(*(_QWORD*)v7 + 592LL);
    if (v15 == 0) {
      goto LABEL_99;
    }
  LABEL_46:
    v34 = *(unsigned __int8*)(v15 + 417);
    LODWORD(v175_.v175) = 0;
    v175_.v176 = nullptr;
    v175_.v177 = 0;
    v175_.v178 = 0;
    GameRoutine_74d660_alt1((__int64)&v175_.v175, v34, v13, v14);
    v35 = v175_.v176;
    v36 = (char*)v175_.v177;
    v37 = v172_.v172;
    v172_.v172[0] = GameData_1ff2f68;
    v172_.v172[1] = &v180;
    v172_.v174 = v172_.v172;
    if (v175_.v176 == (char*)v175_.v177) {
      goto LABEL_52;
    }
    do {
      v38 = *v35;
      v186 = v35[1];
      v187[0] = v38;
      if (v172_.v174 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, int*, int*))(*v172_.v174 + 48LL))(v172_.v174, v187,
                                                              &v186);
      v35 += 4;
    } while (v35 != v36);
    v37 = v172_.v174;
    if (v172_.v174 == v172_.v172) {
    LABEL_52:
      v39 = 32;
    }
    else {
      if (v172_.v174 == nullptr) {
        goto LABEL_54;
      }
      v39 = 40;
    }
    (*(void (**)(__int64))(*v37 + v39))((__int64)v37);
  LABEL_54:
    if (v175_.v176 != nullptr) {
      v175_.v177 = (__int64)v175_.v176;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v175_.v176);
    }
    goto LABEL_99;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*(_DWORD*)(v9 + 48) & 0xFFF));
  if (v12 != 0) {
  LABEL_20:
    if (*(_BYTE*)(v12 + 104) == 9) {
      v13 = *(_BYTE*)(a1 + 127308);
      v14 = *(_BYTE*)(a1 + 127309);
      if (v9 == 0 || *(_BYTE*)(v9 + 32) == 0) {
        goto LABEL_45;
      }
      goto LABEL_23;
    }
  }
LABEL_27:
  if (v9 == 0 || *(_BYTE*)(v9 + 32) == 0) {
  LABEL_33:
    v16 = *(_BYTE**)v7;
    if (*(_QWORD*)v7 == 0) {
      goto LABEL_84;
    }
    goto LABEL_34;
  }
LABEL_29:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_33;
  }
  if ((*(_DWORD*)(v9 + 48) & 0xFFF) != 0) {
    v16 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v9 + 48) & 0xFFF));
    if (v16 == nullptr) {
      goto LABEL_84;
    }
  }
  else {
    v50 = *(unsigned __int16*)(v9 + 40);
    if (v50 == 0) {
      v50 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v51 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v50);
    v16 = *(_BYTE**)(v51 + 192);
    v52 = *(unsigned __int8*)(v51 + 72);
    v53 = v16 == nullptr || v52 > 7;
    if (v53 || v16[105] == 0 || v16[104] == 2) {
      goto LABEL_84;
    }
  }
LABEL_34:
  if (v16[250] == 28) {
    v17 = *(_QWORD*)(a1 + 127432);
    v132 = a1 + 127160;
    v135 = *(_QWORD*)(a1 + 127440);
    if (v17 != v135) {
      v18 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v19 = game_map_74db00(*(_DWORD*)(v17 + 40));
        v20 = *((_BYTE**)v19 + 1);
        v21 = *((_BYTE**)v19 + 2);
        while (v20 != v21) {
          v26 = *(_BYTE*)(v17 + 36);
          v27 = *v20 + *(_BYTE*)(v17 + 32);
          v28 = v20[1];
          v165 = 0;
          v171 = 0;
          v169 = 0;
          v170 = -1;
          v168 = 9;
          v166 = v27;
          v167 = v28 + v26;
          if (*v180 == 0) {
            v29 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v18, 12368, 16,
                                                               0);
            v30 = v29 + 3;
            v31 = v29;
            v29[1] = 0;
            v29[2] = 0;
            *v29 = GameData_1ff2e90;
            GameRoutine_844ee0_alt1((__int64)(v29 + 3));
            v32 = v180;
            v33 = v180[1];
            *v180 = (__int64)v30;
            v32[1] = (__int64)v31;
            if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
              std___1___shared_weak_count___release_weak_alt1(v33);
            }
          }
          v22 = v166;
          v23 = v167;
          v24 = *v180;
          *(_DWORD*)(v24 + 12336) |= v171;
          v25 = GameRoutine_8450e0_alt2(v24, v22, v23);
          GameRoutine_844950_alt1((__int64)v25, (__int64)&v165);
          v20 += 4;
        }
        v17 += 48;
      } while (v17 != v135);
    }
    goto LABEL_98;
  }
LABEL_84:
  if (GameRoutine_f24160_alt1()) {
    v163 = -1;
    v158 = 0;
    v162 = 0;
    v161 = 9;
    v54 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v55 = *(_DWORD*)(v54 + 8);
    LODWORD(v54) = *(_DWORD*)(v54 + 12);
    v164 = 0;
    v160 = v54;
    v159 = v55;
    if (*v180 == 0) {
      v106 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
      v107 = v106 + 3;
      v108 = v106;
      v106[1] = 0;
      v106[2] = 0;
      *v106 = GameData_1ff2e90;
      GameRoutine_844ee0_alt1((__int64)(v106 + 3));
      v109 = v180;
      v110 = v180[1];
      *v180 = (__int64)v107;
      v109[1] = (__int64)v108;
      if (v110 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
        std___1___shared_weak_count___release_weak_alt1(v110);
      }
    }
    v56 = v159;
    v57 = v160;
    v58 = *v180;
    *(_DWORD*)(v58 + 12336) |= v164;
    v59 = GameRoutine_8450e0_alt2(v58, v56, v57);
    GameRoutine_844950_alt1((__int64)v59, (__int64)&v158);
    goto LABEL_99;
  }
  v60 = *(_QWORD*)(a1 + 127360);
  if (v60 != 0) {
    v61 = *(_QWORD*)(a1 + 127192);
    if (v61 != 0) {
      v132 = a1 + 127160;
      v62 = *(unsigned __int8*)(v60 + 417);
      if (*(_BYTE*)(v60 + 417) != 0) {
        v63 = 0;
        do {
          v64 = 0;
          do {
            v69 = *(_BYTE*)(v61 + 584);
            v70 = *(_BYTE*)(v61 + 585);
            v151 = 0;
            v157 = 0;
            v155 = 0;
            v156 = -1;
            v154 = 9;
            v152 = v69 + v63;
            v153 = v70 + v64;
            if (*v180 == 0) {
              v71 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
              v72 = v71 + 3;
              v73 = v71;
              v71[1] = 0;
              v71[2] = 0;
              *v71 = GameData_1ff2e90;
              GameRoutine_844ee0_alt1((__int64)(v71 + 3));
              v74 = v180;
              v75 = v180[1];
              *v180 = (__int64)v72;
              v74[1] = (__int64)v73;
              if (v75 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
                std___1___shared_weak_count___release_weak_alt1(v75);
              }
            }
            v65 = v152;
            v66 = v153;
            v67 = *v180;
            *(_DWORD*)(v67 + 12336) |= v157;
            v68 = GameRoutine_8450e0_alt2(v67, v65, v66);
            GameRoutine_844950_alt1((__int64)v68, (__int64)&v151);
            ++v64;
          } while (v62 != v64);
          ++v63;
        } while (v63 != v62);
      }
    LABEL_98:
      v7 = v132;
    }
  LABEL_99:
    v136 = 0;
    goto LABEL_100;
  }
  v111 = *v8;
  if (*v8 != 0 && *(_BYTE*)(v111 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    if (*(_QWORD*)(a1 + 127192) == 0 ||
        ((v112 = *(_DWORD*)(v111 + 52)) & 0x80000000) != 0 ||
        (v113 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL),
         v175_.v175 = v113 + 144LL * v112, v113 == 0)) {
    LABEL_167:
      v116 = *(unsigned __int8*)(v111 + 16);
      v136 = v111 + 64;
      v181 = *(_DWORD*)(v111 + 36);
      if (v116 != 0) {
        v117 = game_UnitPool_Get_alt1((_BYTE*)(v111 + 16));
        if (v117 != nullptr) {
          v118 = *((_DWORD*)v117 + 148);
          if (v118 >= 2 && *(_DWORD*)(v111 + 12356) == 1) {
            v131 = *(unsigned __int8*)(v111 + 69);
            if (v131 == *((unsigned __int8*)v117 + 584)) {
              v119 = *(unsigned __int8*)(v111 + 70);
              if (v119 == *((unsigned __int8*)v117 + 585)) {
                v120 = 0;
                v133 = a1 + 127160;
                do {
                  for (i = 0; i != v118; ++i) {
                    v144 = 0;
                    v150 = 0;
                    v148 = 0;
                    v149 = -1;
                    v147 = 9;
                    v145 = v131 + v120;
                    v146 = v119 + i;
                    if (*v180 == 0) {
                      v126 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
                      v127 = v126 + 3;
                      v128 = v126;
                      v126[1] = 0;
                      v126[2] = 0;
                      *v126 = GameData_1ff2e90;
                      GameRoutine_844ee0_alt1((__int64)(v126 + 3));
                      v129 = v180;
                      v130 = v180[1];
                      *v180 = (__int64)v127;
                      v129[1] = (__int64)v128;
                      if (v130 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
                        std___1___shared_weak_count___release_weak_alt1(v130);
                      }
                    }
                    v122 = v145;
                    v123 = v146;
                    v124 = *v180;
                    *(_DWORD*)(v124 + 12336) |= v150;
                    v125 = GameRoutine_8450e0_alt2(v124, v122, v123);
                    GameRoutine_844950_alt1((__int64)v125, (__int64)&v144);
                  }
                  v7 = v133;
                  ++v120;
                  v136 = 0;
                } while (v120 != v118);
              }
            }
          }
        }
      }
      goto LABEL_100;
    }
    v172_.v172[0] = GameData_1ff2fe8;
    v172_.v172[1] = &v179;
    v172_.v174 = v172_.v172;
    v172_.v173 = &v175_.v175;
    (*(void (**)(__int64))(*(_QWORD*)(v113 + 144LL * v112) + 760LL))(
        v113 + 144LL * v112);
    if (v172_.v174 == v172_.v172) {
      v114 = 32;
    }
    else {
      if (v172_.v174 == nullptr) {
      LABEL_166:
        v111 = *v8;
        goto LABEL_167;
      }
      v114 = 40;
    }
    (*(void (**)(__int64))(*v172_.v174 + v114))((__int64)v172_.v174);
    goto LABEL_166;
  }
  if (*(_BYTE*)(a1 + 53056) == 0) {
    goto LABEL_99;
  }
  v181 = *(_DWORD*)(a1 + 53060);
  v136 = a1 + 90128;
LABEL_100:
  if ((*(_BYTE*)(v7 + 212) & 0x10) != 0 ||
      *(_BYTE*)(v7 + 24) == 1 &&
          *(_BYTE*)((v76 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *(unsigned __int16*)(v7 + 16))) +
                    72) == 14 &&
          ((v77 = *(unsigned __int8*)(v76 + 73), v45 = v77 > 0x11,
            v78 = (1 << v77) & 0x38034, !v45)
               ? (v79 = v78 == 0)
               : (v79 = true),
           !v79)) {
    v80 = *(_QWORD*)(v7 + 32);
    if (v80 != 0) {
      v81 = *(_DWORD*)(v80 + 592);
      if (v81 >= 1) {
        for (j = 0; j != v81; ++j) {
          for (k = 0; k != v81; ++k) {
            v88 = *(_BYTE*)(v80 + 584);
            v89 = *(_BYTE*)(v80 + 585);
            v137 = 0;
            v143 = 0;
            v141 = 0;
            v142 = -1;
            v140 = 9;
            v138 = v88 + j;
            v139 = v89 + k;
            if (*v180 == 0) {
              v90 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
              v91 = v90 + 3;
              v92 = v90;
              v90[1] = 0;
              v90[2] = 0;
              *v90 = GameData_1ff2e90;
              GameRoutine_844ee0_alt1((__int64)(v90 + 3));
              v93 = v180;
              v94 = v180[1];
              *v180 = (__int64)v91;
              v93[1] = (__int64)v92;
              if (v94 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
                std___1___shared_weak_count___release_weak_alt1(v94);
              }
            }
            v84 = v138;
            v85 = v139;
            v86 = *v180;
            *(_DWORD*)(v86 + 12336) |= v143;
            v87 = GameRoutine_8450e0_alt2(v86, v84, v85);
            GameRoutine_844950_alt1((__int64)v87, (__int64)&v137);
          }
        }
      }
    }
  }
  v172_.v172[0] = GameData_1ff3068;
  v172_.v172[1] = &v181;
  v172_.v174 = v172_.v172;
  v172_.v173 = v134;
  if (v136 != 0 && *(int*)(v136 + 12292) >= 1) {
    v95 = v136 + 4;
    v96 = 0;
    while (v172_.v174 != nullptr) {
      (*(void (**)(_QWORD*, __int64))(*v172_.v174 + 48LL))(v172_.v174, v95);
      ++v96;
      v95 += 12;
      if (v96 >= *(int*)(v136 + 12292)) {
        goto LABEL_122;
      }
    }
  LABEL_181:
    GameRoutine_60a310_alt1();
  }
LABEL_122:
  v97 = v184_.v184;
  if (v184_.v184 != 0 && *(int*)(v184_.v184 + 12292) >= 1) {
    v98 = v184_.v184 + 4;
    v99 = 0;
    while (v172_.v174 != nullptr) {
      (*(void (**)(_QWORD*, __int64))(*v172_.v174 + 48LL))(v172_.v174, v98);
      ++v99;
      v98 += 12;
      if (v99 >= *(int*)(v97 + 12292)) {
        goto LABEL_127;
      }
    }
    goto LABEL_181;
  }
LABEL_127:
  v100 = v182_.v182;
  if (v182_.v182 != 0 && *(int*)(v182_.v182 + 12292) >= 1) {
    v101 = v182_.v182 + 4;
    v102 = 0;
    while (v172_.v174 != nullptr) {
      (*(void (**)(_QWORD*, __int64))(*v172_.v174 + 48LL))(v172_.v174, v101);
      ++v102;
      v101 += 12;
      if (v102 >= *(int*)(v100 + 12292)) {
        goto LABEL_132;
      }
    }
    goto LABEL_181;
  }
LABEL_132:
  result = (__int64)v172_.v174;
  if (v172_.v174 == v172_.v172) {
    v103 = 32;
  }
  else {
    if (v172_.v174 == nullptr) {
      goto LABEL_137;
    }
    v103 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v172_.v174 + v103))((__int64)v172_.v174);
LABEL_137:
  v104 = v182_.v183;
  if (v182_.v183 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v182_.v183 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
    result = std___1___shared_weak_count___release_weak_alt1(v104);
  }
  v105 = v184_.v185;
  if (v184_.v185 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v184_.v185 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v105 + 16LL))(v105);
    return std___1___shared_weak_count___release_weak_alt1(v105);
  }
  return result;
}

__int64 DeployData_f25050(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  char v5;
  char v6;
  unsigned __int8 v7;
  __int64* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  unsigned int v14;
  int v15;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v22;
  unsigned int v23;

  v1 = a1 + 126976;
  v2 = GameData_212cff0[0];
  v3 = *GameData_212cff0[0];
  if (*GameData_212cff0[0] == 0) {
    v3 = *(_QWORD*)(a1 + 127360);
    if (v3 != 0) {
      return 3;
    }
  LABEL_16:
    v6 = 1;
    goto LABEL_17;
  }
  if (*(_BYTE*)(v3 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <= 1) {
    if (GameRoutine_f24160_alt1()) {
      return 1;
    }
    v3 = *v2;
    if ((*(_DWORD*)(*v2 + 52) & 0x80000000) == 0 &&
        *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL) != 0) {
      return 0;
    }
  }
  if (*(_QWORD*)(v1 + 384) != 0) {
    return 3;
  }
  if (v3 == 0) {
    goto LABEL_16;
  }
  v5 = *(_BYTE*)(v3 + 32);
  if (v5 != 0) {
    v6 = 0;
    if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <
        2) {
      goto LABEL_18;
    }
  }
  else {
    v6 = 0;
  }
LABEL_17:
  v5 = *(_BYTE*)(v1 + 392);
LABEL_18:
  v7 = ((unsigned __int8)(v5 - 2) >> 1) | ((v5 - 2) << 7);
  if (v7 < 0xFu && ((0x7C11u >> v7) & 1) != 0) {
    return GameData_1b998f4[v7];
  }
  if ((v6 & 1) != 0 || *(_BYTE*)(v3 + 32) == 0 ||
      (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
    v8 = (__int64*)(v1 + 184);
    goto LABEL_27;
  }
  if ((*(_DWORD*)(v3 + 48) & 0xFFF) != 0) {
    v8 = (__int64*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(v3 + 48) & 0xFFF));
  LABEL_27:
    v9 = *v8;
    if (*v8 == 0) {
      goto LABEL_58;
    }
    LOBYTE(v10) = *(_BYTE*)(v9 + 104);
    goto LABEL_29;
  }
  v18 = *(unsigned __int16*)(v3 + 40);
  if (v18 == 0) {
    v18 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v19 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v18);
  v9 = *(_QWORD*)(v19 + 192);
  v20 = *(unsigned __int8*)(v19 + 72);
  if (v9 == 0 || v20 > 7) {
    goto LABEL_58;
  }
  if (*(_BYTE*)(v9 + 105) == 0) {
    goto LABEL_58;
  }
  v10 = *(unsigned __int8*)(v9 + 104);
  if (v10 == 2) {
    goto LABEL_58;
  }
LABEL_29:
  if ((((unsigned __int16)GameData_21ca458 >> v10) & 1) == 0) {
    goto LABEL_43;
  }
  v11 = *(unsigned __int8*)(v9 + 106);
  if (*(_BYTE*)(v9 + 106) == 0 || v11 == 6) {
    v13 = *(_QWORD*)(v9 + 576);
    if (v13 == 0) {
      goto LABEL_43;
    }
  }
  else {
    if (v11 != 1) {
      goto LABEL_43;
    }
    v13 = *(_QWORD*)(v9 + 576);
    if (v13 == 0) {
      goto LABEL_44;
    }
  }
  v14 = *(unsigned __int8*)(v13 + 72);
  v15 = *(unsigned __int8*)(v13 + 73);
  if (v14 > 7 || v15 != 1) {
  LABEL_43:
    if ((unsigned int)*(unsigned __int8*)(v9 + 250) - 7 < 2) {
      return 0;
    }
  }
LABEL_44:
  v17 = (unsigned __int8)GameRoutine_6fcce0();
  if (v17 > 1) {
    if (v17 == 2) {
      return 1;
    }
    return 2;
  }
  if (v17 != 0) {
    return 0;
  }
LABEL_58:
  if (*(_BYTE*)(v1 + 208) == 1) {
    v22 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)(v1 + 200));
    if (*(_BYTE*)(v22 + 72) == 14) {
      v23 = *(unsigned __int8*)(v22 + 73);
      if (v23 <= 0x11) {
        if (((1 << v23) & 0x18034) != 0) {
          return 1;
        }
        if (v23 == 17) {
          return 3;
        }
      }
    }
  }
  if ((*(_BYTE*)(v1 + 396) & 0x10) != 0) {
    return 3;
  }
  else {
    return 4;
  }
}

_QWORD* game_map_DeployData_TargetEnumerateSubTarget(__int64 a1, __int64* a2,
                                                     int a3)
{
  _QWORD* result;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  _BYTE* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  bool v26;
  __int64 v27;
  _QWORD v28[2];
  __int64* v29;
  _QWORD* v30;
  int v31;

  result = (_QWORD*)DeployData_f25050_alt1(a1);
  if ((_DWORD)result != a3) {
    return result;
  }
  v31 = -1;
  if ((unsigned int)DeployData_f25050_alt1(a1) == 3) {
    goto LABEL_29;
  }
  v7 = (__int64*)(a1 + 127160);
  if (GameData_21cd0e8 == 0 || *(_BYTE*)(GameData_21cd0e8 + 32) == 0 ||
      (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
    v8 = *v7;
    if (*v7 == 0) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
    if (v8 == 0) {
      goto LABEL_12;
    }
  LABEL_10:
    v9 = *(unsigned __int8*)(v8 + 104);
    goto LABEL_11;
  }
  v14 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
  if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
    v14 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v14);
  v16 = *(_QWORD*)(v15 + 192);
  v17 = *(unsigned __int8*)(v15 + 72);
  if (v16 != 0 && v17 <= 7 && *(_BYTE*)(v16 + 105) != 0) {
    v9 = *(unsigned __int8*)(v16 + 104);
    if (v9 != 2) {
    LABEL_11:
      if (v9 == 9) {
        goto LABEL_29;
      }
    LABEL_12:
      if (GameData_21cd0e8 == 0 || *(_BYTE*)(GameData_21cd0e8 + 32) == 0) {
        goto LABEL_17;
      }
    }
  }
  if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <= 1) {
    if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) == 0) {
      v19 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
      if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
        v19 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v19);
      v10 = *(_QWORD*)(v20 + 192);
      v21 = *(unsigned __int8*)(v20 + 72);
      if (v10 == 0 || v21 > 7) {
        goto LABEL_24;
      }
      v11 = *(unsigned __int8*)(v10 + 105);
      if (*(_BYTE*)(v10 + 105) == 0 || *(_BYTE*)(v10 + 104) == 2) {
        goto LABEL_24;
      }
      goto LABEL_19;
    }
    v7 = (__int64*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
  }
LABEL_17:
  v10 = *v7;
  if (v10 == 0) {
    goto LABEL_22;
  }
  v11 = *(unsigned __int8*)(v10 + 105);
LABEL_19:
  if (v11 != 4 || *(_BYTE*)(v10 + 278) != 0 || *(_BYTE*)(v10 + 279) != 0 ||
      *(_QWORD*)(v10 + 608) == 0) {
  LABEL_22:
    if (GameData_21cd0e8 == 0 || *(_BYTE*)(GameData_21cd0e8 + 32) == 0) {
      goto LABEL_29;
    }
  LABEL_24:
    if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
      goto LABEL_29;
    }
    if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) != 0) {
      v12 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
      if (v12 == nullptr) {
        goto LABEL_64;
      }
    }
    else {
      v23 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
      if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
        v23 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v24 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v23);
      v12 = *(_BYTE**)(v24 + 192);
      v25 = *(unsigned __int8*)(v24 + 72);
      v26 = v12 == nullptr || v25 > 7;
      if (v26 || v12[105] == 0 || v12[104] == 2) {
        goto LABEL_64;
      }
    }
    if (v12[250] == 28) {
      game_map_DeployData_TargetEnumerate(a1, a2, a3);
      goto LABEL_29;
    }
  LABEL_64:
    v31 = -1;
    v27 = GameData_21cd0e8 + 24752;
    goto LABEL_65;
  }
  if (GameData_21cd0e8 != 0 && *(_BYTE*)(GameData_21cd0e8 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <= 1) {
    goto LABEL_64;
  }
  if (*(_BYTE*)(a1 + 53056) == 0) {
  LABEL_29:
    result = v28;
    v29 = a2;
    v28[0] = GameData_1ff30e8;
    v28[1] = &v31;
    v30 = v28;
  LABEL_30:
    v13 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
  }
  v31 = *(_DWORD*)(a1 + 53060);
  v27 = a1 + 102472;
LABEL_65:
  v29 = a2;
  v28[0] = GameData_1ff30e8;
  v28[1] = &v31;
  v30 = v28;
  GameRoutine_845b40(v27, v28);
  result = v30;
  if (v30 == v28) {
    goto LABEL_30;
  }
  if (v30 != nullptr) {
    v13 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
  }
  return result;
}

__attribute__((swiftcall)) void DeployData_f256b0(PSEUDO_X8 x8_, __int64 a1,
                                                  unsigned int a2,
                                                  unsigned int a3,
                                                  unsigned int a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  _QWORD* v11;
  __int16 v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64*** v24;
  __int64** v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64*** v28;
  __int64** v29;
  unsigned __int64 v30;
  __int64* v31;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a5 + 5) = 0;
  *(_QWORD*)(a5 + 8) = 0;
  *(_DWORD*)a5 = (unsigned __int8)a2 | ((unsigned __int8)a3 << 8);
  result = GameRoutine_f25920_alt1(a1, a2, a3, a4, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a5 + 4) = result & 1;
  if ((result & 1) != 0) {
    v11 = (_QWORD*)(a1 + 126976);
    v12 = (_WORD)a3 << 8;
    result = (__int64)GameHr_fbb8a0(a2, a3, v11[27]),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (a4 == 2) {
      if (v13 == 2) {
        v19 = v11[18];
        if (v19 != 0 && v11[20] != 0) {
          v20 = (unsigned __int16)(v12 | a2);
          v21 = (unsigned __int16)(v12 | a2);
          v22 = v19 - 1;
          if ((v19 & (v19 - 1)) != 0) {
            v23 = (unsigned __int16)(v12 | a2);
            if (v19 <= v21) {
              v23 = v20 % (unsigned int)v19;
            }
          }
          else {
            v23 = ((_DWORD)v19 - 1) & (unsigned int)v21;
          }
          v28 = *(__int64****)(v11[17] + 8 * v23);
          if (v28 != nullptr) {
            v29 = *v28;
            if (v29 != nullptr) {
              if ((v19 & v22) == 0) {
                while (1) {
                  v31 = v29[1];
                  if (v31 == (__int64*)v21) {
                    if (*((unsigned __int16*)v29 + 8) == v20) {
                      goto LABEL_6;
                    }
                  }
                  else if (((unsigned __int64)v31 & v22) != v23) {
                    {
                      result;
                      return;
                    }
                  }
                  v29 = (__int64**)*v29;
                  if (v29 == nullptr) {
                    result;
                    return;
                  }
                }
              }
              do {
                v30 = (unsigned __int64)v29[1];
                if (v30 == v21) {
                  if (*((unsigned __int16*)v29 + 8) == v20) {
                    goto LABEL_6;
                  }
                }
                else {
                  if (v30 >= v19) {
                    v30 %= v19;
                  }
                  if (v30 != v23) {
                    result;
                    return;
                  }
                }
                v29 = (__int64**)*v29;
              } while (v29 != nullptr);
            }
          }
        }
      }
    }
    else if (a4 == 1) {
      if (v13 == 1) {
        v14 = v11[18];
        if (v14 != 0 && v11[20] != 0) {
          v15 = (unsigned __int16)(v12 | a2);
          v16 = (unsigned __int16)(v12 | a2);
          v17 = v14 - 1;
          if ((v14 & (v14 - 1)) != 0) {
            v18 = (unsigned __int16)(v12 | a2);
            if (v14 <= v16) {
              v18 = v15 % (unsigned int)v14;
            }
          }
          else {
            v18 = ((_DWORD)v14 - 1) & (unsigned int)v16;
          }
          v24 = *(__int64****)(v11[17] + 8 * v18);
          if (v24 != nullptr) {
            v25 = *v24;
            if (v25 != nullptr) {
              if ((v14 & v17) == 0) {
                while (1) {
                  v27 = v25[1];
                  if (v27 == (__int64*)v16) {
                    if (*((unsigned __int16*)v25 + 8) == v15) {
                      goto LABEL_6;
                    }
                  }
                  else if (((unsigned __int64)v27 & v17) != v18) {
                    {
                      result;
                      return;
                    }
                  }
                  v25 = (__int64**)*v25;
                  if (v25 == nullptr) {
                    result;
                    return;
                  }
                }
              }
              do {
                v26 = (unsigned __int64)v25[1];
                if (v26 == v16) {
                  if (*((unsigned __int16*)v25 + 8) == v15) {
                    goto LABEL_6;
                  }
                }
                else {
                  if (v26 >= v14) {
                    v26 %= v14;
                  }
                  if (v26 != v18) {
                    result;
                    return;
                  }
                }
                v25 = (__int64**)*v25;
              } while (v25 != nullptr);
            }
          }
        }
      }
    }
    else if (a4 == 0 && (v13 & 0xFFFFFFFE) == 2) {
    LABEL_6:
      *(_QWORD*)(a5 + 8) = result;
      *(_BYTE*)(a5 + 5) = 1;
    }
  }
  {
    result;
    return;
  }
}

__int64 DeployData_f25a60(unsigned int* a1, unsigned int* a2)
{
  int v2;
  int v3;
  unsigned __int64* v4;
  bool v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 (**v36)();
  unsigned int v37;
  __int64 v38;
  int v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  char* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int16 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned int* v74;
  unsigned __int64 v75;
  int v76;
  _QWORD* v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 (**v83)();
  unsigned __int64* v84;
  __int64 v85;
  unsigned __int64* v86;
  _QWORD* v87;
  __int16 v88;
  __int64 (**v89)();
  unsigned __int64* v90;
  unsigned __int64* v91;
  int v92;
  __int16* v93;
  __int16 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned int v100;
  unsigned int v101;
  __int64 v102;
  __int16 v103;
  unsigned __int64 v104;
  __int16 v105;
  __int64 v106;
  char v107;
  char v108;
  __int64 v109;
  int v110;
  unsigned int v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  unsigned int v120;
  int v121;
  int v124;
  int v125;
  bool v126;
  int v127;
  __int64 v128;
  int v129;
  __int64 v130;
  int v131;
  __int64 v132;
  int v133;
  int v134;
  unsigned __int64 v135;
  unsigned int v136;
  unsigned int v137;
  int v138;
  __int64 v139;
  unsigned __int64 v140;
  int v141;
  int v142;
  int v143;
  __int64 v144;
  unsigned int* v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  bool v148;
  __int64 v149;
  int v150;
  __int64 v151;
  int v152;
  int v153;
  int v154;
  __int64 v155;
  unsigned int v156;
  __int64 v157;
  int v158;
  __int64 v159;
  int v160;
  int v161;
  signed int v162;
  int v163;
  int v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int8* v168;
  bool v169;
  int v170;
  bool v171;
  unsigned __int8* v172;
  unsigned __int8* v173;
  int v174;
  __int64 v175;
  int v176;
  __int64 v177;
  unsigned int v178;
  int v179;
  __int64 v182;
  __int64 v184;
  __int64 v185;
  int v186;
  int v187;
  int v188;
  signed int v189;
  int v190;
  __int64 v192;
  __int64 v193;
  int v194;
  int v195;
  __int64 v196;
  unsigned int v197;
  int v198;
  int v200;
  int j;
  int k;
  char v203;
  char v204;
  __int64 v205;
  __int64 v206;
  int v207;
  int v208;
  __int64 (**v209)();
  int v210;
  __int64 v211;
  unsigned int v212;
  __int64 v213;
  int v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  __int64 v218;
  char v219;
  char* v220;
  char* v221;
  unsigned int v222;
  unsigned int v223;
  int v224;
  unsigned int v225;
  int v226;
  __int64 v227;
  unsigned int v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  char v233;
  _BYTE* v234;
  int v235;
  char v236;
  int v237;
  __int64 v238;
  _BYTE* v239;
  __int64* v240;
  __int64 v241;
  unsigned int v242;
  __int64 v243;
  unsigned int v244;
  bool v245;
  unsigned int v246;
  __int64 v247;
  __int64 v248;
  unsigned int v249;
  unsigned int v251;
  __int64 v252;
  unsigned int v253;
  bool v254;
  unsigned __int64* v255;
  int v256;
  char v257;
  unsigned __int8 v258;
  unsigned int v259;
  unsigned __int64 v260;
  _DWORD* v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  char* v265;
  __int64 v266;
  unsigned int v267;
  unsigned int v268;
  int v269;
  __int64 v270;
  int v271;
  unsigned int v272;
  __int64 v273;
  unsigned int v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  char v279;
  __int64 v280;
  int v281;
  char v282;
  int v283;
  __int64 v284;
  _BYTE* v285;
  __int64* v286;
  unsigned int v287;
  __int64 v288;
  unsigned int v289;
  bool v290;
  unsigned int v291;
  __int64 v292;
  unsigned int v293;
  __int64 v294;
  unsigned int v295;
  bool v296;
  __int64 v297;
  int v298;
  unsigned __int64 v299;
  unsigned __int64 v300;
  unsigned int v301;
  unsigned __int64 v302;
  __int64 v303;
  int v304;
  unsigned __int64 v305;
  __int64 v306;
  int v307;
  unsigned __int8* v308;
  unsigned __int64 v309;
  unsigned __int64 v310;
  __int64 v311;
  unsigned __int64 v312;
  __int64 v313;
  unsigned __int64 v314;
  __int64 v315;
  __int64 v316;
  unsigned __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  int v323;
  __int64 v324;
  unsigned int v325;
  __int64 v326;
  __int64 v327;
  unsigned int v328;
  __int64*** v330;
  __int64** v331;
  unsigned __int64 v332;
  __int64* v333;
  int v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  unsigned __int64* v340;
  __int64 (**v341)();
  __int64 v342;
  int v343;
  int v344;
  __int64 v345;
  unsigned __int64 v346;
  unsigned __int8* v347;
  bool v348;
  unsigned __int64 v349;
  unsigned __int64 v350;
  __int64 v351;
  unsigned __int64 v352;
  __int64 v353;
  unsigned __int64 v354;
  __int64 v355;
  __int64 v356;
  unsigned __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  int v363;
  __int64 v364;
  __int64 v365;
  char* v366;
  char* v367;
  unsigned __int64 v368;
  unsigned __int64 v369;
  _BYTE* v370;
  unsigned int v371;
  unsigned int v372;
  char v373;
  unsigned int v374;
  unsigned __int64 v375;
  unsigned __int64 v376;
  __int64 v377;
  unsigned __int64 v378;
  unsigned __int64 v379;
  unsigned __int64 v380;
  unsigned __int64 v381;
  __int64 v382;
  unsigned __int64 v383;
  __int64 v384;
  _BYTE* v385;
  _BYTE* v386;
  char v387;
  __int64 v388;
  __int64 v389;
  _QWORD* v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  int v397;
  __int64 v398;
  __int64 m;
  __int64 v400;
  int v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  int v408;
  unsigned int v409;
  int v410;
  int v411;
  int v412;
  int v413;
  int v414;
  int v415;
  int v416;
  unsigned int v417;
  int v418;
  bool v419;
  int v420;
  unsigned int v421;
  int v422;
  int v423;
  unsigned int v424;
  int v425;
  int v426;
  int v427;
  int v428;
  unsigned int v429;
  int v430;
  bool v431;
  int v432;
  _QWORD* v433;
  __int64 v434;
  int v435;
  unsigned int* v436;
  unsigned int* v437;
  unsigned int* v438;
  int v439;
  int v440;
  int v441;
  unsigned int* v442;
  unsigned int* v443;
  unsigned int v444;
  unsigned int v445;
  unsigned __int64* v446;
  __int64 v447;
  __int64 v448;
  int v449;
  int v450;
  __int64* v451;
  int v452;
  int v453;
  char* v454;
  __int64 v455;
  unsigned int v456;
  int v457;
  unsigned int* v458;
  unsigned __int64* v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  _QWORD v463[3];
  _QWORD v464[2];
  char* v465;
  unsigned __int64 i;
  unsigned int* v467;
  int* v468;
  unsigned __int64* v469;
  __int64 (**v470)();
  unsigned __int64* p_i;
  __int64 v472;
  __int64* v473;
  int v474;

  v2 = *((char*)a2 + 4);
  v3 = *((char*)a2 + 5);
  v4 = (unsigned __int64*)a1;
  v5 = v2 < 1 || v3 < 1;
  if (v5 ||
      (v8 = *((_QWORD*)a2 + 1)) != 0 && ((v9 = *(_QWORD*)(v8 + 440)) == 0 ||
                                         *(unsigned __int8*)(v9 + 16) >= 4u)) {
    GameRoutine_f23940(a1);
    return 0;
  }
  v10 = GameData_21d8840;
  if (GameData_21d8840 != 0) {
    nn_os_LockMutex(GameData_21d8840 + 472);
    v11 = *(_DWORD*)(GameData_21d8840 + 516);
    nn_os_UnlockMutex(v10 + 472);
    if (v11 == 1) {
      return 0;
    }
    LOBYTE(v2) = *((_BYTE*)a2 + 4);
    LOBYTE(v3) = *((_BYTE*)a2 + 5);
    v8 = *((_QWORD*)a2 + 1);
  }
  v12 = ((((int)*a2 - 0x61C8864680B583EBLL) << 12) +
         ((unsigned __int64)((int)*a2 - 0x61C8864680B583EBLL) >> 4) +
         (unsigned int)(char)v2 - 0x61C8864680B583EBLL) ^
        ((int)*a2 - 0x61C8864680B583EBLL);
  i = ((v12 << 12) + (unsigned int)(char)v3 + (v12 >> 4) -
       0x61C8864680B583EBLL) ^
      v12;
  game_map_f0ee60(&i, v8);
  v13 = (a2[4] + (i << 12) + (i >> 4) - 0x61C8864680B583EBLL) ^ i;
  v14 = (a2[5] + (v13 << 12) + (v13 >> 4) - 0x61C8864680B583EBLL) ^ v13;
  v15 = *((unsigned __int8*)a2 + 32);
  i = v14;
  if (v15 == 1) {
    v16 = *((unsigned __int16*)a2 + 12);
    v17 =
        ((v14 << 12) - 0x61C8864680B583EBLL + (v14 >> 4) +
         *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v16) +
                              16LL)) ^
        v14;
    v18 = (v16 - 0x61C8864680B583EBLL + (v17 << 12) + (v17 >> 4)) ^ v17;
    v19 = (*((unsigned __int8*)a2 + 26) - 0x61C8864680B583EBLL + (v18 << 12) +
           (v18 >> 4)) ^
          v18;
    if ((*((_BYTE*)a2 + 27) & 8) != 0) {
      v20 = 0x9E3779B97F4B6254LL;
    }
    else {
      v20 = 0x9E3779B97F4BBB5ELL;
    }
    v14 = (v20 + (v19 << 12) + (v19 >> 4)) ^ v19;
  }
  v22 = (unsigned __int64*)(a2 + 10);
  v21 = *((_QWORD*)a2 + 5);
  v23 = (*((_QWORD*)a2 + 9) - 0x61C8864680B583EBLL + (v14 << 12) + (v14 >> 4)) ^
        v14;
  i = v23;
  if (v21 != 0) {
    v23 ^= (v23 << 12) - 0x61C8864680B583EBLL + (v23 >> 4) +
           *(unsigned __int16*)(v21 + 16);
    i = v23;
  }
  v24 = *((_QWORD*)a2 + 6);
  if (v24 != 0) {
    v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 32LL))(v24);
    v23 = (v25 - 0x61C8864680B583EBLL + (i << 12) + (i >> 4)) ^ i;
  }
  v26 = *((_QWORD*)a2 + 7);
  if (v26 != 0) {
    v23 ^= (v23 << 12) - 0x61C8864680B583EBLL + (v23 >> 4) +
           *(unsigned __int16*)(v26 + 16);
  }
  v27 = ((v23 << 12) - 0x61C8864680B583EBLL + (v23 >> 4) +
         *((unsigned __int8*)a2 + 64)) ^
        v23;
  i = (a2[17] - 0x61C8864680B583EBLL + (v27 << 12) + (v27 >> 4)) ^ v27;
  if (*a2 == 2) {
    v472 = 0;
    v470 = nullptr;
    p_i = nullptr;
    if (GameData_21cd0e8 != 0 && *(_BYTE*)(GameData_21cd0e8 + 32) != 0) {
      v28 = *(_DWORD*)(GameData_21cd120 + 4368);
      if ((unsigned int)(v28 - 7) <= 1 && v28 == 7 &&
          (*(_BYTE*)(*(_QWORD*)(GameData_21cd130 + 48) + 240LL) & 1) != 0) {
        v29 = *(unsigned int*)(GameData_21cd0e8 + 37044);
        if ((int)v29 >= 1) {
          v30 = GameData_212cfb8[0];
          v31 = GameData_21cd0e8 + 24756;
          do {
            if ((MapUtil_753570((unsigned int)*(char*)(v31 + 1),
                                (unsigned int)*(char*)(v31 + 2)) &
                 1) != 0) {
              if (*(_BYTE*)(v31 + 5) != 0 &&
                      (v32 = game_UnitPool_Get(v31 + 5)) != 0 &&
                      *(_QWORD*)(v32 + 392) != 0 ||
                  (*(__int16*)(v31 + 6) & 0x8000000000000000LL) == 0 &&
                      (v33 = *(_QWORD*)(*(_QWORD*)(*v30 + 16) + 8LL)) != 0 &&
                      ((v34 = v33 + 144LL * *(__int16*)(v31 + 6),
                        ((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 272LL))(
                             v34) &
                         1) != 0) ||
                       ((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 288LL))(v34) &
                        1) != 0)) {
                GameRoutine_f28ee0(&v470, v31);
              }
            }
            --v29;
            v31 += 12;
          } while (v29 != 0);
          if (v470 != (__int64 (**)())p_i) {
            v35 = i;
            v36 = v470;
            do {
              i = ((v35 << 12) - 0x61C8864680B583EBLL + (v35 >> 4) +
                   (unsigned int)*((char*)v36 + 1)) ^
                  v35;
              v37 = *((char*)v36 + 2);
              v36 = (__int64 (**)())((char*)v36 + 12);
              v35 = (v37 - 0x61C8864680B583EBLL + (i << 12) + (i >> 4)) ^ i;
              i = v35;
            } while (v36 != (__int64 (**)())p_i);
          }
          if (v470 != nullptr) {
            p_i = (unsigned __int64*)v470;
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
          }
        }
      }
    }
  }
  if (GameData_21cd108 == 0 ||
      (v39 = *(unsigned __int8*)(GameData_21cd108 + 8),
       v40 = (*(unsigned __int8*)(GameData_21cd108 + 20) -
              0x61C8864680B583EBLL + (i << 12) + (i >> 4)) ^
             i,
       i = (*(_QWORD*)(GameData_21cd108 + 12672) - 0x61C8864680B583EBLL +
            (v40 << 12) + (v40 >> 4)) ^
           v40,
       v39 == 0) ||
      game_UnitPool_Get(GameData_21cd108 + 8) == 0 ||
      *(_BYTE*)(GameData_21cd108 + 20) == 0 ||
      (v41 = Mind_746340(), v42 = 0x9E3779B97F4BBB5ELL, (v41 & 1) != 0)) {
    v42 = 0x9E3779B97F4B6254LL;
  }
  i ^= v42 + (i << 12) + (i >> 4);
  if (GameData_21cd108 == 0 || *(_BYTE*)(GameData_21cd108 + 8) == 0 ||
      game_UnitPool_Get(GameData_21cd108 + 8) == 0 ||
      *(_BYTE*)(GameData_21cd108 + 20) == 0 ||
      (v43 = Mind_746340(), v44 = 0x9E3779B97F4BBB5ELL, (v43 & 1) != 0)) {
    v44 = 0x9E3779B97F4B6254LL;
  }
  i ^= v44 + (i << 12) + (i >> 4);
  if (GameData_21cd108 == 0 || *(_BYTE*)(GameData_21cd108 + 8) == 0 ||
      game_UnitPool_Get(GameData_21cd108 + 8) == 0 ||
      *(_BYTE*)(GameData_21cd108 + 20) == 0 ||
      (v45 = Mind_746340(), v46 = 0x9E3779B97F4BBB5ELL, (v45 & 1) != 0)) {
    v46 = 0x9E3779B97F4B6254LL;
  }
  i ^= v46 + (i << 12) + (i >> 4);
  if (GameData_21cd108 == 0 || *(_BYTE*)(GameData_21cd108 + 8) == 0 ||
      game_UnitPool_Get(GameData_21cd108 + 8) == 0 ||
      (v47 = 0x9E3779B97F4BBB5ELL, *(_BYTE*)(GameData_21cd108 + 20) == 0)) {
    v47 = 0x9E3779B97F4B6254LL;
  }
  v48 = (v47 + (i << 12) + (i >> 4)) ^ i;
  if (GameData_21cd0e8 != 0 && *(_BYTE*)(GameData_21cd0e8 + 32) != 0) {
    if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) >= 2) {
      v49 = 0x9E3779B97F4BBB5ELL;
    }
    else {
      v49 = 0x9E3779B97F4B6254LL;
    }
    v50 = (v48 >> 4) + (v48 << 12) + v49;
  }
  else {
    v49 = 0x9E3779B97F4BBB5ELL;
    v50 = (v48 << 12) - 0x61C8864680B444A2LL + (v48 >> 4);
  }
  v51 = v50 ^ v48;
  v52 = v49 + (v51 << 12);
  v53 = *v22;
  v54 = (v52 + (v51 >> 4)) ^ v51;
  if (*v22 != 0 && *(_BYTE*)(v53 + 105) == 4 && *(_BYTE*)(v53 + 278) == 0) {
    v55 = 0x9E3779B97F4BBB5ELL;
    if (*(_BYTE*)(v53 + 279) == 0) {
      if (*(_QWORD*)(v53 + 608) != 0) {
        v55 = 0x9E3779B97F4B6254LL;
      }
      else {
        v55 = 0x9E3779B97F4BBB5ELL;
      }
    }
  }
  else {
    v55 = 0x9E3779B97F4BBB5ELL;
  }
  v56 = ((v54 >> 4) + (v54 << 12) + v55) ^ v54;
  v57 = *((__int64**)a2 + 10);
  v58 = *((__int64**)a2 + 11);
  for (i = v56; v57 != v58; i = v56) {
    v59 = *v57++;
    v56 ^= (v56 << 12) - 0x61C8864680B583EBLL + (v56 >> 4) + v59;
  }
  if ((GameRoutine_f23ea0(v4) & 1) != 0) {
    v60 = 0x9E3779B97F4B6254LL;
  }
  else {
    v60 = 0x9E3779B97F4BBB5ELL;
  }
  v61 = (v60 + (i << 12) + (i >> 4)) ^ i;
  if (v4[15932] == v61) {
    return 0;
  }
  v443 = (unsigned int*)(v4 + 15889);
  v62 = (&GameData_1ff2ed0)[2 * *(unsigned int*)v4];
  v63 = strlen(v62);
  if (v63 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v64 = v63;
  if (v63 >= 0x17) {
    if ((v63 | 7) == 0x17) {
      v66 = 26;
    }
    else {
      v66 = (v63 | 7) + 1;
    }
    v65 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v66, 16, 0);
    v464[1] = v64;
    v465 = v65;
    v464[0] = v66 | 1;
    goto LABEL_99;
  }
  LOBYTE(v464[0]) = 2 * v63;
  v65 = (char*)v464 + 1;
  if (v63 != 0) {
  LABEL_99:
    memmove(v65, v62, v64);
  }
  v65[v64] = 0;
  std___1_to_string_1a0a790((void*)(v463), *(unsigned int*)v4);
  GameRoutine_f23940(v4);
  v4[15932] = v61;
  v67 = *(_QWORD*)a2;
  v68 = *((_QWORD*)a2 + 2);
  v4[15914] = *((_QWORD*)a2 + 1);
  v4[15915] = v68;
  v4[15913] = v67;
  if (*((unsigned __int8*)v4 + 127336) == *((unsigned __int8*)a2 + 32)) {
    if (*((_BYTE*)v4 + 127336) != 0) {
      v69 = *((_WORD*)a2 + 12);
      *((_BYTE*)v4 + 127330) = *((_BYTE*)a2 + 26);
      *((_WORD*)v4 + 63664) = v69;
      *((_BYTE*)v4 + 127331) = *((_BYTE*)a2 + 27);
      *((_DWORD*)v4 + 31833) = a2[7];
    }
  }
  else if (*((_BYTE*)v4 + 127336) != 0) {
    *((_BYTE*)v4 + 127336) = 0;
  }
  else {
    v4[15916] = 0;
    v4[15916] = *((_QWORD*)a2 + 3);
    *((_BYTE*)v4 + 127336) = 1;
  }
  v4[15918] = *v22;
  v70 = *((_QWORD*)a2 + 6);
  v71 = *((_QWORD*)a2 + 7);
  v72 = *((_QWORD*)a2 + 9);
  v4[15921] = *((_QWORD*)a2 + 8);
  v4[15922] = v72;
  v4[15919] = v70;
  v4[15920] = v71;
  if (v4 + 15913 != (unsigned __int64*)a2) {
    GameRoutine_d5ffa0(v4 + 15923);
  }
  v73 = *((_QWORD*)a2 + 1);
  if (v73 != 0 && *(_QWORD*)(v73 + 392) != 0 &&
      (*(_BYTE*)(v73 + 417) & 0x1C) == 0 &&
      (*(float (**)(__int64))(*(_QWORD*)(v73 + 152) + 16LL))(v73 + 152) >
          0.0f &&
      (*(_BYTE*)(v73 + 416) & 1) == 0 && (game_Unit_IsLocked(v73) & 1) == 0) {
    v4[15899] = *((_QWORD*)a2 + 1);
  }
  v74 = (unsigned int*)(v4 + 15889);
  v461 = 0;
  v462 = 0;
  v460 = 0;
  v75 = v4[15899];
  if (v75 == 0) {
    v433 = nullptr;
    v81 = 0;
    v432 = 1;
    goto LABEL_148;
  }
  *(_DWORD*)(v75 + 416) |= 0x10000000u;
  v76 = *((unsigned __int8*)v4 + 127336);
  if (v76 == 1) {
    v77 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v77[2] = 0;
    *v77 = GameData_212f7c0[0] + 2;
    v77[1] = 0;
    v77[4] = v75;
    v433 = v77;
    v77[3] = game_UnitEquipScope_vtable;
    v77[5] = v4[15916];
    v77[6] = 0;
    v77[6] = *(_QWORD*)(v75 + 2208);
    *(_QWORD*)(v75 + 2208) = v77 + 3;
    v78 = v77[4];
    v79 = *(_DWORD*)(v78 + 416);
    if ((v79 & 0x10000000) == 0) {
      v80 = v77[4];
      *(_DWORD*)(v78 + 416) = v79 | 0x10000000;
      game_6c51e0(v80);
      GameRoutine_6c6da0(v78);
      game_6c6ec0(v78);
      *(_DWORD*)(v78 + 416) &= ~0x10000000u;
    }
  }
  else {
    v433 = nullptr;
  }
  if (*(_DWORD*)v4 == 2) {
    v82 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v82[1] = 0;
    v82[2] = 0;
    v83 = (__int64 (**)())(v82 + 3);
    v84 = v82;
    *v82 = GameData_1ff3168;
    v85 = game_g_shared_system_skills_ptr;
    LODWORD(v470) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x164LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    GameRoutine_93edf0(v82 + 3, v75, &v470);
    v470 = v83;
    p_i = v84;
    GameRoutine_f28c20(&v460, &v470);
    v86 = p_i;
    if (p_i != nullptr && atomic_fetch_add((atomic_ullong* volatile)(p_i + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64*))(*v86 + 16))(v86);
      std___1___shared_weak_count___release_weak(v86);
    }
    v87 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    v88 = *(_DWORD*)((char*)((_UNKNOWN*)0xBCLL) + v85);
    v89 = (__int64 (**)())(v87 + 3);
    v90 = v87;
    v87[1] = 0;
    v87[2] = 0;
    *v87 = GameData_1ff3168;
    LODWORD(v470) = v88 & 0xFFF;
    GameRoutine_93edf0(v87 + 3, v75, &v470);
    v470 = v89;
    p_i = v90;
    GameRoutine_f28c20(&v460, &v470);
    v91 = p_i;
    if (p_i != nullptr && atomic_fetch_add((atomic_ullong* volatile)(p_i + 1),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64*))(*v91 + 16))(v91);
      std___1___shared_weak_count___release_weak(v91);
    }
    v74 = (unsigned int*)(v4 + 15889);
  }
  v432 = v76 ^ 1;
  if (v76 != 0) {
    v92 = *(_DWORD*)(v75 + 416);
  }
  else {
    v92 = *(_DWORD*)(v75 + 416);
    if (v461 == v460) {
      goto LABEL_133;
    }
  }
  *(_DWORD*)(v75 + 416) = v92 | 0x10000000;
  game_6c51e0(v75);
  GameRoutine_6c6da0(v75);
  game_6c6ec0(v75);
  v92 = *(_DWORD*)(v75 + 416);
LABEL_133:
  *(_DWORD*)(v75 + 416) = v92 & 0xEFFFFFFF;
  v81 = *((_QWORD*)v74 + 10);
  if (v81 != 0 && (*((_BYTE*)a2 + 22) & 0x40) != 0 &&
      *(_WORD*)(v81 + 1952) != 0) {
    v93 = (__int16*)(v81 + 1952);
    if (*((_BYTE*)v74 + 72) == 1) {
      v94 = *v93;
      *((_BYTE*)v74 + 66) = *(_BYTE*)(v81 + 1954);
      *((_WORD*)v74 + 32) = v94;
      *((_BYTE*)v74 + 67) = *(_BYTE*)(v81 + 1955);
      v74[17] = *(_DWORD*)(v81 + 1956);
      LOWORD(v93) = *((_WORD*)v74 + 32);
    }
    else {
      *((_QWORD*)v74 + 8) = 0;
      v93 = *(__int16**)v93;
      *((_BYTE*)v74 + 72) = 1;
      *((_QWORD*)v74 + 8) = v93;
    }
    v95 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * (unsigned __int16)v93);
    v96 = *(_QWORD*)(v95 + 192);
    if (v96 != 0 && *(unsigned __int8*)(v95 + 72) <= 7u &&
        *(_BYTE*)(v96 + 105) != 0 && *(_BYTE*)(v96 + 104) != 2) {
      *((_QWORD*)v74 + 6) = v96;
    }
  }
LABEL_148:
  v97 = *((_QWORD*)a2 + 6);
  if (v97 != 0) {
    if (*((_BYTE*)v74 + 72) == 1) {
      *((_BYTE*)v74 + 72) = 0;
      v97 = *((_QWORD*)a2 + 6);
    }
    *((_QWORD*)v74 + 7) = v97;
  }
  if (*v22 != 0) {
    *((_QWORD*)v74 + 6) = *v22;
  }
  if (*((_BYTE*)a2 + 64) == 0) {
    goto LABEL_181;
  }
  VTarget_778140(v4 + 6629, v81);
  v98 = *((_QWORD*)v74 + 6);
  if (v98 != 0) {
    *((_DWORD*)v4 + 13268) =
        v4[6634] & 0xFFFFF000 | *(_WORD*)(v98 + 16) & 0xFFF;
  }
  v99 = v4[15899];
  if (v99 != 0 && *((_BYTE*)v4 + 127184) == 1) {
    v100 = game_UnitItemList_Find_70f780(v99 + 828);
    *((_DWORD*)v4 + 13265) = v100;
    if ((v100 & 0x80000000) != 0) {
      v4[6633] = 0;
    }
    else if (*((_BYTE*)v4 + 53040) != 0) {
      v101 = v100;
      if (game_UnitPool_Get(v4 + 6630) != 0) {
        v102 = game_UnitPool_Get(v4 + 6630) + 8LL * v101;
        v103 = *(_WORD*)(v102 + 828);
        *((_BYTE*)v4 + 53066) = *(_BYTE*)(v102 + 830);
        *((_WORD*)v4 + 26532) = v103;
        *((_BYTE*)v4 + 53067) = *(_BYTE*)(v102 + 831);
        *((_DWORD*)v4 + 13267) = *(_DWORD*)(v102 + 832);
      }
    }
  }
  *((_BYTE*)v4 + 53080) = 1;
  (*(void (**)(unsigned int*))(v4[6629] + 24))((unsigned int*)v4 + 13258);
  memcpy((char*)v4 + 90132, (char*)v4 + 53092, 12292);
  v104 = v4[8175];
  *((_DWORD*)v4 + 25614) = *((_DWORD*)v4 + 16354);
  GameRoutine_845d60(v4 + 12803, v104, 0);
  v105 = *((_DWORD*)v4 + 13268);
  *((_DWORD*)v4 + 25616) = *((_DWORD*)v4 + 16356);
  v106 = v105 & 0xFFF;
  v107 = *((_BYTE*)a2 + 4);
  v108 = *((_BYTE*)a2 + 5);
  if ((_DWORD)v106 != 0) {
    v74 = (unsigned int*)(v4 + 15889);
    v109 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v106);
    if (v109 == 0) {
      goto LABEL_176;
    }
    v110 = *(unsigned __int8*)(v109 + 105);
  }
  else {
    v113 = *((unsigned __int16*)v4 + 26532);
    if (*((_WORD*)v4 + 26532) == 0) {
      v113 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v74 = (unsigned int*)(v4 + 15889);
    v114 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v113);
    v115 = *(_QWORD*)(v114 + 192);
    if (v115 == 0) {
      goto LABEL_176;
    }
    if (*(unsigned __int8*)(v114 + 72) > 7u) {
      goto LABEL_176;
    }
    v110 = *(unsigned __int8*)(v115 + 105);
    if (*(_BYTE*)(v115 + 105) == 0 || *(_BYTE*)(v115 + 104) == 2) {
      goto LABEL_176;
    }
  }
  if (v110 == 3) {
    v111 = VTarget_779940(v4 + 6629, *((_QWORD*)v74 + 10));
    if ((v111 & 0x80000000) != 0) {
      goto LABEL_181;
    }
    v112 = (__int64)v4 + 12 * v111 + 90132;
    v107 = *(_BYTE*)(v112 + 1);
    v108 = *(_BYTE*)(v112 + 2);
  }
LABEL_176:
  LOBYTE(i) = 0;
  LODWORD(v467) = 0;
  BYTE5(i) = 0;
  BYTE1(i) = v107;
  BYTE2(i) = v108;
  v470 = GameData_1ff31b8;
  p_i = v4;
  v473 = (__int64*)&v470;
  HIWORD(i) = -1;
  *(_WORD*)((char*)&i + 3) = 9;
  ITarget_775580(v4 + 6629, &i, &v470);
  if (v473 == (__int64*)&v470) {
    v116 = 32;
  }
  else {
    if (v473 == nullptr) {
      goto LABEL_181;
    }
    v116 = 40;
  }
  (*(void (**)(__int64))(*v473 + v116))((__int64)v473);
LABEL_181:
  v117 = GameData_21cd108;
  if (GameData_21cd108 != 0 &&
      (*(_BYTE*)(GameData_21cd108 + 12673) & 0x40) != 0) {
    v125 = 0;
    v127 = 0;
    v124 = 0;
    goto LABEL_207;
  }
  v118 = a2[17];
  if ((v118 & 1) == 0) {
    if (*((_BYTE*)v74 + 72) != 1) {
      if ((v118 & 0x22) == 0) {
        v124 = 1;
        v127 = 1;
        v125 = (a2[17] & 4) == 0;
        goto LABEL_206;
      }
    LABEL_203:
      v124 = 0;
      v127 = 0;
      v125 = 1;
      goto LABEL_206;
    }
    v119 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * *((unsigned __int16*)v74 + 32));
    if (v119 != 0) {
      v120 = *(unsigned __int8*)(v119 + 72);
      v121 = *(unsigned __int8*)(v119 + 73);
      if (v120 <= 7 && v121 == 1) {
        goto LABEL_203;
      }
      if (v120 <= 7 && v121 == 7) {
        v127 = 0;
        v125 = 0;
        v124 = 1;
      }
      else {
        v124 = 0;
        v125 = 0;
        v126 = ((1LL << v121) & 0x7DC) == 0 || v120 >= 8;
        v127 = !v126;
      }
    LABEL_206:
      if (GameData_21cd108 == 0) {
        goto LABEL_223;
      }
    LABEL_207:
      if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
        v128 = game_UnitPool_Get(GameData_21cd108 + 8);
        v117 = *GameData_212cfd0[0];
        if (v128 != 0) {
          if (*(_BYTE*)(v117 + 20) == 0) {
            goto LABEL_213;
          }
          v129 = Mind_746340();
          v117 = *GameData_212cfd0[0];
        }
        else {
          v129 = 1;
        }
        v125 &= v129;
        if (v117 == 0) {
          goto LABEL_223;
        }
      }
    LABEL_213:
      if (*(_BYTE*)(v117 + 8) != 0) {
        v130 = game_UnitPool_Get(v117 + 8);
        v117 = *GameData_212cfd0[0];
        if (v130 == 0) {
          v131 = 1;
        LABEL_218:
          v127 &= v131;
          if (v117 == 0) {
            goto LABEL_223;
          }
          goto LABEL_219;
        }
        if (*(_BYTE*)(v117 + 20) != 0) {
          v131 = Mind_746340();
          v117 = *GameData_212cfd0[0];
          goto LABEL_218;
        }
      }
    LABEL_219:
      v133 = *(unsigned __int8*)(v117 + 8);
      v132 = v117 + 8;
      if (v133 != 0 && game_UnitPool_Get(v132) != 0 &&
          *(_BYTE*)(GameData_21cd108 + 20) != 0) {
        v134 = Mind_746340();
        goto LABEL_224;
      }
    LABEL_223:
      v134 = 1;
    LABEL_224:
      v459 = v4;
      v135 = v4[15899];
      if (v135 == 0) {
        v145 = (unsigned int*)(v4 + 15889);
        v146 = 0;
        goto LABEL_328;
      }
      v136 = *((char*)a2 + 4);
      v137 = *((char*)a2 + 5);
      v138 = a2[5];
      if (v125 != 0) {
        v139 = a2[4];
        v140 = v4[15899];
        if (*(_DWORD*)v4 == 1) {
          v141 = 34934786;
        }
        else {
          v141 = 1380354;
        }
        if ((a2[17] & 0x20) != 0) {
          v142 = 33886210;
        }
        else {
          v142 = v141;
        }
        LODWORD(v470) = v142 | v138;
        IDeploy_748f80(v4 + 1, v140, v136, v137, v139, &v470);
        v143 = v124 & v134;
        if (v127 == 0) {
        LABEL_233:
          if (v143 == 0) {
            goto LABEL_235;
          }
          goto LABEL_234;
        }
      }
      else {
        v143 = v124 & v134;
        if (v127 == 0) {
          goto LABEL_233;
        }
      }
      v149 = a2[4];
      LODWORD(v470) = v138 | 0x20251002;
      IDeploy_748f80(v4 + 1658, v135, v136, v137, v149, &v470);
      if (v143 != 0) {
      LABEL_234:
        v144 = a2[4];
        LODWORD(v470) = v138 | 0x40251002;
        IDeploy_748f80(v4 + 3315, v135, v136, v137, v144, &v470);
      }
    LABEL_235:
      v145 = (unsigned int*)(v4 + 15889);
      v146 = v4[15899];
      if (v146 == 0) {
        goto LABEL_328;
      }
      v147 = v4[15895];
      if (v147 == 0 || *(unsigned __int8*)(v147 + 278) <= 1u &&
                           *(unsigned __int8*)(v147 + 279) > 0x62u) {
        v148 = false;
        goto LABEL_276;
      }
      v150 = *((char*)a2 + 4);
      v449 = *((char*)a2 + 5);
      v151 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                        8LL * (*(_WORD*)(v147 + 16) & 0xFFF));
      v152 = *(unsigned __int8*)(v151 + 279);
      v456 = *(unsigned __int8*)(v151 + 278);
      if ((*(_WORD*)(v147 + 16) & 0xFFF) != 0) {
        v153 = game_UnitSkillList_GetRangeAddImpl(
            v146 + 1744, *(_QWORD*)(v151 + 24) + 224LL);
        v147 = v4[15895];
        if (v147 == 0) {
          goto LABEL_275;
        }
        v152 += v153;
      }
      v452 = *(_DWORD*)(v146 + 592);
      if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v147 + 104)) &
           1) != 0) {
        v154 = *(unsigned __int8*)(v147 + 106);
        if (*(_BYTE*)(v147 + 106) == 0 || v154 == 6) {
          v155 = *(_QWORD*)(v147 + 576);
          if (v155 != 0) {
            goto LABEL_254;
          }
        }
        else if (v154 == 1) {
          v155 = *(_QWORD*)(v147 + 576);
          if (v155 == 0) {
            goto LABEL_257;
          }
        LABEL_254:
          if (*(unsigned __int8*)(v155 + 72) <= 7u &&
              *(_BYTE*)(v155 + 73) == 1) {
            goto LABEL_257;
          }
        }
      }
      if ((unsigned int)*(unsigned __int8*)(v147 + 250) - 7 < 2) {
        goto LABEL_259;
      }
    LABEL_257:
      v156 = (unsigned __int8)GameRoutine_6fcce0();
      if (v156 > 1) {
        if (v156 == 2) {
          v157 = 1657;
        }
        else {
          v157 = 3314;
        }
        goto LABEL_263;
      }
      if (v156 != 0) {
      LABEL_259:
        v157 = 0;
      LABEL_263:
        v158 = v150 - v152;
        v159 = *GameData_212ce98[0];
        if (v150 - v152 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
          v158 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        v160 = *(unsigned __int8*)(v159 + 29);
        v161 = *(unsigned __int8*)(v159 + 31);
        v444 = v158;
        if (v449 - v152 <= v160) {
          v162 = v160;
        }
        else {
          v162 = v449 - v152;
        }
        if (v452 + v152 + v150 >=
            *(unsigned __int8*)(*GameData_212ce98[0] + 30)) {
          v163 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
        }
        else {
          v163 = v452 + v152 + v150;
        }
        if (v452 + v152 + v449 < v161) {
          v161 = v452 + v152 + v449;
        }
        v440 = v161;
        if (v162 <= v161 && v158 <= v163) {
          v448 = (__int64)&v4[v157 + 1610];
          do {
            v420 = v444 - v150;
            v421 = v444;
            if (v162 - v449 >= 0) {
              v422 = v162 - v449;
            }
            else {
              v422 = v449 - v162;
            }
            do {
              if ((unsigned int)(v452 * v452) < 2) {
                v430 = v421 - v150;
                if ((int)(v421 - v150) < 0) {
                  v430 = v150 - v421;
                }
                v424 = v430 + v422;
              }
              else if (v452 < 1) {
                v424 = 10000;
              }
              else {
                v423 = v449;
                v424 = 10000;
                do {
                  v425 = v162 - v423;
                  v426 = v420;
                  v427 = v150;
                  if (v162 - v423 < 0) {
                    v425 = v423 - v162;
                  }
                  do {
                    ++v427;
                    if (v426 >= 0) {
                      v428 = v426;
                    }
                    else {
                      v428 = -v426;
                    }
                    --v426;
                    v429 = v428 + v425;
                    if (v429 < v424) {
                      v424 = v429;
                    }
                  } while (v427 < v452 + v150);
                  ++v423;
                } while (v423 < v452 + v449);
              }
              v431 = v424 >= v456 && (int)v424 <= v152;
              if (v431 && (MapUtil_753570(v421, (unsigned int)v162) & 1) != 0) {
                *(_DWORD*)(v448 + 4LL * ((v162 + (v421 >> 5)) & 0x7FFFFFF)) |=
                    1 << v421;
              }
              ++v420;
              v5 = (int)v421++ < v163;
            } while (v5);
            v5 = v162++ < v440;
          } while (v5);
        }
      }
    LABEL_275:
      v145 = v443;
      v148 = *(_BYTE*)(*((_QWORD*)v443 + 6) + 104LL) == 2;
    LABEL_276:
      if (*((_BYTE*)v145 + 72) != 1 || v148) {
        goto LABEL_327;
      }
      v164 = *((char*)a2 + 4);
      v450 = *((char*)a2 + 5);
      v165 = *((unsigned __int16*)v443 + 32);
      v166 = GameData_21c99b8;
      if (*((_WORD*)v443 + 32) != 0) {
        v167 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v165);
        v168 = *(unsigned __int8**)(v167 + 192);
        v169 = v168 == nullptr || *(unsigned __int8*)(v167 + 72) > 7u;
        if (v169 || v168[105] == 0) {
          v168 = nullptr;
          v172 = (unsigned __int8*)(v167 + 92);
        }
        else {
          v170 = v168[104];
          v171 = v170 == 2;
          if (v170 == 2) {
            v168 = nullptr;
          }
          v172 = v168 + 278;
          if (v171) {
            v172 = (unsigned __int8*)(v167 + 92);
          }
        }
        v457 = *v172;
        if (v168 != nullptr) {
          v173 = v168 + 279;
        }
        else {
          v173 = (unsigned __int8*)(v167 + 93);
        }
        v174 = *v173;
        v175 = game_UnitSkillList_GetRangeAddImpl(v146 + 1744,
                                                  *(_QWORD*)(v167 + 24) + 8LL);
        if (*((_BYTE*)v443 + 72) != 1) {
          GameRoutine_8123d0(v175);
        }
        v165 = *((unsigned __int16*)v443 + 32);
        v176 = v175 + v174;
        v166 = *GameData_212c878[0];
      }
      else {
        v176 = 0;
        v457 = 0;
      }
      v177 = *(_QWORD*)(*(_QWORD*)(v166 + 64) + 8 * v165);
      if (v177 == 0) {
        goto LABEL_327;
      }
      v453 = *(_DWORD*)(v146 + 592);
      v178 = *(unsigned __int8*)(v177 + 72);
      v179 = *(unsigned __int8*)(v177 + 73);
      if (v178 <= 7 && v179 == 1) {
        v184 = 0;
        goto LABEL_312;
      }
      if (v178 <= 7 && v179 == 7) {
        v184 = 3314;
        goto LABEL_312;
      }
      v182 = (1LL << v179) & 0x7DC;
      if (v178 <= 7 && v182 != 0) {
        v184 = 1657;
      LABEL_312:
        v185 = *GameData_212ce98[0];
        if (v164 - v176 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
          v186 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        else {
          v186 = v164 - v176;
        }
        v187 = *(unsigned __int8*)(v185 + 29);
        v188 = *(unsigned __int8*)(v185 + 31);
        v445 = v186;
        if (v450 - v176 <= v187) {
          v189 = v187;
        }
        else {
          v189 = v450 - v176;
        }
        if (v453 + v176 + v164 >=
            *(unsigned __int8*)(*GameData_212ce98[0] + 30)) {
          v190 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
        }
        else {
          v190 = v453 + v176 + v164;
        }
        if (v453 + v176 + v450 < v188) {
          v188 = v453 + v176 + v450;
        }
        v441 = v188;
        if (v189 <= v188 && v186 <= v190) {
          v447 = (__int64)&v459[v184 + 1610];
          v439 = v186 - v164;
          do {
            v408 = v439;
            v409 = v445;
            if (v189 - v450 >= 0) {
              v410 = v189 - v450;
            }
            else {
              v410 = v450 - v189;
            }
            do {
              if ((unsigned int)(v453 * v453) < 2) {
                v418 = v409 - v164;
                if ((int)(v409 - v164) < 0) {
                  v418 = v164 - v409;
                }
                v412 = v418 + v410;
              }
              else if (v453 < 1) {
                v412 = 10000;
              }
              else {
                v411 = v450;
                v412 = 10000;
                do {
                  v413 = v189 - v411;
                  v414 = v408;
                  v415 = v164;
                  if (v189 - v411 < 0) {
                    v413 = v411 - v189;
                  }
                  do {
                    ++v415;
                    if (v414 >= 0) {
                      v416 = v414;
                    }
                    else {
                      v416 = -v414;
                    }
                    --v414;
                    v417 = v416 + v413;
                    if (v417 < v412) {
                      v412 = v417;
                    }
                  } while (v415 < v453 + v164);
                  ++v411;
                } while (v411 < v453 + v450);
              }
              v419 = v412 >= v457 && v412 <= v176;
              if (v419 && (MapUtil_753570(v409, (unsigned int)v189) & 1) != 0) {
                *(_DWORD*)(v447 + 4LL * ((v189 + (v409 >> 5)) & 0x7FFFFFF)) |=
                    1 << v409;
              }
              ++v408;
              v5 = (int)v409++ < v190;
            } while (v5);
            v5 = v189++ < v441;
          } while (v5);
        }
      }
    LABEL_327:
      v145 = v443;
      v4 = v459;
      v146 = *((_QWORD*)v443 + 10);
    LABEL_328:
      v192 = *((_QWORD*)v145 + 7);
      if (v192 == 0) {
        goto LABEL_340;
      }
      i = (unsigned __int64)(v4 + 1);
      if (v146 != 0) {
        v470 = GameData_1ff3238;
        p_i = &i;
        v473 = (__int64*)&v470;
        (*(void (**)(__int64, unsigned __int64, __int64 (***)()))(
            *(_QWORD*)v192 + 760LL))(v192, v146, &v470);
      }
      else {
        if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v192 + 40LL))(v192) !=
                6 ||
            ((*(__int64 (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192) & 1) ==
                0) {
          goto LABEL_339;
        }
        v470 = GameData_1ff32b8;
        p_i = &i;
        v473 = (__int64*)&v470;
        (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v192 + 752LL))(v192,
                                                                         &v470);
      }
      if (v473 == (__int64*)&v470) {
        v193 = 32;
        goto LABEL_338;
      }
      if (v473 != nullptr) {
        v193 = 40;
      LABEL_338:
        (*(void (**)(__int64))(*v473 + v193))((__int64)v473);
      }
    LABEL_339:
      v146 = *((_QWORD*)v145 + 10);
    LABEL_340:
      if (v146 == 0) {
        goto LABEL_366;
      }
      v474 = -1;
      if (*((_BYTE*)v145 + 72) == 1) {
        v194 = game_UnitItemList_Find_70f780(v146 + 828);
        v195 = *((unsigned __int8*)v145 + 72);
        v474 = v194;
        if (v195 == 1) {
          v196 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                            8LL * *((unsigned __int16*)v145 + 32));
          if (*(_BYTE*)(v196 + 72) == 14) {
            v197 = *(unsigned __int8*)(v196 + 73);
            v5 = v197 > 0x10;
            v198 = (1 << v197) & 0x18034;
            if (!v5 && v198 != 0) {
              if ((UnitItem_6e91b0(v145 + 16, v146) & 1) != 0) {
                v200 = *(_DWORD*)(v146 + 592);
                if (v200 >= 1) {
                  for (j = 0; j != v200; ++j) {
                    for (k = 0; k != v200; ++k) {
                      v203 = *(_BYTE*)(v146 + 584);
                      v204 = *(_BYTE*)(v146 + 585);
                      LOBYTE(v470) = 0;
                      LODWORD(p_i) = 0;
                      BYTE5(v470) = 0;
                      HIWORD(v470) = -1;
                      *(_WORD*)((char*)&v470 + 3) = 9;
                      BYTE1(v470) = v203 + j;
                      BYTE2(v470) = v204 + k;
                      v205 = GameRoutine_8450e0_alt1(
                          v4 + 14352, (unsigned int)(char)(v203 + j),
                          (unsigned int)(char)(v204 + k));
                      GameRoutine_844950(v205, &v470);
                    }
                  }
                }
              }
              goto LABEL_365;
            }
          }
        }
      }
      v206 = *((_QWORD*)v145 + 6);
      if (v206 != 0 && *(_BYTE*)(v206 + 104) == 2) {
        GameRoutine_777820(&v470);
        v470 = game_map_MapDrawTarget_vtable;
        VTarget_778140(&v470, v146);
        v207 = *((char*)v145 + 196);
        v208 = *((char*)v145 + 197);
        v469 = &i;
        HIDWORD(p_i) = v207;
        v209 = GameData_1ff3338;
      }
      else {
        GameRoutine_777820(&v470);
        v470 = game_map_MapDrawTarget_vtable;
        VTarget_778140(&v470, v146);
        v210 = *((char*)v145 + 196);
        v208 = *((char*)v145 + 197);
        v469 = &i;
        HIDWORD(p_i) = v210;
        v209 = GameData_1ff33b8;
      }
      LODWORD(v472) = v208;
      i = (unsigned __int64)v209;
      v467 = (unsigned int*)v4;
      v468 = &v474;
      game_map_ITarget_EachSelectable(&v470, &i);
      if (v469 == &i) {
        v211 = 32;
        goto LABEL_363;
      }
      if (v469 != nullptr) {
        v211 = 40;
      LABEL_363:
        (*(void (**)(__int64))(*v469 + v211))((__int64)v469);
      }
      GameRoutine_777f60(&v470);
    LABEL_365:
      v145 = v443;
    LABEL_366:
      v212 = DeployData_f25050_alt1(v4);
      v213 = (__int64)&v4[1657 * v212 + 1];
      if (v212 == 4) {
        v213 = 0;
      }
      i = v213;
      if (v212 == 4) {
        goto LABEL_379;
      }
      v214 = v212;
      v470 = GameData_1ff3438;
      p_i = &i;
      v473 = (__int64*)&v470;
      game_map_DeployData_TargetEnumerate((__int64)v4, (__int64*)&v470, v212);
      if (v473 == (__int64*)&v470) {
        v215 = 32;
        goto LABEL_373;
      }
      if (v473 != nullptr) {
        v215 = 40;
      LABEL_373:
        (*(void (**)(__int64))(*v473 + v215))((__int64)v473);
      }
      v470 = GameData_1ff34b8;
      p_i = &i;
      v473 = (__int64*)&v470;
      game_map_DeployData_TargetEnumerateSubTarget((__int64)v4, (__int64*)&v470,
                                                   v214);
      if (v473 == (__int64*)&v470) {
        v216 = 32;
      }
      else {
        if (v473 == nullptr) {
          goto LABEL_379;
        }
        v216 = 40;
      }
      (*(void (**)(__int64))(*v473 + v216))((__int64)v473);
    LABEL_379:
      v217 = (__int64*)(v145 + 12);
      v218 = 0;
      v438 = (unsigned int*)(v4 + 1626);
      v442 = (unsigned int*)(v4 + 15900);
      v437 = (unsigned int*)(v4 + 1642);
      v436 = (unsigned int*)(v4 + 1610);
      v458 = (unsigned int*)(v4 + 2);
      while (2) {
        v220 = *(char**)(GameData_21cd120 + 248);
        v221 = *(char**)(GameData_21cd120 + 256);
        if (v220 == v221) {
        LABEL_380:
          v219 = 0;
          goto LABEL_381;
        }
        while (1) {
          v222 = *v220;
          v223 = v220[1];
          v224 = DeployData_f25050_alt1(v459);
          if (v224 == 4) {
            if ((_DWORD)v218 == 2 || (_DWORD)v218 == 1) {
              v225 = *(_DWORD*)(*(_QWORD*)&v458[3314 * v218] +
                                4LL * ((int)(v222 + 32 * v223) >> 5) + 2248);
              goto LABEL_396;
            }
            if ((_DWORD)v218 == 0) {
              v225 = *(_DWORD*)(*(_QWORD*)&v458[3314 * v218] +
                                4LL * ((int)(v222 + 32 * v223) >> 5) + 2120);
            LABEL_396:
              v226 = (v225 >> v222) & 1;
              goto LABEL_397;
            }
          }
          else if (v218 == v224) {
            v225 = v437[3314 * v218 + ((int)(v222 + 32 * v223) >> 5)] |
                   v438[3314 * v218 + ((int)(v222 + 32 * v223) >> 5)];
            goto LABEL_396;
          }
          v226 = 0;
        LABEL_397:
          v227 = GameData_21cd0e8;
          if (GameData_21cd0e8 == 0) {
            goto LABEL_419;
          }
          if (*(_BYTE*)(GameData_21cd0e8 + 32) != 0 &&
              (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <= 1 &&
              *(_BYTE*)(GameData_21cd108 + 20) == 4) {
            v228 = *(unsigned __int16*)(GameData_21cd108 + 44);
            if (*(_WORD*)(GameData_21cd108 + 44) == 0) {
              v228 = *(unsigned __int16*)game_g_empty_item_ptr;
            }
            if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                      8LL * v228) +
                           73LL) &
                 0xFE) == 8) {
              v229 = *(_QWORD*)(GameData_21cd120 + 88);
              if (v229 != 0) {
                v230 = *(_QWORD*)(GameData_21cd120 + 80);
                v231 = *(_QWORD*)(GameData_21cd120 + 88);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v229 + 16),
                                          1u, memory_order_relaxed);
                v232 = std___1___shared_weak_count_lock(v231);
                std___1___shared_weak_count___release_weak(v229);
                if (v232 != 0) {
                  if (v230 != 0) {
                    v233 = *(_BYTE*)(v230 + 32) ^ 1;
                  }
                  else {
                    v233 = 1;
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v232 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
                    if ((v233 & 1) == 0) {
                      goto LABEL_385;
                    }
                  }
                  else {
                    (*(void (**)(__int64))(*(_QWORD*)v232 + 16LL))(v232);
                    std___1___shared_weak_count___release_weak(v232);
                    if ((v233 & 1) == 0) {
                      goto LABEL_385;
                    }
                  }
                }
              }
            }
          }
          v227 = GameData_21cd0e8;
          if (GameData_21cd0e8 == 0 || *(_BYTE*)(GameData_21cd0e8 + 32) == 0 ||
              (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
          LABEL_419:
            v234 = (_BYTE*)*v217;
            if (*v217 == 0) {
              goto LABEL_422;
            }
          LABEL_420:
            v235 = (unsigned __int8)v234[104];
          LABEL_421:
            if (v235 == 9) {
              goto LABEL_385;
            }
            goto LABEL_422;
          }
          if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) == 0) {
            v246 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
            if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
              v246 = *(unsigned __int16*)game_g_empty_item_ptr;
            }
            v247 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v246);
            v248 = *(_QWORD*)(v247 + 192);
            v249 = *(unsigned __int8*)(v247 + 72);
            if (v248 == 0 || v249 > 7) {
              goto LABEL_424;
            }
            if (*(_BYTE*)(v248 + 105) == 0) {
              goto LABEL_424;
            }
            v235 = *(unsigned __int8*)(v248 + 104);
            if (v235 == 2) {
              goto LABEL_424;
            }
            goto LABEL_421;
          }
          v234 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                            8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
          if (v234 != nullptr) {
            goto LABEL_420;
          }
        LABEL_422:
          if (v227 == 0) {
            v236 = 1;
            goto LABEL_430;
          }
          v236 = *(_BYTE*)(v227 + 32);
          if (v236 == 0) {
            goto LABEL_430;
          }
        LABEL_424:
          if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
            v236 = 0;
          LABEL_430:
            v239 = (_BYTE*)*v217;
            if (*v217 == 0) {
              goto LABEL_432;
            }
            goto LABEL_431;
          }
          v237 = *(_DWORD*)(v227 + 48);
          v238 = v237 & 0xFFF;
          if ((v237 & 0xFFF) != 0) {
            v236 = 0;
            v239 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v238);
            if (v239 == nullptr) {
              goto LABEL_432;
            }
          }
          else {
            v242 = *(unsigned __int16*)(v227 + 40);
            if (*(_WORD*)(v227 + 40) == 0) {
              v242 = *(unsigned __int16*)game_g_empty_item_ptr;
            }
            v243 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v242);
            v239 = *(_BYTE**)(v243 + 192);
            v244 = *(unsigned __int8*)(v243 + 72);
            v245 = v239 == nullptr || v244 > 7;
            if (v245 || v239[105] == 0 || v239[104] == 2) {
              goto LABEL_448;
            }
            v236 = 0;
          }
        LABEL_431:
          if (v239[250] == 28) {
            goto LABEL_385;
          }
        LABEL_432:
          v240 = v217;
          if ((v236 & 1) != 0 || (v240 = v217, *(_BYTE*)(v227 + 32) == 0) ||
              (v240 = v217,
               (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] +
                                         4368LL) -
                              7) > 1)) {
            v241 = *v240;
            if (*v240 == 0) {
              goto LABEL_468;
            }
            goto LABEL_436;
          }
        LABEL_448:
          if ((*(_DWORD*)(v227 + 48) & 0xFFF) == 0) {
            break;
          }
          v241 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                            8LL * (*(_DWORD*)(v227 + 48) & 0xFFF));
          if (v241 == 0) {
            goto LABEL_468;
          }
        LABEL_436:
          if (*(_QWORD*)(v241 + 608) == 0 &&
              (unsigned int)*(unsigned __int8*)(v241 + 250) - 13 >= 4 &&
              (*(_BYTE*)(v241 + 105) != 3 || *(_BYTE*)(v241 + 279) == 0)) {
            goto LABEL_468;
          }
        LABEL_385:
          if (v226 != 0) {
            goto LABEL_471;
          }
        LABEL_386:
          v220 += 4;
          if (v220 == v221) {
            goto LABEL_380;
          }
        }
        v251 = *(unsigned __int16*)(v227 + 40);
        if (v251 == 0) {
          v251 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v252 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v251);
        v241 = *(_QWORD*)(v252 + 192);
        v253 = *(unsigned __int8*)(v252 + 72);
        v254 = v241 == 0 || v253 > 7;
        if (!v254 && *(_BYTE*)(v241 + 105) != 0 && *(_BYTE*)(v241 + 104) != 2) {
          goto LABEL_436;
        }
      LABEL_468:
        if (((v226 |
              (v436[3314 * v218 + ((int)(v222 + 32 * v223) >> 5)] >> v222)) &
             1) == 0) {
          goto LABEL_386;
        }
      LABEL_471:
        GameRoutine_fbb8a0(v222, v223, *((_QWORD*)v443 + 10));
        v219 = 1;
      LABEL_381:
        *((_BYTE*)v442 + v218++) = v219;
        if (v218 != 4) {
          continue;
        }
        break;
      }
      v255 = v459;
      if (*(_DWORD*)v459 != 1) {
        v260 = 0;
        v435 = DeployData_f25050_alt1(v459);
        v261 = v459 + 15901;
        while (1) {
          v451 = (__int64*)&v261[6 * v260];
          v451[1] = *v451;
          if (v260 > 1) {
            goto LABEL_485;
          }
          v262 = (__int64)v217;
          v263 = *GameData_212cff0[0];
          if (*GameData_212cff0[0] == 0) {
            goto LABEL_492;
          }
          v262 = (__int64)v217;
          if (*(_BYTE*)(v263 + 32) == 0) {
            goto LABEL_492;
          }
          v262 = (__int64)v217;
          if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
            goto LABEL_492;
          }
          v264 = *(_DWORD*)(v263 + 48) & 0xFFF;
          if ((_DWORD)v264 != 0) {
            break;
          }
        LABEL_495:
          if ((GameRoutine_f23ea0(v255) & 1) == 0) {
            v265 = *(char**)(GameData_21cd120 + 248);
            v454 = *(char**)(GameData_21cd120 + 256);
            while (v265 != v454) {
              v267 = *v265;
              v268 = v265[1];
              v269 = DeployData_f25050_alt1(v255);
              if (v269 == 4) {
                v270 = *(_QWORD*)&v458[3314 * v260] +
                       4 * ((__int64)(int)(v267 + 32 * v268) >> 5);
                if ((v260 & 1) != 0) {
                  v271 = *(_DWORD*)(v270 + 2248);
                }
                else {
                  v271 = *(_DWORD*)(v270 + 2120);
                }
                v272 = (v271 & (1 << v267)) != 0;
              }
              else if (v260 == v269) {
                v272 = ((v437[3314 * v260 + ((int)(v267 + 32 * v268) >> 5)] |
                         v438[3314 * v260 + ((int)(v267 + 32 * v268) >> 5)]) >>
                        v267) &
                       1;
              }
              else {
                v272 = 0;
              }
              v273 = GameData_21cd0e8;
              if (GameData_21cd0e8 == 0) {
                goto LABEL_531;
              }
              if (*(_BYTE*)(GameData_21cd0e8 + 32) != 0 &&
                  (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <=
                      1 &&
                  *(_BYTE*)(GameData_21cd108 + 20) == 4) {
                v274 = *(unsigned __int16*)(GameData_21cd108 + 44);
                if (*(_WORD*)(GameData_21cd108 + 44) == 0) {
                  v274 = *(unsigned __int16*)game_g_empty_item_ptr;
                }
                if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * v274) +
                               73LL) &
                     0xFE) == 8) {
                  v275 = *(_QWORD*)(GameData_21cd120 + 88);
                  if (v275 != 0) {
                    v276 = *(_QWORD*)(GameData_21cd120 + 80);
                    v277 = *(_QWORD*)(GameData_21cd120 + 88);
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v275 + 16), 1u,
                        memory_order_relaxed);
                    v278 = std___1___shared_weak_count_lock(v277);
                    std___1___shared_weak_count___release_weak(v275);
                    if (v278 != 0) {
                      if (v276 != 0) {
                        v279 = *(_BYTE*)(v276 + 32) ^ 1;
                      }
                      else {
                        v279 = 1;
                      }
                      if (atomic_fetch_add((atomic_ullong* volatile)(v278 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) != 0) {
                        if ((v279 & 1) == 0) {
                          goto LABEL_563;
                        }
                      }
                      else {
                        (*(void (**)(__int64))(*(_QWORD*)v278 + 16LL))(v278);
                        std___1___shared_weak_count___release_weak(v278);
                        if ((v279 & 1) == 0) {
                          goto LABEL_563;
                        }
                      }
                    }
                  }
                }
              }
              v273 = GameData_21cd0e8;
              if (GameData_21cd0e8 != 0 &&
                  *(_BYTE*)(GameData_21cd0e8 + 32) != 0 &&
                  (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) <=
                      1) {
                if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) == 0) {
                  v325 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
                  if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
                    v325 = *(unsigned __int16*)game_g_empty_item_ptr;
                  }
                  v326 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                    8LL * v325);
                  v327 = *(_QWORD*)(v326 + 192);
                  v328 = *(unsigned __int8*)(v326 + 72);
                  if (v327 == 0 || v328 > 7) {
                    goto LABEL_537;
                  }
                  if (*(_BYTE*)(v327 + 105) == 0) {
                    goto LABEL_537;
                  }
                  v281 = *(unsigned __int8*)(v327 + 104);
                  if (v281 == 2) {
                    goto LABEL_537;
                  }
                  goto LABEL_533;
                }
                v280 = *(
                    _QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
                if (v280 != 0) {
                  goto LABEL_532;
                }
              }
              else {
              LABEL_531:
                v280 = *v217;
                if (*v217 != 0) {
                LABEL_532:
                  v281 = *(unsigned __int8*)(v280 + 104);
                LABEL_533:
                  if (v281 == 9) {
                    goto LABEL_563;
                  }
                }
              }
              if (v273 == 0) {
                v282 = 1;
                goto LABEL_542;
              }
              v282 = *(_BYTE*)(v273 + 32);
              if (v282 == 0) {
                goto LABEL_542;
              }
              if ((unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) > 1) {
                v282 = 0;
              LABEL_542:
                v285 = (_BYTE*)*v217;
                if (*v217 != 0) {
                  goto LABEL_543;
                }
                goto LABEL_544;
              }
            LABEL_537:
              v283 = *(_DWORD*)(v273 + 48);
              v284 = v283 & 0xFFF;
              if ((v283 & 0xFFF) == 0) {
                v287 = *(unsigned __int16*)(v273 + 40);
                if (*(_WORD*)(v273 + 40) == 0) {
                  v287 = *(unsigned __int16*)game_g_empty_item_ptr;
                }
                v288 =
                    *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v287);
                v285 = *(_BYTE**)(v288 + 192);
                v289 = *(unsigned __int8*)(v288 + 72);
                v290 = v285 == nullptr || v289 > 7;
                if (v290 || v285[105] == 0 || v285[104] == 2) {
                  goto LABEL_556;
                }
                v282 = 0;
              LABEL_543:
                if (v285[250] == 28) {
                  goto LABEL_563;
                }
                goto LABEL_544;
              }
              v282 = 0;
              v285 =
                  *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v284);
              if (v285 != nullptr) {
                goto LABEL_543;
              }
            LABEL_544:
              v286 = v217;
              if ((v282 & 1) != 0) {
                goto LABEL_558;
              }
              v286 = v217;
              if (*(_BYTE*)(v273 + 32) == 0) {
                goto LABEL_558;
              }
              v286 = v217;
              if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] +
                                            4368LL) -
                                 7) > 1) {
                goto LABEL_558;
              }
              v283 = *(_DWORD*)(v273 + 48);
            LABEL_556:
              v291 = v283 & 0xFFF;
              if (v291 == 0) {
                v293 = *(unsigned __int16*)(v273 + 40);
                if (v293 == 0) {
                  v293 = *(unsigned __int16*)game_g_empty_item_ptr;
                }
                v294 =
                    *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v293);
                v292 = *(_QWORD*)(v294 + 192);
                v295 = *(unsigned __int8*)(v294 + 72);
                v296 = v292 == 0 || v295 > 7;
                if (v296 || *(_BYTE*)(v292 + 105) == 0 ||
                    *(_BYTE*)(v292 + 104) == 2) {
                  goto LABEL_573;
                }
                goto LABEL_559;
              }
              v286 = (__int64*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * v291);
            LABEL_558:
              v292 = *v286;
              if (*v286 != 0) {
              LABEL_559:
                if (*(_QWORD*)(v292 + 608) != 0 ||
                    (unsigned int)*(unsigned __int8*)(v292 + 250) - 13 < 4 ||
                    *(_BYTE*)(v292 + 105) == 3 && *(_BYTE*)(v292 + 279) != 0) {
                LABEL_563:
                  if (v272 != 0) {
                    goto LABEL_574;
                  }
                  goto LABEL_500;
                }
              }
            LABEL_573:
              if (((v272 |
                    (v436[3314 * v260 + ((int)(v267 + 32 * v268) >> 5)] >>
                     v267)) &
                   1) != 0) {
              LABEL_574:
                v297 = GameRoutine_fbb8a0(v267, v268, *((_QWORD*)v443 + 10));
                if ((v260 & 1) != 0) {
                  if (v298 == 1) {
                    v299 = *((_QWORD*)v443 + 1);
                    if (v299 != 0 && *((_QWORD*)v443 + 3) != 0) {
                      v300 = v299 - 1;
                      v301 = (unsigned __int16)(v267 | ((_WORD)v268 << 8));
                      v302 = (unsigned __int16)(v267 | ((_WORD)v268 << 8));
                      if ((v299 & (v299 - 1)) != 0) {
                        v303 = (unsigned __int16)(v267 | ((_WORD)v268 << 8));
                        if (v299 <= v302) {
                          v303 = v301 % (unsigned int)v299;
                        }
                      }
                      else {
                        v303 = ((_DWORD)v299 - 1) & (unsigned int)v302;
                      }
                      v330 = *(__int64****)(*(_QWORD*)v443 + 8 * v303);
                      if (v330 != nullptr) {
                        v331 = *v330;
                        if (v331 != nullptr) {
                          if ((v299 & v300) == 0) {
                            while (1) {
                              v333 = v331[1];
                              if (v333 == (__int64*)v302) {
                                if (*((unsigned __int16*)v331 + 8) == v301) {
                                  goto LABEL_582;
                                }
                              }
                              else if (((unsigned __int64)v333 & v300) !=
                                       v303) {
                                goto LABEL_500;
                              }
                              v331 = (__int64**)*v331;
                              if (v331 == nullptr) {
                                goto LABEL_500;
                              }
                            }
                          }
                          do {
                            v332 = (unsigned __int64)v331[1];
                            if (v332 == v302) {
                              if (*((unsigned __int16*)v331 + 8) == v301) {
                                goto LABEL_582;
                              }
                            }
                            else {
                              if (v332 >= v299) {
                                v332 %= v299;
                              }
                              if (v332 != v303) {
                                break;
                              }
                            }
                            v331 = (__int64**)*v331;
                          } while (v331 != nullptr);
                        }
                      }
                    }
                  }
                }
                else if ((v298 & 0xFFFFFFFE) == 2) {
                LABEL_582:
                  v304 = *(_DWORD*)v265;
                  v306 = *v451;
                  v305 = v451[1];
                  v307 = *(_DWORD*)v265 >> 8;
                  v308 = (unsigned __int8*)*v451;
                  if (*v451 != v305) {
                    v308 = (unsigned __int8*)*v451;
                    while (*v308 != (unsigned __int8)v304 ||
                           v308[1] != (unsigned __int8)v307 ||
                           *((_QWORD*)v308 + 1) != v297 ||
                           (v308[20] & 1) != 0 ||
                           v260 != *((_DWORD*)v308 + 6)) {
                      v308 += 32;
                      if (v308 == (unsigned __int8*)v305) {
                        goto LABEL_591;
                      }
                    }
                  }
                  if (v308 == (unsigned __int8*)v305) {
                  LABEL_591:
                    v309 = v451[2];
                    if (v305 < v309) {
                      *(_BYTE*)v305 = v304;
                      *(_BYTE*)(v305 + 1) = v307;
                      v266 = v305 + 32;
                      *(_QWORD*)(v305 + 8) = v297;
                      *(_BYTE*)(v305 + 16) = 0;
                      *(_BYTE*)(v305 + 20) = 0;
                      *(_DWORD*)(v305 + 24) = v260;
                      *(_BYTE*)(v305 + 2) = BYTE2(v304);
                      *(_BYTE*)(v305 + 3) = HIBYTE(v304);
                    }
                    else {
                      v310 = v305 - v306;
                      v311 = (__int64)(v305 - v306) >> 5;
                      v312 = v311 + 1;
                      if ((unsigned __int64)(v311 + 1) >> 59 != 0) {
                      LABEL_828:
                        GameRoutine_f29120();
                      }
                      v313 = v309 - v306;
                      if (v313 >> 4 > v312) {
                        v312 = v313 >> 4;
                      }
                      v126 = (unsigned __int64)v313 >= 0x7FFFFFFFFFFFFFE0LL;
                      v314 = 0x7FFFFFFFFFFFFFFLL;
                      if (!v126) {
                        v314 = v312;
                      }
                      if (v314 >> 59 != 0) {
                      LABEL_827:
                        GameRoutine_60a210(v297);
                      }
                      v315 = v297;
                      v434 = 32 * v314;
                      v316 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v314, 16,
                          0);
                      v317 = v316 + v310;
                      *(_BYTE*)(v317 + 2) = BYTE2(v304);
                      *(_BYTE*)v317 = v304;
                      *(_BYTE*)(v317 + 1) = v307;
                      *(_QWORD*)(v317 + 8) = v315;
                      *(_BYTE*)(v317 + 16) = 0;
                      *(_BYTE*)(v317 + 20) = 0;
                      *(_DWORD*)(v317 + 24) = v260;
                      *(_BYTE*)(v317 + 3) = HIBYTE(v304);
                      v318 = v316 + v310 - 32 * v311;
                      if (v306 != v305) {
                        v319 = v306;
                        v320 = v316 + v310 - 32 * v311;
                        do {
                          *(_BYTE*)v320 = *(_BYTE*)v319;
                          *(_BYTE*)(v320 + 1) = *(_BYTE*)(v319 + 1);
                          *(_BYTE*)(v320 + 2) = *(_BYTE*)(v319 + 2);
                          *(_BYTE*)(v320 + 3) = *(_BYTE*)(v319 + 3);
                          v321 = *(_QWORD*)(v319 + 8);
                          v322 = *(_QWORD*)(v319 + 16);
                          v323 = *(_DWORD*)(v319 + 24);
                          v319 += 32;
                          *(_DWORD*)(v320 + 24) = v323;
                          *(_QWORD*)(v320 + 8) = v321;
                          *(_QWORD*)(v320 + 16) = v322;
                          v320 += 32;
                        } while (v319 != v305);
                      }
                      v266 = v317 + 32;
                      v255 = v459;
                      *v451 = v318;
                      v451[1] = v317 + 32;
                      v451[2] = v316 + v434;
                      if (v306 != 0) {
                        v324 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v324 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v324);
                      }
                    }
                    v451[1] = v266;
                  }
                }
              }
            LABEL_500:
              v265 += 4;
            }
          }
          v261 = v459 + 15901;
          if (v260 == v435) {
            v472 = 0;
            v470 = nullptr;
            p_i = nullptr;
            if (GameData_21cd0e8 != 0 &&
                *(_BYTE*)(GameData_21cd0e8 + 32) != 0) {
              v334 = *(_DWORD*)(GameData_21cd120 + 4368);
              if ((unsigned int)(v334 - 7) <= 1 && v334 == 7 &&
                  (*(_BYTE*)(*(_QWORD*)(GameData_21cd130 + 48) + 240LL) & 1) !=
                      0) {
                v335 = *(unsigned int*)(GameData_21cd0e8 + 37044);
                if ((int)v335 >= 1) {
                  v336 = GameData_21cd0e8 + 24756;
                  do {
                    if ((MapUtil_753570((unsigned int)*(char*)(v336 + 1),
                                        (unsigned int)*(char*)(v336 + 2)) &
                         1) != 0) {
                      if (*(_BYTE*)(v336 + 5) != 0 &&
                              (v337 = game_UnitPool_Get(v336 + 5)) != 0 &&
                              *(_QWORD*)(v337 + 392) != 0 ||
                          (*(__int16*)(v336 + 6) & 0x8000000000000000LL) == 0 &&
                              (v338 = *(
                                   _QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) +
                                            8LL)) != 0 &&
                              ((v339 = v338 + 144LL * *(__int16*)(v336 + 6),
                                ((*(__int64 (**)(__int64))(*(_QWORD*)v339 +
                                                           272LL))(v339) &
                                 1) != 0) ||
                               ((*(__int64 (**)(__int64))(*(_QWORD*)v339 +
                                                          288LL))(v339) &
                                1) != 0)) {
                        GameRoutine_f28ee0(&v470, v336);
                      }
                    }
                    --v335;
                    v336 += 12;
                  } while (v335 != 0);
                  v341 = v470;
                  v340 = p_i;
                  v446 = p_i;
                  if (v470 != (__int64 (**)())p_i) {
                    do {
                      v297 = GameRoutine_fbb8a0(
                          (unsigned int)*((char*)v341 + 1),
                          (unsigned int)*((char*)v341 + 2), 0);
                      v343 = *((unsigned __int8*)v341 + 1);
                      v344 = *((unsigned __int8*)v341 + 2);
                      v345 = *v451;
                      v346 = v451[1];
                      v347 = (unsigned __int8*)*v451;
                      if (*v451 != v346) {
                        v347 = (unsigned __int8*)*v451;
                        while (1) {
                          v348 = *v347 == v343 && v347[1] == v344;
                          if (v348 && *((_QWORD*)v347 + 1) == v297 &&
                              (v347[20] & 1) == 0 &&
                              *((_DWORD*)v347 + 6) == v435) {
                            break;
                          }
                          v347 += 32;
                          if (v347 == (unsigned __int8*)v346) {
                            goto LABEL_668;
                          }
                        }
                      }
                      if (v347 == (unsigned __int8*)v346) {
                      LABEL_668:
                        v349 = v451[2];
                        if (v346 < v349) {
                          *(_BYTE*)v346 = v343;
                          *(_BYTE*)(v346 + 1) = v344;
                          v342 = v346 + 32;
                          *(_WORD*)(v346 + 2) = 0;
                          *(_QWORD*)(v346 + 8) = v297;
                          *(_DWORD*)(v346 + 16) = 0;
                          *(_BYTE*)(v346 + 20) = 0;
                          *(_DWORD*)(v346 + 24) = v435;
                        }
                        else {
                          v350 = v346 - v345;
                          v351 = (__int64)(v346 - v345) >> 5;
                          v352 = v351 + 1;
                          if ((unsigned __int64)(v351 + 1) >> 59 != 0) {
                            goto LABEL_828;
                          }
                          v353 = v349 - v345;
                          if (v353 >> 4 > v352) {
                            v352 = v353 >> 4;
                          }
                          v126 = (unsigned __int64)v353 >= 0x7FFFFFFFFFFFFFE0LL;
                          v354 = 0x7FFFFFFFFFFFFFFLL;
                          if (!v126) {
                            v354 = v352;
                          }
                          if (v354 >> 59 != 0) {
                            goto LABEL_827;
                          }
                          v355 = v297;
                          v455 = 32 * v354;
                          v356 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v354,
                              16, 0);
                          v357 = v356 + v350;
                          v358 = v356 + v350 - 32 * v351;
                          *(_BYTE*)v357 = v343;
                          *(_BYTE*)(v357 + 1) = v344;
                          *(_WORD*)(v357 + 2) = 0;
                          *(_QWORD*)(v357 + 8) = v355;
                          *(_DWORD*)(v357 + 16) = 0;
                          *(_BYTE*)(v357 + 20) = 0;
                          *(_DWORD*)(v357 + 24) = v435;
                          if (v345 != v346) {
                            v359 = v345;
                            v360 = v356 + v350 - 32 * v351;
                            do {
                              *(_BYTE*)v360 = *(_BYTE*)v359;
                              *(_BYTE*)(v360 + 1) = *(_BYTE*)(v359 + 1);
                              *(_BYTE*)(v360 + 2) = *(_BYTE*)(v359 + 2);
                              *(_BYTE*)(v360 + 3) = *(_BYTE*)(v359 + 3);
                              v361 = *(_QWORD*)(v359 + 8);
                              v362 = *(_QWORD*)(v359 + 16);
                              v363 = *(_DWORD*)(v359 + 24);
                              v359 += 32;
                              *(_DWORD*)(v360 + 24) = v363;
                              *(_QWORD*)(v360 + 8) = v361;
                              *(_QWORD*)(v360 + 16) = v362;
                              v360 += 32;
                            } while (v359 != v346);
                          }
                          v342 = v357 + 32;
                          v340 = v446;
                          v255 = v459;
                          *v451 = v358;
                          v451[1] = v357 + 32;
                          v451[2] = v356 + v455;
                          if (v345 != 0) {
                            v364 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v364 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v364);
                          }
                        }
                        v451[1] = v342;
                      }
                      v341 = (__int64 (**)())((char*)v341 + 12);
                    } while (v341 != (__int64 (**)())v340);
                    v341 = v470;
                  }
                  v261 = v459 + 15901;
                  if (v341 != nullptr) {
                    p_i = (unsigned __int64*)v341;
                    v365 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v365 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v365);
                  }
                }
              }
            }
          }
        LABEL_485:
          if (++v260 == 4) {
            goto LABEL_473;
          }
        }
        v262 = *(_QWORD*)(GameData_21c99b0 + 64) + 8 * v264;
      LABEL_492:
        if (*(_QWORD*)v262 != 0 && *(_BYTE*)(*(_QWORD*)v262 + 104LL) == 2 &&
            (v443[18] & 1) == 0) {
          goto LABEL_485;
        }
        goto LABEL_495;
      }
    LABEL_473:
      if (GameData_21cd0e8 == 0 ||
          (v256 = *(unsigned __int8*)(GameData_21cd0e8 + 32),
           *(_BYTE*)(GameData_21cd0e8 + 32) == 0) ||
          (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) >= 2) {
        v256 = *((unsigned __int8*)v443 + 256);
      }
      if ((v256 | 4) == 0x1E) {
        if (GameData_21cd0e8 == 0 ||
            (v257 = *(_BYTE*)(GameData_21cd0e8 + 32)) == 0 ||
            (unsigned int)(*(_DWORD*)(GameData_21cd120 + 4368) - 7) >= 2) {
          v257 = *((_BYTE*)v443 + 256);
        }
        v258 = ((unsigned __int8)(v257 - 2) >> 1) | ((v257 - 2) << 7);
        v259 = v258 > 0xEu ? 4 : GameData_1b99930[v258];
        v366 = *(char**)(GameData_21cd120 + 248);
        v367 = *(char**)(GameData_21cd120 + 256);
        if (v366 != v367) {
          v368 = 0;
          v369 = 0;
          v370 = nullptr;
          while (1) {
            v371 = *v366;
            v372 = v366[1];
            v297 = X8CALL_X0(__int64, DeployData_f256b0_alt1(
                                          (void*)((__int64)&v470),
                                          (__int64)v459, v371, v372, v259));
            if (BYTE4(v470) == 1) {
              v373 = v371;
              if (v368 < v369) {
                *(_BYTE*)v368 = v371;
                *(_BYTE*)(v368 + 1) = v372;
                *(_WORD*)(v368 + 2) = 0;
                v368 += 4LL;
              }
              else {
                v374 = v259;
                v375 = v368 - (_QWORD)v370;
                v376 = v369;
                v377 = (__int64)(v368 - (_QWORD)v370) >> 2;
                v378 = v377 + 1;
                if ((unsigned __int64)(v377 + 1) >> 62 != 0) {
                  GameRoutine_74e1f0(v297);
                }
                v379 = v376 - (_QWORD)v370;
                v380 = (__int64)(v376 - (_QWORD)v370) >> 1;
                if (v380 > v378) {
                  v378 = v380;
                }
                if (v379 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v381 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v381 = v378;
                }
                if (v381 >> 62 != 0) {
                  goto LABEL_827;
                }
                v382 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v381, 16, 0);
                v383 = v382 + v375;
                *(_BYTE*)(v383 + 1) = v372;
                v384 = v382 + v375 - 4 * v377;
                *(_BYTE*)v383 = v373;
                *(_WORD*)(v383 + 2) = 0;
                if (v370 != (_BYTE*)v368) {
                  v385 = v370;
                  v386 = (_BYTE*)(v382 + v375 - 4 * v377);
                  do {
                    *v386 = *v385;
                    v386[1] = v385[1];
                    v386[2] = v385[2];
                    v387 = v385[3];
                    v385 += 4;
                    v386[3] = v387;
                    v386 += 4;
                  } while (v385 != (_BYTE*)v368);
                }
                v369 = v382 + 4 * v381;
                v368 = v383 + 4;
                v259 = v374;
                if (v370 != nullptr) {
                  v388 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v388 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v388);
                }
                v370 = (_BYTE*)v384;
              }
            }
            v366 += 4;
            if (v366 == v367) {
              goto LABEL_710;
            }
          }
        }
      }
      v370 = nullptr;
      v368 = 0;
    LABEL_710:
      GameRoutine_74e220(v459 + 15926, v370, v368,
                         (__int64)(v368 - (_QWORD)v370) >> 2);
      if (v370 != nullptr) {
        v389 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v389 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v389);
      }
      v390 = v433;
      *((_QWORD*)v443 + 41) = *((_QWORD*)v443 + 40);
      v391 = *((_QWORD*)v443 + 6);
      if (v391 == 0 || *(_BYTE*)(v391 + 250) != 28) {
        goto LABEL_722;
      }
      v392 = *((_QWORD*)v443 + 10);
      if (v392 != 0) {
        v393 = (unsigned int)*((char*)v443 + 196);
        v394 = (unsigned int)*((char*)v443 + 197);
        LODWORD(i) = *(_WORD*)(v391 + 16) & 0xFFF;
        v470 = GameData_1ff3538;
        p_i = v459;
        v473 = (__int64*)&v470;
        GameRoutine_757f60(v392, &i, v393, v394, &v470);
        if (v473 == (__int64*)&v470) {
          v395 = 32;
        LABEL_721:
          (*(void (**)(__int64))(*v473 + v395))((__int64)v473);
        }
        else if (v473 != nullptr) {
          v395 = 40;
          goto LABEL_721;
        }
      LABEL_722:
        v396 = *((_QWORD*)v443 + 10);
        if (v396 != 0) {
          *(_DWORD*)(v396 + 416) |= 0x10000000u;
          if (v432 != 0 && v461 == v460) {
            v397 = 0;
            if (v433 != nullptr) {
              goto LABEL_726;
            }
          }
          else {
            v397 = 1;
            if (v433 != nullptr) {
            LABEL_726:
              if (atomic_fetch_add((atomic_ullong* volatile)(v433 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*))(*v433 + 16LL))(v433);
                std___1___shared_weak_count___release_weak(v433);
              }
            }
          }
          v398 = v460;
          for (m = v461; m != v398; m -= 16) {
            v400 = *(_QWORD*)(m - 8);
            if (v400 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v400 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v400 + 16LL))(v400);
              std___1___shared_weak_count___release_weak(v400);
            }
          }
          v401 = *(_DWORD*)(v396 + 416);
          v461 = v398;
          *(_DWORD*)(v396 + 416) = v401 & 0xEFFFFFFF;
          if (v397 != 0) {
            *(_DWORD*)(v396 + 416) = v401 | 0x10000000;
            game_6c51e0(v396);
            GameRoutine_6c6da0(v396);
            game_6c6ec0(v396);
            v390 = nullptr;
            *(_DWORD*)(v396 + 416) &= ~0x10000000u;
          }
          else {
            v390 = nullptr;
          }
        }
      }
      v402 = v460;
      if (v460 != 0) {
        v403 = v461;
        if (v460 == v461) {
          goto LABEL_746;
        }
        do {
          v404 = *(_QWORD*)(v403 - 8);
          if (v404 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v404 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v404 + 16LL))(v404);
            std___1___shared_weak_count___release_weak(v404);
          }
          v403 -= 16;
        } while (v403 != v402);
        if (v460 != 0) {
        LABEL_746:
          v405 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v405 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v405);
        }
      }
      if (v390 != nullptr &&
          atomic_fetch_add((atomic_ullong* volatile)(v390 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v390 + 16LL))(v390);
        std___1___shared_weak_count___release_weak(v390);
      }
      if ((v463[0] & 1) != 0 && v463[2] != 0) {
        v406 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v406 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v406);
      }
      if ((v464[0] & 1) != 0 && v465 != nullptr) {
        v407 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v407 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v407);
      }
      return 1;
    }
  }
  v124 = 0;
  v127 = 0;
  v125 = 0;
  goto LABEL_206;
}

__int64 game_map_DeployData_TargetEnumerate_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  __int64** v3;
  int v4;
  int v5;
  __int64 v6;
  __int16 v7;
  __int16 v8;
  __int64 v9;
  __int16* v10;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  char v17;
  char v18;
  char v19;
  __int16 v20;
  char v21;
  __int16 v22;
  int v23;

  {
    v3 = *(__int64***)(a1 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = *a2;
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = *a3;
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = **(_QWORD**)(a1 + 16);
    __asm__ volatile("" ::"r"(v6));
  }
  v17 = 0;
  v23 = 0;
  v21 = 0;
  v22 = -1;
  v20 = 9;
  if (v6 != 0) {
    v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    (*(void (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
    (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
  }
  v18 = v4;
  v19 = v5;
  if (**v3 == 0) {
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
    v13 = v12 + 3;
    v14 = v12;
    v12[1] = 0;
    v12[2] = 0;
    *v12 = GameData_1ff2e90;
    GameRoutine_844ee0_alt1((__int64)(v12 + 3));
    {
      v15 = *v3;
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = (*v3)[1];
      __asm__ volatile("" ::"r"(v16));
    }
    *v15 = (__int64)v13;
    v15[1] = (__int64)v14;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt1(v16);
    }
  }
  v7 = v18;
  v8 = v19;
  {
    v9 = **v3;
    __asm__ volatile("" ::"r"(v9));
  }
  *(_DWORD*)(v9 + 12336) |= v23;
  v10 = GameRoutine_8450e0_alt2(v9, v7, v8);
  return GameRoutine_844950_alt1((__int64)v10, (__int64)&v17);
}

__int64 game_map_DeployData_TargetEnumerate_lambda2_Invoke(__int64 result,
                                                           __int64 a2,
                                                           __int64 a3)
{
  int v3;
  __int64 v4;

  v3 = **(_DWORD**)(result + 8);
  if (v3 < 0 || ((*(_DWORD*)(a2 + 8) >> v3) & 1) != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

__int64 game_map_DeployData_TargetEnumerateSubTarget_lambda0_Invoke(
    __int64 result, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v4;

  v3 = **(_DWORD**)(result + 8);
  if (v3 < 0 || ((*(_DWORD*)(a2 + 8) >> v3) & 1) != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

__int64

game_map_DeployData_BuildDeploy_LocalTargetSelect_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v2 + 114808) |= *(_DWORD*)(a2 + 8);
  v4 = GameRoutine_8450e0_alt1(v2 + 102472, (unsigned int)*(char*)(a2 + 1),
                               (unsigned int)*(char*)(a2 + 2));
  return GameRoutine_844950(v4, a2);
}

__int64 game_map_DeployData_BuildDeploy_Trick_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  __int64 v3;

  {
    v3 = **(_QWORD**)(result + 8) + 4LL * ((*a2 + 32 * *a3) >> 5);
    __asm__ volatile("" ::"r"(v3));
  }
  *(_DWORD*)(v3 + 12872) |= 1 << *a2;
  return result;
}

__int64 game_map_DeployData_BuildDeploy_Trick_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  __int64 v3;

  v3 = **(_QWORD**)(result + 8) + 4LL * ((*a2 + 32 * *a3) >> 5);
  *(_DWORD*)(v3 + 12872) |= 1 << *a2;
  return result;
}

__int64

game_map_DeployData_BuildDeploy_AssistEnumerate_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v6;

  v2 = *(_QWORD*)(result + 8);
  v3 = **(_DWORD**)(result + 16);
  v4 = *(_DWORD*)(a2 + 8);
  if (v3 < 0 || ((v4 >> v3) & 1) != 0) {
    *(_DWORD*)(v2 + 127152) |= v4;
    v6 = GameRoutine_8450e0_alt1(v2 + 114816, (unsigned int)*(char*)(a2 + 1),
                                 (unsigned int)*(char*)(a2 + 2));
    return GameRoutine_844950(v6, a2);
  }
  return result;
}

__int64

game_map_DeployData_BuildDeploy_AssistEnumerate_lambda1_Invoke(__int64 result,
                                                               __int64 a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  unsigned int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned int v18;
  bool v19;
  __int64 v21;

  v2 = *(_QWORD*)(result + 8);
  v3 = **(_DWORD**)(result + 16);
  v4 = *(_DWORD*)(a2 + 8);
  if (v3 < 0 || ((v4 >> v3) & 1) != 0) {
    v5 = 836;
    v6 = 0;
    v7 = *GameData_212c878[0];
    while (1) {
      if (((v4 >> v6) & 1) != 0) {
        v8 = *(_QWORD*)(v2 + 127192);
        if (v8 != 0) {
          v9 = *(unsigned __int16*)(v8 + v5 - 8);
          if (v9 == 0) {
            break;
          }
          v10 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v9);
          v11 = *(_BYTE**)(v10 + 192);
          v12 = *(unsigned __int8*)(v10 + 72);
          v13 = v11 == nullptr || v12 > 7;
          if (v13 || v11[105] == 0 || v11[104] == 2 || v11[250] != 28) {
            break;
          }
        }
      }
      if (((v4 >> (v6 | 1)) & 1) != 0) {
        v14 = *(_QWORD*)(v2 + 127192);
        if (v14 != 0) {
          v15 = *(unsigned __int16*)(v14 + v5);
          if (v15 == 0) {
            break;
          }
          v16 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v15);
          v17 = *(_BYTE**)(v16 + 192);
          v18 = *(unsigned __int8*)(v16 + 72);
          v19 = v17 == nullptr || v18 > 7;
          if (v19 || v17[105] == 0 || v17[104] == 2 || v17[250] != 28) {
            break;
          }
        }
      }
      v6 += 2;
      v5 += 16;
      if (v6 == 30) {
        return result;
      }
    }
    *(_DWORD*)(v2 + 127152) |= v4;
    v21 = GameRoutine_8450e0_alt1(v2 + 114816, (unsigned int)*(char*)(a2 + 1),
                                  (unsigned int)*(char*)(a2 + 2));
    return GameRoutine_844950(v21, a2);
  }
  return result;
}

__int64 game_map_DeployData_BuildDeploy_PostSetup_lambda0_Invoke(__int64 result,
                                                                 __int64 a2)
{
  int v2;
  __int64 v3;

  v2 = *(char*)(a2 + 1);
  v3 = **(_QWORD**)(result + 8) + 4LL * ((v2 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v3 + 13000) |= 1 << v2;
  return result;
}

__int64 game_map_DeployData_BuildDeploy_PostSetup_lambda1_Invoke(__int64 result,
                                                                 __int64 a2)
{
  int v2;
  __int64 v3;

  v2 = *(char*)(a2 + 1);
  v3 = **(_QWORD**)(result + 8) + 4LL * ((v2 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v3 + 13128) |= 1 << v2;
  return result;
}

__int64

game_map_DeployData_CommitMindSummonTargetData_lambda0_Invoke(__int64 result,
                                                              _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = *(_QWORD**)(result + 8);
  v3 = v2 + 15872;
  v4 = (_QWORD*)v2[15930];
  v5 = v2[15931];
  if ((unsigned __int64)v4 >= v5) {
    v11 = v2[15929];
    v12 = (char*)v4 - v11;
    v13 = 1 - 0x5555555555555555LL * (((__int64)v4 - v11) >> 4);
    if (v13 > 0x555555555555555LL) {
      GameRoutine_f2a4a0();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v11) >> 4);
    if (2 * v15 > v13) {
      v13 = 2 * v15;
    }
    if (v15 >= 0x2AAAAAAAAAAAAAALL) {
      v16 = 0x555555555555555LL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 > 0x555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v16, 16, 0);
      a2 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = &v12[v18];
    v20 = v18 + 48 * v16;
    v21 = a2[3];
    v7 = (__int64)&v12[v18 + 48];
    *((_QWORD*)v19 + 2) = a2[2];
    *((_QWORD*)v19 + 3) = v21;
    v22 = a2[5];
    *((_QWORD*)v19 + 4) = a2[4];
    *((_QWORD*)v19 + 5) = v22;
    v23 = a2[1];
    *(_QWORD*)v19 = *a2;
    *((_QWORD*)v19 + 1) = v23;
    result = memcpy(v18, v11, v12);
    v3[57] = v18;
    v3[58] = v7;
    v3[59] = v20;
    if (v11 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v24, v11);
    }
  }
  else {
    v6 = a2[1];
    v7 = (__int64)(v4 + 6);
    *v4 = *a2;
    v4[1] = v6;
    v8 = a2[2];
    v9 = a2[3];
    v10 = a2[5];
    v4[4] = a2[4];
    v4[5] = v10;
    v4[2] = v8;
    v4[3] = v9;
  }
  v3[58] = v7;
  return result;
}

#pragma GCC visibility pop
