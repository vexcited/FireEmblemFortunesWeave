#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*fs_Section_Files_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Files_Destructor(_QWORD* result);

_QWORD* Files_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 i;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* j;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* k;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* m;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = (_QWORD*)result[18];
  v2 = result;
  *result = fs_Section_Files_vtable;
  for (i = fw_memory_g_heap_manager_ptr; v1 != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v4)) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    if ((v5[2] & 1) != 0 && v5[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v6);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
  }
  v7 = v2[16];
  v2[16] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v8);
  }
  for (j = (_QWORD*)v2[13]; j != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v10)) {
    v11 = j;
    j = (_QWORD*)*j;
    if ((v11[2] & 1) != 0 && v11[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v12 = 128;
      }
      else {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v12);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v10 = 128;
    }
    else {
      v10 = 56;
    }
  }
  v13 = v2[11];
  v2[11] = 0;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v14);
  }
  for (k = (_QWORD*)v2[8]; k != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v16)) {
    v17 = k;
    k = (_QWORD*)*k;
    if ((v17[2] & 1) != 0 && v17[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v18);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v16 = 128;
    }
    else {
      v16 = 56;
    }
  }
  v19 = v2[6];
  v2[6] = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v20);
  }
  for (m = (_QWORD*)v2[3]; m != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v22)) {
    v23 = m;
    m = (_QWORD*)*m;
    if ((v23[2] & 1) != 0 && v23[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v24);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v22 = 128;
    }
    else {
      v22 = 56;
    }
  }
  v25 = v2[1];
  v2[1] = 0;
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v26 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)i + v26);
  }
  return result;
}

#pragma GCC visibility pop
