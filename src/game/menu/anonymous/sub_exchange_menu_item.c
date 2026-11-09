#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SubExchangeMenuItem_Unknown25_17b30e0(_QWORD* a1);

__int64 SubExchangeMenuItem_Unknown25_17b30e0(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[24];
  if (v2 == 0 || a1[18] == 0) {
    return 1;
  }
  v4 = a1[18];
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
  return 2;
}

#pragma GCC visibility pop
