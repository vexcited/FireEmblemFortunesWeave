#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1921e00(_QWORD);
__int64 GameRoutine_1922700(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_SpineCaptureProcessor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SpineCaptureProcessor_Unknown2(__int64 a1, __int64 a2);
_QWORD* SpineCaptureProcessor_Destructor(_QWORD* result);
__int64 SpineCaptureProcessor_DeletingDestructor(_QWORD* a1);

_QWORD* SpineCaptureProcessor_Unknown2(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;

  v2 = *(_QWORD**)(a1 + 48);
  v3 = (_QWORD*)(a1 + 40);
  if (v2 == (_QWORD*)(a1 + 40)) {
    v9 = (_QWORD*)(a1 + 40);
    v8 = (_QWORD*)(a1 + 40);
  }
  else {
    v5 = (_QWORD*)(a1 + 40);
    v6 = (_QWORD*)(a1 + 40);
    do {
      v7 = (_QWORD*)v2[5];
      if (v7 == v2 + 4) {
      LABEL_7:
        v8 = v5;
      }
      else {
        while ((GameRoutine_1922700(a2, v7 + 2) & 1) == 0) {
          v7 = (_QWORD*)v7[1];
          if (v7 == v2 + 4) {
            goto LABEL_7;
          }
        }
        v8 = v2;
        if (v5 != v3) {
          if (v5[6] <= v2[6]) {
            v8 = v5;
          }
          else {
            v8 = v2;
          }
        }
      }
      v9 = v2;
      if (v6 != v3) {
        if (v6[6] <= v2[6]) {
          v9 = v6;
        }
        else {
          v9 = v2;
        }
      }
      v2 = (_QWORD*)v2[1];
      v5 = v8;
      v6 = v9;
    } while (v2 != v3);
  }
  if (v8 == v3) {
    return v9;
  }
  else {
    return v8;
  }
}

_QWORD* SpineCaptureProcessor_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v1 = result;
  *result = game_SpineCaptureProcessor_vtable;
  if (result[7] != 0) {
    v2 = (_QWORD*)result[6];
    v3 = result + 5;
    v4 = *(_QWORD**)(result[5] + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    result[7] = 0;
    if (v2 != result + 5) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)v2[1];
        GameRoutine_1921e00(v2 + 2);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v2 = v6;
      } while (v6 != v3);
    }
  }
  v8 = v1[4];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 SpineCaptureProcessor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_SpineCaptureProcessor_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[7] != 0) {
    v3 = (_QWORD*)a1[6];
    v4 = a1 + 5;
    v5 = *(_QWORD**)(a1[5] + 8LL);
    *(_QWORD*)(*v3 + 8LL) = v5;
    *v5 = *v3;
    a1[7] = 0;
    if (v3 != a1 + 5) {
      do {
        v6 = (_QWORD*)v3[1];
        GameRoutine_1921e00(v3 + 2);
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
        v3 = v6;
      } while (v6 != v4);
    }
  }
  v8 = a1[4];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
}

#pragma GCC visibility pop
