#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(_QWORD, _QWORD);
__int64 GameRoutine_1788690(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2057e80;
extern __int64 GameData_2057ec8;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64* game_g_empty_item_ptr;
struct PseudoSret GameRoutine_1560070(_QWORD, _QWORD);
__int64 TransporterPoolMenu_Unknown88(__int64 a1);
__int64 TransporterPoolMenu_Unknown139(_QWORD* a1);
__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2);
__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2);
bool TransporterPoolMenu_Unknown147(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_EquipMenuItem_Transporter_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 TransporterPoolMenu_Unknown7(__int64 a1, char a2);
__int64 TransporterPoolMenu_Unknown8(__int64 a1, char a2);
__int64
game_menu_anonymous_TransporterPoolMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2);
bool game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d18d0(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d1a60(
    __int64 a1, __int64* a2, __int64* a3);
_QWORD*
BasicMenuCursor_16e0c00_alt1(_QWORD* result,
                             __int64) __asm__("BasicMenuCursor_16e0c00");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_15b59e0(_QWORD);
__int64 GameRoutine_15b59e0_alt1(__int64) __asm__("GameRoutine_15b59e0");
__int64 GameRoutine_15b5f20(_QWORD);
__int64 GameRoutine_15b5f20_alt1(__int64) __asm__("GameRoutine_15b5f20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst(int*);
__int64 game_gameui_Util_EachItemFromTransporter(__int64);
__int64 game_gameui_anonymous_15d2540(__int64*, _WORD*);
__int64 game_gameui_anonymous_15d2540_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "game_gameui_anonymous_15d2540");
__int64 game_menu_BasicMenu_Unknown96(__int64 result);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_1567590_alt1(__int64, char) __asm__("GameRoutine_1567590");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_2059fd8[])();
extern __int64 (*GameData_205a2b8[])();
extern __int64 (*game_menu_anonymous_EquipMenuItem_TransporterEmpty_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_21ca310;
extern __int64 GameData_21f3d10;
__int64 TransporterPoolMenu_Unknown75(__int64 a1, int a2);
__int64 game_menu_anonymous_TransporterPoolMenu_OnInit(__int64* a1);
__n128 TransporterPoolMenu_Unknown96(__int64 a1);
__int64 TransporterPoolMenu_Unknown102(__int64 a1);
__int64 game_menu_anonymous_TransporterPoolMenu_AddItemList(__int64 a1);

__int64 TransporterPoolMenu_Unknown75(__int64 a1, int a2)
{
  __int64 v2;
  const char* v4;
  __int64 v5;
  _BYTE v6[200];

  if (a2 == 13) {
    v2 = *(_QWORD*)(a1 + 336);
    if (v2 != 0) {
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 368LL))(v2, 13);
    }
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_List_Change";
  }
  else {
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_NG";
  }
  snd_play_ff2d0((void*)(&v5), v4, v4, v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

__int64 game_menu_anonymous_TransporterPoolMenu_OnInit(__int64* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _BOOL8 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  LayoutAccessor_1560070((void*)(&v9), a1 + 119, (__int64)"L_PageTab");
  v11[0] = GameData_2059fd8;
  v2 = *a1;
  v12 = v11;
  v3 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage(a1 + 82, &v9, v11, v3, 14, 15);
  if (v12 == v11) {
    v4 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
LABEL_6:
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  if (GameData_21f3d10 == 0 || *(_BYTE*)(GameData_21f3d10 + 9) != 1 ||
      *(_DWORD*)(GameData_21f3d10 + 136) != 1) {
    goto LABEL_17;
  }
  v13 = 0;
  v12 = v11;
  v11[0] = GameData_2131908[0] + 16;
  v11[1] = &v13;
  GameRoutine_15b59e0(v11);
  if (v12 == v11) {
    v5 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v12 + v5))((__int64)v12);
LABEL_16:
  if (v13 == 0) {
    v13 = 0;
    v12 = v11;
    v11[0] = GameData_2131910[0] + 16;
    v11[1] = &v13;
    GameRoutine_15b5f20(v11);
    if (v12 == v11) {
      v8 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_24:
        v6 = v13 != 0;
        return ui_LayoutAccessor_SetPaneVisible(a1 + 119, "L_Num", v6);
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v12 + v8))((__int64)v12);
    goto LABEL_24;
  }
LABEL_17:
  v6 = true;
  return ui_LayoutAccessor_SetPaneVisible(a1 + 119, "L_Num", v6);
}

__int64 TransporterPoolMenu_Unknown88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v17;
  _QWORD v18[8];

  result = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                          &GameData_2057ec8, 0);
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v18[2] = v18[4];
    v18[3] = v18[5];
    v18[7] = v18[6];
    v1 = result;
    v2 = __dynamic_cast(v17, GameData_212e008[0], &GameData_2057e80, 0);
    v3 = game_g_empty_item_ptr;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2);
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)game_g_empty_item_ptr + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)game_g_empty_item_ptr;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = v1 + 380;
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = true;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u &&
            (unsigned __int64)(*(_BYTE*)(v11 + 73) != 16);
    }
    GameRoutine_1567590("StatusChange", v10);
    *(struct PseudoSret*)(v18) = GameRoutine_1560070(v1 + 200, "L_ItemDetail");
    result = v18[1];
    v12 = *(_BYTE*)(v1 + 389) != 0 ? *(_QWORD*)(v1 + 360) : 0LL;
    if (v18[1] != 0) {
      v13 = std___1___shared_weak_count_lock(v18[1]);
      if (v13 != 0) {
        v14 = v13;
        if (v18[0] != 0) {
          GameRoutine_15d2540(v18[0], v8, v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      result = v18[1];
      if (v18[1] != 0) {
        return std___1___shared_weak_count___release_weak(v18[1]);
      }
    }
  }
  return result;
}

__n128 TransporterPoolMenu_Unknown96(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char v5;
  _BYTE* v6;
  _DWORD* v7;
  _WORD* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __n128 result;
  __int64 v17;
  __int64* v18[8];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_menu_BasicMenu_Unknown96(a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                       &GameData_2057ec8, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v17 = *(_QWORD*)(a1 + 336);
  if (v17 != 0) {
    v18[2] = v18[4];
    v18[3] = v18[5];
    v18[7] = v18[6];
    v1 = v15;
    v2 = __dynamic_cast(v17, GameData_212e008[0], &GameData_2057e80, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v3 = game_g_empty_item_ptr;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 560LL))(v2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v5 = *(_BYTE*)(v4 + 2);
      *(_WORD*)(v1 + 380) = *(_WORD*)v4;
      *(_BYTE*)(v1 + 382) = v5;
      v6 = (_BYTE*)(v4 + 3);
      v7 = (_DWORD*)(v4 + 4);
    }
    else {
      v6 = (char*)game_g_empty_item_ptr + 3;
      *(_WORD*)(v1 + 380) = *(_WORD*)game_g_empty_item_ptr;
      *(_BYTE*)(v1 + 382) = *((_BYTE*)v3 + 2);
      v7 = (_DWORD*)v3 + 1;
    }
    v8 = (_WORD*)(v1 + 380);
    *(_BYTE*)(v1 + 383) = *v6;
    v9 = *v3;
    *(_DWORD*)(v1 + 384) = *v7;
    if (*(_QWORD*)(v1 + 380) == v9) {
      v10 = 1;
    }
    else {
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
      v10 = *(unsigned __int8*)(v11 + 72) >= 8u && *(_BYTE*)(v11 + 73) != 16;
    }
    GameRoutine_1567590_alt1((__int64)"StatusChange", v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LayoutAccessor_1560070((void*)(v18), (__int64*)(v1 + 200),
                           (__int64)"L_ItemDetail"),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v18[1] != nullptr) {
      v12 = std___1___shared_weak_count_lock(v18[1]),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v12 != 0) {
        v13 = v12;
        if (v18[0] != nullptr) {
          game_gameui_anonymous_15d2540(v18[0], v8),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          result = std___1___shared_weak_count___release_weak_alt1();
        }
      }
      if (v18[1] != nullptr) {
        return std___1___shared_weak_count___release_weak_alt1();
      }
    }
  }
  return result;
}

__int64 TransporterPoolMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0) {
    v1 = __dynamic_cast(v1, GameData_21319e8[0], &GameData_2057ec8, 0);
  }
  v2 = v1 + 380;
  if (*(_QWORD*)(v1 + 380) == *game_g_empty_item_ptr) {
    return 14;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * (unsigned __int16)*(_QWORD*)(v1 + 380));
  if (*(unsigned __int8*)(v4 + 72) >= 8u && *(_BYTE*)(v4 + 73) != 16) {
    return 14;
  }
  v5 = v1;
  *(_BYTE*)(v1 + 389) ^= 1u;
  LayoutAccessor_1560070((void*)(&v9), (__int64*)(v1 + 200),
                         (__int64)"L_ItemDetail");
  if (*(_BYTE*)(v5 + 389) != 0) {
    v6 = *(_QWORD*)(v5 + 360);
  }
  else {
    v6 = 0;
  }
  if (v10 != 0) {
    v7 = std___1___shared_weak_count_lock(v10);
    if (v7 != 0) {
      v8 = v7;
      if (v9 != 0) {
        game_gameui_anonymous_15d2540_alt1(v9, v2, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    if (v10 != 0) {
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  return 13;
}

__int64 game_menu_anonymous_TransporterPoolMenu_AddItemList(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _WORD* v12;
  unsigned int v13;
  _WORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;
  __int64 v52;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  v4 = *(_QWORD*)(a1 + 1056);
  if (v4 != 0) {
    v4 = __dynamic_cast(v4, GameData_21319e8[0], &GameData_2057ec8, 0);
  }
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = v4;
  v5 = *(_QWORD*)(a1 + 344);
  *(_WORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 40) = -1;
  *(_QWORD*)v3 = game_menu_anonymous_EquipMenuItem_TransporterEmpty_vtable;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v49 = 0;
  v6 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v6 + 9) != 1 ||
      *(_DWORD*)(v6 + 136) != 1) {
    goto LABEL_20;
  }
  v52 = 0;
  v50_.v51 = v50_.v50;
  v50_.v50[0] = GameData_2131908[0] + 16;
  v50_.v50[1] = &v52;
  GameRoutine_15b59e0_alt1((__int64)v50_.v50);
  if (v50_.v51 == v50_.v50) {
    v7 = 32;
  }
  else {
    if (v50_.v51 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v50_.v51 + v7))((__int64)v50_.v51);
LABEL_13:
  if (v52 == 0) {
    v52 = 0;
    v50_.v51 = v50_.v50;
    v50_.v50[0] = GameData_2131910[0] + 16;
    v50_.v50[1] = &v52;
    GameRoutine_15b5f20_alt1((__int64)v50_.v50);
    result = (__int64)v50_.v51;
    if (v50_.v51 == v50_.v50) {
      v9 = 32;
    }
    else {
      if (v50_.v51 == nullptr) {
        goto LABEL_19;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v50_.v51 + v9))((__int64)v50_.v51);
  LABEL_19:
    if (v52 == 0) {
      goto LABEL_25;
    }
  }
LABEL_20:
  v50_.v50[0] = GameData_205a2b8;
  v50_.v50[1] = a1;
  v50_.v51 = v50_.v50;
  v50_.v50[2] = &v49;
  game_gameui_Util_EachItemFromTransporter((__int64)v50_.v50);
  result = (__int64)v50_.v51;
  if (v50_.v51 == v50_.v50) {
    v10 = 32;
    goto LABEL_24;
  }
  if (v50_.v51 != nullptr) {
    v10 = 40;
  LABEL_24:
    result = (*(__int64 (**)(__int64))(*v50_.v51 + v10))((__int64)v50_.v51);
  }
LABEL_25:
  if (*(_BYTE*)(a1 + 1080) == 1) {
    LODWORD(v50_.v50[0]) = 17;
    result = game_UnitPool_GetFirst((int*)v50_.v50);
    if (result != 0) {
      v11 = *(_QWORD*)(result + 432);
      v12 = (_WORD*)result;
      if (v11 == 0) {
        v11 = *(_QWORD*)(result + 440);
        if (v11 != 0) {
          v13 = *(unsigned __int8*)(v11 + 16);
          if (v13 <= 8) {
            v48 = v13 - 3;
            while (1) {
              if (v48 == 0) {
                v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v11 != 0) {
                  break;
                }
              }
              if (++v48 == 6) {
                goto LABEL_30;
              }
            }
          }
          else {
          LABEL_30:
            v11 = 0;
          }
        }
      }
      while (1) {
      LABEL_33:
        v14 = *(_WORD**)(a1 + 1072);
        v15 = v11;
        if (v14 != v12) {
          if (v12[414] != 0) {
            v16 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v17 = *(_QWORD*)(a1 + 1056);
            if (v17 != 0) {
              v17 = __dynamic_cast(v17, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v18 = v49;
            v19 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v16 + 16) = 0;
            *(_QWORD*)(v16 + 48) = 0;
            *(_QWORD*)(v16 + 56) = 0;
            *(_QWORD*)(v16 + 64) = 0;
            *(_QWORD*)(v16 + 72) = 0;
            *(_WORD*)(v16 + 80) = 257;
            *(_BYTE*)(v16 + 82) = 1;
            *(_DWORD*)(v16 + 40) = 0;
            *(_QWORD*)(v16 + 88) = v12;
            *(_QWORD*)(v16 + 96) = v17;
            *(_QWORD*)v16 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v16 + 8) = 0;
            *(_QWORD*)(v16 + 104) = v14;
            *(_DWORD*)(v16 + 112) = v18;
            *(_DWORD*)(v16 + 116) = v19;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v16);
            ++v49;
          }
          if (v12[418] != 0) {
            v20 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v21 = *(_QWORD*)(a1 + 1056);
            if (v21 != 0) {
              v21 = __dynamic_cast(v21, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v22 = *(_QWORD*)(a1 + 1072);
            v23 = v49;
            v24 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v20 + 16) = 0;
            *(_QWORD*)(v20 + 48) = 0;
            *(_QWORD*)(v20 + 56) = 0;
            *(_QWORD*)(v20 + 64) = 0;
            *(_QWORD*)(v20 + 72) = 0;
            *(_WORD*)(v20 + 80) = 257;
            *(_BYTE*)(v20 + 82) = 1;
            *(_DWORD*)(v20 + 40) = 1;
            *(_QWORD*)(v20 + 88) = v12;
            *(_QWORD*)(v20 + 96) = v21;
            *(_QWORD*)v20 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v20 + 8) = 0;
            *(_QWORD*)(v20 + 104) = v22;
            *(_DWORD*)(v20 + 112) = v23;
            *(_DWORD*)(v20 + 116) = v24;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v20);
            ++v49;
          }
          if (v12[422] != 0) {
            v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v26 = *(_QWORD*)(a1 + 1056);
            if (v26 != 0) {
              v26 = __dynamic_cast(v26, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v27 = *(_QWORD*)(a1 + 1072);
            v28 = v49;
            v29 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v25 + 16) = 0;
            *(_QWORD*)(v25 + 48) = 0;
            *(_QWORD*)(v25 + 56) = 0;
            *(_QWORD*)(v25 + 64) = 0;
            *(_QWORD*)(v25 + 72) = 0;
            *(_WORD*)(v25 + 80) = 257;
            *(_BYTE*)(v25 + 82) = 1;
            *(_QWORD*)(v25 + 88) = v12;
            *(_QWORD*)(v25 + 96) = v26;
            *(_DWORD*)(v25 + 40) = 2;
            *(_QWORD*)v25 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v25 + 8) = 0;
            *(_QWORD*)(v25 + 104) = v27;
            *(_DWORD*)(v25 + 112) = v28;
            *(_DWORD*)(v25 + 116) = v29;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v25);
            ++v49;
          }
          if (v12[426] != 0) {
            v30 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v31 = *(_QWORD*)(a1 + 1056);
            if (v31 != 0) {
              v31 = __dynamic_cast(v31, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v32 = *(_QWORD*)(a1 + 1072);
            v33 = v49;
            v34 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v30 + 16) = 0;
            *(_QWORD*)(v30 + 48) = 0;
            *(_QWORD*)(v30 + 56) = 0;
            *(_QWORD*)(v30 + 64) = 0;
            *(_QWORD*)(v30 + 72) = 0;
            *(_WORD*)(v30 + 80) = 257;
            *(_BYTE*)(v30 + 82) = 1;
            *(_QWORD*)(v30 + 88) = v12;
            *(_QWORD*)(v30 + 96) = v31;
            *(_DWORD*)(v30 + 40) = 3;
            *(_QWORD*)v30 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v30 + 8) = 0;
            *(_QWORD*)(v30 + 104) = v32;
            *(_DWORD*)(v30 + 112) = v33;
            *(_DWORD*)(v30 + 116) = v34;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v30);
            ++v49;
          }
          if (v12[430] != 0) {
            v35 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v36 = *(_QWORD*)(a1 + 1056);
            if (v36 != 0) {
              v36 = __dynamic_cast(v36, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v37 = *(_QWORD*)(a1 + 1072);
            v38 = v49;
            v39 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v35 + 16) = 0;
            *(_QWORD*)(v35 + 48) = 0;
            *(_QWORD*)(v35 + 56) = 0;
            *(_QWORD*)(v35 + 64) = 0;
            *(_QWORD*)(v35 + 72) = 0;
            *(_WORD*)(v35 + 80) = 257;
            *(_BYTE*)(v35 + 82) = 1;
            *(_QWORD*)(v35 + 88) = v12;
            *(_QWORD*)(v35 + 96) = v36;
            *(_DWORD*)(v35 + 40) = 4;
            *(_QWORD*)v35 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v35 + 8) = 0;
            *(_QWORD*)(v35 + 104) = v37;
            *(_DWORD*)(v35 + 112) = v38;
            *(_DWORD*)(v35 + 116) = v39;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v35);
            ++v49;
          }
          if (v12[434] != 0) {
            v40 = fw_memory_HeapManager_Allocate_alt1(*v2, 120, 16, 0);
            v41 = *(_QWORD*)(a1 + 1056);
            if (v41 != 0) {
              v41 = __dynamic_cast(v41, GameData_21319e8[0], &GameData_2057ec8,
                                   0);
            }
            v42 = *(_QWORD*)(a1 + 1072);
            v43 = v49;
            v44 = *(_DWORD*)(a1 + 1084);
            *(_WORD*)(v40 + 16) = 0;
            *(_QWORD*)(v40 + 48) = 0;
            *(_QWORD*)(v40 + 56) = 0;
            *(_QWORD*)(v40 + 64) = 0;
            *(_QWORD*)(v40 + 72) = 0;
            *(_WORD*)(v40 + 80) = 257;
            *(_BYTE*)(v40 + 82) = 1;
            *(_QWORD*)(v40 + 88) = v12;
            *(_QWORD*)(v40 + 96) = v41;
            *(_DWORD*)(v40 + 40) = 5;
            *(_QWORD*)v40 =
                game_menu_anonymous_EquipMenuItem_Transporter_vtable;
            *(_QWORD*)(v40 + 8) = 0;
            *(_QWORD*)(v40 + 104) = v42;
            *(_DWORD*)(v40 + 112) = v43;
            *(_DWORD*)(v40 + 116) = v44;
            result = (__int64)BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v40);
            ++v49;
          }
        }
        if (v15 == 0) {
          break;
        }
        v11 = *(_QWORD*)(v15 + 432);
        v12 = (_WORD*)v15;
        if (v11 == 0) {
          v45 = *(_QWORD*)(v15 + 440);
          v12 = (_WORD*)v15;
          if (v45 != 0) {
            v46 = *(unsigned __int8*)(v45 + 16);
            v11 = 0;
            v12 = (_WORD*)v15;
            if (v46 <= 8) {
              v47 = v46 - 3;
              while (1) {
                if (v47 == 0) {
                  v11 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v11 != 0) {
                    break;
                  }
                }
                if (++v47 == 6) {
                  v11 = 0;
                  v12 = (_WORD*)v15;
                  goto LABEL_33;
                }
              }
              v12 = (_WORD*)v15;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 TransporterPoolMenu_Unknown139(_QWORD* a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(__dynamic_cast(a1[132], GameData_21319e8[0],
                                 &GameData_2057ec8, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 240LL))(v2, 1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 248LL))(v2, 1);
  (*(void (**)(_QWORD*, __int64))(*a1 + 240LL))(a1, 1);
  return (*(__int64 (**)(_QWORD*, __int64))(*a1 + 248LL))(a1, 1);
}

__int64 TransporterPoolMenu_Unknown144(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1176LL))(a1) & 1) != 0) {
    return GameRoutine_1788420(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 TransporterPoolMenu_Unknown145(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1184LL))(a1) & 1) != 0) {
    return GameRoutine_1788690(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

bool TransporterPoolMenu_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

__int64 TransporterPoolMenu_Unknown7(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1176LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788420(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64 TransporterPoolMenu_Unknown8(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1184LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788690(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64

game_menu_anonymous_TransporterPoolMenu_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 result;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v6 = *(_QWORD*)(v3 + 1056);
  if (v6 != 0) {
    v6 = __dynamic_cast(v6, GameData_21319e8[0], &GameData_2057ec8, 0);
  }
  v7 = *(_QWORD*)(v3 + 1072);
  v8 = *(_DWORD*)(v3 + 1084);
  v9 = **(_DWORD**)(a1 + 16);
  *(_WORD*)(v5 + 80) = 257;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_DWORD*)(v5 + 40) = v2;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = v6;
  *(_QWORD*)(v5 + 104) = v7;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)v5 = game_menu_anonymous_EquipMenuItem_Transporter_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_DWORD*)(v5 + 112) = v9;
  *(_DWORD*)(v5 + 116) = v8;
  result = BasicMenuCursor_16e0c00(v3, v5);
  ++**(_DWORD**)(a1 + 16);
  return result;
}

bool game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d18d0(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;

  v2 = *a2;
  v3 = **(unsigned __int8**)(a1 + 8);
  if (v3 == 16) {
    v4 = *(_QWORD*)(v2 + 88);
    v5 = *(int*)(v2 + 40);
    if (v4 != 0) {
      v6 = (unsigned __int16*)(v4 + 8 * v5 + 828);
    }
    else {
      v6 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * (int)v5 + 4);
    }
    return *v6 != 0;
  }
  else {
    v7 = *(int*)(v2 + 40);
    v8 = *(_QWORD*)(v2 + 88);
    if (v8 != 0) {
      v9 = (unsigned __int16*)(v8 + 8 * v7 + 828);
    }
    else {
      v9 =
          (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        game_TransporterConst_List_instance__ptr
                                                            [0] +
                                                    8LL) +
                                         8LL) +
                              12LL * (int)v7 + 4);
    }
    return v3 ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                     64) +
                                          8LL * *v9) +
                               72LL);
  }
}

__int64

game_menu_anonymous_TransporterPoolMenu_SortAndFilter_closure_Invoke_15d1a60(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _QWORD v16[2];
  int v17;
  int v18;
  char v19;
  _QWORD v20[2];
  int v21;
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;

  v5 = *a2;
  v6 = *a3;
  v7 = *(_QWORD*)(*a2 + 88);
  v8 = *(int*)(*a2 + 40);
  if (v7 != 0) {
    v9 = v7 + 8 * v8 + 828;
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v8 + 4;
  }
  v10 = *(_QWORD*)(v6 + 88);
  v11 = *(int*)(v6 + 40);
  if (v10 != 0) {
    v12 = v10 + 8 * v11 + 828;
  }
  else {
    v12 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v11 + 4;
  }
  v24 = v3;
  v25 = v4;
  v13 = *(_DWORD*)(v5 + 112);
  v14 = *(_DWORD*)(v6 + 112);
  v20[0] = v9;
  v20[1] = v7;
  v23 = 0;
  v16[0] = v12;
  v16[1] = v10;
  v19 = 0;
  v21 = v13;
  v22 = 0;
  v17 = v14;
  v18 = 0;
  return GameRoutine_19ef8e0(v20, v16) & 1;
}

#pragma GCC visibility pop
