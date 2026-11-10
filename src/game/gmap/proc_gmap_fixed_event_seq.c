#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_14ba0f0(__int64);
__int64 GameRoutine_14b9400(__int64, __int64, __int64);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e70;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 ProcGmapFixedEventSeq_14c3f50(__int64 result);
__int64 ProcGmapFixedEventSeq_14c4140();
__int64
game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 result,
                                                           __int64* a2);

__int64 ProcGmapFixedEventSeq_14c3f50(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned int v4;

  v1 = *(unsigned __int8*)(result + 176);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(result + 184);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v3 + 16), 0);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
    }
    result = game_gameui_Footer_instance_;
    v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v3 + 5856) = v4;
    if (result != 0) {
      result = LayoutAccessor_1567000(result, 0);
      v4 = *(_DWORD*)(v3 + 5856);
    }
    *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
  }
  return result;
}

__int64 ProcGmapFixedEventSeq_14c4140()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64

game_gmap_ProcGmapFixedEventSeq_LotteryUnit_closure_Invoke(__int64 result,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64** v14;
  __int64** v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v3 = result;
  result = (__int64)GameRoutine_14ba0f0(*(_QWORD*)(v2 + 392));
  if (result == 0) {
    return result;
  }
  v5 = *(__int64***)(result + 40);
  v6 = *v5;
  v7 = v5[1];
  if (*v5 == v7) {
    return result;
  }
  v8 = GameData_212c790;
  v9 = GameData_2130e70;
  while (1) {
    v11 = *v6;
    v12 = *(_QWORD*)(*v8 + 8);
    v13 = *(_DWORD*)(v12 + 56);
    v14 = *(__int64***)(v12 + 8);
    v15 = *(__int64***)(v12 + 16);
    if (v13 < 0) {
      while (v14 != v15) {
        v16 = *v14;
        if ((*v14)[12] == 0 && v16[69] == 0) {
          goto LABEL_17;
        }
        ++v14;
      }
    LABEL_12:
      v18 = game_gmap_SpotMgr_GetCurrentSpot(result, v4);
      goto LABEL_18;
    }
    if (v14 == v15) {
      goto LABEL_12;
    }
    while (1) {
      v17 = *v14++;
      v16 = v17;
      if (*((_DWORD*)v17 + 21) == v13) {
        break;
      }
      if (v14 == v15) {
        goto LABEL_12;
      }
    }
  LABEL_17:
    v18 = *v16;
  LABEL_18:
    result = GameRoutine_14b9400(v11, v18, v2);
    if ((result & 1) != 0) {
      v10 = *(char**)(*v9 + 8);
      v19 = *(char**)(*v9 + 16);
      if (v10 != v19) {
        break;
      }
    LABEL_6:
      if (v10 == v19) {
        goto LABEL_34;
      }
    }
    if (++v6 == v7) {
      return result;
    }
  }
  v20 = v19 - v10 - 8;
  if ((~(_BYTE)v20 & 0x18) != 0) {
    v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
    while (*(_QWORD*)v10 != v11) {
      v10 += 8;
      if (--v21 == 0) {
        goto LABEL_24;
      }
    }
    goto LABEL_6;
  }
LABEL_24:
  if (v20 >= 0x18) {
    v10 += 16;
    while (1) {
      if (*((_QWORD*)v10 - 2) == v11) {
        v10 -= 16;
        goto LABEL_6;
      }
      if (*((_QWORD*)v10 - 1) == v11) {
        v10 -= 8;
        goto LABEL_6;
      }
      if (*(_QWORD*)v10 == v11) {
        goto LABEL_6;
      }
      if (*((_QWORD*)v10 + 1) == v11) {
        break;
      }
      v22 = v10 + 16;
      v10 += 32;
      if (v22 == v19) {
        goto LABEL_34;
      }
    }
    v10 += 8;
    goto LABEL_6;
  }
LABEL_34:
  v23 = *(__int64**)(v3 + 8);
  v25 = (__int64*)v23[1];
  v24 = v23[2];
  if ((unsigned __int64)v25 >= v24) {
    v27 = *v23;
    v28 = (__int64)v25 - *v23;
    v29 = (v28 >> 3) + 1;
    if (v29 >> 61 != 0) {
      GameRoutine_6c1f60(result);
    }
    v30 = v24 - v27;
    v31 = fw_memory_g_heap_manager_ptr;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v29;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v33 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = v33 + v28 - 8 * (v28 >> 3);
    *(_QWORD*)(v33 + v28) = v2;
    v26 = v33 + v28 + 8;
    result = memcpy(v35, v27, v28);
    *v23 = v35;
    v23[1] = v26;
    v23[2] = v34;
    if (v27 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v36, v27);
    }
  }
  else {
    *v25 = v2;
    v26 = (__int64)(v25 + 1);
  }
  v23[1] = v26;
  return result;
}

#pragma GCC visibility pop
