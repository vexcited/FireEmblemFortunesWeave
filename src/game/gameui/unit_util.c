#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15748c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetUnknown6(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a8718c;
extern _UNKNOWN GameData_1a8b170;
extern _UNKNOWN GameData_1aef152;
extern _UNKNOWN GameData_2259520;
extern __int64 (*GameData_205bff8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_2259500;
extern __int64 GameData_2259508;
extern __int64 GameData_2259510;
extern __int64 GameData_2259518;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_15e0b90(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
bool game_gameui_UnitUtil_CheckDangerCritical(__int64 a1, __int64 a2);
__int64 UnitUtil_15df460(__int64 result);
__int64 UnitUtil_15e0120(__int64 a1);
__int64 UnitUtil_15e09d0(__int64 a1);
__int64 GameConst_7f8cc0(_QWORD, _QWORD);
__int64 GameConst_7f8fd0(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 Impl_71f220(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_1f93458[])();
extern __int64 (*GameData_1f934e8[])();
extern __int64 (*game_UnitEquipScope_vtable[])();
__int64 UnitUtil_15e04f0(__int64 result, __int64 a2);
__int64
game_gameui_UnitUtil_CheckDangerCritical_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2);

bool game_gameui_UnitUtil_CheckDangerCritical(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v4;
  float v5;
  float v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;
  __int64 v16;

  v2 = a2;
  v16 = a1;
  if (a2 != 0) {
    LOBYTE(v13[0]) = 5;
    v4 = game_Unit_GetParam(a2, v13, 1) + *(__int16*)(a2 + 640);
    if (*(_WORD*)(v2 + 1952) != 0) {
      v4 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                   8LL * *(unsigned __int16*)(v2 + 1952)) +
                        122LL);
    }
    v5 = *(float*)(v2 + 704);
    if (v5 <= 1.0f) {
      v6 = v5 * (float)(v4 + *(__int16*)(v2 + 700));
    }
    else {
      v6 = (float)*(__int16*)(v2 + 700) + (float)((float)v4 * v5);
    }
    v7 = (int)v6;
    if ((int)v6 >= 999) {
      v7 = 999;
    }
    LODWORD(v2) =
        (v7 + *(__int16*)(v2 + 702)) & ~((v7 + *(__int16*)(v2 + 702)) >> 31);
  }
  v15 = game_Unit_GetUnknown6(a1, 1);
  v13[0] = GameData_205bff8;
  v13[1] = &v16;
  v14 = v13;
  v13[2] = &v15;
  game_UnitItemList_EachItem(a1 + 828, v13);
  if (v14 == v13) {
    v8 = 32;
    goto LABEL_14;
  }
  if (v14 != nullptr) {
    v8 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v14 + v8))((__int64)v14);
  }
  v9 = v15;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259520,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2259520) != 0) {
    GameData_2259518 = (__int64)&GameData_1a8b170;
    GameData_2259510 = game_HashString(&GameData_1a8b170);
    __cxa_guard_release(&GameData_2259520);
  }
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_2259510)) !=
          0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 100;
  }
  return v9 - (int)v2 >= v11;
}

__int64 UnitUtil_15df460(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 80) = 0;
  v1 = GameData_2259500;
  if (GameData_2259500 >= (unsigned __int64)GameData_2259508) {
    v3 = game_menu_UnitGridSelectMenu_listeners_;
    v4 = GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_;
    v5 = (GameData_2259500 - game_menu_UnitGridSelectMenu_listeners_) >> 3;
    v6 = v5 + 1;
    if ((unsigned __int64)(v5 + 1) >> 61 != 0) {
      GameRoutine_15e0b90();
    }
    v7 = GameData_2259508 - game_menu_UnitGridSelectMenu_listeners_;
    v8 = fw_memory_g_heap_manager_ptr;
    if ((GameData_2259508 - game_menu_UnitGridSelectMenu_listeners_) >> 2 >
        v6) {
      v6 = v7 >> 2;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
      v9 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v10 = result;
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v9, 16, 0);
      result = v10;
    }
    else {
      v11 = 0;
    }
    v12 = v11 + 8 * v9;
    v13 = v11 + v4 - 8 * v5;
    *(_QWORD*)(v11 + v4) = result;
    v2 = v11 + v4 + 8;
    result = memcpy(v13, v3, v4);
    game_menu_UnitGridSelectMenu_listeners_ = v13;
    GameData_2259500 = v2;
    GameData_2259508 = v12;
    if (v3 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v14, v3);
    }
  }
  else {
    *(_QWORD*)GameData_2259500 = result;
    v2 = v1 + 8;
  }
  GameData_2259500 = v2;
  return result;
}

__int64 UnitUtil_15e0120(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 result;
  int v7;
  __int64 v8;
  void* v9;

  *(_BYTE*)a1 = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 4) = 1;
  *(_QWORD*)(a1 + 8) = 1;
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    *(_DWORD*)(a1 + 4) = *(_DWORD*)(game_GameModeData_instance_ + 60);
    LODWORD(v2) = *(_DWORD*)(v2 + 64);
  }
  else {
    *(_DWORD*)(a1 + 4) = 0;
  }
  *(_DWORD*)(a1 + 8) = v2;
  v9 = &GameData_1a8718c;
  v3 = game_HashString(&GameData_1a8718c);
  v4 = game_GameModeData_instance_;
  v8 = v3;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v8);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  *(_DWORD*)(a1 + 12) = v4;
  v9 = &GameData_1aef152;
  result = game_HashString(&GameData_1aef152);
  v7 = game_GameModeData_instance_;
  v8 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v8);
    if (result != 0) {
      v7 = *(_DWORD*)(result + 32);
    }
    else {
      v7 = 0;
    }
  }
  *(_DWORD*)(a1 + 16) = v7;
  return result;
}

__int64 UnitUtil_15e04f0(__int64 result, __int64 a2)
{
  __int64 v2;
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
  __int64 (**v14)();
  void* v15;
  __int64 (***v16)();

  v2 = result;
  if (*(_BYTE*)result == 1) {
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_15;
    }
    v4 = *(unsigned int*)(result + 4);
    v14 = GameData_1f93458;
    v15 = (void*)game_GameModeData_instance_;
    v16 = &v14;
    *(_DWORD*)(game_GameModeData_instance_ + 60) = v4;
    GameConst_7f8cc0(v4, &v14);
    if (v16 == &v14) {
      v5 = 4;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_8;
      }
      v5 = 5;
    }
    (*v16)[v5]();
  LABEL_8:
    Impl_71f220(v3);
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(unsigned int*)(v2 + 8);
      v14 = GameData_1f934e8;
      v15 = (void*)game_GameModeData_instance_;
      v16 = &v14;
      *(_DWORD*)(game_GameModeData_instance_ + 64) = v7;
      GameConst_7f8fd0(v7, &v14);
      if (v16 == &v14) {
        v8 = 4;
      }
      else {
        if (v16 == nullptr) {
        LABEL_14:
          Impl_71f220(v6);
          goto LABEL_15;
        }
        v8 = 5;
      }
      (*v16)[v8]();
      goto LABEL_14;
    }
  LABEL_15:
    v15 = &GameData_1a8718c;
    v9 = game_HashString_alt1(&GameData_1a8718c, a2);
    v10 = *(unsigned int*)(v2 + 12);
    v14 = (__int64 (**)())v9;
    game_VariableManager_SetFlag(&v14, v10);
    v15 = &GameData_1aef152;
    v12 = game_HashString_alt1(&GameData_1aef152, v11);
    v13 = *(unsigned int*)(v2 + 16);
    v14 = (__int64 (**)())v12;
    result = game_VariableManager_SetFlag(&v14, v13);
  }
  *(_BYTE*)v2 = 0;
  return result;
}

__int64 UnitUtil_15e09d0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  bool v9;
  __int64 v10;
  __int64* v11;

  v2 = GameRoutine_820d50(9);
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
    if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
      return 0;
    }
  }
  v5 = *(_WORD*)(a1 + 828) != 0 && (*(_BYTE*)(a1 + 831) & 0x20) == 0;
  if (!v5 && (*(_WORD*)(a1 + 836) == 0 || (*(_BYTE*)(a1 + 839) & 0x20) != 0) &&
      (*(_WORD*)(a1 + 844) == 0 || (*(_BYTE*)(a1 + 847) & 0x20) != 0) &&
      (*(_WORD*)(a1 + 852) == 0 || (*(_BYTE*)(a1 + 855) & 0x20) != 0) &&
      (*(_WORD*)(a1 + 860) == 0 || (*(_BYTE*)(a1 + 863) & 0x20) != 0) &&
      (*(_WORD*)(a1 + 868) == 0 || (*(_BYTE*)(a1 + 871) & 0x20) != 0)) {
    v6 = game_Unit_GetJob(a1);
    if (*(char*)(v6 + 403) < 0 && *(char*)(v6 + 404) < 0) {
      v10 = 0;
      v11 = GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(a1 + v10 + 876) != 0 &&
            (*(_BYTE*)(a1 + v10 + 879) & 0x20) == 0) {
          if ((unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v11 + 64) +
                                               8LL *
                                                   *(unsigned __int16*)(a1 +
                                                                        v10 +
                                                                        876)) +
                                    72LL) -
                  5 >
              1) {
            return 1;
          }
          GameRoutine_15748c0(a1, a1 + v10 + 876, 0);
        }
        v10 += 8;
        result = 0;
        if (v10 == 192) {
          return result;
        }
      }
    }
    v7 = 0;
    v8 = GameData_212c878[0];
    while (1) {
      v9 = *(_WORD*)(a1 + v7 + 876) != 0 &&
           (*(_BYTE*)(a1 + v7 + 879) & 0x20) == 0;
      if (v9 &&
          ((unsigned int)*(
               unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8LL * *(unsigned __int16*)(a1 + v7 +
                                                                       876)) +
                                 72LL) -
                   5 >
               1 ||
           (GameRoutine_15748c0(a1, a1 + v7 + 876, 0) & 0x100000000LL) != 0)) {
        break;
      }
      v7 += 8;
      result = 0;
      if (v7 == 192) {
        return result;
      }
    }
  }
  return 1;
}

__int64

game_gameui_UnitUtil_CheckDangerCritical_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8* v5;
  unsigned __int64 v6;
  __int64 v7;
  bool v8;
  bool v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int* v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 (**v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*((_BYTE*)a2 + 3) & 0x21) == 0 && *a2 != 0) {
    v5 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2);
    if ((v5[336] & 8) == 0) {
      v6 = v5[72];
      v7 = (1LL << v5[73]) & 0x7DC;
      v8 = v6 > 7 || v7 == 0;
      v9 = !v8 || ((1LL << v6) & 0x20FF) == 0;
      if (!v9 && (unsigned int)v6 <= 7) {
        v24 = v2;
        v25 = v3;
        v11 = result;
        v12 = **(_QWORD**)(result + 8);
        v22 = 0;
        v23 = 0;
        v20 = game_UnitEquipScope_vtable;
        v21 = 0;
        if (v12 != 0) {
          v13 = *(_QWORD*)a2;
          v21 = v12;
          v22 = v13;
          v23 = *(_QWORD*)(v12 + 2208);
          *(_QWORD*)(v12 + 2208) = &v20;
          v14 = *(_DWORD*)(v12 + 416);
          if ((v14 & 0x10000000) == 0) {
            v15 = v12;
            *(_DWORD*)(v12 + 416) = v14 | 0x10000000;
            GameRoutine_6c51e0(v12);
            GameRoutine_6c6da0(v15);
            GameRoutine_6c6ec0(v15);
            v12 = v15;
            *(_DWORD*)(v15 + 416) &= ~0x10000000u;
          }
        }
        result = game_Unit_GetUnknown6(v12, 1);
        v16 = *(int**)(v11 + 16);
        v17 = *v16;
        if (*v16 <= (int)result) {
          v17 = result;
        }
        *v16 = v17;
        v20 = game_UnitEquipScope_vtable;
        v18 = v21;
        if (v21 != 0 && *(__int64 (****)())(v21 + 2208) == &v20) {
          *(_QWORD*)(v21 + 2208) = v23;
          v19 = *(_DWORD*)(v18 + 416);
          if ((v19 & 0x10000000) == 0) {
            *(_DWORD*)(v18 + 416) = v19 | 0x10000000;
            GameRoutine_6c51e0(v18);
            GameRoutine_6c6da0(v18);
            result = GameRoutine_6c6ec0(v18);
            *(_DWORD*)(v18 + 416) &= ~0x10000000u;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
