#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cd108;
bool SpecialAttackCalculatorForEntrust_Destructor(__int64 a1, int a2, int a3);
bool SpecialAttackCalculatorForEntrust_DeletingDestructor(__int64 a1,
                                                          __int64 a2, int a3,
                                                          int a4);

bool SpecialAttackCalculatorForEntrust_Destructor(__int64 a1, int a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  _BOOL8 result;

  if (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 28LL) == 3) {
    v3 = a2 - *(_DWORD*)(GameData_21cd108 + 24);
    if (v3 < 0) {
      v3 = *(_DWORD*)(GameData_21cd108 + 24) - a2;
    }
    v4 = a3 - *(_DWORD*)(GameData_21cd108 + 28);
    if (v4 < 0) {
      v4 = *(_DWORD*)(GameData_21cd108 + 28) - a3;
    }
    if ((unsigned int)(v4 + v3) < 4) {
      return false;
    }
  }
  v5 = *(_QWORD*)(a1 + 16720);
  result = true;
  if (*(_BYTE*)(v5 + 128) == 1) {
    return (*(_DWORD*)(v5 + 4LL * ((a2 + 32 * a3) >> 5)) & (1 << a2)) != 0;
  }
  return result;
}

bool SpecialAttackCalculatorForEntrust_DeletingDestructor(__int64 a1,
                                                          __int64 a2, int a3,
                                                          int a4)
{
  unsigned int v4;
  __int64 v5;

  if ((*(_DWORD*)(a1 + 24) & 0xFFFFFFFD) != 0) {
    return true;
  }
  v4 = a3 + 32 * a4;
  if (v4 >= 0x400) {
    v4 = 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16712) + 8LL * v4);
  return (~v5 & 0x30000000000LL) != 0 ||
         (float)((float)BYTE4(v5) / 200.0) < 0.5;
}

#pragma GCC visibility pop
