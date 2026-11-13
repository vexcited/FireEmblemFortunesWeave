#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
extern __int64* GameData_212c880[5];
__int64 game_map_DeployArgs_SetUnit_lambda0_Invoke(__int64 result, _DWORD* a2);

__int64 game_map_DeployArgs_SetUnit_lambda0_Invoke(__int64 result, _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;

  v2 = *(_QWORD*)(result + 16);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = (*a2 >> 19) & 0x1F),
           (int)(v10 - ((*a2 >> 12) & 0x7F) + v9) >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          v11 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
          if (*(_WORD*)(v11 + 256) != 0) {
            v12 = **(__int16**)(v11 + 264);
          }
          else {
            v12 = 0;
          }
          *(_DWORD*)(v4 + 16) += v12;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
