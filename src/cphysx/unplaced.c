#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 (***cphysx_149fa70(_QWORD* a1))(_QWORD);

__int64 (***cphysx_149fa70(_QWORD* a1))(_QWORD)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  void (***v9)(_QWORD);
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (***result)(_QWORD);

  v1 = (__int64*)a1[4];
  a1[4] = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = *v1;
    if (*v1 != 0) {
      *v1 = 0;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    }
    v5 = v1[1];
    v1[1] = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
    }
    v6 = *v1;
    *v1 = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
    }
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = a1[3];
  a1[3] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  }
  v9 = (void (***)(_QWORD))a1[2];
  a1[2] = 0;
  if (v9 != nullptr) {
    (**v9)(v9);
  }
  v10 = (__int64*)a1[4];
  a1[4] = 0;
  if (v10 != nullptr) {
    v11 = *v10;
    if (*v10 != 0) {
      *v10 = 0;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11);
    }
    v12 = v10[1];
    v10[1] = 0;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 56LL))(v12);
    }
    v13 = *v10;
    *v10 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13);
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  v15 = a1[3];
  a1[3] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  }
  result = (__int64 (***)(_QWORD))a1[2];
  a1[2] = 0;
  if (result != nullptr) {
    return (__int64 (***)(_QWORD))(**result)(result);
  }
  return result;
}

#pragma GCC visibility pop
