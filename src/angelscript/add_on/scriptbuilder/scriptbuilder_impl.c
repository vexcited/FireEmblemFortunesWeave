#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a31e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb2f70(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void scriptbuilder_1a6f10(PSEUDO_X8 x8_, _QWORD* a1,
                                                     unsigned __int8* a2);

__attribute__((swiftcall)) void scriptbuilder_1a6f10(PSEUDO_X8 x8_, _QWORD* a1,
                                                     unsigned __int8* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;

  if ((*(_BYTE*)a1 & 1) != 0) {
    GameRoutine_cb2f70(a3, a1[2], a1[1]);
  }
  else {
    v5 = a1[1];
    *a3 = *a1;
    a3[1] = v5;
    a3[2] = a1[2];
  }
  v6 = *a2;
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  {
    GameRoutine_1a31e0(a3, v9, v10);
    return;
  }
}

#pragma GCC visibility pop
