#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_809dc0(_QWORD, _QWORD, float);
__int64 ProcList_9bd480(void);
__int64 game_ProcList_Call_9bce00(_QWORD, _QWORD);
__int64 game_ProcList_Tick_9bd140(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c960;
extern __int64 (*GameData_1f8fef0[])();
extern __int64 (*GameData_1f8ff70[])();
extern __int64 (*GameData_1f8fff0[])();
extern __int64 (*GameData_1f90070[])();
extern __int64 GameData_21c9600;
extern __int64 game_ProcFadeView_instance_;
__int64 game_MainSeq_Shutdown(__int64 result, int a2);
__int64 game_MainSeq_Shutdown_lambda0_Invoke();
bool game_MainSeq_Shutdown_lambda1_Invoke();
__int64 game_MainSeq_Shutdown_lambda3_Invoke(__int64 result);

__int64 game_MainSeq_Shutdown(__int64 result, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  if (result == 0) {
    return result;
  }
  v3 = result;
  result = ProcList_9bd480();
  if (result == 0) {
    return result;
  }
  v4 = result;
  v9[0] = GameData_1f8fef0;
  v10 = v9;
  game_ProcList_Call_9bce00(result, v9);
  if (v10 == v9) {
    v5 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10 + v5))((__int64)v10);

LABEL_8:
  v9[0] = GameData_1f8ff70;
  v10 = v9;
  game_ProcList_Tick_9bd140(v4, v9);
  if (v10 == v9) {
    v6 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10 + v6))((__int64)v10);

LABEL_13:
  v9[0] = GameData_1f8fff0;
  v9[1] = v3;
  v10 = v9;
  game_ProcList_Call_9bce00(v4, v9);
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_17;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  LODWORD(v9[1]) = a2;
  v9[0] = GameData_1f90070;
  v10 = v9;
  game_ProcList_Call_9bce00(v4, v9);
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10 + v8))((__int64)v10);
}

__int64 game_MainSeq_Shutdown_lambda0_Invoke()
{
  __int64 result;

  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return GameRoutine_809dc0(game_ProcFadeView_instance_, GameData_212c960,
                              0.5);
  }
  return result;
}

bool game_MainSeq_Shutdown_lambda1_Invoke()
{
  unsigned __int64 v0;

  if (game_ProcFadeView_instance_ == 0) {
    return false;
  }
  v0 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  return *(float*)(v0 + 172) != *(float*)(v0 + 168);
}

__int64 game_MainSeq_Shutdown_lambda3_Invoke(__int64 result)
{
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = *(_DWORD*)(result + 8);
  }
  return result;
}

#pragma GCC visibility pop
