#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdad00[])();
extern __int64 (*game_zview_Collision_vtable[])();
extern __int64 GameData_220b6e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f850;
_QWORD* Collision_Destructor(_QWORD* result);

_QWORD* Collision_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  v1 = (_QWORD*)result[1];
  v2 = result;
  *result = game_zview_Collision_vtable;
  if (v1 != nullptr) {
    v3 = (_QWORD*)result[2];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_11;
    }
    do {
      v6 = *--v3;
      v5 = v6;
      *v3 = 0;
      if (v6 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v5);
      }
    } while (v3 != v1);
    v8 = (_QWORD*)v2[1];
    v2[2] = v1;
    v1 = v8;
    if (v8 != nullptr) {
    LABEL_11:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v1);
    }
  }
  *v2 = GameData_1fdad00;
  if ((_QWORD*)GameData_220b6e8 == v2) {
    GameData_220b6e8 = 0;
    GameData_220f850 = 0;
  }
  return result;
}

#pragma GCC visibility pop
