#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133dba0(_QWORD, _QWORD);
__int64 GameRoutine_1347b30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 TroopMgr_13485a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_204b560[])();
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
_QWORD* game_gmap_ProcGmapShow_DisposAfterShow_alt1(_QWORD* result) __asm__(
    "game_gmap_ProcGmapShow_DisposAfterShow");
void ProcGmapShow_1536b50();
__int64 game_gmap_ProcGmapShow_DisposAfterShow_closure_Invoke(__int64 result,
                                                              __int64* a2);
__int64 game_gmap_133dba0(__int64, char);
__int64 game_gmap_1347b30(__int64, __int64, __int64);
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void TroopMgr_13485a0_alt1(__int64) __asm__("TroopMgr_13485a0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_ProcGmapShow_DisposAfterShow(__int64 a1);

void game_gmap_ProcGmapShow_DisposAfterShow(__int64 a1)
{
  __int64 v1;
  unsigned int* v3;
  __int64 v4;
  unsigned int* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned int*** v8;
  unsigned int*** v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    __int64* v24;
    __int64 v25;
    __int64 v26;
  } v24_;
  unsigned int** v27;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 152) != 1) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 168);
  if (*(_QWORD*)(v1 + 72) == 0) {
    return;
  }
  v3 = game_gmap_SpotMgr_FindSpot_alt1(*(unsigned int**)(v1 + 56)),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v3 == nullptr) {
    return;
  }
  v5 = v3;
  v6 = v22_.v22;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v24 = nullptr;
  v22_.v22[0] = GameData_204b560;
  v22_.v22[1] = &v24_.v24;
  v22_.v23 = v22_.v22;
  v7 = *(_QWORD*)(GameData_21c96e8 + 8);
  v8 = *(unsigned int****)(v7 + 8);
  v9 = *(unsigned int****)(v7 + 16);
  if (v8 == v9) {
    goto LABEL_14;
  }
  do {
    if (**v8 == v5) {
      v27 = *v8;
      if (v22_.v23 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, unsigned int***))(*v22_.v23 + 48LL))(v22_.v23,
                                                                 &v27),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ++v8;
  } while (v8 != v9);
  v6 = v22_.v23;
  if (v22_.v23 == v22_.v22) {
  LABEL_14:
    v10 = 32;
    goto LABEL_15;
  }
  if (v22_.v23 != nullptr) {
    v10 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v6 + v10))(v6, v4),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11 = v24_.v24;
  v12 = (__int64*)v24_.v25;
  while (v11 != v12) {
    v13 = *v11++;
    TroopMgr_13485a0_alt1(v13),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = GameData_21c96e8;
  if (GameData_21c96e8 != 0) {
    v15 = *(_QWORD*)(a1 + 168);
    v16 = *(_QWORD*)(v15 + 72);
    v17 = game_gmap_SpotMgr_FindSpot_alt1(*(unsigned int**)(v15 + 56)),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v18 = game_gmap_1347b30(*(_QWORD*)(v14 + 8), (__int64)v17, v16),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v18 != 0 && *((_BYTE*)v5 + 176) == 1) {
      game_gmap_133dba0(v18, 1),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (v24_.v24 != nullptr) {
    v24_.v25 = (__int64)v24_.v24;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v24_.v24),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void ProcGmapShow_1536b50()
{
  __int64 v0;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v0 + 5856) |= 0x10000u;
  }
}

__int64 game_gmap_ProcGmapShow_DisposAfterShow_closure_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && (unsigned int)*(unsigned __int8*)(v3 + 32) - 1 <= 1) {
    v4 = *(__int64**)(result + 8);
    v6 = (_QWORD*)v4[1];
    v5 = v4[2];
    if ((unsigned __int64)v6 >= v5) {
      v8 = *v4;
      v9 = (__int64)v6 - *v4;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 != 0) {
        GameRoutine_888610(result);
      }
      v11 = v5 - v8;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = v14 + v9 - 8 * (v9 >> 3);
      *(_QWORD*)(v14 + v9) = v2;
      v7 = v14 + v9 + 8;
      result = memcpy(v16, v8, v9);
      *v4 = v16;
      v4[1] = v7;
      v4[2] = v15;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v17, v8);
      }
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[1] = v7;
  }
  return result;
}

#pragma GCC visibility pop
