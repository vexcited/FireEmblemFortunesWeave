#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_111eae0(_QWORD);
__int64 GameRoutine_111ed70(_QWORD);
__int64 GameRoutine_111ef70(_QWORD, const char*, ...);
__int64 GameRoutine_111f130(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_111f220(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_111f310(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_111f3e0(_QWORD, _QWORD);
__int64 GameRoutine_65f7a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f9a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6616e0(_QWORD, _QWORD);
__int64 GameRoutine_d35bc0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdb998[])();
extern __int64 (*GameData_1fdb9c8[])();
extern __int64 (*game_combat_PhotoSpots_vtable[])();
extern __int64 GameData_220f8c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ee68[4];
extern int GameData_220f8d0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_combat_PhotoSpots_PhotoSpots(_QWORD* a1);
_QWORD* PhotoSpots_Destructor(_QWORD* result);
__int64 game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);

__int64 game_combat_PhotoSpots_PhotoSpots(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  _QWORD v8[4];
  _QWORD* v9;

  if (*GameData_212ee68[0] == 0) {
    *GameData_212ee68[0] = (__int64)a1;
    GameData_220f8d0 = 1;
  }
  a1[2] = 0;
  a1[3] = 0;
  *a1 = game_combat_PhotoSpots_vtable;
  a1[1] = 0;
  v2 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 80, 16, 0);
  *(_QWORD*)(v2 + 48) = 0;
  a1[4] = v2;
  *(_QWORD*)v2 = "GameData/Combat/CombatCamera.bprop";
  *(_QWORD*)(v2 + 8) = 0;
  *(_WORD*)(v2 + 64) = 1;
  v9 = v8;
  v6[0] = GameData_1fdb9c8;
  v6[1] = a1;
  v7 = v6;
  v8[0] = GameData_1fdb9c8;
  v8[1] = a1;
  GameRoutine_111f3e0(v8, v2 + 16);
  if (v9 == v8) {
    v3 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_8;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9 + v3))((__int64)v9);
LABEL_8:
  GameRoutine_111ed70(v2);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

_QWORD* PhotoSpots_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
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

  v1 = result[4];
  result[4] = 0;
  v2 = result;
  *result = game_combat_PhotoSpots_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  if (*(_BYTE*)(v1 + 65) == 1) {
    GameRoutine_111eae0(v1);
  }
  v4 = *(_QWORD**)(v1 + 48);
  if (v4 == (_QWORD*)(v1 + 16)) {
    v5 = 32;
    goto LABEL_8;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  v6 = *(_QWORD*)(v1 + 8);
  *(_QWORD*)(v1 + 8) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
LABEL_14:
  v8 = v2[1];
  if (v8 != 0) {
    v9 = v2[2];
    if (v8 == v9) {
      goto LABEL_31;
    }
    do {
      v10 = v9;
      if ((*(_BYTE*)(v9 - 72) & 1) != 0) {
        v11 = *(_QWORD*)(v9 - 56);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v11);
        }
      }
      v9 -= 104;
      if ((*(_BYTE*)(v10 - 104) & 1) != 0) {
        v13 = *(_QWORD*)(v10 - 88);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v13);
        }
      }
    } while (v9 != v8);
    v15 = v2[1];
    v2[2] = v8;
    v8 = v15;
    if (v15 != 0) {
    LABEL_31:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v8);
    }
  }
  *v2 = GameData_1fdb998;
  if ((_QWORD*)GameData_220f8c8 == v2) {
    GameData_220f8c8 = 0;
    GameData_220f8d0 = 0;
  }
  return result;
}

__int64 game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
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
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char v61;
  int v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  char v67;
  int v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  char v73;
  int v74;
  __int64 v75;
  int v76;
  __int64 v77;
  unsigned __int8* v78;
  int v79;
  unsigned __int8* v80;
  int v81;
  int v82;
  int v83;
  __int64* v84;
  _DWORD v85[4];
  __int64 v86;

  v2 = *(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v84 = v2 + 1;
  }
  else {
    GameRoutine_d35bc0(*(_QWORD*)(a1 + 8));
    v84 = v2 + 1;
    if (*(_BYTE*)(a2 + 64) != 1) {
      v45 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v2[2] - v2[1]) >> 3);
      v46 = *(_QWORD*)(a2 + 8);
      v47 = game_HashString32("Spots");
      v48 = *(_QWORD*)(v46 + 120);
      v49 = *(_DWORD*)(v46 + 20);
      v85[0] = v47;
      v85[1] = v49;
      result = GameRoutine_6616e0(v48, v85);
      v50 = *(int*)(v46 + 20);
      *(_DWORD*)(v46 + 20) = v50 + 1;
      *(_BYTE*)(*(_QWORD*)(v46 + 8) + v50) = v45;
      v51 = *(int*)(v46 + 20);
      *(_DWORD*)(v46 + 20) = v51 + 1;
      *(_BYTE*)(*(_QWORD*)(v46 + 8) + v51) = BYTE1(v45);
      goto LABEL_57;
    }
  }
  v4 = *(_QWORD*)(a2 + 8);
  v85[0] = game_HashString32("Spots");
  result = GameRoutine_65f9a0(v4, v85, 0);
  v6 = v2[1];
  v7 = v2[2];
  v8 = (unsigned __int16)result;
  v9 = v7 - v6;
  v10 = 0x4EC4EC4EC4EC4EC5LL * ((v7 - v6) >> 3);
  v11 = (unsigned __int16)result - v10;
  if ((unsigned __int16)result <= v10) {
    if ((unsigned __int16)result < v10) {
      v38 = v6 + 104LL * (unsigned __int16)result;
      if (v38 != v7) {
        v39 = fw_memory_g_heap_manager_ptr;
        do {
          v40 = v7;
          if ((*(_BYTE*)(v7 - 72) & 1) != 0) {
            v41 = *(_QWORD*)(v7 - 56);
            if (v41 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
                v42 = 128;
              }
              else {
                v42 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v42, v41);
            }
          }
          v7 -= 104;
          if ((*(_BYTE*)(v40 - 104) & 1) != 0) {
            v43 = *(_QWORD*)(v40 - 88);
            if (v43 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
                v44 = 128;
              }
              else {
                v44 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v44, v43);
            }
          }
        } while (v7 != v38);
      }
      v2[2] = v38;
    }
  }
  else {
    v12 = v2[3];
    if (0x4EC4EC4EC4EC4EC5LL * ((v12 - v7) >> 3) >= v11) {
      v52 = v7 + 104LL * (unsigned int)v11;
      do {
        *(_BYTE*)v7 = 14;
        strcpy((char*)(v7 + 1), "no name");
        *(_DWORD*)(v7 + 24) = 0;
        *(_QWORD*)(v7 + 32) = 0;
        *(_QWORD*)(v7 + 40) = 0;
        *(_QWORD*)(v7 + 48) = 0;
        *(_QWORD*)(v7 + 56) = 0x3F00000042200000LL;
        *(_QWORD*)(v7 + 64) = 0;
        *(_QWORD*)(v7 + 72) = 0x40F0000000000000LL;
        *(_QWORD*)(v7 + 80) = 0;
        *(_QWORD*)(v7 + 88) = 1064514355;
        *(_WORD*)(v7 + 96) = 1;
        *(_BYTE*)(v7 + 98) = 1;
        v7 += 104;
      } while (v7 != v52);
      v2[2] = v52;
    }
    else {
      v13 = 0x4EC4EC4EC4EC4EC5LL * ((v12 - v6) >> 3);
      if (2 * v13 > (unsigned __int16)result) {
        v8 = 2 * v13;
      }
      if (v13 >= 0x13B13B13B13B13BLL) {
        v14 = 0x276276276276276LL;
      }
      else {
        v14 = v8;
      }
      if (v14 > 0x276276276276276LL) {
        GameRoutine_60a210(result);
      }
      v15 = fw_memory_g_heap_manager_ptr;
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104 * v14, 16, 0);
      v16 = result + v9;
      v17 = result + v9;
      v18 = result + v9 + 104LL * (unsigned int)v11;
      do {
        *(_BYTE*)v17 = 14;
        strcpy((char*)(v17 + 1), "no name");
        *(_DWORD*)(v17 + 24) = 0;
        *(_QWORD*)(v17 + 32) = 0;
        *(_QWORD*)(v17 + 40) = 0;
        *(_QWORD*)(v17 + 48) = 0;
        *(_QWORD*)(v17 + 56) = 0x3F00000042200000LL;
        *(_QWORD*)(v17 + 64) = 0;
        *(_QWORD*)(v17 + 72) = 0x40F0000000000000LL;
        *(_QWORD*)(v17 + 80) = 0;
        *(_QWORD*)(v17 + 88) = 1064514355;
        *(_WORD*)(v17 + 96) = 1;
        *(_BYTE*)(v17 + 98) = 1;
        v17 += 104;
      } while (v17 != v18);
      v19 = result + 104 * v14;
      v20 = v2[1];
      v21 = (__int64*)v2[2];
      v22 = v16 + v20 - (_QWORD)v21;
      if (v21 != (__int64*)v20) {
        v23 = (__int64*)v2[1];
        v24 = v22;
        do {
          v25 = *v23;
          v26 = v23[2];
          *(_QWORD*)(v24 + 8) = v23[1];
          *(_QWORD*)(v24 + 16) = v26;
          *(_QWORD*)v24 = v25;
          v23[1] = 0;
          v23[2] = 0;
          *v23 = 0;
          *(_DWORD*)(v24 + 24) = *((_DWORD*)v23 + 6);
          v27 = v23[4];
          v28 = v23[6];
          *(_QWORD*)(v24 + 40) = v23[5];
          *(_QWORD*)(v24 + 48) = v28;
          *(_QWORD*)(v24 + 32) = v27;
          v23[5] = 0;
          v23[6] = 0;
          v23[4] = 0;
          v30 = v23[10];
          v29 = v23[11];
          v31 = v23[9];
          *(_DWORD*)(v24 + 95) = *(_DWORD*)((char*)v23 + 95);
          *(_QWORD*)(v24 + 80) = v30;
          *(_QWORD*)(v24 + 88) = v29;
          *(_QWORD*)(v24 + 72) = v31;
          v32 = v23[7];
          v33 = v23[8];
          v23 += 13;
          *(_QWORD*)(v24 + 56) = v32;
          *(_QWORD*)(v24 + 64) = v33;
          v24 += 104;
        } while (v23 != v21);
        do {
          if ((*(_BYTE*)(v20 + 32) & 1) != 0) {
            v34 = *(_QWORD*)(v20 + 48);
            if (v34 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v35 = 128;
              }
              else {
                v35 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v35, v34);
            }
          }
          if ((*(_BYTE*)v20 & 1) != 0) {
            v36 = *(_QWORD*)(v20 + 16);
            if (v36 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v37 = 128;
              }
              else {
                v37 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v37, v36);
            }
          }
          v20 += 104;
        } while ((__int64*)v20 != v21);
        v20 = *v84;
      }
      v2[1] = v22;
      v2[2] = v18;
      v2[3] = v19;
      if (v20 != 0) {
        v53 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v53 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v53, v20);
      }
    }
  }
LABEL_57:
  if (v2[2] != v2[1]) {
    v54 = 0;
    do {
      GameRoutine_111ef70(a2, "%s[%d]", "Spots", v54);
      v56 = *v84;
      LOBYTE(v85[0]) = 14;
      v57 = v56 + 104 * v54;
      strcpy((char*)v85 + 1, "no name");
      GameRoutine_111f310(a2, "Name", v57, v85);
      if ((v85[0] & 1) != 0 && v86 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v86);
      }
      LOWORD(v85[0]) = 0;
      GameRoutine_111f310(a2, "Caption", v57 + 32, v85);
      if ((v85[0] & 1) != 0 && v86 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v86);
      }
      GameRoutine_111f220(a2, "FovY", v57 + 56, 40.0);
      GameRoutine_111f220(a2, "Balance", v57 + 60, 0.5);
      GameRoutine_111f220(a2, "Azimuth", v57 + 64, 0.0);
      GameRoutine_111f220(a2, "Altitude", v57 + 68, 0.0);
      GameRoutine_111f220(a2, "BankAngle", v57 + 72, 0.0);
      GameRoutine_111f220(a2, "Distance", v57 + 76, 5.0);
      GameRoutine_111f220(a2, "TargetGroundOffset", v57 + 80, 0.0);
      GameRoutine_111f220(a2, "ShiftLR", v57 + 84, 0.0);
      GameRoutine_111f220(a2, "Lag", v57 + 88, 0.95);
      GameRoutine_111f130(a2, "Priority", v57 + 92, 0);
      v60 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v85[0] = game_HashString32("AutoDistance");
        v61 = GameRoutine_65f7a0(v60, v85, 1);
      }
      else {
        v61 = *(_BYTE*)(v57 + 96);
        v62 = game_HashString32("AutoDistance");
        v63 = *(_QWORD*)(v60 + 120);
        v64 = *(_DWORD*)(v60 + 20);
        v85[0] = v62;
        v85[1] = v64;
        GameRoutine_6616e0(v63, v85);
        v65 = *(int*)(v60 + 20);
        *(_DWORD*)(v60 + 20) = v65 + 1;
        *(_BYTE*)(*(_QWORD*)(v60 + 8) + v65) = v61;
      }
      *(_BYTE*)(v57 + 96) = v61 != 0;
      v66 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v85[0] = game_HashString32("NeedsTest");
        v67 = GameRoutine_65f7a0(v66, v85, 0);
      }
      else {
        v67 = *(_BYTE*)(v57 + 97);
        v68 = game_HashString32("NeedsTest");
        v69 = *(_QWORD*)(v66 + 120);
        v70 = *(_DWORD*)(v66 + 20);
        v85[0] = v68;
        v85[1] = v70;
        GameRoutine_6616e0(v69, v85);
        v71 = *(int*)(v66 + 20);
        *(_DWORD*)(v66 + 20) = v71 + 1;
        *(_BYTE*)(*(_QWORD*)(v66 + 8) + v71) = v67;
      }
      *(_BYTE*)(v57 + 97) = v67 != 0;
      v72 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v85[0] = game_HashString32("NeedsFloorClamp");
        v73 = GameRoutine_65f7a0(v72, v85, 1);
      }
      else {
        v73 = *(_BYTE*)(v57 + 98);
        v74 = game_HashString32("NeedsFloorClamp");
        v75 = *(_QWORD*)(v72 + 120);
        v76 = *(_DWORD*)(v72 + 20);
        v85[0] = v74;
        v85[1] = v76;
        GameRoutine_6616e0(v75, v85);
        v77 = *(int*)(v72 + 20);
        *(_DWORD*)(v72 + 20) = v77 + 1;
        *(_BYTE*)(*(_QWORD*)(v72 + 8) + v77) = v73;
      }
      *(_BYTE*)(v57 + 98) = v73 != 0;
      if (*(_BYTE*)(a2 + 64) == 1) {
        if ((*(_BYTE*)v57 & 1) != 0) {
          v78 = *(unsigned __int8**)(v57 + 16);
        }
        else {
          v78 = (unsigned __int8*)(v57 + 1);
        }
        v81 = *v78;
        v80 = v78 + 1;
        v79 = v81;
        if (v81 != 0) {
          v82 = 0;
          do {
            v82 = v79 - v82 + 32 * v82;
            v83 = *v80++;
            v79 = v83;
          } while (v83 != 0);
        }
        else {
          v82 = 0;
        }
        *(_DWORD*)(v57 + 24) = v82;
        v55 = 8;
        if (*(_BYTE*)(a2 + 64) != 0) {
          v55 = 24;
        }
      }
      else {
        v55 = 8;
      }
      result = (*(__int64 (**)(void*))(**(_QWORD**)(a2 + 8) + v55))(
          (void*)*(_QWORD**)(a2 + 8));
      ++v54;
    } while (0x4EC4EC4EC4EC4EC5LL * ((__int64)(v2[2] - v2[1]) >> 3) > v54);
  }
  if (*(_BYTE*)(a2 + 64) == 1) {
    return GameRoutine_d35bc0((__int64)v2);
  }
  return result;
}

#pragma GCC visibility pop
