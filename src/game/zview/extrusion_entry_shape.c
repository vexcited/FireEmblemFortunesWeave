#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_zview_ExtrusionEntryShape_Result_vtable[])();
extern __int64 (*game_zview_ExtrusionEntryShape_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ExtrusionEntryShape_DeletingDestructor(_QWORD* a1);
__int64 (***ExtrusionEntryShape_Destructor(_QWORD* a1))(_QWORD);
__int64 (***ExtrusionEntryShape_Result_Destructor(_QWORD* a1))(_QWORD);

__int64 (***ExtrusionEntryShape_Destructor(_QWORD* a1))(_QWORD)
{
  void (***v2)(_QWORD);
  __int64 (***result)(_QWORD);

  *a1 = game_zview_ExtrusionEntryShape_vtable;
  a1[2] = game_zview_ExtrusionEntryShape_Result_vtable;
  v2 = (void (***)(_QWORD))a1[3];
  if (v2 != nullptr) {
    (**v2)(v2);
    a1[3] = 0;
  }
  result = (__int64 (***)(_QWORD))a1[4];
  if (result != nullptr) {
    result = (__int64 (***)(_QWORD))(**result)(result);
    a1[4] = 0;
  }
  return result;
}

__int64 ExtrusionEntryShape_DeletingDestructor(_QWORD* a1)
{
  void (***v2)(_QWORD);
  void (***v3)(_QWORD);
  __int64 v4;

  *a1 = game_zview_ExtrusionEntryShape_vtable;
  a1[2] = game_zview_ExtrusionEntryShape_Result_vtable;
  v2 = (void (***)(_QWORD))a1[3];
  if (v2 != nullptr) {
    (**v2)(v2);
    a1[3] = 0;
  }
  v3 = (void (***)(_QWORD))a1[4];
  if (v3 != nullptr) {
    (**v3)(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

__int64 (***ExtrusionEntryShape_Result_Destructor(_QWORD* a1))(_QWORD)
{
  void (***v2)(_QWORD);
  __int64 (***result)(_QWORD);

  *a1 = game_zview_ExtrusionEntryShape_Result_vtable;
  v2 = (void (***)(_QWORD))a1[1];
  if (v2 != nullptr) {
    (**v2)(v2);
    a1[1] = 0;
  }
  result = (__int64 (***)(_QWORD))a1[2];
  if (result != nullptr) {
    result = (__int64 (***)(_QWORD))(**result)(result);
    a1[2] = 0;
  }
  return result;
}

#pragma GCC visibility pop
