#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006e20(_QWORD);
__int64 GameRoutine_17549a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fee0e0[])();
extern __int64 GameData_2219080;
extern __int64 GameData_22190c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8c43b0(_QWORD);
__int64 game_cmdbtl_anonymous_ProcMapSeqResultExp_Open(__int64 result);

__int64 game_cmdbtl_anonymous_ProcMapSeqResultExp_Open(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64** v3;
  __int64** v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  char v9;
  char v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;

  v1 = GameData_2219080;
  if (*(_QWORD*)(GameData_2219080 + 40) == *(_QWORD*)(GameData_2219080 + 32)) {
    return result;
  }
  v21 = result;
  v2 = GameRoutine_1006e20(GameData_22190c0);
  v4 = *(__int64***)(v1 + 32);
  v3 = *(__int64***)(v1 + 40);
  v26 = 0;
  v27 = 0;
  v25 = 0;
  if (v4 != v3) {
    v5 = 0;
    v22 = v3;
    do {
      v6 = **v4;
      v7 = *((_DWORD*)*v4 + 3);
      v8 = *((_DWORD*)*v4 + 5);
      v9 = *((_BYTE*)*v4 + 16);
      v10 = *((_BYTE*)*v4 + 17);
      if (v5 < v27) {
        *(_QWORD*)v5 = v6;
        *(_DWORD*)(v5 + 8) = v7;
        *(_DWORD*)(v5 + 12) = v8;
        *(_BYTE*)(v5 + 16) = v9;
        *(_BYTE*)(v5 + 17) = v10;
        v5 += 24LL;
      }
      else {
        v11 = v25;
        v12 = v5 - v25;
        v13 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v25) >> 3) + 1;
        if (v13 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_8c43b0(v2);
        }
        if (0x5555555555555556LL * ((__int64)(v27 - v25) >> 3) > v13) {
          v13 = 0x5555555555555556LL * ((__int64)(v27 - v25) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v27 - v25) >> 3) >=
            0x555555555555555LL) {
          v14 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v14 = v13;
        }
        if (v14 != 0) {
          if (v14 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210(v2);
          }
          v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               24 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + v12;
        *(_QWORD*)v16 = v6;
        v17 = v15 + 24 * v14;
        *(_DWORD*)(v16 + 8) = v7;
        *(_DWORD*)(v16 + 12) = v8;
        *(_BYTE*)(v16 + 16) = v9;
        v5 = v15 + v12 + 24;
        *(_BYTE*)(v16 + 17) = v10;
        v2 = memcpy(v15, v11, v12);
        v25 = v15;
        v27 = v17;
        if (v11 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          v2 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
        }
        v3 = v22;
      }
      v4 += 2;
      v26 = v5;
    } while (v4 != v3);
  }
  v23[0] = GameData_1fee0e0;
  v24 = v23;
  GameRoutine_17549a0(v21, &v25, 1, v23);
  result = (__int64)v24;
  if (v24 == v23) {
    v19 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_27;
    }
    v19 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v24 + v19))((__int64)v24);
LABEL_27:
  if (v25 != 0) {
    v26 = v25;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  return result;
}

#pragma GCC visibility pop
