#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14552a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_203f490[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_StateEndFront_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* StateBlackOutWait_Unknown4_alt1(__int64 a1, _QWORD* a2) __asm__(
    "StateBlackOutWait_Unknown4");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_14552a0_alt1(__int64*) __asm__("GameRoutine_14552a0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void StateBlackOutWait_Unknown4(__int64 a1, __int64* a2);

void StateBlackOutWait_Unknown4(__int64 a1, __int64* a2)
{
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v5 = a2[9];
  v4[1] = 0;
  v4[2] = 0;
  v6 = v4;
  *v4 = GameData_203f490;
  v4[3] = game_facility_SceneCameraWorkUpdater_StateEndFront_vtable;
  v7 = v4 + 3;
  v8 = (__int64*)a2[6];
  v9 = *(_QWORD*)(v8[v5 >> 9] + 8 * (v5 & 0x1FF));
  if ((*(_BYTE*)(v9 + 200) & 4) != 0) {
    v11 = (__int64*)a2[7];
    if (v11 == v8) {
      v12 = 0;
    }
    else {
      v12 = (((char*)v11 - (char*)v8) << 6) - 1;
    }
    v13 = a2[10] + v5;
    if (v12 == v13) {
      GameRoutine_14552a0_alt1(a2 + 5);
      v8 = (__int64*)a2[6];
      v13 = a2[10] + a2[9];
    }
    *(_QWORD*)(v8[v13 >> 9] + 8 * (v13 & 0x1FF)) = v9;
    v8 = (__int64*)a2[6];
    v5 = a2[9];
    v10 = a2[10];
  }
  else {
    v10 = a2[10] - 1;
  }
  v14 = v5 + 1;
  a2[9] = v14;
  a2[10] = v10;
  if (v14 >= 0x400) {
    if (*v8 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, *v8);
      v8 = (__int64*)a2[6];
      v14 = a2[9];
    }
    a2[6] = (__int64)(v8 + 1);
    a2[9] = v14 - 512;
  }
  v16 = a2[17];
  a2[16] = (__int64)v7;
  a2[17] = (__int64)v6;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
}

#pragma GCC visibility pop
