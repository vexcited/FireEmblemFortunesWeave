#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d48660(_QWORD, _QWORD, _QWORD);
__int64 DamageN_Unknown3(__int64 a1);
__int64 DamageN_Unknown5(__int64 a1);

__int64 DamageN_Unknown3(__int64 a1)
{
  __int64 v1;
  int v3;
  char v4;
  char v5;
  char v6;
  char v7;
  char v8;
  int v9;
  char v10;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v3 = 0;
  v4 = 1;
  v10 = 1;
  v9 = 1036831949;
  return GameRoutine_d48660(v1, 3101391519LL, &v3);
}

__int64 DamageN_Unknown5(__int64 a1)
{
  __int64 v1;
  _QWORD v3[4];

  v1 = *(_QWORD*)(a1 + 8);
  memset(v3, 0, sizeof(v3));
  *(_BYTE*)(v1 + 128) = 0;
  return GameRoutine_d48660(*(_QWORD*)(a1 + 8), 1817091785, v3);
}

#pragma GCC visibility pop
