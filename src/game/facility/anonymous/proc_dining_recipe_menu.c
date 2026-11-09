#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_13fa520(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 GameRoutine_13fa3e0(_QWORD, _QWORD);
__int64 GameRoutine_15753b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1597c00(_QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_9244a0(_QWORD, _QWORD);
__int64 GameRoutine_94eea0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_1faf778[])();
extern __int64 GameData_20378a8;
extern __int64 GameData_212c6c0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 ProcDiningRecipeMenu_Unknown84(__int64 a1);
__int64 ProcDiningRecipeMenu_Unknown88(__int64 a1);
__int64 GameRoutine_15758f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcDiningRecipeMenu_13fa3e0(__int64 a1, unsigned int a2);

__int64 ProcDiningRecipeMenu_Unknown84(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_13fa3e0(a1, 0);
  GameRoutine_13fa3e0(a1, 1);
  GameRoutine_13fa3e0(a1, 2);
  v2 = v13;
  v13[0] = GameData_1faf778;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94eea0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  GameRoutine_1597c00(a1 + 848, v11 & 1);
  return GameRoutine_15e77c0(a1);
}

__int64 ProcDiningRecipeMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  _BYTE* v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8 v23;
  unsigned __int8 v24;
  unsigned __int8 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  _BYTE* v43;
  _QWORD v44[2];

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20378a8, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 88);
  v4 = result;
  v44[0] = "L_Info";
  v44[1] = 6;
  GameRoutine_13fa520(&v41, a1 + 848, v44);
  if (v42 != 0) {
    v5 = std___1___shared_weak_count_lock(v42);
    v6 = v41;
    if (v42 != 0) {
      std___1___shared_weak_count___release_weak(v42);
    }
    if (v5 != 0 && v6 != 0) {
      GameRoutine_18b7f20(v6, *(_QWORD*)(v3 + 32));
      GameRoutine_18b83a0(v6, *(_QWORD*)(v3 + 40), 0);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) & 0x70000) !=
          0) {
        v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
        if ((v7 & 0x40000) != 0) {
          v8 = "MID_Menu_Cause_UsedChapter";
        }
        else if ((v7 & 0x20000) != 0) {
          v8 = "MID_Menu_Cause_UsedWeek";
        }
        else if ((v7 & 0x10000) != 0) {
          v8 = "MID_Menu_Cause_UsedDay";
        }
        else {
          v8 = &GameData_1a9f09e;
        }
        GameRoutine_18b8e80(v6, v8);
      }
      else {
        GameRoutine_18b90a0(v6);
      }
    }
    else if (v5 == 0) {
      goto LABEL_22;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }

LABEL_22:
  v9 = ui_LayoutAccessor_FindPane(a1 + 848, "Img");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v10 = 0;
  }
  v11 = game_util_Format("Recipe_%s", *(const char**)(v3 + 56));
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v12);
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
    v42 = v13;
    v43 = v14;
    v41 = v22 | 1;
  LABEL_46:
    memmove(v14, v11, v13);
    v14[v13] = 0;
    if (v10 != 0) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  LOBYTE(v41) = 2 * v12;
  v14 = (char*)&v41 + 1;
  if (v12 != 0) {
    goto LABEL_46;
  }
  BYTE1(v41) = 0;
  if (v10 != 0) {
  LABEL_29:
    if ((v41 & 1) != 0) {
      v15 = v43;
    }
    else {
      v15 = (char*)&v41 + 1;
    }
    GameRoutine_136a920(ui_Manager_instance_ + 1264, v10, 0, 0xCu, v15);
  }

LABEL_33:
  if ((v41 & 1) != 0 && v43 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  v17 = *(__int64**)(*GameData_212dcd0 + 48);
  v18 = *(_QWORD*)(*GameData_212dcd0 + 56) - (_QWORD)v17;
  if (v18 != 0) {
    v19 = *v17;
    if (v18 < 9) {
      v20 = 0;
      v21 = 0;
    }
    else {
      v20 = v17[1];
      if (v18 == 16) {
        v21 = 0;
      }
      else {
        v21 = v17[2];
      }
    }
  }
  else {
    v20 = 0;
    v19 = 0;
    v21 = 0;
  }
  GameRoutine_1560070(&v39, a1 + 848, "L_UnitInfo00/L_BlnFavor");
  v23 = GameRoutine_9244a0(v3, v19);
  GameRoutine_15753b0(&v39, v19, 0, v23);
  if (v40 != 0) {
    std___1___shared_weak_count___release_weak(v40);
  }
  GameRoutine_1560070(&v37, a1 + 848, "L_UnitInfo01/L_BlnFavor");
  v24 = GameRoutine_9244a0(v3, v20);
  GameRoutine_15753b0(&v37, v20, 0, v24);
  if (v38 != 0) {
    std___1___shared_weak_count___release_weak(v38);
  }
  GameRoutine_1560070(&v35, a1 + 848, "L_UnitInfo02/L_BlnFavor");
  v25 = GameRoutine_9244a0(v3, v21);
  GameRoutine_15753b0(&v35, v21, 0, v25);
  if (v36 != 0) {
    std___1___shared_weak_count___release_weak(v36);
  }
  v26 = ui_LayoutAccessor_FindPane(a1 + 848, "L_UnitInfo00/L_UnitInfo/Face");
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v27 = 0;
  }
  v28 = GameRoutine_9244a0(v3, v19);
  GameRoutine_1840740(v27, 0, v19, v28, 1);
  v29 = ui_LayoutAccessor_FindPane(a1 + 848, "L_UnitInfo01/L_UnitInfo/Face");
  if (v29 != 0) {
    v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v30 = 0;
  }
  v31 = GameRoutine_9244a0(v3, v20);
  GameRoutine_1840740(v30, 0, v20, v31, 1);
  v32 = ui_LayoutAccessor_FindPane(a1 + 848, "L_UnitInfo02/L_UnitInfo/Face");
  if (v32 != 0) {
    v33 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v33 = 0;
  }
  v34 = GameRoutine_9244a0(v3, v21);
  return GameRoutine_1840740(v33, 0, v21, v34, 1);
}

__int64 ProcDiningRecipeMenu_13fa3e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format("L_UnitInfo%02d", a2);
  GameRoutine_1560070(&v13, a1 + 848, v6);
  GameRoutine_15758f0(&v13, v5, 0xFFFFFFFFLL, 0, 6, 0, 1);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  v7 = game_util_Format("L_UnitInfo%02d/L_UnitInfo", a2);
  GameRoutine_1560070(&v11, a1 + 848, v7);
  result = v12;
  if (v12 != 0) {
    v9 = std___1___shared_weak_count_lock(v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11 != 0) {
        LayoutAccessor_1562cf0(v11, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v12;
    if (v12 != 0) {
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

#pragma GCC visibility pop
