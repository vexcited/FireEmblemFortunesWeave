#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1096780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d35d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1aa9224;
extern __int64 GameData_220f8c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD);
__int64 LegionGambitCamera_e59e90(__int64 result);
float* LegionGambitCamera_e5a880(float* result, _BYTE* a2);
__int64 LegionGambitCamera_e5ab60(__int64 a1);

__int64 LegionGambitCamera_e59e90(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result;
  if ((*(_BYTE*)(result + 200) & 1) != 0 && *(_QWORD*)(result + 216) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(v1 + 168) & 1) != 0 && *(_QWORD*)(v1 + 184) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = *(_QWORD*)(v1 + 48);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak();
  }
  v5 = *(_QWORD*)(v1 + 32);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak();
    v6 = *(_QWORD*)(v1 + 16);
    if (v6 == 0) {
      return result;
    }
  }
  else {
    v6 = *(_QWORD*)(v1 + 16);
    if (v6 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

float* LegionGambitCamera_e5a880(float* result, _BYTE* a2)
{
  int v2;
  unsigned __int8* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int* v11;
  int v12;
  float* v13;
  float* v14;
  unsigned __int8* v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  int v20;

  if (a2 != nullptr) {
    v2 = (unsigned __int8)*a2;
    if (*a2 != 0) {
      v3 = a2 + 1;
      v4 = 0;
      do {
        v4 = v2 - v4 + 32 * v4;
        v5 = *v3++;
        v2 = v5;
      } while (v5 != 0);
    }
    else {
      v4 = 0;
    }
    v6 = *(_QWORD*)(GameData_220f8c8 + 8);
    v7 = *(_QWORD*)(GameData_220f8c8 + 16);
    v8 = v7 - v6;
    if (v7 != v6) {
      v9 = 0;
      v10 = 0x4EC4EC4EC4EC4EC5LL * (v8 >> 3);
      v11 = (int*)(v6 + 24);
      while (1) {
        v12 = *v11;
        v11 += 26;
        if (v4 == v12) {
          break;
        }
        if (v10 == ++v9) {
          return result;
        }
      }
      if (v9 >= 1) {
        if (v10 <= (unsigned int)v9) {
          GameRoutine_d38e30(result);
        }
        v13 = result + 42;
        if ((float*)(v6 + 104LL * (unsigned int)v9) != result + 42) {
          v14 = result;
          GameRoutine_d35d20(result + 42);
          GameRoutine_1a09ce0(v13, &GameData_1aa9224, 14);
          v15 = (unsigned __int8*)v14 + 169;
          result = v14;
          if (((_BYTE)v14[42] & 1) != 0) {
            v15 = *((unsigned __int8**)v14 + 23);
          }
          v18 = *v15;
          v17 = v15 + 1;
          v16 = v18;
          if (v18 != 0) {
            v19 = 0;
            do {
              v19 = v16 - v19 + 32 * v19;
              v20 = *v17++;
              v16 = v20;
            } while (v20 != 0);
          }
          else {
            v19 = 0;
          }
          *((_DWORD*)v14 + 48) = v19;
        }
        if (*(_BYTE*)(*(_QWORD*)result + 146LL) == 1) {
          result[58] = (float)(90.0f - result[58]) + 90.0f;
          result[60] = -result[60];
          result[63] = -result[63];
        }
        return (float*)GameRoutine_1096780(
            *(_QWORD*)(*GameData_212d448[0] + 128), v13, 0);
      }
    }
  }
  return result;
}

__int64 LegionGambitCamera_e5ab60(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 224) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
