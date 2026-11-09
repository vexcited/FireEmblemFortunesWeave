#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
_QWORD* GameRoutine_10bc340(__int64);
__int64 GameRoutine_10bc1a0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FallingBody_DeletingDestructor(_QWORD* a1);
_QWORD* FallingBody_Unknown5(__int64 a1);

__int64 FallingBody_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  long double v2;
  __int64 v3;

  *a1 = &game_character_CharacterDie_Body_vtable;
  v1 = (_QWORD*)GameRoutine_10bc1a0((__int64)a1);
  if (v1 != nullptr) {
    CharacterBuilder_1083bf0(v1);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

_QWORD* FallingBody_Unknown5(__int64 a1)
{
  _QWORD* result;

  result = GameRoutine_10bc340(a1);
  *(_BYTE*)(a1 + 100) = 1;
  return result;
}

#pragma GCC visibility pop
