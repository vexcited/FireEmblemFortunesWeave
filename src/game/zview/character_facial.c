#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_zview_CharacterFacial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterFacial_Destructor(__int64 result, long double a2);
__int64 CharacterFacial_DeletingDestructor(__int64 a1, long double a2);

__int64 CharacterFacial_Destructor(__int64 result, long double a2)
{
  __int64 v2;

  *(_QWORD*)result = game_zview_CharacterFacial_vtable;
  if (*(_BYTE*)(result + 48) == 1 && (*(_BYTE*)(result + 16) & 1) != 0 &&
      *(_QWORD*)(result + 32) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a2);
  }
  return result;
}

__int64 CharacterFacial_DeletingDestructor(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_zview_CharacterFacial_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a1 + 48) == 1 && (*(_BYTE*)(a1 + 16) & 1) != 0 &&
      *(_QWORD*)(a1 + 32) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  a2);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, a2);
}

#pragma GCC visibility pop
