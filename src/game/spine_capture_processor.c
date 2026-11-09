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
__int64 DGame_1920490(__int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 SpineCaptureProcessor_1921e00(__int64 result);
bool SpineCaptureProcessor_1922700(unsigned __int8* a1, unsigned __int8* a2);

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

__int64 SpineCaptureProcessor_1921e00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v1 = *(_QWORD*)(result + 176);
  v2 = result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
    if ((*(_BYTE*)(v2 + 144) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(result + 144) & 1) == 0) {
    goto LABEL_9;
  }
  if (*(_QWORD*)(v2 + 160) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }

LABEL_9:
  if ((*(_BYTE*)(v2 + 120) & 1) != 0 && *(_QWORD*)(v2 + 136) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(v2 + 96) & 1) != 0 && *(_QWORD*)(v2 + 112) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(v2 + 72) & 1) != 0 && *(_QWORD*)(v2 + 88) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(v2 + 64);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(v2 + 48);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  if (*(_QWORD*)(v2 + 32) != 0) {
    v9 = *(_QWORD**)(v2 + 24);
    v10 = (_QWORD*)(v2 + 16);
    v11 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8LL);
    *(_QWORD*)(*v9 + 8LL) = v11;
    *v11 = *v9;
    *(_QWORD*)(v2 + 32) = 0;
    if (v9 != (_QWORD*)(v2 + 16)) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)v9[1];
        DGame_1920490((__int64)(v9 + 2));
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        v9 = v13;
      } while (v13 != v10);
    }
  }
  return result;
}

bool SpineCaptureProcessor_1922700(unsigned __int8* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;

  v2 = *a1;
  if ((v2 & 1) != 0) {
    v3 = *((_QWORD*)a1 + 1);
  }
  else {
    v3 = v2 >> 1;
  }
  v4 = *a2;
  v5 = *((_QWORD*)a2 + 1);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v3 != v5) {
    return false;
  }
  if ((v2 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 1;
  }
  if ((v4 & 1) != 0) {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v9 = a2 + 1;
  }
  if ((unsigned int)memcmp(v8, v9, v3) != 0) {
    return false;
  }
  v10 = a1[24];
  if ((v10 & 1) != 0) {
    v11 = *((_QWORD*)a1 + 4);
  }
  else {
    v11 = v10 >> 1;
  }
  v12 = a2[24];
  v13 = *((_QWORD*)a2 + 4);
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v11 != v13) {
    return false;
  }
  if ((v10 & 1) != 0) {
    v14 = *((unsigned __int8**)a1 + 5);
  }
  else {
    v14 = a1 + 25;
  }
  if ((v12 & 1) != 0) {
    v15 = *((unsigned __int8**)a2 + 5);
  }
  else {
    v15 = a2 + 25;
  }
  return (unsigned int)memcmp(v14, v15, v11) == 0;
}

#pragma GCC visibility pop
