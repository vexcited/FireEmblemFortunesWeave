#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_6e31a0(void);
__int64 GameRoutine_7f8610(_QWORD);
__int64 GameRoutine_8ea9a0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 game_menu_UnitGridSelectMenu_ApplyChangeUnit(_QWORD);
extern __int64 (*GameData_1fb83f8[])();
extern __int64 (*game_facility_anonymous_ObeliskUnitMergeMenuItem_vtable[])();
extern __int64 GameData_1fb83d0;
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
__int64 ProcObeliskUnitMergeMenu_Unknown96(__int64 a1);
_QWORD* ProcObeliskUnitMergeMenu_Unknown128(__int64 a1);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
void __attribute__((noreturn)) String_60a230(void);
__int64
game_facility_anonymous_ProcObeliskUnitMergeMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int8* a2);

__int64 ProcObeliskUnitMergeMenu_Unknown96(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  game_menu_UnitGridSelectMenu_ApplyChangeUnit(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1);
  *(_BYTE*)(a1 + 1168) = 0;
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb83d0, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      *(_BYTE*)(result + 96) = 0;
      v4 = result;
      result = GameRoutine_8ea9a0(*(_QWORD*)(game_GameModeData_instance_ + 176),
                                  *(_QWORD*)(v3 + 392));
      v5 = *(_QWORD*)result;
      v6 = *(_QWORD*)(result + 8);
      while (v5 != v6) {
        result = *(_QWORD*)(v4 + 88);
        if (*(_QWORD*)(result + 392) ==
            *(_QWORD*)(*(_QWORD*)(v5 + 8) + 392LL)) {
          result = GameRoutine_6e31a0();
          if ((result & 1) != 0) {
            *(_BYTE*)(v4 + 96) = 1;
            return result;
          }
        }
        v5 += 16;
      }
    }
  }
  return result;
}

_QWORD* ProcObeliskUnitMergeMenu_Unknown128(__int64 a1)
{
  _QWORD* result;
  __int64 v2;
  _QWORD* v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;

  LODWORD(v19[0]) = 145;
  result = (_QWORD*)game_UnitPool_GetFirst(v19);
  if (result != nullptr) {
    v2 = result[54];
    v3 = result;
    if (v2 == 0) {
      v2 = result[55];
      if (v2 != 0) {
        v4 = *(unsigned __int8*)(v2 + 16);
        if (v4 <= 8) {
          while (1) {
            v16 = v4 + 1;
            if (((2 << v4) & 0x90) != 0) {
              v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v4 + 1) + 556000);
              if (v2 != 0) {
                break;
              }
            }
            v4 = v16;
            if (v16 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v2 = 0;
        }
      }
    }
    v17 = GameData_2131bb8[0] + 16;
  LABEL_8:
    while (1) {
      v5 = (_QWORD*)v2;
      v21 = 0;
      v19[0] = GameData_1fb83f8;
      v19[1] = v3;
      v19[2] = &v21;
      v20 = v19;
      GameRoutine_7f8610(v19);
      result = v20;
      if (v20 == v19) {
        break;
      }
      if (v20 != nullptr) {
        v6 = 40;
      LABEL_12:
        result = (_QWORD*)(*(__int64 (**)(__int64))(*v20 + v6))((__int64)v20);
      }
      if ((v21 & 1) == 0) {
        result = (_QWORD*)GameRoutine_8ea9a0(
            *(_QWORD*)(game_GameModeData_instance_ + 176), v3[49]);
        if (result[1] != *result) {
          v7 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
          *(_WORD*)(v7 + 16) = 0;
          *(_DWORD*)(v7 + 40) = 0;
          *(_QWORD*)(v7 + 48) = 0;
          *(_QWORD*)(v7 + 56) = 0;
          *(_QWORD*)(v7 + 64) = 0;
          *(_QWORD*)(v7 + 72) = 0;
          *(_QWORD*)(v7 + 88) = v3;
          *(_WORD*)(v7 + 80) = 257;
          *(_BYTE*)(v7 + 82) = 1;
          *(_QWORD*)v7 = v17;
          *(_QWORD*)(v7 + 8) = 0;
          v8 = game_Unit_IsUnlocked(v3);
          v9 = *(_QWORD*)(v7 + 88);
          *(_BYTE*)(v7 + 96) = 0;
          *(_BYTE*)(v7 + 82) = v8 & 1;
          *(_QWORD*)v7 =
              game_facility_anonymous_ObeliskUnitMergeMenuItem_vtable;
          v10 = (__int64*)GameRoutine_8ea9a0(
              *(_QWORD*)(game_GameModeData_instance_ + 176),
              *(_QWORD*)(v9 + 392));
          v11 = *v10;
          v12 = v10[1];
          while (v11 != v12) {
            if (*(_QWORD*)(*(_QWORD*)(v7 + 88) + 392LL) ==
                    *(_QWORD*)(*(_QWORD*)(v11 + 8) + 392LL) &&
                (GameRoutine_6e31a0() & 1) != 0) {
              *(_BYTE*)(v7 + 96) = 1;
              break;
            }
            v11 += 16;
          }
          result = (_QWORD*)GameRoutine_16e0c00(a1, v7);
        }
      }
      if (v5 == nullptr) {
        return result;
      }
      v2 = v5[54];
      v3 = v5;
      if (v2 == 0) {
        v13 = v5[55];
        v3 = v5;
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          v2 = 0;
          v3 = v5;
          if (v14 <= 8) {
            while (1) {
              v15 = v14 + 1;
              if (((2 << v14) & 0x90) != 0) {
                v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v14 + 1) + 556000);
                if (v2 != 0) {
                  break;
                }
              }
              ++v14;
              if (v15 == 9) {
                v2 = 0;
                v3 = v5;
                goto LABEL_8;
              }
            }
            v3 = v5;
          }
        }
      }
    }
    v6 = 32;
    goto LABEL_12;
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskUnitMergeMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;

  if ((**(_BYTE**)(result + 16) & 1) != 0) {
    return result;
  }
  v2 = result;
  v3 = (__int64)*(&game_g_hero_ids + *a2);
  v4 = strlen(v3);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4, v5, v6, v7, v8);
  }
  v9 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v4 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v21 = v9;
    v22 = v10;
    v20 = v11 | 1;
  }
  else {
    LOBYTE(v20) = 2 * v4;
    v10 = (char*)&v20 + 1;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  memmove(v10, v3, v9);
LABEL_11:
  v10[v9] = 0;
  v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 392LL) + 8LL);
  result = strlen(v12);
  v13 = v21;
  if ((v20 & 1) == 0) {
    v13 = (unsigned __int8)v20 >> 1;
  }
  if (result == v13) {
    v14 = result;
    if (result == -1) {
      String_60a230();
    }
    v15 = v22;
    if ((v20 & 1) != 0) {
      v16 = v22;
    }
    else {
      v16 = (char*)&v20 + 1;
    }
    result = memcmp(v16, v12, v14);
    if ((v20 & 1) != 0 && v15 != nullptr) {
      v17 = result;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
      result = v17;
    }
    if ((_DWORD)result == 0) {
      **(_BYTE**)(v2 + 16) = 1;
    }
  }
  else if ((v20 & 1) != 0 && v22 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  return result;
}

#pragma GCC visibility pop
