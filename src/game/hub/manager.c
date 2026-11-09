#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e2a60(void);
__int64 GameRoutine_657b10(void);
__int64 GameRoutine_d8d1a0(void);
__int64 GameRoutine_d983a0(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdc738[])();
extern __int64 (*game_hub_Manager_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern int GameData_220f94c;
__int64 Manager_Destructor_d52540(__int64 a1);

__int64 Manager_Destructor_d52540(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];

  *(_QWORD*)a1 = game_hub_Manager_vtable;
  if (*(_BYTE*)(a1 + 773) != 0) {
    *(_BYTE*)(a1 + 773) = 0;
    if (GameData_21f3cb8 != 0 && *(_BYTE*)(a1 + 772) != 0) {
      *(_BYTE*)(a1 + 772) = 0;
      GameRoutine_d8d1a0();
    }
    if (*(_BYTE*)(a1 + 771) != 0 && game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      GameRoutine_657b10();
      *(_BYTE*)(a1 + 771) = 0;
    }
    GameRoutine_15e2a60();
  }
  v2 = *(_QWORD*)(a1 + 744);
  v3 = *(_QWORD*)(a1 + 752);
  if (v2 != v3) {
    do {
      v4 = *(_QWORD*)(v2 + 16);
      if ((*(_BYTE*)v2 & 1) != 0) {
        v5 = *(_QWORD*)(v2 + 16);
      }
      else {
        v5 = v2 + 1;
      }
      v38[1] = v5;
      if ((*(_BYTE*)v2 & 1) != 0) {
        v6 = v4;
      }
      else {
        v6 = v2 + 1;
      }
      v38[0] = game_HashString(v6);
      game_VariableManager_SetFlag(v38, 0);
      v2 += 24;
    } while (v2 != v3);
    v3 = *(_QWORD*)(a1 + 752);
    v2 = *(_QWORD*)(a1 + 744);
  }
  if (v2 != v3) {
    v7 = v3;
    do {
      v8 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v3 - 8);
        if (v9 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10, v9);
        }
      }
      v3 = v7;
    } while (v7 != v2);
  }
  *(_QWORD*)(a1 + 752) = v2;
  v11 = *(_QWORD*)(a1 + 736);
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 744);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 752);
    if (v12 == v13) {
      goto LABEL_42;
    }
    v14 = *(_QWORD*)(a1 + 752);
    do {
      v15 = *(_BYTE*)(v14 - 24);
      v14 -= 24;
      if ((v15 & 1) != 0) {
        v16 = *(_QWORD*)(v13 - 8);
        if (v16 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v17, v16);
        }
      }
      v13 = v14;
    } while (v14 != v12);
    v18 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 752) = v12;
    v12 = v18;
    if (v18 != 0) {
    LABEL_42:
      v19 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19, v12);
    }
  }
  v20 = *(_QWORD*)(a1 + 736);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  result = GameRoutine_d983a0(a1 + 248);
  v22 = *(_QWORD*)(a1 + 224);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD*)(a1 + 208);
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
  }
  v24 = *(_QWORD*)(a1 + 112);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 120);
    if (v24 == v25) {
      goto LABEL_65;
    }
    v26 = *(_QWORD*)(a1 + 120);
    do {
      v27 = *(_BYTE*)(v26 - 24);
      v26 -= 24;
      if ((v27 & 1) != 0) {
        v28 = *(_QWORD*)(v25 - 8);
        if (v28 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v29,
                                                 v28);
        }
      }
      v25 = v26;
    } while (v26 != v24);
    v30 = *(_QWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 120) = v24;
    v24 = v30;
    if (v30 != 0) {
    LABEL_65:
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v31, v24);
    }
  }
  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    v32 = *(_QWORD*)(a1 + 104);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v33 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v33, v32);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 80);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v35 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35, v34);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v36 = *(_QWORD*)(a1 + 56);
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v37 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v37, v36);
    }
  }
  *(_QWORD*)a1 = GameData_1fdc738;
  if (GameData_21f3d10 == a1) {
    GameData_21f3d10 = 0;
    GameData_220f94c = 0;
  }
  return result;
}

#pragma GCC visibility pop
