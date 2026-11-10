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
__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 Impl_13261c0(_QWORD);
__int64 ProcObeliskDepositoryRideMenu_9d0620(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
__int64 game_menu_1a06650(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20941e8[])();
extern __int64 (*GameData_2094268[])();
extern __int64* GameData_212c878[6];
extern __int64 GameData_21c96e8;
__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall(__int64 a1);

__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64* v24;
  _QWORD v25[4];
  _QWORD* v26;
  _QWORD v27[4];
  _QWORD* v28;
  _QWORD v29[4];
  _QWORD* v30;
  const char* v31;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  if (v4 == v5) {
    goto LABEL_9;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_9;
    }
  }
LABEL_10:
  v9 = *(_DWORD*)(v6 + 540);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = *(_QWORD*)(v6 + 24);
    v13 = *(_QWORD*)(v6 + 32) - v12;
    v14 = v12 + 8LL * (unsigned int)v11;
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = Impl_13261c0(*(_QWORD*)v6);
  v16 = *(_QWORD*)(a1 + 8);
  v17 = "MID_Gmap_MakeFarm_Confirm";
  v26 = v25;
  if (v15 == 14) {
    v17 = "MID_Gmap_ReMakeFarm_Confirm";
  }
  v31 = v17;
  v29[0] = GameData_20941e8;
  v29[1] = a1;
  if (*(_QWORD*)(v16 + 152) != 0) {
    v18 = *(_QWORD*)(v16 + 152);
  }
  else {
    v18 = v16;
  }
  v30 = v29;
  v28 = v27;
  v27[0] = GameData_2094268;
  v25[0] = GameData_2094268;
  v19 = ProcObeliskDepositoryRideMenu_9d0620(v18, &v31, v29, v27, v25);
  if (v26 == v25) {
    v20 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_27;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v26 + v20))((__int64)v26);
LABEL_27:
  if (v28 == v27) {
    v21 = 32;
  }
  else {
    if (v28 == nullptr) {
      goto LABEL_32;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v28 + v21))((__int64)v28);
LABEL_32:
  if (v30 == v29) {
    v22 = 32;
    goto LABEL_36;
  }
  if (v30 != nullptr) {
    v22 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v30 + v22))((__int64)v30);
  }
  v23 = *(_DWORD*)(a1 + 40);
  if ((v23 & 0x80000000) != 0) {
    v24 = &game_g_empty_item;
  }
  else {
    v24 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * v23 + 4);
  }
  game_menu_1a06650(v19 + 1496,
                    *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)v24),
                    1);
  return 12;
}

__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall_closure_Invoke(__int64 a1,
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
    *(_DWORD*)(GameData_22549a8 + 272) = 14;
  }
  else {
    v15 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 14;
      v16 = 5;
    }
    else {
      v15 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 14;
      v16 = 12;
    }
    *(_DWORD*)(v15 + 152) = v16;
  }
  return 4;
}

#pragma GCC visibility pop
