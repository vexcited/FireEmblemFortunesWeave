#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_16dd280(void);
extern __int64 (*GameData_20811e0[])();
extern __int64 GameData_225e7a0;
_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_GmapSpotCarriageMenuItem_vtable[])();
extern __int64 GameData_212d750;
extern __int64 GameData_21c96f8;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_GameModeData_instance_;
__int64 ProcGmapCarriageList_Unknown100(__int64 a1);

__int64 ProcGmapCarriageList_Unknown100(__int64 a1)
{
  __int64 v1;
  int v3;
  int v4;
  __int64 v5;
  int v6;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0 ||
      *(__int64 (***)())v1 !=
          game_gmap_anonymous_GmapSpotCarriageMenuItem_vtable ||
      *(_DWORD*)(v1 + 296) != 0) {
    return 1;
  }
  v3 =
      GameRoutine_9db9e0(23, *(unsigned __int16*)(*(_QWORD*)(v1 + 288) + 64LL));
  if (game_GameModeData_instance_ != 0) {
    v4 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v3) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v3) >> 31);
    if (v4 >= 9999999) {
      v4 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
  }
  *(_QWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 8LL) = *(_QWORD*)(v1 + 288);
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 7;
  }
  else {
    v5 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 7;
      v6 = 5;
    }
    else {
      v5 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 7;
      v6 = 12;
    }
    *(_DWORD*)(v5 + 152) = v6;
  }
  return 4;
}

_QWORD* ProcGmapCarriageList_Unknown145(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = GameRoutine_16dd280();
  v9[0] = GameData_20811e0;
  v9[1] = a1;
  v10 = v9;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    result = v9;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  v7 = v3;
  if (v1 != 0) {
    v8 = v1;
  }
  else {
    v8 = a1;
  }
  GameRoutine_167f810(v8, 6, a1 + 1200, 0, v7, (__int64)v9);
  result = v10;
  if (v10 == v9) {
    v5 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  if (v10 != nullptr) {
    v5 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  return result;
}

#pragma GCC visibility pop
