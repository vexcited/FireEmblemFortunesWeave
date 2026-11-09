#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18f4600(_QWORD);
__int64 NpcIconList_Destructor(_QWORD);
__int64 QuestIconList_Destructor(_QWORD);
__int64 game_hub_AreaChangeIconList_Destroy_AreaChangeIconList(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 (*game_hub_MiniMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MiniMap_Destructor(__int64 a1);

__int64 MiniMap_Destructor(__int64 a1)
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
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
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 784);
  *(_QWORD*)a1 = game_hub_MiniMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 792);
    if (v1 == v4) {
      goto LABEL_11;
    }
    v5 = *(_QWORD*)(a1 + 792);
    do {
      v7 = *(_QWORD*)(v5 - 32);
      v5 -= 32;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v4 - 24) = v6;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 784);
    *(_QWORD*)(a1 + 792) = v1;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 752);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 760);
    if (v11 == v12) {
      goto LABEL_32;
    }
    do {
      if (*(_BYTE*)(v12 - 16) == 1) {
        if ((*(_BYTE*)(v12 - 64) & 1) != 0 && *(_QWORD*)(v12 - 48) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
        }
        if ((*(_BYTE*)(v12 - 88) & 1) != 0 && *(_QWORD*)(v12 - 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
        }
      }
      v12 -= 128;
    } while (v12 != v11);
    v15 = *(_QWORD*)(a1 + 752);
    *(_QWORD*)(a1 + 760) = v11;
    if (v15 != 0) {
    LABEL_32:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 728);
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 736);
    if (v17 == v18) {
      goto LABEL_52;
    }
    do {
      if ((*(_BYTE*)(v18 - 48) & 1) != 0 && *(_QWORD*)(v18 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
      }
      if ((*(_BYTE*)(v18 - 72) & 1) != 0 && *(_QWORD*)(v18 - 56) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20);
      }
      v18 -= 80;
    } while (v18 != v17);
    v21 = *(_QWORD*)(a1 + 728);
    *(_QWORD*)(a1 + 736) = v17;
    if (v21 != 0) {
    LABEL_52:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22);
    }
  }
  if ((*(_BYTE*)(a1 + 648) & 1) != 0 && *(_QWORD*)(a1 + 664) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
  }
  if ((*(_BYTE*)(a1 + 624) & 1) != 0 && *(_QWORD*)(a1 + 640) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
  }
  v25 = *(_QWORD*)(a1 + 616);
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = *(_QWORD*)(a1 + 552);
  if (v26 != 0) {
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = *(_QWORD*)(a1 + 488);
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 496);
    if (v27 == v28) {
      goto LABEL_77;
    }
    do {
      v29 = *(_QWORD*)(v28 - 48);
      if (v29 != 0) {
        std___1___shared_weak_count___release_weak(v29);
      }
      v28 -= 64;
    } while (v28 != v27);
    v30 = *(_QWORD*)(a1 + 488);
    *(_QWORD*)(a1 + 496) = v27;
    if (v30 != 0) {
    LABEL_77:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
    }
  }
  v32 = *(_QWORD*)(a1 + 480);
  if (v32 != 0) {
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *(_QWORD*)(a1 + 432);
  if (v33 != 0) {
    v34 = *(_QWORD*)(a1 + 440);
    if (v33 == v34) {
      goto LABEL_86;
    }
    do {
      v34 -= 208;
      GameRoutine_18f4600(v34);
    } while (v34 != v33);
    v35 = *(_QWORD*)(a1 + 432);
    *(_QWORD*)(a1 + 440) = v33;
    if (v35 != 0) {
    LABEL_86:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v36);
    }
  }
  QuestIconList_Destructor(a1 + 352);
  game_hub_AreaChangeIconList_Destroy_AreaChangeIconList(a1 + 272);
  v37 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 216) = &game_hub_MapIconList_vtable;
  if (v37 != 0) {
    v38 = *(_QWORD*)(a1 + 248);
    if (v37 == v38) {
      goto LABEL_96;
    }
    do {
      v39 = *(_QWORD*)(v38 - 40);
      if (v39 != 0) {
        std___1___shared_weak_count___release_weak(v39);
      }
      v38 -= 64;
    } while (v38 != v37);
    v40 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 248) = v37;
    if (v40 != 0) {
    LABEL_96:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v41);
    }
  }
  v42 = *(_QWORD*)(a1 + 232);
  if (v42 != 0) {
    std___1___shared_weak_count___release_weak(v42);
  }
  NpcIconList_Destructor(a1 + 136);
  v43 = *(_QWORD*)(a1 + 48);
  if (v43 != 0) {
    std___1___shared_weak_count___release_weak(v43);
  }
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

#pragma GCC visibility pop
