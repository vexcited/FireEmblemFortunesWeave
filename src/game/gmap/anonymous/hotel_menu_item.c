#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212d750;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern char GameData_2260e78;
void game_gmap_anonymous_HotelMenuItem_ACall_closure_Invoke();
_QWORD* ProcHotelMenu_15f3130(__int64, int, __int64);
extern __int64 (*GameData_20880b8[])();
__int64 game_gmap_anonymous_HotelMenuItem_ACall(__int64 a1);

__int64 game_gmap_anonymous_HotelMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_DWORD*)(a1 + 152);
  v5_.v5[0] = GameData_20880b8;
  v5_.v6 = v5_.v5;
  ProcHotelMenu_15f3130(v1, v2, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v5_.v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  }
  return 9;
}

void game_gmap_anonymous_HotelMenuItem_ACall_closure_Invoke()
{
  __int64 v0;
  __int64 v1;

  GameData_2260e78 = 1;
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 4;
  }
  else {
    v0 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 4;
      *(_DWORD*)(v0 + 152) = 5;
    }
    else {
      v1 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(v1 + 276) = 4;
      *(_DWORD*)(v1 + 152) = 12;
    }
  }
}

#pragma GCC visibility pop
