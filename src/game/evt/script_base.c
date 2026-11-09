#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1196740(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_evt_ScriptBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ScriptBase_Destructor(_QWORD* a1);

__int64 ScriptBase_Destructor(_QWORD* a1)
{
  __int64 result;
  char* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = &game_evt_ScriptBase_vtable;
  result = GameRoutine_1196740(a1 + 4);
  v4 = (char*)a1[5];
  v3 = (char*)a1[6];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != v3) {
    do {
      if (*(_QWORD*)v4 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6, *(_QWORD*)v4);
      }
      v4 += 8;
    } while (v4 != v3);
    v4 = (char*)a1[5];
    v3 = (char*)a1[6];
  }
  if (v4 != v3) {
    a1[6] = &v3[(v4 - v3 + 7) & 0xFFFFFFFFFFFFFFF8LL];
  }
  v7 = a1[4];
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v7);
  }
  return result;
}

#pragma GCC visibility pop
