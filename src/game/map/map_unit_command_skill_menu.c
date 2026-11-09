#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(__int64*);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_15bd960(__int64, char, __int64);
__int64 GameRoutine_15d2c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2e20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18aff60(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84f8a0(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20534a8[])();
extern __int64 GameData_2053160;
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_212f5d0;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd128;
extern __int64 GameData_21ed0a0;
extern __int64 GameData_2203490;
extern __int64 GameData_221a540;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212ea58;
extern __int64* GameData_21319f8[8];
extern int GameData_1be153c[];
const char* MapUnitCommandSkillMenu_Unknown36(__int64 a1);
__int64 MapUnitCommandSkillMenu_Unknown88(__int64 a1);
__int64 MapUnitCommandSkillMenu_15bdea0();
__int64 MapUnitCommandSkillMenu_Unknown114(__int64 a1);
_QWORD* MapUnitCommandSkillMenu_15be5e0(__int64 a1, char a2);
__int64 MapUnitCommandSkillMenu_DeletingDestructor(_QWORD* a1);

const char* MapUnitCommandSkillMenu_Unknown36(__int64 a1)
{
  if ((unsigned __int8)(*(_BYTE*)(a1 + 1184) - 2) > 7u) {
    return "L_MenuItem_Skill";
  }
  else {
    return (char*)GameData_1be153c +
           GameData_1be153c[(unsigned __int8)(*(_BYTE*)(a1 + 1184) - 2)];
  }
}

__int64 MapUnitCommandSkillMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2053160, 0);
    if (result != 0) {
      v3 = result;
      if (*GameData_212ea58 != 0) {
        v4 = MapUnitCommandSkillMenu_15bdea0();
        return GameRoutine_15d2e20(a1 + 1064, v3 + 84, v4);
      }
      else {
        v5 = *(
            unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (*(_DWORD*)(result + 84) &
                                                0xFFF)) +
                              104LL);
        v6 = MapUnitCommandSkillMenu_15bdea0();
        return GameRoutine_15d2c40(a1 + 1064, v3 + 84, v5, v6, 0, 0);
      }
    }
  }
  return result;
}

__int64 MapUnitCommandSkillMenu_15bdea0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v0 = GameData_2203490;
  if (GameData_2203490 == 0) {
    if (GameData_21cd108 != 0 && *(_BYTE*)(GameData_21cd108 + 8) != 0) {
      return game_UnitPool_Get(GameData_21cd108 + 8);
    }
    return 0;
  }
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v4 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v4;
    if (v4 == 0) {
    LABEL_10:
      v1 = *(_QWORD*)(v0 + 656);
      v5 = *(_QWORD*)(v0 + 664);
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v1;
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
          v1 = v6;
        }
      }
    }
  }
  else if (v1 == 0) {
    goto LABEL_10;
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  v8 = *(_QWORD*)(v7 + 88);
  if (v8 == 0) {
    return 0;
  }
  v9 = *(_QWORD*)(v7 + 80);
  v10 = *(_QWORD*)(v7 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v10);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v11 == 0 || v9 == 0) {
    if (v11 == 0) {
      return 0;
    }
  }
  else {
    result = *(_QWORD*)(v9 + 16);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      return result;
    }
    return 0;
  }
  v13 = result;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak(v11);
  result = v13;
  if (v9 == 0) {
    return 0;
  }
  return result;
}

__int64 MapUnitCommandSkillMenu_Unknown114(__int64 a1)
{
  _QWORD v3[2];

  if (GameData_21ed0a0 != 0 && *(int*)(GameData_21ed0a0 + 16) <= 0 &&
      (ui_LayoutAccessor_IsPaneVisible(GameData_21ed0a0 + 40, "L_KeyHelp") &
       1) != 0 &&
      (*(_QWORD*)GameData_212d8b0[0] == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
      (GameData_21cd128 == 0 || *(_QWORD*)(GameData_21cd128 + 96) ==
                                    *(_QWORD*)(GameData_21cd128 + 88)) &&
      (v3[0] = 0, v3[1] = 0, (GameRoutine_18aff60(a1, v3) & 1) != 0)) {
    return 13;
  }
  else {
    return 0;
  }
}

_QWORD* MapUnitCommandSkillMenu_15be5e0(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  _QWORD* v23;
  int v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  _QWORD v32[4];
  _QWORD* v33;
  __int16 v34;
  _QWORD* v35;
  int v36;
  char v37;

  v37 = a2;
  v4 = *GameData_212ea58;
  v5 = *(_QWORD*)(*GameData_212ea58 + 640);
  v6 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v6 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v7 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v5 = v7;
    if (v7 != 0) {
      goto LABEL_9;
    }
  }
  else if (v5 != 0) {
    goto LABEL_9;
  }
  v5 = *(_QWORD*)(v4 + 656);
  v8 = *(_QWORD*)(v4 + 664);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
      v5 = v9;
    }
  }

LABEL_9:
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  v11 = *(_QWORD**)(v10 + 88);
  if (v11 == nullptr) {
    return nullptr;
  }
  v12 = *(_QWORD*)(v10 + 80);
  v13 = *(_QWORD*)(v10 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 2), 1u,
                            memory_order_relaxed);
  v14 = std___1___shared_weak_count_lock(v13);
  std___1___shared_weak_count___release_weak(v11);
  v15 = v14 == 0 || v12 == 0;
  v16 = v15;
  if (v15) {
    goto LABEL_44;
  }
  v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1200, 16, 0);
  GameRoutine_15bd960(v17, a2, *(_QWORD*)(v12 + 16));
  GameRoutine_657850(v17, GameData_212c730, "MapUnitCommandSkillMenu", 1, a1);
  v18 = *(_QWORD*)(v12 + 16);
  v35 = (_QWORD*)v17;
  v36 = 0;
  v34 = 1 << a2;
  v33 = v32;
  v32[0] = GameData_20534a8;
  v32[1] = &v37;
  v32[2] = &v36;
  v32[3] = &v35;
  GameRoutine_84f8a0(v18 + 1456, &v34, v32);
  if (v33 == v32) {
    v19 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_22;
    }
    v19 = 40;
  }
  (*(void (**)(void))(*v33 + v19))();

LABEL_22:
  if (GameData_221a540 == 0 ||
      (v20 = *(_QWORD*)(GameData_212f5d0 + 8)) == *(_QWORD*)GameData_212f5d0) {
    v21 = 0;
  }
  else {
    v21 = *(_DWORD*)(v20 - 4);
    if (v21 < 0) {
      goto LABEL_43;
    }
  }
  v22 = (_QWORD*)v35[29];
  v23 = (_QWORD*)v35[30];
  if (v22 == v23) {
    goto LABEL_43;
  }
  v24 = 0;
  while (1) {
    v25 = *v22;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v22 + 40LL))(*v22) & 1) != 0) {
      break;
    }
  LABEL_29:
    if (++v22 == v23) {
      goto LABEL_43;
    }
  }
  if (v21 != v24) {
    ++v24;
    goto LABEL_29;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25) & 1) != 0) {
    v26 = v35;
    v27 = v35[42];
    if (v27 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 168LL))(v27);
    }
    v26[42] = v25;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v26, 1, 0, 0);
    v28 = v26[42];
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 160LL))(v28);
      game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
      v29 = v26[42];
      v30 = 4;
      if (v29 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v29 + 120LL))(v29) & 1) != 0) {
          v30 = 4;
        }
        else {
          v30 = 0;
        }
      }
    }
    else {
      v30 = 4;
    }
    *((_DWORD*)v26 + 89) = *((_DWORD*)v26 + 89) & 0xFFFFFFFB | v30;
  }

LABEL_43:
  v11 = v35;

LABEL_44:
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    if (v16 != 0) {
      return nullptr;
    }
  }
  else if (v16 != 0) {
    return nullptr;
  }
  return v11;
}

__int64 MapUnitCommandSkillMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
