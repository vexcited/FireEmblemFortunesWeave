#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_89b900(_QWORD, _QWORD);
extern __int64 GameData_212d750;
extern __int64 GameData_21c99b8;
extern __int64 GameData_22416c0;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_empty_item;
__int64 game_gmap_anonymous_BoostFarmMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                   __int64 a2);
_QWORD* ProcObeliskDepositoryRideMenu_9d0620(__int64, __int64, __int64, __int64,
                                             __int64);
__int64 game_menu_1a06650(__int64, __int64, int);
extern __int64 (*GameData_2094c50[])();
extern __int64 (*GameData_2094cd0[])();
extern __int64* GameData_212c878[6];
__int64 game_gmap_anonymous_BoostFarmMenuItem_ACall(__int64 a1);

__int64 game_gmap_anonymous_BoostFarmMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  const char* v17;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 8);
  v17 = "MID_Gmap_BoostFarm_Confirm";
  v15_.v15[0] = GameData_2094c50;
  v15_.v15[1] = a1;
  v11_.v12 = v11_.v11;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = v2;
  }
  v15_.v16 = v15_.v15;
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_2094cd0;
  v11_.v11[0] = GameData_2094cd0;
  v4 = ProcObeliskDepositoryRideMenu_9d0620(
      v3, (__int64)&v17, (__int64)v15_.v15, (__int64)v13_.v13,
      (__int64)v11_.v11);
  if (v11_.v12 == v11_.v11) {
    v5 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v5))((__int64)v11_.v12);
LABEL_11:
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_16:
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
    goto LABEL_20;
  }
  if (v15_.v16 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v15_.v16 + v8))((__int64)v15_.v16);
  }
  v9 = *(_DWORD*)(a1 + 40);
  if ((v9 & 0x80000000) != 0) {
    v10 = &game_g_empty_item;
  }
  else {
    v10 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * v9 + 4);
  }
  game_menu_1a06650((__int64)(v4 + 187),
                    *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)v10),
                    1);
  return 12;
}

__int64 game_gmap_anonymous_BoostFarmMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 40);
  v4 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  if ((v3 & 0x80000000) != 0) {
    v5 = &game_g_empty_item;
  }
  else {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8LL) + 12LL * v3 + 4);
  }
  v6 = GameData_21c99b8;
  *(_QWORD*)(GameData_22416c0 + 32) =
      *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                 8LL * *(unsigned __int16*)v5);
  v7 = *(_DWORD*)(v2 + 40);
  if ((v7 & 0x80000000) == 0) {
    v8 = *(_QWORD*)(v4 + 8);
    v9 = *(_QWORD*)(v8 + 8) + 12LL * v7;
    if (*(_WORD*)(v9 + 4) != 0) {
      v10 = *(unsigned __int16*)(v9 + 2);
      v11 =
          *(_QWORD*)(*(_QWORD*)(v6 + 64) + 8LL * *(unsigned __int16*)(v9 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
            (1LL << *(_BYTE*)(v11 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v12 = 1;
      }
      else {
        v12 = 999;
      }
      if (v12 >= v10 - 1) {
        LOWORD(v12) = v10 - 1;
      }
      if (*(_WORD*)(v9 + 2) == 0) {
        LOWORD(v12) = 0;
      }
      *(_WORD*)(v9 + 2) = v12;
      if ((_WORD)v12 == 0) {
        v13 = *(_QWORD*)(v8 + 8) + 12LL * v7;
        v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v13 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v14 + 72)) |
              (1LL << *(_BYTE*)(v14 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          *(_QWORD*)(v13 + 4) = 0;
        }
        *(_WORD*)(v13 + 2) = 0;
        GameRoutine_89b900(v8, a2);
      }
    }
  }
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 15;
  }
  else {
    v15 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 15;
      v16 = 5;
    }
    else {
      v15 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 15;
      v16 = 12;
    }
    *(_DWORD*)(v15 + 152) = v16;
  }
  return 4;
}

#pragma GCC visibility pop
