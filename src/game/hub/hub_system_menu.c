#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_hub_anonymous_SystemMenuItem_Info_Hub_vtable[])();
extern __int64 (*game_menu_SystemMenuItem_Inventory_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HubSystemMenu_Unknown143();
__int64 HubSystemMenu_Unknown144();
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_158a7c0(unsigned int);
__int64 GameRoutine_1592690(__int64, _BYTE*, _BYTE*, char*);
__int64 GameRoutine_15939a0(__int64 result);
__int64 GameRoutine_1840e20(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 game_GameModeData_instance_;
void GameRoutine_1593850(__int64*, __int64);
__int64 HubSystemMenu_cdffa0(__int64 a1);

__int64 HubSystemMenu_Unknown143()
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 17) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_SystemMenuItem_Inventory_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 HubSystemMenu_Unknown144()
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 17) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_hub_anonymous_SystemMenuItem_Info_Hub_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 88) = 5;
  return result;
}

__int64 HubSystemMenu_cdffa0(__int64 a1)
{
  __int64 result;
  __int64 v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v21;
  int v22;
  __int64** v23;
  __int64** v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64* v29;
    __int64 v30;
  } v29_;

  LayoutAccessor_1560070((void*)(&v29_.v29), (__int64*)(a1 + 848),
                         (__int64)"L_Chapter");
  result = v29_.v30;
  if (v29_.v30 != 0) {
    v6 = std___1___shared_weak_count_lock(v29_.v30);
    v7 = v29_.v29;
    result = v29_.v30;
    if (v29_.v30 != 0) {
      result = std___1___shared_weak_count___release_weak(v29_.v30);
    }
    if (v6 == 0 || v7 == nullptr) {
      if (v6 == 0) {
        return result;
      }
      goto LABEL_30;
    }
    if (game_GameModeData_instance_ != 0) {
      v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v9 != 0) {
        LOBYTE(v29_.v29) = *(_BYTE*)(*(_QWORD*)(v9 + 24) + 33LL);
        GameRoutine_1592690((__int64)v7, &v29_.v29, (_BYTE*)(v9 + 88),
                            (char*)(v9 + 89));
      }
    }
    v10 = ui_LayoutAccessor_FindPane(v7, (__int64)"BgStory");
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
      LABEL_16:
        v13 = *(unsigned __int8*)(v12 + 15);
        goto LABEL_19;
      }
    }
    else {
      v11 = 0;
      v12 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_16;
      }
    }
    v13 = 0;
  LABEL_19:
    v14 = GameRoutine_158a7c0(v13);
    GameRoutine_1840e20(v11, v14);
    if (*GameData_212c790 != 0) {
      v21 = *(_QWORD*)(*GameData_212c790 + 8);
      v22 = *(_DWORD*)(v21 + 56);
      v23 = *(__int64***)(v21 + 8);
      v24 = *(__int64***)(v21 + 16);
      if (v22 < 0) {
        for (; v23 != v24; ++v23) {
          v25 = *v23;
          if ((*v23)[12] == 0 && v25[69] == 0) {
            goto LABEL_36;
          }
        }
      }
      else if (v23 != v24) {
        while (1) {
          v26 = *v23++;
          v25 = v26;
          if (*((_DWORD*)v26 + 21) == v22) {
            break;
          }
          if (v23 == v24) {
            goto LABEL_26;
          }
        }
      LABEL_36:
        v27 = *v25;
        goto LABEL_27;
      }
    }
  LABEL_26:
    v27 = 0;
  LABEL_27:
    GameRoutine_1593850(v7, v27);
    v28 = ui_LayoutAccessor_FindPane(v7, (__int64)"IconSpot");
    if (v28 != 0) {
      v28 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d678[0], 0);
    }
    result = GameRoutine_15939a0(v28);
  LABEL_30:
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
