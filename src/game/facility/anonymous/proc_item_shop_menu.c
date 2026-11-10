#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* EmptyShopMenuItem_Buy_186b2c0(__int64*);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1571860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_186ad20(_QWORD*, _WORD*);
__int64 GameRoutine_186d3c0(_QWORD);
__int64 GameRoutine_186e010(_QWORD);
__int64 GameRoutine_186e140(_QWORD);
__int64 GameRoutine_1873720(void);
__int64 GameRoutine_18738e0(void);
__int64 GameRoutine_1873a40(void);
__int64 GameRoutine_1873c90(void);
__int64 GameRoutine_1873eb0(void);
__int64 GameRoutine_1874560(_QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 game_menu_BasicMenu_Unknown69(void);
__int64 game_menu_BasicMenu_Unknown78(void);
__int64 game_menu_BasicMenu_Unknown79(void);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayCursorHorizontalLeftSe(void);
__int64 game_sound_PlayCursorHorizontalRightSe(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ac31b0;
extern _UNKNOWN GameData_1af51c1;
extern __int64 GameData_20f20a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c650[5];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_226b338;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
void* ProcItemShopMenu_Unknown67(__int64 a1);
__int64 ProcItemShopMenu_Unknown151(__int64 a1);
__int64 ProcItemShopMenu_Unknown24(__int64 a1);
__int64 ProcItemShopMenu_Unknown69(__int64 result);
__int64 ProcItemShopMenu_Unknown76(__int64 a1);
__int64 ProcItemShopMenu_Unknown77(__int64 a1);
__int64 ProcItemShopMenu_Unknown78(__int64 a1);
__int64 ProcItemShopMenu_Unknown79(__int64 a1);
__int64 ProcItemShopMenu_Unknown84(__int64 a1);
__int64 ProcItemShopMenu_Unknown85(__int64 a1);
__int64 ProcItemShopMenu_Unknown104(__int64 a1, char a2);
__int64 ProcItemShopMenu_Unknown106(__int64 a1, char a2);
__int64 ProcItemShopMenu_Unknown108(__int64 a1, char a2);
__int64 ProcItemShopMenu_Unknown110(__int64 a1, char a2);
__int64 ProcItemShopMenu_Unknown143(_QWORD* a1, unsigned int a2, char a3);
__int64 ProcItemShopMenu_Unknown153(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 ProcItemShopMenu_Unknown154(_QWORD* a1, __int64 a2);
__int64 ProcItemShopMenu_Unknown155(__int64 a1, int a2);
__int64 ProcItemShopMenu_Unknown162(__int64 result, __int64* a2);
bool ProcItemShopMenu_Unknown150(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20f2600[])();
extern __int64 (*game_facility_ShopMenuItem_Buy_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d630[11];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 ProcItemShopMenu_Unknown135(__int64 a1, __int64* a2);
__int64 game_facility_anonymous_ProcItemShopMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64* a2);

void* ProcItemShopMenu_Unknown67(__int64 a1)
{
  __int64 v1;
  void* v2;
  int v3;

  v1 = *(_QWORD*)(a1 + 1064);
  if (v1 == 0) {
    return nullptr;
  }
  v2 = &GameData_1ac31b0;
  v3 = *(unsigned __int8*)(*(_QWORD*)(v1 + 24) + 64LL);
  if (v3 != 2) {
    v2 = nullptr;
  }
  if (v3 == 1) {
    return &GameData_1af51c1;
  }
  else {
    return v2;
  }
}

__int64 ProcItemShopMenu_Unknown151(__int64 a1)
{
  return (*(_QWORD*)(a1 + 1104) - *(_QWORD*)(a1 + 1096)) >> 2;
}

__int64 ProcItemShopMenu_Unknown24(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1160) != 0) {
    return 3;
  }
  else {
    return 2;
  }
}

__int64 ProcItemShopMenu_Unknown69(__int64 result)
{
  if ((*(_BYTE*)(result + 1160) & 1) == 0) {
    return game_menu_BasicMenu_Unknown69();
  }
  return result;
}

__int64 ProcItemShopMenu_Unknown76(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1160) == 1) {
    return game_sound_PlayCursorHorizontalLeftSe();
  }
  else {
    return game_menu_BasicMenu_Unknown78();
  }
}

__int64 ProcItemShopMenu_Unknown77(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1160) == 1) {
    return game_sound_PlayCursorHorizontalRightSe();
  }
  else {
    return game_menu_BasicMenu_Unknown79();
  }
}

__int64 ProcItemShopMenu_Unknown78(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1160) == 1) {
    return game_sound_PlayCursorHorizontalLeftSe();
  }
  else {
    return game_menu_BasicMenu_Unknown78();
  }
}

__int64 ProcItemShopMenu_Unknown79(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1160) == 1) {
    return game_sound_PlayCursorHorizontalRightSe();
  }
  else {
    return game_menu_BasicMenu_Unknown79();
  }
}

__int64 ProcItemShopMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v12;
  _QWORD v13[4];
  int v14;
  int v15;
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

  GameRoutine_1873c90();
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v13[0] = GameData_212e348 + 2;
  v13[1] = 0xFFFF0001FFFF0000LL;
  v13[2] = 0xFFFF0004FFFF0002LL;
  v13[3] = 0xFFFF0006FFFF0005LL;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v3 = GameRoutine_a4dbe0(v2, "MID_Shop_Price", 0, v13);
  if (v3 != 0) {
    v4 = v3;
    v5 = ui_LayoutAccessor_FindTextBox(a1 + 952, "Menu_T_Gold");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  if (*(_BYTE*)(a1 + 1160) == 1) {
    GameRoutine_1562cf0(a1 + 848, "Stock_On");
    v6 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    return GameRoutine_1571860(v6, 0, 1, 0, 0, 1);
  }
  else {
    GameRoutine_186e010(a1);
    v8 = *(_QWORD*)(a1 + 1064);
    v9 = (*(_QWORD*)(a1 + 1136) - *(_QWORD*)(a1 + 1128)) >> 3;
    v10 = GameRoutine_155fbe0(a1 + 848, "L_UnitInfo");
    if (v8 == 0 && (int)v9 < 1) {
      v12 = "Simple00";
    }
    else {
      v12 = "Info00";
    }
    return GameRoutine_1562cf0(v10, v12);
  }
}

__int64 ProcItemShopMenu_Unknown85(__int64 a1)
{
  GameRoutine_1873eb0();
  GameRoutine_186e140(a1);
  return GameRoutine_186d3c0(a1);
}

__int64 ProcItemShopMenu_Unknown104(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE v6[4];
  int v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 1160) == 1) {
    v4 = *(_QWORD*)(a1 + 1200);
    if (v4 != 0) {
      v8 = v2;
      v9 = v3;
      v7 = -1;
      v6[0] = a2 & 1;
      if (((*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)v4 + 48LL))(
               v4, &v7, v6) &
           1) != 0) {
        return 2;
      }
    }
  }
  else if ((a2 & 1) != 0) {
    return GameRoutine_18738e0();
  }
  return 0;
}

__int64 ProcItemShopMenu_Unknown106(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE v6[4];
  int v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 1160) == 1) {
    v4 = *(_QWORD*)(a1 + 1200);
    if (v4 != 0) {
      v8 = v2;
      v9 = v3;
      v7 = 1;
      v6[0] = a2 & 1;
      if (((*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)v4 + 48LL))(
               v4, &v7, v6) &
           1) != 0) {
        return 2;
      }
    }
  }
  else if ((a2 & 1) != 0) {
    return GameRoutine_1873a40();
  }
  return 0;
}

__int64 ProcItemShopMenu_Unknown108(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  _BYTE v6[4];
  int v7;
  __int64 v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 1160) == 1) {
    v4 = *(_QWORD*)(a1 + 1200);
    if (v4 != 0) {
      v8 = v2;
      v9 = v3;
      v7 = -1;
      v6[0] = a2 & 1;
      if (((*(__int64 (**)(__int64, int*, _BYTE*))(*(_QWORD*)v4 + 48LL))(
               v4, &v7, v6) &
           1) != 0) {
        return 2;
      }
    }
  }
  else if ((a2 & 1) != 0) {
    result = *(_QWORD*)(a1 + 336);
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 256LL))(result);
    }
    return result;
  }
  return 0;
}

__int64 ProcItemShopMenu_Unknown110(__int64 a1, char a2)
{
  __int64 v2;
  int v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  _DWORD v9[8];
  _DWORD* v10;
  const char* v11;

  if (*(_BYTE*)(a1 + 1160) == 1) {
    v2 = *(_QWORD*)(a1 + 1200);
    if (v2 != 0) {
      v9[0] = 1;
      LOBYTE(v11) = a2 & 1;
      if (((*(__int64 (**)(__int64, _DWORD*, const char**))(
               *(_QWORD*)v2 + 48LL))(v2, v9, &v11) &
           1) != 0) {
        return 2;
      }
    }
  }
  else if ((a2 & 1) != 0) {
    v5 = GameRoutine_186ad20((_QWORD*)(a1 + 1120), *(_WORD**)(a1 + 1064));
    if (v5 == 2) {
      if (*(_QWORD*)(a1 + 1064) != 0) {
        v6 = "MID_Shop_FullItem_Unit_Message";
      }
      else {
        v6 = "MID_Shop_FullItem_Transport_Message";
      }
      v11 = v6;
      v7 = GameRoutine_667ea0(a1, &v11);
      if (v7 == 0) {
        return 12;
      }
      v10 = nullptr;
      GameRoutine_6680e0(v9, v7 + 1248);
      if (v10 == v9) {
        v8 = 32;
      }
      else {
        if (v10 == nullptr) {
          return 12;
        }
        v8 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v10 + v8))();
      return 12;
    }
    if (v5 != 0) {
      return 1;
    }
    GameRoutine_186d3c0(a1);
    game_menu_BasicMenu_Unknown16dd9a0(a1);
    return 13;
  }
  return 0;
}

__int64 ProcItemShopMenu_Unknown135(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE v34[208];

  v3 = a1;
  if (*(_BYTE*)(a1 + 1160) != 1) {
    return game_menu_GameMenu_Unknown135(a1, a2);
  }
  v4 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v34, "%s%s", "Alpha", "In");
    a1 = ProcTransitionAnim_156af20(v4, 4, 0, v3 + 848, "Left", v34);
    v5 = a1;
  }
  else {
    v5 = -1;
  }
  v8 = (__int64*)a2[1];
  v7 = a2[2];
  if ((unsigned __int64)v8 >= v7) {
    v10 = *a2;
    v11 = (__int64)v8 - *a2;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      goto LABEL_42;
    }
    v13 = v7 - v10;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        goto LABEL_43;
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v5;
    v9 = (__int64*)(v16 + v11 + 8);
    a1 = memcpy(v18, v10, v11);
    *a2 = v18;
    a2[1] = (__int64)v9;
    a2[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19);
    }
  }
  else {
    *v8 = v5;
    v9 = v8 + 1;
  }
  v20 = game_gameui_MenuAnimator_instance_;
  a2[1] = (__int64)v9;
  if (v20 != 0) {
    sprintf(v34, "%s%s", "Alpha", "In");
    a1 = ProcTransitionAnim_156af20(v20, 4, 0, v3 + 848, "Right", v34);
    v9 = (__int64*)a2[1];
    v21 = a1;
  }
  else {
    v21 = -1;
  }
  v22 = a2[2];
  if ((unsigned __int64)v9 >= v22) {
    v24 = *a2;
    v25 = (__int64)v9 - *a2;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 == 0) {
      v27 = v22 - v24;
      if (v27 >> 2 > v26) {
        v26 = v27 >> 2;
      }
      if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
        v28 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v26;
      }
      if (v28 == 0) {
        v29 = 0;
      LABEL_37:
        v30 = v29 + 8 * v28;
        v31 = v29 + v25 - 8 * (v25 >> 3);
        *(_QWORD*)(v29 + v25) = v21;
        v23 = v29 + v25 + 8;
        memcpy(v31, v24, v25);
        *a2 = v31;
        a2[1] = v23;
        a2[2] = v30;
        if (v24 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v32);
        }
        goto LABEL_41;
      }
      if (v28 >> 61 == 0) {
        v29 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        goto LABEL_37;
      }
    LABEL_43:
      GameRoutine_60a210(a1);
    }
  LABEL_42:
    GameRoutine_874500();
  }
  *v9 = v21;
  v23 = (__int64)(v9 + 1);
LABEL_41:
  a2[1] = v23;
  snd_Fade_Fade_10c830(v34, 0.0f);
  snd_play_ff2d0((void*)(&v33), "SE_SYS_Window_Open", "SE_SYS_Window_Open", v34,
                 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v34);
}

__int64 ProcItemShopMenu_Unknown143(_QWORD* a1, unsigned int a2, char a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _BOOL8 v23;
  __int64 result;

  v4 = a1[42];
  if (v4 != 0) {
    v7 = __dynamic_cast(v4, GameData_212e008[0], &GameData_20f20a0, 0);
    if (v7 != 0) {
      v8 = v7;
      if ((GameData_226b338 & 1) != 0 || (*(_BYTE*)(v7 + 137) & 1) != 0) {
      LABEL_16:
        v15 = *(_QWORD*)(v8 + 56);
        if (v15 == 0) {
          goto LABEL_21;
        }
        v16 = std___1___shared_weak_count_lock(v15);
        if (v16 == 0) {
          goto LABEL_21;
        }
        v17 = *(__int64**)(v8 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v18 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v18);
        }
        if (v17 == nullptr) {
        LABEL_21:
          v17 = ui_LayoutAccessor_empty__ptr[0];
        }
        v19 = **(_QWORD**)(v8 + 120);
        if (*(_QWORD*)(*(_QWORD*)(v8 + 120) + 8LL) == v19) {
          v20 = GameData_212c650[0];
          v21 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_28;
          }
        }
        else {
          v20 = (__int64*)(*(_QWORD*)(*(_QWORD*)v19 + 24LL) + 32LL);
          v21 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_28;
          }
        }
        v22 = game_GameVariableTable_Find(*(_QWORD*)(v21 + 48), v20);
        if (v22 != 0) {
          v23 = (*(_BYTE*)(v22 + 32) & 0x80) == 0;
        LABEL_29:
          ui_LayoutAccessor_SetPaneVisible(v17, "IconNew", v23);
          goto LABEL_30;
        }
      LABEL_28:
        v23 = true;
        goto LABEL_29;
      }
      v9 = *(_QWORD**)(v7 + 120);
      if (v9[1] == *v9) {
        v10 = GameData_212c650[0];
        v11 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      else {
        v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v9 + 24LL) + 32LL);
        v11 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      v12 = game_GameVariableTable_Find(*(_QWORD*)(v11 + 48), v10);
      if (v12 != 0) {
        v13 = *(_DWORD*)(v12 + 32) | 0x80u;
      LABEL_12:
        if (v9[1] == *v9) {
          v14 = GameData_212c650[0];
        }
        else {
          v14 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v9 + 24LL) + 32LL);
        }
        game_VariableManager_SetFlag(v14, v13);
        goto LABEL_16;
      }
    LABEL_11:
      v13 = 128;
      goto LABEL_12;
    }
  }

LABEL_30:
  GameData_226b338 = 1;
  if (((*(__int64 (**)(_QWORD*))(*a1 + 1200LL))(a1) & 1) != 0 &&
      (game_menu_PageTab_Move(a1 + 82, a2, a3 & 1) & 1) != 0) {
    game_menu_BasicMenu_Unknown16de4d0(a1);
    result = 13;
  }
  else {
    result = 0;
  }
  GameData_226b338 = 0;
  return result;
}

bool ProcItemShopMenu_Unknown144(__int64 a1)
{
  return (*(_BYTE*)(a1 + 1160) & 1) == 0;
}

bool ProcItemShopMenu_Unknown150(__int64 a1)
{
  return *(_QWORD*)(a1 + 1096) != *(_QWORD*)(a1 + 1104);
}

__int64 ProcItemShopMenu_Unknown153(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v5;
  __int64** v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (*v18)(_QWORD);
  __int64 v19;
  _QWORD* v20;
  _BOOL4 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 (*v32)(_QWORD);
  __int64 v33;
  _QWORD* v34;
  _BOOL4 v35;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD v40[2];
  int v41;
  _BOOL4 v42;
  char v43;
  _QWORD v44[2];
  int v45;
  _BOOL4 v46;
  char v47;

  v38 = (*(__int64 (**)(_QWORD*))(*a2 + 560LL))(a2);
  v5 = (*(__int64 (**)(_QWORD*))(*a3 + 560LL))(a3);
  v6 = (__int64**)a2[15];
  v7 = (_QWORD*)a3[15];
  v37 = v5;
  v39 = v7;
  v9 = *v6;
  v8 = v6[1];
  if (v8 == *v6) {
    v21 = true;
  }
  else {
    v10 = 1;
    v11 = 0;
    do {
      v12 = *v9;
      v13 = *(_QWORD*)(*v9 + 24);
      v15 = *(_QWORD*)(v13 + 48);
      v14 = *(_QWORD*)(v13 + 56);
      if (v14 == v15) {
      LABEL_6:
        if (*(_BYTE*)(v12 + 107) != 0) {
          v11 += *(unsigned __int8*)(v12 + 107);
        }
        else {
          v10 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v15 != 0) {
            v16 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v17 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v15);
              if (v17 != 0) {
                v18 = *(__int64 (**)(_QWORD))(v17 + 72);
                v19 = *(_QWORD*)(v17 + 80);
                v20 = (_QWORD*)(v17 + (v19 >> 1));
                if ((v19 & 1) != 0) {
                  v18 = *(__int64 (**)(_QWORD))((char*)v18 + *v20);
                }
                LOBYTE(v5) = v18(v20);
              }
              else {
                LOBYTE(v5) = 1;
              }
            }
            if (*(_BYTE*)(v15 + 16) != ((v16 == 0) | v5 & 1)) {
              break;
            }
          }
          v15 += 24;
          if (v15 == v14) {
            goto LABEL_6;
          }
        }
      }
      ++v9;
    } while (v9 != v8);
    if (v11 * v10 < 1) {
      v21 = true;
    }
    else {
      LODWORD(v5) = GameRoutine_8a1dc0(v6);
      v21 = (int)v5 > 0;
    }
    v7 = v39;
  }
  v23 = (__int64*)*v7;
  v22 = (__int64*)v7[1];
  if (v22 == (__int64*)*v7) {
    v35 = true;
  }
  else {
    v24 = 1;
    v25 = 0;
    do {
      v26 = *v23;
      v27 = *(_QWORD*)(*v23 + 24);
      v28 = *(_QWORD*)(v27 + 48);
      v29 = *(_QWORD*)(v27 + 56);
      if (v29 == v28) {
      LABEL_27:
        if (*(_BYTE*)(v26 + 107) != 0) {
          v25 += *(unsigned __int8*)(v26 + 107);
        }
        else {
          v24 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v28 != 0) {
            v30 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v31 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v28);
              if (v31 != 0) {
                v32 = *(__int64 (**)(_QWORD))(v31 + 72);
                v33 = *(_QWORD*)(v31 + 80);
                v34 = (_QWORD*)(v31 + (v33 >> 1));
                if ((v33 & 1) != 0) {
                  v32 = *(__int64 (**)(_QWORD))((char*)v32 + *v34);
                }
                LOBYTE(v5) = v32(v34);
              }
              else {
                LOBYTE(v5) = 1;
              }
            }
            if (*(_BYTE*)(v28 + 16) != ((v30 == 0) | v5 & 1)) {
              break;
            }
          }
          v28 += 24;
          if (v28 == v29) {
            goto LABEL_27;
          }
        }
      }
      ++v23;
    } while (v23 != v22);
    v35 = v25 * v24 < 1 || (int)GameRoutine_8a1dc0(v39) > 0;
  }
  v45 = 0;
  v46 = v21;
  v47 = 1;
  v41 = 0;
  v42 = v35;
  v43 = 1;
  v44[0] = v38;
  v44[1] = 0;
  v40[0] = v37;
  v40[1] = 0;
  return GameRoutine_19ef8e0(v44, v40) & 1;
}

__int64 ProcItemShopMenu_Unknown154(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _BOOL8 v20;
  __int64 v21;
  void (*v22)(_QWORD*, __int64*);
  __int64* v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  a1[133] = a2;
  GameRoutine_1873720();
  EmptyShopMenuItem_Buy_186b2c0(a1 + 140);
  v3 = a1[42];
  if (v3 == 0) {
    goto LABEL_30;
  }
  v4 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20f20a0, 0);
  if (v4 == 0) {
    goto LABEL_30;
  }
  v5 = v4;
  if ((GameData_226b338 & 1) == 0 && (*(_BYTE*)(v4 + 137) & 1) == 0) {
    v6 = *(_QWORD**)(v4 + 120);
    if (v6[1] == *v6) {
      v7 = GameData_212c650[0];
      v8 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_11;
      }
    }
    else {
      v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v6 + 24LL) + 32LL);
      v8 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_11;
      }
    }
    v9 = game_GameVariableTable_Find(*(_QWORD*)(v8 + 48), v7);
    if (v9 != 0) {
      v10 = *(_DWORD*)(v9 + 32) | 0x80u;
    LABEL_12:
      if (v6[1] == *v6) {
        v11 = GameData_212c650[0];
      }
      else {
        v11 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v6 + 24LL) + 32LL);
      }
      game_VariableManager_SetFlag(v11, v10);
      goto LABEL_16;
    }
  LABEL_11:
    v10 = 128;
    goto LABEL_12;
  }

LABEL_16:
  v12 = *(_QWORD*)(v5 + 56);
  if (v12 == 0) {
    goto LABEL_21;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_21;
  }
  v14 = *(__int64**)(v5 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v15);
  }
  if (v14 == nullptr) {
  LABEL_21:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
  v16 = **(_QWORD**)(v5 + 120);
  if (*(_QWORD*)(*(_QWORD*)(v5 + 120) + 8LL) == v16) {
    v17 = GameData_212c650[0];
    v18 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_28:
      v20 = true;
      goto LABEL_29;
    }
  }
  else {
    v17 = (__int64*)(*(_QWORD*)(*(_QWORD*)v16 + 24LL) + 32LL);
    v18 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_28;
    }
  }
  v19 = game_GameVariableTable_Find(*(_QWORD*)(v18 + 48), v17);
  if (v19 == 0) {
    goto LABEL_28;
  }
  v20 = (*(_BYTE*)(v19 + 32) & 0x80) == 0;

LABEL_29:
  ui_LayoutAccessor_SetPaneVisible(v14, "IconNew", v20);

LABEL_30:
  GameData_226b338 = 1;
  game_menu_BasicMenu_Unknown16defa0(a1);
  v21 = a1[132];
  GameData_226b338 = 0;
  v27 = 0;
  v28 = 0;
  v22 = *(void (**)(_QWORD*, __int64*))(v21 + 80);
  v26 = 0;
  v22(a1 + 132, &v26);
  (*(void (**)(_QWORD*, __int64*))(a1[132] + 88LL))(a1 + 132, &v26);
  if (v26 == v27) {
    v23 = nullptr;
  }
  else {
    v23 = &v26;
  }
  result = GameRoutine_1566440(v23, 0);
  if (v26 != 0) {
    v27 = v26;
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  return result;
}

__int64 ProcItemShopMenu_Unknown155(__int64 a1, int a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 1096);
  if (a2 >= (int)((unsigned __int64)(*(_QWORD*)(a1 + 1104) - v2) >> 2)) {
    return 0;
  }
  else {
    return *(unsigned int*)(v2 + 4LL * a2);
  }
}

__int64 ProcItemShopMenu_Unknown162(__int64 result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if ((*(_BYTE*)(result + 1160) & 1) == 0) {
    v2 = a2[1];
    v3 = a2[2];
    if (v2 >= v3) {
      v5 = *a2;
      v6 = v2 - *a2;
      v7 = 1 - 0x3333333333333333LL * (v6 >> 3);
      if (v7 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v8 = a2;
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v5) >> 3);
      if (2 * v10 > v7) {
        v7 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v7;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
      }
      else {
        v12 = result;
        v13 = 0;
      }
      v14 = v13 + v6;
      *(_QWORD*)v14 = "MultiSelection";
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_MultiSelection";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      v4 = v13 + v6 + 40;
      *(_QWORD*)(v14 + 20) = 0x200000007LL;
      memcpy(v13, v5, v6);
      *v8 = v13;
      v8[1] = v4;
      v8[2] = v15;
      if (v5 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16);
      }
      a2 = v8;
      result = v12;
    }
    else {
      *(_BYTE*)(v2 + 28) = 0;
      *(_QWORD*)(v2 + 32) = 0;
      *(_QWORD*)v2 = "MultiSelection";
      *(_QWORD*)(v2 + 8) = "MID_KeyHelp_MultiSelection";
      v4 = v2 + 40;
      *(_BYTE*)(v2 + 16) = 1;
      *(_QWORD*)(v2 + 20) = 0x200000007LL;
    }
    a2[1] = v4;
    return GameRoutine_1874560(result);
  }
  return result;
}

__int64

game_facility_anonymous_ProcItemShopMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v5 = *(_QWORD*)(v2 + 1064);
  v6 = *(_QWORD*)(v2 + 1088);
  v7 = *(_BYTE*)(v2 + 1160);
  v8 = v4;
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  v9 = GameData_212d630[0] + 2;
  *(_QWORD*)(v4 + 104) = v5;
  *(_QWORD*)(v4 + 112) = v6;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  v10 = *a2;
  v11 = a2[1];
  *(_BYTE*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 120) = a2;
  *(_QWORD*)v4 = v9;
  *(_QWORD*)(v4 + 8) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  if (v11 == v10) {
    *(_QWORD*)(v4 + 128) = 0;
  }
  else {
    v12 = *(_QWORD*)(*(_QWORD*)v10 + 48LL);
    *(_QWORD*)(v4 + 128) = 0;
    if (v12 != 0) {
      v13 = *(unsigned __int16*)(v12 + 16);
      *(_DWORD*)(v4 + 132) = 1;
      *(_WORD*)(v4 + 128) = v13;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v13) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v14 = game_map_MapRandom_instance__ptr[0];
        v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v17 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v14 + 1) = v15;
        v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = v16;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 4) = v18;
        nn_os_UnlockMutex(&game_g_random_mutex);
        *(_DWORD*)(v8 + 132) =
            (16 * ((_WORD)v18 -
                   1000 * (unsigned __int16)((v18 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
  }
  *(_BYTE*)(v8 + 136) = v7;
  *(_BYTE*)(v8 + 137) = 0;
  *(_QWORD*)(v8 + 144) = 0;
  *(_QWORD*)(v8 + 152) = 0;
  *(_QWORD*)(v8 + 160) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)v8 = game_facility_ShopMenuItem_Buy_vtable;
  *(_QWORD*)(v8 + 96) = GameData_20f2600;
  return BasicMenuCursor_16e0c00(v2, v8);
}

#pragma GCC visibility pop
