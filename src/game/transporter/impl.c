#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_TransporterConst_List_vtable[])();
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 Impl_Destructor_8a1820(_QWORD* a1);
__int64 Impl_DeletingDestructor_8a1890_alt1(_QWORD* a1) __asm__(
    "Impl_DeletingDestructor_8a1890");
__int64 GameHr_876a40(_QWORD*, _QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_DeletingDestructor_8a1890(_QWORD* a1);

__int64 Impl_Destructor_8a1820(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  a1[1] = game_TransporterConst_List_vtable;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v4);
}

void Impl_DeletingDestructor_8a1890(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;

  a1[1] = game_TransporterConst_List_vtable;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameHr_876a40(&GameData_21eea40, &v4);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
