#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameUnitRecord_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameUnitRecord_Destructor(_QWORD* a1);
__int64 GameUnitRecord_DeletingDestructor(_QWORD* a1);
void GameUnitRecord_130c3f0(__int64 a1, _QWORD* a2) { *a2 = 0; };
void GameUnitRecord_130c400(__int64 a1, _DWORD* a2) { *a2 = 0; };

__int64 GameUnitRecord_Destructor(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = game_GameUnitRecord_vtable;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 GameUnitRecord_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[1];
  *a1 = game_GameUnitRecord_vtable;
  a1[1] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
