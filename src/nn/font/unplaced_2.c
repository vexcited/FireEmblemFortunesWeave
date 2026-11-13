#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_font_565760(__int64 a1,
                       __int64 (*a2)(__int64, __int64, __int64, __int64),
                       __int64 a3, __int64 a4);

__int64 nn_font_565760(__int64 a1,
                       __int64 (*a2)(__int64, __int64, __int64, __int64),
                       __int64 a3, __int64 a4)
{
  int v5;
  __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;

  *(_QWORD*)a1 = 0;
  *(_DWORD*)(a1 + 24) = a4;
  v5 = a4;
  result = a2(88LL * (unsigned int)a4, 8, a3, a4);
  v7 = (unsigned int)(v5 - 1);
  *(_QWORD*)(a1 + 8) = result;
  if (v5 >= 2) {
    v8 = ((_BYTE)v5 - 1) & 7;
    if ((unsigned int)(v5 - 2) >= 7) {
      v10 = 0;
      v9 = 0;
      do {
        v11 = (_QWORD*)(result + v10);
        v9 += 8;
        v10 += 704;
        v11[22] = v11 + 33;
        v11[11] = v11 + 22;
        *v11 = v11 + 11;
        v11[33] = v11 + 44;
        v11[44] = v11 + 55;
        v11[55] = v11 + 66;
        v11[66] = v11 + 77;
        v11[77] = v11 + 88;
      } while (704 * ((v7 >> 3) & 0xFFFFFFF) != v10);
    }
    else {
      v9 = 0;
    }
    if ((((_BYTE)v5 - 1) & 7) != 0) {
      v12 = result + 88 * v9 + 88;
      do {
        *(_QWORD*)(v12 - 88) = v12;
        v12 += 88;
        --v8;
      } while (v8 != 0);
    }
  }
  *(_QWORD*)(result + 88LL * (int)v7) = 0;
  *(_QWORD*)(a1 + 16) = result;
  return result;
}

#pragma GCC visibility pop
