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
_QWORD* game_gmap_ProcGmapShow_DisposAfterShow(_QWORD* result);
void ProcGmapShow_1536b50();
__int64 game_gmap_ProcGmapShow_DisposAfterShow_closure_Invoke(__int64 result,
                                                              __int64* a2);

_QWORD* game_gmap_ProcGmapShow_DisposAfterShow(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* i;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  _QWORD* v22;

  if (*((_BYTE*)result + 152) != 1) {
    return result;
  }
  v1 = result[21];
  v2 = result;
  if (*(_QWORD*)(v1 + 72) == 0) {
    return result;
  }
  result = (_QWORD*)game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v1 + 56));
  if (result == nullptr) {
    return result;
  }
  v4 = result;
  result = v17;
  v20 = nullptr;
  v21 = 0;
  v19 = nullptr;
  v17[0] = GameData_204b560;
  v17[1] = &v19;
  v18 = v17;
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 != v7) {
    do {
      if (*(_QWORD**)*v6 == v4) {
        v22 = (_QWORD*)*v6;
        if (v18 == nullptr) {
          GameRoutine_60a310(0, v3);
        }
        (*(void (**)(_QWORD*, _QWORD**))(*v18 + 48LL))(v18, &v22);
      }
      ++v6;
    } while (v6 != v7);
    result = v18;
    if (v18 != v17) {
      if (v18 != nullptr) {
        v8 = 40;
      LABEL_15:
        result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v8))(
            result, v3);
      }
      v9 = v19;
      for (i = v20; v9 != i; result = (_QWORD*)TroopMgr_13485a0(v11)) {
        v11 = *v9++;
      }
      v12 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v13 = v2[21];
        v14 = *(_QWORD*)(v13 + 72);
        v15 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v13 + 56));
        result = (_QWORD*)GameRoutine_1347b30(*(_QWORD*)(v12 + 8), v15, v14);
        if (result != nullptr && *((_BYTE*)v4 + 176) == 1) {
          result = (_QWORD*)GameRoutine_133dba0(result, 1);
        }
      }
      if (v19 != nullptr) {
        v20 = v19;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        return (_QWORD*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v19);
      }
      return result;
    }
  }
  v8 = 32;
  goto LABEL_15;
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
