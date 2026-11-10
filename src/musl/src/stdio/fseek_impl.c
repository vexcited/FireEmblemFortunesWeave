#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __fseeko_unlocked(unsigned int* a1, __int64 a2, __int64 a3);

__int64 __fseeko_unlocked(unsigned int* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 (*v8)(unsigned int*, __int64, __int64);
  unsigned int v9;

  if ((unsigned int)a3 < 3) {
    if ((_DWORD)a3 == 1) {
      v5 = *((_QWORD*)a1 + 2);
      if (v5 != 0) {
        a2 = a2 - v5 + *((_QWORD*)a1 + 1);
      }
    }
    if (*((_QWORD*)a1 + 5) != *((_QWORD*)a1 + 7)) {
      v6 = a2;
      v7 = a3;
      (*((void (**)(unsigned int*, _QWORD, _QWORD))a1 + 9))(a1, 0, 0);
      a2 = v6;
      a3 = v7;
      if (*((_QWORD*)a1 + 5) == 0) {
        return 0xFFFFFFFFLL;
      }
    }
    v8 = *((__int64 (**)(unsigned int*, __int64, __int64))a1 + 10);
    *((_QWORD*)a1 + 7) = 0;
    *((_QWORD*)a1 + 4) = 0;
    *((_QWORD*)a1 + 5) = 0;
    if ((v8(a1, a2, a3) & 0x8000000000000000LL) == 0) {
      v9 = *a1;
      *((_QWORD*)a1 + 1) = 0;
      *((_QWORD*)a1 + 2) = 0;
      *a1 = v9 & 0xFFFFFFEF;
      return 0;
    }
    else {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    *(_DWORD*)__errno_location_plt(a1, a2) = 22;
    return 0xFFFFFFFFLL;
  }
}

#pragma GCC visibility pop
