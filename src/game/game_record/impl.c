#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameRecord_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dea8;
_QWORD* Impl_Destructor_99fae0(_QWORD* result);
__int64 Impl_DeletingDestructor_99fc40(_QWORD* a1);

_QWORD* Impl_Destructor_99fae0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = (_QWORD*)result[7];
  v2 = result;
  *result = game_GameRecord_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[5];
  v2[5] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = v2[2];
  if (v8 != 0) {
    v9 = v2[3];
    if (v8 == v9) {
      goto LABEL_21;
    }
    v10 = GameData_212dea8 + 2;
    do {
      v11 = *(_BYTE*)(v9 - 40);
      *(_QWORD*)(v9 - 48) = v10;
      if ((v11 & 1) != 0 && *(_QWORD*)(v9 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
      }
      v9 -= 96;
    } while (v9 != v8);
    v13 = v2[2];
    v2[3] = v8;
    if (v13 != 0) {
    LABEL_21:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
    }
  }
  return result;
}

__int64 Impl_DeletingDestructor_99fc40(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = (_QWORD*)a1[7];
  *a1 = game_GameRecord_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[5];
  a1[5] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = a1[2];
  if (v8 != 0) {
    v9 = a1[3];
    if (v8 == v9) {
      goto LABEL_21;
    }
    v10 = GameData_212dea8 + 2;
    do {
      v11 = *(_BYTE*)(v9 - 40);
      *(_QWORD*)(v9 - 48) = v10;
      if ((v11 & 1) != 0 && *(_QWORD*)(v9 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
      }
      v9 -= 96;
    } while (v9 != v8);
    v13 = a1[2];
    a1[3] = v8;
    if (v13 != 0) {
    LABEL_21:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
    }
  }
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v15 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
}

#pragma GCC visibility pop
