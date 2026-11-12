#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LegionStateBattleSupporterEnd_Unknown2(__int64 result);
__int64 CombatLegionManager_e2d1a0(__int64, int);
__int64 GameRoutine_e3b8e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void game_combat_e43d60(__int64);
void LegionStateBattleSupporterEnd_Unknown3_alt1(__int64 a1) __asm__(
    "LegionStateBattleSupporterEnd_Unknown3");
__attribute__((swiftcall)) void
LegionStateBattleSupporterEnd_Unknown6(PSEUDO_X8 x8_);
__int64 game_combat_e43d60_alt1(__int64 result) __asm__("game_combat_e43d60");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 LegionStateBattleSupporterEnd_Unknown3(__int64 a1);

__int64 LegionStateBattleSupporterEnd_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  unsigned int v21;
  __int64 v22;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16, 16, 0),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)v3 = 0x5000000003LL;
  *(_QWORD*)(v3 + 8) = 0xA00000000LL;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v10 = *(_DWORD*)(v3 + 4);
  v11 = v9 -
        90 * ((unsigned int)((3054198967u * (unsigned __int64)v9) >> 32) >> 6);
  v12 = (unsigned int*)v3;
  if (v11 >= v10) {
    if (v11 >= *(_DWORD*)(v3 + 12) + v10) {
      v12 = (unsigned int*)v3;
    }
    else {
      v12 = (unsigned int*)(v3 + 8);
    }
  }
  v13 = *v12;
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v14, v3),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(a1 + 32) == 1) {
    *(_WORD*)(a1 + 28) = 0;
    *(_DWORD*)(a1 + 24) = v13;
  }
  else {
    *(_QWORD*)(a1 + 24) = v13;
    *(_BYTE*)(a1 + 32) = 1;
  }
  v16 = CombatLegionManager_e2d1a0(v15, 0),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)v16 == 1) {
    v17 = 0x100000000LL;
  LABEL_20:
    v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 128LL);
    *(_DWORD*)(v22 + 136) = v17;
    *(_BYTE*)(v22 + 140) = BYTE4(v17);
    return game_combat_e43d60_alt1(v22);
  }
  v17 = 0x13F800000LL;
  v18 = CombatLegionManager_e2d1a0(v16, 1),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)v18 == 1) {
    goto LABEL_20;
  }
  v19 = CombatLegionManager_e2d1a0(v18, 2),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)v19 == 1) {
    v17 = 0x140000000LL;
    goto LABEL_20;
  }
  result = CombatLegionManager_e2d1a0(v19, 3),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((_DWORD)result == 1) {
    v21 = 3;
  }
  else {
    v21 = 0;
  }
  if ((_DWORD)result == 1) {
    v17 = COERCE_UNSIGNED_INT((float)v21) | 0x100000000LL;
    goto LABEL_20;
  }
  return result;
}

__attribute__((swiftcall)) void

LegionStateBattleSupporterEnd_Unknown6(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD v2[2];
  __int64 vars0;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2[0] = 0xA00000003LL;
  v2[1] = 0x3200000000LL;
  {
    GameRoutine_e3b8e0(a1, v2, &vars0, 2);
    return;
  }
}

__int64 LegionStateBattleSupporterEnd_Unknown2(__int64 result)
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
