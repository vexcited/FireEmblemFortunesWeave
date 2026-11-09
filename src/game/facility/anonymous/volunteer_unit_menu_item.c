#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_975940(void);
__int64 VolunteerUnitMenuItem_Unknown80(__int64 a1);

__int64 VolunteerUnitMenuItem_Unknown80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 104);
  if (*(_BYTE*)(v2 + 82) == 6) {
    return 0;
  }
  v3 = *(_QWORD*)(v1 + 392);
  if (v3 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v3 + 288);
  if (result != 0) {
    result = GameRoutine_975940();
    if (result != 0) {
      return *(unsigned __int8*)(result + *(unsigned __int8*)(v2 + 82) + 183);
    }
  }
  return result;
}

#pragma GCC visibility pop
