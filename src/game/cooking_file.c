#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_715440(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9f98;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_925790(void);
__int64 CookingFile_9249e0(__int64 result, char a2);

__int64 CookingFile_9249e0(__int64 result, char a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *(__int64**)(GameData_21c9f98 + 64);
  v3 = *(__int64**)(GameData_21c9f98 + 72);
  if (v2 != v3) {
    v4 = (__int64*)result;
    v5 = 1 << a2;
    do {
      v7 = *v2;
      result = GameRoutine_715440(result);
      if ((int)result >= *(unsigned __int8*)(v7 + 50) &&
          (unsigned __int16)(v5 & *(_WORD*)(v7 + 48)) != 0) {
        v10 = (_QWORD*)v4[1];
        v9 = v4[2];
        if ((unsigned __int64)v10 < v9) {
          *v10 = v7;
          v6 = (__int64)(v10 + 1);
        }
        else {
          v11 = *v4;
          v12 = (__int64)v10 - *v4;
          v13 = (v12 >> 3) + 1;
          if (v13 >> 61 != 0) {
            GameRoutine_925790();
          }
          v14 = v9 - v11;
          if (v14 >> 2 > v13) {
            v13 = v14 >> 2;
          }
          if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v13;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v15;
          v18 = v16 + v12 - 8 * (v12 >> 3);
          *(_QWORD*)(v16 + v12) = v7;
          v6 = v16 + v12 + 8;
          result = memcpy(v18, v11, v12);
          *v4 = v18;
          v4[1] = v6;
          v4[2] = v17;
          if (v11 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
          }
        }
        v4[1] = v6;
      }
      ++v2;
    } while (v2 != v3);
  }
  return result;
}

#pragma GCC visibility pop
