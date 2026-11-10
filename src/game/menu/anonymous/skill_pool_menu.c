#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_204fdb0;
extern __int64* GameData_21319e8[10];
__int64 SkillPoolMenu_Unknown85(__int64 a1);
__int64 SkillPoolMenu_Unknown139(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15df0e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
bool GameRoutine_157b780(_BOOL8 result, _DWORD*);
extern __int64 (*game_menu_anonymous_EquipMenuItem_SkillPool_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
bool game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bc6a0(
    __int64 a1, int* a2);
__int64
game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bccf0(__int64 a1,
                                                                     int* a2);

__int64 SkillPoolMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 i;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "SubInfoList");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  return result;
}

__int64 SkillPoolMenu_Unknown139(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                 &GameData_204fdb0, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 240LL))(v1, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v1 + 248LL))(v1, 1);
}

bool game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bc6a0(
    __int64 a1, int* a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL);
  v4 = *a2;
  return GameRoutine_157b780(v2, &v4);
}

__int64

game_menu_anonymous_SkillPoolMenu_AddItemList_closure_Invoke_15bccf0(__int64 a1,
                                                                     int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  v5 = *(_QWORD*)(v2 + 1056);
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_21319e8[0], &GameData_204fdb0, 0);
  }
  v6 = *(_BYTE*)(v2 + 1080);
  v7 = *(_QWORD*)(v2 + 1072);
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 40) = -1;
  *(_BYTE*)(v4 + 104) = v6;
  v8 = *a2;
  *(_QWORD*)(v4 + 88) = v7;
  *(_QWORD*)(v4 + 96) = v5;
  *(_DWORD*)(v4 + 108) = v8;
  *(_DWORD*)(v4 + 112) = GameRoutine_15df0e0(v7, a2);
  *(_QWORD*)v4 = game_menu_anonymous_EquipMenuItem_SkillPool_vtable;
  return BasicMenuCursor_16e0c00(v2, v4);
}

#pragma GCC visibility pop
