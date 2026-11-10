#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a97000(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_ad69c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_c19a20(_QWORD, _QWORD);
__int64 GameRoutine_c19a20_alt1(__int64 result, unsigned __int64, __int64,
                                __int64, __int64,
                                __int64) __asm__("GameRoutine_c19a20");
__int64 ResFile_5e5f00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1fd1588;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Layout_c148d0(_QWORD* a1, __int64* a2);
__int64* Layout_c14980(__int64* result);
_QWORD* wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(_QWORD* result,
                                                                __int64 a2);
_QWORD* wld_map_Layout_Internal_LoadDirectModelFile_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2);

_QWORD* Layout_c148d0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v5;
  __int64 v6;

  v2 = *a2;
  if (*a2 != 0) {
    v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v5[2] = 0;
    v5[3] = v2;
    *v5 = &GameData_1fd1588;
    v5[1] = 0;
  }
  else {
    v5 = nullptr;
  }
  *a2 = 0;
  v6 = a1[1];
  *a1 = v2;
  a1[1] = v5;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return a1;
}

__int64* Layout_c14980(__int64* result)
{
  __int64 v1;
  __int64 v2;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    GameRoutine_ad69c0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

_QWORD* wld_map_Layout_Internal_LoadMapModelFile_lambda0_Invoke(_QWORD* result,
                                                                __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
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

  if (*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL) != 0) {
    v3 = result;
    GameRoutine_ad7390(a2);
    v4 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL));
    v5 = v3[1];
    v6 = *(unsigned __int16*)(v4 + 220);
    result = (_QWORD*)(v5 + 24);
    v7 = *(_QWORD*)(v5 + 24);
    v8 = *(_QWORD*)(v5 + 32);
    v9 = (v8 - v7) >> 5;
    if (v6 <= v9) {
      if (v6 < v9) {
        v10 = v7 + 32 * v6;
        if (v10 != v8) {
          v11 = *(_QWORD*)(v5 + 32);
          v12 = fw_memory_g_heap_manager_ptr;
          do {
            v14 = *(_QWORD*)(v11 - 32);
            v11 -= 32;
            v13 = v14;
            if (v14 != 0) {
              *(_QWORD*)(v8 - 24) = v13;
              if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
                v15 = 128;
              }
              else {
                v15 = 56;
              }
              result =
                  (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15);
            }
            v8 = v11;
          } while (v11 != v10);
        }
        *(_QWORD*)(v5 + 32) = v10;
      }
    }
    else {
      result = (_QWORD*)GameRoutine_c19a20(result, v6 - v9);
    }
    if ((_DWORD)v6 != 0) {
      v16 = 0;
      v17 = 0;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        result = GameRoutine_a97000(&v23, a2, (unsigned int)v17);
        v19 = (_QWORD*)(*(_QWORD*)(v3[1] + 24LL) + v16);
        if (*v19 != 0) {
          v19[1] = *v19;
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v20);
          v19[1] = 0;
          v19[2] = 0;
          *v19 = 0;
        }
        *v19 = v23;
        v19[1] = v24;
        v19[2] = v25;
        v24 = 0;
        v25 = 0;
        v23 = 0;
        v19[3] = v26;
        if (v23 != 0) {
          v21 = *(_QWORD*)v18;
          v24 = v23;
          if (*(_QWORD*)(v21 + 200) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22);
        }
        ++v17;
        v16 += 32;
      } while (v6 != v17);
    }
  }
  return result;
}

_QWORD* wld_map_Layout_Internal_LoadDirectModelFile_lambda0_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  GameRoutine_ad7390(a2);
  v4 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 592LL));
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(unsigned __int16*)(v4 + 220);
  result = (_QWORD*)(v9 + 24);
  v12 = *(_QWORD*)(v9 + 24);
  v13 = *(_QWORD*)(v9 + 32);
  v14 = (v13 - v12) >> 5;
  if (v10 <= v14) {
    if (v10 < v14) {
      v15 = v12 + 32 * v10;
      if (v15 != v13) {
        v16 = *(_QWORD*)(v9 + 32);
        v17 = fw_memory_g_heap_manager_ptr;
        do {
          v19 = *(_QWORD*)(v16 - 32);
          v16 -= 32;
          v18 = v19;
          if (v19 != 0) {
            *(_QWORD*)(v13 - 24) = v18;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v20);
          }
          v13 = v16;
        } while (v16 != v15);
      }
      *(_QWORD*)(v9 + 32) = v15;
    }
  }
  else {
    result = (_QWORD*)GameRoutine_c19a20_alt1((__int64)result, v10 - v14, v5,
                                              v6, v7, v8);
  }
  if ((_DWORD)v10 != 0) {
    v21 = 0;
    v22 = 0;
    v23 = fw_memory_g_heap_manager_ptr;
    do {
      result = GameRoutine_a97000(&v28, a2, (unsigned int)v22);
      v24 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + v21);
      if (*v24 != 0) {
        v24[1] = *v24;
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v25);
        v24[1] = 0;
        v24[2] = 0;
        *v24 = 0;
      }
      *v24 = v28;
      v24[1] = v29;
      v24[2] = v30;
      v29 = 0;
      v30 = 0;
      v28 = 0;
      v24[3] = v31;
      if (v28 != 0) {
        v26 = *(_QWORD*)v23;
        v29 = v28;
        if (*(_QWORD*)(v26 + 200) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27);
      }
      ++v22;
      v21 += 32;
    } while (v10 != v22);
  }
  return result;
}

#pragma GCC visibility pop
