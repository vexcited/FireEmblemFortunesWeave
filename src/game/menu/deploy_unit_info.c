#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2095a40[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_MorphInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
__int64 game_menu_DeployUnitInfo_OnAddMenuItem_lambda0_Invoke(__int64 result,
                                                              _DWORD* a2);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64
game_menu_DeployUnitInfo_OnAddMenuItem_lambda1_Invoke_16ca240(__int64 a1,
                                                              int* a2);

__int64 game_menu_DeployUnitInfo_OnAddMenuItem_lambda0_Invoke(__int64 result,
                                                              _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_QWORD*)(v2 + 592) == **(_QWORD**)(result + 8)) {
    v3 = *(_QWORD*)(result + 16);
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        136, 16, 0);
    v5 = *(_QWORD*)(v3 + 1064);
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_QWORD*)(v4 + 128) = v2;
    *(_WORD*)(v4 + 80) = 257;
    *(_BYTE*)(v4 + 82) = 1;
    *(_DWORD*)(v4 + 40) = -1;
    *(_QWORD*)v4 = game_menu_anonymous_EquipInfoItem_MorphInfo_vtable;
    *(_QWORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 + 88) = GameData_2095a40;
    *(_QWORD*)(v4 + 96) = v5;
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

__int64

game_menu_DeployUnitInfo_OnAddMenuItem_lambda1_Invoke_16ca240(__int64 a1,
                                                              int* a2)
{
  __int64 result;
  int v4;

  v4 = *a2;
  result = game_HasSkill(**(_QWORD**)(a1 + 8) + 1744LL, &v4);
  if ((result & 1) != 0) {
    **(_BYTE**)(a1 + 16) = 1;
  }
  return result;
}

#pragma GCC visibility pop
