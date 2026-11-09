#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159ede0(void);
__int64 GameRoutine_185d480(_QWORD);
__int64 GameRoutine_1860cc0(_QWORD);
__int64 SubDeployMenuItem_Unknown25(_QWORD* a1);
__int64 SubDeployMenuItem_Unknown58(__int64 a1);
__int64 SubDeployMenuItem_Unknown71(__int64 a1);

__int64 SubDeployMenuItem_Unknown25(_QWORD* a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v2 = *(unsigned __int8*)(*(_QWORD*)(a1[18] + 400LL) + 96LL);
    if (v2 == 2) {
      v6 = a1[1];
      if (*(_QWORD*)(v6 + 152) != 0) {
        v7 = *(_QWORD*)(v6 + 152);
      }
      else {
        v7 = a1[1];
      }
      GameRoutine_1860cc0(v7);
      return 9;
    }
    if (v2 == 1) {
      v3 = a1[1];
      if (*(_QWORD*)(v3 + 152) != 0) {
        v4 = *(_QWORD*)(v3 + 152);
      }
      else {
        v4 = a1[1];
      }
      GameRoutine_185d480(v4);
      return 9;
    }
  }
  return 1;
}

__int64 SubDeployMenuItem_Unknown58(__int64 a1)
{
  char v2;

  if (*(_QWORD*)(a1 + 144) != 0 && (GameRoutine_159ede0() & 1) != 0) {
    v2 = *(_BYTE*)(a1 + 82);
  }
  else {
    v2 = 0;
  }
  return v2 & 1;
}

__int64 SubDeployMenuItem_Unknown71(__int64 a1)
{
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 144) + 400LL) + 96LL) == 2) {
    return 7;
  }
  else {
    return 8;
  }
}

#pragma GCC visibility pop
