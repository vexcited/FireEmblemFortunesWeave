#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1ffcc48[])();
extern __int64 GameData_21ca300;
extern __int64* GameData_212ce90[3];
__int64
game_map_MapDrawUtil_GetOnUnitImage_lambda0_Invoke_fbbdc0(__int64 result,
                                                          __int64* a2);
__int64
game_map_MapDrawUtil_GetOnUnitImage_lambda0_Invoke_fbbf70(__int64 result,
                                                          int* a2, int* a3);
bool game_map_MapDrawUtil_GetOnUnitImage_lambda1_Invoke(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3);
__int64

game_map_MapDrawUtil_GetOnUnitImage_lambda0_Invoke_fbbdc0(__int64 result,
                                                          __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;

  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    v2 = *a2;
    v3 = (_QWORD*)result;
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 280LL))(
        v2, **(_QWORD**)(result + 32));
    if ((result & 1) != 0) {
      v5 = v3[2];
      v4 = v3[3];
      v6 = v3[1];
      v9 = v8;
      v8[0] = GameData_1ffcc48;
      v8[1] = v5;
      v8[2] = v4;
      v8[3] = v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 744LL))(v2, v8);
      result = (__int64)v9;
      if (v9 == v8) {
        v7 = 32;
      }
      else {
        if (v9 == nullptr) {
          return result;
        }
        v7 = 40;
      }
      return (*(__int64 (**)(__int64))(*v9 + v7))((__int64)v9);
    }
  }
  return result;
}

__int64

game_map_MapDrawUtil_GetOnUnitImage_lambda0_Invoke_fbbf70(__int64 result,
                                                          int* a2, int* a3)
{
  int v3;
  int v4;
  int v5;
  __int64 v6;

  v3 = *a2;
  if (*a2 == **(_DWORD**)(result + 8)) {
    v4 = *a3;
    if (*a3 == **(_DWORD**)(result + 16) &&
        *(unsigned __int8*)(GameData_21ca300 + 18) >
            (unsigned int)(unsigned __int8)(v3 -
                                            *(_BYTE*)(GameData_21ca300 + 16)) &&
        *(unsigned __int8*)(GameData_21ca300 + 19) >
            (unsigned int)(unsigned __int8)(v4 -
                                            *(_BYTE*)(GameData_21ca300 + 17))) {
      v5 = (v3 + 32 * v4) >> 5;
      if (*(_BYTE*)(*GameData_212ce90[0] +
                    *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
        v6 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
      }
      else {
        v6 = 0;
      }
      if (((*(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + (v6 << 7) +
                       4LL * v5 + 8) >>
            v3) &
           1) != 0) {
        **(_BYTE**)(result + 24) = 1;
      }
    }
  }
  return result;
}

bool game_map_MapDrawUtil_GetOnUnitImage_lambda1_Invoke(__int64 a1, _DWORD* a2,
                                                        _DWORD* a3)
{
  return *(_DWORD*)(a1 + 8) == *a2 && *(_DWORD*)(a1 + 12) == *a3;
}

#pragma GCC visibility pop
