#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern __int64 (*GameData_20045d8[])();
extern __int64 (*GameData_2004658[])();
extern __int64 (*GameData_20046d8[])();
extern __int64 game_g_game_setting;
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure_Invoke_104d800(
    __int64 a1, __int64* a2);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure_Invoke_104dad0(
    __int64 a1);
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure0_Invoke(
    __int64 a1);
__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure_Invoke_104d800(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  const char* v24;

  v2 = *a2;
  v24 = "MID_CmdBtl_RestartBattle_Last_Confirm";
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 8);
  v19 = v18;
  v22[0] = GameData_20045d8;
  v22[1] = v3;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = v4;
  }
  v23 = v22;
  v21 = v20;
  v20[0] = GameData_2004658;
  v18[0] = GameData_20046d8;
  v6 = MapSortieMenu_871860(v5, &v24, v22, v20, v18);
  if (v19 == v18) {
    v7 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v19 + v7))((__int64)v19);
LABEL_9:
  if (v21 == v20) {
    v8 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v21 + v8))((__int64)v21);
LABEL_14:
  if (v23 == v22) {
    v9 = 32;
    goto LABEL_18;
  }
  if (v23 != nullptr) {
    v9 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v23 + v9))((__int64)v23);
  }
  v10 = *(__int64**)(v6 + 232);
  v11 = *(__int64**)(v6 + 240);
  if (v10 == v11 || (v12 = v10 + 1) == v11) {
    v13 = 0;
  }
  else {
    v13 = *v12;
  }
  v14 = *(_QWORD*)(v6 + 336);
  if (v14 != v13) {
    if (v14 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 168LL))(v14);
    }
    *(_QWORD*)(v6 + 336) = v13;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 0, 1, 0);
    v15 = *(_QWORD*)(v6 + 336);
    if (v15 == 0) {
      v16 = 4;
      goto LABEL_33;
    }
    (*(void (**)(__int64))(*(_QWORD*)v15 + 160LL))(v15);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v14 = *(_QWORD*)(v6 + 336);
  }
  v16 = 4;
  if (v14 != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 120LL))(v14) & 1) != 0) {
      v16 = 4;
    }
    else {
      v16 = 0;
    }
  }
LABEL_33:
  *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v16;
  return 9;
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure_Invoke_104dad0(
    __int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 212) = 0;
  return 4;
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqAfterResult_RunRestartBattleDialogProc_closure0_Invoke(
    __int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 212) = 0;
  return 4;
}

#pragma GCC visibility pop
