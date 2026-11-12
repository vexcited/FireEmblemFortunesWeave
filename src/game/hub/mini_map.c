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
__int64 GameRoutine_18f4600_alt1(__int64) __asm__("GameRoutine_18f4600");
__int64 NpcIconList_Destructor_alt1(_QWORD*) __asm__("NpcIconList_Destructor");
__int64
QuestIconList_Destructor_alt1(_QWORD*) __asm__("QuestIconList_Destructor");
__int64 game_hub_AreaChangeIconList_Destroy_AreaChangeIconList_alt1(
    _QWORD*) __asm__("game_hub_AreaChangeIconList_Destroy_AreaChangeIconList");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

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
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v6);
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(a1 + 784);
    *(_QWORD*)(a1 + 792) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v1);
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
        if ((*(_BYTE*)(v12 - 64) & 1) != 0) {
          v13 = *(_QWORD*)(v12 - 48);
          if (v13 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v14 = 128;
            }
            else {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, v13);
          }
        }
        if ((*(_BYTE*)(v12 - 88) & 1) != 0) {
          v15 = *(_QWORD*)(v12 - 72);
          if (v15 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, v15);
          }
        }
      }
      v12 -= 128;
    } while (v12 != v11);
    v17 = *(_QWORD*)(a1 + 752);
    *(_QWORD*)(a1 + 760) = v11;
    v11 = v17;
    if (v17 != 0) {
    LABEL_32:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, v11);
    }
  }
  v19 = *(_QWORD*)(a1 + 728);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 736);
    if (v19 == v20) {
      goto LABEL_52;
    }
    do {
      if ((*(_BYTE*)(v20 - 48) & 1) != 0) {
        v21 = *(_QWORD*)(v20 - 32);
        if (v21 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v22, v21);
        }
      }
      if ((*(_BYTE*)(v20 - 72) & 1) != 0) {
        v23 = *(_QWORD*)(v20 - 56);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v24, v23);
        }
      }
      v20 -= 80;
    } while (v20 != v19);
    v25 = *(_QWORD*)(a1 + 728);
    *(_QWORD*)(a1 + 736) = v19;
    v19 = v25;
    if (v25 != 0) {
    LABEL_52:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v26, v19);
    }
  }
  if ((*(_BYTE*)(a1 + 648) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 664);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v28, v27);
    }
  }
  if ((*(_BYTE*)(a1 + 624) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 640);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v30, v29);
    }
  }
  v31 = *(_QWORD*)(a1 + 616);
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  v32 = *(_QWORD*)(a1 + 552);
  if (v32 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v32);
  }
  v33 = *(_QWORD*)(a1 + 488);
  if (v33 != 0) {
    v34 = *(_QWORD*)(a1 + 496);
    if (v33 == v34) {
      goto LABEL_77;
    }
    do {
      v35 = *(_QWORD*)(v34 - 48);
      if (v35 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v35);
      }
      v34 -= 64;
    } while (v34 != v33);
    v36 = *(_QWORD*)(a1 + 488);
    *(_QWORD*)(a1 + 496) = v33;
    v33 = v36;
    if (v36 != 0) {
    LABEL_77:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v37, v33);
    }
  }
  v38 = *(_QWORD*)(a1 + 480);
  if (v38 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v38);
  }
  v39 = *(_QWORD*)(a1 + 432);
  if (v39 != 0) {
    v40 = *(_QWORD*)(a1 + 440);
    if (v39 == v40) {
      goto LABEL_86;
    }
    do {
      v40 -= 208;
      GameRoutine_18f4600_alt1(v40);
    } while (v40 != v39);
    v41 = *(_QWORD*)(a1 + 432);
    *(_QWORD*)(a1 + 440) = v39;
    v39 = v41;
    if (v41 != 0) {
    LABEL_86:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v42, v39);
    }
  }
  QuestIconList_Destructor_alt1((_QWORD*)(a1 + 352));
  game_hub_AreaChangeIconList_Destroy_AreaChangeIconList_alt1(
      (_QWORD*)(a1 + 272));
  v43 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 216) = &game_hub_MapIconList_vtable;
  if (v43 != 0) {
    v44 = *(_QWORD*)(a1 + 248);
    if (v43 == v44) {
      goto LABEL_96;
    }
    do {
      v45 = *(_QWORD*)(v44 - 40);
      if (v45 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v45);
      }
      v44 -= 64;
    } while (v44 != v43);
    v46 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 248) = v43;
    v43 = v46;
    if (v46 != 0) {
    LABEL_96:
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v47, v43);
    }
  }
  v48 = *(_QWORD*)(a1 + 232);
  if (v48 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v48);
  }
  NpcIconList_Destructor_alt1((_QWORD*)(a1 + 136));
  v49 = *(_QWORD*)(a1 + 48);
  if (v49 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v49);
  }
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

#pragma GCC visibility pop
