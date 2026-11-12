#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BauquetHPChange_1752390(_QWORD*, __int64*, __int64, unsigned int,
                                unsigned int);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1752580(__int64, int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_gameui_GaugeUtil_BauquetHPChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_RestMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 RestMenuItem_Destructor(__int64 a1);
__int64 RestMenuItem_Unknown17(__int64 a1);
__int64 RestMenuItem_Unknown70(__int64 result, long double a2);
__int64 RestMenuItem_Unknown72(__int64 a1, long double a2);
__int64 RestMenuItem_Unknown75(__int64 a1);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 ui_Manager_instance_;
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 RestMenuItem_Unknown55(__int64 a1);

__int64 RestMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_telop_anonymous_RestMenuItem_vtable;
  *(_QWORD*)(a1 + 104) = game_gameui_GaugeUtil_BauquetHPChange_vtable;
  if (*(_QWORD*)(a1 + 240) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 104) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 224);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 200);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 176);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 32);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
    }
  }
  return result;
}

__int64 RestMenuItem_Unknown17(__int64 a1)
{
  __int64 v1;
  __int64 v3[2];

  v1 = *(_QWORD*)(a1 + 56);
  v3[0] = *(_QWORD*)(a1 + 48);
  v3[1] = v1;
  if (v1 == 0) {
    return BauquetHPChange_1752390((_QWORD*)(a1 + 104), v3, *(_QWORD*)(a1 + 96),
                                   *(__int16*)(*(_QWORD*)(a1 + 96) + 492LL),
                                   *(_DWORD*)(a1 + 264));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  BauquetHPChange_1752390((_QWORD*)(a1 + 104), v3, *(_QWORD*)(a1 + 96),
                          *(__int16*)(*(_QWORD*)(a1 + 96) + 492LL),
                          *(_DWORD*)(a1 + 264));
  return std___1___shared_weak_count___release_weak();
}

__int64 RestMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  void* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  _BYTE* v20;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
      LABEL_34:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        return result;
      }
      v5 = ui_LayoutAccessor_FindPane(*(__int64**)(a1 + 48), "Face");
      if (v5 != 0) {
        v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v6 = GameHr_1840740(v5, 0, *(_QWORD*)(a1 + 96), 6u, 1);
      ui_LayoutAccessor_SetPaneVisible((__int64)v3, "Face", v6 & 1);
      v7 = *(_QWORD*)(a1 + 96);
      if (*(_BYTE*)(v7 + 2136) != 0) {
        v8 = game_97b2f0(v7 + 2104);
        if (v8 == nullptr) {
          goto LABEL_12;
        }
      }
      else {
        v8 = GameHr_67ed20(*(_QWORD**)(v7 + 392));
        if (v8 == nullptr) {
        LABEL_12:
          if (*(_DWORD*)(a1 + 84) == 2) {
            if (*(_BYTE*)(a1 + 273) != 0) {
              v10 = "Magic_HealAction";
            }
            else {
              v10 = "Magic_Default";
            }
            GameHr_1562680((__int64)v3, (unsigned int*)v10,
                           0x1.0000000000000p+0f);
          }
          else {
            if (*(_WORD*)(a1 + 256) != 0) {
              v11 = ui_LayoutAccessor_FindPane(v3, "Magic_Icon");
              if (v11 != 0) {
                v12 = __dynamic_cast(v11, GameData_212d670[0],
                                     GameData_212d678[0], 0);
                if (v12 != 0) {
                  v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8LL * *(unsigned __int16*)(a1 + 256));
                  if (v13 != 0) {
                    v14 = *(_QWORD*)(v13 + 24);
                    v15 = *(unsigned __int8*)(v14 + 560);
                    v16 = (v15 & 1) == 0;
                    if ((v15 & 1) != 0) {
                      v17 = *(_QWORD*)(v14 + 568);
                    }
                    else {
                      v17 = v15 >> 1;
                    }
                    v18 = *(_BYTE**)(v14 + 576);
                    v19 = (_BYTE*)(v14 + 561);
                    if (!v16) {
                      v19 = v18;
                    }
                    if (v17 != 0) {
                      v20 = v19;
                    }
                    else {
                      v20 = nullptr;
                    }
                    Manager_136a920(ui_Manager_instance_ + 1264, v12, 0, 2u,
                                    v20);
                  }
                }
              }
            }
            LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"Magic_Default");
          }
          ui_LayoutAccessor_SetPaneVisible((__int64)v3, "Magic",
                                           *(_WORD*)(a1 + 256) != 0);
          result =
              (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 568LL))(a1, 1);
          goto LABEL_34;
        }
      }
      v9 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
      if (v9 != 0) {
        GameRoutine_156c5d0(v9, (__int64)v8, 0);
      }
      goto LABEL_12;
    }
  }
  return result;
}

__int64 RestMenuItem_Unknown70(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v8;

  if (*(_BYTE*)(result + 272) == 1) {
    v2 = result;
    v3 = *(_QWORD*)(result + 56);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = v4;
        v6 = (atomic_ullong*)(v4 + 8);
        v7 = *(__int64**)(v2 + 48);
        if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v7 != nullptr) {
          LABEL_7:
            LODWORD(a2) = 1.0;
            result = GameRoutine_1562680(v7, "Magic_HealAction", a2);
            *(_WORD*)(v2 + 272) = 256;
            return result;
          }
        }
        else {
          v8 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak();
          v7 = v8;
          if (v8 != nullptr) {
            goto LABEL_7;
          }
        }
      }
    }
    v7 = &ui_LayoutAccessor_empty_;
    goto LABEL_7;
  }
  return result;
}

__int64 RestMenuItem_Unknown72(__int64 a1, long double a2)
{
  __int64 result;
  __int64 v4;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      if (*(_QWORD*)(a1 + 232) != 0) {
        v4 = *(_QWORD*)(a1 + 248);
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak();
        }
        if (v4 != 0 && *(float*)(a1 + 120) != 0.0) {
          return GameRoutine_1752580(a1 + 104, 1);
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak();
      }
    }
  }
  LODWORD(a2) = *(_DWORD*)(a1 + 88);
  if (*(_DWORD*)(a1 + 84) != 2 && *(float*)&a2 >= 8.0) {
    result =
        (*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 584LL))(a1, a2);
    if ((result & 1) != 0) {
      *(_DWORD*)(a1 + 84) = 2;
      return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
    }
  }
  return result;
}

__int64 RestMenuItem_Unknown75(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      if (*(_QWORD*)(a1 + 232) != 0) {
        v3 = *(_QWORD*)(a1 + 248);
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak();
        }
        if (v3 != 0 && *(float*)(a1 + 120) != 0.0) {
          return GameRoutine_1752580(a1 + 104, 2);
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
