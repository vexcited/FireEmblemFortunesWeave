#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_94bdc0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 DivinationVisitorMenuItem_Unknown73(__int64 a1);
extern __int64 GameData_226dcb0;
__int64
game_facility_anonymous_DivinationVisitorMenuItem_ACall_closure_Invoke();
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
extern __int64 (*GameData_211b298[])();
extern __int64 (*GameData_211b318[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
__int64 game_facility_anonymous_DivinationVisitorMenuItem_ACall(__int64 a1);

__int64 game_facility_anonymous_DivinationVisitorMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    __int64 (*v12[4])();
    __int64 (**v13)();
  } v12_;
  struct {
    __int64 (*v14[4])();
    __int64 (**v15)();
  } v14_;
  const char* v16;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 8);
  v16 = "MID_DivinationMenu_DivinationVisiter_Confirm";
  v14_.v15 = v14_.v14;
  v10_.v11 = v10_.v10;
  v14_.v14[0] = (__int64 (*)())GameData_211b298;
  v12_.v13 = v12_.v12;
  v12_.v12[0] = (__int64 (*)())GameData_211b318;
  v10_.v10[0] = GameData_211b318;
  v3 = GameRoutine_13fa790(v2, (__int64)&v16, (__int64)v14_.v14,
                           (__int64)v12_.v12, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v4 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v4))((__int64)v10_.v11);
LABEL_8:
  if (v12_.v13 == v12_.v12) {
    v6 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*v12_.v13 + v6))((__int64)v12_.v13);
LABEL_13:
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_18:
  v12_.v13 = v12_.v12;
  v14_.v15 = v14_.v14;
  v12_.v12[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v12_.v12[1] = game_sound_PlayDecideLightSe_ptr[0];
  v14_.v14[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v14_.v14[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v14_.v14, v3 + 144);
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_23;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v14_.v15 + v8))((__int64)v14_.v15);
LABEL_23:
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_27;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_27:
    (*(void (**)(__int64))((char*)*v12_.v13 + v9))((__int64)v12_.v13);
  }
  *((_DWORD*)v3 + 392) = *(_DWORD*)(a1 + 84);
  return 12;
}

__int64 DivinationVisitorMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  char v7;
  int v8;
  _QWORD v10[7];
  _BYTE v11[92];
  int v12;
  int v13;
  bool v14;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 =
      GameRoutine_16ee370(v11, v4, "MID_DivinationMenu_DivinationVisiter_Help");
  v6 = GameRoutine_94bdc0(v5);
  v7 = v6;
  v10[4] = 0;
  GameRoutine_15e7650(v11, v6, v10);
  v8 = *(_DWORD*)(a1 + 84);
  v14 = (v7 & 0x10) != 0;
  v12 = 0;
  v13 = v8;
  return GameRoutine_16ee520(v11);
}

__int64 game_facility_anonymous_DivinationVisitorMenuItem_ACall_closure_Invoke()
{
  unsigned __int64 v0;
  unsigned __int64 v1;

  if (GameData_226dcb0 == 0) {
    return 4;
  }
  v1 = *(_QWORD*)(GameData_226dcb0 + 8);
  v0 = *(_QWORD*)(GameData_226dcb0 + 16);
  if (v1 > v0) {
    return 4;
  }
  while (*(_BYTE*)v0 != 2) {
    v0 -= 64LL;
    if (v1 > v0) {
      return 4;
    }
  }
  if (*(_DWORD*)(v0 + 32) != 3) {
    return 4;
  }
  *(_DWORD*)(GameData_226dcb0 + 152) = 4;
  return 4;
}

#pragma GCC visibility pop
