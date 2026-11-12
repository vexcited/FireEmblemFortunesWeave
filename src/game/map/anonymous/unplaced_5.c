#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_UnitPool_Get(_BYTE*);
__int64 ITarget_773420(__int64*, __int64);
extern __int64 (*GameData_2126740[])();
extern __int64* GameData_212d1f8[2];
extern __int64 GameData_21cd0e8;
__int64 game_map_anonymous_19f3ea0(__int64 a1, __int64 a2, int a3, char a4);

__int64 game_map_anonymous_19f3ea0(__int64 a1, __int64 a2, int a3, char a4)
{
  int v5;
  bool v6;
  char v7;
  int v8;
  int v9;
  __int64* v10;
  __int16 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64* v16;
  struct {
    _BYTE v17[4];
    int v18;
    int v19;
    int v20;
    char v21;
    char gap81_[3];
    int v22;
    __int64 v23;
    unsigned __int64 v24;
    char v25;
  } v17_;
  unsigned __int8 v26;
  int v27;
  __int64 v28;

  v28 = a2;
  v27 = a3;
  v26 = 0;
  v17_.v17[0] = 0;
  v17_.v23 = 0;
  v17_.v24 = 0xFFFFFFFF00000000LL;
  v17_.v25 = 0;
  v17_.v20 = 0;
  v16 = GameData_212d1f8[0] + 2;
  v17_.v22 = -1;
  if (a1 != 0) {
    v5 = *(_DWORD*)(a1 + 592);
    v6 = *(_BYTE*)(a1 + 2088) == 0;
    v17_.v17[0] = *(_BYTE*)(a1 + 2088);
    v17_.v20 = v5;
    v7 = v6;
  }
  else {
    v7 = 1;
  }
  v17_.v21 = a4;
  LODWORD(v17_.v24) = 0;
  v9 = *(_DWORD*)(GameData_21cd0e8 + 20);
  v8 = *(_DWORD*)(GameData_21cd0e8 + 24);
  v17_.v22 = a3;
  v17_.v18 = v9;
  v17_.v19 = v8;
  if (a3 < 0) {
    v17_.v23 = 0;
  }
  else if ((v7 & 1) == 0 && game_UnitPool_Get(v17_.v17) != nullptr) {
    v10 = &game_UnitPool_Get(v17_.v17)[a3];
    v11 = *((_WORD*)v10 + 414);
    BYTE2(v17_.v23) = *((_BYTE*)v10 + 830);
    LOWORD(v17_.v23) = v11;
    BYTE3(v17_.v23) = *((_BYTE*)v10 + 831);
    HIDWORD(v17_.v23) = *((_DWORD*)v10 + 208);
  }
  v14_.v14[0] = GameData_2126740;
  v14_.v14[1] = &v28;
  v14_.v15 = v14_.v14;
  v14_.v14[2] = &v27;
  v14_.v14[3] = &v26;
  ITarget_773420((__int64*)&v16, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v12 = 32;
    goto LABEL_13;
  }
  if (v14_.v15 != nullptr) {
    v12 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v14_.v15 + v12))((__int64)v14_.v15);
  }
  return v26;
}

#pragma GCC visibility pop
