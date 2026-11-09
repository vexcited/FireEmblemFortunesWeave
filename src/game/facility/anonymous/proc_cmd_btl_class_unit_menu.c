#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
extern __int64 (*game_facility_anonymous_CmdBtlClassMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlClassUnitMenu_Unknown153(__int64 a1, __int64 a2);

__int64 ProcCmdBtlClassUnitMenu_Unknown153(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  bool v11;
  int v13;
  __int64 v14;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  if (a2 == 0 ||
      (v5 = *(_QWORD*)(a1 + 1400), v6 = *(_QWORD*)(a1 + 1408), v5 == v6)) {
    v10 = false;
  }
  else {
    v7 = v5 + 8;
    do {
      v8 = *(_QWORD*)(v7 - 8);
      v13 = 16;
      v14 = v8;
      v9 = game_UnitPool_Find_6ead60(&v14, &v13);
      v10 = a2 == v9;
      v11 = a2 == v9 || v7 == v6;
      v7 += 8;
    } while (!v11);
  }
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 88) = a2;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  if (a2 != 0) {
    *(_BYTE*)(v4 + 82) = game_Unit_IsUnlocked(a2) & 1;
  }
  *(_BYTE*)(v4 + 97) = v10;
  *(_BYTE*)(v4 + 96) = 3;
  *(_QWORD*)v4 = game_facility_anonymous_CmdBtlClassMenuItem_vtable;
  return v4;
}

#pragma GCC visibility pop
