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
__int64 game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke");
__int64 GameRoutine_111ef70_alt1(__int64, __int64,
                                 ...) __asm__("GameRoutine_111ef70");
__int64 GameRoutine_111f130_alt1(__int64, const char*, int*,
                                 unsigned int) __asm__("GameRoutine_111f130");
__int64 GameRoutine_65f7a0_alt1(_QWORD*, unsigned int*,
                                unsigned int) __asm__("GameRoutine_65f7a0");
__int64 GameRoutine_65f9a0_alt1(_QWORD*, unsigned int*,
                                unsigned int) __asm__("GameRoutine_65f9a0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6616e0(float*, unsigned int*);
const char* GameRoutine_111f310_alt1(__int64, const char*, __int64,
                                     char*) __asm__("GameRoutine_111f310");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
void GameRoutine_111f220_alt1(__int64, const char*, float*,
                              float) __asm__("GameRoutine_111f220");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke(__int64 a1, __int64 a2);

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

void game_combat_PhotoSpots_PhotoSpots_lambda0_Invoke(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v4;
  unsigned __int16 v5;
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
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
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
  __int64 v47;
  unsigned int v48;
  float* v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char v62;
  unsigned int v63;
  float* v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  char v68;
  unsigned int v69;
  float* v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  char v74;
  unsigned int v75;
  float* v76;
  unsigned int v77;
  __int64 v78;
  unsigned __int8* v79;
  int v80;
  unsigned __int8* v81;
  int v82;
  int v83;
  int v84;
  __int64* v85;
  struct {
    unsigned int v86[4];
    __int64 v87;
  } v86_;

  v2 = *(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v85 = v2 + 1;
  }
  else {
    GameRoutine_d35bc0(*(_QWORD*)(a1 + 8));
    v85 = v2 + 1;
    if (*(_BYTE*)(a2 + 64) != 1) {
      v46 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v2[2] - v2[1]) >> 3);
      v47 = *(_QWORD*)(a2 + 8);
      v48 = (unsigned int)game_HashString32_alt1("Spots");
      v49 = *(float**)(v47 + 120);
      v50 = *(_DWORD*)(v47 + 20);
      v86_.v86[0] = v48;
      v86_.v86[1] = v50;
      game_6616e0(v49, v86_.v86);
      v51 = *(int*)(v47 + 20);
      *(_DWORD*)(v47 + 20) = v51 + 1;
      *(_BYTE*)(*(_QWORD*)(v47 + 8) + v51) = v46;
      v52 = *(int*)(v47 + 20);
      *(_DWORD*)(v47 + 20) = v52 + 1;
      *(_BYTE*)(*(_QWORD*)(v47 + 8) + v52) = BYTE1(v46);
      goto LABEL_57;
    }
  }
  v4 = *(_QWORD**)(a2 + 8);
  v86_.v86[0] = (unsigned int)game_HashString32_alt1("Spots");
  v5 = GameRoutine_65f9a0_alt1(v4, v86_.v86, 0);
  v6 = v2[1];
  v7 = v2[2];
  v8 = v5;
  v9 = v7 - v6;
  v10 = 0x4EC4EC4EC4EC4EC5LL * ((v7 - v6) >> 3);
  v11 = v5 - v10;
  if (v5 <= v10) {
    if (v5 < v10) {
      v39 = v6 + 104LL * v5;
      if (v39 != v7) {
        v40 = fw_memory_g_heap_manager_ptr;
        do {
          v41 = v7;
          if ((*(_BYTE*)(v7 - 72) & 1) != 0) {
            v42 = *(_QWORD*)(v7 - 56);
            if (v42 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
                v43 = 128;
              }
              else {
                v43 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v40 + v43, v42);
            }
          }
          v7 -= 104;
          if ((*(_BYTE*)(v41 - 104) & 1) != 0) {
            v44 = *(_QWORD*)(v41 - 88);
            if (v44 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
                v45 = 128;
              }
              else {
                v45 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v40 + v45, v44);
            }
          }
        } while (v7 != v39);
      }
      v2[2] = v39;
    }
  }
  else {
    v12 = v2[3];
    if (0x4EC4EC4EC4EC4EC5LL * ((v12 - v7) >> 3) >= v11) {
      v53 = v7 + 104LL * (unsigned int)v11;
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
      } while (v7 != v53);
      v2[2] = v53;
    }
    else {
      v13 = 0x4EC4EC4EC4EC4EC5LL * ((v12 - v6) >> 3);
      if (2 * v13 > v5) {
        v8 = 2 * v13;
      }
      if (v13 >= 0x13B13B13B13B13BLL) {
        v14 = 0x276276276276276LL;
      }
      else {
        v14 = v8;
      }
      if (v14 > 0x276276276276276LL) {
        GameRoutine_60a210_alt1();
      }
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104 * v14, 16, 0);
      v17 = v16 + v9;
      v18 = v16 + v9;
      v19 = v16 + v9 + 104LL * (unsigned int)v11;
      do {
        *(_BYTE*)v18 = 14;
        strcpy((char*)(v18 + 1), "no name");
        *(_DWORD*)(v18 + 24) = 0;
        *(_QWORD*)(v18 + 32) = 0;
        *(_QWORD*)(v18 + 40) = 0;
        *(_QWORD*)(v18 + 48) = 0;
        *(_QWORD*)(v18 + 56) = 0x3F00000042200000LL;
        *(_QWORD*)(v18 + 64) = 0;
        *(_QWORD*)(v18 + 72) = 0x40F0000000000000LL;
        *(_QWORD*)(v18 + 80) = 0;
        *(_QWORD*)(v18 + 88) = 1064514355;
        *(_WORD*)(v18 + 96) = 1;
        *(_BYTE*)(v18 + 98) = 1;
        v18 += 104;
      } while (v18 != v19);
      v20 = v16 + 104 * v14;
      v21 = v2[1];
      v22 = (__int64*)v2[2];
      v23 = v17 + v21 - (_QWORD)v22;
      if (v22 != (__int64*)v21) {
        v24 = (__int64*)v2[1];
        v25 = v23;
        do {
          v26 = *v24;
          v27 = v24[2];
          *(_QWORD*)(v25 + 8) = v24[1];
          *(_QWORD*)(v25 + 16) = v27;
          *(_QWORD*)v25 = v26;
          v24[1] = 0;
          v24[2] = 0;
          *v24 = 0;
          *(_DWORD*)(v25 + 24) = *((_DWORD*)v24 + 6);
          v28 = v24[4];
          v29 = v24[6];
          *(_QWORD*)(v25 + 40) = v24[5];
          *(_QWORD*)(v25 + 48) = v29;
          *(_QWORD*)(v25 + 32) = v28;
          v24[5] = 0;
          v24[6] = 0;
          v24[4] = 0;
          v31 = v24[10];
          v30 = v24[11];
          v32 = v24[9];
          *(_DWORD*)(v25 + 95) = *(_DWORD*)((char*)v24 + 95);
          *(_QWORD*)(v25 + 80) = v31;
          *(_QWORD*)(v25 + 88) = v30;
          *(_QWORD*)(v25 + 72) = v32;
          v33 = v24[7];
          v34 = v24[8];
          v24 += 13;
          *(_QWORD*)(v25 + 56) = v33;
          *(_QWORD*)(v25 + 64) = v34;
          v25 += 104;
        } while (v24 != v22);
        do {
          if ((*(_BYTE*)(v21 + 32) & 1) != 0) {
            v35 = *(_QWORD*)(v21 + 48);
            if (v35 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v36 = 128;
              }
              else {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v36, v35);
            }
          }
          if ((*(_BYTE*)v21 & 1) != 0) {
            v37 = *(_QWORD*)(v21 + 16);
            if (v37 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v38 = 128;
              }
              else {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v38, v37);
            }
          }
          v21 += 104;
        } while ((__int64*)v21 != v22);
        v21 = *v85;
      }
      v2[1] = v23;
      v2[2] = v19;
      v2[3] = v20;
      if (v21 != 0) {
        v54 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v54, v21);
      }
    }
  }
LABEL_57:
  if (v2[2] != v2[1]) {
    v55 = 0;
    do {
      GameRoutine_111ef70_alt1(a2, (__int64)"%s[%d]", "Spots", v55);
      v57 = *v85;
      LOBYTE(v86_.v86[0]) = 14;
      v58 = v57 + 104 * v55;
      strcpy((char*)v86_.v86 + 1, "no name");
      GameRoutine_111f310_alt1(a2, "Name", v58, (char*)v86_.v86);
      if ((v86_.v86[0] & 1) != 0 && v86_.v87 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v86_.v87);
      }
      LOWORD(v86_.v86[0]) = 0;
      GameRoutine_111f310_alt1(a2, "Caption", v58 + 32, (char*)v86_.v86);
      if ((v86_.v86[0] & 1) != 0 && v86_.v87 != 0) {
        v60 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v86_.v87);
      }
      GameRoutine_111f220_alt1(a2, "FovY", (float*)(v58 + 56),
                               0x1.4000000000000p+5f);
      GameRoutine_111f220_alt1(a2, "Balance", (float*)(v58 + 60),
                               0x1.0000000000000p-1f);
      GameRoutine_111f220_alt1(a2, "Azimuth", (float*)(v58 + 64), 0x0.0p+0f);
      GameRoutine_111f220_alt1(a2, "Altitude", (float*)(v58 + 68), 0x0.0p+0f);
      GameRoutine_111f220_alt1(a2, "BankAngle", (float*)(v58 + 72), 0x0.0p+0f);
      GameRoutine_111f220_alt1(a2, "Distance", (float*)(v58 + 76),
                               0x1.4000000000000p+2f);
      GameRoutine_111f220_alt1(a2, "TargetGroundOffset", (float*)(v58 + 80),
                               0x0.0p+0f);
      GameRoutine_111f220_alt1(a2, "ShiftLR", (float*)(v58 + 84), 0x0.0p+0f);
      GameRoutine_111f220_alt1(a2, "Lag", (float*)(v58 + 88),
                               0x1.e666660000000p-1f);
      GameRoutine_111f130_alt1(a2, "Priority", (int*)(v58 + 92), 0);
      v61 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v86_.v86[0] = (unsigned int)game_HashString32_alt1("AutoDistance");
        v62 = GameRoutine_65f7a0_alt1((_QWORD*)v61, v86_.v86, 1u);
      }
      else {
        v62 = *(_BYTE*)(v58 + 96);
        v63 = (unsigned int)game_HashString32_alt1("AutoDistance");
        v64 = *(float**)(v61 + 120);
        v65 = *(_DWORD*)(v61 + 20);
        v86_.v86[0] = v63;
        v86_.v86[1] = v65;
        game_6616e0(v64, v86_.v86);
        v66 = *(int*)(v61 + 20);
        *(_DWORD*)(v61 + 20) = v66 + 1;
        *(_BYTE*)(*(_QWORD*)(v61 + 8) + v66) = v62;
      }
      *(_BYTE*)(v58 + 96) = v62 != 0;
      v67 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v86_.v86[0] = (unsigned int)game_HashString32_alt1("NeedsTest");
        v68 = GameRoutine_65f7a0_alt1((_QWORD*)v67, v86_.v86, 0);
      }
      else {
        v68 = *(_BYTE*)(v58 + 97);
        v69 = (unsigned int)game_HashString32_alt1("NeedsTest");
        v70 = *(float**)(v67 + 120);
        v71 = *(_DWORD*)(v67 + 20);
        v86_.v86[0] = v69;
        v86_.v86[1] = v71;
        game_6616e0(v70, v86_.v86);
        v72 = *(int*)(v67 + 20);
        *(_DWORD*)(v67 + 20) = v72 + 1;
        *(_BYTE*)(*(_QWORD*)(v67 + 8) + v72) = v68;
      }
      *(_BYTE*)(v58 + 97) = v68 != 0;
      v73 = *(_QWORD*)(a2 + 8);
      if (*(_BYTE*)(a2 + 64) == 1) {
        v86_.v86[0] = (unsigned int)game_HashString32_alt1("NeedsFloorClamp");
        v74 = GameRoutine_65f7a0_alt1((_QWORD*)v73, v86_.v86, 1u);
      }
      else {
        v74 = *(_BYTE*)(v58 + 98);
        v75 = (unsigned int)game_HashString32_alt1("NeedsFloorClamp");
        v76 = *(float**)(v73 + 120);
        v77 = *(_DWORD*)(v73 + 20);
        v86_.v86[0] = v75;
        v86_.v86[1] = v77;
        game_6616e0(v76, v86_.v86);
        v78 = *(int*)(v73 + 20);
        *(_DWORD*)(v73 + 20) = v78 + 1;
        *(_BYTE*)(*(_QWORD*)(v73 + 8) + v78) = v74;
      }
      *(_BYTE*)(v58 + 98) = v74 != 0;
      if (*(_BYTE*)(a2 + 64) == 1) {
        if ((*(_BYTE*)v58 & 1) != 0) {
          v79 = *(unsigned __int8**)(v58 + 16);
        }
        else {
          v79 = (unsigned __int8*)(v58 + 1);
        }
        v82 = *v79;
        v81 = v79 + 1;
        v80 = v82;
        if (v82 != 0) {
          v83 = 0;
          do {
            v83 = v80 - v83 + 32 * v83;
            v84 = *v81++;
            v80 = v84;
          } while (v84 != 0);
        }
        else {
          v83 = 0;
        }
        *(_DWORD*)(v58 + 24) = v83;
        v56 = 8;
        if (*(_BYTE*)(a2 + 64) != 0) {
          v56 = 24;
        }
      }
      else {
        v56 = 8;
      }
      (*(void (**)(void*))(**(_QWORD**)(a2 + 8) + v56))(
          (void*)*(_QWORD**)(a2 + 8));
      ++v55;
    } while (0x4EC4EC4EC4EC4EC5LL * ((__int64)(v2[2] - v2[1]) >> 3) > v55);
  }
  if (*(_BYTE*)(a2 + 64) == 1) {
    GameRoutine_d35bc0((__int64)v2);
  }
}

#pragma GCC visibility pop
