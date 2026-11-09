#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_anonymous_CharacterHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterHolder_Destructor(_QWORD* a1);
__int64 CharacterHolder_DeletingDestructor(_QWORD* a1);

__int64 CharacterHolder_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;

  *a1 = game_anonymous_CharacterHolder_vtable;
  v2 = a1[1];
  result = (__int64)(a1 + 1);
  if (v2 != 0) {
    v3 = (_QWORD*)result;
    result = GameRoutine_a867a0(result);
    *v3 = 0;
  }
  return result;
}

__int64 CharacterHolder_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  *a1 = game_anonymous_CharacterHolder_vtable;
  v2 = a1[1];
  v1 = a1 + 1;
  if (v2 != 0) {
    GameRoutine_a867a0(v1);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
