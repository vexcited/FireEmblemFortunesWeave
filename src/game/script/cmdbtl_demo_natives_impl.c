#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 CmdBtlWindow_17c8500(void);
__int64 CmdBtlWindow_17c8620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CmdbtlPartyNatives_e73d00(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1627bf0(_QWORD);
__int64 GameRoutine_177ba70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17c1f00(void);
__int64 GameRoutine_17c2410(void);
__int64 GameRoutine_17c2620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_17c89c0(_QWORD);
__int64 GameRoutine_e734e0(_QWORD);
__int64 GameRoutine_e9cd90(_QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern __int64 GameData_212f520[4];
extern __int64 GameData_212f538;
extern __int64 GameData_212f5c0[3];
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_225ca88;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* game_g_frame_clock_ptr[3];
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 CmdbtlDemoNatives_f636a0(__int64 result);
__int64 CmdbtlDemoNatives_f63940(__int64 a1);
__int64 CmdbtlDemoNatives_f63a30(__int64 a1);

bool CmdbtlDemoNatives_f63ab0(__int64 a1) { return *(float*)(a1 + 152) < 1.0; }

__int64 GameHr_f6c730(__int64 a1);
__int64 CmdbtlDemoNatives_f63ad0(__int64 a1);
__int64 CmdbtlDemoNatives_f63b20();
__int64 CmdbtlDemoNatives_10092c0(__int64 a1);
float CmdbtlDemoNatives_10095c0(__int64 a1);
float CmdbtlDemoNatives_1009660(__int64 a1);
__int64 CmdbtlDemoNatives_1009770();

__int64 CmdbtlDemoNatives_f636a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _DWORD* v9;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  void* v22;

  v1 = *(_QWORD*)GameData_212f538;
  v2 = GameData_212f5c0[0];
  if (*(_QWORD*)GameData_212f538 == 0 || *(_QWORD*)GameData_212f5c0[0] == 0) {
    return result;
  }
  v4 = *(_QWORD*)(v1 + 48);
  v5 = *(_QWORD*)(v1 + 56);
  v6 = result;
  v7 = ((v5 - v4) << 7) - 1;
  if (v5 == v4) {
    v7 = 0;
  }
  v8 = *(_QWORD*)(v1 + 80) + *(_QWORD*)(v1 + 72);
  if (v7 == v8) {
    GameRoutine_17c89c0(v1 + 40);
    v4 = *(_QWORD*)(v1 + 48);
    v8 = *(_QWORD*)(v1 + 80) + *(_QWORD*)(v1 + 72);
  }
  *(_DWORD*)(*(_QWORD*)(v4 + 8 * (v8 >> 10)) + 4 * (v8 & 0x3FF)) =
      *(_DWORD*)(v1 + 88);
  ++*(_QWORD*)(v1 + 80);
  v21 = 0x100000002LL;
  result = CmdBtlWindow_17c8620(v1, &v21, 0, 0);
  *(_DWORD*)(v1 + 88) = 3;
  v9 = (_DWORD*)*GameData_212ea58;
  if (*(_QWORD*)v2 == 0 || v9 == nullptr) {
    return result;
  }
  GameRoutine_e9cd90(*GameData_212ea58);
  if (*(_QWORD*)v2 != 0) {
    *(_WORD*)(*(_QWORD*)v2 + 348LL) = 257;
  }
  v11 = v9[171];
  v12 = *(_DWORD*)(v6 + 160);
  if (v9[173] + v9[172] <= 1) {
    v13 = 1;
  }
  else {
    v13 = v9[173] + v9[172];
  }
  if (v9[170] != 0) {
    v14 = 0;
    v15 = 0;
    goto LABEL_20;
  }
  v17 = GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
    v15 = 0;
  }
  else {
    v22 = &GameData_1af5ec9;
    v21 = game_HashString(&GameData_1af5ec9);
    if (game_GameModeData_instance_ != 0 &&
        (v18 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v21)) != 0) {
      v15 = *(_DWORD*)(v18 + 32);
    }
    else {
      v15 = 0;
    }
    if (v9[170] != 0) {
      v14 = 0;
      goto LABEL_20;
    }
  }
  if ((*(_BYTE*)(*v17 + 12) & 1) != 0) {
    v14 = 0;
  }
  else {
    v22 = &GameData_1af5ec9;
    v21 = game_HashString(&GameData_1af5ec9);
    if (game_GameModeData_instance_ != 0 &&
        (v19 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v21)) != 0) {
      v14 = *(unsigned int*)(v19 + 32);
    }
    else {
      v14 = 0;
    }
    if (v9[170] != 0) {
    LABEL_20:
      v16 = 0;
      result = *(_QWORD*)v2;
      if (*(_QWORD*)v2 == 0) {
        return result;
      }
      return GameRoutine_17c2620(
          result,
          (unsigned int)(v12 + v11) |
              ((unsigned __int64)(unsigned int)(v12 + v11) << 32),
          (unsigned int)(v13 + v12), v15 | (unsigned __int64)(v14 << 32), v16,
          -1, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  if ((*(_BYTE*)(*v17 + 12) & 1) != 0) {
    goto LABEL_20;
  }
  v22 = &GameData_1ad7123;
  v21 = game_HashString(&GameData_1ad7123);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_20;
  }
  v20 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v21);
  if (v20 == 0) {
    goto LABEL_20;
  }
  v16 = *(unsigned int*)(v20 + 32);
  result = *(_QWORD*)v2;
  if (*(_QWORD*)v2 != 0) {
    return GameRoutine_17c2620(
        result,
        (unsigned int)(v12 + v11) |
            ((unsigned __int64)(unsigned int)(v12 + v11) << 32),
        (unsigned int)(v13 + v12), v15 | (unsigned __int64)(v14 << 32), v16, -1,
        0xFFFFFFFFLL, 0xFFFFFFFFLL);
  }
  return result;
}

__int64 CmdbtlDemoNatives_f63940(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;

  v2 = (__int64*)GameData_212f5c0[0];
  result = *(_QWORD*)GameData_212f5c0[0];
  if (*(_QWORD*)GameData_212f5c0[0] != 0 && *(int*)(result + 256) >= 1) {
    v4 = result + 24;
    v5 =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)result + 224LL))(result, 0);
    result = LayoutAccessor_1563280(v4, v5, 0);
    if ((result & 1) == 0) {
      v6 = *(unsigned __int8**)(a1 + 16);
      if (v6 != nullptr) {
        v7 = *v6;
        v8 = v7 > 0x10;
        v9 = (1 << v7) & 0x1CE00;
        if (!v8 && v9 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      result = *v2;
      if (*v2 != 0) {
        return GameRoutine_17c2410();
      }
    }
  }
  return result;
}

__int64 CmdbtlDemoNatives_f63a30(__int64 a1)
{
  __int64 result;
  _QWORD v3[2];
  _BYTE v4[200];

  snd_Fade_Fade_10c830(v4, 0.0f);
  *(struct PseudoSret*)(v3) =
      snd_play_ff2d0("SE_SYS_HPGauge_Up_lp", "SE_SYS_HPGauge_Up_lp", v4, 0,
                     65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  result = GameRoutine_112180(a1 + 168, v3);
  *(_BYTE*)(a1 + 156) = 1;
  return result;
}

__int64 CmdbtlDemoNatives_f63ad0(__int64 a1)
{
  long double v2;
  _BYTE v4[200];

  *(__n128*)&v2 = snd_Fade_Fade_10c830(v4, 0.0);
  snd_stop_ffc40(a1 + 168, v4, v2);
  return snd_Fade_Destroy_Fade(v4);
}

__int64 CmdbtlDemoNatives_f63b20()
{
  __int64 result;
  __int64 v1;

  result = GameData_22190b8;
  if (GameData_22190b8 != 0) {
    result = CmdBtlWindow_17c8500();
  }
  if (GameData_22197d8 != 0) {
    *(_WORD*)(GameData_22197d8 + 348) = 0;
  }
  if (GameData_225ca88 != 0) {
    v1 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v1 != 0) {
      return GameRoutine_1627bf0(v1 + 224);
    }
  }
  return result;
}

__int64 CmdbtlDemoNatives_10092c0(__int64 a1)
{
  __int64* v1;
  _DWORD* v2;
  int v3;
  __int64 result;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _DWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void* v28;

  v1 = GameData_212ea58;
  v2 = (_DWORD*)(*GameData_212ea58 + ((__int64)*(int*)(a1 + 152) << 7));
  if (v2[173] + v2[172] <= 1) {
    v3 = 1;
  }
  else {
    v3 = v2[173] + v2[172];
  }
  result = CmdbtlPartyNatives_e73d00(v2 + 168);
  v5 = v2[173] + v2[172];
  v6 = v2[171];
  if (v5 <= 1) {
    v5 = 1;
  }
  if (v5 >= v3) {
    v5 = v3;
  }
  v2[171] = v5;
  if (v5 != v6) {
    result = GameRoutine_e734e0(v2 + 168);
  }
  v7 = *(_QWORD*)GameData_212f538;
  v8 = GameData_212f5c0[0];
  if (*(_QWORD*)GameData_212f538 != 0 && *(_QWORD*)GameData_212f5c0[0] != 0) {
    v10 = *(_QWORD*)(v7 + 48);
    v11 = *(_QWORD*)(v7 + 56);
    v12 = ((v11 - v10) << 7) - 1;
    if (v11 == v10) {
      v12 = 0;
    }
    v13 = *(_QWORD*)(v7 + 80) + *(_QWORD*)(v7 + 72);
    if (v12 == v13) {
      GameRoutine_17c89c0(v7 + 40);
      v10 = *(_QWORD*)(v7 + 48);
      v13 = *(_QWORD*)(v7 + 80) + *(_QWORD*)(v7 + 72);
    }
    *(_DWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 10)) + 4 * (v13 & 0x3FF)) =
        *(_DWORD*)(v7 + 88);
    ++*(_QWORD*)(v7 + 80);
    v27 = 0x100000002LL;
    result = CmdBtlWindow_17c8620(v7, &v27, 0, 0);
    *(_DWORD*)(v7 + 88) = 3;
    if (*(_QWORD*)v8 != 0) {
      v14 = (_DWORD*)*v1;
      if (*v1 != 0) {
        GameRoutine_e9cd90(*v1);
        if (*(_QWORD*)v8 != 0) {
          *(_BYTE*)(*(_QWORD*)v8 + 348LL) = 1;
        }
        v15 = (unsigned int)v14[171];
        v16 = v14[173] + v14[172];
        if (v16 <= 1) {
          v17 = 1;
        }
        else {
          v17 = (unsigned int)v16;
        }
        if (v14[170] != 0) {
          v18 = 0;
          v19 = 0;
          goto LABEL_29;
        }
        v23 = GameData_212dec0[0];
        if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
          v19 = 0;
        }
        else {
          v28 = &GameData_1af5ec9;
          v27 = game_HashString(&GameData_1af5ec9);
          if (game_GameModeData_instance_ != 0 &&
              (v24 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), &v27)) != 0) {
            v19 = *(_DWORD*)(v24 + 32);
          }
          else {
            v19 = 0;
          }
          if (v14[170] != 0) {
            v18 = 0;
            goto LABEL_29;
          }
        }
        if ((*(_BYTE*)(*v23 + 12) & 1) != 0) {
          v18 = 0;
        }
        else {
          v28 = &GameData_1af5ec9;
          v27 = game_HashString(&GameData_1af5ec9);
          if (game_GameModeData_instance_ != 0 &&
              (v25 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), &v27)) != 0) {
            v18 = *(unsigned int*)(v25 + 32);
          }
          else {
            v18 = 0;
          }
          if (v14[170] != 0) {
            goto LABEL_29;
          }
        }
        if ((*(_BYTE*)(*v23 + 12) & 1) == 0) {
          v28 = &GameData_1ad7123;
          v27 = game_HashString(&GameData_1ad7123);
          if (game_GameModeData_instance_ != 0) {
            v26 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), &v27);
            if (v26 != 0) {
              v20 = *(unsigned int*)(v26 + 32);
              result = *(_QWORD*)v8;
              if (*(_QWORD*)v8 == 0) {
                return result;
              }
            LABEL_30:
              v21 = v14[204] + v14[205];
              if (v21 <= 1) {
                v22 = 1;
              }
              else {
                v22 = (unsigned int)v21;
              }
              return GameRoutine_17c2620(
                  result, v15 | (v15 << 32), v17,
                  v19 | (unsigned __int64)(v18 << 32), v20,
                  (unsigned __int64)(unsigned int)v14[203] << 32, v22,
                  0xFFFFFFFFLL);
            }
          }
        }
      LABEL_29:
        v20 = 0;
        result = *(_QWORD*)v8;
        if (*(_QWORD*)v8 == 0) {
          return result;
        }
        goto LABEL_30;
      }
    }
  }
  return result;
}

float CmdbtlDemoNatives_10095c0(__int64 a1)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  float v6;
  float v7;
  float result;

  if (GameData_22197d8 != 0 && *(int*)(GameData_22197d8 + 256) >= 1) {
    v1 = *(unsigned __int8**)(a1 + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  v6 = 60.0f / (float)*(int*)(game_g_frame_clock + 476);
  if (v6 <= 0.0f) {
    v7 = 0.0167f;
  }
  else {
    v7 = v6 * 0.0167f;
  }
  result = *(float*)(a1 + 160) + v7;
  *(float*)(a1 + 160) = result;
  return result;
}

float CmdbtlDemoNatives_1009660(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  float v9;
  float v10;
  float result;

  v2 = GameData_212f5c0[0];
  if (*GameData_212ea58 != 0 && *(_QWORD*)GameData_212f5c0[0] != 0) {
    if ((GameRoutine_17c1f00(), *(_QWORD*)v2 != 0) &&
            (*(_BYTE*)(*(_QWORD*)v2 + 296LL) & 1 |
             (*(_DWORD*)(*(_QWORD*)v2 + 360LL) == 5)) != 0 &&
            *(float*)(a1 + 160) >= 1.5f ||
        *(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) == 1) {
      v4 = *(unsigned __int8**)(a1 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
    }
  }
  v9 = 60.0f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v9 <= 0.0f) {
    v10 = 0.0167f;
  }
  else {
    v10 = v9 * 0.0167f;
  }
  result = *(float*)(a1 + 160) + v10;
  *(float*)(a1 + 160) = result;
  return result;
}

__int64 CmdbtlDemoNatives_1009770()
{
  __int64 result;

  result = GameData_22190b8;
  if (GameData_22190b8 != 0) {
    result = CmdBtlWindow_17c8500();
  }
  if (GameData_22197d8 != 0) {
    *(_BYTE*)(GameData_22197d8 + 348) = 0;
  }
  return result;
}

#pragma GCC visibility pop
