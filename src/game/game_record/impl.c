#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameRecord_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dea8;
_QWORD*
Impl_Destructor_99fae0_alt1(_QWORD* result) __asm__("Impl_Destructor_99fae0");
__int64 Impl_DeletingDestructor_99fc40_alt1(_QWORD* a1) __asm__(
    "Impl_DeletingDestructor_99fc40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_DeletingDestructor_99fc40(_QWORD* a1);
void Impl_Destructor_99fae0(_QWORD* a1);

void Impl_Destructor_99fae0(_QWORD* a1)
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
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v1);
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
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
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
      if ((v11 & 1) != 0) {
        v12 = *(_QWORD*)(v9 - 24);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, v12);
        }
      }
      v9 -= 96;
    } while (v9 != v8);
    v14 = a1[2];
    a1[3] = v8;
    v8 = v14;
    if (v14 != 0) {
    LABEL_21:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v8);
    }
  }
}

void Impl_DeletingDestructor_99fc40(_QWORD* a1)
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
  __int64 v16;

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
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v1);
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
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
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
      if ((v11 & 1) != 0) {
        v12 = *(_QWORD*)(v9 - 24);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, v12);
        }
      }
      v9 -= 96;
    } while (v9 != v8);
    v14 = a1[2];
    a1[3] = v8;
    v8 = v14;
    if (v14 != 0) {
    LABEL_21:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, v8);
    }
  }
  v16 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, (__int64)a1);
}

#pragma GCC visibility pop
