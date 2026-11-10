#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_122f8e0(_QWORD);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_22400f8;
extern __int64* GameData_2130ad8[7];
__int64 map_history_ReserveToRecordMindAndChangeDead(__int64 result);
__int64 map_history_ReserveMindUnit(__int64 result);

__int64 map_history_ReserveToRecordMindAndChangeDead(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE v11[4];

  if ((result & 0x80000000) == 0) {
    v11[0] = result;
    result = game_UnitPool_Get(v11);
    if (result != 0) {
      v1 = GameData_22400f8;
      if (GameData_22400f8 != 0) {
        if (*(_BYTE*)(GameData_21cd108 + 8) != 0) {
          v2 = result;
          v3 = game_UnitPool_Get(GameData_21cd108 + 8);
          if (v3 != 0) {
            v4 = *(unsigned __int8*)(v3 + 2088);
            result = v2;
            if (*(unsigned __int8*)(v2 + 2088) == v4 &&
                *(_BYTE*)(v1 + 17) == 0) {
              v5 = GameRoutine_122f8e0(v2);
              result = v2;
              *(_BYTE*)(v1 + 17) = v5;
              v1 = GameData_22400f8;
              if (GameData_22400f8 == 0) {
                return result;
              }
            }
          }
          else {
            result = v2;
          }
        }
        if (*(_BYTE*)(v1 + 8) == 1 && (*(_BYTE*)(v1 + 9) & 1) == 0 &&
            *(_BYTE*)(v1 + 864) == 3) {
          v6 = *(__int64**)(result + 392);
          if (v6 != nullptr && *(_WORD*)(v1 + 874) == 512) {
            v7 = *v6;
            v8 = *(_QWORD*)(v1 + 896);
            if (*v6 == *(_QWORD*)(v1 + 880)) {
              v9 = v6[1];
              *(_QWORD*)(v1 + 880) = v8;
              v10 = *(_QWORD*)(v1 + 904);
              *(_QWORD*)(v1 + 896) = v7;
              *(_QWORD*)(v1 + 888) = v10;
              *(_QWORD*)(v1 + 904) = v9;
            }
            else if (v7 != v8) {
              return result;
            }
            *(_DWORD*)(v1 + 872) = 0x1000000;
          }
        }
      }
    }
  }
  return result;
}

__int64 map_history_ReserveMindUnit(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  _BYTE v7[4];

  if ((result & 0x80000000) == 0) {
    v7[0] = result;
    result = game_UnitPool_Get(v7);
    if (result != 0 && GameData_22400f8 != 0) {
      v1 = result;
      v2 = GameData_2130ad8[0];
      result = *GameData_2130ad8[0];
      if (*GameData_2130ad8[0] != 0) {
        result = GameRoutine_6c3980(result, v1);
        v3 = *v2;
        v4 = *(_QWORD*)(v1 + 440);
        if (v4 != 0) {
          v5 = *(unsigned __int8*)(v4 + 16);
          if (*(__int16*)(v3 + 490) < 0) {
          LABEL_7:
            if (v5 >= 0xA) {
              v6 = 0;
            }
            else {
              v6 = *(_QWORD*)(GameData_21ca310 + 56) + 24LL * v5 + 556000;
            }
            *(_QWORD*)(v3 + 440) = v6;
          }
        }
        else {
          v5 = 9;
          if (*(__int16*)(v3 + 490) < 0) {
            goto LABEL_7;
          }
        }
        *(_BYTE*)(v3 + 2088) = *(_BYTE*)(v1 + 2088);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
