#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17356e0(_QWORD*, __int64);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 TelopSimpleLevelup_Unknown57(__int64 a1);

__int64 TelopSimpleLevelup_Unknown57(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  char v16;
  _QWORD v18[4];
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE v34[4];
  _DWORD v35[2];

  v2 = GameRoutine_67ed20(*(_QWORD*)(a1 + 1168));
  v3 = *(_DWORD*)(a1 + 1176);
  v4 = msg_MessageManager_instance__ptr[0];
  if (v2 != 0) {
    v5 = v2;
  }
  else {
    v5 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v5);
  GameRoutine_a51e10(*v4 + 14704, 1, v3, 0);
  v6 = *v4;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v18[0] = GameData_212e348 + 2;
  v18[1] = 0xFFFF0001FFFF0000LL;
  v18[2] = 0xFFFF0004FFFF0002LL;
  v18[3] = 0xFFFF0006FFFF0005LL;
  v33 = 8;
  v19 = -65529;
  v20 = -65528;
  v7 = GameRoutine_a4dbe0(v6, "MID_Sys_Result_Msg_LevelUp", 0, v18);
  v8 = GameRoutine_1760e40(a1, 0);
  v9 = (_QWORD*)v8;
  if (v7 != 0) {
    v10 = ui_LayoutAccessor_FindTextBox(v8, "L_Txt/T_Txt");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, v7, 0);
    }
  }
  v11 = ui_LayoutAccessor_FindTextBox(v9, "L_Txt/T_Txt");
  if (v11 != 0) {
    v12 = v11;
    v13 = ui_LayoutAccessor_FindTextBox(v9, "L_Txt/T_Txt");
    if (v13 != 0) {
      GameRoutine_190a0c0(v18, v35, v34, v13, *(_QWORD*)(v13 + 216));
      v14 = v35[0];
      v15 = v35[1];
    }
    else {
      v14 = 0;
      v15 = 0;
    }
    v16 = *(_BYTE*)(v12 + 88);
    *(_DWORD*)(v12 + 80) = v14;
    *(_DWORD*)(v12 + 84) = v15;
    *(_BYTE*)(v12 + 88) = v16 | 0x10;
  }
  return GameRoutine_17356e0(v9, (__int64)"L_Txt");
}

#pragma GCC visibility pop
