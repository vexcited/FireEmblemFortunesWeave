#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*snd_AnimeSound_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 snd_g_memory;
_QWORD* AnimeSound_Destructor(_QWORD* result);
__int64 AnimeSound_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "AnimeSound_DeletingDestructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AnimeSound_DeletingDestructor(_QWORD* a1);

_QWORD* AnimeSound_Destructor(_QWORD* result)
{
  __int64 v1;

  v1 = result[2];
  *result = snd_AnimeSound_vtable;
  if (v1 != 0) {
    result[3] = v1;
    return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory);
  }
  return result;
}

void AnimeSound_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[2];
  *a1 = snd_AnimeSound_vtable;
  if (v1 != 0) {
    a1[3] = v1;
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
