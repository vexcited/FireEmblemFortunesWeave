#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
bool ItemMenuItem_Unknown71(__int64);
extern __int64 (*game_map_anonymous_CmdBtlItemMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_ItemMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 UnitMenuItem_15b81a0(__int64, __int64, char*);
__int64
game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                              int* a2);
__int64
game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                              int* a2);
__int64

game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                              int* a2)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(__int64**)(a1 + 16);
  v4 = *a2;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v6 = *v3;
  v7 = (_QWORD*)v5;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_DWORD*)(v5 + 40) = v4;
  *(_BYTE*)(v5 + 96) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)(v5 + 88) = v6;
  *(_QWORD*)v5 = game_map_anonymous_ItemMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_BYTE*)(v5 + 96) = ItemMenuItem_Unknown71(v5);
  *v7 = game_map_anonymous_CmdBtlItemMenuItem_vtable;
  return BasicMenuCursor_16e0c00(v2, v7);
}

__int64

game_map_CmdBtlUnitCommandItemMenu_AddItemList_lambda1_Invoke(__int64 result,
                                                              int* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if (*a2 == 2 || v2 == 1) {
    if ((**(_BYTE**)(result + 16) & 1) == 0) {
      v5 = result;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
      UnitMenuItem_15b81a0(v6, (__int64)"MID_Menu_Magic", "MID_Sys_Remaining");
      result = BasicMenuCursor_16e0c00(v3, v6);
      **(_BYTE**)(v5 + 16) = 1;
    }
  }
  else if (v2 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        144, 16, 0);
    UnitMenuItem_15b81a0(v4, (__int64)"MID_Menu_ExclusiveItem",
                         "MID_Sys_WeaponEndure");
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

#pragma GCC visibility pop
