#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_156e270(_QWORD);
__int64 GameRoutine_16499c0(_QWORD);
__int64 GameRoutine_1649e50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fa5798[])();
extern __int64 (*GameData_1fa5818[])();
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea48;
extern __int64 game_GameModeData_instance_;
struct PseudoSret GameRoutine_878ea0(_QWORD);
bool SystemMenuItem_RetirePart3_Unknown58();
__int64 SystemMenuItem_RetirePart3_Unknown25(__int64 a1);
__int64 GameRoutine_879610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dbce10(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_212c6a0[3];
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64
game_map_anonymous_SystemMenuItem_RetirePart3_ACall_closure_Invoke(__int64 a1);

bool SystemMenuItem_RetirePart3_Unknown58()
{
  __int64 v0;
  __int64 v1;
  const char* v2;
  _QWORD v4[2];
  __int64 v5;
  char v6;

  v0 = GameData_21eea48;
  if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
  LABEL_7:
    v2 = (const char*)game_util_Format("%s_%s_%d", "Part", "Ism", 3);
    v4[0] = game_util_Format("%s/%s", "000", v2);
    v4[1] = strlen(v4[0]);
    *(struct PseudoSret*)(&v5) = GameRoutine_878ea0(v4);
    if ((_BYTE)v5 != 0 && (v6 & 0x40) == 0 &&
        game_GameModeData_instance_ != 0 &&
        HIDWORD(v5) == *(_DWORD*)(game_GameModeData_instance_ + 8) &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      return *(_DWORD*)(game_GameModeData_instance_ + 64) == 1;
    }
  }
  else {
    while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v0 + 16) + 88LL))(
                *(_QWORD*)(v0 + 16)) &
            1) != 0) {
      v0 = *(_QWORD*)(v0 + 8);
      if ((__int64*)v0 == &GameData_21eea40) {
        v1 = GameData_21eea48;
        if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
          goto LABEL_7;
        }
        while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 16) + 96LL))(
                    *(_QWORD*)(v1 + 16)) &
                1) != 0) {
          v1 = *(_QWORD*)(v1 + 8);
          if ((__int64*)v1 == &GameData_21eea40) {
            goto LABEL_7;
          }
        }
        return false;
      }
    }
  }
  return false;
}

__int64 SystemMenuItem_RetirePart3_Unknown25(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  const char* v16;
  _QWORD v17[4];
  _QWORD* v18;
  char v19;

  v2 = GameData_21eea48;
  if ((__int64*)GameData_21eea48 != &GameData_21eea40) {
    while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 16) + 88LL))(
                *(_QWORD*)(v2 + 16)) &
            1) != 0) {
      v2 = *(_QWORD*)(v2 + 8);
      if ((__int64*)v2 == &GameData_21eea40) {
        v3 = GameData_21eea48;
        if ((__int64*)GameData_21eea48 == &GameData_21eea40) {
          goto LABEL_7;
        }
        while (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 16) + 96LL))(
                    *(_QWORD*)(v3 + 16)) &
                1) != 0) {
          v3 = *(_QWORD*)(v3 + 8);
          if ((__int64*)v3 == &GameData_21eea40) {
            goto LABEL_7;
          }
        }
        return 1;
      }
    }
    return 1;
  }

LABEL_7:
  v4 = (const char*)game_util_Format("%s_%s_%d", "Part", "Ism", 3);
  v14[0] = game_util_Format("%s/%s", "000", v4);
  v14[1] = strlen(v14[0]);
  *(struct PseudoSret*)(v17) = GameRoutine_878ea0(v14);
  if (LOBYTE(v17[0]) == 0 || (v19 & 0x40) != 0 ||
      game_GameModeData_instance_ == 0 ||
      HIDWORD(v17[0]) != *(_DWORD*)(game_GameModeData_instance_ + 8) ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      *(_DWORD*)(game_GameModeData_instance_ + 64) != 1) {
    return 1;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v17[1] = a1;
  v16 = "MID_Restart_ReturnObelisk_Confirm";
  v17[0] = GameData_1fa5798;
  v13 = v12;
  v18 = v17;
  v15 = v14;
  v14[0] = GameData_1fa5818;
  v12[0] = GameData_1fa5818;
  v6 = GameRoutine_871860(v5, &v16, v17, v14, v12);
  if (v13 == v12) {
    v7 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_20;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13 + v7))((__int64)v13);

LABEL_20:
  if (v15 == v14) {
    v9 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_25;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v15 + v9))((__int64)v15);

LABEL_25:
  if (v18 == v17) {
    v10 = 32;
    goto LABEL_29;
  }
  if (v18 != nullptr) {
    v10 = 40;
  LABEL_29:
    (*(void (**)(__int64))(*v18 + v10))((__int64)v18);
  }
  v11 = GameRoutine_16499c0(v6);
  if ((GameRoutine_156e270(v11) & 1) == 0) {
    GameRoutine_1649e50(
        v6, "MID_Restart_ReturnObelisk_Part3_Chapter1_Annotation", 1, 0);
  }
  return 12;
}

__int64

game_map_anonymous_SystemMenuItem_RetirePart3_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _BYTE v5[200];

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  }
  if ((GameRoutine_879610(v2, 6, 9, 3, 0) & 1) == 0) {
    return 1;
  }
  GameRoutine_dbce10(*(_QWORD*)GameData_212c6a0[0], 1);
  snd_Fade_Fade_10c830(v5, 0.0f);
  *(struct PseudoSret*)(&v4) =
      snd_play_ff2d0("SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light", v5, 0,
                     65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v5);
  return 4;
}

#pragma GCC visibility pop
