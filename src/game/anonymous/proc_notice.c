#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcNotice_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcNotice_Destructor(__int64 a1);
__int64 ProcNotice_DeletingDestructor(__int64 a1);
__int64 GameRoutine_162aea0(void);
__int64 GameRoutine_1904520(_QWORD, _QWORD);
__int64 GameRoutine_9caac0(_QWORD, _QWORD);
__int64 ProcList_9bd480(__int64);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_1fb91b0[])();
extern __int64 (*GameData_1fb9230[])();
__int64 game_anonymous_ProcNotice_TryMastery(__int64 result);
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
__int64 ProcNotice_9d6140(__int64 result);

__int64 game_anonymous_ProcNotice_TryMastery(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;

  v3 = *(_QWORD*)(result + 152);
  v4 = *(int*)(result + 200);
  if (v4 >= (*(_QWORD*)(result + 160) - v3) >> 3) {
    return result;
  }
  v27 = v1;
  v28 = v2;
  v5 = *(_QWORD*)(v3 + 8 * v4);
  if (v5 == 0) {
    return result;
  }
  result = ProcList_9bd480(result);
  v6 = *(unsigned __int16*)(v5 + 136);
  v24 = nullptr;
  v25 = 0;
  v23 = nullptr;
  if (v6 == 0) {
    return result;
  }
  v7 = 8;
  v8 = result;
  v9 = 0;
  do {
    v21[0] = *(_QWORD*)(*(_QWORD*)(v5 + 128) + v7);
    LOBYTE(v21[1]) = *(_BYTE*)(*(_QWORD*)(v5 + 144) + v9);
    HIDWORD(v21[1]) = *(unsigned __int8*)(*(_QWORD*)(v5 + 160) + v9);
    result = GameRoutine_9caac0(&v23, v21);
    ++v9;
    v7 += 16;
  } while (v9 < *(unsigned __int16*)(v5 + 136));
  v10 = v23;
  v11 = v24;
  if (v23 == v24) {
    goto LABEL_21;
  }
  do {
    v13 = *v10;
    v26 = 17;
    v21[0] = v13;
    result = game_UnitPool_Find_6ead60(v21, &v26);
    if (result == 0) {
      goto LABEL_10;
    }
    v14 = *v10;
    v15 = v10[1];
    v16 = result;
    v21[0] = GameData_1fb91b0;
    v21[1] = result;
    v22 = v21;
    v21[2] = v14;
    v21[3] = v15;
    game_ProcList_Call_9bcfa0(v8, v21);
    if (v22 == v21) {
      v17 = 32;
      goto LABEL_16;
    }
    if (v22 != nullptr) {
      v17 = 40;
    LABEL_16:
      (*(void (**)(void))(*v22 + v17))();
    }
    v18 = *v10;
    v19 = v10[1];
    v21[0] = GameData_1fb9230;
    v21[1] = v16;
    v22 = v21;
    v21[2] = v18;
    v21[3] = v19;
    game_ProcList_Call_9bcfa0(v8, v21);
    result = (__int64)v22;
    if (v22 == v21) {
      v12 = 32;
    LABEL_9:
      result = (*(__int64 (**)(void))(*v22 + v12))();
      goto LABEL_10;
    }
    if (v22 != nullptr) {
      v12 = 40;
      goto LABEL_9;
    }
  LABEL_10:
    v10 += 2;
  } while (v10 != v11);
  v10 = v23;
LABEL_21:
  if (v10 != nullptr) {
    v24 = v10;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  return result;
}

__int64 ProcNotice_9d6140(__int64 result)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16[3];
  struct {
    __int64* v17;
    __int64* v18;
    __int64 v19;
  } v17_;
  int v20;

  v3 = *(_QWORD*)(result + 152);
  v4 = *(int*)(result + 200);
  if (v4 >= (*(_QWORD*)(result + 160) - v3) >> 3) {
    return result;
  }
  v5 = *(_QWORD*)(v3 + 8 * v4);
  if (v5 == 0 || *(_QWORD*)(v5 + 176) == 0) {
    return result;
  }
  v6 = result;
  v17_.v18 = nullptr;
  v17_.v19 = 0;
  v17_.v17 = nullptr;
  HonorFile_9c7620((void*)((__int64*)v16), (unsigned __int16*)(v5 + 168));
  result = game_8af380((__int64)&v17_.v17, v16);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v16[0] != nullptr) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v16[1] = v16[0];
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v8 + v9);
  }
  if (*(_QWORD*)(v5 + 128) != 0) {
    v10 = *(unsigned __int16*)(v5 + 120);
    if (*(_WORD*)(v5 + 120) == 0) {
      goto LABEL_17;
    }
    v11 = 8;
    while (1) {
      v12 = *(_QWORD*)(v5 + 128);
      v20 = 17;
      v16[0] = *(__int64**)(v12 + v11);
      result = (__int64)game_UnitPool_Find_6ead60_alt1((__int64*)v16, &v20);
      if (result != 0) {
        break;
      }
      --v10;
      v11 += 16;
      if (v10 == 0) {
        goto LABEL_17;
      }
    }
    v13 = result;
  }
  else {
    v13 = 0;
  }
  result = game_ItemSeq_GainBind(v6, &v17_.v17, v13, game_vstring_kEmpty_ptr[0],
                                 game_vstring_kEmpty_ptr[0]);
LABEL_17:
  if (v17_.v17 != nullptr) {
    v14 = *v7;
    v17_.v18 = v17_.v17;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15);
  }
  return result;
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
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = *(_QWORD*)(result + 152);
  v4 = *(int*)(result + 200);
  if (v4 < (*(_QWORD*)(result + 160) - v3) >> 3) {
    v5 = *(_QWORD*)(v3 + 8 * v4);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 104);
      if (v6 != 0) {
        v8 = v1;
        v9 = v2;
        v7 = v6;
        return GameRoutine_162aea0();
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

__int64 ProcNotice_Destructor(__int64 a1)
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
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcNotice_DeletingDestructor(__int64 a1)
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
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 152);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
