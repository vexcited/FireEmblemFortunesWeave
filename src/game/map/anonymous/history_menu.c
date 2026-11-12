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
__int64
HistoryMenu_Destructor_alt1(__int64 a1) __asm__("HistoryMenu_Destructor");
__int64 HistoryMenu_Unknown2(__int64 a1);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_1237860(PSEUDO_X8, unsigned __int8*,
                                                    int, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1272780(__int64, unsigned int);
__int64 game_map_history_12297e0(__int64, int);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* GameData_21309c8[5];
__int64 HistoryMenu_Unknown144(__int64 a1, int a2);
__int64 HistoryMenu_Unknown145(__int64 a1);
__int64 HistoryMenu_Unknown146(__int64 a1);
bool HistoryMenu_1270b00(__int64 a1, int a2);
__int64 HistoryMenu_Unknown7(__int64 a1);
__int64 HistoryMenu_Unknown13(__int64 a1, int a2);
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HistoryMenu_Destructor(__int64 a1);

void HistoryMenu_Destructor(__int64 a1)
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

  if ((*(_BYTE*)(a1 + 1736) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1752);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 1672) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1688);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 1608) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 1624);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 1544) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 1560);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  if ((*(_BYTE*)(a1 + 1480) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 1496);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  if ((*(_BYTE*)(a1 + 1416) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 1432);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  if ((*(_BYTE*)(a1 + 1352) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 1368);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
    }
  }
  if ((*(_BYTE*)(a1 + 1288) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 1304);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 1224) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 1240);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  if ((*(_BYTE*)(a1 + 1160) & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 1176);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
  if ((*(_BYTE*)(a1 + 1096) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 1112);
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
    }
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
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

__int64 HistoryMenu_Unknown144(__int64 a1, int a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  int v7;
  unsigned int v8;
  __int64 v9;
  _BYTE* v10;
  unsigned int i;
  __int64 v13;
  _BYTE* v14;

  v3 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1776) + 5) % 11) << 6) +
                  1072);
  v4 = GameData_22400f8;
  if (a2 < 1) {
    if (GameData_22400f8 != 0 &&
        game_map_history_12297e0(GameData_22400f8, v3) != 0) {
      while (++v3 < *(_DWORD*)(v4 + 824)) {
        v9 = game_map_history_12297e0(v4, v3);
        if (v9 == 0) {
          break;
        }
        v10 = (_BYTE*)v9;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 56LL))(v10) ==
                1 &&
            v10[18] == 0) {
          if (v3 >= 0) {
            v8 = v3;
          }
          else {
            v8 = *(_DWORD*)(a1 + 1068) - 1;
          }
          return GameRoutine_1272780(a1, v8);
        }
      }
    }
    v8 = *(_DWORD*)(a1 + 1068) - 1;
  }
  else {
    if (GameData_22400f8 != 0) {
      v5 = game_map_history_12297e0(GameData_22400f8, v3);
      if (v3 >= 1 && v5 != 0) {
        for (i = v3 + 1; i >= 2; --i) {
          v7 = i - 2;
          v13 = game_map_history_12297e0(v4, i - 2);
          if (v13 == 0) {
            break;
          }
          v14 = (_BYTE*)v13;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13) & 1) !=
                  0 &&
              *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v14 + 56LL))(v14) ==
                  1 &&
              v14[18] == 0) {
            goto LABEL_9;
          }
        }
      }
    }
    v7 = -1;
  LABEL_9:
    v8 = v7 & ~(v7 >> 31);
  }
  return GameRoutine_1272780(a1, v8);
}

__int64 HistoryMenu_Unknown145(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v6;
  unsigned int i;
  __int64 v9;
  _BYTE* v10;

  v1 = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    v2 = a1;
    v3 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1776) + 5) % 11) << 6) +
                    1072);
    v4 = game_map_history_12297e0(GameData_22400f8, v3);
    if (v3 >= 1 && v4 != 0) {
      for (i = v3 + 1; i >= 2; --i) {
        v6 = i - 2;
        v9 = game_map_history_12297e0(v1, i - 2);
        if (v9 == 0) {
          break;
        }
        v10 = (_BYTE*)v9;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 56LL))(v10) ==
                1 &&
            v10[18] == 0) {
          goto LABEL_8;
        }
      }
    }
    v6 = -1;
  LABEL_8:
    a1 = v2;
  }
  else {
    v6 = -1;
  }
  return GameRoutine_1272780(a1, v6 & (unsigned int)~(v6 >> 31));
}

__int64 HistoryMenu_Unknown146(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _BYTE* v5;
  unsigned int v6;

  v2 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    v3 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1776) + 5) % 11) << 6) +
                    1072);
    if (game_map_history_12297e0(*GameData_21309c8[0], v3) != 0) {
      while (++v3 < *(_DWORD*)(v2 + 824)) {
        v4 = game_map_history_12297e0(v2, v3);
        if (v4 == 0) {
          break;
        }
        v5 = (_BYTE*)v4;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 56LL))(v5) == 1 &&
            v5[18] == 0) {
          if (v3 >= 0) {
            v6 = v3;
          }
          else {
            v6 = *(_DWORD*)(a1 + 1068) - 1;
          }
          return GameRoutine_1272780(a1, v6);
        }
      }
    }
  }
  v6 = *(_DWORD*)(a1 + 1068) - 1;
  return GameRoutine_1272780(a1, v6);
}

__int64 HistoryMenu_Unknown7(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _BYTE* v5;
  unsigned int v6;

  v2 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    v3 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1600) + 5) % 11) << 6) +
                    896);
    if (game_map_history_12297e0(*GameData_21309c8[0], v3) != 0) {
      while (++v3 < (signed __int32)*(_DWORD*)(v2 + 824)) {
        v4 = game_map_history_12297e0(v2, v3);
        if (v4 == 0) {
          break;
        }
        v5 = (_BYTE*)v4;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 56LL))(v5) == 1 &&
            v5[18] == 0) {
          if (v3 >= 0) {
            v6 = v3;
          }
          else {
            v6 = *(_DWORD*)(a1 + 892) - 1;
          }
          return GameRoutine_1272780(a1 - 176, v6);
        }
      }
    }
  }
  v6 = *(_DWORD*)(a1 + 892) - 1;
  return GameRoutine_1272780(a1 - 176, v6);
}

__int64 HistoryMenu_Unknown13(__int64 a1, int a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  int v7;
  unsigned int v8;
  __int64 v9;
  _BYTE* v10;
  unsigned int i;
  __int64 v13;
  _BYTE* v14;

  v3 =
      *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1600) + 5) % 11) << 6) + 896);
  v4 = GameData_22400f8;
  if (a2 < 1) {
    if (GameData_22400f8 != 0 &&
        game_map_history_12297e0(GameData_22400f8, v3) != 0) {
      while (++v3 < (signed __int32)*(_DWORD*)(v4 + 824)) {
        v9 = game_map_history_12297e0(v4, v3);
        if (v9 == 0) {
          break;
        }
        v10 = (_BYTE*)v9;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 56LL))(v10) ==
                1 &&
            v10[18] == 0) {
          if (v3 >= 0) {
            v8 = v3;
          }
          else {
            v8 = *(_DWORD*)(a1 + 892) - 1;
          }
          return GameRoutine_1272780(a1 - 176, v8);
        }
      }
    }
    v8 = *(_DWORD*)(a1 + 892) - 1;
  }
  else {
    if (GameData_22400f8 != 0) {
      v5 = game_map_history_12297e0(GameData_22400f8, v3);
      if (v3 >= 1 && v5 != 0) {
        for (i = v3 + 1; i >= 2; --i) {
          v7 = i - 2;
          v13 = game_map_history_12297e0(v4, i - 2);
          if (v13 == 0) {
            break;
          }
          v14 = (_BYTE*)v13;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13) & 1) !=
                  0 &&
              *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v14 + 56LL))(v14) ==
                  1 &&
              v14[18] == 0) {
            goto LABEL_9;
          }
        }
      }
    }
    v7 = -1;
  LABEL_9:
    v8 = v7 & ~(v7 >> 31);
  }
  return GameRoutine_1272780(a1 - 176, v8);
}

bool HistoryMenu_1270b00(__int64 a1, int a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  char v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  char v23;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v35;
  int v36;
  struct {
    unsigned __int64 v37;
    char v38;
  } v37_;
  struct {
    __int64 v39;
    unsigned __int64 v40;
    char* v41;
    __int64 v42;
    __int64 v43;
  } v39_;

  v2 = a1 + 1072;
  v3 = *(_DWORD*)(a1 + 1068) - 1;
  if (v3 >= a2) {
    v3 = a2;
  }
  if (a2 >= 0) {
    v4 = v3;
  }
  else {
    v4 = 0;
  }
  v5 = *(_DWORD*)(a1 + 1776);
  v35 = *(_DWORD*)(v2 + ((__int64)((v5 + 5) % 11) << 6));
  v36 = v4;
  if (v4 != v35) {
    v7 = v4 + v5;
    v8 = ((v5 - v35 + v4) & ~((v5 - v35 + v4) >> 31)) + v35;
    v9 = (v8 - v7 - (unsigned int)(v8 != v7)) / 0xB;
    if (v8 != v7) {
      ++v9;
    }
    v10 = 11 * v9 + v7;
    v11 = v10 - v35;
    if (v10 - v35 >= 11) {
      if (v11 >= 0x15) {
        v11 = 21;
      }
      v11 = v11 + (v10 - v35 - v11 + 10) % 0xB - 21;
    }
    *(_DWORD*)(a1 + 1776) = v11;
    v12 = 0;
    v13 = v4 + 5;
    v14 = GameData_21309c8[0];
    do {
      v15 = v2 + ((__int64)(((int)v12 + *(_DWORD*)(a1 + 1776)) % 11) << 6);
      if (v13 < 0 || v13 >= (signed __int32)*(_DWORD*)(a1 + 1068)) {
        v28 = *(_BYTE*)(v15 + 24);
        *(_DWORD*)v15 = -1;
        *(_QWORD*)(v15 + 8) = 0xFF000000FFFFFFFFLL;
        *(_BYTE*)(v15 + 16) = -1;
        if ((v28 & 1) != 0) {
          **(_BYTE**)(v15 + 40) = 0;
          *(_QWORD*)(v15 + 32) = 0;
        }
        else {
          *(_WORD*)(v15 + 24) = 0;
        }
        *(_QWORD*)(v15 + 48) = 0;
        *(_QWORD*)(v15 + 56) = 0;
      }
      else if (v13 != *(_DWORD*)v15) {
        if (*v14 != 0 && (v16 = game_map_history_12297e0(*v14, v13)) != 0) {
          v17 = v14;
          v18 = *(unsigned __int16*)(v16 + 16);
          v19 = *(_BYTE*)(v16 + 18);
          v20 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 +
                                                            56LL))(v16);
          v21 = v18;
          v14 = v17;
          GameRoutine_1237860((void*)((__int64)&v37_.v37), v20, v21, v19);
          v22 = v37_.v37;
          v23 = BYTE4(v37_.v37);
          v24 = BYTE5(v37_.v37);
          v25 = BYTE6(v37_.v37);
          v26 = HIBYTE(v37_.v37);
          v27 = v37_.v38;
        }
        else {
          v27 = -1;
          v22 = -1;
          v26 = -1;
          v25 = 0;
          v24 = 0;
          v23 = 0;
          v39_.v39 = 0;
          v39_.v40 = 0;
          v37_.v37 = 0xFF000000FFFFFFFFLL;
          v39_.v41 = nullptr;
          v39_.v42 = 0;
          v39_.v43 = 0;
          v37_.v38 = -1;
        }
        *(_DWORD*)(v15 + 8) = v22;
        *(_DWORD*)v15 = v13;
        *(_BYTE*)(v15 + 12) = v23;
        *(_BYTE*)(v15 + 13) = v24;
        *(_BYTE*)(v15 + 14) = v25;
        *(_BYTE*)(v15 + 15) = v26;
        *(_BYTE*)(v15 + 16) = v27;
        if ((unsigned __int64*)(v15 + 8) != &v37_.v37) {
          if ((*(_BYTE*)(v15 + 24) & 1) != 0) {
            if ((v39_.v39 & 1) != 0) {
              v30 = v39_.v41;
            }
            else {
              v30 = (char*)&v39_.v39 + 1;
            }
            if ((v39_.v39 & 1) != 0) {
              v31 = v39_.v40;
            }
            else {
              v31 = (unsigned __int64)(unsigned __int8)v39_.v39 >> 1;
            }
            SpineModel_64dde0((__int64*)(v15 + 24), (__int64)v30, v31);
          }
          else if ((v39_.v39 & 1) != 0) {
            GameRoutine_64df20((_QWORD*)(v15 + 24), (__int64)v39_.v41,
                               v39_.v40);
          }
          else {
            v29 = v39_.v40;
            *(_QWORD*)(v15 + 24) = v39_.v39;
            *(_QWORD*)(v15 + 32) = v29;
            *(_QWORD*)(v15 + 40) = v39_.v41;
          }
        }
        v32 = v39_.v43;
        *(_QWORD*)(v15 + 48) = v39_.v42;
        *(_QWORD*)(v15 + 56) = v32;
        if ((v39_.v39 & 1) != 0 && v39_.v41 != nullptr) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v39_.v41);
        }
      }
      *(_QWORD*)(a1 + 1784 + 8 * v12++) = v15;
      --v13;
    } while (v12 != 11);
  }
  return v36 != v35;
}

#pragma GCC visibility pop
