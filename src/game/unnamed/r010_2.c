#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern _DWORD* GameData_2130fb8;
extern __int64* GameData_2132488;
__int64 GameRoutine_1418c20(void);
__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);

__int64 GameHr_196be40(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  v3 = a1 - 19;
  *a1 = v2;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 19));
  *a1 = (__int64)(GameData_2132488 + 2);
  v4 = (_QWORD*)GameData_212dce8;
  v5 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
    }
    *v4 = 0;
  }
  GameRoutine_1418c20();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  GameRoutine_65a940(v3);
  return GameRoutine_658c00(a1 - 8);
}

#pragma GCC visibility pop
