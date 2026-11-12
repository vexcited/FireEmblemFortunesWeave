#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f5f030(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
extern char GameData_2167620;
__int64 DungeonController_f5e870(__int64 a1);
__int64 GameRoutine_158fb60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 GameRoutine_f5ec20();
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_f5ee40();
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a9d987;
extern _UNKNOWN GameData_1ad725f;
extern __int64 GameData_1ac302b;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212ea58;
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 DungeonController_f5f480();
bool DungeonController_f5f760();
__int64
game_hub_DungeonController_GetTreasureCounterNow_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
__int64
game_hub_DungeonController_GetTreasureCounterMax_lambda0_Invoke(__int64 result,
                                                                __int64* a2);
__int64 (***CharacterModel_cf67d0(__int64 (***result)()))();
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_de7380(__int64, unsigned __int8, int, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21c9d20;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d10;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void GameRoutine_f5f030_alt1(__int64, char) __asm__("GameRoutine_f5f030");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_da89a0(_QWORD);
void DungeonController_f5e9c0(__int64 a1);
__int64 DungeonController_f5ec20();
bool DungeonController_f5ee40();
__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void
game_gameui_Util_GetCorpsStatusUnitList(PSEUDO_X8, char, char, int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn))
GameRoutine_da89a0_alt1() __asm__("GameRoutine_da89a0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 DungeonController_f5e870(__int64 a1)
{
  __int64 result;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_DWORD*)(a1 + 64) = 0;
  result = GameRoutine_f5f030();
  v3 = *(float*)(a1 + 64);
  v4 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v5 = *(_QWORD*)(v4 + 48);
  v6 = *(_QWORD*)(v4 + 56);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v3 > 0.0) {
      goto LABEL_5;
    }
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (v3 > 0.0) {
    LABEL_5:
      *(_BYTE*)(v7 + 2184) = 1;
      *(float*)(v7 + 2180) = v3 * 0.5;
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v7 + 2184) == 1) {
    *(_DWORD*)(v7 + 2180) = 0;
    *(_BYTE*)(v7 + 2184) = 0;
  }

LABEL_9:
  *(_DWORD*)(v7 + 2340) = v3 > 0.0;
  *(_BYTE*)(v7 + 2344) = 1;
  if (*(_BYTE*)(a1 + 68) != 0) {
    *(_BYTE*)(a1 + 68) = 0;
    GameData_2167620 = 0;
  }
  return result;
}

void DungeonController_f5e9c0(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  int v6;
  __int64 (***v7)();
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = (DungeonController_f5f480() & 1) != 0 &&
       (*(float*)(*(_QWORD*)GameData_212dc38[0] + 1148LL) >
            0x1.eb85200000000p-3f ||
        *(_BYTE*)(*(_QWORD*)GameData_212dc38[0] + 1144LL) == 1);
  GameRoutine_f5f030_alt1(a1, v2);
  v3 = *(_QWORD*)(GameData_21ec7c0 + 24);
  for (i = *(_QWORD*)(GameData_21ec7c0 + 32); v3 != i; v3 += 16) {
    v5 = *(_QWORD*)(*(_QWORD*)v3 + 24LL);
    if ((*(_BYTE*)(a1 + 40) & ((*(_BYTE*)(v5 + 384) & 4) != 0)) != 0) {
      v6 = 10;
    }
    else {
      v6 = 0;
    }
    if (*(_DWORD*)(v5 + 476) != v6) {
      v7 = *(__int64 (****)())(v5 + 8);
      *(_DWORD*)(v5 + 476) = v6;
      CharacterModel_cf67d0(v7);
    }
  }
  v8 = *(float*)(a1 + 64);
  v9 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) /
      0x1.3333340000000p-2f);
  if ((*(_BYTE*)(a1 + 40) & 1) == 0) {
    if (v8 <= 0x0.0p+0f) {
      if (v8 >= 0x0.0p+0f) {
        goto LABEL_27;
      }
      v8 = v8 + v9;
      if (v8 <= 0x0.0p+0f) {
        goto LABEL_27;
      }
    }
    else {
      v8 = v8 - v9;
      if (v8 >= 0x0.0p+0f) {
        goto LABEL_27;
      }
    }
    v8 = 0x0.0p+0f;
    goto LABEL_27;
  }
  if (v8 > 0x1.0000000000000p+0f) {
    v8 = v8 - v9;
    if (v8 >= 0x1.0000000000000p+0f) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  if (v8 < 0x1.0000000000000p+0f) {
    v8 = v8 + v9;
    if (v8 > 0x1.0000000000000p+0f) {
    LABEL_23:
      v8 = 0x1.0000000000000p+0f;
    }
  }
LABEL_27:
  *(float*)(a1 + 64) = v8;
  v10 = *(_QWORD*)(game_g_frame_clock + 13224);
  v11 = *(_QWORD*)(v10 + 48);
  v12 = *(_QWORD*)(v10 + 56);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v8 > 0x0.0p+0f) {
      LABEL_30:
        *(_BYTE*)(v13 + 2184) = 1;
        *(float*)(v13 + 2180) = v8 * 0x1.0000000000000p-1f;
        goto LABEL_34;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
      if (v8 > 0x0.0p+0f) {
        goto LABEL_30;
      }
    }
  }
  else {
    v13 = *(_QWORD*)(*(_QWORD*)(v11 + 8) + 232LL);
    if (v8 > 0x0.0p+0f) {
      goto LABEL_30;
    }
  }
  if (*(_BYTE*)(v13 + 2184) == 1) {
    *(_DWORD*)(v13 + 2180) = 0;
    *(_BYTE*)(v13 + 2184) = 0;
  }
LABEL_34:
  *(_DWORD*)(v13 + 2340) = v8 > 0x0.0p+0f;
  *(_BYTE*)(v13 + 2344) = 1;
  if (*(_BYTE*)(a1 + 68) != 0) {
    *(_BYTE*)(a1 + 68) = 0;
    GameData_2167620 = 0;
  }
}

__int64 DungeonController_f5ec20()
{
  __int64 v0;
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  int v21;
  struct {
    __int64 v22[2];
    char* v23;
  } v22_;

  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v22_.v22, *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v0 = *(_QWORD*)(GameData_21f3d10 + 48);
    v1 = *(_QWORD*)(GameData_21f3d10 + 56);
    v22_.v22[0] = *(_QWORD*)(GameData_21f3d10 + 40);
    v22_.v22[1] = v0;
    v22_.v23 = (char*)v1;
  }
  if ((v22_.v22[0] & 1) != 0) {
    v2 = v22_.v23;
  }
  else {
    v2 = (char*)v22_.v22 + 1;
  }
  v3 = game_HashString_alt1((__int64)v2);
  if (v3 == 0) {
    goto LABEL_35;
  }
  v4 = *(_QWORD*)(GameData_21c9d20 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9d20 + 112) == 0) {
    goto LABEL_35;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d20 + 88) + 8 * v7);
  if (v8 == nullptr) {
    goto LABEL_35;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    goto LABEL_35;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v14 = v9[1];
      if (v14 == v3) {
        if (v9[2] == v3) {
          goto LABEL_32;
        }
      }
      else if ((v14 & v6) != v7) {
        goto LABEL_35;
      }
      v9 = (_QWORD*)*v9;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      if (v9 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_35;
    }
  LABEL_21:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_35;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_21;
  }
LABEL_32:
  v15 = v9[3];
  if (v15 == 0) {
  LABEL_35:
    v11 = 0;
    v12 = 0;
    v13 = 0;
  LABEL_36:
    if ((v22_.v22[0] & 1) != 0) {
      goto LABEL_37;
    }
    return v12 | v11 | v13;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    v17 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v18 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v17 = 0;
    v16 = 0;
    v18 = 0;
  }
  v21 = game_de7380(v15, v16, v17, v18);
  v13 = v21 & 0xFFFFFF00;
  v12 = (unsigned __int8)v21;
  v11 = 0x100000000LL;
  if ((v22_.v22[0] & 1) == 0) {
    return v12 | v11 | v13;
  }
LABEL_37:
  if (v22_.v23 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v22_.v23);
  }
  return v12 | v11 | v13;
}

bool DungeonController_f5ee40()
{
  __int64 v0;
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  struct {
    __int64 v19[2];
    char* v20;
  } v19_;

  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v19_.v19, *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v0 = *(_QWORD*)(GameData_21f3d10 + 48);
    v1 = *(_QWORD*)(GameData_21f3d10 + 56);
    v19_.v19[0] = *(_QWORD*)(GameData_21f3d10 + 40);
    v19_.v19[1] = v0;
    v19_.v20 = (char*)v1;
  }
  if ((v19_.v19[0] & 1) != 0) {
    v2 = v19_.v20;
  }
  else {
    v2 = (char*)v19_.v19 + 1;
  }
  v3 = game_HashString_alt1((__int64)v2);
  if (v3 == 0) {
    goto LABEL_35;
  }
  v4 = *(_QWORD*)(GameData_21c9d20 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9d20 + 112) == 0) {
    goto LABEL_35;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d20 + 88) + 8 * v7);
  if (v8 == nullptr) {
    goto LABEL_35;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    goto LABEL_35;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_32;
        }
      }
      else if ((v12 & v6) != v7) {
        goto LABEL_35;
      }
      v9 = (_QWORD*)*v9;
      v11 = false;
      if (v9 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_35;
    }
  LABEL_21:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_35;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_21;
  }
LABEL_32:
  v13 = v9[3];
  if (v13 != 0) {
    if (game_GameModeData_instance_ != 0) {
      v14 = *(_BYTE*)(game_GameModeData_instance_ + 15);
      v15 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v16 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v15 = 0;
      v14 = 0;
      v16 = 0;
    }
    v11 = game_de7380(v13, v14, v15, v16) == 0;
    if ((v19_.v19[0] & 1) != 0) {
      goto LABEL_37;
    }
    return v11;
  }
LABEL_35:
  v11 = false;
LABEL_36:
  if ((v19_.v19[0] & 1) != 0) {
  LABEL_37:
    if (v19_.v20 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v19_.v20);
    }
  }
  return v11;
}

__int64 DungeonController_f5f480()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;

  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 8) == 0) {
    v0 = GameRoutine_821090(17);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v0);
      if (result == 0) {
        return result;
      }
      if (*(int*)(result + 32) >= 1 &&
          ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4) == 0 ||
           game_GameModeData_instance_ != 0 &&
               *(_BYTE*)(game_GameModeData_instance_ + 15) == 1) &&
          (GameRoutine_822320(1) & 1) != 0) {
        v23 = 16;
        result = game_UnitPool_GetFirst(&v23);
        if (result == 0) {
          return result;
        }
        v2 = *(_QWORD*)(result + 432);
        v3 = result;
        if (v2 == 0) {
          v2 = *(_QWORD*)(result + 440);
          if (v2 != 0) {
            v4 = *(unsigned __int8*)(v2 + 16);
            if (v4 <= 8) {
              v22 = v4 - 3;
              while (1) {
                if (v22 == 0) {
                  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v2 != 0) {
                    break;
                  }
                }
                if (++v22 == 6) {
                  goto LABEL_13;
                }
              }
            }
            else {
            LABEL_13:
              v2 = 0;
            }
          }
        }
        v5 = GameData_212c890[0];
      LABEL_18:
        while (2) {
          v6 = v2;
          v7 = game_HashString(&GameData_1ac302b);
          if (v7 == 0) {
            goto LABEL_42;
          }
          v8 = *(_QWORD*)(*v5 + 96);
          if (v8 == 0 || *(_QWORD*)(*v5 + 112) == 0) {
            goto LABEL_42;
          }
          v10 = v8 - 1;
          if ((v8 & (v8 - 1)) != 0) {
            v11 = v7;
            if (v7 >= v8) {
              v11 = v7 % v8;
            }
          }
          else {
            v11 = v10 & v7;
          }
          v12 = *(_QWORD**)(*(_QWORD*)(*v5 + 88) + 8 * v11);
          if (v12 == nullptr || (v13 = (_QWORD*)*v12) == nullptr) {
          LABEL_42:
            v15 = 0;
            goto LABEL_43;
          }
          if ((v8 & v10) == 0) {
            while (1) {
              v16 = v13[1];
              if (v16 == v7) {
                if (v13[2] == v7) {
                  goto LABEL_55;
                }
              }
              else if ((v16 & v10) != v11) {
                goto LABEL_42;
              }
              v13 = (_QWORD*)*v13;
              v15 = 0;
              if (v13 == nullptr) {
                goto LABEL_43;
              }
            }
          }
          while (1) {
            v14 = v13[1];
            if (v14 == v7) {
              break;
            }
            if (v14 >= v8) {
              v14 %= v8;
            }
            if (v14 != v11) {
              goto LABEL_42;
            }
          LABEL_32:
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_42;
            }
          }
          if (v13[2] != v7) {
            goto LABEL_32;
          }
        LABEL_55:
          v15 = v13[3];
        LABEL_43:
          v17 = *(_QWORD*)(v3 + 392);
          result = v17 == v15;
          if (v17 != v15 && v6 != 0) {
            v2 = *(_QWORD*)(v6 + 432);
            v3 = v6;
            if (v2 == 0) {
              v19 = *(_QWORD*)(v6 + 440);
              v3 = v6;
              if (v19 != 0) {
                v20 = *(unsigned __int8*)(v19 + 16);
                v2 = 0;
                v3 = v6;
                if (v20 <= 8) {
                  v21 = v20 - 3;
                  while (1) {
                    if (v21 == 0) {
                      v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                      556096LL);
                      if (v2 != 0) {
                        break;
                      }
                    }
                    if (++v21 == 6) {
                      v2 = 0;
                      v3 = v6;
                      goto LABEL_18;
                    }
                  }
                  v3 = v6;
                }
              }
            }
            continue;
          }
          return result;
        }
      }
    }
  }
  return 0;
}

bool DungeonController_f5f760()
{
  __int64 v0;
  _QWORD* v2;
  _QWORD* v3;
  int v4;
  int v5;
  _DWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  struct {
    _QWORD* v18;
    _QWORD* v19;
  } v18_;
  int v20;

  if (DungeonController_f5ee40()) {
    return false;
  }
  v18_.v19 = &GameData_1a9d987;
  v18_.v18 = (_QWORD*)game_HashString_alt1((__int64)&GameData_1a9d987);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v18_.v18);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      return false;
    }
  }
  if ((unsigned __int64)DungeonController_f5ec20() >> 32 == 0) {
    return false;
  }
  game_gameui_Util_GetCorpsStatusUnitList((void*)((__int64*)&v18_.v18),
                                          *GameData_212ea58 == 0, 0, -1);
  v2 = v18_.v18;
  v3 = v18_.v19;
  if (v18_.v18 != v18_.v19) {
    v4 = 0;
    v5 = 0;
    v6 = (_DWORD*)game_g_shared_system_skills_ptr;
    do {
      v7 = *v2;
      v8 = (_QWORD*)(*v2 + 1744LL);
      v20 = *v6 & 0xFFF;
      if ((game_HasSkill_alt1(v8, (unsigned int*)&v20) & 1) == 0 ||
          ((v9 = *(_QWORD*)(v7 + 440)) == 0 ? (v10 = 9)
                                            : (v10 = *(_BYTE*)(v9 + 16)),
           ((1 << v10) & 0xF1) == 0)) {
        ++v5;
        v4 += *(unsigned __int8*)(v7 + 498);
      }
      ++v2;
    } while (v2 != v3);
    if (v5 > 0) {
      v4 /= v5;
    }
    v11 = (__int64)v18_.v18;
    if (v18_.v18 == nullptr) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v4 = 0;
  v11 = (__int64)v18_.v18;
  if (v18_.v18 != nullptr) {
  LABEL_20:
    v18_.v19 = (_QWORD*)v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
  }
LABEL_23:
  v13 = DungeonController_f5ec20();
  if (HIDWORD(v13) == 0) {
    GameRoutine_8123d0_alt1();
  }
  v14 = v13;
  v18_.v19 = &GameData_1ad725f;
  v15 = game_HashString_alt1((__int64)&GameData_1ad725f);
  v16 = game_GameModeData_instance_;
  v18_.v18 = (_QWORD*)v15;
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v18_.v18);
    if (v17 != 0) {
      v16 = *(_DWORD*)(v17 + 32);
    }
    else {
      v16 = 0;
    }
  }
  return v4 >= v16 + v14;
}

__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  __int64* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2 = *(__int64**)(GameData_21ec7c0 + 24);
  v3 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v2 == v3) {
    v5 = 0;
  }
  else {
    v4 = nullptr;
    v5 = 0;
    do {
      v6 = *(_QWORD*)(*v2 + 56);
      if (*(_DWORD*)(*v2 + 1112) == 1 && v6 != 0 && *(_BYTE*)(v6 + 36) == 1) {
        v8 = *(_QWORD*)(v6 + 24);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v9 = *(_QWORD*)(v8 + 8);
          std___1___shared_weak_count___release_weak_alt2(v8);
          if (v9 != -1) {
            v10 = *(_QWORD*)(v6 + 72);
            if ((v10 & 0x100000000LL) == 0) {
              LODWORD(v10) = 0;
            }
            if ((_DWORD)v10 == 4 ||
                (_DWORD)v10 == 3 &&
                    (v11 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 24LL)) != 0 &&
                    *(_BYTE*)(v11 + 33) == 1) {
              v12 = *v2;
              v13 = a1[2];
              if ((unsigned __int64)v4 < v13) {
                *(_QWORD*)v4 = v12;
                v4 += 8;
              }
              else {
                v14 = &v4[-v5];
                v15 = (__int64)&v4[-v5] >> 3;
                v16 = v15 + 1;
                if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
                  *a1 = v5;
                  GameRoutine_da89a0_alt1();
                }
                v17 = v13 - v5;
                if (v17 >> 2 > v16) {
                  v16 = v17 >> 2;
                }
                if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v18 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v18 = v16;
                }
                if (v18 != 0) {
                  if (v18 >> 61 != 0) {
                    *a1 = v5;
                    GameRoutine_60a210_alt1();
                  }
                  v19 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
                }
                else {
                  v19 = 0;
                }
                v20 = v19 + 8 * v18;
                v21 = (unsigned __int64)&v4[-v5];
                v22 = (__int64)&v14[v19 + -8 * v15];
                *(_QWORD*)&v14[v19] = v12;
                v4 = &v14[v19 + 8];
                memcpy_alt1(v22, v5, v21);
                a1[1] = (__int64)v4;
                a1[2] = v20;
                if (v5 != 0) {
                  v23 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v23 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v5);
                }
                v5 = v22;
              }
              a1[1] = (__int64)v4;
            }
          }
        }
      }
      v2 += 2;
    } while (v2 != v3);
  }
  *a1 = v5;
}

__int64

game_hub_DungeonController_GetTreasureCounterNow_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = *(_QWORD*)(v2 + 736);
  if (*(_DWORD*)(v2 + 216) == 1 && result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
    if ((result & 1) == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64

game_hub_DungeonController_GetTreasureCounterMax_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_DWORD*)(v2 + 216);
  v5 = *(_QWORD*)(v2 + 736);
  if (v4 == 1 && v5 != 0) {
    ++**(_DWORD**)(result + 8);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
