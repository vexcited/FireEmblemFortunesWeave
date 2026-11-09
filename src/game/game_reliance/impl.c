#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameReliance_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Impl_Destructor_8e2c40(_QWORD* result);

_QWORD* Impl_Destructor_8e2c40(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (***v21)(_QWORD);
  __int64 (***v22)(_QWORD);
  __int64 (***v23)(_QWORD);
  __int64 (***v24)(_QWORD);
  __int64 (**v25)(_QWORD);
  bool v26;
  __int64 v27;
  __int64 v28;

  v1 = (_QWORD*)result[16];
  v2 = result;
  *result = game_GameReliance_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v5 = (_QWORD*)*v1;
      v6 = v1[3];
      if (v6 != 0) {
        v7 = *(_QWORD*)v3;
        v1[4] = v6;
        if (*(_QWORD*)(v7 + 200) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(v7 + v8);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
      v1 = v5;
    } while (v5 != nullptr);
  }
  v9 = v2[14];
  v2[14] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  v11 = (_QWORD*)v2[11];
  if (v11 != nullptr) {
    do {
      v12 = (_QWORD*)*v11;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
      v11 = v12;
    } while (v12 != nullptr);
  }
  v14 = v2[9];
  v2[9] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
  }
  v16 = (_QWORD*)v2[6];
  if (v16 != nullptr) {
    do {
      v17 = (_QWORD*)*v16;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
      v16 = v17;
    } while (v17 != nullptr);
  }
  v19 = v2[4];
  v2[4] = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20);
  }
  v21 = (__int64 (***)(_QWORD))v2[1];
  if (v21 != nullptr) {
    v22 = (__int64 (***)(_QWORD))v2[2];
    if (v21 == v22) {
      goto LABEL_40;
    }
    v23 = v22 - 7;
    v24 = v22 - 7;
    do {
      v25 = *v24;
      v24 -= 7;
      result = (_QWORD*)(*v25)(v23);
      v26 = v23 == v21;
      v23 = v24;
    } while (!v26);
    v27 = v2[1];
    v2[2] = v21;
    if (v27 != 0) {
    LABEL_40:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v28 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28);
    }
  }
  return result;
}

#pragma GCC visibility pop
