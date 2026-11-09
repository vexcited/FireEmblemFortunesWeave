#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10c5990(__int64, char);
__int64 GameRoutine_d60750(_QWORD);
__int64 GameRoutine_df4e10(void);
__int64 GameRoutine_e18130(_QWORD);
extern __int64 GameData_212dbb8[9];
__int64 StatePatrol_Unknown3(__int64 a1);
__int64 StatePatrol_Unknown4(__int64 result);

__int64 StatePatrol_Unknown3(__int64 a1)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 88LL) + 9LL) = 1;
  return GameRoutine_df4e10();
}

__int64 StatePatrol_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 2) != 0 ||
      *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL) +
                    328LL);
    result = GameRoutine_d60750(v2);
    if (*(float*)(v2 + 376) > 0.0) {
      result = GameRoutine_10c5990(v1, 1);
      if ((unsigned int)(result - 1) <= 1) {
        if (*(_BYTE*)(v1 + 76) != 1 || *(_DWORD*)(v1 + 72) != 3) {
          *(_DWORD*)(v1 + 80) = 3;
          *(_BYTE*)(v1 + 84) = 1;
        }
        if ((*(_BYTE*)(v1 + 160) & 1) == 0 && (*(_BYTE*)(v1 + 161) & 1) != 0) {
          return GameRoutine_e18130(v1 + 64);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
