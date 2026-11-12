#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_21c9b78;
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void ui_1836ca0(__int64* a1, unsigned __int8 a2);

void ui_1836ca0(__int64* a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  char v8;
  int v9;
  const char* v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  _BOOL4 v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  char v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  const char* v40;
  __int64 v41;
  const char* v42;
  const char* v43;
  __int64 v44;
  const char* v45;
  char v46[4];

  v2 = a1[19];
  v46[0] = a2;
  v4 = v2 + 760LL * a2;
  v5 = (*(__int64 (**)(__int64*, char*))(*a1 + 40))(a1, v46);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = *(_QWORD*)(v4 + 48);
  v8 = v5;
  v9 = *(_DWORD*)(*(_QWORD*)(v4 + 24) + 11276LL);
  if ((v5 & 1) != 0) {
    v10 = "Player_Terrain00/T_Txt";
  }
  else {
    v10 = "Target_Terrain00/T_Txt";
  }
  v11 = ui_LayoutAccessor_FindTextBox(a1 + 3, (__int64)v10);
  if (v11 != 0) {
    GameRoutine_156c5d0(v11, (__int64)&GameData_1a9f09e, 0);
  }
  if ((v8 & 1) != 0) {
    v12 = "Player_Terrain01/T_Txt";
  }
  else {
    v12 = "Target_Terrain01/T_Txt";
  }
  v13 = ui_LayoutAccessor_FindTextBox(a1 + 3, (__int64)v12);
  if (v13 != 0) {
    GameRoutine_156c5d0(v13, (__int64)&GameData_1a9f09e, 0);
  }
  v15 = (v9 & 0x8000) == 0 && v7 != 0;
  if (v6 == 0 && !v15) {
    return;
  }
  v45 = v10;
  v17 = *(_DWORD*)(v4 + 96) + 32 * *(_DWORD*)(v4 + 100);
  if (v17 >= 0x400) {
    v18 = 0;
  }
  else {
    v18 = v17;
  }
  v19 = 2LL * (unsigned int)v18;
  v20 = GameData_212c930;
  v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              v19 + 8));
  if ((*(_BYTE*)(v21 + 217) & 0x10) != 0) {
    v21 = GameData_21c9b78;
  }
  v44 = v21;
  v22 = GameData_212cfb8[0];
  v23 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v24 = *(__int16*)(v23 + v19 + 104);
  if (v24 < 0 || (v25 = *(_QWORD*)(v23 + 8)) == 0 ||
      (v26 = v25 + 144LL * (unsigned int)v24,
       (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26) != 2) ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26) & 1) == 0 ||
      (v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 224LL))(v26)) == 0) {
    v27 = **(_QWORD**)(*v20 + 64);
  }
  v28 = 0;
  if ((*(_BYTE*)(v27 + 217) & 0x10) != 0) {
    v29 = GameData_21c9b78;
  }
  else {
    v29 = v27;
  }
  v30 = *(_QWORD*)(*v22 + 16);
  v31 = *(__int16*)(v30 + 2 * v18 + 4200);
  if (v31 < 0 || (v32 = *(_QWORD*)(v30 + 8)) == 0) {
  LABEL_39:
    if (v29 != 0) {
      goto LABEL_40;
    }
    goto LABEL_46;
  }
  v33 = v32 + 144LL * (int)v31;
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33) == 6) {
    v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    goto LABEL_39;
  }
  v28 = 0;
  if (v29 != 0) {
  LABEL_40:
    v34 = *(_WORD*)(v29 + 16) != 0;
    if (v15) {
      goto LABEL_41;
    }
    goto LABEL_47;
  }
LABEL_46:
  v34 = false;
  if (v15) {
  LABEL_41:
    v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 272LL))(v7);
    if ((v28 & 1) == 0) {
      if ((v35 & 1) != 0) {
        if ((v8 & 1) == 0) {
          LayoutAccessor_1562cf0((__int64)(a1 + 3), "TargetTerrain_Off");
        }
        return;
      }
      goto LABEL_53;
    }
  LABEL_48:
    if (v34) {
      if ((v8 & 1) != 0) {
        v36 = "PlayerTerrain_1_01";
      }
      else {
        v36 = "TargetTerrain_1_01";
      }
      LayoutAccessor_1562cf0((__int64)(a1 + 3), v36);
      v37 = *(_QWORD*)(v29 + 32);
      v38 = (__int64)(a1 + 3);
      v39 = (__int64)v12;
      goto LABEL_68;
    }
    if ((v8 & 1) != 0) {
      v42 = "PlayerTerrain_Off";
    }
    else {
      v42 = "TargetTerrain_Off";
    }
    GameHr_1562680((__int64)(a1 + 3), v42, 0x1.0000000000000p+0f);
    return;
  }
LABEL_47:
  if ((v28 & 1) != 0) {
    goto LABEL_48;
  }
LABEL_53:
  if (v34) {
    if ((v8 & 1) != 0) {
      v40 = "PlayerTerrain_2";
    }
    else {
      v40 = "TargetTerrain_2";
    }
    LayoutAccessor_1562cf0((__int64)(a1 + 3), v40);
    LayoutAccessor_1562060((__int64)(a1 + 3), (__int64)v12,
                           *(_QWORD*)(v29 + 32));
    v41 = v44;
    v39 = (__int64)v45;
    if (v44 == 0) {
      return;
    }
    goto LABEL_67;
  }
  if ((v8 & 1) != 0) {
    v43 = "PlayerTerrain_1_00";
  }
  else {
    v43 = "TargetTerrain_1_00";
  }
  LayoutAccessor_1562cf0((__int64)(a1 + 3), v43);
  v41 = v44;
  v39 = (__int64)v45;
  if (v44 != 0) {
  LABEL_67:
    v37 = *(_QWORD*)(v41 + 32);
    v38 = (__int64)(a1 + 3);
  LABEL_68:
    LayoutAccessor_1562060(v38, v39, v37);
  }
}

#pragma GCC visibility pop
