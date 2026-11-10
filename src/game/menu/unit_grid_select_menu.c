#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5);

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5)
{
  __int64 v5;
  char* v6;
  _QWORD* v7;

  v5 = a1[2];
  v6 = (char*)a1[1];
  v7 = (_QWORD*)(a1[3] + (v5 >> 1));
  if ((v5 & 1) != 0) {
    v6 = *(char**)&v6[*v7];
  }
  return ((__int64 (*)(_QWORD*, _QWORD, _QWORD, __int64, _QWORD))v6)(
      v7, *a2, *a3, a4, *a5);
}

#pragma GCC visibility pop
