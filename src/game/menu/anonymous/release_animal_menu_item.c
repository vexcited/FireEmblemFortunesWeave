#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 strlen(_QWORD);
__int64
game_menu_anonymous_ReleaseAnimalMenuItem_ACall_closure_Invoke(__int64 a1);
_QWORD* ProcObeliskDepositoryRideMenu_9d0620(__int64, __int64, __int64, __int64,
                                             __int64);
extern __int64 (*GameData_21261a8[])();
extern __int64 (*GameData_2126228[])();
void ObeliskDestinyMenuItem_1a06b90(_QWORD*, __int64, int);
__int64 game_menu_anonymous_ReleaseAnimalMenuItem_ACall(_QWORD* a1);

__int64 game_menu_anonymous_ReleaseAnimalMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  const char* v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v16 = "MID_ReleaselMenu_Confirm";
  v14_.v14[0] = GameData_21261a8;
  v14_.v14[1] = a1;
  v10_.v11 = v10_.v10;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = v2;
  }
  v14_.v15 = v14_.v14;
  v12_.v13 = v12_.v12;
  v12_.v12[0] = GameData_2126228;
  v10_.v10[0] = GameData_2126228;
  v4 = ProcObeliskDepositoryRideMenu_9d0620(
      v3, (__int64)&v16, (__int64)v14_.v14, (__int64)v12_.v12,
      (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_11:
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v7))((__int64)v12_.v13);
LABEL_16:
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
    goto LABEL_20;
  }
  if (v14_.v15 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v14_.v15 + v8))((__int64)v14_.v15);
  }
  v9 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  ObeliskDestinyMenuItem_1a06b90(v4 + 187, v9, 1);
  return 12;
}

__int64

game_menu_anonymous_ReleaseAnimalMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  _QWORD v12[2];
  _QWORD v13[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameRoutine_931120(*(_QWORD*)(v1 + 112));
  v3 = *(_QWORD*)(v1 + 8);
  v12[0] = v2;
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  v13[0] = "MID_ReleaseMenu_Result";
  v13[1] = 22;
  v12[1] = strlen(v2);
  GameRoutine_16f9b50(v4, v13, v12);
  v5 = *(_QWORD*)(v1 + 8);
  v6 = *(unsigned __int8**)(v5 + 16);
  if (v6 != nullptr) {
    v7 = *v6;
    v8 = v7 > 0x10;
    v9 = (1 << v7) & 0x1CE00;
    if (!v8 && v9 != 0) {
      *(_WORD*)(v5 + 136) |= 0x80u;
    }
  }
  return 2;
}

#pragma GCC visibility pop
