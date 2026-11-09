#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_map_anonymous_TargetMenuItem_vtable[])();
extern __int64 GameData_21cd0e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_empty_item_ptr;
__int64 MapUnitCommandAttackMenu_Unknown146(__int64 a1, __int64 a2, int a3,
                                            char a4);
__int64 MapUnitCommandAttackMenu_Unknown146(__int64 a1, __int64 a2, int a3,
                                            char a4)
{
  __int64 result;
  char v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64* v12;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 88) = a2;
  *(_DWORD*)(result + 40) = a3;
  *(_BYTE*)(result + 96) = a4;
  *(_WORD*)(result + 80) = 257;
  *(_QWORD*)result = game_map_anonymous_TargetMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  v8 = GameData_21cd0e8;
  if (GameData_21cd0e8 != 0) {
    if (((*(_DWORD*)(GameData_21cd0e8 + 12400) >> a3) & 1) != 0) {
      v9 = a2 + 8LL * a3;
      v10 = a3 == -1;
      v11 = result;
      v12 = (__int64*)(v9 + 828);
      if (v10) {
        v12 = game_g_empty_item_ptr;
      }
      v8 = GameRoutine_6e8bc0(v12, a2);
      result = v11;
    }
    else {
      v8 = 0;
    }
  }
  *(_BYTE*)(result + 82) = v8 & 1;
  return result;
}

#pragma GCC visibility pop
