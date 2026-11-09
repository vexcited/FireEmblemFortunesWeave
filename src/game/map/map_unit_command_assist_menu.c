#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_map_anonymous_TargetMenuAssistItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cff0[4];
extern __int64* game_g_empty_item_ptr;
__int64 MapUnitCommandAssistMenu_Unknown146(__int64 a1, __int64 a2, int a3,
                                            char a4);
__int64 MapUnitCommandAssistMenu_Unknown146(__int64 a1, __int64 a2, int a3,
                                            char a4)
{
  __int64 result;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  bool v13;
  _QWORD* v14;
  __int64* v15;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  v8 = a2;
  *(_QWORD*)(result + 8) = 0;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 88) = a2;
  *(_DWORD*)(result + 40) = a3;
  *(_BYTE*)(result + 96) = a4;
  *(_WORD*)(result + 80) = 257;
  v9 = GameData_212cff0[0];
  v10 = *GameData_212cff0[0];
  if (*GameData_212cff0[0] == 0) {
    *(_QWORD*)result = game_map_anonymous_TargetMenuAssistItem_vtable;
    goto LABEL_10;
  }
  v11 = 1 << a3;
  if ((*(_DWORD*)(v10 + 12400) & (1 << a3)) == 0) {
    *(_BYTE*)(result + 82) = 0;
    *(_QWORD*)result = game_map_anonymous_TargetMenuAssistItem_vtable;
  LABEL_9:
    LOBYTE(v10) = (*(_DWORD*)(v10 + 12400) & v11) != 0;
    goto LABEL_10;
  }
  v12 = v8 + 8LL * a3;
  v13 = a3 == -1;
  v14 = (_QWORD*)result;
  v15 = (__int64*)(v12 + 828);
  if (v13) {
    v15 = game_g_empty_item_ptr;
  }
  GameRoutine_6e8bc0(v15, v8);
  v10 = *v9;
  result = (__int64)v14;
  *v14 = game_map_anonymous_TargetMenuAssistItem_vtable;
  if (v10 != 0) {
    goto LABEL_9;
  }

LABEL_10:
  *(_BYTE*)(result + 82) = v10;
  return result;
}

#pragma GCC visibility pop
