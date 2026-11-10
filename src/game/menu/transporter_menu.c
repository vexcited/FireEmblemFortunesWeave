#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 TransporterMenu_Unknown51(__int64 a1, __int64* a2);
__int64 TransporterMenu_Unknown41(__int64 result);
__int64 game_menu_TransporterMenu_CreateLeftMenu_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);
__int64 game_menu_TransporterMenu_ChangeUnit_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_15bd460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1787ce0(void);
__int64 LayoutAccessor_15740c0(__int64, __int64, char, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
bool GameRoutine_159e890(__int64, char, __int64);
extern __int64 (*GameData_205ac78[])();
extern __int64 (*GameData_205acf8[])();
extern __int64 (*game_menu_ItemUnitMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_anonymous_UnitItemMenu_vtable[])();
extern __int64* GameData_21319f0[9];
extern __int64 GameData_20584e0;
extern __int64 GameData_2059fb0;
extern __int64 fw_memory_g_heap_manager;
__int64 game_menu_TransporterMenu_CreateLeftMenu(__int64 a1);
__int64 game_menu_TransporterMenu_ChangeUnit(__int64 a1, __int64 a2);

__int64 TransporterMenu_Unknown51(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "StatusChange";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_StatusChange";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "StatusChange";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_StatusChange";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 game_menu_TransporterMenu_CreateLeftMenu(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[2];

  if (*(_BYTE*)(a1 + 388) == 1) {
    v2 = *(_QWORD*)(a1 + 360);
    v22[0] = GameData_205ac78;
    v22[1] = a1;
    v23 = v22;
    v3 = GameRoutine_159e890(v2, 0, (__int64)v22);
    if (v23 == v22) {
      v4 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_8;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v23 + v4))((__int64)v23);
  }
  else {
    v3 = true;
  }
LABEL_8:
  LayoutAccessor_1560070((void*)(&v20), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfo");
  if (v21 != 0) {
    v5 = *(_QWORD*)(a1 + 360);
    v6 = std___1___shared_weak_count_lock(v21);
    if (v6 != 0) {
      v7 = v6;
      if (v20 != 0) {
        LayoutAccessor_15740c0(v20, v5, 0, 0, v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    if (v21 != 0) {
      std___1___shared_weak_count___release_weak(v21);
    }
  }
  v8 = *(_DWORD*)(a1 + 376) != 2;
  v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1088, 16, 0);
  v10 = *(_QWORD*)(a1 + 208);
  if (v10 != 0) {
    v11 = std___1___shared_weak_count_lock(v10);
    if (v11 != 0) {
      v12 = *(_QWORD*)(a1 + 200);
    }
    else {
      v12 = 0;
    }
  }
  else {
    v12 = 0;
    v11 = 0;
  }
  v13 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_EquipList");
  v14 = *(_QWORD*)(a1 + 360);
  v15 = *(_DWORD*)(a1 + 376);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    v24[0] = v12;
    v24[1] = v11;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_15bd460(v9, a1, v24, v13, v14);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    *(_DWORD*)(v9 + 1080) = v8;
    *(_QWORD*)v9 = game_menu_ItemUnitMenu_vtable;
    *(_QWORD*)(v9 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v24[0] = v12;
    v24[1] = 0;
    GameRoutine_15bd460(v9, a1, v24, v13, v14);
    *(_DWORD*)(v9 + 1080) = v8;
  }
  *(_DWORD*)(v9 + 1084) = v15;
  *(_QWORD*)(v9 + 336) = 0;
  *(_QWORD*)v9 = game_menu_anonymous_UnitItemMenu_vtable;
  *(_QWORD*)(v9 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
  v17 = *(_QWORD**)(v9 + 256);
  v16 = *(_QWORD**)(v9 + 264);
  while (v17 != v16) {
    if (*v17 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v17 + 8LL))(*v17);
      v16 = *(_QWORD**)(v9 + 264);
    }
    ++v17;
  }
  v18 = *(_QWORD*)(v9 + 344);
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(v9 + 344) = 0;
  }
  *(_QWORD*)(v9 + 264) = *(_QWORD*)(v9 + 256);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(v9 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1024LL))(v9);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1032LL))(v9);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  return v9;
}

__int64 TransporterMenu_Unknown41(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;

  v1 = *(_DWORD*)(result + 356);
  v2 = result;
  if ((v1 & 4) != 0) {
    v3 = *(_QWORD*)(result + 304);
    *(_DWORD*)(v2 + 356) = v1 & 0xFFFFFFFB;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 1080LL))(v3);
    }
    v4 = *(_QWORD*)(v2 + 312);
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 1080LL))(v4);
    }
    v5 = *(_QWORD*)(v2 + 320);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 1080LL))(v5);
    }
    result = GameRoutine_17871c0(v2, 0, 0);
    v1 = *(_DWORD*)(v2 + 356);
  }
  if ((v1 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 304);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 240LL))(v6, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 248LL))(v6, 0);
    v7 = *(_QWORD*)(v2 + 312);
    v8 = *(_DWORD*)(*(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352)) +
                    1064LL) == 1;
    (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 240LL))(v7, v8);
    return (*(__int64 (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 248LL))(v7, v8);
  }
  return result;
}

__int64 game_menu_TransporterMenu_ChangeUnit(__int64 a1, __int64 a2)
{
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;

  *(_QWORD*)(a1 + 360) = a2;
  GameRoutine_1787ce0();
  if (*(_BYTE*)(a1 + 388) == 1) {
    v3 = *(_QWORD*)(a1 + 360);
    v17[0] = GameData_205acf8;
    v17[1] = a1;
    v18 = v17;
    v4 = GameRoutine_159e890(v3, 0, (__int64)v17);
    if (v18 == v17) {
      v5 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_8;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v18 + v5))((__int64)v18);
  }
  else {
    v4 = true;
  }
LABEL_8:
  LayoutAccessor_1560070((void*)(&v15), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfo");
  if (v16 != 0) {
    v6 = *(_QWORD*)(a1 + 360);
    v7 = std___1___shared_weak_count_lock(v16);
    if (v7 != 0) {
      v8 = v7;
      if (v15 != 0) {
        LayoutAccessor_15740c0(v15, v6, 0, 0, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v9 = GameData_21319f0[0];
  v10 = __dynamic_cast(*(_QWORD*)(a1 + 304), GameData_21319f0[0],
                       &GameData_20584e0, 0);
  v11 = *(_QWORD*)(a1 + 360);
  *(_QWORD*)(v10 + 1072) = v11;
  *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 312), v9, &GameData_2059fb0, 0) +
             1072) = v11;
  v12 = *(_QWORD*)(a1 + 304);
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 1088LL))(v12);
  }
  v13 = *(_QWORD*)(a1 + 312);
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 1088LL))(v13);
  }
  result = *(_QWORD*)(a1 + 320);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 1088LL))(result);
  }
  return result;
}

__int64 game_menu_TransporterMenu_CreateLeftMenu_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_TransporterMenu_ChangeUnit_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

#pragma GCC visibility pop
