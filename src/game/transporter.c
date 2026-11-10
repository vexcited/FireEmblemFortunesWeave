#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_TransporterConst_List_vtable[])();
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 Transporter_Impl_Destructor(_QWORD* a1);
__int64 Transporter_Impl_DeletingDestructor(_QWORD* a1);

__int64 Transporter_Impl_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  *a1 = game_TransporterConst_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v4 = a1 - 1;
  return GameRoutine_876a40(&GameData_21eea40, &v4);
}

__int64 Transporter_Impl_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  *a1 = game_TransporterConst_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v5 = a1 - 1;
  GameRoutine_876a40(&GameData_21eea40, &v5);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
