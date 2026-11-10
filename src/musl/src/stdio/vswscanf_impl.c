#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 wcsrtombs_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wstring_read(_QWORD* a1, _BYTE* a2, __int64 a3);

__int64 wstring_read(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;

  v10 = a1[18];
  if (v10 == 0) {
    return 0;
  }
  v6 = wcsrtombs_plt(a1[11], &v10, a1[12], 0);
  if (v6 == -1) {
    a1[1] = 0;
    a1[2] = 0;
    return 0;
  }
  else {
    v7 = (_BYTE*)a1[11];
    v8 = v6;
    result = 0;
    a1[1] = v7;
    a1[2] = &v7[v8];
    a1[18] = v10;
    if (a3 != 0 && v8 != 0) {
      result = 1;
      a1[1] = v7 + 1;
      *a2 = *v7;
    }
  }
  return result;
}

#pragma GCC visibility pop
