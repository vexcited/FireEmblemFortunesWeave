#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
bool game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323be0(
    __int64 a1, __int64 a2);
__int64 game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323ce0();
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 game_gmap_TroopMgr_CountTroop_1349680(__int64);
extern __int64 (*GameData_202abf0[])();
extern __int64 (*GameData_202ac70[])();
extern __int64 (*GameData_202acf0[])();
__int64 game_gmap_anonymous_DestroyHellGateItem_ACall(__int64 a1);
__int64 GameRoutine_133f1d0(_QWORD);
extern __int64 GameData_21c96e8;
__int64 DestroyHellGateItem_Unknown58();

__int64 game_gmap_anonymous_DestroyHellGateItem_ACall(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
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

  v15_.v15[0] = GameData_202abf0;
  v15_.v16 = v15_.v15;
  v2 = game_gmap_TroopMgr_CountTroop_1349680((__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v3 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v3))((__int64)v15_.v16);
LABEL_6:
  if (v2 == 1) {
    v4 = *(_QWORD*)(a1 + 8);
    v17 = "MID_Gmap_SpotSelect_HellGateDestroy_Confirm";
    v15_.v16 = v15_.v15;
    v11_.v12 = v11_.v11;
    v15_.v15[0] = GameData_202ac70;
    v13_.v14 = v13_.v13;
    v13_.v13[0] = GameData_202acf0;
    v11_.v11[0] = GameData_202acf0;
    MapSortieMenu_871860(v4, (__int64)&v17, (__int64)v15_.v15,
                         (__int64)v13_.v13, (__int64)v11_.v11);
    if (v11_.v12 == v11_.v11) {
      v5 = 32;
    }
    else {
      if (v11_.v12 == nullptr) {
        goto LABEL_14;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v11_.v12 + v5))((__int64)v11_.v12);
  LABEL_14:
    if (v13_.v14 == v13_.v13) {
      v6 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
        goto LABEL_21;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v13_.v14 + v6))((__int64)v13_.v14);
  LABEL_21:
    if (v15_.v16 == v15_.v15) {
      v9 = 32;
    }
    else {
      if (v15_.v16 == nullptr) {
        return 12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v15_.v16 + v9))((__int64)v15_.v16);
    return 12;
  }
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 3;
  }
  else {
    v7 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 3;
      v8 = 5;
    }
    else {
      v7 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 3;
      v8 = 12;
    }
    *(_DWORD*)(v7 + 152) = v8;
  }
  return 2;
}

__int64 DestroyHellGateItem_Unknown58()
{
  __int64 v0;
  int v1;
  __int64** v2;
  __int64** v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  __int64** v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64* v17;
  __int64 v18;
  __int64 v19;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64***)(v0 + 8);
  v3 = *(__int64***)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    if (v2 != v3) {
      v4 = v2;
      do {
        v6 = *v4++;
        v5 = v6;
        if (*((_DWORD*)v6 + 21) == v1) {
          goto LABEL_14;
        }
      } while (v4 != v3);
    }
  LABEL_13:
    v5 = nullptr;
    goto LABEL_14;
  }
  if (v2 == v3) {
    goto LABEL_13;
  }
  v7 = v2;
  while (1) {
    v5 = *v7;
    if ((*v7)[12] == 0 && v5[69] == 0) {
      break;
    }
    if (++v7 == v3) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v8 = *((_DWORD*)v5 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v5[3];
    v12 = v5[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v5 = v13;
    }
  }
  v14 = *v5;
  if (v14 != 0) {
    while (1) {
      if (v2 == v3) {
        goto LABEL_18;
      }
      v17 = *v2;
      if (**v2 == v14) {
        v18 = v17[12];
        if (v18 != 0 && (unsigned int)*(unsigned __int8*)(v18 + 32) - 3 < 2) {
          break;
        }
      }
      ++v2;
    }
    if ((GameRoutine_133f1d0(*v2) & 1) != 0) {
      v19 = v17[12];
      if (v19 == 0) {
        v15 = 1;
        LODWORD(v3) = 1;
        return v15 & (unsigned int)v3;
      }
      LODWORD(v3) = *(unsigned __int8*)(v19 + 32) != 4;
    }
    else {
      LODWORD(v3) = 0;
    }
    v15 = 1;
    return v15 & (unsigned int)v3;
  }
LABEL_18:
  v15 = 0;
  return v15 & (unsigned int)v3;
}

bool game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323be0(
    __int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v2 != 0 && *(_BYTE*)(v2 + 32) == 3 &&
         (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 8) != 0;
}

__int64 game_gmap_anonymous_DestroyHellGateItem_ACall_closure_Invoke_1323ce0()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 3;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 3;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 3;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
