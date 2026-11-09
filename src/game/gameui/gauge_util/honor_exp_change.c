#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_HonorExpChange_vtable[])();
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_21f8138;
extern __int64 GameData_21f8140;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern int GameData_21f8110;
extern int GameData_21f8130;
__int64 HonorExpChange_Destructor(__int64 a1);
__int64 HonorExpChange_Unknown5();
__int64 HonorExpChange_Unknown6(__int64 result);
__int64 HonorExpChange_Unknown2(__int64 result);
__int64 HonorExpChange_Unknown3(__int64 a1);
__int64 HonorExpChange_Unknown4(__int64 a1);

__int64 HonorExpChange_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 128);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak();
        if (v3 != 0) {
          return *(float*)(a1 + 16) != 0.0;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 HonorExpChange_Unknown5()
{
  int* v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  int v7;
  __int64 v8;
  unsigned int v9;
  int* v10;
  __int64 v11;
  int* v12;
  unsigned __int64 v13;
  signed int v14;
  int* v15;
  __int64 v16;
  int* v17;
  int v18;

  v0 = (int*)GameData_21f8138;
  v1 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
  v2 = (unsigned __int64)(GameData_21f8140 - GameData_21f8138) >> 2;
  if (game_GameModeData_instance_ == 0) {
    v3 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
    v4 = GameData_21f8118;
    if ((int)v1 >= 1) {
      goto LABEL_7;
    }
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      *(int*)(game_GameModeData_instance_ + 64) <= 1) {
    v3 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
    v4 = GameData_21f8118;
    if ((int)v1 > 0) {
      goto LABEL_7;
    }
    return 0;
  }
  v3 = (unsigned __int64)(GameData_21f8140 - GameData_21f8138) >> 2;
  v4 = GameData_21f8138;
  if ((int)v2 < 1) {
    return 0;
  }

LABEL_7:
  if (v3 == 1) {
    v5 = 0;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_15;
    }
  LABEL_13:
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        *(int*)(game_GameModeData_instance_ + 64) > 1) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v5 = *(_DWORD*)(v4 + 4);
  if (game_GameModeData_instance_ != 0) {
    goto LABEL_13;
  }

LABEL_15:
  v0 = (int*)GameData_21f8118;

LABEL_16:
  v7 = *v0;
  v8 = 1;
  v9 = (v5 - v7) & ~((v5 - v7) >> 31);
  while (game_GameModeData_instance_ != 0 &&
         *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
         *(int*)(game_GameModeData_instance_ + 64) > 1) {
    v15 = &GameData_21f8130;
    if ((int)v8 >= (int)v2) {
      return v9 >> 1;
    }
  LABEL_29:
    v17 = v15 + 2;
    v16 = *((_QWORD*)v15 + 1);
    if ((int)v8 >= (int)((unsigned __int64)(*((_QWORD*)v17 + 1) - v16) >> 2)) {
      v18 = 0;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_17;
      }
    }
    else {
      v18 = *(_DWORD*)(v16 + 4 * v8);
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_17;
      }
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (v10 = &GameData_21f8130,
         *(int*)(game_GameModeData_instance_ + 64) <= 1)) {
    LABEL_17:
      v10 = &GameData_21f8110;
    }
    v12 = v10 + 2;
    v11 = *((_QWORD*)v10 + 1);
    v13 = (unsigned __int64)(*((_QWORD*)v12 + 1) - v11) >> 2;
    if ((int)v8 < (int)v13) {
      LODWORD(v13) = v8;
    }
    ++v8;
    v14 = v18 - *(_DWORD*)(v11 + 4LL * (int)v13 - 4);
    if (v14 > (int)v9) {
      v9 = v14;
    }
  }
  if ((int)v8 < (int)v1) {
    v15 = &GameData_21f8110;
    goto LABEL_29;
  }
  return v9 >> 1;
}

__int64 HonorExpChange_Unknown6(__int64 result)
{
  __int64 v1;
  int* v2;
  int* v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int* v12;
  int* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int* v20;
  int v21;
  int* v22;
  int* v23;
  int v24;
  __int64 v25;
  int* v26;
  unsigned __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int* v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  int* v35;
  __int64 v36;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(int*)(game_GameModeData_instance_ + 64) > 1) {
    v2 = &GameData_21f8130;
  }
  else {
    v2 = &GameData_21f8110;
  }
  v3 = *((int**)v2 + 1);
  v4 = *(_DWORD*)(result + 8);
  v5 = (*((_QWORD*)v2 + 2) - (_QWORD)v3) >> 2;
  if ((int)v5 < 1) {
    v7 = 0;
  }
  else {
    v6 = *v3;
    v7 = 0;
    v8 = v3[(unsigned int)(v5 - 1)];
    if (v8 >= v4) {
      v8 = *(_DWORD*)(result + 8);
    }
    if (v4 >= v6) {
      v6 = v8;
    }
    while (1) {
      v9 = (unsigned int)(v7 + v5) >> 1;
      v10 = v3[v9];
      if (v6 == v10) {
        break;
      }
      if (v6 < v10) {
        LODWORD(v5) = (unsigned int)(v7 + v5) >> 1;
      }
      else {
        v7 = v9 + 1;
      }
      if (v7 >= (int)v5) {
        goto LABEL_19;
      }
    }
    v7 = v9 + 1;
  }

LABEL_19:
  v11 = v7 - *(_DWORD*)(result + 24);
  if (v11 != 0 && (*(_BYTE*)(result + 28) & 1) == 0) {
    *(_WORD*)(result + 29) = 257;
  }
  if (v1 != 0 && *(_DWORD*)(v1 + 60) == 3 && *(int*)(v1 + 64) > 1) {
    v12 = &GameData_21f8130;
  }
  else {
    v12 = &GameData_21f8110;
  }
  v13 = *((int**)v12 + 1);
  v14 = (*((_QWORD*)v12 + 2) - (_QWORD)v13) >> 2;
  if ((int)v14 < 1) {
    v15 = 0;
  LABEL_40:
    if (v1 == 0) {
      goto LABEL_46;
    }
  }
  else {
    v15 = 0;
    v16 = v13[(unsigned int)(v14 - 1)];
    if (v16 >= v4) {
      v16 = v4;
    }
    if (v4 >= *v13) {
      v17 = v16;
    }
    else {
      v17 = *v13;
    }
    while (1) {
      v18 = (unsigned int)(v15 + v14) >> 1;
      v19 = v13[v18];
      if (v17 == v19) {
        break;
      }
      if (v17 < v19) {
        LODWORD(v14) = (unsigned int)(v15 + v14) >> 1;
      }
      else {
        v15 = v18 + 1;
      }
      if (v15 >= (int)v14) {
        goto LABEL_40;
      }
    }
    v15 = v18 + 1;
    if (v1 == 0) {
      goto LABEL_46;
    }
  }
  if (*(_DWORD*)(v1 + 60) == 3 && *(int*)(v1 + 64) > 1) {
    v20 = &GameData_21f8130;
    goto LABEL_47;
  }

LABEL_46:
  v20 = &GameData_21f8110;

LABEL_47:
  if (v15 < (int)((*((_QWORD*)v20 + 2) - *((_QWORD*)v20 + 1)) >> 2)) {
    v21 = *(unsigned __int8*)(result + 30);
    *(_BYTE*)(result + 28) = 0;
    if (v21 == 1) {
      *(_DWORD*)(result + 24) = v7;
      if (v1 != 0 && *(_DWORD*)(v1 + 60) == 3 && *(int*)(v1 + 64) > 1) {
        v22 = &GameData_21f8130;
      }
      else {
        v22 = &GameData_21f8110;
      }
      v26 = v22 + 2;
      v25 = *((_QWORD*)v22 + 1);
      v27 = (unsigned __int64)(*((_QWORD*)v26 + 1) - v25) >> 2;
      if (v7 < (int)v27) {
        LODWORD(v27) = v7;
      }
      v28 = v27 - 1;
      if (v7 <= 0) {
        v29 = 0;
      }
      else {
        v29 = v28;
      }
      *(_DWORD*)(result + 12) = *(_DWORD*)(v25 + 4LL * v29);
    }
    return result;
  }
  *(_DWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 28) = 1;
  if (v11 < 2) {
    return result;
  }
  if (v1 != 0) {
    v23 = &GameData_21f8110;
    if (*(_DWORD*)(v1 + 60) == 3 && *(int*)(v1 + 64) >= 2) {
      v24 = ((unsigned __int64)(GameData_21f8140 - GameData_21f8138) >> 2) - 1;
      goto LABEL_67;
    }
    v24 = ((unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2) - 1;
    if (*(_DWORD*)(v1 + 60) == 3) {
    LABEL_67:
      if (*(int*)(v1 + 64) > 1) {
        v23 = &GameData_21f8130;
      }
    }
  }
  else {
    v23 = &GameData_21f8110;
    v24 = ((unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2) - 1;
  }
  v31 = v23 + 2;
  v30 = *((_QWORD*)v23 + 1);
  v32 = (unsigned __int64)(*((_QWORD*)v31 + 1) - v30) >> 2;
  if (v24 < (int)v32) {
    LODWORD(v32) = v24;
  }
  v33 = v32 - 1;
  if (v24 <= 0) {
    v34 = 0;
  }
  else {
    v34 = v33;
  }
  *(_DWORD*)(result + 12) = *(_DWORD*)(v30 + 4LL * v34);
  if (v1 != 0 && *(_DWORD*)(v1 + 60) == 3 && *(int*)(v1 + 64) > 1) {
    v35 = &GameData_21f8130;
  }
  else {
    v35 = &GameData_21f8110;
  }
  v36 = (*((_QWORD*)v35 + 2) - *((_QWORD*)v35 + 1)) >> 2;
  if ((int)v36 <= 1) {
    LODWORD(v36) = 1;
  }
  *(_DWORD*)(result + 24) = v36 - 1;
  return result;
}

__int64 HonorExpChange_Unknown2(__int64 result)
{
  int* v1;
  int* v2;
  int* v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(int*)(game_GameModeData_instance_ + 64) > 1) {
    v1 = &GameData_21f8130;
  }
  else {
    v1 = &GameData_21f8110;
  }
  v3 = v1 + 2;
  v2 = *((int**)v1 + 1);
  v4 = (*((_QWORD*)v3 + 1) - (_QWORD)v2) >> 2;
  if ((int)v4 < 1) {
    return 0;
  }
  v5 = *(_DWORD*)(result + 8);
  LODWORD(result) = 0;
  v6 = v2[(unsigned int)(v4 - 1)];
  if (v6 >= v5) {
    v6 = v5;
  }
  if (v5 >= *v2) {
    v7 = v6;
  }
  else {
    v7 = *v2;
  }
  while (1) {
    v8 = (unsigned int)(result + v4) >> 1;
    v9 = v2[v8];
    if (v7 == v9) {
      break;
    }
    if (v7 >= v9) {
      result = v8 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v7 < v9) {
      LODWORD(v4) = v8;
    }
    if ((int)result >= (int)v4) {
      return result;
    }
  }
  return v8 + 1;
}

__int64 HonorExpChange_Unknown3(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_HonorExpChange_vtable;
  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  return result;
}

__int64 HonorExpChange_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_HonorExpChange_vtable;
  if (*(_QWORD*)(a1 + 136) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
