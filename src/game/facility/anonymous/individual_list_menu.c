#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_19350e0(__int64);
__int64 GameRoutine_1935e90(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
extern __int64 (*game_facility_anonymous_IndividualMenuItem_vtable[])();
extern __int64 GameData_21168b8;
extern __int64 GameData_2131c50[48];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212dcd0;
extern __int64* GameData_21319e8[10];
const char* IndividualListMenu_Unknown43(__int64 a1, char a2);
__int64 IndividualListMenu_1935950(__int64 a1);
__int64 IndividualListMenu_1935980(__int64 a1);
__int64 IndividualListMenu_Unknown128(__int64 a1);

const char* IndividualListMenu_Unknown43(__int64 a1, char a2)
{
  const char* v2;

  v2 = "MID_Menu_Default";
  if (a2 == 1) {
    v2 = "MID_Menu_Lv_Ascending";
  }
  if (a2 == 2) {
    return "MID_Menu_Lv_Descending";
  }
  else {
    return v2;
  }
}

__int64 IndividualListMenu_1935950(__int64 a1)
{
  game_menu_BasicMenu_Unknown96();
  return GameRoutine_1935e90(*(_QWORD*)(a1 + 1056), 0);
}

__int64 IndividualListMenu_1935980(__int64 a1)
{
  __int64 v2;

  v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_21168b8, 0);
  GameRoutine_19350e0(v2);
  GameRoutine_1935e90(*(_QWORD*)(a1 + 1056), 1);
  return 12;
}

__int64 IndividualListMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = GameData_2131c50[0] + 16;
  *(_QWORD*)(v3 + 8) = 0;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = *(_QWORD*)(a1 + 1056);
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  if (result != 0) {
    result = __dynamic_cast(result, GameData_21319e8[0], &GameData_21168b8, 0);
    v7 = result;
  }
  else {
    v7 = 0;
  }
  v8 = GameData_212dcd0;
  if ((int)((*(_QWORD*)(*GameData_212dcd0 + 56) -
             *(_QWORD*)(*GameData_212dcd0 + 48)) >>
            3) >= 1) {
    v9 = 0;
    while (1) {
      v10 = fw_memory_HeapManager_Allocate(*v2, 120, 16, 0);
      v11 = *v8;
      *(_WORD*)(v10 + 16) = 0;
      *(_QWORD*)(v10 + 48) = 0;
      *(_QWORD*)(v10 + 56) = 0;
      v12 = v10;
      *(_QWORD*)(v10 + 64) = 0;
      *(_QWORD*)(v10 + 72) = 0;
      *(_WORD*)(v10 + 80) = 257;
      *(_BYTE*)(v10 + 82) = 1;
      *(_QWORD*)v10 = game_facility_anonymous_IndividualMenuItem_vtable;
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 88) = v7;
      *(_QWORD*)(v10 + 96) = 0;
      *(_QWORD*)(v10 + 104) = 0;
      *(_DWORD*)(v10 + 40) = v9;
      v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 48) + 8 * v9) + 392LL);
      if (v13 == 0) {
        break;
      }
      if (game_GameModeData_instance_ == 0) {
        break;
      }
      v14 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          *(_QWORD*)(v13 + 24) + 1352LL);
      if (v14 == 0) {
        break;
      }
      v15 = *(_DWORD*)(v14 + 32);
      v16 = (_BYTE*)(v12 + 112);
      if ((_BYTE)v15 == 0) {
        goto LABEL_16;
      }
      *v16 = v15;
    LABEL_9:
      *(_DWORD*)(*(_QWORD*)(*v8 + 72) + 4LL * *(int*)(v12 + 40)) =
          (unsigned __int8)v15;
      result = GameRoutine_16e0c00(a1, v12);
      if (++v9 >= (int)((*(_QWORD*)(*v8 + 56) - *(_QWORD*)(*v8 + 48)) >> 3)) {
        return result;
      }
    }
    v16 = (_BYTE*)(v12 + 112);
  LABEL_16:
    v17 = *v8;
    LOBYTE(v15) = 1;
    v18 = *(int*)(v12 + 40);
    *(_BYTE*)(v12 + 112) = 1;
    v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v17 + 48) + 8 * v18) + 392LL);
    if (v19 != 0) {
      game_VariableManager_SetFlag(*(_QWORD*)(v19 + 24) + 1352LL, 1);
      LOBYTE(v15) = *v16;
    }
    goto LABEL_9;
  }
  return result;
}

#pragma GCC visibility pop
