#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16499c0(_QWORD);
__int64 GameRoutine_1649e50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2085498[])();
extern __int64 (*GameData_2085518[])();
extern __int64 game_g_game_setting_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 ContinueMenuItem_Unknown19(__int64 result);
__int64 strlen(_QWORD);
bool game_879ce0(__int64, _QWORD*, __int64);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_2085598[])();
__int64 game_menu_anonymous_ContinueMenuItem_ACall(__int64 a1);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);

__int64 ContinueMenuItem_Unknown19(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _BYTE v12[32];
    _BYTE* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  _QWORD v18[3];

  v3 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(v3 + 336) != result ||
      (~*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0x3C00) != 0) {
    *(_DWORD*)(result + 104) = 0;
  }
  else {
    v4 = 0x1.e000000000000p+5f /
         (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v4 <= 0x0.0p+0f) {
      v4 = 0x1.0000000000000p+0f;
    }
    v5 = *(float*)(result + 104) + v4;
    if (v5 > 0x1.2c00000000000p+8f) {
      v5 = 0x1.2c00000000000p+8f;
    }
    *(float*)(result + 104) = v5;
    if (v5 >= 0x1.2c00000000000p+8f) {
      v18[1] = v1;
      v18[2] = v2;
      v6 = *(_QWORD*)(v3 + 152);
      v12_.v13 = nullptr;
      v18[0] = "MID_Title_Continue_RollBack_Confirm";
      if (v6 != 0) {
        v7 = v6;
      }
      else {
        v7 = v3;
      }
      v16_.v16[0] = GameData_2085498;
      v16_.v17 = v16_.v16;
      v14_.v14[0] = GameData_2085518;
      v14_.v15 = v14_.v14;
      v8 = MapSortieMenu_871860(v7, (__int64)v18, (__int64)v16_.v16,
                                (__int64)v14_.v14, (__int64)v12_.v12);
      if (v12_.v13 == v12_.v12) {
        v9 = 32;
      }
      else {
        if (v12_.v13 == nullptr) {
          goto LABEL_18;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v12_.v13 + v9))((__int64)v12_.v13);
    LABEL_18:
      if (v14_.v15 == v14_.v14) {
        v10 = 32;
      }
      else {
        if (v14_.v15 == nullptr) {
          goto LABEL_23;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v14_.v15 + v10))((__int64)v14_.v15);
    LABEL_23:
      if (v16_.v17 == v16_.v16) {
        v11 = 32;
      }
      else {
        if (v16_.v17 == nullptr) {
        LABEL_28:
          Dialog_1649e50(v8, "MID_Title_Continue_RollBack_Comment", 0, 0);
          Dialog_1649e50(v8, "MID_Title_Continue_RollBack_Attention", 1, 0);
          return Dialog_16499c0(v8);
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v16_.v17 + v11))((__int64)v16_.v17);
      goto LABEL_28;
    }
  }
  return result;
}

__int64 game_menu_anonymous_ContinueMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  _QWORD v7[2];

  v1 = *(_QWORD*)(a1 + 8);
  v5_.v6 = v5_.v5;
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = v1;
  }
  v5_.v5[0] = GameData_2085598;
  v7[0] = game_util_Format("%s/%s", "000", "Auto");
  v7[1] = strlen(v7[0]);
  game_879ce0(v2, v7, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
    goto LABEL_8;
  }
  if (v5_.v6 != nullptr) {
    v3 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  }
  return 12;
}

#pragma GCC visibility pop
