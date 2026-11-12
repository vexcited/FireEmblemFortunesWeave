#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameMiracle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameMiracle_Destructor(_QWORD* a1);
__int64 GameMiracle_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "GameMiracle_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameMiracle_DeletingDestructor(_QWORD* a1);

__int64 GameMiracle_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameMiracle_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

void GameMiracle_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_GameMiracle_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
