#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_122a7e0(__int64 result, int);
__int64 GameRoutine_1270b00(_QWORD, _QWORD);
__int64 GameRoutine_1270e80(_QWORD, _QWORD);
__int64 GameRoutine_1271240(_QWORD);
__int64 GameRoutine_1271480(_QWORD, _QWORD);
__int64 GameRoutine_1271640(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 (*game_map_anonymous_HistoryMenuItem_vtable[])();
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64 ui_LayoutAccessor_empty_;
__int64 HistoryMenu_Destructor(__int64 a1);
__int64 HistoryMenu_Unknown2(__int64 a1);

__int64 HistoryMenu_Destructor(__int64 a1)
{
  __int64 v2;
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

  if ((*(_BYTE*)(a1 + 1736) & 1) != 0 && *(_QWORD*)(a1 + 1752) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(a1 + 1672) & 1) != 0 && *(_QWORD*)(a1 + 1688) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 1608) & 1) != 0 && *(_QWORD*)(a1 + 1624) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(a1 + 1544) & 1) != 0 && *(_QWORD*)(a1 + 1560) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(a1 + 1480) & 1) != 0 && *(_QWORD*)(a1 + 1496) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if ((*(_BYTE*)(a1 + 1416) & 1) != 0 && *(_QWORD*)(a1 + 1432) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  if ((*(_BYTE*)(a1 + 1352) & 1) != 0 && *(_QWORD*)(a1 + 1368) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0 && *(_QWORD*)(a1 + 1304) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if ((*(_BYTE*)(a1 + 1224) & 1) != 0 && *(_QWORD*)(a1 + 1240) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  if ((*(_BYTE*)(a1 + 1160) & 1) != 0 && *(_QWORD*)(a1 + 1176) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  if ((*(_BYTE*)(a1 + 1096) & 1) != 0 && *(_QWORD*)(a1 + 1112) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 HistoryMenu_Unknown2(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  int v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  char v13;
  _QWORD* v14;
  _QWORD* v15;
  char v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  atomic_ullong* v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  atomic_ullong* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  atomic_ullong* v42;
  __int64* v43;
  __int64* v44;
  const char* v45;
  __int64* v46;

  v1 = *(__int64**)(a1 + 232);
  v2 = *(__int64**)(a1 + 240);
  if (v1 == v2) {
  LABEL_5:
    v4 = -1;
  }
  else {
    v4 = 0;
    while (1) {
      v5 = *v1++;
      if (v5 == *(_QWORD*)(a1 + 336)) {
        break;
      }
      ++v4;
      if (v1 == v2) {
        goto LABEL_5;
      }
    }
  }
  result = GameRoutine_16df7a0(a1);
  v7 = *(__int64**)(a1 + 232);
  v8 = *(__int64**)(a1 + 240);
  if (v7 == v8) {
  LABEL_10:
    v9 = -1;
  }
  else {
    v9 = 0;
    while (1) {
      v10 = *v7++;
      if (v10 == *(_QWORD*)(a1 + 336)) {
        break;
      }
      ++v9;
      if (v7 == v8) {
        goto LABEL_10;
      }
    }
  }
  v11 = v4 - v9;
  if (v4 != v9) {
    v12 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1776) + 5) % 11) << 6) +
                     1072);
    v13 = GameRoutine_1270b00(a1, (unsigned int)(v12 + v11));
    v14 = *(_QWORD**)(a1 + 232);
    v15 = *(_QWORD**)(a1 + 240);
    v16 = v13;
    if (v14 != v15) {
      v17 = 0;
      do {
        v18 = *v14;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v14 + 48LL))(*v14) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18) & 1) != 0) {
          if (v17 == 4) {
            goto LABEL_20;
          }
          ++v17;
        }
        ++v14;
      } while (v14 != v15);
    }
    v18 = 0;
  LABEL_20:
    v19 = *(_QWORD*)(a1 + 336);
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 168LL))(v19);
    }
    *(_QWORD*)(a1 + 336) = v18;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
    v20 = *(_QWORD*)(a1 + 336);
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 160LL))(v20);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v21 = *(_QWORD*)(a1 + 336);
      v22 = 4;
      if (v21 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 120LL))(v21) & 1) != 0) {
          v22 = 4;
        }
        else {
          v22 = 0;
        }
      }
    }
    else {
      v22 = 4;
    }
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v22;
    if ((v16 & 1) != 0) {
      v23 = *(_QWORD*)(a1 + 8LL * *(int*)(*(_QWORD*)(a1 + 336) + 84LL) + 1784);
      v25 = *(_DWORD*)(v23 + 8);
      v24 = v23 + 8;
      if (v25 >= 1) {
        if (GameData_22400f8 != 0) {
          GameRoutine_122a7e0(
              GameData_22400f8,
              **(_DWORD**)(a1 + 8LL * *(int*)(*(_QWORD*)(a1 + 336) + 84LL) +
                           1784));
        }
        GameRoutine_1271480(a1, v24);
        GameRoutine_1271640(a1);
      }
    }
    v26 = v4 - 1;
    if (v4 >= v9) {
      v26 = v4 + 1;
    }
    v27 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v26);
    if (*(_QWORD*)(v27 + 56) != 0) {
      v28 = std___1___shared_weak_count_lock();
      if (v28 != 0) {
        v29 = v28;
        v30 = (atomic_ullong*)(v28 + 8);
        v31 = *(__int64**)(v27 + 48);
        if (atomic_fetch_add(v30, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v31 != nullptr) {
          LABEL_40:
            GameRoutine_1562680(v31, "Out", 1.0);
            GameRoutine_1270e80(a1, (unsigned int)(v12 + v11));
            result = GameRoutine_1271240(a1);
            goto LABEL_41;
          }
        }
        else {
          v46 = v31;
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
          v31 = v46;
          if (v46 != nullptr) {
            goto LABEL_40;
          }
        }
      }
    }
    v31 = &ui_LayoutAccessor_empty_;
    goto LABEL_40;
  }

LABEL_41:
  v32 = *(_QWORD*)(a1 + 336);
  if (v32 != 0 &&
      *(__int64 (***)())v32 == game_map_anonymous_HistoryMenuItem_vtable &&
      *(_BYTE*)(v32 + 88) == 1) {
    v33 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1776) + 5) % 11) << 6) +
                     1072);
    if (*(_QWORD*)(v32 + 56) == 0) {
      goto LABEL_49;
    }
    v34 = std___1___shared_weak_count_lock();
    if (v34 == 0) {
      goto LABEL_49;
    }
    v35 = v34;
    v36 = (atomic_ullong*)(v34 + 8);
    v37 = *(__int64**)(v32 + 48);
    if (atomic_fetch_add(v36, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v38 = v37;
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v35);
      v37 = v38;
    }
    if (v37 == nullptr) {
    LABEL_49:
      v37 = &ui_LayoutAccessor_empty_;
    }
    result = GameRoutine_1563380(v37, "In", 0);
    if ((result & 1) != 0) {
      v39 = *(_QWORD*)(v32 + 56);
      *(_BYTE*)(v32 + 88) = 0;
      if (v39 == 0) {
        goto LABEL_56;
      }
      v40 = std___1___shared_weak_count_lock();
      if (v40 == 0) {
        goto LABEL_56;
      }
      v41 = v40;
      v42 = (atomic_ullong*)(v40 + 8);
      v43 = *(__int64**)(v32 + 48);
      if (atomic_fetch_add(v42, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v44 = v43;
        (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
        std___1___shared_weak_count___release_weak(v41);
        v43 = v44;
      }
      if (v43 == nullptr) {
      LABEL_56:
        v43 = &ui_LayoutAccessor_empty_;
      }
      if (v33 != 0) {
        v45 = "Select";
      }
      else {
        v45 = "DisableSelect";
      }
      return GameRoutine_1562680(v43, v45, 1.0);
    }
  }
  return result;
}

#pragma GCC visibility pop
