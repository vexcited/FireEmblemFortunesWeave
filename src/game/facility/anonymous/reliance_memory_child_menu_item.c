#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 GameRoutine_157d6f0(_QWORD, _QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_19ed040(_QWORD);
__int64 GameRoutine_19ed2b0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);

extern __int64 (
    *game_facility_anonymous_RelianceMemoryChildMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 RelianceMemoryChildMenuItem_Destructor(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1);
__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1);

__int64 RelianceMemoryChildMenuItem_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;

  v1 = *(_QWORD*)(a1 + 416);
  *(_QWORD*)a1 = game_facility_anonymous_RelianceMemoryChildMenuItem_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 424) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 360);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 368) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = *(_QWORD*)(a1 + 304);
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 312) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = *(_QWORD*)(a1 + 248);
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 256) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 192);
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 200) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
  }
  return result;
}

__int64 RelianceMemoryChildMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  GameRoutine_19ed2b0(a1, 1);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown21(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  GameRoutine_19ed2b0(a1, 0);
  return GameRoutine_19ed040(a1);
}

__int64 RelianceMemoryChildMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  _QWORD v10[5];
  _BYTE v11[20];

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v9);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = *(_BYTE*)(a1 + 160);
  GameRoutine_15e0120(v11);
  if ((v5 & 1) == 0) {
    GameRoutine_15e0200(v11);
  }
  v6 = *(_QWORD*)(a1 + 88);
  v10[0] = v6;
  if (v6 != 0) {
    v6 = *(_QWORD*)(v6 + 392);
  }
  v10[1] = v6;
  memset(&v10[2], 0, 13);
  v10[4] = 0;
  BYTE5(v10[3]) = 6;
  v10[2] = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) & 1;
  *(_DWORD*)((char*)&v10[2] + 1) =
      (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1) & 1;
  WORD1(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1) & 1;
  BYTE4(v10[2]) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 600LL))(a1) & 1;
  GameRoutine_1570b30(v4, v10);
  v7 = GameRoutine_155fbe0(v4, "L_Level");
  GameRoutine_157d6f0(v7, a1 + 104);
  GameRoutine_19ed2b0(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
  GameRoutine_19ed040(a1);
  return GameRoutine_15e04f0(v11);
}

#pragma GCC visibility pop
