#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
__int64 game_gmap_anonymous_CorpsDeleteItem_ACall_closure_Invoke();
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_20272d0[])();
extern __int64 (*GameData_2027350[])();
extern __int64 GameData_21c96e8;
__int64 game_gmap_anonymous_CorpsDeleteItem_ACall(_QWORD* a1);

__int64 game_gmap_anonymous_CorpsDeleteItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64* i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    if ((*(_DWORD*)(v2 + 56) & 0x80000000) == 0) {
      goto LABEL_8;
    }
    for (i = *(__int64**)(v2 + 8);; ++i) {
      v4 = *i;
      if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
    }
    if ((*(_DWORD*)(v4 + 84) & 0x80000000) == 0) {
    LABEL_8:
      v5 = a1[1];
      v16 = "MID_Gmap_CorpsDelete_Confirm";
      v14_.v15 = v14_.v14;
      v10_.v11 = v10_.v10;
      v14_.v14[0] = GameData_20272d0;
      v12_.v13 = v12_.v12;
      v12_.v12[0] = GameData_2027350;
      v10_.v10[0] = GameData_2027350;
      MapSortieMenu_871860(v5, (__int64)&v16, (__int64)v14_.v14,
                           (__int64)v12_.v12, (__int64)v10_.v10);
      if (v10_.v11 == v10_.v10) {
        v6 = 32;
      }
      else {
        if (v10_.v11 == nullptr) {
          goto LABEL_14;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
    LABEL_14:
      if (v12_.v13 == v12_.v12) {
        v8 = 32;
      }
      else {
        if (v12_.v13 == nullptr) {
          goto LABEL_19;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v12_.v13 + v8))((__int64)v12_.v13);
    LABEL_19:
      if (v14_.v15 == v14_.v14) {
        v9 = 32;
        goto LABEL_23;
      }
      if (v14_.v15 != nullptr) {
        v9 = 40;
      LABEL_23:
        (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
      }
      return 12;
    }
  }
  return 1;
}

__int64 game_gmap_anonymous_CorpsDeleteItem_ACall_closure_Invoke()
{
  __int64 v1;
  int v2;

  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 11;
    return 4;
  }
  else {
    v1 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 11;
      v2 = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 11;
      v2 = 12;
    }
    *(_DWORD*)(v1 + 152) = v2;
    return 4;
  }
}

#pragma GCC visibility pop
