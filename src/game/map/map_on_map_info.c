#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15fbc40(__int64, __int64);
__int64 GameRoutine_15fc820(_QWORD, _QWORD);
__int64 GameRoutine_15ffb10(__int64);
__int64 GameRoutine_16030a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_2065b58[])();
extern __int64 (*GameData_2066070[])();
extern __int64 (*game_map_MapOnMapInfo_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21ed080;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_1601ed0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 MapOnMapInfo_Destructor(_QWORD* a1);
__int64 MapOnMapInfo_16012a0(__int64 a1);
__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2);
__int64 MapOnMapInfo_Unknown4(__int64 result);
__int64 MapOnMapInfo_1601bf0(__int64 result);
__int64 MapOnMapInfo_1601d20(__int64 result);
__int64 MapOnMapInfo_Unknown5(__int64 result);
_QWORD* GameRoutine_15fba20(_QWORD* result, __int64, __int64);
__int64 GameRoutine_1842ce0(void);
__int64 Manager_136ac50(_QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64 (*GameData_2065ce0[])();
extern __int64 (*GameData_2065de0[])();
extern __int64 (*GameData_2065ee0[])();
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 MapOnMapInfo_DeletingDestructor(__int64 result);
_QWORD* game_map_MapOnMapInfo_IconBlink_Update_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602160(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602350(
    __int64 result, _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602540(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602730(
    __int64 result, _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602920(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602b10(
    __int64 result, _DWORD* a2);
_QWORD* game_map_MapOnMapInfo_Info_SetStatusIcon_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__int64 AssetTableFile_7e74e0(_QWORD);
__int64 GameRoutine_15fc1d0(_QWORD, _QWORD);
__int64 GameRoutine_15fc3b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15fc630(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0(_QWORD, _QWORD);
__int64 Layout_1364020(_QWORD, _QWORD, _QWORD);
__int64 Layout_579280(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f91de8[])();
extern __int64 (*MapOnMapInfo_1601d20_ptr[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d568[8];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e0e0[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_2130ec0[2];
extern __int64 GameData_2131678;
extern __int64 game_GameModeData_instance_;
__int64 MapOnMapInfo_15fbc40(__int64 a1, __int64 a2);
__int64 MapOnMapInfo_15fee80(__int64 a1, _QWORD* a2);
__int64 MapOnMapInfo_15ff4a0(__int64 a1);
__attribute__((swiftcall)) void MapOnMapInfo_1600600(PSEUDO_X8 x8_, __int64 a1,
                                                     _QWORD** a2, _QWORD* a3,
                                                     _QWORD* a4);

__int64 MapOnMapInfo_15fbc40(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  int v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 result;
  _QWORD v50[4];
  _QWORD* v51;
  int v52;

  v2 = *(_BYTE*)(a2 + 2088);
  *(_BYTE*)(a1 + 2392) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 2372) = v2;
  *(_DWORD*)(a1 + 2384) = -1;
  v5 = *(_QWORD*)(a2 + 392);
  if (v5 != 0) {
    v6 = *(_BYTE**)(v5 + 40);
    if (v6 != nullptr) {
      LOBYTE(v6) = *v6 != 0;
    }
    *(_BYTE*)(a1 + 2395) = (_BYTE)v6;
  }
  v7 = *(_QWORD*)(a1 + 8);
  if (v7 != 0) {
    v8 = std___1___shared_weak_count_lock(v7);
    v9 = ui_LayoutAccessor_empty__ptr[0];
    if (v8 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v9 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
        v9 = v10;
      }
    }
  }
  else {
    v9 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_15730d0(v9, a2);
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    v13 = ui_LayoutAccessor_empty__ptr[0];
    if (v12 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v13 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = v13;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
        v13 = v14;
      }
    }
  }
  else {
    v13 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_1562cf0(v13, "FaceDisable");
  v15 = game_8224a0(15);
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v15);
    v16 = v17 != 0 && *(_DWORD*)(v17 + 32) == 1;
  }
  *(_BYTE*)(a1 + 2393) = v16;
  if (*(_BYTE*)(a1 + 2395) == 1) {
    v18 = *(_QWORD*)(a1 + 8);
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock(v18);
      v20 = ui_LayoutAccessor_empty__ptr[0];
      if (v19 != 0) {
        if (*(_QWORD*)a1 != 0) {
          v20 = *(__int64**)a1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v21 = v20;
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
          v20 = v21;
        }
      }
    }
    else {
      v20 = ui_LayoutAccessor_empty__ptr[0];
    }
    v22 = LayoutAccessor_155fbe0(v20, "L_Face");
    LayoutAccessor_1562cf0(v22, "FaceDisable");
    v23 = ui_LayoutAccessor_FindPane(v22, "Face");
    if (v23 != 0) {
      v23 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
    }
    if ((GameRoutine_1840740(v23, 1, a2, 6, 1) & 1) != 0) {
      if (*(_BYTE*)(a1 + 2393) == 1) {
        v24 = *(_QWORD*)(a1 + 8);
        if (v24 != 0) {
          v25 = std___1___shared_weak_count_lock(v24);
          v26 = ui_LayoutAccessor_empty__ptr[0];
          if (v25 != 0) {
            if (*(_QWORD*)a1 != 0) {
              v26 = *(__int64**)a1;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v27 = v26;
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak(v25);
              v26 = v27;
            }
          }
        }
        else {
          v26 = ui_LayoutAccessor_empty__ptr[0];
        }
        LayoutAccessor_1562680(v26, "FaceEnable_Keep", 1.0f);
        LayoutAccessor_1562cf0(v22, "FaceEnable");
      }
      *(_BYTE*)(a1 + 2392) = 1;
    }
  }
  v28 = *(_QWORD*)(a2 + 1744);
  v29 =
      *(unsigned int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr);
  v30 = *(_QWORD*)(a2 + 1752) - v28;
  LODWORD(v50[0]) =
      *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) & 0xFFF;
  if (((v29 >> 5) & 0x7F) + 1 <= v30 >> 2 &&
      ((*(_DWORD*)(v28 + 4 * ((v29 >> 5) & 0x7F)) >> v29) & 1) != 0) {
    v31 = game_HasActiveSkill_843420(v50, a2 + 1744);
    v32 = *(_QWORD*)(a1 + 8);
    if (v32 == 0) {
    LABEL_47:
      v33 = ui_LayoutAccessor_empty__ptr[0];
      goto LABEL_54;
    }
  }
  else {
    v31 = 0;
    v32 = *(_QWORD*)(a1 + 8);
    if (v32 == 0) {
      goto LABEL_47;
    }
  }
  v34 = std___1___shared_weak_count_lock(v32);
  v33 = ui_LayoutAccessor_empty__ptr[0];
  if (v34 != 0) {
    if (*(_QWORD*)a1 != 0) {
      v33 = *(__int64**)a1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v35 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
      v33 = v35;
    }
  }
LABEL_54:
  ui_LayoutAccessor_SetPaneVisible(v33, "IconStrong", v31 & 1);
  v36 = *(_DWORD*)(a1 + 96);
  if ((v31 & 1) != 0) {
    if ((v36 & 8) != 0) {
      goto LABEL_60;
    }
    v37 = v36 | 8;
  }
  else {
    if ((v36 & 8) == 0) {
      goto LABEL_60;
    }
    v37 = v36 & 0xFFFFFFF7;
  }
  *(_DWORD*)(a1 + 96) = v37;
LABEL_60:
  GameRoutine_15fc1d0(a1, a2);
  v38 = *(_QWORD*)(a1 + 16);
  if (v38 != 0) {
    *(_BYTE*)(v38 + 88) &= ~1u;
  }
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a1 + 24);
  GameRoutine_15fc3b0(a1, a2, 0);
  v39 = *(_QWORD*)(a1 + 8);
  if (v39 != 0) {
    v40 = std___1___shared_weak_count_lock(v39);
    v41 = ui_LayoutAccessor_empty__ptr[0];
    if (v40 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v41 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v42 = v41;
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
        v41 = v42;
      }
    }
  }
  else {
    v41 = ui_LayoutAccessor_empty__ptr[0];
  }
  ui_LayoutAccessor_SetPaneVisible(v41, "IconTalk", 0);
  v43 = *(_QWORD*)(a1 + 8);
  if (v43 != 0) {
    v44 = std___1___shared_weak_count_lock(v43);
    v45 = ui_LayoutAccessor_empty__ptr[0];
    if (v44 != 0) {
      if (*(_QWORD*)a1 != 0) {
        v45 = *(__int64**)a1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v46 = v44;
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
        std___1___shared_weak_count___release_weak(v46);
      }
    }
  }
  else {
    v45 = ui_LayoutAccessor_empty__ptr[0];
  }
  v52 = 0;
  v50[0] = GameData_1f91de8;
  v50[1] = &v52;
  v51 = v50;
  game_UnitItemList_EachItem(a2 + 828, v50);
  if (v51 == v50) {
    v47 = 32;
  }
  else {
    if (v51 == nullptr) {
      goto LABEL_81;
    }
    v47 = 40;
  }
  (*(void (**)(__int64))(*v51 + v47))((__int64)v51);
LABEL_81:
  ui_LayoutAccessor_SetPaneVisible(v45, "IconItemDrop", v52 > 0);
  GameRoutine_15fc630(a1);
  if (*(_BYTE*)(a1 + 2395) == 1) {
    v48 = AssetTableFile_7e74e0(a2);
  }
  else {
    v48 = 0;
  }
  *(_QWORD*)(a1 + 2400) = v48;
  *(_DWORD*)(a1 + 2368) = *(_DWORD*)(a2 + 416);
  result = game_Unit_GetJob(a2);
  *(_DWORD*)(a1 + 2376) = *(unsigned __int16*)(result + 16);
  return result;
}

__int64 MapOnMapInfo_15fee80(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v20;

  v3 = *(_QWORD*)GameData_212d020[0];
  if (*(_QWORD*)GameData_212d020[0] == 0) {
    goto LABEL_24;
  }
  v4 = *(_QWORD*)(v3 + 104);
  if (v4 == 0 || (v5 = *(_QWORD*)(v3 + 96), v7 = *(_QWORD*)(v3 + 104),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16),
                                            1u, memory_order_relaxed),
                  v8 = std___1___shared_weak_count_lock(v7),
                  std___1___shared_weak_count___release_weak(v4), v8 == 0)) {
  LABEL_22:
    if (*(_QWORD*)(a1 + 128) != 0) {
      *(_QWORD*)(a1 + 128) = 0;
      *(_BYTE*)(a1 + 2396) = 0;
      LOBYTE(a2) = 1;
      return (unsigned __int8)a2 & 1;
    }
  LABEL_24:
    LOBYTE(a2) = 0;
    *(_BYTE*)(a1 + 2396) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    return (unsigned __int8)a2 & 1;
  }
  v9 = 1;
  if (v5 != 0) {
    *(_BYTE*)(a1 + 2396) = 1;
    if ((*(_BYTE*)(v5 + 16) & 1) != 0 &&
        (v10 = *(_QWORD*)(*GameData_212c878[0] + 64),
         (v11 = *(_QWORD*)(v10 + 8LL * *(unsigned __int16*)(v5 + 8))) != 0)) {
      a2 = (_QWORD*)*a2;
      v20 = 0x100000000LL;
      v12 = *(_QWORD*)(v10 + 8LL * *(unsigned __int16*)(v11 + 16));
      LOWORD(v20) = *(_WORD*)(v11 + 16);
      if (*(_BYTE*)(v12 + 73) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v13 = game_map_MapRandom_instance__ptr[0];
        v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v16 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v13 + 1) = v14;
        v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) = v17;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v20) =
            (16 * ((_WORD)v17 -
                   1000 * (unsigned __int16)((v17 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      if ((UnitItem_6e8bc0(&v20, a2) & 1) != 0) {
        if (*(_QWORD*)(a1 + 128) != v11) {
          v9 = 0;
          *(_QWORD*)(a1 + 128) = v11;
        LABEL_16:
          LOBYTE(a2) = 1;
          goto LABEL_18;
        }
        LOBYTE(a2) = 0;
        v9 = 0;
      }
      else {
        v9 = 1;
      }
    }
    else {
      v18 = *(_QWORD*)(v5 + 24);
      if (v18 != 0 && *(_BYTE*)(v18 + 104) == 2 &&
          *(_QWORD*)(a1 + 120) != v18) {
        *(_QWORD*)(a1 + 128) = 0;
        v9 = 0;
        *(_QWORD*)(a1 + 120) = *(_QWORD*)(v5 + 24);
        goto LABEL_16;
      }
    }
  }
LABEL_18:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 == 0) {
      return (unsigned __int8)a2 & 1;
    }
    goto LABEL_22;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  if ((v9 & 1) != 0) {
    goto LABEL_22;
  }
  return (unsigned __int8)a2 & 1;
}

__int64 MapOnMapInfo_15ff4a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    _QWORD v25[6];
    int v26;
    char gap100_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v25_;

  if (*GameData_212d568[0] == 0) {
    *GameData_212d568[0] = a1;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v2 = 0;
  v21 = a1 + 389120;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)a1 = game_map_MapOnMapInfo_vtable;
  *(_QWORD*)(a1 + 8) = MapOnMapInfo_1601d20_ptr;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = a1 + 72;
  *(_DWORD*)(a1 + 120) = 1065353216;
  v3 = GameData_2131678;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = -1;
  *(_QWORD*)(a1 + 152) = -1;
  v4 = v3 + 16;
  do {
    v5 = a1 + v2;
    *(_DWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 248) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    GameRoutine_6c2b50(a1 + v2 + 304);
    *(_DWORD*)(v5 + 2528) = 0;
    *(_BYTE*)(v5 + 2532) = 0;
    *(_QWORD*)(v5 + 2536) = 0;
    *(_QWORD*)(v5 + 2544) = -1;
    *(_QWORD*)(v5 + 2560) = 0;
    *(_DWORD*)(v5 + 2552) = 0;
    *(_WORD*)(v5 + 2556) = 0;
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)v6 = v4;
    v2 += 2448;
    *(_DWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_DWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_WORD*)(v6 + 80) = 0;
    *(_DWORD*)(v6 + 112) = -1082130432;
    *(_WORD*)(v6 + 116) = 0;
    *(_DWORD*)(v6 + 48) = 0x2000;
    *(_WORD*)(v6 + 136) = 0;
    *(_BYTE*)(v6 + 160) = 0;
    *(_BYTE*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 280) = 0;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 240) = 0;
    *(_QWORD*)(v6 + 248) = 0;
    *(_QWORD*)(v6 + 224) = 0;
    *(_QWORD*)(v6 + 232) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 192) = 0;
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 176) = 0;
    *(_QWORD*)(v6 + 184) = 0;
    *(_WORD*)(v6 + 108) = 256;
    *(_QWORD*)(v6 + 168) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_DWORD*)(v6 + 127) = 0;
    *(_DWORD*)(v6 + 292) = 2;
    *(_QWORD*)(v5 + 2576) = v6;
    *(_QWORD*)(v6 + 24) = 0;
    *(_QWORD*)(v5 + 2584) = 0xFFFFFFFF00000000LL;
    *(_QWORD*)(v5 + 2592) = 0x4220000000000000LL;
    *(_DWORD*)(v5 + 2600) = 0;
    *(_QWORD*)(v5 + 2568) = v6 + 24;
  } while (v2 != 391680);
  v7 = fw_memory_g_heap_manager_ptr;
  v25_.v27 = 0;
  v25_.v28 = 0;
  v25_.v29 = 0;
  v25_.v25[4] = 0;
  v25_.v25[5] = 0;
  v25_.v26 = 0;
  *(_OWORD*)(v21 + 2736) = (__typeof__(*(_OWORD*)(v21 + 2736))){0};
  *(_QWORD*)(v21 + 2736) = 1065353216;
  *(_DWORD*)(v21 + 2720) = 0;
  *(_WORD*)(v21 + 2756) = 0;
  *(_BYTE*)(v21 + 2758) = 0;
  v8 = *(_OWORD*)(v21 + 2736);
  *(_DWORD*)(v21 + 2752) = -1;
  *(_OWORD*)(v21 + 2736) = (unsigned __int64)v8;
  v25_.v25[0] = 0x800000018LL;
  v25_.v25[1] = 0x500000040LL;
  v25_.v25[2] = 0x10000000100000LL;
  v25_.v25[3] = 0;
  GameRoutine_1366bd0((void*)(&v23_.v23), (__int64)"Layout/Battle.arc",
                      (__int64)"Battle_UnitInfoOnMap", (__int64)v25_.v25);
  v9 = v23_.v23;
  v10 = v23_.v24;
  v11 = *(_QWORD*)(a1 + 32);
  v23_.v23 = 0;
  v23_.v24 = 0;
  *(_QWORD*)(a1 + 24) = v9;
  *(_QWORD*)(a1 + 32) = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 32);
  v22[0] = *(_QWORD*)(a1 + 24);
  v22[1] = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 40), v22);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0((_QWORD*)(a1 + 40), v22);
  }
  ui_LayoutAccessor_SetPriority(a1 + 40, -3);
  LayoutAccessor_155e830(a1 + 40, 1);
  if (*GameData_212d568[0] != 0) {
    LayoutAccessor_155e830(*GameData_212d568[0] + 40, 0);
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 40, (__int64)"L_UnitInfo00", 0);
  result = ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 40,
                                                 (__int64)"L_SubInfoNum", 0);
  v15 = v25_.v27;
  if (v25_.v27 != 0) {
    v16 = v25_.v28;
    if (v25_.v27 == v25_.v28) {
      goto LABEL_28;
    }
    v17 = v25_.v28;
    do {
      v18 = *(_BYTE*)(v17 - 24);
      v17 -= 24;
      if ((v18 & 1) != 0 && *(_QWORD*)(v16 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v19);
      }
      v16 = v17;
    } while (v17 != v15);
    v25_.v28 = v15;
    if (v25_.v27 != 0) {
    LABEL_28:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v20 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v20);
    }
  }
  return result;
}

__int64 MapOnMapInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;

  *a1 = game_map_MapOnMapInfo_vtable;
  a1[1] = GameData_2065b58;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = a1 + 48675;
  for (i = -391680; i != 0; i += 2448) {
    v7 = v5[301];
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    game_Unit_Destroy_Unit(v5 + 17);
    v8 = v5[7];
    if (v8 != 0) {
      v5[8] = v8;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
    v10 = v5[2];
    if (v10 != 0) {
      v5[3] = v10;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v10);
    }
    if (*v5 != 0) {
      std___1___shared_weak_count___release_weak(*v5);
    }
    v5 -= 306;
  }
  GameRoutine_155e140(a1 + 5);
  v12 = a1[17];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v14 = a1[4];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  *a1 = GameData_2066070;
  if ((_QWORD*)GameData_21ed080 == a1) {
    GameData_21ed080 = 0;
  }
  return result;
}

__attribute__((swiftcall)) void MapOnMapInfo_1600600(PSEUDO_X8 x8_, __int64 a1,
                                                     _QWORD** a2, _QWORD* a3,
                                                     _QWORD* a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* result;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  atomic_uchar* v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  __int64** v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64** v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;

  result = a2[1];
  if (result == nullptr) {
    goto LABEL_63;
  }
  result = (__int64*)std___1___shared_weak_count_lock(result);
  if (result == nullptr) {
    goto LABEL_63;
  }
  v11 = *a2;
  v12 = result;
  if (*a2 == nullptr) {
    goto LABEL_60;
  }
  v13 = v11[1];
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v14 = a4;
  v15 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v43 = v15;
  v16 = (atomic_uchar*)GameData_212dfd0;
  v17 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0) {
      v19 = __cxa_guard_acquire(v16);
      if ((_DWORD)v19 != 0) {
        *v17 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v19);
        __cxa_guard_release(v16);
      }
    }
    result = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (result == v17) {
      goto LABEL_21;
    }
    do {
      result = (__int64*)*result;
    } while (result != v17 && result != nullptr);
    if (result != nullptr) {
    LABEL_21:
      v20 = v14[29];
      if (v13 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v14 = (_QWORD*)v14[3];
  } while (v14 != nullptr);
  v20 = v43;
  if (v13 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  result = (__int64*)LayoutEx_579180(96);
  if (result == nullptr) {
    goto LABEL_60;
  }
  v21 = result;
  v22 = GameData_2130ec0[0];
  result[2] = (__int64)(result + 1);
  v44 = v20;
  *result = v22 + 16;
  result[1] = (__int64)(result + 1);
  result[9] = (__int64)(result + 9);
  result[10] = (__int64)(result + 9);
  LayoutEx_57b150();
  v23 = v21[3];
  LayoutEx_58d200(v23, *a3);
  Pane_58dee0(a4, v23);
  for (i = *(_QWORD*)(v13 + 80); i != v13 + 72; i = *(_QWORD*)(i + 8)) {
    v25 = LayoutEx_57cf40(v21, i - 40);
    if (v25 != 0) {
      Layout_1364020(a1, i - 216, v25);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64*))(
      *v11 + 16LL))((void*)&v45, v11, v21);
  result = v45;
  if (v45 != nullptr &&
      (result = (__int64*)__dynamic_cast(v45, GameData_212dfc0[0],
                                         GameData_212e0e0[0], 0)) != nullptr) {
    v47 = result;
    v48 = v46;
    v26 = &v45;
  }
  else {
    v26 = &v47;
  }
  *v26 = nullptr;
  v26[1] = nullptr;
  v27 = v46;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (__int64*)std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v47;
  if (v47 == nullptr) {
    v36 = v48;
    if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      result = (__int64*)std___1___shared_weak_count___release_weak(v36);
    }
    v37 = (__int64**)(v44 + 72);
    if (*(_QWORD*)(v44 + 80) != v44 + 72) {
      v38 = (__int64*)(*v37)[2];
      if (v38 == v21) {
        v39 = *game_g_frame_clock_ptr[0];
        Layout_13639a0(a1, (*v37)[2]);
        v40 = *v37;
        v41 = (__int64*)(*v37)[1];
        v42 = *v41;
        *(_QWORD*)(**v37 + 8) = v41;
        *v41 = *v40;
        *(_QWORD*)(v42 + 8) = v40;
        *v40 = v42;
        Layout_579280(v38, v39 + 568);
        (*(void (**)(__int64*))(*v38 + 8))(v38);
        result = (__int64*)LayoutEx_5791a0(v38);
      }
    }
  LABEL_60:
    v35 = 0;
    goto LABEL_61;
  }
  v29 = v48;
  v45 = v47;
  v46 = v48;
  if (v48 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                              memory_order_relaxed);
  }
  v30 = *(_QWORD*)(a1 + 2280);
  v31 = a1 + 2272;
  if (v30 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(__int64**)(v30 + 16) != v28) {
    v30 = *(_QWORD*)(v30 + 8);
    if (v30 == v31) {
      goto LABEL_44;
    }
  }
  if (v30 == v31) {
  LABEL_44:
    v32 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v32[2] = v28;
    v32[3] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(a1 + 2272);
    *v32 = v33;
    v32[1] = v31;
    *(_QWORD*)(v33 + 8) = v32;
    *(_QWORD*)(a1 + 2272) = v32;
    ++*(_QWORD*)(a1 + 2288);
    result =
        (__int64*)(*(__int64 (**)(__int64*, __int64**))(*v28 + 128))(v28, &v45);
    v29 = v46;
  }
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    result = (__int64*)std___1___shared_weak_count___release_weak(v29);
  }
  v34 = v48;
  *a5 = v47;
  a5[1] = (__int64*)v34;
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      result = (__int64*)std___1___shared_weak_count___release_weak(v34);
    }
  }
  v35 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 1),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v35 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64*))(*v12 + 16))(v12);
  result = (__int64*)std___1___shared_weak_count___release_weak(v12);
  if ((v35 & 1) == 0) {
  LABEL_63:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__int64 MapOnMapInfo_16012a0(__int64 a1)
{
  int v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[2];
  char* v58;

  v56 = ui_LayoutAccessor_FindPane(a1 + 40, "N_Root");
  v2 = 0;
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  do {
    v6 = game_util_Format("L_UnitInfo%03d", v2);
    v7 = strlen(v6);
    if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
      GameRoutine_60a1d0();
    }
    v8 = v7;
    if (v7 >= 0x17) {
      if ((v7 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v7 | 7) + 1;
      }
      v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
      v57[1] = v8;
      v58 = (char*)v9;
      v57[0] = v10 | 1;
    LABEL_11:
      memmove(v9, v6, v8);
      goto LABEL_12;
    }
    v9 = (__int64)v57 + 1;
    LOBYTE(v57[0]) = 2 * v7;
    if (v7 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    *(_BYTE*)(v9 + v8) = 0;
    if ((v57[0] & 1) != 0) {
      v11 = v58;
    }
    else {
      v11 = (char*)v57 + 1;
    }
    v12 = (__int64*)GameRoutine_155fbe0(a1 + 40, v11);
    if ((GameRoutine_155ea30(v12) & 1) == 0) {
      goto LABEL_36;
    }
    if (v12[2] == 0) {
      goto LABEL_33;
    }
    v13 = v12[1];
    if (v13 == 0) {
      goto LABEL_33;
    }
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 != 0) {
      v15 = *v12;
      if (*v12 != 0) {
        LODWORD(v9) = *(unsigned __int8*)(v15 + 24);
        v16 = v15 + 152;
        if ((_DWORD)v9 == 0) {
          v16 = 0;
        }
        v17 = v16 != v12[2];
      }
      else {
        v17 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (!v17) {
          goto LABEL_30;
        }
      }
      else {
        v19 = v14;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v19);
        if (!v17) {
        LABEL_30:
          if ((v9 & 1) == 0) {
            goto LABEL_33;
          }
          goto LABEL_31;
        }
      }
    }
    v18 = v12[1];
    if (v18 != 0 && *(_QWORD*)(v18 + 8) != -1) {
    LABEL_31:
      v20 = v12[2];
      if (v20 != 0) {
        v21 = *(_QWORD*)(v20 + 24);
        goto LABEL_34;
      }
    }
  LABEL_33:
    v21 = 0;
  LABEL_34:
    v22 = Pane_58df60(v56, v21);
    if ((unsigned __int64)v4 < v5) {
      *(_QWORD*)v4 = v21;
      v4 += 8;
    LABEL_36:
      if ((v57[0] & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_37:
      if (v58 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v58);
      }
      goto LABEL_2;
    }
    v24 = (char*)(v4 - v3);
    v25 = (v4 - v3) >> 3;
    v26 = v25 + 1;
    if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
      GameRoutine_1601ed0(v22);
    }
    if ((__int64)(v5 - (_QWORD)v3) >> 2 > v26) {
      v26 = (__int64)(v5 - (_QWORD)v3) >> 2;
    }
    if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v26;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        GameRoutine_60a210(v22);
      }
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v5 = v28 + 8 * v27;
    v29 = (char*)(v4 - v3);
    v30 = (__int64)&v24[v28 + -8 * v25];
    *(_QWORD*)&v24[v28] = v21;
    v4 = &v24[v28 + 8];
    memcpy(v30, v3, v29);
    if (v3 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v3);
    }
    v3 = (char*)v30;
    if ((v57[0] & 1) != 0) {
      goto LABEL_37;
    }
  LABEL_2:
    ++v2;
  } while (v2 != 160);
  if ((v4 - v3) >> 3 < 129) {
    v35 = 0;
  LABEL_63:
    result = GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, 0, v35);
  }
  else {
    v32 = (v4 - v3) >> 3;
    v33 = GameData_212c060;
    while (1) {
      v34 = GameRoutine_1a09d20(8 * v32, v33);
      if (v34 != 0) {
        break;
      }
      v35 = v32 >> 1;
      v36 = v32 > 1;
      v32 >>= 1;
      if (!v36) {
        goto LABEL_63;
      }
    }
    v38 = v34;
    GameRoutine_16030a0(v3, v4, (v4 - v3) >> 3, v34, v32);
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v38);
  }
  if (v3 != v4) {
    v40 = v3;
    do {
      v41 = *(_QWORD*)v40;
      v42 = *(_BYTE*)(*(_QWORD*)v40 + 88LL);
      *(_DWORD*)(v41 + 56) = 0;
      *(_BYTE*)(v41 + 88) = v42 | 0x10;
      v43 = *(_QWORD*)v40;
      v40 += 8;
      result = Pane_58dee0(v56, v43);
    } while (v40 != v4);
  }
  v44 = 0;
  v45 = a1 + 12349;
  v46 = a1 + 4980;
  v47 = a1 + 7428;
  do {
    v48 = a1 + v44;
    if (*(_BYTE*)(a1 + v44 + 2532) != 0 && (*(_BYTE*)(v48 + 2557) & 1) == 0) {
      *(_BYTE*)(v48 + 2532) = 0;
      v49 = (_QWORD*)(a1 + v44);
      v49[33] = 0;
      v49[34] = 0;
      v49[35] = 0;
      v49[36] = 0;
    }
    if (*(_BYTE*)(v46 + v44) != 0 && (*(_BYTE*)(v46 + v44 + 25) & 1) == 0) {
      v50 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v46 + v44) = 0;
      v50[339] = 0;
      v50[340] = 0;
      v50[341] = 0;
      v50[342] = 0;
    }
    if (*(_BYTE*)(v47 + v44) != 0 && (*(_BYTE*)(v47 + v44 + 25) & 1) == 0) {
      v51 = (_QWORD*)(a1 + v44);
      *(_BYTE*)(v47 + v44) = 0;
      v51[645] = 0;
      v51[646] = 0;
      v51[647] = 0;
      v51[648] = 0;
    }
    v52 = v47 + v44;
    if (*(_BYTE*)(v47 + v44 + 2448) != 0 && (*(_BYTE*)(v52 + 2473) & 1) == 0) {
      *(_BYTE*)(v52 + 2448) = 0;
      v53 = (_QWORD*)(a1 + v44);
      v53[951] = 0;
      v53[952] = 0;
      v53[953] = 0;
      v53[954] = 0;
    }
    if (*(_BYTE*)(v45 + v44 - 25) != 0 && (*(_BYTE*)(v45 + v44) & 1) == 0) {
      *(_BYTE*)(v45 + v44 - 25) = 0;
      v54 = (_QWORD*)(a1 + v44);
      v54[1257] = 0;
      v54[1258] = 0;
      v54[1259] = 0;
      v54[1260] = 0;
    }
    v44 += 12240;
  } while (v44 != 391680);
  if (v3 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v3);
  }
  return result;
}

__int64 MapOnMapInfo_16017e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  if (a2 != 0) {
    v2 = result + 160;
    v3 = -7504;
    v4 = -5056;
    v5 = 0;
    v6 = 9876;
    v7 = 4980;
    do {
      v8 = *(_QWORD*)(result + v5 + 168);
      if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1 &&
          *(_BYTE*)(result + v5 + 2532) != 0 &&
          *(unsigned __int8*)(result + v5 + 2532) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 160;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v10 = *(_QWORD*)(result + v5 + 2616);
      if (v10 != 0 && *(_QWORD*)(v10 + 8) != -1 &&
          *(_BYTE*)(result + v7) != 0 &&
          *(unsigned __int8*)(result + v7) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result + v5 + 2608;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v11 = *(_QWORD*)(result + v5 + 5064);
      if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1 &&
          *(_BYTE*)(result + v7 + 2448) != 0 &&
          *(unsigned __int8*)(result + v7 + 2448) ==
              *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v4;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v12 = *(_QWORD*)(result + v5 + 7512);
      if (v12 != 0 && *(_QWORD*)(v12 + 8) != -1 &&
          *(_BYTE*)(result + v6) != 0 &&
          *(unsigned __int8*)(result + v6) == *(unsigned __int8*)(a2 + 2088)) {
        v13 = result - v3;
        return GameRoutine_15fc820(v13, result + 391856);
      }
      v5 += 9792;
      v3 -= 9792;
      v6 += 9792;
      v4 -= 9792;
      v7 += 9792;
    } while (v5 != 391680);
    v14 = -9952;
    v15 = -7504;
    v16 = -5056;
    v17 = 12324;
    v18 = 0;
    v19 = 7428;
    v20 = 4980;
    while (1) {
      v21 = *(_QWORD*)(result + v18 + 168);
      if (v21 != 0 && *(_QWORD*)(v21 + 8) != -1 &&
          *(_BYTE*)(result + v18 + 2532) == 0) {
        v13 = result + v18 + 160;
        v26 = result;
        goto LABEL_50;
      }
      v22 = *(_QWORD*)(result + v18 + 2616);
      if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1 &&
          *(_BYTE*)(result + v20) == 0) {
        v26 = result;
        v13 = result + v18 + 2608;
        goto LABEL_50;
      }
      v23 = *(_QWORD*)(result + v18 + 5064);
      if (v23 != 0 && *(_QWORD*)(v23 + 8) != -1 &&
          *(_BYTE*)(result + v19) == 0) {
        v26 = result;
        v13 = result - v16;
        goto LABEL_50;
      }
      v24 = *(_QWORD*)(result + v18 + 7512);
      if (v24 != 0 && *(_QWORD*)(v24 + 8) != -1 &&
          *(_BYTE*)(result + v19 + 2448) == 0) {
        break;
      }
      v25 = *(_QWORD*)(result + v18 + 9960);
      if (v25 != 0 && *(_QWORD*)(v25 + 8) != -1 &&
          *(_BYTE*)(result + v17) == 0) {
        v26 = result;
        v13 = result - v14;
        goto LABEL_50;
      }
      v18 += 12240;
      v14 -= 12240;
      v17 += 12240;
      v15 -= 12240;
      v16 -= 12240;
      v19 += 12240;
      v20 += 12240;
      if (v18 == 391680) {
        v27 = result;
        v28 = a2;
        GameRoutine_15ffb10(result);
        a2 = v28;
        v26 = v27;
        v13 = v2 + 2448LL * *(int*)(v27 + 391840) - 2448;
        goto LABEL_50;
      }
    }
    v26 = result;
    v13 = result - v15;
  LABEL_50:
    GameRoutine_15fbc40(v13, a2);
    result = v26;
    return GameRoutine_15fc820(v13, result + 391856);
  }
  return result;
}

__int64 MapOnMapInfo_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601bf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391878) & 1) == 0) {
    if ((*(_DWORD*)(result + 391872) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391872) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 144);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 40, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 152) = v14;
        *(_BYTE*)(v1 + 2758) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391876) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_1601d20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v13;
  __int64 v14;
  _BYTE v15[32];

  v1 = result + 389120;
  if ((*(_BYTE*)(result + 391870) & 1) == 0) {
    if ((*(_DWORD*)(result + 391864) & 0x80000000) == 0) {
      *(_DWORD*)(result + 391864) = -1;
      return result;
    }
    v2 = *(_QWORD*)(result + 136);
    v3 = game_gameui_MenuAnimator_instance_;
    if (v2 == -1) {
      if (game_gameui_MenuAnimator_instance_ != 0) {
      LABEL_37:
        v13 = result;
        sprintf(v15, "%s%s", "Alpha", "Out");
        v14 = GameRoutine_156af20(v3, 4, 1, v13 + 32, 0, v15);
        result = v13;
      LABEL_39:
        *(_QWORD*)(result + 144) = v14;
        *(_BYTE*)(v1 + 2750) = 1;
        return result;
      }
    }
    else if (game_gameui_MenuAnimator_instance_ != 0) {
      if (v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
        *(_BYTE*)(result + 391868) = 1;
        return result;
      }
      goto LABEL_37;
    }
    v14 = -1;
    goto LABEL_39;
  }
  return result;
}

__int64 MapOnMapInfo_Unknown5(__int64 result)
{
  *(_DWORD*)(result + 391872) = 4;
  return result;
}

__int64 MapOnMapInfo_DeletingDestructor(__int64 result)
{
  *(_DWORD*)(result + 391864) = 4;
  return result;
}

_QWORD* game_map_MapOnMapInfo_IconBlink_Update_lambda0_Invoke(__int64 a1,
                                                              _DWORD* a2)
{
  _QWORD* result;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;

  result =
      *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (result != nullptr) {
    v4 = *(_QWORD**)(a1 + 8);
    if (((1 << *((_BYTE*)result + 104)) & 0x2080) != 0) {
      v5 = result[110];
      if (v5 != 0) {
        v6 = *((unsigned __int16*)result + 8);
        result = (_QWORD*)Manager_136ac50(ui_Manager_instance_ + 1264, 7, v5);
        if (result != nullptr) {
          return GameRoutine_15fba20(v4, v6, (__int64)result);
        }
      }
    }
    else if (*((_BYTE*)result + 104) == 0 && *((_BYTE*)result + 250) == 0) {
      v6 = *((unsigned __int16*)result + 8);
      result = (_QWORD*)GameRoutine_1842ce0();
      if (result != nullptr) {
        return GameRoutine_15fba20(v4, v6, (__int64)result);
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602160(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065ce0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda0_Invoke_1602350(
    __int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int v8;

  v2 = (unsigned int)*a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(result + 16);
    result = game_HasActiveSkill_843420(a2, v3 + 1744);
    if ((result & 1) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*a2 & 0xFFF));
      if (result != 0) {
        if (((1 << *(_BYTE*)(result + 104)) & 0x2080) != 0) {
          v7 = *(_QWORD*)(result + 880);
          if (v7 != 0) {
            v8 = *(unsigned __int16*)(result + 16);
            result = Manager_136ac50(ui_Manager_instance_ + 1264, 7, v7);
            if (result != 0) {
              return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8,
                                                  result);
            }
          }
        }
        else if (*(_BYTE*)(result + 104) == 0 && *(_BYTE*)(result + 250) == 0) {
          v8 = *(unsigned __int16*)(result + 16);
          result = GameRoutine_1842ce0();
          if (result != 0) {
            return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8, result);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602540(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065de0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda1_Invoke_1602730(
    __int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int v8;

  v2 = (unsigned int)*a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(result + 16);
    result = game_HasActiveSkill_843420(a2, v3 + 1744);
    if ((result & 1) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*a2 & 0xFFF));
      if (result != 0) {
        if (((1 << *(_BYTE*)(result + 104)) & 0x2080) != 0) {
          v7 = *(_QWORD*)(result + 880);
          if (v7 != 0) {
            v8 = *(unsigned __int16*)(result + 16);
            result = Manager_136ac50(ui_Manager_instance_ + 1264, 7, v7);
            if (result != 0) {
              return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8,
                                                  result);
            }
          }
        }
        else if (*(_BYTE*)(result + 104) == 0 && *(_BYTE*)(result + 250) == 0) {
          v8 = *(unsigned __int16*)(result + 16);
          result = GameRoutine_1842ce0();
          if (result != 0) {
            return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8, result);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602920(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 + 8;
  result = v12;
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v12[2] = v3;
  v7 = *(_QWORD*)(v6 + 24);
  v13 = v12;
  v12[0] = GameData_2065ee0;
  v12[1] = v4;
  v8 = *(_QWORD*)(v7 + 352);
  if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2) < 1) {
    goto LABEL_8;
  }
  v9 = 0;
  v10 = 0;
  do {
    if (v13 == nullptr) {
      GameRoutine_60a310(0, a2);
    }
    (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v8 + v9);
    v8 = *(_QWORD*)(v7 + 352);
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 360) - v8) >> 2));
  result = v13;
  if (v13 == v12) {
  LABEL_8:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v11))(
      result, a2, a3);
}

__int64 game_map_MapOnMapInfo_Info_SetBattleFactor_lambda2_Invoke_1602b10(
    __int64 result, _DWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int v8;

  v2 = (unsigned int)*a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1744);
  if (((v2 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v3 + 1752) - v4) >> 2 &&
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
    v5 = *(_QWORD*)(result + 16);
    result = game_HasActiveSkill_843420(a2, v3 + 1744);
    if ((result & 1) != 0) {
      result = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*a2 & 0xFFF));
      if (result != 0) {
        if (((1 << *(_BYTE*)(result + 104)) & 0x2080) != 0) {
          v7 = *(_QWORD*)(result + 880);
          if (v7 != 0) {
            v8 = *(unsigned __int16*)(result + 16);
            result = Manager_136ac50(ui_Manager_instance_ + 1264, 7, v7);
            if (result != 0) {
              return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8,
                                                  result);
            }
          }
        }
        else if (*(_BYTE*)(result + 104) == 0 && *(_BYTE*)(result + 250) == 0) {
          v8 = *(unsigned __int16*)(result + 16);
          result = GameRoutine_1842ce0();
          if (result != 0) {
            return (__int64)GameRoutine_15fba20((_QWORD*)(v5 + 16), v8, result);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_MapOnMapInfo_Info_SetStatusIcon_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2)
{
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;

  result =
      *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (result != nullptr) {
    v4 = *(_QWORD*)(a1 + 8);
    if (((1 << *((_BYTE*)result + 104)) & 0x2080) != 0) {
      v5 = result[110];
      if (v5 != 0) {
        v6 = *((unsigned __int16*)result + 8);
        result = (_QWORD*)Manager_136ac50(ui_Manager_instance_ + 1264, 7, v5);
        if (result != nullptr) {
          return GameRoutine_15fba20((_QWORD*)(v4 + 56), v6, (__int64)result);
        }
      }
    }
    else if (*((_BYTE*)result + 104) == 0 && *((_BYTE*)result + 250) == 0) {
      v6 = *((unsigned __int16*)result + 8);
      result = (_QWORD*)GameRoutine_1842ce0();
      if (result != nullptr) {
        return GameRoutine_15fba20((_QWORD*)(v4 + 56), v6, (__int64)result);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
