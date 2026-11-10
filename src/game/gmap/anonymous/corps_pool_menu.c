#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133ed80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1730dc0(void);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(void);
__int64 GameRoutine_9726e0(_QWORD);
__int64 GmapCorpsMenu_172a860(__int64, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_sound_PlayCursorHorizontalSe(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ada5b4;
extern __int64 (*GameData_20b5010[])();
extern __int64 (*GameData_20b52f0[])();
extern __int64 (*game_gmap_anonymous_CorpsMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_PoolCorpsMenuItem_vtable[])();
extern __int64 GameData_20b3420;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_21319e8[10];
__int64 CorpsPoolMenu_Destructor(__int64 a1);
__int64 CorpsPoolMenu_DeletingDestructor(__int64 a1);
__int64 CorpsPoolMenu_Unknown107(__int64* a1);
__int64 CorpsPoolMenu_Unknown128(_QWORD* a1);
__int64 CorpsPoolMenu_Unknown143(_QWORD* a1);
__int64 CorpsPoolMenu_Unknown144(__int64 a1);
__int64 CorpsPoolMenu_Unknown146(__int64 a1);
bool CorpsPoolMenu_Unknown147(__int64 a1);
__int64 CorpsPoolMenu_Unknown161(__int64 a1);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788690(_QWORD, _QWORD);
__int64 GameRoutine_18422d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20b5470[])();
extern __int64 GameData_20b33d8;
extern __int64 game_g_game_setting;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 CorpsPoolMenu_Unknown8(__int64 a1, char a2);
__int64 game_gmap_anonymous_CorpsPoolMenu_OnInit_closure_Invoke(__int64 result,
                                                                _QWORD* a2,
                                                                int* a3);
__int64 game_gmap_anonymous_CorpsPoolMenu_SortAndFilter_closure_Invoke_1730980(
    __int64 a1, __int64* a2);
bool game_gmap_anonymous_CorpsPoolMenu_SortAndFilter_closure_Invoke_1730ae0(
    __int64 a1, _QWORD* a2, __int64* a3);
__int64 CorpsPoolMenu_1730c70(_QWORD* a1, __int64 a2, unsigned int* a3);
__int64 game_gmap_anonymous_CorpsPoolMenu_MoveTab(__int64 a1, __int64 a2,
                                                  __int64 a3);
bool game_gmap_anonymous_CorpsPoolMenu_MoveTab_closure_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1788420_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1788420");
__int64 game_gmap_anonymous_CorpsPoolMenu_MoveTab_alt1(
    _QWORD, _QWORD,
    _QWORD) __asm__("game_gmap_anonymous_CorpsPoolMenu_MoveTab");
__int64 CorpsPoolMenu_Unknown7(__int64 a1, char a2);
__int64
game_gmap_anonymous_CorpsPoolMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo(_QWORD*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_172f060(__int64*);
extern __int64 (*GameData_20b5370[])();
extern __int64 (*GameData_20b53f0[])();
extern __int64 (*GameData_20b6268[])();
extern __int64 (*GameData_20b62e8[])();
__n128 game_gmap_anonymous_CorpsPoolMenu_SortAndFilter(__int64 a1);
__int64 CorpsPoolMenu_Unknown141(__int64 a1);
__int64 CorpsManager_9726e0(__int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");

__int64 CorpsPoolMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1080) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 CorpsPoolMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 1072);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1080) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64 CorpsPoolMenu_Unknown107(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
  v3 = *a1;
  if (*(_BYTE*)(v2 + 410) != 1) {
    return (*(__int64 (**)(__int64*))(v3 + 1144))(a1);
  }
  v4 = (*(__int64 (**)(__int64*))(v3 + 1120))(a1);
  if ((_DWORD)v4 != 0 && (*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    game_sound_PlayCursorHorizontalSe(v4);
    v5 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
    GameRoutine_17871c0(v5, 2, 1);
  }
  return 0;
}

__int64 CorpsPoolMenu_Unknown128(_QWORD* a1)
{
  __int64 result;
  int* v3;
  int* v4;
  __int64* v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64* v19;
  unsigned __int64 i;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  unsigned __int64* v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  int* v34;
  char v35;
  struct {
    __int64 v36;
    void* v37;
    char gap48_[16];
    unsigned __int64* v38;
  } v36_;
  int v39;
  __int64 v40;

  result = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20b3420, 0);
  v3 = (int*)a1[134];
  v4 = (int*)a1[135];
  v40 = result;
  if (v3 != v4) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = *(_DWORD*)(result + 376);
    v34 = v4;
    v33 = v6;
    do {
      v7 = *v3;
      if (*v3 != v6) {
        if (v7 != -1) {
          v8 = 1;
          v35 = 0;
          v39 = 1;
          if ((v7 & 0x80000000) == 0) {
            v9 = *(_QWORD*)(*GameData_212c790 + 8);
            v10 = *(__int64**)(v9 + 8);
            v11 = *(__int64**)(v9 + 16);
            if (v10 != v11) {
              while (1) {
                v13 = *v10++;
                v12 = v13;
                if (*(_DWORD*)(v13 + 84) == v7) {
                  break;
                }
                if (v10 == v11) {
                  v8 = 1;
                  goto LABEL_28;
                }
              }
              v26 = (unsigned __int64*)fw_memory_HeapManager_Allocate_alt1(
                  *v5, 48, 16, 0);
              v36_.v38 = v26;
              *v26 = (unsigned __int64)GameData_20b52f0;
              v26[1] = (unsigned __int64)&v40;
              v26[2] = (unsigned __int64)v3;
              v26[3] = (unsigned __int64)&v39;
              v26[4] = (unsigned __int64)&v35;
              v26[5] = (unsigned __int64)a1;
              Troop_133ed80(v12, (__int64)&v36_.v36);
              if (v36_.v38 == (unsigned __int64*)&v36_.v36) {
                v27 = 32;
              LABEL_25:
                (*(void (**)(__int64))(*v36_.v38 + v27))((__int64)v36_.v38);
              }
              else if (v36_.v38 != nullptr) {
                v27 = 40;
                goto LABEL_25;
              }
              v8 = v39;
            }
          }
        LABEL_28:
          while (2) {
            v36_.v37 = &GameData_1ada5b4;
            result = game_HashString_alt1((__int64)&GameData_1ada5b4);
            v28 = game_GameModeData_instance_;
            v36_.v36 = result;
            if (game_GameModeData_instance_ != 0) {
              result = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)&v36_.v36);
              if (result != 0) {
                v28 = *(_DWORD*)(result + 32);
                goto LABEL_31;
              }
              if (v8 > 0) {
                goto LABEL_3;
              }
            }
            else {
            LABEL_31:
              if (v8 > v28) {
                goto LABEL_3;
              }
            }
            v29 = fw_memory_HeapManager_Allocate_alt1(*v5, 120, 16, 0);
            v30 = *v3;
            v31 = v39;
            v32 = v40;
            *(_WORD*)(v29 + 16) = 0;
            *(_DWORD*)(v29 + 40) = 0;
            *(_QWORD*)(v29 + 64) = 0;
            *(_QWORD*)(v29 + 72) = 0;
            *(_QWORD*)(v29 + 48) = 0;
            *(_QWORD*)(v29 + 56) = 0;
            *(_WORD*)(v29 + 80) = 257;
            *(_BYTE*)(v29 + 82) = 1;
            *(_BYTE*)(v29 + 104) = 0;
            *(_BYTE*)(v29 + 116) = 0;
            *(_QWORD*)v29 = game_gmap_anonymous_CorpsMenuItem_vtable;
            *(_QWORD*)(v29 + 8) = 0;
            *(_DWORD*)(v29 + 108) = v30;
            *(_DWORD*)(v29 + 112) = v31;
            LOBYTE(v30) = v35;
            *(_QWORD*)(v29 + 88) = v32;
            *(_QWORD*)(v29 + 96) = 0;
            if ((v30 & 1) == 0) {
              *(_BYTE*)(v29 + 116) = 1;
              v35 = 1;
            }
            BasicMenuCursor_16e0c00_alt1(a1, v29);
            v8 = ++v39;
            continue;
          }
        }
        v14 = fw_memory_HeapManager_Allocate_alt1(*v5, 120, 16, 0);
        v15 = v40;
        v16 = (_QWORD*)v14;
        *(_WORD*)(v14 + 16) = 0;
        *(_DWORD*)(v14 + 40) = 0;
        *(_QWORD*)(v14 + 48) = 0;
        *(_QWORD*)(v14 + 56) = 0;
        *(_QWORD*)(v14 + 64) = 0;
        *(_QWORD*)(v14 + 72) = 0;
        *(_WORD*)(v14 + 80) = 257;
        *(_BYTE*)(v14 + 82) = 1;
        *(_BYTE*)(v14 + 104) = 0;
        *(_BYTE*)(v14 + 116) = 0;
        *(_QWORD*)(v14 + 88) = v15;
        *(_QWORD*)(v14 + 96) = 0;
        *(_QWORD*)(v14 + 108) = -1;
        v17 = a1[43];
        *v16 = game_gmap_anonymous_EmptyMenuItem_vtable;
        v16[1] = 0;
        if (v17 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
          a1[43] = 0;
        }
        v18 = *v5;
        v16[1] = a1;
        a1[43] = v16;
        v39 = 1;
        v19 = (unsigned __int64*)fw_memory_HeapManager_Allocate_alt1(v18, 40,
                                                                     16, 0);
        v36_.v38 = v19;
        *v19 = (unsigned __int64)GameData_20b5010;
        v19[1] = (unsigned __int64)a1;
        v19[2] = (unsigned __int64)&v40;
        v19[3] = (unsigned __int64)v3;
        v19[4] = (unsigned __int64)&v39;
        CorpsManager_9726e0((__int64)&v36_.v36);
        (*(void (**)(unsigned __int64*))(*v19 + 40))(v19);
        for (i = 0;; ++i) {
          v36_.v37 = &GameData_1ada5b4;
          result = game_HashString_alt1((__int64)&GameData_1ada5b4);
          v21 = game_GameModeData_instance_;
          v36_.v36 = result;
          if (game_GameModeData_instance_ != 0) {
            result = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v36_.v36);
            if (result != 0) {
              v21 = *(int*)(result + 32);
            }
            else {
              v21 = 0;
            }
          }
          if (((__int64)(a1[135] - a1[134]) >> 2) * v21 <= i) {
            break;
          }
          v22 = fw_memory_HeapManager_Allocate_alt1(*v5, 120, 16, 0);
          v23 = *v3;
          v24 = v40;
          v25 = v39;
          *(_WORD*)(v22 + 16) = 0;
          *(_DWORD*)(v22 + 40) = 0;
          *(_QWORD*)(v22 + 64) = 0;
          *(_QWORD*)(v22 + 72) = 0;
          *(_QWORD*)(v22 + 48) = 0;
          *(_QWORD*)(v22 + 56) = 0;
          *(_WORD*)(v22 + 80) = 257;
          *(_BYTE*)(v22 + 82) = 1;
          *(_BYTE*)(v22 + 104) = 0;
          *(_BYTE*)(v22 + 116) = 0;
          *(_QWORD*)v22 = game_gmap_anonymous_PoolCorpsMenuItem_vtable;
          *(_QWORD*)(v22 + 8) = 0;
          *(_QWORD*)(v22 + 88) = v24;
          *(_QWORD*)(v22 + 96) = 0;
          *(_DWORD*)(v22 + 108) = v23;
          *(_DWORD*)(v22 + 112) = v25;
          BasicMenuCursor_16e0c00_alt1(a1, v22);
          ++v39;
        }
      LABEL_3:
        v4 = v34;
        v6 = v33;
      }
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

__n128 game_gmap_anonymous_CorpsPoolMenu_SortAndFilter(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  int* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  int v17;

  if (*(int*)(a1 + 656) < 1) {
    v4 = *(int**)(a1 + 1072);
  }
  else {
    v2 = *(_QWORD*)(a1 + 672);
    v3 = *(int*)(a1 + 660);
    if (v3 < (*(_QWORD*)(a1 + 680) - v2) >> 2) {
      v3 = *(int*)(v2 + 4 * v3);
    }
    v4 = (int*)(*(_QWORD*)(a1 + 1072) + 4 * v3);
  }
  v5 = *v4;
  v13_.v14 = v13_.v13;
  v17 = v5;
  v15_.v15[0] = GameData_20b5370;
  v15_.v15[1] = &v17;
  v15_.v16 = v15_.v15;
  v13_.v13[0] = GameData_20b53f0;
  v13_.v13[1] = a1;
  BasicMenu_16e1f40(a1, (__int64)v15_.v15, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v6 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v6))((__int64)v13_.v14);
LABEL_11:
  if (v15_.v16 == v15_.v15) {
    v7 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v7))((__int64)v15_.v16);
LABEL_16:
  if (*(int*)(a1 + 656) < 1) {
    v10 = *(_DWORD**)(a1 + 1072);
  }
  else {
    v8 = *(_QWORD*)(a1 + 672);
    v9 = *(int*)(a1 + 660);
    if (v9 < (*(_QWORD*)(a1 + 680) - v8) >> 2) {
      v9 = *(int*)(v8 + 4 * v9);
    }
    v10 = (_DWORD*)(*(_QWORD*)(a1 + 1072) + 4 * v9);
  }
  v11 = a1 + 952;
  if (*v10 == -1) {
    ui_LayoutAccessor_SetPaneVisible(v11, (__int64)"N_Corps", 0);
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(v11, (__int64)"N_Corps", 1);
    game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo((_QWORD*)a1);
  }
  return GameRoutine_172f060((__int64*)a1);
}

__int64 CorpsPoolMenu_Unknown141(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  const char* v12;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0) {
    v1 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_20b3420, 0);
  }
  if (*(_BYTE*)(v1 + 409) != 1) {
    return 3;
  }
  v12 = "MID_CorpsMenu_Cancel_Confirm";
  v10_.v10[0] = GameData_20b6268;
  v6_.v7 = v6_.v6;
  v10_.v11 = v10_.v10;
  v8_.v9 = v8_.v8;
  v8_.v8[0] = GameData_20b62e8;
  v6_.v6[0] = GameData_20b62e8;
  MapSortieMenu_871860(v1, (__int64)&v12, (__int64)v10_.v10, (__int64)v8_.v8,
                       (__int64)v6_.v6);
  if (v6_.v7 == v6_.v6) {
    v2 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v2))((__int64)v6_.v7);
LABEL_10:
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_15;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_15:
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_19;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
  }
  return 11;
}

__int64 CorpsPoolMenu_Unknown143(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0) {
    v2 = a1[132];
    if ((*(_BYTE*)(v2 + 356) & 1) == 0) {
      v3 = __dynamic_cast(v2, GameData_21319e8[0], &GameData_20b3420, 0);
      v4 = GmapCorpsMenu_172a860(v3, 1u);
      game_sound_PlayCursorHorizontalSe(v4);
    }
  }
  return 0;
}

__int64 CorpsPoolMenu_Unknown144(__int64 a1)
{
  if ((*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 | *(_DWORD*)(a1 + 660)) !=
      0) {
    return GameRoutine_1730dc0();
  }
  else {
    return GameRoutine_1788420();
  }
}

__int64 CorpsPoolMenu_Unknown146(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0 &&
      *(_BYTE*)((v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                     &GameData_20b3420, 0)) +
                410) == 1) {
    v3 = 2;
    v4 = 0;
  }
  else {
    v2 = v1;
    v4 = 1;
    v3 = *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                    1064LL) == 0;
  }
  return GameRoutine_17871c0(v2, v3, v4);
}

bool CorpsPoolMenu_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

__int64 CorpsPoolMenu_Unknown161(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;

  if (*(int*)(a1 + 656) < 1) {
    return **(unsigned int**)(a1 + 1072);
  }
  v1 = *(_QWORD*)(a1 + 672);
  v2 = *(int*)(a1 + 660);
  if (v2 < (*(_QWORD*)(a1 + 680) - v1) >> 2) {
    v2 = *(int*)(v1 + 4 * v2);
  }
  return *(unsigned int*)(*(_QWORD*)(a1 + 1072) + 4 * v2);
}

__int64 CorpsPoolMenu_Unknown7(__int64 a1, char a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 880);
  v3 = *(_DWORD*)(a1 + 484);
  v4 = a1 - 176;
  if ((*(_DWORD*)(v2 + 356) & 1 | v3) != 0) {
    return game_gmap_anonymous_CorpsPoolMenu_MoveTab_alt1(v4, 0xFFFFFFFFLL,
                                                          a2 & 1);
  }
  else {
    return GameRoutine_1788420_alt1(v4, a2 & 1);
  }
}

__int64 CorpsPoolMenu_Unknown8(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (*(_DWORD*)(a1 + 484) >= *(_DWORD*)(a1 + 480) &&
      (*(unsigned int (**)(__int64))(*(_QWORD*)v2 + 1120LL))(a1 - 176) != 0 &&
      (a2 & 1) != 0 && (*(_DWORD*)(*(_QWORD*)(a1 + 880) + 356LL) & 1) == 0) {
    return GameRoutine_1788690(v2, 1);
  }
  else {
    return game_gmap_anonymous_CorpsPoolMenu_MoveTab(v2, 1, a2 & 1);
  }
}

__int64 game_gmap_anonymous_CorpsPoolMenu_OnInit_closure_Invoke(__int64 result,
                                                                _QWORD* a2,
                                                                int* a3)
{
  __int64 v3;
  int v4;

  v3 = *a2;
  v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 1072LL) + 4LL * *a3);
  if ((v4 & 0x80000000) == 0) {
    return GameRoutine_18422d0(v3, (unsigned int)(v4 + 1), 3);
  }
  if (v3 != 0) {
    return GameRoutine_136a920(ui_Manager_instance_ + 1264, *a2, 0, 7,
                               "IconPageTab_GmapHub");
  }
  return result;
}

__int64

game_gmap_anonymous_CorpsPoolMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  int v6;
  _BYTE* v7;
  int v8;
  __int64 result;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 40);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v6 = **(_DWORD**)(a1 + 16);
  v7 = *(_BYTE**)(a1 + 32);
  v8 = **(_DWORD**)(a1 + 24);
  *(_QWORD*)(v5 + 88) = **(_QWORD**)(a1 + 8);
  *(_QWORD*)(v5 + 96) = v2;
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_BYTE*)(v5 + 104) = 0;
  *(_BYTE*)(v5 + 116) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_QWORD*)v5 = game_gmap_anonymous_CorpsMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_BYTE*)(v5 + 82) = 1;
  *(_DWORD*)(v5 + 108) = v6;
  *(_DWORD*)(v5 + 112) = v8;
  if ((*v7 & 1) == 0) {
    *(_BYTE*)(v5 + 116) = 1;
    *v7 = 1;
  }
  result = BasicMenuCursor_16e0c00(v3, v5);
  ++**(_DWORD**)(a1 + 24);
  return result;
}

__int64 game_gmap_anonymous_CorpsPoolMenu_SortAndFilter_closure_Invoke_1730980(
    __int64 a1, __int64* a2)
{
  __int64 result;
  _DWORD* v4;

  result = *a2;
  if (*a2 != 0) {
    v4 = *(_DWORD**)(a1 + 8);
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b33d8, 0);
    if (result != 0) {
      return *v4 == *(_DWORD*)(result + 108);
    }
  }
  return result;
}

bool game_gmap_anonymous_CorpsPoolMenu_SortAndFilter_closure_Invoke_1730ae0(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[3];
  _QWORD v22[3];

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  if (*a2 != 0) {
    v5 = __dynamic_cast(*a2, GameData_212e008[0], &GameData_20b33d8, 0);
    if (v4 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v5 = 0;
  if (v4 != 0) {
  LABEL_3:
    v4 = __dynamic_cast(v4, GameData_212e008[0], &GameData_20b33d8, 0);
  }
LABEL_4:
  CorpsPoolMenu_1730c70(v22, v3, v5);
  CorpsPoolMenu_1730c70(v21, v3, v4);
  v6 = v22[0];
  v7 = (__int64)(v22[1] - v22[0]) >> 3;
  v8 = (__int64)(v21[1] - v21[0]) >> 3;
  if (v8 >= v7) {
    v9 = (__int64)(v22[1] - v22[0]) >> 3;
  }
  else {
    v9 = (__int64)(v21[1] - v21[0]) >> 3;
  }
  if (v9 < 1) {
  LABEL_11:
    v16 = v7 < v8;
  }
  else {
    v10 = (unsigned __int64*)v22[0];
    v11 = (unsigned __int64*)v21[0];
    while (1) {
      v13 = *v10++;
      v12 = v13;
      v14 = *v11++;
      v15 = v12 >= v14;
      if (v12 != v14) {
        break;
      }
      if (--v9 == 0) {
        goto LABEL_11;
      }
    }
    v16 = !v15;
  }
  v17 = fw_memory_g_heap_manager_ptr;
  if (v21[0] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v21[0]);
  }
  if (v6 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v19, v6);
  }
  return v16;
}

__int64 CorpsPoolMenu_1730c70(_QWORD* a1, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  _BOOL8 v7;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *(_QWORD*)a3;
  v16 = 0;
  v17 = 0;
  v15 = 0;
  v7 = (*(__int64 (**)(unsigned int*))(v3 + 560))(a3) == 0;
  GameRoutine_19ef790(&v15, v7, 8);
  GameRoutine_19ef790(&v15, a3[27] ^ 0x80000000LL, 32);
  if (*(int*)(a2 + 656) < 1) {
    v10 = *(_DWORD**)(a2 + 1072);
  }
  else {
    v8 = *(_QWORD*)(a2 + 672);
    v9 = *(int*)(a2 + 660);
    if (v9 < (*(_QWORD*)(a2 + 680) - v8) >> 2) {
      v9 = *(int*)(v8 + 4 * v9);
    }
    v10 = (_DWORD*)(*(_QWORD*)(a2 + 1072) + 4 * v9);
  }
  if (*v10 == -1) {
    v11 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)a3 + 560LL))(a3);
    if (v11 != 0) {
      v12 = v11;
      GameRoutine_19ef790(&v15, *(unsigned __int8*)(v11 + 498) ^ 0x7FFFFFFFLL,
                          32);
      GameRoutine_19ef790(
          &v15, (unsigned int)*(__int16*)(v12 + 492) ^ 0x7FFFFFFFLL, 32);
      GameRoutine_19ef790(&v15,
                          *(unsigned __int16*)(*(_QWORD*)(v12 + 392) + 16LL) |
                              0x80000000LL,
                          32);
    }
  }
  result = GameRoutine_19ef790(&v15, a3[28] ^ 0x80000000LL, 32);
  v14 = v16;
  *a1 = v15;
  a1[1] = v14;
  a1[2] = v17;
  return result;
}

__int64 game_gmap_anonymous_CorpsPoolMenu_MoveTab(__int64 a1, __int64 a2,
                                                  __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 v17;

  if ((game_menu_PageTab_Move(a1 + 656, a2, a3) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  v6 = *(_QWORD*)(a1 + 232);
  v5 = *(_QWORD*)(a1 + 240);
  v7 = v15;
  v15[0] = GameData_20b5470;
  v15[1] = a1;
  v16 = v15;
  if (v5 == v6) {
    goto LABEL_14;
  }
  v8 = 0;
  v9 = GameData_212e008[0];
  do {
    v10 = *(_QWORD*)(v6 + 8 * v8);
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, v9, &GameData_20b33d8, 0);
      if (v11 == 0) {
        goto LABEL_4;
      }
      v17 = v11;
      if (v16 == nullptr) {
        GameRoutine_60a310(0, v4, v12);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v16 + 48LL))(v16, &v17) & 1) !=
          0) {
        break;
      }
      v6 = *(_QWORD*)(a1 + 232);
      v5 = *(_QWORD*)(a1 + 240);
    }
  LABEL_4:
    ++v8;
  } while (v8 < (v5 - v6) >> 3);
  v7 = v16;
  if (v16 != v15) {
    if (v16 != nullptr) {
      v14 = 40;
      goto LABEL_15;
    }
    return 13;
  }
LABEL_14:
  v14 = 32;
LABEL_15:
  (*(void (**)(_QWORD*, __int64))(*v7 + v14))(v7, v4);
  return 13;
}

bool game_gmap_anonymous_CorpsPoolMenu_MoveTab_closure_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8) + 344LL);
  if (v3 == *a2) {
    v4 = *(_QWORD*)(a1 + 8);
    v5 = *(_QWORD*)(v4 + 336);
    if (v5 != v2) {
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 168LL))(v5);
      }
      *(_QWORD*)(v4 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v4, 0, 1, 0);
      v6 = *(_QWORD*)(v4 + 336);
      if (v6 == 0) {
        v7 = 4;
      LABEL_12:
        *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v7;
        return v3 == v2;
      }
      (*(void (**)(__int64))(*(_QWORD*)v6 + 160LL))(v6);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v5 = *(_QWORD*)(v4 + 336);
    }
    v7 = 4;
    if (v5 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 120LL))(v5) & 1) != 0) {
        v7 = 4;
      }
      else {
        v7 = 0;
      }
    }
    goto LABEL_12;
  }
  return v3 == v2;
}

#pragma GCC visibility pop
