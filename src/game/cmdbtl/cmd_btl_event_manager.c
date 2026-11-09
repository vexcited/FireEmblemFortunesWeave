#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EventManagerBase_Unknown2(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fed950[])();
extern __int64 (*GameData_1fedc10[])();
extern __int64 (*game_cmdbtl_CmdBtlEventManager_vtable[])();
extern __int64 GameData_21d3f90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130640[3];
extern int GameData_221c4d4;
__int64 CmdBtlEventManager_Destructor(__int64 a1);

__int64 CmdBtlEventManager_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventManager_vtable;
  *(_QWORD*)(a1 + 8) = GameData_1fed950;
  v2 = (_QWORD*)(a1 + 8);
  result = EventManagerBase_Unknown2(a1 + 8);
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1576) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 1592);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  *v2 = GameData_2130640[0] + 2;
  for (i = 1536; i != 0; i -= 24) {
    v8 = *(_QWORD*)(a1 + i + 16);
    if (v8 != 0) {
      *(_QWORD*)(a1 + i + 24) = v8;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
  }
  v10 = *(_QWORD*)(a1 + 16);
  if (v10 != 0) {
    v11 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 24) = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  *(_QWORD*)a1 = GameData_1fedc10;
  if (GameData_21d3f90 == a1) {
    GameData_21d3f90 = 0;
    GameData_221c4d4 = 0;
  }
  return result;
}

#pragma GCC visibility pop
