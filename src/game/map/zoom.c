#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2f6f0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fdb518[])();
extern __int64 (*GameData_1fdb598[])();
extern __int64 (*game_map_Zoom_vtable[])();
extern __int64 GameData_21cd138;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_220f8c0;
__int64 Zoom_Destructor(_QWORD* a1);
extern __int64 GameData_21d96b8;
__int64 Zoom_d2f6f0(__int64 result);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__int64 GameRoutine_ceecc0(_QWORD, _QWORD);
__int64 GameRoutine_cfd8e0(__int64 result, char);
__int64 GameRoutine_e5f420(_QWORD, _QWORD);
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21c6978;
extern __int64 GameData_21cd130;
extern __int64* GameData_212eba8[8];
_QWORD* game_map_Zoom_CreateZoomSeq_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_map_Zoom_CreateZoomSeq_lambda2_Invoke(__int64 a1);

__int64 Zoom_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *a1 = game_map_Zoom_vtable;
  a1[1] = GameData_1fdb518;
  GameRoutine_d2f6f0();
  v2 = a1[11];
  a1[11] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1[10];
  a1[10] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[9];
  a1[9] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[8];
  a1[8] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[7];
  a1[7] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = (__int64*)a1[6];
  a1[6] = 0;
  if (v7 != nullptr) {
    v8 = v7[1];
    if (v8 != 0) {
      v9 = fw_memory_g_heap_manager;
      v7[2] = v8;
      v10 = 128;
      if (*(_QWORD*)(v9 + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(v9 + v10, v8);
    }
    v11 = *v7;
    *v7 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12, v7);
  }
  v13 = a1[5];
  a1[5] = 0;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14, v13);
  }
  *a1 = GameData_1fdb598;
  if ((_QWORD*)GameData_21cd138 == a1) {
    GameData_21cd138 = 0;
    GameData_220f8c0 = 0;
  }
  return result;
}

__int64 Zoom_d2f6f0(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (*(_BYTE*)(result + 22) != 0) {
    v1 = (_QWORD*)result;
    *(_WORD*)(result + 21) = 0;
    *(_BYTE*)(result + 25) = 0;
    v2 = *(_QWORD*)(result + 80);
    v1[10] = 0;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    }
    v3 = (__int64*)v1[6];
    v1[6] = 0;
    if (v3 != nullptr) {
      v4 = v3[1];
      if (v4 != 0) {
        v5 = fw_memory_g_heap_manager;
        v3[2] = v4;
        v6 = 128;
        if (*(_QWORD*)(v5 + 200) == 0) {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(v5 + v6, v4);
      }
      v7 = *v3;
      *v3 = 0;
      if (v7 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
      }
      v8 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8, v3);
    }
    v9 = v1[5];
    v1[5] = 0;
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10, v9);
    }
    v11 = v1[7];
    v1[7] = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = v1[9];
    v1[9] = 0;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    v13 = v1[8];
    v1[8] = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    result = GameData_21d96b8;
    if (GameData_21d96b8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21d96b8 + 24LL))(
          GameData_21d96b8);
      result = GameData_21d96b8;
      if (GameData_21d96b8 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21d96b8 + 8LL))(
            GameData_21d96b8);
      }
      GameData_21d96b8 = 0;
    }
  }
  return result;
}

_QWORD* game_map_Zoom_CreateZoomSeq_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 384);
  if ((v3 & 0x8000) != 0) {
    v4 = *(_QWORD*)(v2 + 16);
    *(_BYTE*)(v4 + 288) = 1;
    GameRoutine_cfd8e0(v4 + 136, 1);
  LABEL_6:
    v6 = 0;
    GameRoutine_ceecc0(v2 + 344, &v6);
    HubCharacterNatives_cea6b0(v2);
    return HubCharacterNatives_ceca80((_QWORD*)v2, 128, 1);
  }
  if ((v3 & 0x10000) == 0 && (v3 & 0x200000000LL) != 0) {
    goto LABEL_6;
  }
  v6 = 1;
  GameRoutine_ceecc0(v2 + 344, &v6);
  HubCharacterNatives_cea6b0(v2);
  *(_BYTE*)(v2 + 392) = 1;
  return HubCharacterNatives_ceca80((_QWORD*)v2, 128, 1);
}

__int64 game_map_Zoom_CreateZoomSeq_lambda2_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[2];
  __int16 v10;
  char v11;
  char v12;
  __int16 v13;
  char v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(*GameData_212eba8[0] + 192) = 0;
  result = *(_QWORD*)(v1 + 40);
  if (result != 0) {
    v16 = 0;
    v10 = 0;
    v3 = *(_QWORD*)(GameData_21cd130 + 48);
    v4 = *(_DWORD*)(v3 + 8);
    v9[1] = *(_DWORD*)(v3 + 12);
    LOBYTE(v3) = *(_BYTE*)(v1 + 30);
    v9[0] = v4;
    v11 = 1;
    v15 = 1;
    v12 = v3;
    v13 = *(_WORD*)(v1 + 31);
    v14 = *(_BYTE*)(v1 + 33);
    v5 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) == v5) {
      v7 = 0;
      v6 = 0;
    }
    else {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v6 + 24);
        v6 = *(_QWORD*)(v6 + 32);
        if (v6 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                    memory_order_relaxed);
          result = *(_QWORD*)(v1 + 40);
        }
      }
      else {
        v7 = 0;
      }
    }
    v17 = v7;
    v18 = v6;
    result = GameRoutine_e5f420(result, v9);
    v8 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
    }
  }
  *(_BYTE*)(v1 + 21) = 1;
  return result;
}

#pragma GCC visibility pop
