#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(void);
extern __int64 (*GameData_2088ae0[])();
extern __int64 GameData_2260e80;
__int64 ReportInfo_Destructor(__int64 a1);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e5e00_alt1(_QWORD) __asm__("GameRoutine_15e5e00");
__int64 GameRoutine_1842ae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 GameRoutine_82eaa0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _QWORD GameData_2021f88[10];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char* GameData_2066090;
__int64 ReportInfo_DeletingDestructor_16a73c0(__int64 a1);
__int64 ReportInfo_Destructor_16a7490(_QWORD* a1);
__int64 ReportInfo_DeletingDestructor_16a74c0(_QWORD* a1);
_QWORD* ReportInfo_16a7560(_QWORD* a1);
__int64 ReportInfo_16a7590(__int64 a1);
__int64 game_menu_anonymous_ReportInfo_SetClearState_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2);

__int64 ReportInfo_Destructor(__int64 a1)
{
  *(_QWORD*)(a1 + 208) = GameData_2088ae0;
  if (GameData_2260e80 == a1) {
    GameData_2260e80 = 0;
  }
  return GameRoutine_15e5e00();
}

__int64 ReportInfo_DeletingDestructor_16a73c0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_2088ae0;
  if (GameData_2260e80 == a1) {
    GameData_2260e80 = 0;
  }
  GameRoutine_15e5e00_alt1(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 ReportInfo_Destructor_16a7490(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = GameData_2088ae0;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == v1) {
    GameData_2260e80 = 0;
  }
  return GameRoutine_15e5e00_alt1(v1);
}

__int64 ReportInfo_DeletingDestructor_16a74c0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_2088ae0;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == a1 - 26) {
    GameData_2260e80 = 0;
  }
  GameRoutine_15e5e00_alt1(a1 - 26);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

_QWORD* ReportInfo_16a7560(_QWORD* a1)
{
  _QWORD* result;

  *a1 = GameData_2088ae0;
  result = a1 - 26;
  if ((_QWORD*)GameData_2260e80 == result) {
    GameData_2260e80 = 0;
  }
  return result;
}

__int64 ReportInfo_16a7590(__int64 a1)
{
  __int64 v1;

  if (GameData_2260e80 == a1 - 208) {
    GameData_2260e80 = 0;
  }
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, a1);
}

__int64

game_menu_anonymous_ReportInfo_SetClearState_lambda0_Invoke(__int64 a1,
                                                            unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
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
  const char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *a2;
  v5 = game_util_Format("L_Icon%02d", **(_DWORD**)(a1 + 8));
  GameRoutine_1560070(&v24, v2, v5);
  result = v25;
  if (v25 != 0) {
    v7 = std___1___shared_weak_count_lock(v25);
    v8 = v24;
    result = v25;
    if (v25 != 0) {
      result = std___1___shared_weak_count___release_weak(v25);
    }
    if (v7 == 0 || v8 == 0) {
      if (v7 == 0) {
        return result;
      }
      goto LABEL_44;
    }
    v9 = *(_DWORD**)(a1 + 8);
    v10 = GameRoutine_82eaa0((unsigned int)v3);
    if (game_GameModeData_instance_ != 0 &&
        (v11 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v10)) != 0 &&
        *(_DWORD*)(v11 + 32) != 0) {
      LayoutAccessor_155e830(v8, 1);
      v12 = ui_LayoutAccessor_FindPane(v8, "Img");
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v13 = 0;
      }
      v21 = ui_Manager_instance_;
      if ((_DWORD)v3 == 10) {
        v22 = nullptr;
      }
      else {
        v22 = (&GameData_2066090)[v3];
      }
      v23 = game_util_Format("SaveIcon_%s_Clear2", v22);
    }
    else {
      v14 = GameRoutine_82e7c0((unsigned int)v3, 2);
      if (game_GameModeData_instance_ == 0 ||
          (v15 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v14)) == 0 ||
          *(int*)(v15 + 32) < 1) {
        if ((_DWORD)v3 == 0 || (_DWORD)v3 == 9 ||
            (v25 = GameData_2021f88[v3], v24 = game_HashString(v25),
             game_GameModeData_instance_ == 0) ||
            (v17 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v24)) == 0 ||
            *(_DWORD*)(v17 + 32) == 0) {
          result = GameRoutine_82e7c0((unsigned int)v3, 1);
          if (game_GameModeData_instance_ != 0) {
            result = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), result);
            if (result == 0 || *(int*)(result + 32) < 1) {
              goto LABEL_44;
            }
            LayoutAccessor_155e830(v8, 1);
            v19 = ui_LayoutAccessor_FindPane(v8, "Img");
            if (v19 != 0) {
              v19 = __dynamic_cast(v19, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            GameRoutine_1842ae0(v19, (unsigned int)v3, 1);
            v20 = "Disable";
          LABEL_43:
            result = LayoutAccessor_1562cf0(v8, v20);
            ++*v9;
          }
        LABEL_44:
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            return std___1___shared_weak_count___release_weak(v7);
          }
          return result;
        }
        LayoutAccessor_155e830(v8, 1);
        v18 = ui_LayoutAccessor_FindPane(v8, "Img");
        if (v18 != 0) {
          v18 =
              __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1842ae0(v18, (unsigned int)v3, 2);
      LABEL_42:
        v20 = "Enable";
        goto LABEL_43;
      }
      LayoutAccessor_155e830(v8, 1);
      v16 = ui_LayoutAccessor_FindPane(v8, "Img");
      if (v16 != 0) {
        v13 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v13 = 0;
      }
      v21 = ui_Manager_instance_;
      if ((_DWORD)v3 == 10) {
        v23 = game_util_Format("SaveIcon_%s_Clear2_Skip", 0);
      }
      else {
        v23 = game_util_Format("SaveIcon_%s_Clear2_Skip",
                               (&GameData_2066090)[v3]);
      }
    }
    GameRoutine_136a920(v21 + 1264, v13, 0, 7, v23);
    goto LABEL_42;
  }
  return result;
}

#pragma GCC visibility pop
