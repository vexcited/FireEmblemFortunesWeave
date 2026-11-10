#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_140bb40(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2043250[])();
extern __int64 GameData_212dce8;
__int64 game_talk_Facility_TickBefore(__int64 result);

__int64 game_talk_Facility_TickBefore(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _QWORD v15[4];
  _QWORD* v16;

  v1 = result;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v2 = *(unsigned __int8*)(result + 968);
    v3 = *(_QWORD*)(result + 984);
    v4 = result + 992;
    v16 = v15;
    v5 = (v2 & 1) == 0;
    v6 = v2 >> 1;
    if (v5) {
      v7 = v1 + 969;
    }
    else {
      v7 = v3;
    }
    if (v5) {
      v8 = v6;
    }
    else {
      v8 = *(_QWORD*)(v1 + 976);
    }
    v15[0] = GameData_2043250;
    v15[1] = v1 + 944;
    GameRoutine_140bb40(v4, v7, v8, v15);
    result = (__int64)v16;
    if (v16 == v15) {
      v9 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_13;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v16 + v9))((__int64)v16);
  }
LABEL_13:
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
