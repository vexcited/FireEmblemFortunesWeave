#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_179ba60(__int64 result, long double);
__int64 GameRoutine_179bb70(__int64 result, long double);
extern __int64 GameData_225d4f0;
extern __int64 GameData_2264528;
__int64 UnitClothesSelectMenu_Unknown102(long double a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1631660(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_225d4e8;
__int64 UnitClothesSelectMenu_Unknown112();

__int64 UnitClothesSelectMenu_Unknown102(long double a1)
{
  if (GameData_2264528 != 0) {
    return 0;
  }
  if (*(_BYTE*)(GameData_225d4f0 + 208) == 1) {
    GameRoutine_179ba60(GameData_225d4f0, a1);
  }
  else {
    GameRoutine_179bb70(GameData_225d4f0, a1);
  }
  return 0;
}

__int64 UnitClothesSelectMenu_Unknown112()
{
  unsigned __int8* v0;
  int v1;
  int v2;
  int v3;
  __int64 v4;
  int v6;
  __int64 v7;
  _BYTE v8[200];

  v0 = (unsigned __int8*)GameData_225d4e8;
  if (GameData_225d4e8 == 0) {
    return 0;
  }
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_ClothChange_CharaMake",
                 "SE_SYS_ClothChange_CharaMake", v8, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v8);
  v1 = v0[276];
  if (v1 == 1) {
    v2 = v0[728];
  }
  else {
    v2 = v0[896];
  }
  v3 = v2 ^ 1;
  if (v1 == 1) {
    if (v0[728] != v3) {
      v0[728] = v3;
      v4 = 732;
    LABEL_11:
      if (v2 != 0) {
        v6 = 2;
      }
      else {
        v6 = 1;
      }
      *(_DWORD*)&v0[v4] = v6;
      GameRoutine_1631660(v0);
    }
  }
  else if (v0[896] != v3) {
    v0[896] = v3;
    v4 = 900;
    goto LABEL_11;
  }
  return 13;
}

#pragma GCC visibility pop
