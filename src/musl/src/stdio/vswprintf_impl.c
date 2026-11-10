#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mbtowc_plt(_QWORD, _QWORD, _QWORD);
__int64 sw_write(__int64 a1, __int64 a2, __int64 a3);

__int64 sw_write(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  _DWORD* v8;
  bool v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;

  v4 = *(_QWORD**)(a1 + 144);
  v5 = *(_QWORD*)(a1 + 56);
  if (a2 != v5 && sw_write(a1, v5, *(_QWORD*)(a1 + 40) - v5) == -1) {
    return -1;
  }
  v8 = (_DWORD*)*v4;
  v9 = v4[1] == 0 || a3 == 0;
  if (v9) {
  LABEL_17:
    v15 = *(_QWORD*)(a1 + 88);
    v16 = *(_QWORD*)(a1 + 96);
    *v8 = 0;
    *(_QWORD*)(a1 + 56) = v15;
    *(_QWORD*)(a1 + 32) = v15 + v16;
    *(_QWORD*)(a1 + 40) = v15;
  }
  else {
    v10 = a3;
    while (1) {
      v11 = mbtowc_plt(v8, a2, v10);
      if ((v11 & 0x80000000) != 0) {
        break;
      }
      if (v11 <= 1) {
        v12 = 1;
      }
      else {
        v12 = v11;
      }
      a2 += v12;
      v10 -= v12;
      v13 = v4[1] - 1LL;
      v8 = (_DWORD*)(*v4 + 4LL);
      v9 = v4[1] == 1;
      *v4 = v8;
      v4[1] = v13;
      if (v9 || v10 == 0) {
        goto LABEL_17;
      }
    }
    v17 = (_DWORD*)*v4;
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    a3 = (int)v11;
    *v17 = 0;
    *(_DWORD*)a1 |= 0x20u;
  }
  return a3;
}

#pragma GCC visibility pop
