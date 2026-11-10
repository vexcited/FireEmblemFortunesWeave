#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 EnterMenuItem_131e070(__int64 a1, __int64 a2);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_dbced0(_QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1a86fa8;
extern _UNKNOWN GameData_1ad7c10;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d750;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure_Invoke();
__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure1_Invoke(__int64 a1);
__int64 GameRoutine_1522300(_QWORD, _QWORD);
__int64 GameRoutine_8ab560(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
extern __int128 GameData_22532c0;
extern __int64 GameData_22506e0;
__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure3_Invoke();

__int64 EnterMenuItem_131e070(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  if (result != 0) {
    GameRoutine_60a020(a2 + 8, result);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1);
    if (result != 0) {
      return GameRoutine_60a020(a2 + 32, result);
    }
  }
  return result;
}

__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure_Invoke()
{
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  return 4;
}

__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  void* v25;
  char* v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE v37[13];
  __int64 v38;

  v1 = *(_QWORD*)(a1 + 8);
  v38 = 0;
  v36 = 0;
  memset(v37, 0, sizeof(v37));
  v2 = *(_QWORD*)(v1 + 88);
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6, 16,
                                               0);
    v25 = (void*)v4;
    v26 = v5;
    v24 = v6 | 1;
  }
  else {
    LOBYTE(v24) = 2 * v3;
    v5 = (char*)&v24 + 1;
    if (v3 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v5, v2, v4);
LABEL_10:
  v5[v4] = 0;
  GameRoutine_dbced0(v27, &v24);
  if ((v24 & 1) != 0 && v26 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v8 = (__int64*)GameData_212c6a0[0];
  v9 = *(_QWORD*)GameData_212c6a0[0] + 48LL;
  *(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) = 1;
  GameRoutine_d5d770(v9, v27);
  v10 = *v8;
  v25 = &GameData_1a86d37;
  *(_BYTE*)(v10 + 944) = 1;
  v24 = game_HashString(&GameData_1a86d37);
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v24);
    if (v11 != 0 && *(_DWORD*)(v11 + 32) != 0) {
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
      goto LABEL_44;
    }
  }
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  v13 = *(_DWORD*)(v12 + 56);
  v14 = *(__int64**)(v12 + 8);
  v15 = *(__int64**)(v12 + 16);
  if (v13 < 0) {
    for (; v14 != v15; ++v14) {
      v16 = *v14;
      if (*(_QWORD*)(*v14 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
        goto LABEL_26;
      }
    }
  }
  else {
    while (v14 != v15) {
      v17 = *v14++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v13) {
        goto LABEL_26;
      }
    }
  }
  v16 = 0;
LABEL_26:
  if ((*(_QWORD*)(v16 + 96) | *(_QWORD*)(v16 + 552)) == 0 &&
      game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (*(_DWORD*)(v16 + 84) & 0x80000000) != 0) {
    v25 = &GameData_1a86fa8;
    v24 = game_HashString(&GameData_1a86fa8);
    game_VariableManager_SetFlag(&v24, 1);
  }
  v18 = *(unsigned __int8*)(v1 + 86);
  v19 = v18 == 5 || v18 == 3;
  if (v19 && GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 5;
    v18 = *(unsigned __int8*)(v1 + 86);
  }
  if (v18 == 4 && GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 6;
  }
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 19;
  if (*(_BYTE*)(v1 + 86) == 3) {
    v25 = &GameData_1ad7c10;
    v24 = game_HashString(&GameData_1ad7c10);
    if (game_GameModeData_instance_ != 0) {
      GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), &v24,
                          1);
    }
  }
LABEL_44:
  if ((v33 & 1) != 0 && v35 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  if ((v29 & 1) != 0 && v31 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  if ((v27[0] & 1) != 0 && v28 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
  }
  return 4;
}

__int64 game_gmap_anonymous_EnterMenuItem_ACall_closure3_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64* v5;
  __int64* v6;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
    *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
    v1 = *(_QWORD*)(GameData_21c96e8 + 8);
    v2 = *(__int64**)(v1 + 8);
    v3 = *(__int64**)(v1 + 16);
    v4 = *(_DWORD*)(v1 + 56);
    if (v4 < 0) {
      for (; v2 != v3; ++v2) {
        v5 = (__int64*)*v2;
        if (*(_QWORD*)(*v2 + 96) == 0 && v5[69] == 0) {
          goto LABEL_14;
        }
      }
    }
    else {
      while (v2 != v3) {
        v6 = (__int64*)*v2++;
        v5 = v6;
        if (*((_DWORD*)v6 + 21) == v4) {
          goto LABEL_14;
        }
      }
    }
    v5 = nullptr;
  LABEL_14:
    v8 = *((_DWORD*)v5 + 135);
    v9 = __OFSUB__(v8, 1);
    v10 = (unsigned int)(v8 - 1);
    if (((v10 & 0x80000000) != 0LL) == v9) {
      v11 = v5[3];
      v12 = v5[4] - v11;
      v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
      if (v10 < v12 >> 3) {
        v5 = v13;
      }
    }
    v14 = GameData_22506e0;
    if (GameData_22506e0 != 0 && *(_DWORD*)(v0 + 60) == 3 &&
        GameData_22532c0 == 0) {
      v15 = *v5;
      if (v15 != game_gmap_SpotMgr_GetCurrentSpot()) {
        GameRoutine_1522300(v14, v15);
      }
    }
    return 4;
  }
  GameRoutine_8ab560(4);
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 7;
  }
  *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 19;
  return 4;
}

#pragma GCC visibility pop
