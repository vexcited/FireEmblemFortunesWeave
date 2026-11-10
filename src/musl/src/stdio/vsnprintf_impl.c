#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
unsigned __int64 sn_write(_QWORD* a1, __int64 a2, unsigned __int64 a3);

unsigned __int64 sn_write(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  _BYTE* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v15;

  v4 = a1[18];
  v5 = a1[7];
  v8 = a1[5] - v5;
  v9 = *(_BYTE**)v4;
  v10 = *(_QWORD*)(v4 + 8);
  if (v10 >= v8) {
    v11 = v8;
  }
  else {
    v11 = *(_QWORD*)(v4 + 8);
  }
  if (v11 != 0) {
    memcpy_plt(v9, v5, v11);
    v9 = (_BYTE*)(*(_QWORD*)v4 + v11);
    v10 = *(_QWORD*)(v4 + 8) - v11;
    *(_QWORD*)v4 = v9;
    *(_QWORD*)(v4 + 8) = v10;
  }
  if (v10 >= a3) {
    v12 = a3;
  }
  else {
    v12 = v10;
  }
  if (v12 != 0) {
    memcpy_plt(v9, a2, v12);
    v9 = (_BYTE*)(*(_QWORD*)v4 + v12);
    v13 = *(_QWORD*)(v4 + 8) - v12;
    *(_QWORD*)v4 = v9;
    *(_QWORD*)(v4 + 8) = v13;
  }
  *v9 = 0;
  v15 = a1[11];
  a1[7] = v15;
  a1[5] = v15;
  return a3;
}

#pragma GCC visibility pop
