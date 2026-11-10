#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 BasicMenu_16e2280(__int64, int, char, char);
__int64 Dialog_16499c0(__int64 result);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
extern __int64 (*GameData_2086138[])();
extern __int64 (*GameData_20861b8[])();
extern __int64 (*GameData_2086238[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131aa8[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_21f3fe4;
__int64 game_menu_anonymous_ExtraSettingVoiceMenuItem_ACall(__int64 a1);

__int64 game_menu_anonymous_ExtraSettingVoiceMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  const char* v20;

  v1 = *(_QWORD*)(a1 + 8);
  v20 = "MID_Title_SettingVoice";
  v18_.v18[0] = GameData_2086138;
  v14_.v15 = v14_.v14;
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = v1;
  }
  v18_.v19 = v18_.v18;
  v16_.v17 = v16_.v16;
  v16_.v16[0] = GameData_20861b8;
  v14_.v14[0] = GameData_2086238;
  v3 =
      (_QWORD*)game_menu_Dialog__CreateBind_game_menu_Dialog(v2, (__int64)&v20);
  if (v3 != nullptr) {
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        192, 16, 0);
    GameRoutine_16477d0(v5, (__int64)"MID_Title_SettingVoice_Jp",
                        (__int64)v18_.v18, (__int64)v14_.v14);
    BasicMenuCursor_16e0c00(v3, v5);
    v6 = fw_memory_HeapManager_Allocate(*v4, 192, 16, 0);
    GameRoutine_16477d0(v6, (__int64)"MID_Title_SettingVoice_En",
                        (__int64)v16_.v16, (__int64)v14_.v14);
    BasicMenuCursor_16e0c00(v3, v6);
  }
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_11:
  if (v16_.v17 == v16_.v16) {
    v8 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v8))((__int64)v16_.v17);
LABEL_16:
  if (v18_.v19 == v18_.v18) {
    v9 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_21;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v9))((__int64)v18_.v19);
LABEL_21:
  if (GameData_21f3fe4 == 1) {
    Dialog_16499c0((__int64)v3);
    v10 = 1;
  }
  else {
    v10 = 0;
  }
  v11 = BasicMenu_16e2280((__int64)v3, v10, 0, 0);
  if (v11 != 0) {
    v12 = __dynamic_cast(v11, GameData_212e008[0], GameData_2131aa8[0], 0);
    if (v12 != 0) {
      *(_BYTE*)(v12 + 84) = 1;
    }
  }
  return 12;
}

#pragma GCC visibility pop
