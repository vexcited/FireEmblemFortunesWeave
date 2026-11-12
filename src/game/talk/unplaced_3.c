#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_113b050(PSEUDO_X8, const char*);
__int64 GameHr_156ca00(__int64, const char*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_talk_112ff80(__int64 a1, const char* a2, const char* a3,
                          const char* a4, int a5, int a6);

_QWORD* game_talk_112ff80(__int64 a1, const char* a2, const char* a3,
                          const char* a4, int a5, int a6)
{
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* result;
  _QWORD* v33;
  __int64 v34;
  _QWORD v36[3];

  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       104, 16, 0);
  *(_QWORD*)v12 = 0;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  GameRoutine_60a020(v12, a2);
  GameRoutine_60a020(v12 + 24, a3);
  v13 = a4;
  v14 = (__int64*)v11;
  GameHr_156ca00(v12 + 48, v13);
  GameRoutine_113b050((void*)((__int64)v36), a2);
  if ((*(_BYTE*)(v12 + 72) & 1) != 0) {
    v15 = *(_QWORD*)(v12 + 88);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v15);
    }
  }
  v17 = v36[1];
  *(_QWORD*)(v12 + 72) = v36[0];
  *(_QWORD*)(v12 + 80) = v17;
  v18 = *(int*)(a1 + 8);
  *(_QWORD*)(v12 + 88) = v36[2];
  *(_DWORD*)(v12 + 96) = a5;
  *(_DWORD*)(v12 + 100) = a6;
  if (*(_QWORD*)(a1 + 32) >= v18) {
    v19 = *(_QWORD**)(a1 + 24);
    v20 = v19[2];
    if (v20 != 0) {
      if ((*(_BYTE*)(v20 + 72) & 1) != 0) {
        v21 = *(_QWORD*)(v20 + 88);
        if (v21 != 0) {
          v22 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v22, v21);
        }
      }
      if ((*(_BYTE*)(v20 + 48) & 1) != 0) {
        v23 = *(_QWORD*)(v20 + 64);
        if (v23 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v24, v23);
        }
      }
      if ((*(_BYTE*)(v20 + 24) & 1) != 0) {
        v25 = *(_QWORD*)(v20 + 40);
        if (v25 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v26, v25);
        }
      }
      if ((*(_BYTE*)v20 & 1) != 0) {
        v27 = *(_QWORD*)(v20 + 16);
        if (v27 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v28, v27);
        }
      }
      v29 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v29, v20);
      *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) = 0;
      v19 = *(_QWORD**)(a1 + 24);
    }
    v30 = (_QWORD*)v19[1];
    *(_QWORD*)(*v19 + 8LL) = v30;
    *v30 = *v19;
    --*(_QWORD*)(a1 + 32);
    v31 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v31, (__int64)v19);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate(*v14, 24, 16, 0);
  v34 = *(_QWORD*)(a1 + 16);
  v33 = (_QWORD*)(a1 + 16);
  result[1] = v33;
  result[2] = v12;
  *result = v34;
  *(_QWORD*)(v34 + 8) = result;
  *v33 = result;
  ++v33[2];
  return result;
}

#pragma GCC visibility pop
