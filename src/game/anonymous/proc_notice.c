#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcNotice_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcNotice_Destructor_alt1(__int64 a1) __asm__("ProcNotice_Destructor");
__int64 ProcNotice_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcNotice_DeletingDestructor");
__int64 GameRoutine_162aea0(void);
__int64 GameRoutine_1904520(_QWORD, _QWORD);
__int64 GameRoutine_9caac0(_QWORD, _QWORD);
__int64 ProcList_9bd480(__int64);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_1fb91b0[])();
extern __int64 (*GameData_1fb9230[])();
__int64 game_anonymous_ProcNotice_TryMastery_alt1(__int64 result) __asm__(
    "game_anonymous_ProcNotice_TryMastery");
__int64 ProcNotice_9d62a0(__int64 result);
__int64 ProcNotice_9d62e0(__int64 result);
__int64 ProcNotice_9d6340(__int64 result);
__int64 ProcNotice_9d63a0(__int64 result);
__int64 ProcNotice_9d63c0(__int64 result);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               int*) __asm__("game_UnitPool_Find_6ead60");
__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8,
                                                 unsigned __int16* result);
__int64 game_8af380(__int64, __int64**);
__int64 game_ItemSeq_GainBind(__int64, __int64**, __int64, __int64*, __int64*);
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 ProcNotice_9d6140_alt1(__int64 result) __asm__("ProcNotice_9d6140");
__int64 GameHr_162aea0(__int64, _QWORD*);
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
void GameRoutine_9caac0_alt1(__int64*, _QWORD*) __asm__("GameRoutine_9caac0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_ProcNotice_TryMastery(__int64 a1);
void ProcNotice_9d6140(__int64 a1);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcNotice_Destructor(__int64 a1);
void ProcNotice_DeletingDestructor(__int64 a1);

void game_anonymous_ProcNotice_TryMastery(__int64 a1)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23[4];
    __int64* v24;
  } v23_;
  struct {
    __int64* v25;
    __int64* v26;
    __int64 v27;
  } v25_;
  int v28;

  v3 = *(_QWORD*)(a1 + 152);
  v4 = *(int*)(a1 + 200);
  if (v4 >= (*(_QWORD*)(a1 + 160) - v3) >> 3) {
    return;
  }
  v5 = *(_QWORD*)(v3 + 8 * v4);
  if (v5 == 0) {
    return;
  }
  v6 = ProcList_9bd480(a1);
  v7 = *(unsigned __int16*)(v5 + 136);
  v25_.v26 = nullptr;
  v25_.v27 = 0;
  v25_.v25 = nullptr;
  if (v7 == 0) {
    return;
  }
  v8 = 8;
  v9 = v6;
  v10 = 0;
  do {
    v23_.v23[0] = *(_QWORD*)(*(_QWORD*)(v5 + 128) + v8);
    LOBYTE(v23_.v23[1]) = *(_BYTE*)(*(_QWORD*)(v5 + 144) + v10);
    HIDWORD(v23_.v23[1]) = *(unsigned __int8*)(*(_QWORD*)(v5 + 160) + v10);
    GameRoutine_9caac0_alt1((__int64*)&v25_.v25, v23_.v23);
    ++v10;
    v8 += 16;
  } while (v10 < *(unsigned __int16*)(v5 + 136));
  v11 = v25_.v25;
  v12 = v25_.v26;
  if (v25_.v25 == v25_.v26) {
    goto LABEL_21;
  }
  do {
    v14 = *v11;
    v28 = 17;
    v23_.v23[0] = v14;
    v15 = game_UnitPool_Find_6ead60_alt1(v23_.v23, &v28);
    if (v15 == nullptr) {
      goto LABEL_10;
    }
    v16 = *v11;
    v17 = v11[1];
    v18 = (__int64)v15;
    v23_.v23[0] = (__int64)GameData_1fb91b0;
    v23_.v23[1] = (__int64)v15;
    v23_.v24 = v23_.v23;
    v23_.v23[2] = v16;
    v23_.v23[3] = v17;
    game_ProcList_Call_9bcfa0_alt1(v9, (__int64)v23_.v23);
    if (v23_.v24 == v23_.v23) {
      v19 = 32;
      goto LABEL_16;
    }
    if (v23_.v24 != nullptr) {
      v19 = 40;
    LABEL_16:
      (*(void (**)(__int64))(*v23_.v24 + v19))((__int64)v23_.v24);
    }
    v20 = *v11;
    v21 = v11[1];
    v23_.v23[0] = (__int64)GameData_1fb9230;
    v23_.v23[1] = v18;
    v23_.v24 = v23_.v23;
    v23_.v23[2] = v20;
    v23_.v23[3] = v21;
    game_ProcList_Call_9bcfa0_alt1(v9, (__int64)v23_.v23);
    if (v23_.v24 == v23_.v23) {
      v13 = 32;
    LABEL_9:
      (*(void (**)(__int64))(*v23_.v24 + v13))((__int64)v23_.v24);
      goto LABEL_10;
    }
    if (v23_.v24 != nullptr) {
      v13 = 40;
      goto LABEL_9;
    }
  LABEL_10:
    v11 += 2;
  } while (v11 != v12);
  v11 = v25_.v25;
LABEL_21:
  if (v11 != nullptr) {
    v25_.v26 = v11;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v11);
  }
}

void ProcNotice_9d6140(__int64 a1)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17[3];
  struct {
    __int64* v18;
    __int64* v19;
    __int64 v20;
  } v18_;
  int v21;

  v3 = *(_QWORD*)(a1 + 152);
  v4 = *(int*)(a1 + 200);
  if (v4 >= (*(_QWORD*)(a1 + 160) - v3) >> 3) {
    return;
  }
  v5 = *(_QWORD*)(v3 + 8 * v4);
  if (v5 == 0 || *(_QWORD*)(v5 + 176) == 0) {
    return;
  }
  v18_.v19 = nullptr;
  v18_.v20 = 0;
  v18_.v18 = nullptr;
  HonorFile_9c7620((void*)((__int64*)v17), (unsigned __int16*)(v5 + 168));
  game_8af380((__int64)&v18_.v18, v17);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v17[0] != nullptr) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v17[1] = v17[0];
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v8 + v9, (__int64)v17[0]);
  }
  if (*(_QWORD*)(v5 + 128) != 0) {
    v10 = *(unsigned __int16*)(v5 + 120);
    if (*(_WORD*)(v5 + 120) == 0) {
      goto LABEL_17;
    }
    v11 = 8;
    while (1) {
      v12 = *(_QWORD*)(v5 + 128);
      v21 = 17;
      v17[0] = *(__int64**)(v12 + v11);
      v13 = game_UnitPool_Find_6ead60_alt1((__int64*)v17, &v21);
      if (v13 != nullptr) {
        break;
      }
      --v10;
      v11 += 16;
      if (v10 == 0) {
        goto LABEL_17;
      }
    }
    v14 = (__int64)v13;
  }
  else {
    v14 = 0;
  }
  game_ItemSeq_GainBind(a1, &v18_.v18, v14, game_vstring_kEmpty_ptr[0],
                        game_vstring_kEmpty_ptr[0]);
LABEL_17:
  if (v18_.v18 != nullptr) {
    v15 = *v7;
    v18_.v19 = v18_.v18;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v15 + v16, (__int64)v18_.v18);
  }
}

__int64 ProcNotice_9d62a0(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 152);
  v2 = *(int*)(result + 200);
  if (v2 < (*(_QWORD*)(result + 160) - v1) >> 3) {
    v3 = *(_QWORD*)(v1 + 8 * v2);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v3 + 24);
      v5 = *(_QWORD*)(v4 + 88);
      result = v4 + 88;
      if (v5 != 0) {
        return game_VariableManager_SetFlag(result, 1);
      }
    }
  }
  return result;
}

__int64 ProcNotice_9d62e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[3];

  v3 = *(_QWORD*)(result + 152);
  v4 = *(int*)(result + 200);
  if (v4 < (*(_QWORD*)(result + 160) - v3) >> 3) {
    v5 = *(_QWORD*)(v3 + 8 * v4);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 104);
      if (v6 != 0) {
        v7[1] = v1;
        v7[2] = v2;
        v7[0] = v6;
        return GameHr_162aea0(result, v7);
      }
    }
  }
  return result;
}

__int64 ProcNotice_9d6340(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(int*)(result + 200) + 1LL;
  v3 = *(_QWORD*)(result + 152);
  v2 = *(_QWORD*)(result + 160);
  *(_DWORD*)(result + 200) = v1;
  v4 = v2 - v3;
  v5 = *(_QWORD*)(result + 8);
  if (v1 < v4 >> 3 && v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 0) {
          *(_QWORD*)(result + 16) = v5;
          *(_WORD*)(result + 136) &= ~0x80u;
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

__int64 ProcNotice_9d63a0(__int64 result)
{
  if (*(_QWORD*)(result + 184) != *(_QWORD*)(result + 176)) {
    return GameRoutine_1904520(result, result + 176);
  }
  return result;
}

__int64 ProcNotice_9d63c0(__int64 result)
{
  __int64 i;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 176);
  for (i = *(_QWORD*)(result + 184); v2 != i; v2 += 8) {
    v3 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    v4 = *(_QWORD*)(v3 + 88);
    result = v3 + 88;
    if (v4 != 0) {
      result = game_VariableManager_SetFlag(result, 1);
    }
  }
  return result;
}

void ProcNotice_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_anonymous_ProcNotice_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 184) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcNotice_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_anonymous_ProcNotice_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 184) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
