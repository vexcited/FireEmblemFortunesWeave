#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_RidePool_List_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
List_Destructor_93b7a0_alt1(_QWORD* result) __asm__("List_Destructor_93b7a0");
__int64 List_93b820_alt1(__int64 result) __asm__("List_93b820");
__int64 List_DeletingDestructor_93bae0_alt1(_QWORD* a1) __asm__(
    "List_DeletingDestructor_93bae0");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void List_Destructor_93b7a0(_QWORD* a1);
void List_93b820(__int64* a1);
void List_DeletingDestructor_93bae0(_QWORD* a1);

void List_Destructor_93b7a0(_QWORD* a1)
{
  __int64* v1;
  __int64 v3;

  v1 = (__int64*)a1[1];
  *a1 = game_RidePool_List_vtable;
  if (v1 != nullptr) {
    List_93b820(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)v1);
    a1[1] = 0;
  }
}

void List_93b820(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v1 = a1[22];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[23] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[19];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[20] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = a1[15];
  if (v9 != 0) {
    v10 = a1[16];
    if (v9 == v10) {
      goto LABEL_24;
    }
    v11 = v10 - 32;
    do {
      v14 = *(_BYTE*)(v11 + 8);
      *(_DWORD*)(v11 - 24) = 0;
      *(_QWORD*)(v11 - 32) = 0;
      if ((v14 & 1) != 0) {
        **(_BYTE**)(v11 + 24) = 0;
        *(_QWORD*)(v11 + 16) = 0;
      }
      else {
        *(_WORD*)(v11 + 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v11 - 16, *(_QWORD**)(v11 - 8));
      v15 = *(_BYTE*)(v11 + 8);
      *(_QWORD*)v11 = 0;
      *(_QWORD*)(v11 - 16) = v11 - 8;
      *(_QWORD*)(v11 - 8) = 0;
      if ((v15 & 1) != 0) {
        v12 = *(_QWORD**)(v11 + 24);
        if (v12 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, (__int64)v12);
          v12 = *(_QWORD**)(v11 - 8);
        }
      }
      else {
        v12 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v11 - 16, v12);
      v13 = v11 - 32;
      v11 -= 64;
    } while (v13 != v9);
    v17 = a1[15];
    a1[16] = v9;
    v9 = v17;
    if (v17 != 0) {
    LABEL_24:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, v9);
    }
  }
  v19 = (_QWORD*)a1[12];
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v21, (__int64)v19);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = a1[10];
  a1[10] = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v23, v22);
  }
  v24 = (_QWORD*)a1[7];
  if (v24 != nullptr) {
    do {
      v25 = (_QWORD*)*v24;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v26 = 128;
      }
      else {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v26, (__int64)v24);
      v24 = v25;
    } while (v25 != nullptr);
  }
  v27 = a1[5];
  a1[5] = 0;
  if (v27 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v28, v27);
  }
  v29 = (_QWORD*)a1[2];
  if (v29 != nullptr) {
    do {
      v30 = (_QWORD*)*v29;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v31 = 128;
      }
      else {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v31, (__int64)v29);
      v29 = v30;
    } while (v30 != nullptr);
  }
  v32 = *a1;
  *a1 = 0;
  if (v32 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v33, v32);
  }
}

void List_DeletingDestructor_93bae0(_QWORD* a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = (__int64*)a1[1];
  *a1 = game_RidePool_List_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    List_93b820(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, (__int64)v1);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)a1);
}

#pragma GCC visibility pop
