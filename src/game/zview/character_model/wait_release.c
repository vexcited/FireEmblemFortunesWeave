#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterModel_cf4780(__int64);
__int64 GameRoutine_cf26c0(__int64, __int64);
__int64 GameRoutine_cfa2a0(_QWORD);
extern __int64* GameData_212eba8[8];
__int64 WaitRelease_Unknown4(__int64 a1);

__int64 WaitRelease_Unknown4(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = GameRoutine_cf26c0(*GameData_212eba8[0],
                              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL));
  if ((result & 1) != 0) {
    result = CharacterModel_cf4780(*(_QWORD*)(a1 + 8));
    v3 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v3 + 44) != 1 || *(_DWORD*)(v3 + 40) != 0) {
      *(_DWORD*)(v3 + 48) = 0;
      *(_BYTE*)(v3 + 52) = 1;
    }
    if ((*(_BYTE*)(v3 + 128) & 1) == 0 && (*(_BYTE*)(v3 + 129) & 1) != 0) {
      return GameRoutine_cfa2a0(v3 + 32);
    }
  }
  return result;
}

#pragma GCC visibility pop
