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

__int64 game_map_DeployData_TargetEnumerate(__int64 a1, __int64* a2, int a3)
{
  __int64 result;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  char v15;
  char v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  __int64 v24;
  char v25;
  char v26;
  char v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  _QWORD* v36;
  int v37;
  _QWORD* v38;
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
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  char v63;
  char v64;
  _QWORD* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  bool v73;
  __int64 v74;
  int v75;
  int j;
  int k;
  __int64 v78;
  char v79;
  char v80;
  _QWORD* v81;
  _QWORD* v82;
  _QWORD* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  _QWORD* v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  unsigned int v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  int i;
  __int64 v113;
  _QWORD* v114;
  _QWORD* v115;
  _QWORD* v116;
  __int64* v117;
  __int64 v118;
  int v119;
  __int64* v120;
  __int64* v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  _BYTE v125[3];
  __int16 v126;
  char v127;
  __int16 v128;
  int v129;
  _BYTE v130[3];
  __int16 v131;
  char v132;
  __int16 v133;
  int v134;
  _BYTE v135[3];
  __int16 v136;
  char v137;
  __int16 v138;
  int v139;
  _BYTE v140[3];
  __int16 v141;
  char v142;
  __int16 v143;
  int v144;
  _BYTE v145[3];
  __int16 v146;
  char v147;
  __int16 v148;
  int v149;
  _QWORD v150[2];
  __int64* v151;
  _QWORD* v152;
  __int64 v153;
  char* v154;
  char* v155;
  __int64 v156;
  __int64* v157;
  __int64* v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  int v164;
  int v165[5];

  result = DeployData_f25050_alt1(a1);
  if ((_DWORD)result != a3) {
    return result;
  }
  v162 = 0;
  v163 = 0;
  v9 = (__int64*)(a1 + 127160);
  v160 = 0;
  v161 = 0;
  v159 = -1;
  v157 = &v160;
  v158 = &v162;
  v10 = GameData_212cff0[0];
  v122 = a2;
  v11 = *GameData_212cff0[0];
  if (*GameData_212cff0[0] != 0 && *(_BYTE*)(v11 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    if ((*(_DWORD*)(v11 + 48) & 0xFFF) == 0) {
      v46 = *(unsigned __int16*)(v11 + 40);
      if (*(_WORD*)(v11 + 40) == 0) {
        v46 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v47 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v46);
      v12 = *(_QWORD*)(v47 + 192);
      v48 = *(unsigned __int8*)(v47 + 72);
      if (v12 == 0 || v48 > 7) {
        goto LABEL_15;
      }
      v13 = *(unsigned __int8*)(v12 + 105);
      if (*(_BYTE*)(v12 + 105) == 0 || *(_BYTE*)(v12 + 104) == 2) {
        goto LABEL_15;
      }
      goto LABEL_10;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
    if (v12 == 0) {
      goto LABEL_13;
    }
  }
  else {
    v12 = *v9;
    if (*v9 == 0) {
      goto LABEL_13;
    }
  }
  v13 = *(unsigned __int8*)(v12 + 105);
LABEL_10:
  if (v13 == 4 && *(_BYTE*)(v12 + 278) == 0 && *(_BYTE*)(v12 + 279) == 0 &&
      *(_QWORD*)(v12 + 608) != 0) {
    goto LABEL_99;
  }
LABEL_13:
  if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
  LABEL_19:
    v14 = *v9;
    if (*v9 == 0) {
      goto LABEL_27;
    }
    goto LABEL_20;
  }
LABEL_15:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_19;
  }
  if ((*(_DWORD*)(v11 + 48) & 0xFFF) == 0) {
    v41 = *(unsigned __int16*)(v11 + 40);
    if (*(_WORD*)(v11 + 40) == 0) {
      v41 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v42 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v41);
    v43 = *(_QWORD*)(v42 + 192);
    v44 = *(unsigned __int8*)(v42 + 72);
    v45 = v43 == 0 || v44 > 7;
    if (v45 || *(_BYTE*)(v43 + 105) == 0 || *(_BYTE*)(v43 + 104) != 9) {
      goto LABEL_29;
    }
    v15 = *(_BYTE*)(a1 + 127308);
    v16 = *(_BYTE*)(a1 + 127309);
  LABEL_23:
    if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) -
                       7) <= 1) {
      if ((*(_DWORD*)(v11 + 48) & 0xFFF) != 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*(_DWORD*)(v11 + 48) & 0xFFF)) +
                         592LL);
        if (v17 == 0) {
          goto LABEL_99;
        }
      }
      else {
        v106 = *(unsigned __int16*)(v11 + 40);
        if (v106 == 0) {
          v106 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * v106) +
                                    192LL) +
                         592LL);
        if (v17 == 0) {
          goto LABEL_99;
        }
      }
      goto LABEL_46;
    }
  LABEL_45:
    v17 = *(_QWORD*)(*v9 + 592);
    if (v17 == 0) {
      goto LABEL_99;
    }
  LABEL_46:
    v33 = *(unsigned __int8*)(v17 + 417);
    LODWORD(v153) = 0;
    v154 = nullptr;
    v155 = nullptr;
    v156 = 0;
    GameRoutine_74d660(&v153, v33, (unsigned int)v15, (unsigned int)v16);
    v34 = v154;
    v35 = v155;
    v36 = v150;
    v150[0] = GameData_1ff2f68;
    v150[1] = &v158;
    v152 = v150;
    if (v154 == v155) {
      goto LABEL_52;
    }
    do {
      v37 = *v34;
      v38 = v152;
      v164 = v34[1];
      v165[0] = v37;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, int*, int*))(*v152 + 48LL))(v152, v165, &v164);
      v34 += 4;
    } while (v34 != v35);
    v36 = v152;
    if (v152 == v150) {
    LABEL_52:
      v39 = 32;
    }
    else {
      if (v152 == nullptr) {
        goto LABEL_54;
      }
      v39 = 40;
    }
    (*(void (**)(__int64))(*v36 + v39))((__int64)v36);
  LABEL_54:
    v7 = v154;
    if (v154 != nullptr) {
      v155 = v154;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v40);
    }
    goto LABEL_99;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
  if (v14 != 0) {
  LABEL_20:
    if (*(_BYTE*)(v14 + 104) == 9) {
      v15 = *(_BYTE*)(a1 + 127308);
      v16 = *(_BYTE*)(a1 + 127309);
      if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
        goto LABEL_45;
      }
      goto LABEL_23;
    }
  }
LABEL_27:
  if (v11 == 0 || *(_BYTE*)(v11 + 32) == 0) {
  LABEL_33:
    v18 = (_BYTE*)*v9;
    if (*v9 == 0) {
      goto LABEL_84;
    }
    goto LABEL_34;
  }
LABEL_29:
  if ((unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) >
      1) {
    goto LABEL_33;
  }
  if ((*(_DWORD*)(v11 + 48) & 0xFFF) != 0) {
    v18 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v11 + 48) & 0xFFF));
    if (v18 == nullptr) {
      goto LABEL_84;
    }
  }
  else {
    v50 = *(unsigned __int16*)(v11 + 40);
    if (v50 == 0) {
      v50 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v51 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v50);
    v18 = *(_BYTE**)(v51 + 192);
    v52 = *(unsigned __int8*)(v51 + 72);
    v53 = v18 == nullptr || v52 > 7;
    if (v53 || v18[105] == 0 || v18[104] == 2) {
      goto LABEL_84;
    }
  }
LABEL_34:
  if (v18[250] == 28) {
    v19 = *(_QWORD*)(a1 + 127432);
    v120 = (__int64*)(a1 + 127160);
    v123 = *(_QWORD*)(a1 + 127440);
    if (v19 != v123) {
      v20 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v21 = GameRoutine_74db00(*(unsigned int*)(v19 + 40));
        v22 = *(_BYTE**)(v21 + 8);
        v23 = *(_BYTE**)(v21 + 16);
        while (v22 != v23) {
          v25 = *(_BYTE*)(v19 + 36);
          v26 = *v22 + *(_BYTE*)(v19 + 32);
          v27 = v22[1];
          v145[0] = 0;
          v149 = 0;
          v147 = 0;
          v148 = -1;
          v146 = 9;
          v145[1] = v26;
          v145[2] = v27 + v25;
          if (*v158 == 0) {
            v28 = (_QWORD*)fw_memory_HeapManager_Allocate(*v20, 12368, 16, 0);
            v29 = v28 + 3;
            v30 = v28;
            v28[1] = 0;
            v28[2] = 0;
            *v28 = GameData_1ff2e90;
            GameRoutine_844ee0(v28 + 3);
            v31 = v158;
            v32 = v158[1];
            *v158 = (__int64)v29;
            v31[1] = (__int64)v30;
            if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              std___1___shared_weak_count___release_weak(v32);
            }
          }
          *(_DWORD*)(*v158 + 12336) |= v149;
          v24 = GameRoutine_8450e0();
          GameRoutine_844950(v24, v145);
          v22 += 4;
        }
        v19 += 48;
      } while (v19 != v123);
    }
    goto LABEL_98;
  }
LABEL_84:
  if ((GameRoutine_f24160() & 1) != 0) {
    v143 = -1;
    v140[0] = 0;
    v142 = 0;
    v141 = 9;
    v54 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v55 = *(_DWORD*)(v54 + 8);
    LODWORD(v54) = *(_DWORD*)(v54 + 12);
    v144 = 0;
    v140[2] = v54;
    v140[1] = v55;
    if (*v158 == 0) {
      v97 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
      v98 = v97 + 3;
      v99 = v97;
      v97[1] = 0;
      v97[2] = 0;
      *v97 = GameData_1ff2e90;
      GameRoutine_844ee0(v97 + 3);
      v100 = v158;
      v101 = v158[1];
      *v158 = (__int64)v98;
      v100[1] = (__int64)v99;
      if (v101 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v101 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v101 + 16LL))(v101);
        std___1___shared_weak_count___release_weak(v101);
      }
    }
    *(_DWORD*)(*v158 + 12336) |= v144;
    v56 = GameRoutine_8450e0();
    GameRoutine_844950(v56, v140);
    goto LABEL_99;
  }
  v57 = *(_QWORD*)(a1 + 127360);
  if (v57 != 0) {
    v58 = *(_QWORD*)(a1 + 127192);
    if (v58 != 0) {
      v120 = (__int64*)(a1 + 127160);
      v59 = *(unsigned __int8*)(v57 + 417);
      if (*(_BYTE*)(v57 + 417) != 0) {
        v60 = 0;
        do {
          v61 = 0;
          do {
            v63 = *(_BYTE*)(v58 + 584);
            v64 = *(_BYTE*)(v58 + 585);
            v135[0] = 0;
            v139 = 0;
            v137 = 0;
            v138 = -1;
            v136 = 9;
            v135[1] = v63 + v60;
            v135[2] = v64 + v61;
            if (*v158 == 0) {
              v65 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
              v66 = v65 + 3;
              v67 = v65;
              v65[1] = 0;
              v65[2] = 0;
              *v65 = GameData_1ff2e90;
              GameRoutine_844ee0(v65 + 3);
              v68 = v158;
              v69 = v158[1];
              *v158 = (__int64)v66;
              v68[1] = (__int64)v67;
              if (v69 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
                std___1___shared_weak_count___release_weak(v69);
              }
            }
            *(_DWORD*)(*v158 + 12336) |= v139;
            v62 = GameRoutine_8450e0();
            GameRoutine_844950(v62, v135);
            ++v61;
          } while (v59 != v61);
          ++v60;
        } while (v60 != v59);
      }
    LABEL_98:
      v9 = v120;
    }
  LABEL_99:
    v124 = 0;
    goto LABEL_100;
  }
  v102 = *v10;
  if (*v10 != 0 && *(_BYTE*)(v102 + 32) != 0 &&
      (unsigned int)(*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) - 7) <=
          1) {
    v7 = *(char**)(a1 + 127192);
    if (v7 == nullptr || ((v103 = *(_DWORD*)(v102 + 52)) & 0x80000000) != 0 ||
        (v104 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL),
         v153 = v104 + 144LL * v103, v104 == 0)) {
    LABEL_167:
      v107 = *(unsigned __int8*)(v102 + 16);
      v124 = v102 + 64;
      v159 = *(_DWORD*)(v102 + 36);
      if (v107 != 0) {
        v108 = game_UnitPool_Get(v102 + 16);
        if (v108 != 0) {
          v109 = *(_DWORD*)(v108 + 592);
          if (v109 >= 2 && *(_DWORD*)(v102 + 12356) == 1) {
            v119 = *(unsigned __int8*)(v102 + 69);
            if (v119 == *(unsigned __int8*)(v108 + 584)) {
              v110 = *(unsigned __int8*)(v102 + 70);
              if (v110 == *(unsigned __int8*)(v108 + 585)) {
                v111 = 0;
                v121 = (__int64*)(a1 + 127160);
                do {
                  for (i = 0; i != v109; ++i) {
                    v130[0] = 0;
                    v134 = 0;
                    v132 = 0;
                    v133 = -1;
                    v131 = 9;
                    v130[1] = v119 + v111;
                    v130[2] = v110 + i;
                    if (*v158 == 0) {
                      v114 = (_QWORD*)fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
                      v115 = v114 + 3;
                      v116 = v114;
                      v114[1] = 0;
                      v114[2] = 0;
                      *v114 = GameData_1ff2e90;
                      GameRoutine_844ee0(v114 + 3);
                      v117 = v158;
                      v118 = v158[1];
                      *v158 = (__int64)v115;
                      v117[1] = (__int64)v116;
                      if (v118 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118);
                        std___1___shared_weak_count___release_weak(v118);
                      }
                    }
                    *(_DWORD*)(*v158 + 12336) |= v134;
                    v113 = GameRoutine_8450e0();
                    GameRoutine_844950(v113, v130);
                  }
                  v9 = v121;
                  ++v111;
                  v124 = 0;
                } while (v111 != v109);
              }
            }
          }
        }
      }
      goto LABEL_100;
    }
    v150[0] = GameData_1ff2fe8;
    v150[1] = &v157;
    v152 = v150;
    v151 = &v153;
    (*(void (**)(__int64))(*(_QWORD*)(v104 + 144LL * v103) + 760LL))(
        v104 + 144LL * v103);
    if (v152 == v150) {
      v105 = 32;
    }
    else {
      if (v152 == nullptr) {
      LABEL_166:
        v102 = *v10;
        goto LABEL_167;
      }
      v105 = 40;
    }
    (*(void (**)(__int64))(*v152 + v105))((__int64)v152);
    goto LABEL_166;
  }
  if (*(_BYTE*)(a1 + 53056) == 0) {
    goto LABEL_99;
  }
  v159 = *(_DWORD*)(a1 + 53060);
  v124 = a1 + 90128;
LABEL_100:
  if ((*((_BYTE*)v9 + 212) & 0x10) != 0 ||
      *((_BYTE*)v9 + 24) == 1 &&
          *(_BYTE*)((v70 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *((unsigned __int16*)v9 + 8))) +
                    72) == 14 &&
          ((v71 = *(unsigned __int8*)(v70 + 73), v45 = v71 > 0x11,
            v72 = (1 << v71) & 0x38034, !v45)
               ? (v73 = v72 == 0)
               : (v73 = true),
           !v73)) {
    v74 = v9[4];
    if (v74 != 0) {
      v75 = *(_DWORD*)(v74 + 592);
      if (v75 >= 1) {
        for (j = 0; j != v75; ++j) {
          for (k = 0; k != v75; ++k) {
            v79 = *(_BYTE*)(v74 + 584);
            v80 = *(_BYTE*)(v74 + 585);
            v125[0] = 0;
            v129 = 0;
            v127 = 0;
            v128 = -1;
            v126 = 9;
            v125[1] = v79 + j;
            v125[2] = v80 + k;
            if (*v158 == 0) {
              v81 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 12368, 16, 0);
              v82 = v81 + 3;
              v83 = v81;
              v81[1] = 0;
              v81[2] = 0;
              *v81 = GameData_1ff2e90;
              GameRoutine_844ee0(v81 + 3);
              v84 = v158;
              v85 = v158[1];
              *v158 = (__int64)v82;
              v84[1] = (__int64)v83;
              if (v85 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
                std___1___shared_weak_count___release_weak(v85);
              }
            }
            *(_DWORD*)(*v158 + 12336) |= v129;
            v78 = GameRoutine_8450e0();
            GameRoutine_844950(v78, v125);
          }
        }
      }
    }
  }
  v150[0] = GameData_1ff3068;
  v150[1] = &v159;
  v152 = v150;
  v151 = v122;
  if (v124 != 0 && *(int*)(v124 + 12292) >= 1) {
    v86 = v124 + 4;
    v87 = 0;
    while (1) {
      v38 = v152;
      if (v152 == nullptr) {
        break;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v86);
      ++v87;
      v86 += 12;
      if (v87 >= *(int*)(v124 + 12292)) {
        goto LABEL_122;
      }
    }
  LABEL_181:
    GameRoutine_60a310(v38, v7, v8);
  }
LABEL_122:
  v88 = v162;
  if (v162 != 0 && *(int*)(v162 + 12292) >= 1) {
    v89 = v162 + 4;
    v90 = 0;
    do {
      v38 = v152;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v89);
      ++v90;
      v89 += 12;
    } while (v90 < *(int*)(v88 + 12292));
  }
  v91 = v160;
  if (v160 != 0 && *(int*)(v160 + 12292) >= 1) {
    v92 = v160 + 4;
    v93 = 0;
    do {
      v38 = v152;
      if (v152 == nullptr) {
        goto LABEL_181;
      }
      (*(void (**)(_QWORD*, __int64))(*v152 + 48LL))(v152, v92);
      ++v93;
      v92 += 12;
    } while (v93 < *(int*)(v91 + 12292));
  }
  result = (__int64)v152;
  if (v152 == v150) {
    v94 = 32;
  }
  else {
    if (v152 == nullptr) {
      goto LABEL_137;
    }
    v94 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v152 + v94))((__int64)v152);
LABEL_137:
  v95 = v161;
  if (v161 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v95 + 16LL))(v95);
    result = std___1___shared_weak_count___release_weak(v95);
  }
  v96 = v163;
  if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v96 + 16LL))(v96);
    return std___1___shared_weak_count___release_weak(v96);
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
