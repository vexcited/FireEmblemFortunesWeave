#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10d4bf0(float);
__int64 GameRoutine_10d7940(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern __int64 GameData_21d8778;
extern __int64 game_script_hub_g_frame_counter;
extern __int64* GameData_212d448[9];
extern int GameData_22355d8;
__int64 ActionWaitAttack_Unknown6(__int64 a1);

__int64 ActionWaitAttack_Unknown6(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  int v6;
  float v7;
  float v8;
  __int64 v9;
  int v10;
  int v11;

  v2 = GameData_212d448[0];
  result = *(_QWORD*)(*GameData_212d448[0] + 8);
  v5 = *(_QWORD*)(result + 64);
  if (v5 != 0) {
    v6 = *(_DWORD*)(v5 + 8);
  }
  else {
    v6 = -1;
  }
  if (v6 == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL)) {
    if ((*(_BYTE*)(result + 113) & 0x80) != 0) {
      v3 = *GameData_212d448[0];
      v7 = (float)(nn_os_ConvertToTimeSpan(
                       *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
                       1000 -
                   *(_QWORD*)(v3 + 136)) /
           1000000.0;
      if (*(float*)&GameData_22355d8 > 0.0) {
        v8 = *(float*)&GameData_22355d8 + *(float*)(GameData_21d8778 + 460);
        if (v8 > v7) {
          result = GameRoutine_10d4bf0(v8);
          if ((result & 1) == 0) {
            return result;
          }
        }
      }
      v9 = *v2;
      GameData_22355d8 = LODWORD(v7);
      result = *(_QWORD*)(v9 + 8);
    }
    result = GameRoutine_10d7940(result);
    v10 = *(_DWORD*)(a1 + 16);
    if (v10 != 1 && v10 != 3) {
      if (v10 == 2) {
        v11 = 3;
      }
      else {
        v11 = 1;
      }
      *(_DWORD*)(a1 + 16) = v11;
    }
  }
  return result;
}

#pragma GCC visibility pop
