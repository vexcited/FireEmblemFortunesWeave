#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15b7780(void);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_BaseQuestMenuItem_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 EmptyMenuItem_Unknown55_1710fc0(__int64 a1);
__int64 EmptyMenuItem_OnSelect(__int64 a1);
__int64 EmptyMenuItem_Unknown55_17b04a0(__int64 a1);
__int64 EmptyMenuItem_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 EmptyMenuItem_DrawText(__int64 a1);

__int64 EmptyMenuItem_Unknown55_1710fc0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 48);
      if (result != 0) {
        result = GameRoutine_1562cf0(result, "Action");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 EmptyMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  LayoutAccessor_1560070((void*)(&v6_.v6),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                         "L_UnitInfoDetail");
  result = v6_.v7;
  if (v6_.v7 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v6_.v7);
    v5 = v6_.v6;
    result = v6_.v7;
    if (v6_.v7 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v6_.v7);
    }
    if (v4 != 0 && v5 != 0) {
      result = LayoutAccessor_155e830(v5, 0);
    }
    else if (v4 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  return result;
}

__int64 EmptyMenuItem_Unknown55_17b04a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  const char* v6;

  GameRoutine_15b7780();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 48), "ItemStock", 0);
        v5 = *(_DWORD*)(a1 + 100);
        if (v5 < 0) {
          v6 = "InfoOff";
        }
        else {
          v6 = (const char*)game_util_Format("Info%02d", v5);
        }
        result = GameRoutine_1562cf0(v3, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 EmptyMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_menu_anonymous_BaseQuestMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

__int64 EmptyMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  struct {
    __int64 v31;
    __int64 v32;
    __int64* v33;
    unsigned __int64 v34;
    unsigned __int64 v35;
    unsigned __int64 v36;
    int v37;
    int v38;
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
    __int64 v50;
    __int64 v51;
  } v31_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v27 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak_alt1(v27);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v31_.v39 = -1;
  v31_.v40 = -1;
  v31_.v41 = -1;
  v31_.v42 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v31_.v43 = -1;
  v31_.v44 = -1;
  v31_.v45 = -1;
  v31_.v46 = -1;
  v31_.v47 = -1;
  v31_.v48 = -1;
  v31_.v49 = -1;
  v31_.v50 = -1;
  v31_.v33 = GameData_212e348 + 2;
  v31_.v34 = 0xFFFF0001FFFF0000LL;
  v31_.v35 = 0xFFFF0004FFFF0002LL;
  v31_.v36 = 0xFFFF0006FFFF0005LL;
  v31_.v51 = 8;
  v31_.v37 = -65529;
  v31_.v38 = -65528;
  v6 = GameRoutine_a4dbe0(v5, "MID_Sys_Empty", 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, v7, 0);
    }
  }
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 == 0) {
    goto LABEL_13;
  }
  v10 = std___1___shared_weak_count_lock_alt1(v9);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v28 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak_alt1(v11);
  v13 = v28;
  if (v28 == nullptr) {
  LABEL_13:
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_14:
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v13, (__int64)"L_IconQuest",
                                        0);
  v14 = *(_QWORD*)(a1 + 56);
  if (v14 == 0) {
    goto LABEL_18;
  }
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v29 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
    v18 = v29;
    if (v29 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if (v18 == nullptr) {
  LABEL_18:
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v31_.v31), v18, "L_State");
  if (v31_.v32 != 0) {
    v19 = std___1___shared_weak_count_lock_alt1(v31_.v32);
    if (v19 != 0) {
      v20 = v19;
      if (v31_.v31 != 0) {
        LayoutAccessor_155e830(v31_.v31, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
    }
    if (v31_.v32 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v31_.v32);
    }
  }
  v21 = *(_QWORD*)(a1 + 56);
  if (v21 == 0) {
    goto LABEL_31;
  }
  v22 = std___1___shared_weak_count_lock_alt1(v21);
  if (v22 == 0) {
    goto LABEL_31;
  }
  v23 = v22;
  v24 = (atomic_ullong*)(v22 + 8);
  v25 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v30 = v25;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
    v25 = v30;
    if (v30 != nullptr) {
      return ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v25,
                                                   (__int64)"IconQuestKind", 0);
    }
    goto LABEL_31;
  }
  if (v25 == nullptr) {
  LABEL_31:
    v25 = ui_LayoutAccessor_empty__ptr[0];
  }
  return ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v25,
                                               (__int64)"IconQuestKind", 0);
}

#pragma GCC visibility pop
