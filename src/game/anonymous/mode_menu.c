#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_1fbc690;
extern __int64* GameData_212e008[9];
__int64 ModeMenu_a0aba0(__int64 a1);
__int64 ModeMenu_a0ac10(__int64 a1);

__int64 ModeMenu_a0aba0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  char v3;

  v1 = *(_QWORD*)(a1 + 1088);
  if (v1 == 0) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fbc690, 0);
    if (result != 0) {
      v3 = *(_BYTE*)(result + 83);
      (*(void (**)(__int64, char*))(*(_QWORD*)v1 + 48LL))(v1, &v3);
      return 2;
    }
  }
  return result;
}

__int64 ModeMenu_a0ac10(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 1136);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    return 3;
  }
  return result;
}

#pragma GCC visibility pop
