#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1114920(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_1572840(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1756170(_QWORD, _QWORD);
__int64 GameRoutine_1756280(void);
__int64 GameRoutine_17565c0(void);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a30a0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_MasteryExpChange_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_telop_anonymous_ExpMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 ExpMenuItem_Destructor(__int64 a1);
__int64 ExpMenuItem_Unknown55(__int64 a1);
__int64 ExpMenuItem_Unknown72(__int64 result, long double a2);
bool ExpMenuItem_Unknown73(__int64 a1);
__int64 ExpMenuItem_1756170(_QWORD, _QWORD);
__int64 GameRoutine_1756280_alt1(_QWORD) __asm__("GameRoutine_1756280");
__int64 GameRoutine_17565c0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_17565c0");
__int64 ExpMenuItem_Unknown75(__int64 a1);

__int64 ExpMenuItem_Destructor(__int64 a1)
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
  __int64 result;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = game_telop_anonymous_ExpMenuItem_vtable;
  *(_QWORD*)(a1 + 248) = game_gameui_GaugeUtil_MasteryExpChange_vtable;
  if (*(_QWORD*)(a1 + 384) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)(a1 + 248) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 352) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 368);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 344);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 320);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  *(_QWORD*)(a1 + 120) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 240);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 216);
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 192);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 32);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
  return result;
}

__int64 ExpMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD v24[2];
  _QWORD* v25;
  __int64 v26;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 == 0) {
        goto LABEL_60;
      }
      v5 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 48), "Face");
      if (v5 != 0) {
        v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v6 = GameRoutine_1840740(v5, 0, *(_QWORD*)(a1 + 96), 6, 1);
      ui_LayoutAccessor_SetPaneVisible(v3, "Face", v6 & 1);
      v7 = *(_QWORD*)(a1 + 96);
      if (*(_BYTE*)(v7 + 2136) != 0) {
        v8 = GameRoutine_97b2f0(v7 + 2104);
        if (v8 == 0) {
          goto LABEL_12;
        }
      }
      else {
        v8 = GameRoutine_67ed20(*(_QWORD*)(v7 + 392));
        if (v8 == 0) {
          goto LABEL_12;
        }
      }
      v10 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
      if (v10 != 0) {
        GameRoutine_156c5d0(v10, v8, 0);
      }
    LABEL_12:
      if (*(_DWORD*)(a1 + 84) == 2) {
        LODWORD(v9) = 1.0;
        if (*(_BYTE*)(a1 + 105) != 0) {
          v11 = "Finish_In";
        }
        else {
          v11 = "Finish_Off";
        }
        GameRoutine_1562680(v3, v11, v9);
        GameRoutine_15638b0(v3, v11, 0);
        GameRoutine_1562f00(v3, v11);
        GameRoutine_1563030(v3, v11, 0);
        v24[0] = "L_ExpLvUP";
        v24[1] = 9;
        GameRoutine_1114920(&v25, v3, v24);
        if (v26 != 0) {
          v12 = std___1___shared_weak_count_lock(v26);
          v13 = v25;
          if (v26 != 0) {
            std___1___shared_weak_count___release_weak();
          }
          if (v12 != 0 && v13 != nullptr) {
            (*(void (**)(_QWORD*, _QWORD))(*v13 + 40LL))(
                v13, *(unsigned __int8*)(a1 + 106));
          }
          else if (v12 == 0) {
            goto LABEL_31;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak();
          }
        }
      LABEL_31:
        v24[0] = "L_MasteryLvUP";
        v24[1] = 13;
        GameRoutine_1114920(&v25, v3, v24);
        if (v26 == 0) {
          goto LABEL_50;
        }
        v16 = std___1___shared_weak_count_lock(v26);
        v17 = v25;
        if (v26 != 0) {
          std___1___shared_weak_count___release_weak();
        }
        if (v16 != 0 && v17 != nullptr) {
          v18 = *v17;
          v19 = *(unsigned __int8*)(a1 + 107);
          v20 = v17;
        LABEL_46:
          (*(void (**)(_QWORD*, __int64))(v18 + 40))(v20, v19);
        LABEL_48:
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak();
          }
        LABEL_50:
          ui_LayoutAccessor_SetPaneVisible(v3, "IconBattle",
                                           *(unsigned __int8*)(a1 + 104));
          ui_LayoutAccessor_SetPaneVisible(v3, "N_Tactics",
                                           *(_DWORD*)(a1 + 116) != 0);
          v24[0] = "L_LvGroup";
          v24[1] = 9;
          GameRoutine_1572840(&v25, v3, v24);
          if (v26 != 0) {
            v22 = std___1___shared_weak_count_lock(v26);
            v23 = v25;
            if (v26 != 0) {
              std___1___shared_weak_count___release_weak();
            }
            if (v22 != 0 && v23 != nullptr) {
              GameRoutine_18a30a0(v23, *(_QWORD*)(a1 + 96));
              goto LABEL_57;
            }
            if (v22 != 0) {
            LABEL_57:
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                std___1___shared_weak_count___release_weak();
              }
            }
          }
          result =
              (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 568LL))(a1, 1);
        LABEL_60:
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            return std___1___shared_weak_count___release_weak();
          }
          return result;
        }
        goto LABEL_47;
      }
      LODWORD(v9) = 1.0;
      GameRoutine_1562680(v3, "Finish_Off", v9);
      v24[0] = "L_ExpLvUP";
      v24[1] = 9;
      GameRoutine_1114920(&v25, v3, v24);
      if (v26 != 0) {
        v14 = std___1___shared_weak_count_lock(v26);
        v15 = v25;
        if (v26 != 0) {
          std___1___shared_weak_count___release_weak();
        }
        if (v14 != 0 && v15 != nullptr) {
          (*(void (**)(_QWORD*, _QWORD))(*v15 + 40LL))(v15, 0);
        }
        else if (v14 == 0) {
          goto LABEL_40;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak();
        }
      }
    LABEL_40:
      v24[0] = "L_MasteryLvUP";
      v24[1] = 13;
      GameRoutine_1114920(&v25, v3, v24);
      if (v26 == 0) {
        goto LABEL_50;
      }
      v16 = std___1___shared_weak_count_lock(v26);
      v21 = v25;
      if (v26 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if (v16 != 0 && v21 != nullptr) {
        v18 = *v21;
        v20 = v21;
        v19 = 0;
        goto LABEL_46;
      }
    LABEL_47:
      if (v16 == 0) {
        goto LABEL_50;
      }
      goto LABEL_48;
    }
  }
  return result;
}

__int64 ExpMenuItem_Unknown72(__int64 result, long double a2)
{
  int v2;
  __int64 v3;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_DWORD*)(result + 108);
  switch (v2) {
  case 2:
    LODWORD(a2) = *(_DWORD*)(result + 88);
    if (*(_DWORD*)(result + 84) != 2 && *(float*)&a2 >= 8.0) {
      v5 = (_DWORD*)result;
      result = (*(__int64 (**)(__int64, long double))(*(_QWORD*)result +
                                                      584LL))(result, a2);
      if ((result & 1) != 0) {
        v5[21] = 2;
        return (*(__int64 (**)(_DWORD*))(*(_QWORD*)v5 + 592LL))(v5);
      }
    }
    break;
  case 1:
    if (*(float*)(result + 136) == 0.0) {
      if (*(_QWORD*)(result + 384) == 0) {
        goto LABEL_20;
      }
      v6 = result;
      v7 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 384));
      result = v6;
      if (v7 == 0) {
        goto LABEL_20;
      }
      v8 = *(_QWORD*)(v6 + 376);
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak();
        result = v6;
      }
      if (v8 != 0 && *(float*)(result + 264) != 0.0) {
        return GameRoutine_1756170(result, 1);
      }
      else {
      LABEL_20:
        ++*(_DWORD*)(result + 108);
      }
    }
    else {
      return GameRoutine_17565c0();
    }
    break;
  case 0:
    v3 = result;
    result = GameRoutine_1756280();
    ++*(_DWORD*)(v3 + 108);
    break;
  default:
    break;
  }
  return result;
}

bool ExpMenuItem_Unknown73(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(float*)(a1 + 136) != 0.0) {
    return false;
  }
  v2 = *(_QWORD*)(a1 + 384);
  if (v2 == 0) {
    return true;
  }
  v4 = std___1___shared_weak_count_lock(v2);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 376);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v6 = a1;
      if (v5 != 0) {
        return *(float*)(v6 + 264) == 0.0;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
      v6 = a1;
      if (v5 != 0) {
        return *(float*)(v6 + 264) == 0.0;
      }
    }
  }
  return true;
}

__int64 ExpMenuItem_Unknown75(__int64 a1)
{
  __int64 result;
  __int64 v3;

  if (*(_DWORD*)(a1 + 108) == 0) {
    GameRoutine_1756280_alt1(a1);
  }
  if (*(float*)(a1 + 136) != 0.0) {
    GameRoutine_17565c0_alt1(a1, 2);
  }
  result = *(_QWORD*)(a1 + 384);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 376);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak();
      }
      if (v3 != 0 && *(float*)(a1 + 264) != 0.0) {
        result = ExpMenuItem_1756170(a1, 2);
      }
    }
  }
  *(_DWORD*)(a1 + 108) = 2;
  return result;
}

#pragma GCC visibility pop
