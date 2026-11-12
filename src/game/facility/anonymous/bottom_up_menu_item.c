#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fb4568[])();
extern __int64 (*GameData_1fb45e8[])();
extern __int64 (*GameData_1fb4668[])();
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 BottomUpMenuItem_Unknown25(__int64 a1);
__int64 BottomUpMenuItem_9bb710(__int64 a1);
__int64
BottomUpMenuItem_Unknown76_alt1(__int64 a1, __int64 a2,
                                int a3) __asm__("BottomUpMenuItem_Unknown76");
extern __int64 GameData_2247280;
__int64 game_facility_anonymous_BottomUpMenuItem_ACall_closure_Invoke();
__int64 GameHr_16ef100(_QWORD*, const char*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 BottomUpMenuItem_Unknown76(__int64 a1, _QWORD* a2, int a3);

__int64 BottomUpMenuItem_Unknown25(__int64 a1)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  const char* v17;

  if (*(_DWORD*)(a1 + 84) != 0) {
    return 1;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v17 = "MID_SortiePlanMenu_BottomUp_Confirm";
  v13_.v13[0] = GameData_1fb4568;
  v9_.v10 = v9_.v9;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = v4;
  }
  v13_.v14 = v13_.v13;
  v11_.v12 = v11_.v11;
  v11_.v11[0] = GameData_1fb45e8;
  v9_.v9[0] = GameData_1fb45e8;
  MapSortieMenu_871860(v5, (__int64)&v17, (__int64)v13_.v13, (__int64)v11_.v11,
                       (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
LABEL_11:
  if (v11_.v12 == v11_.v11) {
    v7 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v7))((__int64)v11_.v12);
LABEL_16:
  if (v13_.v14 == v13_.v13) {
    v8 = 32;
    goto LABEL_20;
  }
  if (v13_.v14 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
  }
  return 12;
}

__int64 BottomUpMenuItem_9bb710(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _BYTE v11[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1);
  GameRoutine_16ee370(v11, v4, v5);
  v6 = *(unsigned int*)(a1 + 84);
  v9[0] = GameData_1fb4668;
  v9[1] = a1;
  v10 = v9;
  GameRoutine_15e7650(v11, v6, v9);
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_9;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)a1 + 600LL))(a1, v11);
  return GameRoutine_16ee520(v11);
}

__int64 BottomUpMenuItem_Unknown76(__int64 a1, _QWORD* a2, int a3)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((a3 & 0x100000) != 0) {
    return GameHr_16ef100(a2, "MID_Menu_Cause_NotPerson_BottomUp");
  }
  return result;
}

__int64 game_facility_anonymous_BottomUpMenuItem_ACall_closure_Invoke()
{
  if (GameData_2247280 != 0) {
    *(_DWORD*)(GameData_2247280 + 168) = 2;
  }
  return 4;
}

#pragma GCC visibility pop
