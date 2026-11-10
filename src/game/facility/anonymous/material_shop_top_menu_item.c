#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1700e60(__int64, __int64, char, __int64);
__int64 MaterialShopTopMenuItem_Unknown25(_QWORD* a1);

__int64 MaterialShopTopMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[32];
  _BYTE* v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v3 = a1[11];
  v8 = nullptr;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v4 = *(_QWORD*)(v2 + 152);
  }
  else {
    v4 = v2;
  }
  GameRoutine_1700e60(v4, v3, 0, (__int64)v7);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(void*))(*(_QWORD*)v8 + v5))((void*)v8);
  }
  return 9;
}

#pragma GCC visibility pop
