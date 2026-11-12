#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*fs_Section_Files_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Files_Destructor_alt1(_QWORD* result) __asm__("Files_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Files_Destructor(_QWORD* a1);

void Files_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = (_QWORD*)a1[18];
  *a1 = fs_Section_Files_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  while (v1 != nullptr) {
    v5 = (__int64)v1;
    v1 = (_QWORD*)*v1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 && *(_QWORD*)(v5 + 32) != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(v5 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
      v5 = v6;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
  }
  v9 = a1[16];
  a1[16] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v9);
  }
  v11 = (_QWORD*)a1[13];
  while (v11 != nullptr) {
    v13 = (__int64)v11;
    v11 = (_QWORD*)*v11;
    if ((*(_BYTE*)(v13 + 16) & 1) != 0 && *(_QWORD*)(v13 + 32) != 0) {
      v14 = v13;
      v15 = *(_QWORD*)(v13 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v16 = 128;
      }
      else {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, v15);
      v13 = v14;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v12 = 128;
    }
    else {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v13);
  }
  v17 = a1[11];
  a1[11] = 0;
  if (v17 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, v17);
  }
  v19 = (_QWORD*)a1[8];
  while (v19 != nullptr) {
    v21 = (__int64)v19;
    v19 = (_QWORD*)*v19;
    if ((*(_BYTE*)(v21 + 16) & 1) != 0 && *(_QWORD*)(v21 + 32) != 0) {
      v22 = v21;
      v23 = *(_QWORD*)(v21 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v24, v23);
      v21 = v22;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v20 = 128;
    }
    else {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v20, v21);
  }
  v25 = a1[6];
  a1[6] = 0;
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v26, v25);
  }
  v27 = (_QWORD*)a1[3];
  while (v27 != nullptr) {
    v29 = (__int64)v27;
    v27 = (_QWORD*)*v27;
    if ((*(_BYTE*)(v29 + 16) & 1) != 0 && *(_QWORD*)(v29 + 32) != 0) {
      v30 = v29;
      v31 = *(_QWORD*)(v29 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v32 = 128;
      }
      else {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v32, v31);
      v29 = v30;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v28 = 128;
    }
    else {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v28, v29);
  }
  v33 = a1[1];
  a1[1] = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v34, v33);
  }
}

#pragma GCC visibility pop
