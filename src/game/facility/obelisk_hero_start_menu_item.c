#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16497b0(__int64, __int64);
__int64 GameRoutine_812170(_QWORD);
__int64 GameRoutine_f8a870(_QWORD, _QWORD);
extern __int64 GameData_212efc0;
__int64 game_facility_ObeliskHeroStartMenuItem_ACall_lambda1_Invoke(__int64 a1);
__int64
game_facility_ObeliskHeroStartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 ProcList_9bd480(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
bool game_879ce0(__int64, _QWORD*, __int64);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_225d6e8[12];
extern __int64 (*GameData_2001310[])();
extern __int64 (*GameData_2077260[])();
extern __int64 (*GameData_20772e0[])();
extern char* GameData_1fa6240;
__int64 ObeliskHeroStartMenuItem_1663bb0(__int64 a1);
__int64 game_facility_ObeliskHeroStartMenuItem_ACall(__int64 a1);

__int64 ObeliskHeroStartMenuItem_1663bb0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  _QWORD v12[4];

  if (*(_DWORD*)(a1 + 84) != 2) {
    return 0;
  }
  v12[2] = v1;
  v12[3] = v2;
  v4 = game_util_Format("%s_%s_%d", "Part",
                        (&GameData_1fa6240)[*(unsigned __int8*)(a1 + 83)], 2);
  v5 = game_util_Format("%s/%s", "000", v4);
  v6 = *(_QWORD*)(a1 + 8);
  v12[0] = v5;
  if (*(_QWORD*)(v6 + 152) != 0) {
    v7 = *(_QWORD*)(v6 + 152);
  }
  else {
    v7 = v6;
  }
  v12[1] = strlen(v5);
  v10_.v10[0] = GameData_2001310;
  v10_.v11 = v10_.v10;
  game_879ce0(v7, v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
    goto LABEL_10;
  }
  if (v10_.v11 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
  }
  return 10;
}

__int64 game_facility_ObeliskHeroStartMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  result = ProcList_9bd480(v3);
  if (result != 0) {
    v5 = *(unsigned __int8*)(a1 + 83);
    v6 = result;
    if (v5 == 9 || (GameData_225d6e8[v5] & 1) != 0 ||
        *(_DWORD*)(a1 + 84) != 1) {
      snd_Fade_Fade_10c830(v10, 0.0f);
      snd_play_ff2d0((void*)(&v9), "SE_SYS_Decide_L", "SE_SYS_Decide_L", v10, 0,
                     65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v10);
    }
    else {
      v10[2] = a1;
      v10[0] = GameData_2077260;
      v10[1] = v5;
      v11 = v10;
      game_ProcList_Call_9bcfa0(result, v10);
      if (v11 == v10) {
        v7 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_16;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v11 + v7))((__int64)v11);
    }
  LABEL_16:
    v10[0] = GameData_20772e0;
    v10[1] = a1;
    v11 = v10;
    game_ProcList_Call_9bcfa0(v6, v10);
    if (v11 == v10) {
      v8 = 32;
    }
    else {
      if (v11 == nullptr) {
        return 13;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v11 + v8))((__int64)v11);
    return 13;
  }
  return result;
}

__int64 game_facility_ObeliskHeroStartMenuItem_ACall_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 464LL))(v1);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 568LL))(v1);
    if (result != 0) {
      v3 = result;
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 576LL))(v1);
      GameRoutine_16497b0(v3, v4);
      return GameRoutine_812170("V_PTV_Fot_Preview");
    }
  }
  return result;
}

__int64

game_facility_ObeliskHeroStartMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v6;
  char v7;
  int v8;
  int v9;
  char v10;

  v2 = *(_QWORD*)GameData_212efc0;
  if (*(_QWORD*)GameData_212efc0 != 0) {
    v3 = *(_QWORD*)(a1 + 8);
    v6 = 0;
    v4 = *(_BYTE*)(v3 + 83);
    LODWORD(v3) = *(_DWORD*)(v3 + 84);
    v7 = v4;
    v8 = v3;
    v9 = 1;
    v10 = 1;
    GameRoutine_f8a870(v2, &v6);
  }
  return 4;
}

#pragma GCC visibility pop
