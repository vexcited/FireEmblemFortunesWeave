#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_93f620(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2246cb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212ddc0[3];
_QWORD* SortiePlanTrainingArgs_Destructor(_QWORD* result);
_QWORD* SortiePlanTrainingArgs_1426ca0(_QWORD* result);
__int64 SortiePlanTrainingArgs_DeletingDestructor(_QWORD* a1);
__int64 SortiePlanTrainingArgs_1426ea0(_QWORD* a1);
__int64 SortiePlanTrainingArgs_Unknown4(__int64 a1);
__int64 SortiePlanTrainingArgs_14272f0(__int64 a1);

_QWORD* SortiePlanTrainingArgs_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[5];
  v3 = (_QWORD**)result[6];
  result[1] = GameData_212ddc0[0] + 2;
  result[3] = result[2];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[5];
  }
  v1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

_QWORD* SortiePlanTrainingArgs_1426ca0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[4];
  v3 = (_QWORD**)result[5];
  *result = GameData_212ddc0[0] + 2;
  result[2] = result[1];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[4];
  }
  v1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

__int64 SortiePlanTrainingArgs_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[5];
  v3 = (_QWORD*)a1[6];
  a1[1] = GameData_212ddc0[0] + 2;
  a1[3] = a1[2];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[5];
  }
  a1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__int64 SortiePlanTrainingArgs_1426ea0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[4];
  v3 = (_QWORD*)a1[5];
  *a1 = GameData_212ddc0[0] + 2;
  a1[2] = a1[1];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[4];
  }
  a1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__int64 SortiePlanTrainingArgs_Unknown4(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_93f620();
  *(_BYTE*)(a1 + 64) = result;
  return result;
}

__int64 SortiePlanTrainingArgs_14272f0(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_93f620();
  *(_BYTE*)(a1 + 56) = result;
  return result;
}

#pragma GCC visibility pop
