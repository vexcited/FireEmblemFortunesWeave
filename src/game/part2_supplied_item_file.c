#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12eaba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212c060;
extern __int64 GameData_21c9f70;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_12e7ad0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 Part2SuppliedItemFile_Unknown4(__int64 a1);

__int64 Part2SuppliedItemFile_Unknown4(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  bool v28;
  __int64 v29;

  v29 = a1;
  v1 = *(__int64**)(GameData_21c9f70 + 64);
  v2 = *(__int64**)(GameData_21c9f70 + 72);
  if (v1 != v2) {
    v3 = a1 + 264;
    do {
      v5 = *v1;
      v6 = (__int64*)(v3 + 24LL * *(unsigned __int8*)(*v1 + 32));
      v8 = (_QWORD*)v6[1];
      v7 = v6[2];
      if ((unsigned __int64)v8 < v7) {
        *v8 = v5;
        v4 = (__int64)(v8 + 1);
      }
      else {
        v9 = *v6;
        v10 = (__int64)v8 - *v6;
        v11 = (v10 >> 3) + 1;
        if (v11 >> 61 != 0) {
          GameRoutine_12e7ad0();
        }
        v12 = v7 - v9;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v13 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v11;
        }
        if (v13 != 0) {
          if (v13 >> 61 != 0) {
            GameRoutine_60a210(a1);
          }
          v14 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
        }
        else {
          v14 = 0;
        }
        v15 = v14 + 8 * v13;
        v16 = v14 + v10 - 8 * (v10 >> 3);
        *(_QWORD*)(v14 + v10) = v5;
        v4 = v14 + v10 + 8;
        a1 = memcpy(v16, v9, v10);
        *v6 = v16;
        v6[1] = v4;
        v6[2] = v15;
        if (v9 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
        }
      }
      ++v1;
      v6[1] = v4;
    } while (v1 != v2);
  }
  v18 = 264;
  v19 = GameData_212c060;
  v20 = v29;
  do {
    v23 = *(_QWORD*)(v20 + v18);
    v24 = *(_QWORD*)(v20 + v18 + 8);
    if ((v24 - v23) >> 3 < 129) {
      v27 = 0;
    LABEL_33:
      result = GameRoutine_12eaba0(v23, v24, (v24 - v23) >> 3, 0, v27);
    }
    else {
      v25 = (v24 - v23) >> 3;
      while (1) {
        v26 = GameRoutine_1a09d20(8 * v25, v19);
        if (v26 != 0) {
          break;
        }
        v27 = v25 >> 1;
        v28 = v25 > 1;
        v25 >>= 1;
        if (!v28) {
          goto LABEL_33;
        }
      }
      GameRoutine_12eaba0(v23, v24, (v24 - v23) >> 3, v26, v25);
      v20 = v29;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
    }
    v18 += 24;
  } while (v18 != 624);
  return result;
}

#pragma GCC visibility pop
