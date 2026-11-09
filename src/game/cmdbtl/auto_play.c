#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdBtlMindEnumeration_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ff7ba0[])();
extern __int64 (*game_cmdbtl_AutoPlay_vtable[])();
extern __int64 GameData_22190a8;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22265e0;
__int64 AutoPlay_Destructor(_QWORD* a1);

__int64 AutoPlay_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_cmdbtl_AutoPlay_vtable;
  if (GameData_225ca88 != 0) {
    v2 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v2 != 0 && *(_BYTE*)(v2 + 408) != 0) {
      *(_BYTE*)(v2 + 408) = 0;
    }
  }
  result = CmdBtlMindEnumeration_Destructor(a1 + 7);
  v4 = a1[4];
  if (v4 != 0) {
    v5 = a1[5];
    if (v4 == v5) {
      goto LABEL_12;
    }
    do {
      result = *(_QWORD*)(v5 - 8);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v5 -= 16;
    } while (v5 != v4);
    v6 = a1[4];
    a1[5] = v4;
    if (v6 != 0) {
    LABEL_12:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  *a1 = GameData_1ff7ba0;
  if ((_QWORD*)GameData_22190a8 == a1) {
    GameData_22190a8 = 0;
    GameData_22265e0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
