#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapDrawTargetSelectInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* MapDrawTargetSelectInfo_Destructor(_QWORD* result, long double a2);

_QWORD* MapDrawTargetSelectInfo_Destructor(_QWORD* result, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (***v9)(_QWORD);
  __int64 (***v10)(_QWORD);
  __int64 (***v11)(_QWORD);
  __int64 (***v12)(_QWORD);
  __int64 (**v13)(_QWORD);
  bool v14;
  __int64 v15;
  __int64 v16;

  v2 = (_QWORD*)result[1545];
  v3 = result;
  *result = game_map_MapDrawTargetSelectInfo_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != nullptr) {
    do {
      v5 = (_QWORD*)*v2;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, a2);
      v2 = v5;
    } while (v5 != nullptr);
  }
  v7 = v3[1543];
  v3[1543] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, a2);
  }
  v9 = (__int64 (***)(_QWORD))v3[3];
  if (v9 != nullptr) {
    v10 = (__int64 (***)(_QWORD))v3[4];
    if (v9 == v10) {
      goto LABEL_16;
    }
    v11 = v10 - 7;
    v12 = v10 - 7;
    do {
      v13 = *v12;
      v12 -= 7;
      result = (_QWORD*)(*v13)(v11);
      v14 = v11 == v9;
      v11 = v12;
    } while (!v14);
    v15 = v3[3];
    v3[4] = v9;
    if (v15 != 0) {
    LABEL_16:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v16 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
