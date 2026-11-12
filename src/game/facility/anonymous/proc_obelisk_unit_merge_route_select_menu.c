#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158ac40(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__attribute__((swiftcall)) void GameRoutine_158aec0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158b280(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_158b3c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_158ca00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158cac0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9d1500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d3d10(_QWORD, _QWORD);
__int64 GameRoutine_9d3e90(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb8dc8[])();
extern __int64 (*GameData_1fb8ed8[])();
extern __int64 GameData_1fb8da0;
extern __int64 GameData_21f81b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown88(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown100(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown104(__int64 a1, char a2);
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown106(__int64 a1, char a2);
__int64 Alignment_56b600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 GameRoutine_156c5d0(__int64, __int64, char);
__int64 GameRoutine_1589ce0(__int64 result, __int64, __int64, char, char,
                            unsigned int);
__int64 GameRoutine_158b720(__int64, _QWORD*, _QWORD*);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64*, __int64, __int64,
                                                    unsigned int);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64*);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*GameData_204e418[])();
extern __int64 (*GameData_204e498[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64* a1, __int64 a2,
                                                    __int64 a3,
                                                    unsigned int a4);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64* a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4,
                                                    char a5);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(__int64* a1, __int64 a2,
                                                    unsigned int a3);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158cac0(_QWORD* a1, _QWORD* a2,
                                                    _QWORD* a3);
__int64 GameRoutine_1384630(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d3c00(_QWORD);
__int64 UnitVariables_6e2ce0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_6e31a0(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb8e38[])();
__int64
game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog(
    __int64 a1);
__int64
game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_157a1e0(__int64*, unsigned int*, __int64, __int64, __int64,
                            __int64, __int64);
__int64 GameRoutine_6e3b50_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_6e3b50");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 Pane_58f8a0(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_21caa2c;
extern __int64 game_g_empty_item;
__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown84(__int64 a1);
__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3c00(__int64 a1);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 Manager_a51e10(__int64, unsigned int, unsigned int, int);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern char** msg_MessageManager_empty_text__ptr;
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3e90(__int64 a1);
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void Util_158aec0(PSEUDO_X8, __int64 result,
                                             __int64);
__attribute__((swiftcall)) void Util_158b280(PSEUDO_X8, __int64 result,
                                             __int64);
__attribute__((swiftcall)) void
game_gameui_Util_GetNewMagicList(PSEUDO_X8, __int64, __int64, __int64);
__attribute__((swiftcall)) void
game_gameui_Util_GetNewSkillList(PSEUDO_X8, __int64 result, __int64, __int64);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1384630(__int64, __int64, __int64);
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6c3980_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_6c3980");
__int64 GameRoutine_9d1500_alt1(__int64, __int64, const char*, __int64, __int64,
                                __int64) __asm__("GameRoutine_9d1500");
__int64 PageTab_16e6880(__int64, int, int, int);
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0_alt1(__int64) __asm__(
    "ProcObeliskUnitMergeRouteSelectMenu_158c0d0");
__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(
    _QWORD*, __int64,
    unsigned int) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158ca00");
__int64 ProcObeliskUnitMergeRouteSelectMenu_158cac0_alt1(
    _QWORD*, __int64,
    __int64) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158cac0");
__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3d10(__int64 result,
                                                   unsigned int);
__int64 UnitVariables_6e2ce0_alt1(__int64, __int64,
                                  char) __asm__("UnitVariables_6e2ce0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_Destroy_Unit_alt1(__int64) __asm__("game_Unit_Destroy_Unit");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64
game_Unit_Unknown6c8630_alt1(__int64) __asm__("game_Unit_Unknown6c8630");
__int64 game_gameui_1589ce0(__int64 result, __int64, __int64, char, char,
                            unsigned int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
void GameRoutine_6e3b50_alt2(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown84(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE v13[20];
  _QWORD v14[2];
  _QWORD** v15;
  struct {
    _QWORD* v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    _BYTE* v20;
    int v21;
    int v22;
    int v23;
  } v16_;

  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Stock", 1);
  LayoutAccessor_1560070((void*)(v13), (__int64*)(a1 + 848),
                         (__int64)"L_StockItem");
  result = *(_QWORD*)&v13[8];
  if (*(_QWORD*)&v13[8] != 0) {
    v3 = std___1___shared_weak_count_lock(*(_QWORD*)&v13[8]);
    v4 = *(__int64**)v13;
    result = *(_QWORD*)&v13[8];
    if (*(_QWORD*)&v13[8] != 0) {
      result = std___1___shared_weak_count___release_weak(*(_QWORD*)&v13[8]);
    }
    if (v3 != 0 && v4 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      if (game_GameModeData_instance_ != 0 &&
          (v5 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&GameData_21f81b0)) != 0) {
        v6 = *(_DWORD*)(v5 + 32);
      }
      else {
        v6 = 0;
      }
      *(_DWORD*)v13 = 3;
      *(_QWORD*)&v13[4] = game_g_empty_item;
      if ((_BYTE)GameData_21caa2c != 0) {
        v7 = GameData_21caa2c;
      }
      else {
        v7 = 0;
      }
      *(_QWORD*)&v13[12] = v7;
      WORD1(v14[0]) = 0;
      HIDWORD(v14[0]) = 0;
      v16_.v17 = 0;
      v16_.v18 = 0;
      v16_.v19 = 0;
      v16_.v20 = nullptr;
      v15 = &v16_.v16;
      v16_.v16 = nullptr;
      GameRoutine_930b90_alt1((__int64)v14, (__int64)GameData_212c8b0[0]);
      v16_.v21 = 0;
      v16_.v22 = v6;
      v16_.v23 = 0;
      v8 = std___1___shared_weak_count_lock(v3);
      if (v8 != 0) {
        v10 = v8;
        GameRoutine_157a1e0(v4, (unsigned int*)v13, 1, 0, 1, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      LODWORD(v14[1]) = 0;
      v14[0] = 0;
      if ((v16_.v18 & 1) != 0) {
        *v16_.v20 = 0;
        v16_.v19 = 0;
      }
      else {
        LOWORD(v16_.v18) = 0;
      }
      GameRoutine_6e3b50_alt1((__int64)&v15, v16_.v16);
      v16_.v16 = nullptr;
      v16_.v17 = 0;
      v15 = &v16_.v16;
      if ((v16_.v18 & 1) != 0) {
        v11 = v16_.v20;
        if (v16_.v20 != nullptr) {
          v12 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
          v11 = v16_.v16;
        }
      }
      else {
        v11 = nullptr;
      }
      GameRoutine_6e3b50_alt1((__int64)&v15, v11);
      std___1___shared_weak_count___release_weak(v3);
      result = ProcObeliskUnitMergeRouteSelectMenu_9d3c00(a1);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  struct {
    __int64 v36;
    __int64 v37;
  } v36_;
  struct {
    char* v38;
    char* v39;
    int* v40;
  } v38_;
  struct {
    _QWORD v41[2];
    int v42;
  } v41_;
  int v43;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 88);
  v4 = *(unsigned __int8*)(result + 2328);
  v5 = *(_QWORD**)(a1 + 1184);
  v6 = result;
  v7 = *(_QWORD*)(a1 + 1200);
  v41_.v42 = 0;
  v41_.v41[0] = 0;
  v41_.v41[1] = 0;
  *(_QWORD*)(a1 + 1192) = v5;
  if ((unsigned __int64)v5 >= v7) {
    v9 = v7 - (_QWORD)v5;
    v10 = v9 >> 2;
    if ((unsigned __int64)(v9 >> 2) <= 1) {
      v10 = 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 61 != 0) {
      GameRoutine_60a210_alt1(),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14 = &v13[v11];
    *v13 = 0;
    v8 = v13 + 1;
    *(_QWORD*)(a1 + 1184) = v13;
    *(_QWORD*)(a1 + 1192) = v13 + 1;
    *(_QWORD*)(a1 + 1200) = v14;
    if (v5 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v15, (__int64)v5),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  else {
    *v5 = 0;
    v8 = v5 + 1;
  }
  *(_QWORD*)(a1 + 1192) = v8;
  v43 = 0;
  if (v4 != 0) {
    game_gameui_Util_GetNewSkillList((void*)((__int64*)&v38_.v38), 2, v3,
                                     v6 + 96),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    HIDWORD(v41_.v41[0]) = (unsigned __int64)(v38_.v39 - v38_.v38) >> 3;
    if (v38_.v38 != nullptr) {
      v38_.v39 = v38_.v38;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v38_.v38),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    game_gameui_Util_GetNewSkillList((void*)((__int64*)&v38_.v38), 1, v3,
                                     v6 + 96),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LODWORD(v41_.v41[1]) = (unsigned __int64)(v38_.v39 - v38_.v38) >> 3;
    if (v38_.v38 != nullptr) {
      v38_.v39 = v38_.v38;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v38_.v38),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    Util_158aec0((void*)((__int64*)&v38_.v38), v3, v6 + 96),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v41_.v42 = (unsigned __int64)(v38_.v39 - v38_.v38) >> 3;
    if (v38_.v38 != nullptr) {
      v38_.v39 = v38_.v38;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v38_.v38),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    game_gameui_Util_GetNewMagicList((void*)((__int64*)&v38_.v38), v3, v6 + 96,
                                     v18),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    HIDWORD(v41_.v41[1]) = (unsigned __int64)(v38_.v39 - v38_.v38) >> 3;
    if (v38_.v38 != nullptr) {
      v38_.v39 = v38_.v38;
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v38_.v38),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    LayoutAccessor_1560070_alt1((void*)(&v36_.v36), (__int64*)(a1 + 848),
                                "L_CompareInfo"),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ProcObeliskUnitMergeRouteSelectMenu_158cac0_alt1(&v36_.v36, v3, v6 + 96),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v36_.v37 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v36_.v37),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v38_.v38 = (char*)v41_.v41;
    v38_.v39 = (char*)a1;
    v38_.v40 = &v43;
    ProcObeliskUnitMergeRouteSelectMenu_9d3d10((__int64)&v38_.v38, 1u),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ProcObeliskUnitMergeRouteSelectMenu_9d3d10((__int64)&v38_.v38, 2u),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ProcObeliskUnitMergeRouteSelectMenu_9d3d10((__int64)&v38_.v38, 3u),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ProcObeliskUnitMergeRouteSelectMenu_9d3d10((__int64)&v38_.v38, 4u),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else {
    LayoutAccessor_1560070_alt1((void*)(&v34_.v34), (__int64*)(a1 + 848),
                                "L_CompareInfo"),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ProcObeliskUnitMergeRouteSelectMenu_158ca00_alt1(&v34_.v34, v3, 0),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v34_.v35 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v34_.v35),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v38_.v38), (__int64*)(a1 + 848),
                              "L_CompareInfo"),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v38_.v39 != nullptr) {
    v21 = std___1___shared_weak_count_lock_alt1((__int64)v38_.v39),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v22 = (__int64)v38_.v38;
    if (v38_.v39 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v38_.v39),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if (v21 != 0 && v22 != 0) {
      Util_158b280((void*)(&v38_.v38), v3, v6 + 96),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v38_.v39 == v38_.v38) {
        v23 = 0;
      }
      else {
        v23 = v4;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v22, (__int64)"A_ClassExp", v23),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v38_.v38 != nullptr) {
        v38_.v39 = v38_.v38;
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v38_.v38),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      goto LABEL_50;
    }
    if (v21 != 0) {
    LABEL_50:
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v21),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  *(_DWORD*)(a1 + 1216) =
      ((*(_QWORD*)(a1 + 1192) - *(_QWORD*)(a1 + 1184)) >> 3) - 1;
  v25 = v43;
  *(_DWORD*)(a1 + 1220) = v43;
  *(_DWORD*)(a1 + 1224) = v25;
  LayoutAccessor_1560070_alt1((void*)(&v32_.v32), (__int64*)(a1 + 848),
                              "L_CompareInfo/L_PageTab"),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v32_.v33 != 0) {
    v27 = std___1___shared_weak_count_lock_alt1(v32_.v33),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v27 != 0) {
      v28 = v32_.v32;
      v29 = v27;
      if (v32_.v32 != 0) {
        *(_DWORD*)(a1 + 1256) = 1;
        v30 = v32_.v33;
        if (v32_.v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 16),
                                    1u, memory_order_relaxed);
        }
        v31 = *(_QWORD*)(a1 + 1320);
        *(_QWORD*)(a1 + 1312) = v28;
        *(_QWORD*)(a1 + 1320) = v30;
        if (v31 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v31),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        PageTab_16e6880(a1 + 1216, v26, 4, 5),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v29),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    if (v32_.v33 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v32_.v33),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  return ProcObeliskUnitMergeRouteSelectMenu_9d3e90(a1);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _BYTE v15[20];
  struct {
    __int64 v16;
    _BYTE* v17;
  } v16_;
  _QWORD** v18;
  struct {
    _QWORD* v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    _BYTE* v23;
    int v24;
    int v25;
    int v26;
  } v19_;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    _QWORD v29[4];
    _QWORD* v30;
  } v29_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (v4 == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  *(_QWORD*)v15 = GameData_1fb8dc8;
  *(_QWORD*)&v15[8] = v3;
  v29_.v30 = v29_.v29;
  v27_.v28 = v27_.v27;
  v16_.v17 = v15;
  v29_.v29[0] = GameData_1fb8ed8;
  v27_.v27[0] = GameData_1fb8ed8;
  v5 = GameRoutine_9d1500_alt1(v3, (__int64)"MID_UnitMergeMenu_Confirm",
                               "MID_Shop_Consumption", (__int64)v15,
                               (__int64)v29_.v29, (__int64)v27_.v27);
  if (v27_.v28 == v27_.v27) {
    v6 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v27_.v28 + v6))((__int64)v27_.v28);
LABEL_11:
  if (v29_.v30 == v29_.v29) {
    v8 = 32;
  }
  else {
    if (v29_.v30 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v29_.v30 + v8))((__int64)v29_.v30);
LABEL_16:
  if (v16_.v17 == v15) {
    v9 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_21;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16_.v17 + v9))((__int64)v16_.v17);
LABEL_21:
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_21f81b0)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  *(_DWORD*)v15 = 3;
  *(_QWORD*)&v15[4] = *game_g_empty_item_ptr;
  if (*(_BYTE*)GameData_212ceb0 != 0) {
    v12 = *GameData_212ceb0;
  }
  else {
    v12 = 0;
  }
  *(_QWORD*)&v15[12] = v12;
  WORD1(v16_.v16) = 0;
  HIDWORD(v16_.v16) = 0;
  v19_.v20 = 0;
  v19_.v21 = 0;
  v19_.v22 = 0;
  v19_.v23 = nullptr;
  v18 = &v19_.v19;
  v19_.v19 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v16_.v16, (__int64)GameData_212c8b0[0]);
  v19_.v24 = 0;
  v19_.v25 = v11;
  v19_.v26 = 0;
  ObeliskDestinyMenuItem_1a06060((_QWORD*)(v5 + 1544), (int*)v15, 0);
  LODWORD(v16_.v17) = 0;
  v16_.v16 = 0;
  if ((v19_.v21 & 1) != 0) {
    *v19_.v23 = 0;
    v19_.v22 = 0;
  }
  else {
    LOWORD(v19_.v21) = 0;
  }
  GameRoutine_6e3b50_alt2((__int64)&v18, v19_.v19);
  v19_.v19 = nullptr;
  v19_.v20 = 0;
  v18 = &v19_.v19;
  if ((v19_.v21 & 1) != 0) {
    v13 = v19_.v23;
    if (v19_.v23 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v19_.v23);
      v13 = v19_.v19;
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_6e3b50_alt2((__int64)&v18, v13);
  return 12;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown104(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0);
    if (result != 0) {
      if (*(_BYTE*)(result + 2328) == 1 &&
          (game_menu_PageTab_Move(a1 + 1216, 0xFFFFFFFFLL, a2 & 1) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 1232);
        v6 = *(int*)(a1 + 1220);
        if (v6 < (*(_QWORD*)(a1 + 1240) - v5) >> 2) {
          v6 = *(int*)(v5 + 4 * v6);
        }
        *(_DWORD*)(a1 + 1344) = *(_DWORD*)(*(_QWORD*)(a1 + 1184) + 8 * v6);
        GameRoutine_9d3e90(a1);
        return 13;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_Unknown106(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fb8da0, 0);
    if (result != 0) {
      if (*(_BYTE*)(result + 2328) == 1 &&
          (game_menu_PageTab_Move(a1 + 1216, 1, a2 & 1) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 1232);
        v6 = *(int*)(a1 + 1220);
        if (v6 < (*(_QWORD*)(a1 + 1240) - v5) >> 2) {
          v6 = *(int*)(v5 + 4 * v6);
        }
        *(_DWORD*)(a1 + 1344) = *(_DWORD*)(*(_QWORD*)(a1 + 1184) + 8 * v6);
        GameRoutine_9d3e90(a1);
        return 13;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3c00(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64* v3;
  char* v5;
  int v6;
  __int64 v7;
  int* v8;
  int v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;

  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 848),
                         (__int64)"L_StockItem");
  result = v10_.v11;
  if (v10_.v11 != 0) {
    v2 = std___1___shared_weak_count_lock(v10_.v11);
    v3 = v10_.v10;
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v10_.v11);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    v5 = (char*)GameData_212da30;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_DWORD*)(game_GameModeData_instance_ + 80);
      v7 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_21f81b0);
      if (v7 != 0) {
        if (v6 < *(_DWORD*)(v7 + 32)) {
        LABEL_14:
          v8 = (int*)(v5 + 60);
        LABEL_17:
          v9 = *v8;
          result = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Num");
          if (result != 0) {
            result = Pane_58f8a0(result);
            if (result != 0) {
              *(_DWORD*)(result + 12) = v9;
            }
          }
        LABEL_20:
          if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
            return std___1___shared_weak_count___release_weak(v2);
          }
          return result;
        }
      }
      else if (v6 < 0) {
        goto LABEL_14;
      }
    }
    v8 = (int*)(v5 + 36);
    goto LABEL_17;
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_9d3e90(__int64 a1)
{
  __int64 v3;
  unsigned __int64 v4;
  int* v5;
  signed int v6;
  int v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  __int64* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  struct {
    __int64* v62;
    unsigned __int64 v63;
    unsigned __int64 v64;
    unsigned __int64 v65;
    int v66;
    int v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
  } v62_;

  v3 = *(_QWORD*)(a1 + 1232);
  v4 = *(int*)(a1 + 1220);
  if (v4 < (*(_QWORD*)(a1 + 1240) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  v5 = (int*)(*(_QWORD*)(a1 + 1184) + 8 * v4);
  v7 = *v5;
  v6 = v5[1];
  LayoutAccessor_1560070((void*)(&v62_.v62), (__int64*)(a1 + 848),
                         (__int64)"L_CompareInfo");
  result = v62_.v63;
  if (v62_.v63 != 0) {
    v9 = std___1___shared_weak_count_lock(v62_.v63);
    v10 = v62_.v62;
    result = v62_.v63;
    if (v62_.v63 != 0) {
      result = std___1___shared_weak_count___release_weak(v62_.v63);
    }
    if (v9 == 0 || v10 == nullptr) {
      if (v9 == 0) {
        return result;
      }
      goto LABEL_62;
    }
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v10, (__int64)"L_PageTab",
                                          1);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v10, (__int64)"A_Get_Txt",
                                          0);
    v11 = msg_MessageManager_instance__ptr[0];
    v12 = GameData_212e348;
    if (v7 <= 1) {
      if (v7 == 0) {
        v54 = *msg_MessageManager_instance__ptr[0];
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v62 = GameData_212e348 + 2;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v55 = GameRoutine_a4dbe0_alt1(v54, "MID_Sys_SkillLv", 0);
        if (v55 != nullptr) {
          v56 = (__int64)v55;
          v57 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title");
          if (v57 != 0) {
            GameRoutine_156c5d0_alt1(v57, v56, 0);
          }
        }
        v21 = "Page_Mastery";
        goto LABEL_57;
      }
      if (v7 != 1) {
        goto LABEL_58;
      }
      v22 = *msg_MessageManager_instance__ptr[0];
      v23 = GameData_212e348 + 2;
      v62_.v68 = -1;
      v62_.v69 = -1;
      v62_.v70 = -1;
      v62_.v71 = -1;
      v62_.v72 = -1;
      v62_.v73 = -1;
      v62_.v74 = -1;
      v62_.v75 = -1;
      v62_.v76 = -1;
      v62_.v77 = -1;
      v62_.v78 = -1;
      v62_.v79 = -1;
      v62_.v80 = 8;
      v62_.v64 = 0xFFFF0004FFFF0002LL;
      v62_.v65 = 0xFFFF0006FFFF0005LL;
      v62_.v62 = GameData_212e348 + 2;
      v62_.v63 = 0xFFFF0001FFFF0000LL;
      v62_.v66 = -65529;
      v62_.v67 = -65528;
      v24 = GameRoutine_a4dbe0_alt1(v22, "MID_SysMenu_Arts", 0);
      if (v24 != nullptr) {
        v25 = (__int64)v24;
      }
      else {
        v25 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*v11 + 14704, v25);
      v26 = *v11;
      v62_.v64 = 0xFFFF0004FFFF0002LL;
      v62_.v62 = v23;
      v62_.v63 = 0xFFFF0001FFFF0000LL;
      v62_.v68 = -1;
      v62_.v69 = -1;
      v62_.v70 = -1;
      v62_.v71 = -1;
      v62_.v72 = -1;
      v62_.v73 = -1;
      v62_.v74 = -1;
      v62_.v75 = -1;
      v62_.v76 = -1;
      v62_.v77 = -1;
      v62_.v78 = -1;
      v62_.v79 = -1;
      v62_.v80 = 8;
      v62_.v66 = -65529;
      v62_.v67 = -65528;
      v62_.v65 = 0xFFFF0006FFFF0005LL;
      v27 = GameRoutine_a4dbe0_alt1(v26, "MID_UnitMergeMenu_Acquired", 0);
      if (v27 != nullptr) {
        v28 = (__int64)v27;
        v29 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title");
        if (v29 != 0) {
          GameRoutine_156c5d0_alt1(v29, v28, 0);
        }
      }
      v30 = *v11;
      v62_.v68 = -1;
      v62_.v69 = -1;
      v62_.v70 = -1;
      v62_.v71 = -1;
      v62_.v72 = -1;
      v62_.v73 = -1;
      v62_.v74 = -1;
      v62_.v75 = -1;
      v62_.v76 = -1;
      v62_.v77 = -1;
      v62_.v78 = -1;
      v62_.v79 = -1;
      v62_.v66 = -65529;
      v62_.v67 = -65528;
      v62_.v62 = v23;
      v62_.v63 = 0xFFFF0001FFFF0000LL;
      v62_.v64 = 0xFFFF0004FFFF0002LL;
      v62_.v65 = 0xFFFF0006FFFF0005LL;
      v62_.v80 = 8;
      v31 = GameRoutine_a4dbe0_alt1(v30, "MID_BtlMenu_WeaponCost", 0);
      if (v31 != nullptr) {
        v32 = (__int64)v31;
        v33 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title_Cost");
        v12 = GameData_212e348;
        if (v33 != 0) {
          GameRoutine_156c5d0_alt1(v33, v32, 0);
        }
        v21 = "Page_CombatArts";
        goto LABEL_57;
      }
      v21 = "Page_CombatArts";
    }
    else {
      switch (v7) {
      case 2:
        v34 = *msg_MessageManager_instance__ptr[0];
        v35 = GameData_212e348 + 2;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v62 = GameData_212e348 + 2;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v36 = GameRoutine_a4dbe0_alt1(v34, "MID_Sys_Skill", 0);
        if (v36 != nullptr) {
          v37 = (__int64)v36;
        }
        else {
          v37 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(*v11 + 14704, v37);
        v38 = *v11;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v62 = v35;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v39 = GameRoutine_a4dbe0_alt1(v38, "MID_UnitMergeMenu_Acquired", 0);
        if (v39 != nullptr) {
          v40 = (__int64)v39;
          v41 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title");
          if (v41 != 0) {
            GameRoutine_156c5d0_alt1(v41, v40, 0);
          }
        }
        v21 = "Page_Skill";
        break;
      case 3:
        v42 = *msg_MessageManager_instance__ptr[0];
        v43 = GameData_212e348 + 2;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v62_.v62 = GameData_212e348 + 2;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v44 = GameRoutine_a4dbe0_alt1(v42, "MID_Menu_Magic", 0);
        if (v44 != nullptr) {
          v45 = (__int64)v44;
        }
        else {
          v45 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(*v11 + 14704, v45);
        v46 = *v11;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v62 = v43;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v47 = GameRoutine_a4dbe0_alt1(v46, "MID_UnitMergeMenu_Acquired", 0);
        if (v47 != nullptr) {
          v48 = (__int64)v47;
          v49 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title");
          if (v49 != 0) {
            GameRoutine_156c5d0_alt1(v49, v48, 0);
          }
        }
        v50 = *v11;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v62 = v43;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v62_.v80 = 8;
        v51 = GameRoutine_a4dbe0_alt1(v50, "MID_Sys_Remaining", 0);
        if (v51 != nullptr) {
          v52 = (__int64)v51;
          v53 =
              ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title_Cost");
          v12 = GameData_212e348;
          if (v53 != 0) {
            GameRoutine_156c5d0_alt1(v53, v52, 0);
          }
          v21 = "Page_Magic";
          goto LABEL_57;
        }
        v21 = "Page_Magic";
        break;
      case 4:
        v13 = *msg_MessageManager_instance__ptr[0];
        v14 = GameData_212e348 + 2;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v62 = GameData_212e348 + 2;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v15 = GameRoutine_a4dbe0_alt1(v13, "MID_Sys_Plural_Class", 0);
        if (v15 != nullptr) {
          v16 = (__int64)v15;
        }
        else {
          v16 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(*v11 + 14704, v16);
        v17 = *v11;
        v62_.v68 = -1;
        v62_.v69 = -1;
        v62_.v70 = -1;
        v62_.v71 = -1;
        v62_.v72 = -1;
        v62_.v73 = -1;
        v62_.v74 = -1;
        v62_.v75 = -1;
        v62_.v76 = -1;
        v62_.v77 = -1;
        v62_.v78 = -1;
        v62_.v79 = -1;
        v62_.v80 = 8;
        v62_.v66 = -65529;
        v62_.v67 = -65528;
        v62_.v62 = v14;
        v62_.v63 = 0xFFFF0001FFFF0000LL;
        v62_.v64 = 0xFFFF0004FFFF0002LL;
        v62_.v65 = 0xFFFF0006FFFF0005LL;
        v18 = GameRoutine_a4dbe0_alt1(v17, "MID_UnitMergeMenu_Acquired", 0);
        if (v18 != nullptr) {
          v19 = (__int64)v18;
          v20 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_Title");
          if (v20 != 0) {
            GameRoutine_156c5d0_alt1(v20, v19, 0);
          }
        }
        v21 = "Page_Class";
        break;
      default:
        goto LABEL_58;
      }
    }
    v12 = GameData_212e348;
  LABEL_57:
    LayoutAccessor_1562cf0((__int64)v10, (__int64)v21);
  LABEL_58:
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v10, (__int64)"N_PageHelp",
                                          v6 > 0);
    Manager_a51e10(*v11 + 14704, 0, v6, 0);
    v58 = *v11;
    v62_.v68 = -1;
    v62_.v69 = -1;
    v62_.v70 = -1;
    v62_.v71 = -1;
    v62_.v72 = -1;
    v62_.v73 = -1;
    v62_.v74 = -1;
    v62_.v75 = -1;
    v62_.v76 = -1;
    v62_.v77 = -1;
    v62_.v78 = -1;
    v62_.v79 = -1;
    v62_.v62 = v12 + 2;
    v62_.v63 = 0xFFFF0001FFFF0000LL;
    v62_.v64 = 0xFFFF0004FFFF0002LL;
    v62_.v65 = 0xFFFF0006FFFF0005LL;
    v62_.v80 = 8;
    v62_.v66 = -65529;
    v62_.v67 = -65528;
    v59 = GameRoutine_a4dbe0_alt1(v58, "MID_UnitMergeMenu_Acquired_Other", 0);
    if (v59 != nullptr) {
      v60 = (__int64)v59;
      v61 = ui_LayoutAccessor_FindTextBox_alt1(v10, (__int64)"T_PageHelp");
      if (v61 != 0) {
        GameRoutine_156c5d0_alt1(v61, v60, 0);
      }
    }
    result = ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v10,
                                                   (__int64)"T_PageHelp", 1);
  LABEL_62:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      return std___1___shared_weak_count___release_weak(v9);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 336);
  if (v2 == 0) {
    return 2;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (v3 == 0) {
    return 2;
  }
  v4 = v3;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_9;
  }
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 80);
  v6 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&GameData_21f81b0);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 32);
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
    LABEL_6:
      v9 = (v5 - v7) & ~((v5 - v7) >> 31);
      if (v9 >= 99999) {
        v9 = 99999;
      }
      *(_DWORD*)(v8 + 80) = v9;
    }
  }
  else {
    v7 = 0;
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      goto LABEL_6;
    }
  }
LABEL_9:
  UnitVariables_6e2ce0_alt1(*(_QWORD*)(v4 + 88), *(_QWORD*)(v4 + 2320), 0);
  *(_BYTE*)(v4 + 82) = 0;
  v10 = v19_.v19;
  *(_DWORD*)(v1 + 1344) = 0;
  v12 = *(_QWORD*)(v1 + 232);
  v11 = *(_QWORD*)(v1 + 240);
  v19_.v19[0] = GameData_1fb8e38;
  v19_.v20 = v19_.v19;
  if (v11 == v12) {
    goto LABEL_20;
  }
  v13 = 0;
  v14 = GameData_212e008[0];
  do {
    v15 = *(_QWORD*)(v12 + 8 * v13);
    if (v15 != 0) {
      v16 = __dynamic_cast(v15, v14, &GameData_1fb8da0, 0);
      if (v16 == 0) {
        goto LABEL_11;
      }
      v21 = v16;
      if (v19_.v20 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20,
                                                                  &v21) &
           1) != 0) {
        break;
      }
      v12 = *(_QWORD*)(v1 + 232);
      v11 = *(_QWORD*)(v1 + 240);
    }
  LABEL_11:
    ++v13;
  } while (v13 < (v11 - v12) >> 3);
  v10 = v19_.v20;
  if (v19_.v20 != v19_.v19) {
    if (v19_.v20 != nullptr) {
      v17 = 40;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
LABEL_20:
  v17 = 32;
LABEL_21:
  (*(void (**)(_QWORD*))(*v10 + v17))(v10);
LABEL_22:
  ProcObeliskUnitMergeRouteSelectMenu_9d3c00(v1);
  (*(void (**)(__int64))(*(_QWORD*)v1 + 704LL))(v1);
  GameHr_1384630(v1, v4 + 96, *(_QWORD*)(v4 + 88));
  return 2;
}

__int64

game_facility_anonymous_ProcObeliskUnitMergeRouteSelectMenu_confirm_dialog_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 88);
  if (v3 != 0) {
    LOBYTE(v3) = UnitVariables_6e31a0(v3, *(_QWORD*)(v2 + 2320), 0);
  }
  *(_BYTE*)(v2 + 2328) = v3 & 1;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 80);
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f81b0);
    if (v6 != 0) {
      v4 = *(_DWORD*)(v6 + 32);
    }
    else {
      v4 = 0;
    }
  }
  else {
    v5 = 0;
  }
  *(_BYTE*)(v2 + 82) = (v5 >= v4) & *(_BYTE*)(v2 + 2328);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 96LL))(v2);
  return 0;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158ab40(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4)
{
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[2];
  struct {
    _BYTE v14[400];
    __int64 v15;
  } v14_;

  GameRoutine_6c2b50_alt1((__int64)v14_.v14);
  GameRoutine_6c3980_alt1((__int64)v14_.v14, a2);
  v8 = (_QWORD*)game_Unit_GetJob_alt1((__int64)v14_.v14);
  if (*v8 != *(_QWORD*)game_Unit_GetJob_alt1(a3)) {
    v9 = game_Unit_GetJob_alt1(a3);
    if (v14_.v15 != v9) {
      v14_.v15 = v9;
      game_Unit_Unknown6c8630_alt1((__int64)v14_.v14);
    }
  }
  v10 = *a1;
  v11 = a1[1];
  v13[0] = v10;
  v13[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    game_gameui_1589ce0((__int64)v13, (__int64)v14_.v14, a3, 0, 0, a4);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  else {
    game_gameui_1589ce0((__int64)v13, (__int64)v14_.v14, a3, 0, 0, a4);
  }
  return game_Unit_Destroy_Unit_alt1((__int64)v14_.v14);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158c0d0(__int64* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
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

  result = a1[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *a1;
      v4 = result;
      if (v3 != 0) {
        LayoutAccessor_1562cf0(v3, (__int64)"Page_Mastery");
        v12 = -1;
        v13 = -1;
        v14 = -1;
        v15 = -1;
        v5 = *msg_MessageManager_instance__ptr[0];
        v16 = -1;
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v9[0] = GameData_212e348 + 2;
        v9[1] = 0xFFFF0001FFFF0000LL;
        v9[2] = 0xFFFF0004FFFF0002LL;
        v9[3] = 0xFFFF0006FFFF0005LL;
        v24 = 8;
        v10 = -65529;
        v11 = -65528;
        v6 = GameRoutine_a4dbe0(v5, "MID_Sys_SkillLv", 0, v9);
        if (v6 != 0) {
          v7 = v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Title");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        ui_LayoutAccessor_SetPaneVisible(v3, "L_PageTab", 0);
        ui_LayoutAccessor_SetPaneVisible(v3, "N_PageHelp", 0);
        result = ui_LayoutAccessor_SetPaneVisible(v3, "A_Get_Txt", 0);
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

__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64* a1, __int64 a2,
                                                    __int64 a3, unsigned int a4,
                                                    char a5)
{
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  _QWORD* v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  char v58;
  char v59;
  _QWORD v60[2];
  __int64 v61[2];
  _QWORD v62[2];
  struct {
    _QWORD v63[4];
    _QWORD* v64;
  } v63_;
  __int64 v65;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((a5 & 1) != 0) {
    v8 = a1[1];
    v61[0] = *a1;
    v61[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      ProcObeliskUnitMergeRouteSelectMenu_158ab40(v61, a2, a3, a4),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    LABEL_6:
      std___1___shared_weak_count___release_weak_alt1(v8),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_9;
    }
    ProcObeliskUnitMergeRouteSelectMenu_158ab40(v61, a2, a3, a4),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  else {
    v8 = a1[1];
    v62[0] = *a1;
    v62[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      game_gameui_1589ce0((__int64)v62, a2, a3, 0, 0, a4),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      goto LABEL_6;
    }
    game_gameui_1589ce0((__int64)v62, a2, a3, 0, 0, a4),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_9:
  v9 = a1[1];
  v60[0] = *a1;
  v60[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    ProcObeliskUnitMergeRouteSelectMenu_158c0d0_alt1((__int64)v60),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v9),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = a1[1];
    if (result == 0) {
      return result;
    }
  }
  else {
    ProcObeliskUnitMergeRouteSelectMenu_158c0d0_alt1((__int64)v60),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = a1[1];
    if (result == 0) {
      return result;
    }
  }
  result = std___1___shared_weak_count_lock_alt1(result),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (result != 0) {
    v18 = (__int64*)*a1;
    v19 = result;
    if (v18 == nullptr) {
    LABEL_72:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        return std___1___shared_weak_count___release_weak_alt1(v19);
      }
      return result;
    }
    v20 = v63_.v63;
    v65 = 0;
    v63_.v63[0] = GameData_204e418;
    v63_.v63[1] = (char*)&v65 + 4;
    v21 = *(_BYTE*)(a3 + 1152);
    v63_.v64 = v63_.v63;
    if ((v21 & 2) != 0) {
      v22 = *(_QWORD*)(a3 + 1112);
      v23 = *(_QWORD*)(a3 + 1104);
      if ((int)((unsigned __int64)(v22 - v23) >> 2) < 1) {
        v20 = v63_.v63;
      }
      else {
        v24 = 0;
        v25 = 0;
        v26 = GameData_212c880[0];
        v27 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v27 + 64) +
                                   8LL * (*(_DWORD*)(v23 + v24) & 0xFFF)) +
                        104LL) == 1) {
            if (v63_.v64 == nullptr) {
            LABEL_75:
              GameRoutine_60a310_alt1(),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v12 = COERCE_AS(
                      __typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                  v15 = COERCE_AS(
                      __typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                  v16 = COERCE_AS(
                      __typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                  v17 = COERCE_AS(
                      __typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            }
            (*(void (**)(_QWORD*, __int64))(*v63_.v64 + 48LL))(v63_.v64,
                                                               v23 + v24),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
            v27 = *v26;
            v22 = *(_QWORD*)(a3 + 1112);
            v23 = *(_QWORD*)(a3 + 1104);
          }
          ++v25;
          v24 += 4;
        } while (v25 < (int)((unsigned __int64)(v22 - v23) >> 2));
        v20 = v63_.v64;
        if (v63_.v64 != v63_.v63) {
          if (v63_.v64 != nullptr) {
            v28 = 40;
          LABEL_27:
            (*(void (**)(_QWORD*, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64))(*v20 + v28))(v20, v11, v12, v13,
                                                         v14, v15, v16, v17),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                v15 =
                    COERCE_AS(__typeof__(v15),
                              PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                v16 =
                    COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                v17 =
                    COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          }
          v29 = v63_.v63;
          v63_.v63[0] = GameData_204e498;
          v63_.v63[1] = &v65;
          v30 = *(_BYTE*)(a2 + 1152);
          v63_.v64 = v63_.v63;
          if ((v30 & 2) != 0) {
            v31 = *(_QWORD*)(a2 + 1112);
            v32 = *(_QWORD*)(a2 + 1104);
            if ((int)((unsigned __int64)(v31 - v32) >> 2) < 1) {
              v29 = v63_.v63;
            }
            else {
              v33 = 0;
              v34 = 0;
              v35 = GameData_212c880[0];
              v36 = *GameData_212c880[0];
              do {
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v36 + 64) +
                                         8LL *
                                             (*(_DWORD*)(v32 + v33) & 0xFFF)) +
                              104LL) == 1) {
                  if (v63_.v64 == nullptr) {
                    goto LABEL_75;
                  }
                  (*(void (**)(_QWORD*, __int64))(*v63_.v64 + 48LL))(v63_.v64,
                                                                     v32 + v33),
                      v11 = COERCE_AS(
                          __typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v12 = COERCE_AS(
                          __typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v13 = COERCE_AS(
                          __typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v14 = COERCE_AS(
                          __typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v15 = COERCE_AS(
                          __typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v16 = COERCE_AS(
                          __typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v17 = COERCE_AS(
                          __typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  v36 = *v35;
                  v31 = *(_QWORD*)(a2 + 1112);
                  v32 = *(_QWORD*)(a2 + 1104);
                }
                ++v34;
                v33 += 4;
              } while (v34 < (int)((unsigned __int64)(v31 - v32) >> 2));
              v29 = v63_.v64;
              if (v63_.v64 != v63_.v63) {
                if (v63_.v64 != nullptr) {
                  v37 = 40;
                LABEL_40:
                  (*(void (**)(_QWORD*, __int64, __int64, __int64, __int64,
                               __int64, __int64, __int64))(*v29 + v37))(
                      v29, v11, v12, v13, v14, v15, v16, v17),
                      v11 = COERCE_AS(
                          __typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v12 = COERCE_AS(
                          __typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                      v13 = COERCE_AS(
                          __typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                      v14 = COERCE_AS(
                          __typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
                      v15 = COERCE_AS(
                          __typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
                      v16 = COERCE_AS(
                          __typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
                      v17 = COERCE_AS(
                          __typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                }
                v39 = v65;
                v38 = HIDWORD(v65);
                v40 = v63_.v63;
                v65 = 0;
                v63_.v63[0] = GameData_204e418;
                v63_.v63[1] = (char*)&v65 + 4;
                v41 = *(_BYTE*)(a3 + 1152);
                v63_.v64 = v63_.v63;
                if ((v41 & 4) != 0) {
                  v42 = *(_QWORD*)(a3 + 1112);
                  v43 = *(_QWORD*)(a3 + 1104);
                  if ((int)((unsigned __int64)(v42 - v43) >> 2) < 1) {
                    v40 = v63_.v63;
                  }
                  else {
                    v44 = 0;
                    v45 = 0;
                    v46 = GameData_212c880[0];
                    v47 = *GameData_212c880[0];
                    do {
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v47 + 64) +
                                               8LL * (*(_DWORD*)(v43 + v44) &
                                                      0xFFF)) +
                                    104LL) == 2) {
                        if (v63_.v64 == nullptr) {
                          goto LABEL_75;
                        }
                        (*(void (**)(_QWORD*, __int64))(*v63_.v64 + 48LL))(
                            v63_.v64, v43 + v44),
                            v11 = COERCE_AS(__typeof__(v11),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v12 = COERCE_AS(__typeof__(v12),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r")),
                            v13 = COERCE_AS(__typeof__(v13),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x3", "=r")),
                            v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x4", "=r")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x5", "=r")),
                            v16 = COERCE_AS(__typeof__(v16),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x6", "=r")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x7", "=r"));
                        v47 = *v46;
                        v42 = *(_QWORD*)(a3 + 1112);
                        v43 = *(_QWORD*)(a3 + 1104);
                      }
                      ++v45;
                      v44 += 4;
                    } while (v45 < (int)((unsigned __int64)(v42 - v43) >> 2));
                    v40 = v63_.v64;
                    if (v63_.v64 != v63_.v63) {
                      if (v63_.v64 != nullptr) {
                        v48 = 40;
                      LABEL_53:
                        (*(void (**)(_QWORD*, __int64, __int64, __int64,
                                     __int64, __int64, __int64,
                                     __int64))(*v40 + v48))(v40, v11, v12, v13,
                                                            v14, v15, v16, v17),
                            v11 = COERCE_AS(__typeof__(v11),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v12 = COERCE_AS(__typeof__(v12),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r")),
                            v13 = COERCE_AS(__typeof__(v13),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x3", "=r")),
                            v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x4", "=r")),
                            v15 = COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x5", "=r")),
                            v16 = COERCE_AS(__typeof__(v16),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x6", "=r")),
                            v17 = COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x7", "=r"));
                      }
                      v49 = v63_.v63;
                      v63_.v63[0] = GameData_204e498;
                      v63_.v63[1] = &v65;
                      v50 = *(_BYTE*)(a2 + 1152);
                      v63_.v64 = v63_.v63;
                      if ((v50 & 4) != 0) {
                        v51 = *(_QWORD*)(a2 + 1112);
                        v52 = *(_QWORD*)(a2 + 1104);
                        if ((int)((unsigned __int64)(v51 - v52) >> 2) < 1) {
                          v49 = v63_.v63;
                        }
                        else {
                          v53 = 0;
                          v54 = 0;
                          v55 = GameData_212c880[0];
                          v56 = *GameData_212c880[0];
                          do {
                            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v56 + 64) +
                                                     8LL * (*(_DWORD*)(v52 +
                                                                       v53) &
                                                            0xFFF)) +
                                          104LL) == 2) {
                              if (v63_.v64 == nullptr) {
                                goto LABEL_75;
                              }
                              (*(void (**)(_QWORD*, __int64))(
                                  *v63_.v64 + 48LL))(v63_.v64, v52 + v53),
                                  v11 = COERCE_AS(
                                      __typeof__(v11),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v12 = COERCE_AS(
                                      __typeof__(v12),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r")),
                                  v13 = COERCE_AS(
                                      __typeof__(v13),
                                      PSEUDO_REGISTER(unsigned long long, "x3",
                                                      "=r")),
                                  v14 = COERCE_AS(
                                      __typeof__(v14),
                                      PSEUDO_REGISTER(unsigned long long, "x4",
                                                      "=r")),
                                  v15 = COERCE_AS(
                                      __typeof__(v15),
                                      PSEUDO_REGISTER(unsigned long long, "x5",
                                                      "=r")),
                                  v16 = COERCE_AS(
                                      __typeof__(v16),
                                      PSEUDO_REGISTER(unsigned long long, "x6",
                                                      "=r")),
                                  v17 = COERCE_AS(
                                      __typeof__(v17),
                                      PSEUDO_REGISTER(unsigned long long, "x7",
                                                      "=r"));
                              v56 = *v55;
                              v51 = *(_QWORD*)(a2 + 1112);
                              v52 = *(_QWORD*)(a2 + 1104);
                            }
                            ++v54;
                            v53 += 4;
                          } while (v54 <
                                   (int)((unsigned __int64)(v51 - v52) >> 2));
                          v49 = v63_.v64;
                          if (v63_.v64 != v63_.v63) {
                            if (v63_.v64 == nullptr) {
                            LABEL_67:
                              v58 = SHIDWORD(v65) > (int)v65 || v38 > v39;
                              v59 = SHIDWORD(v65) > (int)v65;
                              ui_LayoutAccessor_SetPaneVisible_alt1(
                                  (__int64)v18, (__int64)"A_Get_Txt", v58),
                                  v11 = COERCE_AS(
                                      __typeof__(v11),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v12 = COERCE_AS(
                                      __typeof__(v12),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r")),
                                  v13 = COERCE_AS(
                                      __typeof__(v13),
                                      PSEUDO_REGISTER(unsigned long long, "x3",
                                                      "=r")),
                                  v14 = COERCE_AS(
                                      __typeof__(v14),
                                      PSEUDO_REGISTER(unsigned long long, "x4",
                                                      "=r")),
                                  v15 = COERCE_AS(
                                      __typeof__(v15),
                                      PSEUDO_REGISTER(unsigned long long, "x5",
                                                      "=r")),
                                  v16 = COERCE_AS(
                                      __typeof__(v16),
                                      PSEUDO_REGISTER(unsigned long long, "x6",
                                                      "=r")),
                                  v17 = COERCE_AS(
                                      __typeof__(v17),
                                      PSEUDO_REGISTER(unsigned long long, "x7",
                                                      "=r"));
                              ui_LayoutAccessor_SetPaneVisible_alt1(
                                  (__int64)v18, (__int64)"T_Get_Skill",
                                  v38 > v39),
                                  v11 = COERCE_AS(
                                      __typeof__(v11),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v12 = COERCE_AS(
                                      __typeof__(v12),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r")),
                                  v13 = COERCE_AS(
                                      __typeof__(v13),
                                      PSEUDO_REGISTER(unsigned long long, "x3",
                                                      "=r")),
                                  v14 = COERCE_AS(
                                      __typeof__(v14),
                                      PSEUDO_REGISTER(unsigned long long, "x4",
                                                      "=r")),
                                  v15 = COERCE_AS(
                                      __typeof__(v15),
                                      PSEUDO_REGISTER(unsigned long long, "x5",
                                                      "=r")),
                                  v16 = COERCE_AS(
                                      __typeof__(v16),
                                      PSEUDO_REGISTER(unsigned long long, "x6",
                                                      "=r")),
                                  v17 = COERCE_AS(
                                      __typeof__(v17),
                                      PSEUDO_REGISTER(unsigned long long, "x7",
                                                      "=r"));
                              ui_LayoutAccessor_SetPaneVisible_alt1(
                                  (__int64)v18, (__int64)"T_Get_CombatArts",
                                  v59),
                                  v11 = COERCE_AS(
                                      __typeof__(v11),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r")),
                                  v12 = COERCE_AS(
                                      __typeof__(v12),
                                      PSEUDO_REGISTER(unsigned long long, "x2",
                                                      "=r")),
                                  v13 = COERCE_AS(
                                      __typeof__(v13),
                                      PSEUDO_REGISTER(unsigned long long, "x3",
                                                      "=r")),
                                  v14 = COERCE_AS(
                                      __typeof__(v14),
                                      PSEUDO_REGISTER(unsigned long long, "x4",
                                                      "=r")),
                                  v15 = COERCE_AS(
                                      __typeof__(v15),
                                      PSEUDO_REGISTER(unsigned long long, "x5",
                                                      "=r")),
                                  v16 = COERCE_AS(
                                      __typeof__(v16),
                                      PSEUDO_REGISTER(unsigned long long, "x6",
                                                      "=r")),
                                  v17 = COERCE_AS(
                                      __typeof__(v17),
                                      PSEUDO_REGISTER(unsigned long long, "x7",
                                                      "=r"));
                              result = ui_LayoutAccessor_FindAlignment_alt1(
                                  v18, (__int64)"A_Get_Txt"),
                              v11 =
                                  COERCE_AS(__typeof__(v11),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v12 =
                                  COERCE_AS(__typeof__(v12),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x2", "=r")),
                              v13 =
                                  COERCE_AS(__typeof__(v13),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x3", "=r")),
                              v14 =
                                  COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x4", "=r")),
                              v15 =
                                  COERCE_AS(__typeof__(v15),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x5", "=r")),
                              v16 =
                                  COERCE_AS(__typeof__(v16),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x6", "=r")),
                              v17 =
                                  COERCE_AS(__typeof__(v17),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x7", "=r"));
                              if (result != 0) {
                                result = Alignment_56b600_alt1(result),
                                v11 = COERCE_AS(
                                    __typeof__(v11),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v12 = COERCE_AS(
                                    __typeof__(v12),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r")),
                                v13 = COERCE_AS(
                                    __typeof__(v13),
                                    PSEUDO_REGISTER(unsigned long long, "x3",
                                                    "=r")),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(unsigned long long, "x4",
                                                    "=r")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(unsigned long long, "x5",
                                                    "=r")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(unsigned long long, "x6",
                                                    "=r")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(unsigned long long, "x7",
                                                    "=r"));
                              }
                              goto LABEL_72;
                            }
                            v57 = 40;
                          LABEL_66:
                            (*(void (**)(_QWORD*, __int64, __int64, __int64,
                                         __int64, __int64, __int64, __int64))(
                                *v49 + v57))(v49, v11, v12, v13, v14, v15, v16,
                                             v17),
                                v11 = COERCE_AS(
                                    __typeof__(v11),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v12 = COERCE_AS(
                                    __typeof__(v12),
                                    PSEUDO_REGISTER(unsigned long long, "x2",
                                                    "=r")),
                                v13 = COERCE_AS(
                                    __typeof__(v13),
                                    PSEUDO_REGISTER(unsigned long long, "x3",
                                                    "=r")),
                                v14 = COERCE_AS(
                                    __typeof__(v14),
                                    PSEUDO_REGISTER(unsigned long long, "x4",
                                                    "=r")),
                                v15 = COERCE_AS(
                                    __typeof__(v15),
                                    PSEUDO_REGISTER(unsigned long long, "x5",
                                                    "=r")),
                                v16 = COERCE_AS(
                                    __typeof__(v16),
                                    PSEUDO_REGISTER(unsigned long long, "x6",
                                                    "=r")),
                                v17 = COERCE_AS(
                                    __typeof__(v17),
                                    PSEUDO_REGISTER(unsigned long long, "x7",
                                                    "=r"));
                            goto LABEL_67;
                          }
                        }
                      }
                      v57 = 32;
                      goto LABEL_66;
                    }
                  }
                }
                v48 = 32;
                goto LABEL_53;
              }
            }
          }
          v37 = 32;
          goto LABEL_40;
        }
      }
    }
    v28 = 32;
    goto LABEL_27;
  }
  return result;
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158ca00(__int64* a1, __int64 a2,
                                                    unsigned int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8[2];
  _QWORD v9[2];

  v3 = a1[1];
  v9[0] = *a1;
  v9[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1589ce0((__int64)v9, a2, a2, 1, 0, a3);
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    GameRoutine_1589ce0((__int64)v9, a2, a2, 1, 0, a3);
  }
  v5 = *a1;
  v6 = a1[1];
  v8[0] = v5;
  v8[1] = v6;
  if (v6 == 0) {
    return ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v8);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  ProcObeliskUnitMergeRouteSelectMenu_158c0d0(v8);
  return std___1___shared_weak_count___release_weak(v6);
}

__int64 ProcObeliskUnitMergeRouteSelectMenu_158cac0(_QWORD* a1, _QWORD* a2,
                                                    _QWORD* a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  _QWORD v11[2];

  v3 = a1[1];
  v11[0] = *a1;
  v11[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1589ce0((__int64)v11, (__int64)a2, (__int64)a3, 0, 1, 0);
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    GameRoutine_1589ce0((__int64)v11, (__int64)a2, (__int64)a3, 0, 1, 0);
  }
  v7 = *a1;
  v8 = a1[1];
  v10[0] = v7;
  v10[1] = v8;
  if (v8 == 0) {
    return GameRoutine_158b720((__int64)v10, a2, a3);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_158b720((__int64)v10, a2, a3);
  return std___1___shared_weak_count___release_weak(v8);
}

#pragma GCC visibility pop
