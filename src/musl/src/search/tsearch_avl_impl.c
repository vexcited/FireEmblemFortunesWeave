#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 walk(__int64 result, __int64 (*a2)(void), unsigned int a3);

__int64 walk(__int64 result, __int64 (*a2)(void), unsigned int a3)
{
  __int64 v3;

  if (result != 0) {
    if (*(_DWORD*)(result + 24) == 1) {
      return a2();
    }
    else {
      v3 = result;
      a2();
      walk(*(_QWORD*)(v3 + 8), a2, a3 + 1);
      ((void (*)(__int64, __int64, _QWORD))a2)(v3, 1, a3);
      walk(*(_QWORD*)(v3 + 16), a2, a3 + 1);
      return ((__int64 (*)(__int64, __int64, _QWORD))a2)(v3, 2, a3);
    }
  }
  return result;
}

#pragma GCC visibility pop
