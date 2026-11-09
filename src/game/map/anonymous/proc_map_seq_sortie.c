#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_182ae70(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_743a00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fa4240[])();
extern __int64 (*GameData_1ff1408[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqSortie_Pickup_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqSortie_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
extern __int64 GameData_21ee318;
extern __int64 GameData_21eea38;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqSortie_Destructor(__int64 a1);
__int64 ProcMapSeqSortie_DeletingDestructor(__int64 a1);
_QWORD* ProcMapSeqSortie_Unknown3(__int64 a1);
__int64 ProcMapSeqSortie_Unknown9(__int64 a1);
_QWORD* ProcMapSeqSortie_Unknown12(__int64 a1);

__int64 ProcMapSeqSortie_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqSortie_vtable;
  v2 = GameData_21cd120;
  v3 = *(_QWORD*)(GameData_21cd120 + 120);
  *(_QWORD*)(GameData_21cd120 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1553220(22);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 208) = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  *(_QWORD*)(a1 + 216) = -1;
  GameRoutine_743a00(GameData_21cd108);
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa4240;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_9:
  GameData_21eea38 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqSortie_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqSortie_vtable;
  v2 = GameData_21cd120;
  v3 = *(_QWORD*)(GameData_21cd120 + 120);
  *(_QWORD*)(GameData_21cd120 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1553220(22);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 208) = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  *(_QWORD*)(a1 + 216) = -1;
  GameRoutine_743a00(GameData_21cd108);
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa4240;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_9:
  GameData_21eea38 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

_QWORD* ProcMapSeqSortie_Unknown3(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;

  v1 = *(_DWORD*)(a1 + 216);
  if (v1 < 1) {
    v3 = 0;
    v4 = 0;
    v2 = 0;
  }
  else {
    v2 = *(_QWORD*)(a1 + 224);
    v3 = 1;
    v4 = (unsigned __int8)v1 | ((unsigned __int8)*(_DWORD*)(a1 + 220) << 8);
  }
  v5 = *(_QWORD*)GameData_212d020[0];
  result = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40,
                                                   16, 0);
  result[2] = 0;
  result[4] = 0;
  *result = GameData_1ff1408;
  result[1] = 0;
  result[3] = 0;
  v7 = *(_QWORD*)(v5 + 120);
  *(_QWORD*)(v5 + 112) = result + 3;
  *(_QWORD*)(v5 + 120) = result;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v7);
  }
  **(_QWORD**)(v5 + 112) = v2;
  v8 = *(_QWORD*)(v5 + 112);
  if (*(unsigned __int8*)(v8 + 12) == v3) {
    if (*(_BYTE*)(v8 + 12) != 0) {
      *(_DWORD*)(v8 + 8) = v4;
    }
  }
  else if (*(_BYTE*)(v8 + 12) != 0) {
    *(_BYTE*)(v8 + 12) = 0;
  }
  else {
    *(_BYTE*)(v8 + 8) = v4;
    *(_WORD*)(v8 + 10) = 0;
    *(_BYTE*)(v8 + 9) = BYTE1(v4);
    *(_BYTE*)(v8 + 12) = 1;
  }
  return result;
}

__int64 ProcMapSeqSortie_Unknown9(__int64 a1)
{
  if (*(_BYTE*)(a1 + 232) == 1) {
    GameRoutine_1566440(&GameData_21ee318, 0);
    *(_BYTE*)(a1 + 232) = 0;
  }
  return GameRoutine_182ae70(*(_QWORD*)GameData_212d0d0[0], 1);
}

_QWORD* ProcMapSeqSortie_Unknown12(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)(a1 + 152) = 0;
  v2 = (_QWORD*)(a1 + 160);
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 192) = 0;
  if (result == v2) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);

LABEL_6:
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 4) {
          *(_QWORD*)(a1 + 16) = v5;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
