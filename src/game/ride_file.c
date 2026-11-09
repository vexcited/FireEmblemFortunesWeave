#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66bfc0(_QWORD);
__int64 GameRoutine_92bcc0(_QWORD);
__int64 GameRoutine_930580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930d50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f4018;
extern __int64 GameData_21f4058;
extern __int64 GameData_21f4098;
extern __int64 GameData_21f40d8;
extern __int64 GameData_21f4118;
extern __int64 GameData_21f4158;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RideFile_Unknown4(_QWORD* a1);

__int64 RideFile_Unknown4(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int** v19;
  unsigned int** v20;
  unsigned int* v21;
  __int64 v22;
  _BYTE v23[4];

  v23[0] = 0;
  v2 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4018, v2);
  v23[0] = 1;
  v3 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4058, v3);
  v23[0] = 2;
  v4 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4098, v4);
  v23[0] = 3;
  v5 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f40d8, v5);
  v23[0] = 4;
  v6 = GameRoutine_92bcc0(v23);
  GameRoutine_930d50(&GameData_21f4118, v6);
  v23[0] = 5;
  v7 = GameRoutine_92bcc0(v23);
  result = GameRoutine_930d50(&GameData_21f4158, v7);
  if (a1[19] != 0) {
    v9 = (_QWORD*)a1[18];
    if (v9 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = a1[17];
    a1[18] = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v15) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v15 + 48) = 0;
          v17 = a1[16] + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(a1[16] + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    a1[19] = 0;
  }
  v19 = (unsigned int**)a1[8];
  v20 = (unsigned int**)a1[9];
  while (v19 != v20) {
    v21 = *v19;
    v22 = **v19;
    if ((_DWORD)v22 != 0) {
      GameRoutine_930580(a1 + 1, v22, *v19);
    }
    result = GameRoutine_66bfc0(v21);
    if ((_DWORD)result != 0) {
      result = GameRoutine_930580(a1 + 1, (unsigned int)result, v21);
    }
    ++v19;
  }
  return result;
}

#pragma GCC visibility pop
