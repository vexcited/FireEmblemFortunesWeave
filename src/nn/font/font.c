#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) Font_Unknown2();
__int64 GameRoutine_55d8a0();
__int64 GameRoutine_55d920();
__int64 GameRoutine_55d940();
extern __int64 (*GameData_2135ee8[3])();
__attribute__((swiftcall)) void Font_55d700(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void Font_55d7a0(PSEUDO_X8 x8_, __int64 a1);
void __attribute__((noreturn)) Font_Unknown2() { __udf(0x8002u); }

__attribute__((swiftcall)) void Font_55d700(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  if ((_DWORD)result == 3) {
    *a2 = 0;
    a2[1] = GameRoutine_55d920;
    a2[2] = 0;
  }
  else if ((_DWORD)result == 2) {
    *a2 = 0;
    a2[1] = GameRoutine_55d940;
    a2[2] = 0;
  }
  else {
    *a2 = 0;
    if ((_DWORD)result == 1) {
      a2[1] = GameRoutine_55d8a0;
    }
    else {
      a2[1] = 0;
    }
    a2[2] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Font_55d7a0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 (*v4)();

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = GameData_2135ee8[0];
  a2[2] = 0;
  if ((_DWORD)result != 1) {
    v4 = nullptr;
  }
  *a2 = 0;
  a2[1] = v4;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
