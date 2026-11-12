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
__int64 UnitUtil_15e04f0_alt1(__int64 result,
                              __int64 a2) __asm__("UnitUtil_15e04f0");
__int64
game_gameui_UnitUtil_CheckDangerCritical_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2);
_QWORD* GameRoutine_145f5d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_15e0e30(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8, __int64 result, __int64);
__int64 GameConst_7f8cc0_alt1(int, __int64) __asm__("GameConst_7f8cc0");
__int64 GameConst_7f8fd0_alt1(int, __int64) __asm__("GameConst_7f8fd0");
__int64 GameRoutine_15df6c0(__int64, __int64, char, __int64, char);
__int64 GameRoutine_960100();
__int64 Impl_71f220_alt1(__int64 result) __asm__("Impl_71f220");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 game_UnitMastery_GetMaxJobRank(__int64, __int64);
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gameui_UnitUtil_GetNextDefault(__int64, __int64, char);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_205c078[])();
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_67afd0();
__int64 UnitUtil_15df590(_QWORD* a1, __int64 a2, __int64 a3);
__int64 game_gameui_UnitUtil_GetNext(__int64 a1, char a2, _QWORD* a3, char a4);
__int64 UnitUtil_15e0200(__int64 a1);
__int64 UnitUtil_15e0640(__int64 a1, __int64 a2, int a3, int a4, char a5);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_Unit_GetUnknown6_alt1(__int64,
                                   char) __asm__("game_Unit_GetUnknown6");
__int64 UnitUtil_15e04f0(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

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

__int64 UnitUtil_15df590(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v10_.v11 = v10_.v10;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 24LL))(v4, v10_.v10);
    }
    else {
      v10_.v11 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v10_.v11 = nullptr;
  }
  GameRoutine_15e0e30(v10_.v10, a1);
  if (v10_.v11 == v10_.v10) {
    v6 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
LABEL_11:
  v7 = *(_QWORD*)(a3 + 32);
  if (v7 != 0) {
    if (v7 == a3) {
      v10_.v11 = v10_.v10;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v10_.v10);
    }
    else {
      v10_.v11 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v10_.v11 = nullptr;
  }
  GameRoutine_15e0e30(v10_.v10, a1 + 6);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
}

__int64 game_gameui_UnitUtil_GetNext(__int64 a1, char a2, _QWORD* a3, char a4)
{
  _QWORD* v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    _BYTE v15[32];
    _BYTE* v16;
  } v15_;
  struct {
    _BYTE v17[32];
    _BYTE* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v5 = (_QWORD*)a3[4];
  if (v5 == nullptr) {
    v19_.v19[0] = GameData_205c078;
    v19_.v20 = v19_.v19;
    GameRoutine_145f5d0(v19_.v19, a3);
    if (v19_.v20 == v19_.v19) {
      v9 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
      LABEL_7:
        v5 = (_QWORD*)a3[4];
        goto LABEL_8;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v9))((__int64)v19_.v20);
    goto LABEL_7;
  }
LABEL_8:
  v10 = *(_QWORD*)(GameData_2259500 - 8);
  if (v10 != 0) {
    if (v5 != nullptr) {
      if (v5 == a3) {
        v17_.v18 = v17_.v17;
        (*(void (**)(_QWORD*, _BYTE*))(*v5 + 24LL))(v5, v17_.v17);
      }
      else {
        v17_.v18 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
      }
    }
    else {
      v17_.v18 = nullptr;
    }
    v11 = GameRoutine_15df6c0(v10, a1, a2 & 1, (__int64)v17_.v17, a4 & 1);
    v12 = v17_.v18;
    if (v17_.v18 != v17_.v17) {
      goto LABEL_18;
    }
  LABEL_23:
    v13 = 32;
    goto LABEL_24;
  }
  if (v5 != nullptr) {
    if (v5 == a3) {
      v15_.v16 = v15_.v15;
      (*(void (**)(_QWORD*, _BYTE*))(*v5 + 24LL))(v5, v15_.v15);
    }
    else {
      v15_.v16 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
    }
  }
  else {
    v15_.v16 = nullptr;
  }
  v11 = game_gameui_UnitUtil_GetNextDefault(a1, (__int64)v15_.v15, a4 & 1);
  v12 = v15_.v16;
  if (v15_.v16 == v15_.v15) {
    goto LABEL_23;
  }
LABEL_18:
  if (v12 != nullptr) {
    v13 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  }
  return v11;
}

__int64 UnitUtil_15e0120(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 result;
  int v7;
  struct {
    __int64 v8;
    void* v9;
  } v8_;

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
  v8_.v9 = &GameData_1a8718c;
  v3 = game_HashString_alt2((__int64)&GameData_1a8718c);
  v4 = game_GameModeData_instance_;
  v8_.v8 = v3;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v8_.v8);
    if (v5 != 0) {
      v4 = *(_DWORD*)(v5 + 32);
    }
    else {
      v4 = 0;
    }
  }
  *(_DWORD*)(a1 + 12) = v4;
  v8_.v9 = &GameData_1aef152;
  result = game_HashString_alt2((__int64)&GameData_1aef152);
  v7 = game_GameModeData_instance_;
  v8_.v8 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v8_.v8);
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

__int64 UnitUtil_15e0200(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 (**v8)();
  int v9;
  __int64 (**v10)();
  int v11;
  __int64 v12;
  __int64 (**v13)();
  int v14;
  __int64 v15;
  __int64 (**v16)();
  int v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 (**v24)();
    void* v25;
    char gap16_[16];
    unsigned __int64* v26;
  } v24_;

  if (*(_BYTE*)a1 != 1) {
    goto LABEL_16;
  }
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_15;
  }
  v3 = *(_DWORD*)(a1 + 4);
  v24_.v24 = GameData_1f93458;
  v24_.v25 = (void*)game_GameModeData_instance_;
  v24_.v26 = (unsigned __int64*)&v24_.v24;
  *(_DWORD*)(game_GameModeData_instance_ + 60) = v3;
  GameConst_7f8cc0_alt1(v3, (__int64)&v24_.v24);
  if (v24_.v26 == (unsigned __int64*)&v24_.v24) {
    v4 = 32;
  }
  else {
    if (v24_.v26 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v24_.v26 + v4))((__int64)v24_.v26);
LABEL_8:
  Impl_71f220_alt1(v2);
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_DWORD*)(a1 + 8);
    v24_.v24 = GameData_1f934e8;
    v24_.v25 = (void*)game_GameModeData_instance_;
    v24_.v26 = (unsigned __int64*)&v24_.v24;
    *(_DWORD*)(game_GameModeData_instance_ + 64) = v6;
    GameConst_7f8fd0_alt1(v6, (__int64)&v24_.v24);
    if (v24_.v26 == (unsigned __int64*)&v24_.v24) {
      v7 = 32;
    }
    else {
      if (v24_.v26 == nullptr) {
      LABEL_14:
        Impl_71f220_alt1(v5);
        goto LABEL_15;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v24_.v26 + v7))((__int64)v24_.v26);
    goto LABEL_14;
  }
LABEL_15:
  v24_.v25 = &GameData_1a8718c;
  v8 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a8718c);
  v9 = *(_DWORD*)(a1 + 12);
  v24_.v24 = v8;
  game_VariableManager_SetFlag_alt1((__int64)&v24_.v24, v9);
  v24_.v25 = &GameData_1aef152;
  v10 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1aef152);
  v11 = *(_DWORD*)(a1 + 16);
  v24_.v24 = v10;
  game_VariableManager_SetFlag_alt1((__int64)&v24_.v24, v11);
LABEL_16:
  *(_BYTE*)a1 = 0;
  v12 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    *(_DWORD*)(a1 + 4) = *(_DWORD*)(game_GameModeData_instance_ + 60);
    LODWORD(v12) = *(_DWORD*)(v12 + 64);
  }
  else {
    *(_DWORD*)(a1 + 4) = 0;
  }
  *(_DWORD*)(a1 + 8) = v12;
  v24_.v25 = &GameData_1a8718c;
  v13 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a8718c);
  v14 = game_GameModeData_instance_;
  v24_.v24 = v13;
  if (game_GameModeData_instance_ != 0) {
    v15 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v24_.v24);
    if (v15 != 0) {
      v14 = *(_DWORD*)(v15 + 32);
    }
    else {
      v14 = 0;
    }
  }
  *(_DWORD*)(a1 + 12) = v14;
  v24_.v25 = &GameData_1aef152;
  v16 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1aef152);
  v17 = game_GameModeData_instance_;
  v24_.v24 = v16;
  if (game_GameModeData_instance_ != 0) {
    v18 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v24_.v24);
    if (v18 != 0) {
      v17 = *(_DWORD*)(v18 + 32);
    }
    else {
      v17 = 0;
    }
  }
  *(_DWORD*)(a1 + 16) = v17;
  v24_.v25 = &GameData_1a8718c;
  v24_.v24 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a8718c);
  game_VariableManager_SetFlag_alt1((__int64)&v24_.v24, 1);
  v24_.v25 = &GameData_1aef152;
  v24_.v24 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1aef152);
  result = game_VariableManager_SetFlag_alt1((__int64)&v24_.v24, 1);
  v20 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0 ||
      *(int*)(game_GameModeData_instance_ + 60) < 2) {
    goto LABEL_41;
  }
  *(_DWORD*)(game_GameModeData_instance_ + 60) = 1;
  v24_.v26 = (unsigned __int64*)&v24_.v24;
  v24_.v24 = GameData_1f93458;
  v24_.v25 = (void*)v20;
  GameConst_7f8cc0_alt1(1, (__int64)&v24_.v24);
  if (v24_.v26 == (unsigned __int64*)&v24_.v24) {
    v21 = 32;
  }
  else {
    if (v24_.v26 == nullptr) {
      goto LABEL_34;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v24_.v26 + v21))((__int64)v24_.v26);
LABEL_34:
  result = Impl_71f220_alt1(v20);
  v22 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    *(_DWORD*)(game_GameModeData_instance_ + 64) = 12;
    v24_.v26 = (unsigned __int64*)&v24_.v24;
    v24_.v24 = GameData_1f934e8;
    v24_.v25 = (void*)v22;
    GameConst_7f8fd0_alt1(12, (__int64)&v24_.v24);
    if (v24_.v26 == (unsigned __int64*)&v24_.v24) {
      v23 = 32;
    }
    else {
      if (v24_.v26 == nullptr) {
      LABEL_40:
        result = Impl_71f220_alt1(v22);
        goto LABEL_41;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*v24_.v26 + v23))((__int64)v24_.v26);
    goto LABEL_40;
  }
LABEL_41:
  *(_BYTE*)a1 = 1;
  return result;
}

__int64 UnitUtil_15e04f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  struct {
    __int64 (**v12)();
    void* v13;
    char gap16_[16];
    __int64 (***v14)();
  } v12_;

  v1 = result;
  if (*(_BYTE*)result == 1) {
    v2 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_15;
    }
    v3 = *(_DWORD*)(result + 4);
    v12_.v12 = GameData_1f93458;
    v12_.v13 = (void*)game_GameModeData_instance_;
    v12_.v14 = &v12_.v12;
    *(_DWORD*)(game_GameModeData_instance_ + 60) = v3;
    GameConst_7f8cc0_alt1(v3, (__int64)&v12_.v12);
    if (v12_.v14 == &v12_.v12) {
      v4 = 4;
    }
    else {
      if (v12_.v14 == nullptr) {
        goto LABEL_8;
      }
      v4 = 5;
    }
    ((__int64 (*)(__int64))(*v12_.v14)[v4])((__int64)v12_.v14);
  LABEL_8:
    Impl_71f220_alt1(v2);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_DWORD*)(v1 + 8);
      v12_.v12 = GameData_1f934e8;
      v12_.v13 = (void*)game_GameModeData_instance_;
      v12_.v14 = &v12_.v12;
      *(_DWORD*)(game_GameModeData_instance_ + 64) = v6;
      GameConst_7f8fd0_alt1(v6, (__int64)&v12_.v12);
      if (v12_.v14 == &v12_.v12) {
        v7 = 4;
      }
      else {
        if (v12_.v14 == nullptr) {
        LABEL_14:
          Impl_71f220_alt1(v5);
          goto LABEL_15;
        }
        v7 = 5;
      }
      ((__int64 (*)(__int64))(*v12_.v14)[v7])((__int64)v12_.v14);
      goto LABEL_14;
    }
  LABEL_15:
    v12_.v13 = &GameData_1a8718c;
    v8 = game_HashString_alt2((__int64)&GameData_1a8718c);
    v9 = *(_DWORD*)(v1 + 12);
    v12_.v12 = (__int64 (**)(void))v8;
    game_VariableManager_SetFlag_alt1((__int64)&v12_.v12, v9);
    v12_.v13 = &GameData_1aef152;
    v10 = game_HashString_alt2((__int64)&GameData_1aef152);
    v11 = *(_DWORD*)(v1 + 16);
    v12_.v12 = (__int64 (**)(void))v10;
    result = game_VariableManager_SetFlag_alt1((__int64)&v12_.v12, v11);
  }
  *(_BYTE*)v1 = 0;
  return result;
}

__int64 UnitUtil_15e0640(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  unsigned int v10;
  unsigned int v11;
  unsigned __int8 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v20;
  int v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64* v43;
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  signed __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v58;
  int v59;
  int v60;
  unsigned int v61;
  __int64 v62;
  __int16 v63;

  v10 = (unsigned __int8)GameRoutine_960100();
  if (a2 != 0) {
    v11 = (unsigned __int8)game_UnitMastery_GetMaxJobRank(a2 + 512, a2);
    if (v10 <= v11) {
      v10 = v11;
    }
  }
  v12 = GameRoutine_960100();
  v14 = GameData_21c9868;
  v13 = GameData_21c9870;
  if (GameData_21c9868 != GameData_21c9870) {
    v62 = GameData_21c9870;
    if ((a5 & 1) != 0) {
      v15 = v12;
      while (1) {
        v17 = *(_QWORD*)v14;
        if (*(_BYTE*)(*(_QWORD*)v14 + 504LL) == 0) {
          goto LABEL_8;
        }
        v18 = *(unsigned __int8*)(v17 + 49);
        if (v18 != (unsigned __int8)a3 || v18 > v10) {
          goto LABEL_8;
        }
        if (game_GameModeData_instance_ == 0 ||
            (v20 = *(_DWORD*)(game_GameModeData_instance_ + 60)) == 0 ||
            v20 == 3 && *(_DWORD*)(game_GameModeData_instance_ + 64) == 1) {
          v16 = game_Unit_GetJob_alt1(a2);
          v17 = *(_QWORD*)v14;
          if (v16 != *(_QWORD*)v14) {
            goto LABEL_8;
          }
        }
        game_95eaa0((void*)((__int64)&v63), a2, v17);
        if ((v63 & 2) != 0) {
          goto LABEL_23;
        }
        if ((v63 & 1) != 0) {
          goto LABEL_8;
        }
        if ((v63 & 0x200) != 0) {
        LABEL_23:
          v21 = 0;
        }
        else {
          if ((v63 & 0xC0) != 0) {
            goto LABEL_8;
          }
          v21 = 1;
        }
        v22 = *(_QWORD*)v14;
        if (((a4 | v21) & 1) == 0 || *(unsigned __int8*)(v22 + 49) <= v15) {
          v23 = (__int64*)(a1 + 24LL * *(unsigned __int8*)(v22 + 536));
          v25 = (__int64*)v23[1];
          v24 = v23[2];
          if ((unsigned __int64)v25 >= v24) {
            v58 = v15;
            v59 = a4;
            v27 = *v23;
            v60 = a3;
            v28 = (__int64)v25 - *v23;
            v29 = v28 >> 3;
            v30 = (v28 >> 3) + 1;
            if (v30 >> 61 != 0) {
              goto LABEL_70;
            }
            v31 = v24 - v27;
            if (v31 >> 2 > v30) {
              v30 = v31 >> 2;
            }
            if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
              v32 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v32 = v30;
            }
            if (v32 != 0) {
              if (v32 >> 61 != 0) {
                goto LABEL_71;
              }
              v33 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v32, 16, 0);
            }
            else {
              v33 = 0;
            }
            v34 = v28;
            v35 = (__int64*)(v33 + v28);
            v36 = v33 + 8 * v32;
            v37 = (__int64)&v35[-v29];
            *v35 = v22;
            v26 = v35 + 1;
            memcpy_alt1(v37, v27, v34);
            *v23 = v37;
            v23[1] = (__int64)v26;
            v23[2] = v36;
            if (v27 != 0) {
              v38 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v27);
            }
            a4 = v59;
            a3 = v60;
            v15 = v58;
          }
          else {
            *v25 = v22;
            v26 = v25 + 1;
          }
          v23[1] = (__int64)v26;
          v13 = v62;
        }
      LABEL_8:
        v14 += 8;
        if (v14 == v13) {
          return 1;
        }
      }
    }
    v61 = v10;
    do {
      v40 = *(_QWORD*)v14;
      if (*(_BYTE*)(*(_QWORD*)v14 + 504LL) != 0) {
        v41 = *(unsigned __int8*)(v40 + 49);
        if (v41 == (unsigned __int8)a3 && v41 <= v10) {
          v43 = (__int64*)(a1 + 24LL * *(unsigned __int8*)(v40 + 536));
          v45 = (__int64*)v43[1];
          v44 = v43[2];
          if ((unsigned __int64)v45 < v44) {
            *v45 = v40;
            v39 = (__int64)(v45 + 1);
          }
          else {
            v46 = *v43;
            v47 = (signed __int64)v45 - *v43;
            v48 = (v47 >> 3) + 1;
            if (v48 >> 61 != 0) {
            LABEL_70:
              GameRoutine_67afd0();
            }
            v49 = v44 - v46;
            v50 = a1;
            v51 = a3;
            if (v49 >> 2 > v48) {
              v48 = v49 >> 2;
            }
            if ((unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF8LL) {
              v52 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v52 = v48;
            }
            if (v52 != 0) {
              if (v52 >> 61 != 0) {
              LABEL_71:
                GameRoutine_60a210_alt1();
              }
              v53 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v52, 16, 0);
            }
            else {
              v53 = 0;
            }
            v54 = v53 + 8 * v52;
            v55 = v53 + v47 - 8 * (v47 >> 3);
            *(_QWORD*)(v53 + v47) = v40;
            v39 = v53 + v47 + 8;
            memcpy_alt1(v55, v46, v47);
            *v43 = v55;
            v43[1] = v39;
            v43[2] = v54;
            if (v46 != 0) {
              v56 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v56 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v46);
            }
            a3 = v51;
            a1 = v50;
            v10 = v61;
            v13 = v62;
          }
          v43[1] = v39;
        }
      }
      v14 += 8;
    } while (v14 != v13);
  }
  return 1;
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
  struct {
    __int64 (**v20)();
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v20_;

  if ((*((_BYTE*)a2 + 3) & 0x21) == 0 && *a2 != 0) {
    v5 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a2);
    if ((v5[336] & 8) == 0) {
      v6 = v5[72];
      v7 = (1LL << v5[73]) & 0x7DC;
      v8 = v6 > 7 || v7 == 0;
      v9 = !v8 || ((1LL << v6) & 0x20FF) == 0;
      if (!v9 && (unsigned int)v6 <= 7) {
        v11 = result;
        v12 = **(_QWORD**)(result + 8);
        v20_.v22 = 0;
        v20_.v23 = 0;
        v20_.v20 = game_UnitEquipScope_vtable;
        v20_.v21 = 0;
        if (v12 != 0) {
          v13 = *(_QWORD*)a2;
          v20_.v21 = v12;
          v20_.v22 = v13;
          v20_.v23 = *(_QWORD*)(v12 + 2208);
          *(_QWORD*)(v12 + 2208) = &v20_.v20;
          v14 = *(_DWORD*)(v12 + 416);
          if ((v14 & 0x10000000) == 0) {
            v15 = v12;
            *(_DWORD*)(v12 + 416) = v14 | 0x10000000;
            game_6c51e0(v12);
            GameRoutine_6c6da0_alt1(v15);
            game_6c6ec0(v15);
            v12 = v15;
            *(_DWORD*)(v15 + 416) &= ~0x10000000u;
          }
        }
        result = game_Unit_GetUnknown6_alt1(v12, 1);
        v16 = *(int**)(v11 + 16);
        v17 = *v16;
        if (*v16 <= (int)result) {
          v17 = result;
        }
        *v16 = v17;
        v20_.v20 = game_UnitEquipScope_vtable;
        v18 = v20_.v21;
        if (v20_.v21 != 0 &&
            *(__int64 (****)())(v20_.v21 + 2208) == &v20_.v20) {
          *(_QWORD*)(v20_.v21 + 2208) = v20_.v23;
          v19 = *(_DWORD*)(v18 + 416);
          if ((v19 & 0x10000000) == 0) {
            *(_DWORD*)(v18 + 416) = v19 | 0x10000000;
            game_6c51e0(v18);
            GameRoutine_6c6da0_alt1(v18);
            result = game_6c6ec0(v18);
            *(_DWORD*)(v18 + 416) &= ~0x10000000u;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
