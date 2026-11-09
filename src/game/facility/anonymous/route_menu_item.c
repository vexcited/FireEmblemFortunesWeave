#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_9d5180(_QWORD* __return_ptr, _QWORD, _QWORD);
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
__int64 RouteMenuItem_Destructor(__int64 a1);
__int64 RouteMenuItem_DeletingDestructor(__int64 a1);
__int64 RouteMenuItem_Unknown55(__int64 a1);

__int64 RouteMenuItem_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;

  *(_QWORD*)a1 = game_facility_anonymous_RouteMenuItem_vtable;
  game_Unit_Destroy_Unit(a1 + 96);
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 RouteMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_facility_anonymous_RouteMenuItem_vtable;
  game_Unit_Destroy_Unit(a1 + 96);
  v2 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 RouteMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  char* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  _QWORD v41[2];
  _BYTE v42[20];

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 == 0) {
      LABEL_60:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
        return result;
      }
      v5 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 48), "IconSymbol");
      if (v5 != 0) {
        v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v6 = 0;
      }
      v7 = GameRoutine_158a7c0(*(unsigned __int8*)(a1 + 83));
      if (v6 != 0 && v7 != 0) {
        v8 = *(_BYTE**)(v7 + 48);
        if (v8 != nullptr && *v8 != 0) {
          v9 = v7;
          if ((GameRoutine_136afb0(ui_Manager_instance_ + 1264, 5) & 1) != 0) {
            GameRoutine_136a920(ui_Manager_instance_ + 1264, v6, 0, 5,
                                *(_QWORD*)(v9 + 48));
          }
        }
      }
      GameRoutine_15e0120(v42);
      GameRoutine_15e0200(v42);
      v10 = ui_LayoutAccessor_FindPane(v3, "Face0");
      if (v10 != 0) {
        v10 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameRoutine_1840740(v10, 0, *(_QWORD*)(a1 + 2320), 6, 1);
      v41[0] = "L_Lv";
      v41[1] = 4;
      GameRoutine_9d5180(&v38, v3, v41);
      if (v39 != 0) {
        v11 = std___1___shared_weak_count_lock(v39);
        v12 = v38;
        if (v39 != 0) {
          std___1___shared_weak_count___release_weak(v39);
        }
        if (v11 != 0 && v12 != 0) {
          v13 = *(unsigned __int8*)(*(_QWORD*)(a1 + 2320) + 498LL);
          GameRoutine_1890220(v12, v13, v13, 99, 1, 0, 0xFFFFFFFFLL);
        }
        else if (v11 == 0) {
          goto LABEL_24;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
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
      if (ui_LayoutAccessor_FindTextBox(v3, "T_Lv") != 0) {
        v18 = Pane_58f8a0();
        if (v18 != 0) {
          *(_DWORD*)(v18 + 12) = v17;
        }
      }
      v14 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
      v19 = 72;
      if (!v14) {
        v19 = 36;
      }
      v20 = *(_DWORD*)&v16[v19];
      if (ui_LayoutAccessor_FindTextBox(v3, "L_Lv/T_Num") != 0) {
        v21 = Pane_58f8a0();
        if (v21 != 0) {
          *(_DWORD*)(v21 + 12) = v20;
        }
      }
      v22 = *(unsigned __int8*)(a1 + 83);
      if (v22 == 10) {
        v23 = nullptr;
      }
      else {
        v23 = GameData_20660e0[v22];
      }
      v24 = game_util_Format("MCID_episode_%s", v23);
      v25 = strlen(v24);
      if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v25, v26, v27, v28, v29);
      }
      v30 = v25;
      if (v25 >= 0x17) {
        if ((v25 | 7) == 0x17) {
          v32 = 26;
        }
        else {
          v32 = (v25 | 7) + 1;
        }
        v31 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v32, 16, 0);
        v39 = v30;
        v40 = v31;
        v38 = v32 | 1;
      }
      else {
        LOBYTE(v38) = 2 * v25;
        v31 = (char*)&v38 + 1;
        if (v25 == 0) {
          goto LABEL_46;
        }
      }
      memmove(v31, v24, v30);
    LABEL_46:
      v31[v30] = 0;
      if ((v38 & 1) != 0) {
        v33 = v40;
      }
      else {
        v33 = (char*)&v38 + 1;
      }
      GameRoutine_1562060(v3, "T_Chapter", v33);
      if ((v38 & 1) != 0 && v40 != nullptr) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v34);
      }
      v14 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
      v35 = 72;
      if (!v14) {
        v35 = 36;
      }
      v36 = *(_DWORD*)&v16[v35];
      if (ui_LayoutAccessor_FindTextBox(v3, "T_Chapter") != 0) {
        v37 = Pane_58f8a0();
        if (v37 != 0) {
          *(_DWORD*)(v37 + 12) = v36;
        }
      }
      ui_LayoutAccessor_SetPaneVisible(v3, "IconMerge",
                                       *(unsigned __int8*)(a1 + 2328));
      result = GameRoutine_15e04f0(v42);
      goto LABEL_60;
    }
  }
  return result;
}

#pragma GCC visibility pop
