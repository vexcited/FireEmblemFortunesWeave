#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66bfc0(_QWORD);
__int64 GameRoutine_8fd4c0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ExteriorFile_Unknown4_alt1(__int64 a1) __asm__("ExteriorFile_Unknown4");
__int64 Resources_66bfc0(unsigned __int64*);
void GameRoutine_8fd4c0_alt1(__int64, unsigned int,
                             __int64) __asm__("GameRoutine_8fd4c0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ExteriorFile_Unknown4(__int64 a1);

void ExteriorFile_Unknown4(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int** v13;
  unsigned int** v14;
  unsigned int* v15;
  unsigned int v16;
  unsigned int v17;

  v1 = (_QWORD*)(a1 + 8);
  v2 = v1;
  if (v1[18] != 0) {
    v3 = (_QWORD*)v1[17];
    if (v3 != nullptr) {
      v4 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, (__int64)v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = v2[16];
    v2[17] = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(v2[15] + 8 * v9) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 8) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 16) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 24) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 32) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 40) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 48) = 0;
          v11 = v2[15] + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(v2[15] + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    v2[18] = 0;
  }
  v13 = (unsigned int**)v2[7];
  v14 = (unsigned int**)v2[8];
  while (v13 != v14) {
    v15 = *v13;
    v16 = **v13;
    if (v16 != 0) {
      GameRoutine_8fd4c0_alt1((__int64)v2, v16, (__int64)*v13);
    }
    v17 = Resources_66bfc0((unsigned __int64*)v15);
    if (v17 != 0) {
      GameRoutine_8fd4c0_alt1((__int64)v2, v17, (__int64)v15);
    }
    ++v13;
  }
}

#pragma GCC visibility pop
