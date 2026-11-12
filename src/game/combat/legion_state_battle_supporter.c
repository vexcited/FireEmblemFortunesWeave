#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionStateBattleSupporter_Unknown2(__int64 result);
__int64 GameRoutine_e3b8e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_combat_e43d60(__int64);
void LegionStateBattleSupporter_Unknown3_alt1(__int64 a1) __asm__(
    "LegionStateBattleSupporter_Unknown3");
__attribute__((swiftcall)) void
LegionStateBattleSupporter_Unknown6(PSEUDO_X8 x8_);
__int64 game_combat_e43d60_alt1(__int64 result) __asm__("game_combat_e43d60");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 LegionStateBattleSupporter_Unknown3(__int64 a1);

__int64 LegionStateBattleSupporter_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  signed int v10;
  signed int v11;
  unsigned int* v12;
  signed int v13;
  signed int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float* v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_QWORD*)v3 = 0x1400000003LL;
  *(_QWORD*)(v3 + 8) = 0x3200000000LL;
  *(_QWORD*)(v3 + 16) = 0xA00000009LL;
  *(_QWORD*)(v3 + 24) = 0xA0000000ALL;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v4 = game_map_MapRandom_instance__ptr[0];
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v7 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v4 + 1) = v5;
  v8 = (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) = v8;
  v9 = v8 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v10 = *(_DWORD*)(v3 + 4);
  v11 = v9 -
        90 * ((unsigned int)((3054198967u * (unsigned __int64)v9) >> 32) >> 6);
  v12 = (unsigned int*)v3;
  if (v11 >= v10) {
    v13 = *(_DWORD*)(v3 + 12) + v10;
    v12 = (unsigned int*)(v3 + 8);
    if (v11 >= v13) {
      v14 = *(_DWORD*)(v3 + 20) + v13;
      v12 = (unsigned int*)(v3 + 16);
      if (v11 >= v14) {
        if (v11 >= *(_DWORD*)(v3 + 28) + v14) {
          v12 = (unsigned int*)v3;
        }
        else {
          v12 = (unsigned int*)(v3 + 24);
        }
      }
    }
  }
  v15 = *v12;
  v16 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v16, v3);
  if (*(_BYTE*)(a1 + 32) == 1) {
    *(_WORD*)(a1 + 28) = 0;
    *(_DWORD*)(a1 + 24) = v15;
  }
  else {
    *(_QWORD*)(a1 + 24) = v15;
    *(_BYTE*)(a1 + 32) = 1;
  }
  v17 = 0x1.99999a0000000p-4f;
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL);
  v19 = *(float**)(v18 + 80);
  v20 = *(_QWORD*)(v18 + 128);
  v21 = *v19;
  v22 = v19[1];
  *(_BYTE*)(v20 + 140) = 1;
  v23 = 0x1.cccccc0000000p-1f;
  if (v21 < 0x1.99999a0000000p-1f) {
    v23 = 0x1.0000000000000p-1f;
  }
  if (v21 > 0x1.99999a0000000p-3f) {
    v17 = v23;
  }
  *(float*)(v20 + 136) =
      fminf(fmaxf(v17 + (float)((float)(v22 + -0x1.0000000000000p-1f) *
                                0x1.99999a0000000p-3f),
                  0x0.0p+0f),
            0x1.0000000000000p+0f);
  return game_combat_e43d60_alt1(v20);
}

__attribute__((swiftcall)) void

LegionStateBattleSupporter_Unknown6(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD v2[4];
  __int64 vars0;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2[0] = 0xF00000003LL;
  v2[1] = 0x2800000000LL;
  v2[2] = 0x300000009LL;
  v2[3] = 0x30000000ALL;
  {
    GameRoutine_e3b8e0(a1, v2, &vars0, 4);
    return;
  }
}

__int64 LegionStateBattleSupporter_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  if (*(_BYTE*)(result + 32) == 1) {
    *(_BYTE*)(result + 32) = 0;
  }
  *(_BYTE*)(result + 36) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

#pragma GCC visibility pop
