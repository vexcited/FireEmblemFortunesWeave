#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1009aa0(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(void);
extern __int64 GameData_20b1428;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_2262bfc;
__int64 ProcUnitSelectMenu_Unknown93(__int64 result);
__int64 ProcUnitSelectMenu_Unknown102(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 ProcInOutAnim_173fac0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_UnitMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcUnitSelectMenu_Unknown58(_QWORD* a1, __int64* a2);
bool game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2);
__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int8* a2);
__int64 GameConst_7f97f0(__int64);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(long double);
__int64 GameVariable_82e3a0(_QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_menu_BasicMenu_Unknown96(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, double);
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 (*GameData_20b1af0[])();
extern __int64 (*game_ProcInst_Unknown04_1722970_ptr[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 game_g_game_setting_ptr;
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void __attribute__((noreturn)) GameRoutine_60a310();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ProcUnitSelectMenu_Unknown84(__int64 a1);
__int64 game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl(__int64 a1);
__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList(__int64 a1);

__int64 ProcUnitSelectMenu_Unknown58(_QWORD* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1) != 9) {
    (*(void (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
    result = a1[133];
    if (result != 0) {
      result = ProcInOutAnim_173fac0(result, 0);
    }
    v7 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(&v49, "%s%s", "Alpha", "Out");
      result = GameRoutine_156af20(v7, 4, 1, a1 + 106, "N_UnitMenu", &v49);
      v8 = result;
    }
    else {
      v8 = -1;
    }
    v19 = (__int64*)a2[1];
    v18 = a2[2];
    if ((unsigned __int64)v19 >= v18) {
      v21 = *a2;
      v22 = (__int64)v19 - *a2;
      v23 = (v22 >> 3) + 1;
      if (v23 >> 61 != 0) {
        goto LABEL_73;
      }
      v24 = v18 - v21;
      v25 = fw_memory_g_heap_manager_ptr;
      if (v24 >> 2 > v23) {
        v23 = v24 >> 2;
      }
      if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v26 = v23;
      }
      if (v26 != 0) {
        if (v26 >> 61 != 0) {
          goto LABEL_74;
        }
        v27 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
      }
      else {
        v27 = 0;
      }
      v33 = v27 + 8 * v26;
      v34 = v27 + v22 - 8 * (v22 >> 3);
      *(_QWORD*)(v27 + v22) = v8;
      v20 = (__int64*)(v27 + v22 + 8);
      result = memcpy(v34, v21, v22);
      *a2 = v34;
      a2[1] = (__int64)v20;
      a2[2] = v33;
      if (v21 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
          v35 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v35, v21);
      }
    }
    else {
      *v19 = v8;
      v20 = v19 + 1;
    }
    v36 = game_gameui_MenuAnimator_instance_;
    a2[1] = (__int64)v20;
    if (v36 != 0) {
      sprintf(&v49, "%s%s", "Alpha", "Out");
      result = GameRoutine_156af20(v36, 4, 1, a1 + 106, "N_Story", &v49);
      v20 = (__int64*)a2[1];
      v37 = result;
    }
    else {
      v37 = -1;
    }
    v38 = a2[2];
    if ((unsigned __int64)v20 >= v38) {
      v40 = *a2;
      v41 = (__int64)v20 - *a2;
      v42 = (v41 >> 3) + 1;
      if (v42 >> 61 != 0) {
        goto LABEL_73;
      }
      v43 = v38 - v40;
      if (v43 >> 2 > v42) {
        v42 = v43 >> 2;
      }
      if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
        v44 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v44 = v42;
      }
      if (v44 != 0) {
        if (v44 >> 61 != 0) {
          goto LABEL_74;
        }
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
      }
      else {
        v45 = 0;
      }
      v46 = v45 + 8 * v44;
      v47 = v45 + v41 - 8 * (v41 >> 3);
      *(_QWORD*)(v45 + v41) = v37;
      v39 = v45 + v41 + 8;
      result = memcpy(v47, v40, v41);
      *a2 = v47;
      a2[1] = v39;
      a2[2] = v46;
      if (v40 != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v40);
      }
    }
    else {
      *v20 = v37;
      v39 = (__int64)(v20 + 1);
    }
    a2[1] = v39;
    return result;
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(&v49, "%s%s", "Left", "Out");
    v5 = GameRoutine_156af20(v4, 2, 1, a1 + 119, 0, &v49);
  }
  else {
    v5 = -1;
  }
  v10 = (__int64*)a2[1];
  v9 = a2[2];
  if ((unsigned __int64)v10 >= v9) {
    v12 = *a2;
    v13 = (__int64)v10 - *a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 == 0) {
      v15 = v9 - v12;
      if (v15 >> 2 > v14) {
        v14 = v15 >> 2;
      }
      if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v14;
      }
      if (v16 == 0) {
        v17 = 0;
      LABEL_33:
        v28 = v17 + 8 * v16;
        v29 = v17 + v13 - 8 * (v13 >> 3);
        *(_QWORD*)(v17 + v13) = v5;
        v11 = v17 + v13 + 8;
        memcpy(v29, v12, v13);
        *a2 = v29;
        a2[1] = v11;
        a2[2] = v28;
        if (v12 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v12);
        }
        goto LABEL_37;
      }
      if (v16 >> 61 == 0) {
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        goto LABEL_33;
      }
    LABEL_74:
      GameRoutine_60a210();
    }
  LABEL_73:
    GameRoutine_874500();
  }
  *v10 = v5;
  v11 = (__int64)(v10 + 1);
LABEL_37:
  a2[1] = v11;
  GameRoutine_1560070((void*)&v49, a1 + 106, "L_Bg");
  result = v50;
  if (v50 == 0) {
    return result;
  }
  v31 = std___1___shared_weak_count_lock(v50);
  v32 = v49;
  result = v50;
  if (v50 != 0) {
    result = std___1___shared_weak_count___release_weak(v50);
  }
  if (v31 != 0 && v32 != 0) {
    result = ui_LayoutAccessor_FindTextBox(v32, "T_Help");
    if (result != 0) {
      result = GameRoutine_156c5d0(result, &GameData_1a9f09e, 0);
    }
  }
  else if (v31 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    return std___1___shared_weak_count___release_weak(v31);
  }
  return result;
}

__int64 ProcUnitSelectMenu_Unknown84(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  long double v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __n128 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  unsigned int v25;
  unsigned int i;
  __int64 v27;
  __n128 v28;
  int v29;
  _QWORD v31[3];
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  LayoutAccessor_1562cf0(a1 + 848, "PartHide");
  v2 = *(_DWORD*)(a1 + 356);
  v3 = *(_QWORD*)(a1 + 336);
  *(_BYTE*)(a1 + 648) = 0;
  *(_DWORD*)(a1 + 356) = v2 | 2;
  if (v3 != 0 && ((*(void (**)(__int64))(*(_QWORD*)v3 + 168LL))(v3),
                  *(_QWORD*)(a1 + 336) = 0,
                  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0),
                  (v4 = *(_QWORD*)(a1 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 160LL))(v4);
    game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
    v5 = *(_QWORD*)(a1 + 336);
    v6 = 4;
    if (v5 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 120LL))(v5) & 1) != 0) {
        v6 = 4;
      }
      else {
        v6 = 0;
      }
    }
  }
  else {
    v6 = 4;
  }
  v7 = *(_QWORD**)(a1 + 232);
  v8 = *(_QWORD**)(a1 + 240);
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v6;
  if (v7 == v8) {
    goto LABEL_14;
  }
  v9 = 0;
  do {
    v10 = *v7;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 48LL))(*v7) & 1) != 0) {
      v9 += (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) & 1;
    }
    ++v7;
  } while (v7 != v8);
  if (v9 <= 1) {
  LABEL_14:
    ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_ArrowL", 0);
    *(__n128*)&v11 = ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_ArrowR", 0);
  }
  if ((GameVariable_82e3a0(2, v11) & 1) == 0) {
    v12 = *(_DWORD**)(a1 + 1080);
    if (*(_QWORD*)v12 == 0 || *(_DWORD*)(*(_QWORD*)v12 + 16LL) != v12[2]) {
      v31[0] = 0;
      v31[1] = 0;
      v13 = *((_QWORD*)GameData_212c540 + 1);
      v15 = *(_QWORD*)GameData_212c548;
      v14 = *((_QWORD*)GameData_212c548 + 1);
      v33 = *(_QWORD*)GameData_212c540;
      v34 = v13;
      v37 = v33;
      v38 = v13;
      v35 = v15;
      v36 = v14;
      v32 = 9;
      v31[2] = "UI_Deco_CharaChoice_Hades";
      v16 = Manager_bc6460(*eft_g_effectSystem_ptr[0], v31, 0);
      GameRoutine_14a10d0(&v39, v16, v17, &GameData_1a9f09e);
      v19 = v39;
      v20 = v40;
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                  memory_order_relaxed);
      }
      v21 = *(_QWORD*)(a1 + 1088);
      *(_QWORD*)(a1 + 1080) = v19;
      *(_QWORD*)(a1 + 1088) = v20;
      if (v21 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          v18 = std___1___shared_weak_count___release_weak_alt1(v21);
        }
        v20 = *(_QWORD*)(a1 + 1088);
      }
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          v18 = std___1___shared_weak_count___release_weak_alt1(v20);
        }
      }
      v22 = v40;
      if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
            v22, *(long double*)&v18);
        v18 = std___1___shared_weak_count___release_weak_alt1(v22);
      }
      v23 = *(__int64**)(a1 + 1080);
      v24 = *v23;
      if (*v23 != 0 && *(_DWORD*)(v24 + 16) == *((_DWORD*)v23 + 2)) {
        v25 = *(_DWORD*)(v24 + 36);
        if (v25 != 0) {
          for (i = 0; i < v25; ++i) {
            if ((int)v25 > (int)i) {
              v27 = *(_QWORD*)(v24 + 40 + 8LL * (int)i);
              if (v27 != 0) {
                *(_QWORD*)(v27 + 16) = 0;
                *(_QWORD*)(v27 + 24) = 0;
                *(_BYTE*)(v27 + 128) = 1;
                v25 = *(_DWORD*)(v24 + 36);
              }
            }
          }
        }
      }
      GameRoutine_14a3920(*(long double*)&v18);
    }
  }
  v28 = snd_fnd_calcCrc32("SE_Fade", 0);
  LODWORD(v39) = v29;
  LANES128(v28).n128_u32[0] = 1140457472;
  snd_Fade_Fade_10c830(v31, LANES128(v28).n128_f64[0]);
  snd_startSlotVolume_100b50(&v39, v31, 0.0);
  return snd_Fade_Destroy_Fade(v31);
}

__int64 ProcUnitSelectMenu_Unknown93(__int64 result)
{
  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    *(_BYTE*)(result + 1072) = 1;
    *(_BYTE*)(result + 648) = 1;
    *(_DWORD*)(result + 356) &= ~2u;
    return game_menu_BasicMenu_Unknown16de2e0();
  }
  return result;
}

__int64 game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64 v16;

  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD**)(a1 + 232);
  v3 = *(_QWORD**)(a1 + 240);
  v4 = v14_.v14;
  v14_.v14[0] = game_ProcInst_Unknown04_1722970_ptr;
  v14_.v15 = v14_.v14;
  if (v2 == v3) {
    v7 = 0;
  LABEL_16:
    v8 = 32;
    goto LABEL_17;
  }
  v5 = GameData_212e008[0];
  while (1) {
    if (*v2 != 0) {
      v6 = __dynamic_cast(*v2, v5, &GameData_20b1428, 0);
      if (v6 != 0) {
        v7 = v6;
        v16 = v6;
        if (v14_.v15 == nullptr) {
          GameRoutine_60a310();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v14_.v15 + 48LL))(v14_.v15,
                                                                    &v16) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v2 == v3) {
      v7 = 0;
      break;
    }
  }
  v4 = v14_.v15;
  if (v14_.v15 == v14_.v14) {
    goto LABEL_16;
  }
  if (v14_.v15 != nullptr) {
    v8 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*))(*v4 + v8))(v4);
  }
  if (v7 != 0) {
    v9 = *(_QWORD*)(a1 + 336);
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 168LL))(v9);
    }
    *(_QWORD*)(a1 + 336) = v7;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 1, 0, 0);
    v10 = *(_QWORD*)(a1 + 336);
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 160LL))(v10);
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v11 = *(_QWORD*)(a1 + 336);
      v12 = 4;
      if (v11 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) != 0) {
          v12 = 4;
        }
        else {
          v12 = 0;
        }
      }
    }
    else {
      v12 = 4;
    }
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
  }
  LODWORD(v16) = (unsigned int)snd_fnd_calcCrc32_alt1("SE_Fade", 0);
  snd_Fade_Fade_10c830_alt1((__int64)v14_.v14, 0x1.f400000000000p+8f);
  snd_startSlotVolume_100b50_alt1((int*)&v16, (__int64)v14_.v14, 0x0.0p+0f);
  return snd_Fade_Destroy_Fade_alt1(v14_.v14);
}

__int64 ProcUnitSelectMenu_Unknown102(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b1428, 0);
    if (result != 0) {
      v3 = result;
      v4 = (_QWORD*)GameRoutine_82e7c0(*(unsigned __int8*)(result + 83), 2);
      if (*v4 == 0 || game_GameModeData_instance_ == 0) {
        return 0;
      }
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
      if (result == 0) {
        return result;
      }
      if (*(_DWORD*)(result + 32) != 0) {
        GameData_2262bfc = *(_BYTE*)(v3 + 83);
        GameRoutine_1009aa0(a1);
        return 9;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList(__int64 a1)
{
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v3_.v3[0] = GameData_20b1af0;
  v3_.v3[1] = a1;
  v3_.v4 = v3_.v3;
  GameConst_7f97f0((__int64)v3_.v3);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
}

bool game_facility_anonymous_ProcUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a2 + 83LL) ==
         (unsigned __int8)GameData_2262bfc;
}

__int64 game_facility_anonymous_ProcUnitSelectMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int8* a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  if (((unsigned __int8)(v2 - 5) > 3u || ((1 << (v2 - 2)) & 0x82) != 0) &&
      (((_BYTE)v2 - 7) & 0xFD) != 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        88, 16, 0);
    *(_WORD*)(v4 + 16) = 0;
    *(_DWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_BYTE*)(v4 + 83) = v2;
    *(_WORD*)(v4 + 80) = 257;
    *(_QWORD*)v4 = game_facility_anonymous_UnitMenuItem_vtable;
    *(_QWORD*)(v4 + 8) = 0;
    v5 = (__int64*)GameRoutine_82e7c0(v2, 1);
    v7 = *v5;
    if (*v5 != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
        v6 = v8 != 0 && *(_DWORD*)(v8 + 32) != 0;
      }
    }
    *(_BYTE*)(v4 + 82) = (v7 != 0) & v6;
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

#pragma GCC visibility pop
