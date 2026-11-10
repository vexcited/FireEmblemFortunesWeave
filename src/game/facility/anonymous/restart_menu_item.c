#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10098a0(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 RestartMenuItem_Unknown27(__int64 a1);
__int64 RestartMenuItem_Unknown55(__int64 a1);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_f8a870(_QWORD, _QWORD);
extern __int64 GameData_212efc0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 RestartMenuItem_Unknown73(__int64 a1);
__int64
game_facility_anonymous_RestartMenuItem_CreateConfirmDialog_closure_Invoke(
    __int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, __int64, char, char);
__int64 GameRoutine_65a020(_QWORD);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 TelopParts_17ccc20(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_205f9a8[])();
extern __int64 (*GameData_205fa28[])();
extern __int64 GameData_21c9600;
extern __int64 GameData_2241720;
const char* RestartMenuItem_GetMid();
__int64 game_facility_anonymous_RestartMenuItem_ACall(__int64 a1);
__int64
game_facility_anonymous_RestartMenuItem_ACall_closure_Invoke(__int64 a1);

const char* RestartMenuItem_GetMid()
{
  const char* result;

  result = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return "MID_Restart_Chapter_Part3";
  }
  return result;
}

__int64 game_facility_anonymous_RestartMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  const char* v2;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  const char* v9;
  char* v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  char* v17;

  if (*(_DWORD*)(game_GameRestartData_unknown_ + 652) == 0) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v2 = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = "MID_Restart_Chapter_Part3";
  }
  v17 = game_util_Format("%s_Confirm", v2);
  v15_.v15[0] = GameData_205f9a8;
  v15_.v15[1] = a1;
  v13_.v14 = v13_.v13;
  v15_.v16 = v15_.v15;
  v11_.v12 = v11_.v11;
  v13_.v13[0] = GameData_205fa28;
  v11_.v11[0] = GameData_205fa28;
  v4 = MapSortieMenu_871860(v1, (__int64)&v17, (__int64)v15_.v15,
                            (__int64)v13_.v13, (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v5 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v5))((__int64)v11_.v12);
LABEL_11:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_16:
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
    goto LABEL_20;
  }
  if (v15_.v16 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v15_.v16 + v8))((__int64)v15_.v16);
  }
  Dialog_16499c0(v4);
  v9 = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v9 = "MID_Restart_Chapter_Part3";
  }
  v10 = game_util_Format("%s_Annotation", v9);
  Dialog_1649e50(v4, (__int64)v10, 1, 0);
  return 12;
}

bool RestartMenuItem_Unknown58()
{
  return *(_DWORD*)(game_GameRestartData_unknown_ + 652) != 0;
}

__int64 RestartMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  const char* v4;
  _BYTE v6[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v2 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1112LL))(v2);
  }
  else {
    v3 = v1 + 848;
  }
  v4 = "MID_PerchMenu_ResetChapter_Help";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v4 = "MID_PerchMenu_ResetChapter_Part3_Help";
  }
  GameRoutine_16ee370(v6, v3, v4);
  return GameRoutine_16ee520(v6);
}

__int64 game_facility_anonymous_RestartMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _BYTE v6[200];

  if (*(_DWORD*)(game_GameRestartData_unknown_ + 652) == 0) {
    return 1;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  }
  GameRoutine_65a020(v2);
  v3 = game_GameRestartData_unknown_;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 652) != 0) {
    *(_BYTE*)(game_GameRestartData_unknown_ + 16) = 0;
    *(_DWORD*)(v3 + 8) = 1;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  snd_Fade_Fade_10c830(v6, 0.0f);
  snd_play_ff2d0((void*)(&v5), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v6, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v6);
  if (GameData_2241720 != 0) {
    TelopParts_17ccc20(GameData_2241720, 0, 0);
  }
  return 13;
}

__int64 RestartMenuItem_Unknown27(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_10098a0(v2);
  return 10;
}

__int64 RestartMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  int v11;
  int v12;
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

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v13 = -1;
        v14 = -1;
        v15 = -1;
        v16 = -1;
        v5 = *msg_MessageManager_instance__ptr[0];
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v10[0] = GameData_212e348 + 2;
        v10[1] = 0xFFFF0001FFFF0000LL;
        v10[2] = 0xFFFF0004FFFF0002LL;
        v10[3] = 0xFFFF0006FFFF0005LL;
        v25 = 8;
        v11 = -65529;
        v12 = -65528;
        v6 = GameRoutine_a4dbe0(v5, "MID_HeroMenu_Continue_Part3", 0, v10);
        if (v6 != 0) {
          v8 = v6;
          v9 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v9 != 0) {
            GameRoutine_156c5d0(v9, v8, 0);
          }
        }
        LODWORD(v7) = 1.0;
        result = GameRoutine_1562680(v3, "Large_StatusOn", v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
