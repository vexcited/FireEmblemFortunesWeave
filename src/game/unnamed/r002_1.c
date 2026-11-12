#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ad36ea;
extern _UNKNOWN GameData_1af8f9c;
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c540;
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212de58[3];
extern __int128 GameData_21a6120;
extern _UNKNOWN GameData_21a6130;
extern __int64 GameData_21c9608;
extern __int64 GameData_21caab0;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3cd0;
extern __int64 GameData_21f3d10;
__int64 GameRoutine_120e900(void);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_716d80(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
float GameRoutine_7c4d10(__int64, float, float);
__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90c9e0(_QWORD);
__int64 GameRoutine_913ca0(_QWORD, _QWORD);
__int64 GameRoutine_960f80(_QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_9dbdc0(_QWORD);
__int64 GameRoutine_d7ad40(_QWORD);
__int64 game_120e900();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
extern __int64 game_GameModeData_instance_;
__int64 GameHr_9146d0();
__int64 GameHr_914770();

__int64 GameHr_90dac0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  _QWORD v15[2];

  if ((GameRoutine_90c9e0(a2) & 1) != 0) {
    v4 = *(_QWORD*)(a2 + 16);
    if (v4 != 0) {
      v5 = GameRoutine_9dbdc0(v4);
      if (GameData_21caab0 != 0) {
        v6 = 90;
        if (*(_BYTE*)(GameData_21caab0 + 13) == 0) {
          v6 = 88;
        }
        v7 = 92;
        if (*(_BYTE*)(GameData_21caab0 + 13) != 2) {
          v7 = v6;
        }
      }
      else {
        v7 = 88;
      }
      v13 = *(unsigned __int16*)(v4 + v7);
      if ((_BYTE)v5 != 0) {
        v13 = (unsigned int)GameRoutine_9db9e0(v5, v13);
      }
    }
    else {
      v13 = 0;
    }
    *(_DWORD*)(a1 + 108) += v13;
  }
  else {
    v8 = *(_DWORD*)(a1 + 104);
    v9 = *(_QWORD*)(a2 + 16);
    if (v9 != 0) {
      v10 = GameRoutine_9dbdc0(v9);
      if (GameData_21caab0 != 0) {
        v11 = 90;
        if (*(_BYTE*)(GameData_21caab0 + 13) == 0) {
          v11 = 88;
        }
        v12 = 92;
        if (*(_BYTE*)(GameData_21caab0 + 13) != 2) {
          v12 = v11;
        }
      }
      else {
        v12 = 88;
      }
      v13 = *(unsigned __int16*)(v9 + v12);
      if ((_BYTE)v10 != 0) {
        v13 = (unsigned int)GameRoutine_9db9e0(v10, v13);
      }
    }
    else {
      v13 = 0;
    }
    *(_DWORD*)(a1 + 104) = (v8 - v13) & ~((v8 - (int)v13) >> 31);
  }
  v15[1] = &GameData_1af8f9c;
  result = GameRoutine_7a86e0(&GameData_1af8f9c, v13);
  v15[0] = result;
  if (GameData_21caab0 != 0) {
    return GameRoutine_828dc0(*(_QWORD*)(GameData_21caab0 + 48), v15, 1);
  }
  return result;
}

__int64 GameHr_9146d0()
{
  __int64 result;
  __int64 v1;
  struct {
    __int64 v2;
    void* v3;
  } v2_;

  v2_.v3 = &GameData_1ad36ea;
  result = game_HashString((__int64)&GameData_1ad36ea);
  v2_.v2 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v2_.v2);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v2_.v3 = &GameData_1ad36ea;
      v2_.v2 = game_HashString((__int64)&GameData_1ad36ea);
      result = game_VariableManager_SetFlag((__int64)&v2_.v2, 0);
      v1 = *(_QWORD*)(GameData_21c9608 + 328);
      if ((v1 & 0x10) != 0) {
        *(_QWORD*)(GameData_21c9608 + 328) = v1 & 0xFFFFFFFFFFFFFFEFLL;
      }
    }
  }
  return result;
}

__int64 GameHr_914770()
{
  __int64 v0;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    v0 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v0 & 8) == 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v0 | 8;
      return game_120e900();
    }
  }
  return result;
}

__int64 GameHr_9149c0()
{
  __int64 v0;

  v0 = *(_QWORD*)(GameData_21f3c98 + 96);
  GameRoutine_d7ad40(v0);
  return *(unsigned __int8*)(v0 + 76);
}

__int64 GameHr_914cc0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;

  if (*(_QWORD*)(GameData_21c9608 + 240) !=
      *(_QWORD*)(GameData_21c9608 + 232)) {
    result = GameRoutine_913ca0(GameData_21f3cd0, GameData_21c9608 + 232);
    v1 = GameData_21c9608;
    v3 = *(_QWORD*)(GameData_21c9608 + 232);
    v2 = *(_QWORD*)(GameData_21c9608 + 240);
    if (v3 != v2) {
      v4 = *(_QWORD*)(GameData_21c9608 + 240);
      v5 = GameData_212bf68;
      do {
        v6 = *(_BYTE*)(v4 - 24);
        v4 -= 24;
        if ((v6 & 1) != 0) {
          v7 = *(_QWORD*)(v2 - 8);
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)v5 + v8, v7);
          }
        }
        v2 = v4;
      } while (v4 != v3);
    }
    *(_QWORD*)(v1 + 240) = v3;
  }
  return result;
}

__int64 GameHr_960d20(__int128* a1, _BYTE** a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  __int128 v14;
  __int128 v15;
  float v16;
  float v17;
  __int128 v18;
  __int128 v19;
  float v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  _QWORD* v28;
  int v29;
  __int64 result;
  float v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  float v36;
  int v37;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v32 = a4;
    v33 = a3;
    v37 = a6;
    v34 = GameRoutine_1a09fd0(&GameData_21a6130);
    a6 = v37;
    a3 = v33;
    a4 = v32;
    if (v34 != 0) {
      v35 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v35;
      GameRoutine_1a09fe0(&GameData_21a6130);
      a6 = v37;
      a3 = v33;
      a4 = v32;
    }
  }
  v9 = *((_QWORD*)&GameData_21a6120 + 1);
  *((_WORD*)a1 + 12) = 0;
  *((_QWORD*)a1 + 1) = v9;
  *((float*)a1 + 4) = (float)a5;
  *((float*)a1 + 5) = (float)a6;
  *(_QWORD*)a1 = GameData_21a6120;
  v10 = (float)((float)((float)(a3 + 256) * 5.0) + 2.5) + -1280.0;
  v11 = *GameData_212ce80[0];
  v12 = (float)((float)((float)(a4 + 256) * 5.0) + 2.5) + -1280.0;
  if (*GameData_212ce80[0] != 0) {
    v36 = (float)((float)((float)(a4 + 256) * 5.0) + 2.5) + -1280.0;
    v13 = GameRoutine_7c4d10(
        *(_QWORD*)(v11 + 61456),
        (float)((float)((float)(a3 + 256) * 5.0) + 2.5) + -1280.0, v12);
    v12 = v36;
  }
  else {
    v13 = 0.0;
  }
  *(float*)a1 = v10;
  *((float*)a1 + 1) = v13;
  v14 = *a1;
  *(_QWORD*)&v15 = *(_QWORD*)a1;
  *((_QWORD*)&v15 + 1) = LODWORD(v12);
  *a1 = v15;
  if (a5 >= 2) {
    v16 = (float)(unsigned int)(a5 - 1) * 2.5;
    v17 = v16 + v12;
    *(float*)a1 = v16 + *(float*)&v14;
    v18 = *a1;
    *(_QWORD*)&v19 = *(_QWORD*)a1;
    *((_QWORD*)&v19 + 1) = LODWORD(v17);
    *a1 = v19;
    if (v11 != 0) {
      v20 = GameRoutine_7c4d10(*(_QWORD*)(v11 + 61456), *(float*)&v18, v17);
    }
    else {
      v20 = 0.0;
    }
    *((float*)a1 + 1) = v20;
  }
  v21 = *a2;
  if (v21 != nullptr && (v22 = *(_QWORD*)(*GameData_212de58[0] + 112),
                         (v23 = *(_QWORD*)(v22 + 24)) != 0)) {
    v24 = 0;
    if (*v21 != 0) {
      v25 = *(_DWORD*)(v22 + 32);
      if (v25 != 0) {
        v26 = 0;
        while (1) {
          v27 = (v25 + v26) >> 1;
          v28 = (_QWORD*)(v23 + 336LL * v27);
          v29 = GameRoutine_1a09d30(*v28, v21);
          if (v29 == 0) {
            break;
          }
          if (v29 < 0) {
            v26 = v27 + 1;
          }
          else {
            v25 = (v25 + v26) >> 1;
          }
          if (v26 == v25) {
            goto LABEL_20;
          }
        }
        v24 = v28[14];
      }
    }
  }
  else {
  LABEL_20:
    v24 = 0;
  }
  result = GameRoutine_960f80(v24);
  if ((unsigned __int8)result == 2) {
    v31 = 2.5;
  }
  else {
    if ((unsigned __int8)result != 3) {
      return result;
    }
    v31 = 5.0;
  }
  *((float*)a1 + 1) = v31 + *((float*)a1 + 1);
  return result;
}

float GameHr_9a2630(float* a1, float* a2, char a3, char a4)
{
  float result;
  float v5;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;

  result = *a2;
  v5 = a2[1];
  if (*a2 == 1.0 && v5 == 1.0 && a2[2] == 1.0 && a2[3] == 1.0 && a2[4] == 1.0 &&
      a2[5] == 1.0 && a2[6] == 1.0 && a2[7] == 1.0 && a2[8] == 1.0) {
    return result;
  }
  if ((a3 & 1) == 0) {
    if (result < 1.0) {
      a1[3] = result * a1[3];
      goto LABEL_34;
    }
    v14 = result + -1.0;
  LABEL_33:
    a1[2] = v14 + a1[2];
    goto LABEL_34;
  }
  if (v5 >= 1.0) {
    v14 = v5 + -1.0;
    goto LABEL_33;
  }
  a1[3] = v5 * a1[3];
LABEL_34:
  v15 = a2[4];
  if (v15 >= 1.0) {
    a1[6] = (float)(v15 + -1.0) + a1[6];
  }
  else {
    a1[7] = v15 * a1[7];
  }
  v16 = a2[6];
  if (v16 >= 1.0) {
    a1[10] = (float)(v16 + -1.0) + a1[10];
  }
  else {
    a1[11] = v16 * a1[11];
  }
  v17 = a2[7];
  if (v17 >= 1.0) {
    a1[22] = (float)(v17 + -1.0) + a1[22];
  }
  else {
    a1[23] = v17 * a1[23];
  }
  v18 = a2[8];
  if (v18 >= 1.0) {
    a1[14] = (float)(v18 + -1.0) + a1[14];
  }
  else {
    a1[15] = v18 * a1[15];
  }
  v19 = a2[5];
  if (v19 >= 1.0) {
    a1[18] = (float)(v19 + -1.0) + a1[18];
    if ((a4 & 1) == 0) {
    LABEL_48:
      v20 = a2[2];
      if (v20 >= 1.0) {
        result = (float)(v20 + -1.0) + a1[26];
        a1[26] = result;
      }
      else {
        result = v20 * a1[27];
        a1[27] = result;
      }
      return result;
    }
  }
  else {
    a1[19] = v19 * a1[19];
    if ((a4 & 1) == 0) {
      goto LABEL_48;
    }
  }
  v21 = a2[3];
  if (v21 >= 1.0) {
    result = (float)(v21 + -1.0) + a1[30];
    a1[30] = result;
  }
  else {
    result = v21 * a1[31];
    a1[31] = result;
  }
  return result;
}

#pragma GCC visibility pop
