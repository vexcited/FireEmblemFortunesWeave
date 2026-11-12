#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10ecb60(long double);
__int64 GameRoutine_809ba0(float);
__int64 GameRoutine_809dc0(_QWORD, _QWORD, long double);
__int64 game_GameView_Update(_QWORD);
__n128 CombatLegionManager_e2cca0(_QWORD);
__n128 GameRoutine_106e1a0(__int64);
extern _UNKNOWN* GameData_212c960;
extern __int64 GameData_21cd0d0;
extern __int64 GameData_21ec7b0;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92e0;
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure0_Invoke(__int64 a1);
__n128 game_combat_anonymous_ZoomFadeIn_Schedule_closure1_Invoke_alt1(
    long double a1) __asm__("game_combat_anonymous_ZoomFadeIn_Schedule_"
                            "closure1_Invoke");
void game_combat_anonymous_ZoomFadeIn_Schedule_closure2_Invoke();
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure3_Invoke(__int64 a1);
__int64 CmdBtlZoomIn_10a04e0(__int64*, float*, float*, __int64);
__int64 CmdBtlZoomIn_10a0720(__int64*, float*, float*, __int64);
__int64 GameRoutine_758bc0(float);
extern __int64 (*GameData_200d5c0[])();
extern __int64 (*GameData_200d640[])();
extern __int64 (*GameData_200d6c0[])();
extern __int64 (*GameData_200d740[])();
extern __int64 (*GameData_200d7c0[])();
extern __int64 GameData_21c96a8;
void BattleUtil_7a96a0(float);
__int64 game_combat_anonymous_ZoomFadeIn_Schedule(__int64* a1, __int64 a2);
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure_Invoke(__int64 a1,
                                                                 float* a2);
__int64 CombatLegionManager_e2cca0_alt1() __asm__("CombatLegionManager_e2cca0");
__int64 GameHr_106e1a0(__int64 result);
__int64 game_809ba0(__int64);
__int64 game_GameView_Update_alt1() __asm__("game_GameView_Update");
void GameRoutine_10ecb60_alt1() __asm__("GameRoutine_10ecb60");
__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure1_Invoke();

__int64 game_combat_anonymous_ZoomFadeIn_Schedule(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  float v13;
  float v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  int v27;
  float v28;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_200d5c0;
  v27 = 1065353216;
  v28 = 0x0.0p+0f;
  v3 = (_QWORD*)a1[20];
  if ((unsigned __int64)v3 >= a1[21]) {
    v4 = (_QWORD*)CmdBtlZoomIn_10a0720(a1 + 19, &v28, (float*)&v27,
                                       (__int64)v25_.v25),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v3[2] = GameData_200d5c0;
    v4 = v3 + 8;
    v3[6] = v3 + 2;
    *v3 = 0x3F80000000000000LL;
  }
  v5 = v25_.v26;
  a1[20] = (__int64)v4;
  if (v5 == v25_.v25) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(_QWORD*))(*v5 + v6))(v5),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (_QWORD*)a1[20];
LABEL_9:
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_200d640;
  v25_.v25[1] = a1;
  v27 = -1082130432;
  v28 = 0x0.0p+0f;
  if ((unsigned __int64)v4 >= a1[21]) {
    v7 = CmdBtlZoomIn_10a04e0(a1 + 19, &v28, (float*)&v27, (__int64)v25_.v25),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v4[2] = GameData_200d640;
    v4[3] = a1;
    v4[6] = v4 + 2;
    *v4 = 0xBF80000000000000LL;
    v7 = (__int64)(v4 + 8);
  }
  a1[20] = v7;
  if (v25_.v26 == v25_.v25) {
    v8 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v25_.v26 + v8))(v25_.v26, a2),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_17:
  v10 = (*(float (**)(__int64*))(*a1 + 152))(a1),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = a1[20];
  v12 = a1[21];
  v25_.v26 = v25_.v25;
  v27 = -1082130432;
  v13 = 0x1.11570c0000000p-5f / v10;
  v25_.v25[0] = GameData_200d6c0;
  v14 = (float)(0x1.11570c0000000p-5f / v10) +
        (float)((float)(0x1.11570c0000000p-5f / v10) + 0x1.6666660000000p-1f);
  v28 = v14;
  if (v11 >= v12) {
    v15 = CmdBtlZoomIn_10a04e0(a1 + 19, &v28, (float*)&v27, (__int64)v25_.v25),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_QWORD*)(v11 + 16) = GameData_200d6c0;
    *(float*)v11 = v14;
    v15 = v11 + 64;
    *(_DWORD*)(v11 + 4) = -1082130432;
    *(_QWORD*)(v11 + 48) = v11 + 16;
  }
  v16 = v25_.v26;
  a1[20] = v15;
  if (v16 == v25_.v25) {
    v17 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_25;
    }
    v17 = 40;
  }
  (*(void (**)(_QWORD*))(*v16 + v17))(v16),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a1[20];
LABEL_25:
  v18 = a1[21];
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_200d740;
  v28 = v13 + v14;
  v27 = -1082130432;
  if (v15 >= v18) {
    v19 = (_QWORD*)CmdBtlZoomIn_10a04e0(a1 + 19, &v28, (float*)&v27,
                                        (__int64)v25_.v25),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *(_QWORD*)(v15 + 16) = GameData_200d740;
    *(float*)v15 = v13 + v14;
    *(_DWORD*)(v15 + 4) = -1082130432;
    *(_QWORD*)(v15 + 48) = v15 + 16;
    v19 = (_QWORD*)(v15 + 64);
  }
  v20 = v25_.v26;
  a1[20] = (__int64)v19;
  if (v20 == v25_.v25) {
    v21 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_33;
    }
    v21 = 40;
  }
  (*(void (**)(_QWORD*))(*v20 + v21))(v20),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = (_QWORD*)a1[20];
LABEL_33:
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_200d7c0;
  v25_.v25[1] = a1;
  v28 = 0x1.99999a0000000p+0f;
  v27 = -1082130432;
  if ((unsigned __int64)v19 >= a1[21]) {
    v22 = CmdBtlZoomIn_10a04e0(a1 + 19, &v28, (float*)&v27, (__int64)v25_.v25),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v19[2] = GameData_200d7c0;
    v19[3] = a1;
    v19[6] = v19 + 2;
    *v19 = 0xBF8000003FCCCCCDLL;
    v22 = (__int64)(v19 + 8);
  }
  a1[20] = v22;
  result = (__int64)v25_.v26;
  if (v25_.v26 == v25_.v25) {
    v24 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      return result;
    }
    v24 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v25_.v26 + v24))(v25_.v26, v9);
}

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure_Invoke(__int64 a1,
                                                                 float* a2)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  __int64 result;

  v2 = *a2;
  BattleUtil_7a96a0(*a2);
  if (v2 < 0x1.0000000000000p-1f) {
    v3 = (float)((float)((float)(v2 * (float)(v2 * v2)) *
                         0x1.0000000000000p-1f) *
                 0x1.0000000000000p+3f) +
         0x0.0p+0f;
  }
  else {
    v3 =
        (float)((float)((float)((float)(0x1.0000000000000p-1f -
                                        (float)(v2 + -0x1.0000000000000p-1f)) *
                                (float)((float)(0x1.0000000000000p-1f -
                                                (float)(v2 +
                                                        -0x1.0000000000000p-1f)) *
                                        (float)(0x1.0000000000000p-1f -
                                                (float)(v2 +
                                                        -0x1.0000000000000p-1f)))) *
                        -0x1.0000000000000p-1f) *
                0x1.0000000000000p+3f) +
        0x1.0000000000000p+0f;
  }
  result = GameRoutine_758bc0(v3);
  if (GameData_21c96a8 != 0) {
    *(float*)(*(_QWORD*)(GameData_21c96a8 + 8) + 32LL) = v3;
  }
  return result;
}

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure0_Invoke(__int64 a1)
{
  long double v1;
  __int64 result;

  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152LL))(*(_QWORD*)(a1 + 8));
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    *(float*)&v1 = *(float*)&v1 * 0.6;
    return GameRoutine_809dc0(game_ProcFadeView_instance_, GameData_212c960,
                              v1);
  }
  return result;
}

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure1_Invoke()
{
  __int64 v0;
  int v1;

  GameRoutine_10ecb60_alt1();
  if (GameData_21d92e0 != 3) {
    GameData_21d92e0 = 3;
    game_GameView_Update_alt1();
    if (GameData_21cd0d0 != 0) {
      v0 = *(_QWORD*)(GameData_21cd0d0 + 8);
      v1 = *(_DWORD*)(v0 + 8);
      *(_DWORD*)(v0 + 8) = v1 + 1;
      if (v1 == 0) {
        (**(void (***)(__int64))v0)(v0);
      }
    }
  }
  GameHr_106e1a0(GameData_21ec7b0);
  return CombatLegionManager_e2cca0_alt1();
}

void game_combat_anonymous_ZoomFadeIn_Schedule_closure2_Invoke()
{
  __int64 v0;

  v0 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
    *(_DWORD*)(GameData_21ec7b0 + 168) = 0;
    *(_BYTE*)(v0 + 172) = 0;
    *(_DWORD*)(v0 + 176) = 0;
    *(_QWORD*)(v0 + 160) = 0x3E4CCCCD00000000LL;
    *(_QWORD*)(v0 + 144) = 1065353216;
    *(_QWORD*)(v0 + 152) = 0xB0000000BLL;
  }
}

__int64 game_combat_anonymous_ZoomFadeIn_Schedule_closure3_Invoke(__int64 a1)
{
  __int64 result;

  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152LL))(*(_QWORD*)(a1 + 8));
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return game_809ba0(game_ProcFadeView_instance_);
  }
  return result;
}

#pragma GCC visibility pop
