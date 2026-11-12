#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1878ae0(_QWORD, _QWORD, _QWORD);
__int64 ProcItemSelectMenu_187a420(_QWORD, _QWORD);
__int64 BlacksmithUnitGridMenuItem_18725f0(unsigned __int8* a1);
__int64 game_facility_187c870(__int64, char, __int64);
bool game_Unit_IsUnlocked(__int64);
extern __int64 (*GameData_20f5af8[])();
__int64 game_facility_anonymous_BlacksmithUnitGridMenuItem_IsEnable(__int64 a1);

__int64 BlacksmithUnitGridMenuItem_18725f0(unsigned __int8* a1)
{
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)a1 + 464LL))(a1) & 1) ==
      0) {
    return 1;
  }
  v3 = a1[104];
  v2 = a1 + 104;
  v4 = *((_QWORD*)v2 - 12);
  v5 = *((_QWORD*)v2 - 2);
  v6 = v3 & 0xFFFFFFFD;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v7 = *(_QWORD*)(v4 + 152);
  }
  else {
    v7 = *((_QWORD*)v2 - 12);
  }
  if (v6 != 0) {
    ProcItemSelectMenu_187a420(v7, v5);
  }
  else {
    GameRoutine_1878ae0(v7, v5, v2);
  }
  return 9;
}

__int64 game_facility_anonymous_BlacksmithUnitGridMenuItem_IsEnable(__int64 a1)
{
  __int64 v2;
  char v3;
  char v4;
  __int64 v5;
  __int64 v6;
  char v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  char v11;

  v2 = *(_QWORD*)(a1 + 88);
  v3 = *(_BYTE*)(a1 + 104);
  v11 = 0;
  v9_.v9[0] = GameData_20f5af8;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  game_facility_187c870(v2, v3, (__int64)v9_.v9);
  v4 = (char)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v5 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  v4 = (*(__int64 (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
LABEL_6:
  if (v11 == 1) {
    v6 = *(_QWORD*)(a1 + 88);
    if (v6 != 0) {
      v4 = game_Unit_IsUnlocked(v6);
    }
    v7 = (v6 == 0) | v4;
  }
  else {
    v7 = 0;
  }
  return v7 & 1;
}

#pragma GCC visibility pop
