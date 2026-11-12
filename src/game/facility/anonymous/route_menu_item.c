#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_9d5180(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136afb0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_15e0120(_QWORD);
__int64 GameRoutine_15e0200(_QWORD);
__int64 GameRoutine_15e04f0(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1890220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 Pane_58f8a0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*game_facility_anonymous_RouteMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char* GameData_20660e0[8];
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64
RouteMenuItem_Destructor_alt1(__int64 a1) __asm__("RouteMenuItem_Destructor");
__int64 RouteMenuItem_DeletingDestructor_alt1(__int64 a1) __asm__(
    "RouteMenuItem_DeletingDestructor");
__int64 RouteMenuItem_DrawText(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_9d5180_alt1(PSEUDO_X8, __int64*,
                        _QWORD*) __asm__("GameRoutine_9d5180");
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_158a7c0_alt1(unsigned int) __asm__("GameRoutine_158a7c0");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 StatusNum_1890220(__int64, unsigned int, unsigned int, unsigned int,
                          char, char, int);
__int64 UnitUtil_15e0120(__int64);
__int64 UnitUtil_15e0200(__int64);
__int64 UnitUtil_15e04f0(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void LayoutAccessor_1562060(__int64*, __int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_Unit_Destroy_Unit_alt1(__int64) __asm__("game_Unit_Destroy_Unit");
void RouteMenuItem_Destructor(__int64 a1);
void RouteMenuItem_DeletingDestructor(__int64 a1);

void RouteMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_RouteMenuItem_vtable;
  game_Unit_Destroy_Unit_alt1(a1 + 96);
  v2 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
}

void RouteMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_anonymous_RouteMenuItem_vtable;
  game_Unit_Destroy_Unit_alt1(a1 + 96);
  v2 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, a1);
}

__int64 RouteMenuItem_DrawText(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  bool v14;
  __int64 v15;
  char* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
  } v37_;
  _QWORD v40[2];
  _BYTE v41[20];

  game_menu_GameMenuItem_DrawText_alt1((_QWORD*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
      LABEL_60:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        return result;
      }
      v5 = ui_LayoutAccessor_FindPane_alt1(*(__int64**)(a1 + 48),
                                           (__int64)"IconSymbol");
      if (v5 != 0) {
        v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v6 = 0;
      }
      v7 = GameRoutine_158a7c0_alt1(*(unsigned __int8*)(a1 + 83));
      if (v6 != 0 && v7 != 0) {
        v8 = *(_BYTE**)(v7 + 48);
        if (v8 != nullptr && *v8 != 0) {
          v9 = v7;
          if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v8) & 1) != 0) {
            Manager_136a920(ui_Manager_instance_ + 1264, v6, 0, 5u,
                            *(_BYTE**)(v9 + 48));
          }
        }
      }
      UnitUtil_15e0120((__int64)v41);
      UnitUtil_15e0200((__int64)v41);
      v10 = ui_LayoutAccessor_FindPane_alt1(v3, (__int64)"Face0");
      if (v10 != 0) {
        v10 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameHr_1840740(v10, 0, *(_QWORD*)(a1 + 2320), 6u, 1);
      v40[0] = "L_Lv";
      v40[1] = 4;
      GameRoutine_9d5180_alt1((void*)(&v37_.v37), v3, v40);
      if (v37_.v38 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v37_.v38);
        v12 = v37_.v37;
        if (v37_.v38 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v37_.v38);
        }
        if (v11 != 0 && v12 != 0) {
          v13 = *(unsigned __int8*)(*(_QWORD*)(a1 + 2320) + 498LL);
          StatusNum_1890220(v12, v13, v13, 0x63u, 1, 0, -1);
        }
        else if (v11 == 0) {
          goto LABEL_24;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
    LABEL_24:
      v14 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
      v15 = 72;
      v16 = (char*)GameData_212da30;
      if (!v14) {
        v15 = 36;
      }
      v17 = *(_DWORD*)((char*)GameData_212da30 + v15);
      v18 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Lv");
      if (v18 != 0) {
        v19 = Pane_58f8a0_alt1(v18);
        if (v19 != 0) {
          *(_DWORD*)(v19 + 12) = v17;
        }
      }
      v14 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
      v20 = 72;
      if (!v14) {
        v20 = 36;
      }
      v21 = *(_DWORD*)&v16[v20];
      v22 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"L_Lv/T_Num");
      if (v22 != 0) {
        v23 = Pane_58f8a0_alt1(v22);
        if (v23 != 0) {
          *(_DWORD*)(v23 + 12) = v21;
        }
      }
      v24 = *(unsigned __int8*)(a1 + 83);
      if (v24 == 10) {
        v25 = nullptr;
      }
      else {
        v25 = GameData_20660e0[v24];
      }
      v26 = game_util_Format_alt1("MCID_episode_%s", v25);
      v27 = strlen_alt1(v26);
      if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v28 = v27;
      if (v27 >= 0x17) {
        if ((v27 | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (v27 | 7) + 1;
        }
        v29 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v30, 16, 0);
        v37_.v38 = v28;
        v37_.v39 = v29;
        v37_.v37 = v30 | 1;
      }
      else {
        LOBYTE(v37_.v37) = 2 * v27;
        v29 = (char*)&v37_.v37 + 1;
        if (v27 == 0) {
          goto LABEL_46;
        }
      }
      memmove_alt1((__int64)v29, (__int64)v26, v28);
    LABEL_46:
      v29[v28] = 0;
      if ((v37_.v37 & 1) != 0) {
        v31 = v37_.v39;
      }
      else {
        v31 = (char*)&v37_.v37 + 1;
      }
      LayoutAccessor_1562060(v3, (__int64)"T_Chapter", (__int64)v31);
      if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v37_.v39);
      }
      v14 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
      v33 = 72;
      if (!v14) {
        v33 = 36;
      }
      v34 = *(_DWORD*)&v16[v33];
      v35 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Chapter");
      if (v35 != 0) {
        v36 = Pane_58f8a0_alt1(v35);
        if (v36 != 0) {
          *(_DWORD*)(v36 + 12) = v34;
        }
      }
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v3, (__int64)"IconMerge",
                                            *(_BYTE*)(a1 + 2328));
      result = UnitUtil_15e04f0((__int64)v41);
      goto LABEL_60;
    }
  }
  return result;
}

#pragma GCC visibility pop
