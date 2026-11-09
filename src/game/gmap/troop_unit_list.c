#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_TroopUnitList_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* TroopUnitList_Destructor(_QWORD* result);
__int64 TroopUnitList_DeletingDestructor(_QWORD* a1);

_QWORD* TroopUnitList_Destructor(_QWORD* result)
{
  __int64 (***v1)(_QWORD);
  __int64 (***v2)(_QWORD);
  _QWORD* v3;
  __int64 (***v4)(_QWORD);
  bool v5;
  __int64 v6;
  __int64 v7;

  v1 = (__int64 (***)(_QWORD))result[1];
  *result = game_gmap_TroopUnitList_vtable;
  if (v1 != nullptr) {
    v2 = (__int64 (***)(_QWORD))result[2];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_7;
    }
    v4 = v2 - 278;
    do {
      result = (_QWORD*)(**v4)(v4);
      v5 = v4 == v1;
      v4 -= 278;
    } while (!v5);
    v6 = v3[1];
    v3[2] = v1;
    if (v6 != 0) {
    LABEL_7:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

__int64 TroopUnitList_DeletingDestructor(_QWORD* a1)
{
  void (***v1)(_QWORD);
  __int64 v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (void (***)(_QWORD))a1[1];
  *a1 = game_gmap_TroopUnitList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = (void (***)(_QWORD))a1[2];
    if (v1 == v4) {
      goto LABEL_7;
    }
    v5 = v4 - 278;
    do {
      (**v5)(v5);
      v6 = v5 == v1;
      v5 -= 278;
    } while (!v6);
    v7 = a1[1];
    a1[2] = v1;
    if (v7 != 0) {
    LABEL_7:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
