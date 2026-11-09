#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb4f78[])();
extern __int64 (*GameData_1fb4ff8[])();
extern char GameData_1a9f09e;
char* VolunteerSubMenuItem_Unknown3(__int64 a1);
__int64 VolunteerSubMenuItem_Unknown25(_QWORD* a1);

char* VolunteerSubMenuItem_Unknown3(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 144) + 128LL);
  if (v1 != 0) {
    return *(char**)(v1 + 32);
  }
  else {
    return &GameData_1a9f09e;
  }
}

__int64 VolunteerSubMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;
  _QWORD v12[4];
  _QWORD* v13;
  const char* v14;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v14 = "MID_SortiePlanMenu_Volunteer_Confirm";
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = v2;
  }
  v12[0] = GameData_1fb4f78;
  v12[1] = a1;
  v11 = v10;
  v13 = v12;
  v9 = v8;
  v10[0] = GameData_1fb4ff8;
  v8[0] = GameData_1fb4ff8;
  GameRoutine_871860(v3, &v14, v12, v10, v8);
  if (v9 == v8) {
    v4 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v9 + v4))((__int64)v9);

LABEL_11:
  if (v11 == v10) {
    v6 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_16;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11 + v6))((__int64)v11);

LABEL_16:
  if (v13 == v12) {
    v7 = 32;
    goto LABEL_20;
  }
  if (v13 != nullptr) {
    v7 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v13 + v7))((__int64)v13);
  }
  return 12;
}

#pragma GCC visibility pop
