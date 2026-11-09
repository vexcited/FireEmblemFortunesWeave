#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201eed8[])();
extern __int64 (*game_AIEntrustImage_vtable[])();
extern __int64 GameData_22400d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224078c;
_QWORD* AIEntrustImage_Destructor(_QWORD* result);

_QWORD* AIEntrustImage_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result[331];
  v2 = result;
  *result = game_AIEntrustImage_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[332] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[4];
  if (v6 != 0) {
    v7 = *v3;
    v2[5] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *v2 = GameData_201eed8;
  if ((_QWORD*)GameData_22400d0 == v2) {
    GameData_22400d0 = 0;
    GameData_224078c = 0;
  }
  return result;
}

#pragma GCC visibility pop
