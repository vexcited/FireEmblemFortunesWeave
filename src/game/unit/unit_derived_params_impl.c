#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f91e68[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64* GameData_212c878[6];
__int64 UnitDerivedParams_6deeb0(__int64 a1, unsigned int a2);

__int64 UnitDerivedParams_6deeb0(__int64 a1, unsigned int a2)
{
  char v2;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15;
  float v16;
  int v17;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[4];
  _QWORD* v24;
  int v25;

  v2 = a2;
  LOBYTE(v23[0]) = 4;
  v4 = game_Unit_GetParam(a1, v23, a2);
  v25 = 0;
  v5 = v4;
  v6 = GameData_212c878[0];
  if (*(_WORD*)(a1 + 1952) != 0) {
    v25 =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)(a1 + 1952)) +
                            89LL);
  }
  v24 = v23;
  v19[0] = GameData_1f91e68;
  v19[1] = &v25;
  v20 = v19;
  v21[0] = GameData_1f93088;
  v21[1] = v19;
  v22 = v21;
  v23[0] = GameData_1f92f88;
  v23[1] = 13;
  v23[2] = v21;
  game_UnitItemList_EachItem(a1 + 828, v23);
  if (v24 == v23) {
    v7 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_8;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v24 + v7))((__int64)v24);

LABEL_8:
  if (v22 == v21) {
    v8 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v22 + v8))((__int64)v22);

LABEL_13:
  if (v20 == v19) {
    v9 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v20 + v9))((__int64)v20);

LABEL_18:
  if ((v2 & 1) != 0) {
    v10 = (int)(float)(*(float*)(a1 + 808) * (float)v25);
  }
  else {
    v10 = v25;
  }
  if (v10 >= 1) {
    LOBYTE(v23[0]) = 1;
    v11 = game_Unit_GetParam(a1, v23, v2 & 1);
    v12 = *(char*)(a1 + 807);
    if ((v2 & 1) == 0) {
      v12 = 0;
    }
    v13 = v10 - ((v12 + v11 / 5) & ~((v12 + v11 / 5) >> 31));
    v5 -= v13 & ~(v13 >> 31);
  }
  v14 = v5 + *(__int16*)(a1 + 642);
  if (*(_WORD*)(a1 + 1952) != 0) {
    v14 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                  8LL * *(unsigned __int16*)(a1 + 1952)) +
                       124LL);
  }
  if ((v2 & 1) != 0) {
    v15 = *(float*)(a1 + 712);
    if (v15 <= 1.0f) {
      v16 = v15 * (float)(v14 + *(__int16*)(a1 + 708));
    }
    else {
      v16 = (float)*(__int16*)(a1 + 708) + (float)((float)v14 * v15);
    }
    v17 = (int)v16;
    if ((int)v16 >= 999) {
      v17 = 999;
    }
    v14 = v17 + *(__int16*)(a1 + 710);
  }
  return v14 & (unsigned int)~(v14 >> 31);
}

#pragma GCC visibility pop
