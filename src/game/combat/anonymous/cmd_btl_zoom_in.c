#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109fd70(_QWORD, _QWORD, double, float);
__int64 GameRoutine_10a04e0(__int64*, float*, float*, __int64);
__int64 GameRoutine_10a0720(__int64*, float*, float*, __int64);
extern __int64 (*GameData_200cff8[])();
extern __int64 (*GameData_200d078[])();
extern __int64 (*GameData_200d0f8[])();
extern __int64 (*GameData_200d178[])();
extern __int64 (*GameData_200d1f8[])();
extern __int64 (*GameData_200d278[])();
extern __int64 (*GameData_200d2f8[])();
extern __int64 (*GameData_200d378[])();
extern __int64 (*GameData_200d3f8[])();
extern __int64 (*GameData_200d478[])();
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212d448[9];
extern __int64* GameData_212ea58;
_QWORD* CmdBtlZoomIn_Unknown18(__int64* a1, __int64 a2);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 CombatLegionManager_e2cca0(_QWORD);
__int64 GameRoutine_10ee080(_QWORD);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_e80840(_QWORD);
__int64 game_GameView_Update(_QWORD);
extern __int64 (*GameData_1fecdb8[])();
extern __int64 GameData_21c96a8;
extern __int64 GameData_2203490;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92e0;
__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure0_Invoke();
__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure1_Invoke();
__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure2_Invoke(__int64 a1);
__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure3_Invoke(__int64 a1);
__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure4_Invoke();
void game_combat_anonymous_CmdBtlZoomIn_Schedule_closure8_Invoke(__int64 a1,
                                                                 float* a2);
__int64 GameRoutine_809dc0(_QWORD, _QWORD, long double);
__n128 CombatLegionManager_e2cca0_alt1(_QWORD) __asm__(
    "CombatLegionManager_e2cca0");
extern _UNKNOWN* GameData_212c960;
float powf(long double, float);
__int64
game_combat_anonymous_CmdBtlZoomIn_Schedule_closure_Invoke(long double a1);
__int64
game_combat_anonymous_CmdBtlZoomIn_Schedule_closure5_Invoke(__int64 result);
void game_combat_anonymous_CmdBtlZoomIn_Schedule_closure6_Invoke(
    __int64 a1, unsigned __int32* a2);
__int64
game_combat_anonymous_CmdBtlZoomIn_Schedule_closure7_Invoke(__int64 result);

_QWORD* CmdBtlZoomIn_Unknown18(__int64* a1, __int64 a2)
{
  int v3;
  int v4;
  _QWORD* v5;
  _QWORD* v6;
  float v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* result;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD v32[4];
  _QWORD* v33;
  int v34;
  float v35;

  v3 = *(_DWORD*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 112LL);
  if (*GameData_212ea58 == 0) {
    if ((v3 & 0x80) == 0) {
      goto LABEL_8;
    }
  LABEL_19:
    v33 = v32;
    v32[0] = GameData_200cff8;
    v34 = -1082130432;
    v35 = 0.0f;
    v13 = (_QWORD*)a1[20];
    if ((unsigned __int64)v13 >= a1[21]) {
      v14 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34,
                                         (__int64)v32);
    }
    else {
      v13[2] = GameData_200cff8;
      v14 = v13 + 8;
      v13[6] = v13 + 2;
      *v13 = 0xBF80000000000000LL;
    }
    v15 = v33;
    a1[20] = (__int64)v14;
    if (v15 == v32) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_27;
      }
      v16 = 40;
    }
    (*(void (**)(_QWORD*))(*v15 + v16))(v15);
    v14 = (_QWORD*)a1[20];
  LABEL_27:
    v33 = v32;
    v32[0] = GameData_200d078;
    v32[1] = a1;
    v35 = 0.8f;
    v34 = -1082130432;
    if ((unsigned __int64)v14 >= a1[21]) {
      v17 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34,
                                         (__int64)v32);
    }
    else {
      v14[2] = GameData_200d078;
      v14[3] = a1;
      v14[6] = v14 + 2;
      *v14 = 0xBF8000003F4CCCCDLL;
      v17 = v14 + 8;
    }
    v18 = v33;
    a1[20] = (__int64)v17;
    if (v18 == v32) {
      v19 = 32;
    }
    else {
      if (v18 == nullptr) {
      LABEL_35:
        v33 = v32;
        v32[0] = GameData_200d0f8;
        v34 = -1082130432;
        v35 = 1.0f;
        if ((unsigned __int64)v17 >= a1[21]) {
          goto LABEL_67;
        }
        v17[2] = GameData_200d0f8;
        v20 = v17 + 2;
        v21 = 0xBF8000003F800000LL;
      LABEL_57:
        v17[6] = v20;
        *v17 = v21;
        v23 = (__int64)(v17 + 8);
        goto LABEL_68;
      }
      v19 = 40;
    }
    (*(void (**)(_QWORD*))(*v18 + v19))(v18);
    v17 = (_QWORD*)a1[20];
    goto LABEL_35;
  }
  if ((v3 & 0x80) != 0) {
    goto LABEL_19;
  }
  v4 = *(_DWORD*)(*GameData_212ea58 + 1208);
  if ((v4 & 2) != 0) {
    v33 = v32;
    v32[0] = GameData_200d178;
    v32[1] = a1;
    v34 = -1082130432;
    v35 = 0.0f;
    v22 = (_QWORD*)a1[20];
    if ((unsigned __int64)v22 < a1[21]) {
      v22[2] = GameData_200d178;
      v22[3] = a1;
      v23 = (__int64)(v22 + 8);
      v22[6] = v22 + 2;
      *v22 = 0xBF80000000000000LL;
      goto LABEL_68;
    }
    goto LABEL_67;
  }
  if ((v4 & 1) != 0) {
    v33 = v32;
    v32[0] = GameData_200d1f8;
    v32[1] = a1;
    v34 = -1082130432;
    v35 = 0.0f;
    v5 = (_QWORD*)a1[20];
    if ((unsigned __int64)v5 >= a1[21]) {
      v6 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34,
                                        (__int64)v32);
    }
    else {
      v5[2] = GameData_200d1f8;
      v5[3] = a1;
      v6 = v5 + 8;
      v5[6] = v5 + 2;
      *v5 = 0xBF80000000000000LL;
    }
    v30 = v33;
    a1[20] = (__int64)v6;
    if (v30 == v32) {
      v31 = 32;
    }
    else {
      if (v30 == nullptr) {
        goto LABEL_65;
      }
      v31 = 40;
    }
    (*(void (**)(_QWORD*))(*v30 + v31))(v30);
    v6 = (_QWORD*)a1[20];
  LABEL_65:
    v33 = v32;
    v32[0] = GameData_200d278;
    v35 = 0.2f;
    v34 = -1082130432;
    if ((unsigned __int64)v6 < a1[21]) {
      v6[2] = GameData_200d278;
      v6[6] = v6 + 2;
      *v6 = 0xBF8000003E4CCCCDLL;
      v23 = (__int64)(v6 + 8);
      goto LABEL_68;
    }
  LABEL_67:
    v23 = GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34, (__int64)v32);
  LABEL_68:
    a1[20] = v23;
    result = v33;
    if (v33 != v32) {
      goto LABEL_69;
    }
  LABEL_52:
    v29 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v29))((__int64)result);
  }

LABEL_8:
  if ((v3 & 0x100000) != 0) {
    v33 = v32;
    v32[0] = GameData_200d2f8;
    v32[1] = a1;
    v34 = -1082130432;
    v35 = 0.5f;
    v24 = (_QWORD*)a1[20];
    if ((unsigned __int64)v24 >= a1[21]) {
      v17 = (_QWORD*)GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34,
                                         (__int64)v32);
    }
    else {
      v24[2] = GameData_200d2f8;
      v24[3] = a1;
      v17 = v24 + 8;
      v24[6] = v24 + 2;
      *v24 = 0xBF8000003F000000LL;
    }
    v26 = v33;
    a1[20] = (__int64)v17;
    if (v26 == v32) {
      v27 = 32;
    }
    else {
      if (v26 == nullptr) {
      LABEL_55:
        v33 = v32;
        v32[0] = GameData_200d378;
        v32[1] = a1;
        v34 = 1065353216;
        v35 = 0.0f;
        if ((unsigned __int64)v17 >= a1[21]) {
          v23 = GameRoutine_10a0720(a1 + 19, &v35, (float*)&v34, (__int64)v32);
          goto LABEL_68;
        }
        v17[2] = GameData_200d378;
        v20 = v17 + 2;
        v21 = 0x3F80000000000000LL;
        v17[3] = a1;
        goto LABEL_57;
      }
      v27 = 40;
    }
    (*(void (**)(_QWORD*))(*v26 + v27))(v26);
    v17 = (_QWORD*)a1[20];
    goto LABEL_55;
  }
  v7 = 1.0f;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v8 & 8) != 0) {
      v9 = 2;
    }
    else {
      v9 = 3;
    }
    if ((v9 & v8) != 0) {
      v7 = 1.0f;
    }
    else {
      v7 = 0.0f;
    }
  }
  v10 = a1[20];
  v11 = a1[21];
  v33 = v32;
  v32[0] = GameData_200d3f8;
  v32[1] = a1;
  v34 = -1082130432;
  v35 = v7 * 0.5f;
  if (v10 >= v11) {
    v12 = GameRoutine_10a04e0(a1 + 19, &v35, (float*)&v34, (__int64)v32);
  }
  else {
    *(_QWORD*)(v10 + 16) = GameData_200d3f8;
    *(_QWORD*)(v10 + 24) = a1;
    v12 = v10 + 64;
    *(float*)v10 = v7 * 0.5f;
    *(_DWORD*)(v10 + 4) = -1082130432;
    *(_QWORD*)(v10 + 48) = v10 + 16;
  }
  a1[20] = v12;
  if (v33 == v32) {
    v25 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_51;
    }
    v25 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v33 + v25))(v33, a2);

LABEL_51:
  v32[0] = GameData_200d478;
  v32[1] = a1;
  v33 = v32;
  GameRoutine_109fd70(a1 + 19, v32, 0.0f, v7);
  result = v33;
  if (v33 == v32) {
    goto LABEL_52;
  }

LABEL_69:
  if (result == nullptr) {
    return result;
  }
  v29 = 40;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v29))((__int64)result);
}

__int64

game_combat_anonymous_CmdBtlZoomIn_Schedule_closure_Invoke(long double a1)
{
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    LODWORD(a1) = 1045220557;
    return GameRoutine_809dc0(game_ProcFadeView_instance_, GameData_212c960,
                              a1);
  }
  return result;
}

__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure0_Invoke()
{
  __int64 result;
  __int64 v1;
  int v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  result = GameRoutine_10ee080(1);
  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    result = game_GameView_Update(result);
  }
  v1 = GameData_2203490;
  if (GameData_2203490 != 0) {
    v2 = *(_DWORD*)(GameData_2203490 + 632);
    *(_DWORD*)(GameData_2203490 + 632) = v2 + 1;
    if (v2 == 0) {
      (**(void (***)(__int64))(v1 + 624))(v1 + 624);
    }
    v4[0] = GameData_1fecdb8;
    v5 = v4;
    CmdbtlPartyNatives_e9a800(v1, v4);
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
      LABEL_11:
        result = GameRoutine_e80840(v1 + 16);
        goto LABEL_12;
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v5 + v3))((__int64)v5);
    goto LABEL_11;
  }
LABEL_12:
  if (GameData_21c96a8 != 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = 1065353216;
  }
  return result;
}

__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure1_Invoke()
{
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return GameRoutine_809ba0(0.2);
  }
  return result;
}

__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure2_Invoke(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  if (GameData_21c96a8 != 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = 1065353216;
  }
  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    a1 = game_GameView_Update(a1);
  }
  v1 = GameData_2203490;
  if (GameData_2203490 != 0) {
    v2 = *(_DWORD*)(GameData_2203490 + 632);
    *(_DWORD*)(GameData_2203490 + 632) = v2 + 1;
    if (v2 == 0) {
      (**(void (***)(__int64))(v1 + 624))(v1 + 624);
    }
    v5[0] = GameData_1fecdb8;
    v6 = v5;
    CmdbtlPartyNatives_e9a800(v1, v5);
    if (v6 == v5) {
      v3 = 32;
    }
    else {
      if (v6 == nullptr) {
      LABEL_13:
        a1 = GameRoutine_e80840(v1 + 16);
        return CombatLegionManager_e2cca0(a1);
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
    goto LABEL_13;
  }
  return CombatLegionManager_e2cca0(a1);
}

__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure3_Invoke(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  if (GameData_21c96a8 != 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = 1065353216;
  }
  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    a1 = game_GameView_Update(a1);
  }
  v1 = GameData_2203490;
  if (GameData_2203490 != 0) {
    v2 = *(_DWORD*)(GameData_2203490 + 632);
    *(_DWORD*)(GameData_2203490 + 632) = v2 + 1;
    if (v2 == 0) {
      (**(void (***)(__int64))(v1 + 624))(v1 + 624);
    }
    v5[0] = GameData_1fecdb8;
    v6 = v5;
    CmdbtlPartyNatives_e9a800(v1, v5);
    if (v6 == v5) {
      v3 = 32;
    }
    else {
      if (v6 == nullptr) {
      LABEL_13:
        a1 = GameRoutine_e80840(v1 + 16);
        return CombatLegionManager_e2cca0(a1);
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
    goto LABEL_13;
  }
  return CombatLegionManager_e2cca0(a1);
}

__int64 game_combat_anonymous_CmdBtlZoomIn_Schedule_closure4_Invoke()
{
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return GameRoutine_809ba0(0.2);
  }
  return result;
}

__int64

game_combat_anonymous_CmdBtlZoomIn_Schedule_closure5_Invoke(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    result = game_GameView_Update(result);
  }
  v1 = GameData_2203490;
  if (GameData_2203490 != 0) {
    v2 = *(_DWORD*)(GameData_2203490 + 632);
    *(_DWORD*)(GameData_2203490 + 632) = v2 + 1;
    if (v2 == 0) {
      (**(void (***)(__int64))(v1 + 624))(v1 + 624);
    }
    v4[0] = GameData_1fecdb8;
    v5 = v4;
    CmdbtlPartyNatives_e9a800(v1, v4);
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
        return GameRoutine_e80840(v1 + 16);
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v5 + v3))((__int64)v5);
    return GameRoutine_e80840(v1 + 16);
  }
  return result;
}

void game_combat_anonymous_CmdBtlZoomIn_Schedule_closure6_Invoke(
    __int64 a1, unsigned __int32* a2)
{
  unsigned __int32 v2;
  long double v3;
  float v4;

  v2 = *a2;
  *(__n128*)&v3 = CombatLegionManager_e2cca0_alt1(a1);
  LODWORD(v3) = v2;
  v4 = powf(v3, 0.5);
  if (GameData_21c96a8 != 0) {
    *(float*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) =
        1.0 - (float)((float)(1.0 - v4) * (float)(1.0 - v4));
  }
}

__int64

game_combat_anonymous_CmdBtlZoomIn_Schedule_closure7_Invoke(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    result = game_GameView_Update(result);
  }
  v1 = GameData_2203490;
  if (GameData_2203490 != 0) {
    v2 = *(_DWORD*)(GameData_2203490 + 632);
    *(_DWORD*)(GameData_2203490 + 632) = v2 + 1;
    if (v2 == 0) {
      (**(void (***)(__int64))(v1 + 624))(v1 + 624);
    }
    v4[0] = GameData_1fecdb8;
    v5 = v4;
    CmdbtlPartyNatives_e9a800(v1, v4);
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
        return GameRoutine_e80840(v1 + 16);
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v5 + v3))((__int64)v5);
    return GameRoutine_e80840(v1 + 16);
  }
  return result;
}

void game_combat_anonymous_CmdBtlZoomIn_Schedule_closure8_Invoke(__int64 a1,
                                                                 float* a2)
{
  float v2;
  float v3;

  v2 = *a2;
  CombatLegionManager_e2cca0(a1);
  v3 = (float)((float)((float)(v2 * (float)(v2 * v2)) * 0.5f) * 8.0f) + 0.0f;
  if (v2 >= 0.5f) {
    v3 = (float)((float)((float)((float)(0.5f - (float)(v2 + -0.5f)) *
                                 (float)((float)(0.5f - (float)(v2 + -0.5f)) *
                                         (float)(0.5f - (float)(v2 + -0.5f)))) *
                         -0.5f) *
                 8.0f) +
         1.0f;
  }
  if (GameData_21c96a8 != 0) {
    *(float*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = v3;
  }
}

#pragma GCC visibility pop
