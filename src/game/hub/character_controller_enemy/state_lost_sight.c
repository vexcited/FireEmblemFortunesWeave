#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10c5990(__int64, char);
__int64 GameRoutine_d60750(_QWORD);
__int64 GameRoutine_e18130(_QWORD);
extern __int64 GameData_212dbb8[9];
__int64 StateLostSight_Unknown2(__int64 result);
__int64 StateLostSight_Unknown4(__int64 result);

__int64 StateLostSight_Unknown2(__int64 result)
{
  *(_DWORD*)(result + 16) = 0;
  return result;
}

__int64 StateLostSight_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v5;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 2) != 0 ||
      *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL) +
                    328LL);
    result = GameRoutine_d60750(v3);
    if (*(float*)(v3 + 376) > 0.0) {
      result = GameRoutine_10c5990(v1, 1);
      if ((unsigned int)(result - 1) <= 1) {
        if (*(_BYTE*)(v1 + 76) == 1 && *(_DWORD*)(v1 + 72) == 3) {
          goto LABEL_17;
        }
        *(_DWORD*)(v1 + 80) = 3;
        goto LABEL_16;
      }
    }
  }
  v1 = *(_QWORD*)(v2 + 8);
  v5 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL) +
                 228LL) +
       *(float*)(v2 + 16);
  *(float*)(v2 + 16) = v5;
  if (v5 < 1.0) {
    return result;
  }
  if (*(_BYTE*)(v1 + 76) != 1 || *(_DWORD*)(v1 + 72) != 1) {
    *(_DWORD*)(v1 + 80) = 1;
  LABEL_16:
    *(_BYTE*)(v1 + 84) = 1;
  }

LABEL_17:
  if ((*(_BYTE*)(v1 + 160) & 1) == 0 && (*(_BYTE*)(v1 + 161) & 1) != 0) {
    return GameRoutine_e18130(v1 + 64);
  }
  return result;
}

#pragma GCC visibility pop
