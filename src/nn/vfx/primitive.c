#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fcdc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 Primitive_Unknown10(__int64 a1, unsigned int a2);
__int64 Primitive_Unknown11(__int64 a1, __int64 a2, unsigned int a3);
__int64 Primitive_Unknown12(__int64 a1, __int64 a2, unsigned int a3,
                            unsigned int a4);

__int64 Primitive_Unknown10(__int64 a1, unsigned int a2)
{
  return *(_QWORD*)(a1 + 8LL * a2 + 112);
}

__int64 Primitive_Unknown11(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6;
  __int64 v7;
  unsigned int v8;

  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1);
  return GameRoutine_5fcdc0(a2, 3, v6, v7, v8, 0, a3, 0);
}

__int64 Primitive_Unknown12(__int64 a1, __int64 a2, unsigned int a3,
                            unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v10;

  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1);
  return GameRoutine_5fcdc0(a2, 3, v8, v9, v10, 0, a3, a4);
}

#pragma GCC visibility pop
