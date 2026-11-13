#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, __int64, char, char);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
extern __int64 (*GameData_20868f8[])();
extern __int64 (*GameData_2086968[])();
extern __int64 (*GameData_2086a78[])();
extern __int64 (*GameData_2086b08[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall_16a31b0(__int64 a1);
__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall_16a3380(__int64 a1,
                                                                  __int64 a2);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
extern __int64 (*GameData_20869d8[])();
extern __int64 GameData_21f5fc0;
__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall(__int64 a1,
                                                          __int64* a2);

__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall_16a31b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  const char* v14;

  v1 = *(_QWORD*)(a1 + 8);
  v14 = "MID_Title_SaveDelete_Confirm";
  v12_.v12[0] = GameData_20868f8;
  v8_.v9 = v8_.v8;
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = v1;
  }
  v12_.v13 = v12_.v12;
  v10_.v11 = v10_.v10;
  v10_.v10[0] = GameData_2086b08;
  v8_.v8[0] = GameData_2086b08;
  v3 = MapSortieMenu_871860(v2, (__int64)&v14, (__int64)v12_.v12,
                            (__int64)v10_.v10, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_9:
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_14;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_14:
  if (v12_.v13 == v12_.v12) {
    v6 = 32;
    goto LABEL_18;
  }
  if (v12_.v13 != nullptr) {
    v6 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
  }
  Dialog_1649e50(v3, (__int64)"MID_Title_SaveDelete_Attention", 1, 0);
  return 12;
}

__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall_16a3380(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  const char* v18;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v2 = *(_QWORD*)(v2 + 152);
  }
  v3 = *(_QWORD*)(v2 + 32);
  v18 = "MID_Title_SaveDelete_Reconfirm";
  v12_.v13 = v12_.v12;
  v16_.v16[0] = GameData_2086968;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = GameData_2086a78;
  v14_.v15 = v14_.v14;
  v12_.v12[0] = GameData_2086a78;
  v4 =
      (_QWORD*)game_menu_Dialog__CreateBind_game_menu_Dialog(v3, (__int64)&v18);
  if (v4 != nullptr) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        192, 16, 0);
    GameRoutine_16477d0(v6, (__int64)"MID_Sys_Yes", (__int64)v16_.v16,
                        (__int64)v12_.v12);
    BasicMenuCursor_16e0c00(v4, v6);
    v7 = fw_memory_HeapManager_Allocate(*v5, 192, 16, 0);
    GameRoutine_16477d0(v7, (__int64)"MID_Sys_No", (__int64)v14_.v14,
                        (__int64)v12_.v12);
    BasicMenuCursor_16e0c00(v4, v7);
  }
  if (v12_.v13 == v12_.v12) {
    v8 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
LABEL_10:
  if (v14_.v15 == v14_.v14) {
    v9 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_15;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
LABEL_15:
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
    goto LABEL_19;
  }
  if (v16_.v17 != nullptr) {
    v10 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v16_.v17 + v10))((__int64)v16_.v17);
  }
  Dialog_16499c0((__int64)v4);
  return 2;
}

__int64 game_menu_anonymous_ExtraSaveDeleteMenuItem_ACall(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  const char* v14;

  {
    v2 = *a2;
    __asm__ volatile("" ::"r"(v2));
  }
  if (GameData_21f5fc0 != 0) {
    *(_BYTE*)(GameData_21f5fc0 + 330) = 1;
  }
  {
    v3 = *(_QWORD*)(v2 + 8);
    __asm__ volatile("" ::"r"(v3));
  }
  v10_.v11 = v10_.v10;
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
    __asm__ volatile("" ::"r"(v4));
  }
  else {
    v4 = v3;
  }
  v14 = "MID_Title_SaveDelete_Result";
  v10_.v10[0] = GameData_20869d8;
  v5 = game_menu_Dialog__CreateBind_game_menu_Dialog(v4, (__int64)&v14);
  if (v5 != 0) {
    v6 = v5;
    if (v10_.v11 != nullptr) {
      if (v10_.v11 == v10_.v10) {
        v12_.v13 = v12_.v12;
        (*(void (**)(__int64))(*v10_.v11 + 24LL))((__int64)v10_.v11);
      }
      else {
        v12_.v13 = (_QWORD*)(*(__int64 (**)(__int64))(*v10_.v11 + 16LL))(
            (__int64)v10_.v11);
      }
    }
    else {
      v12_.v13 = nullptr;
    }
    GameRoutine_6680e0(v12_.v12, (_QWORD*)(v6 + 1248));
    if (v12_.v13 == v12_.v12) {
      v7 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
        goto LABEL_17;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v12_.v13 + v7))((__int64)v12_.v13);
  }
LABEL_17:
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
    goto LABEL_21;
  }
  if (v10_.v11 != nullptr) {
    v8 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
  }
  return 9;
}

#pragma GCC visibility pop
