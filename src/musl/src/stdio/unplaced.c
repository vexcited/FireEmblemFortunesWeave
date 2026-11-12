#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LockFile(__int64);
__int64 UnlockFile(__int64 result);
__int64 __errno_location_plt();
__int64 musl_src_stdio_7a1760(__int64 a1, __int64 a2, unsigned int a3);

__int64 musl_src_stdio_7a1760(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v6;
  unsigned int v7;
  __int64 v9;
  __int64 (*v10)(__int64, __int64, _QWORD);
  int v11;

  if ((*(char*)(a1 + 130) & 0x80000000) == 0) {
    v6 = (unsigned int)LockFile(a1) == 0;
    if (a3 >= 3) {
      goto LABEL_3;
    }
  LABEL_7:
    if (a3 == 1) {
      v9 = *(_QWORD*)(a1 + 16);
      if (v9 != 0) {
        a2 = a2 - v9 + *(_QWORD*)(a1 + 8);
      }
    }
    if ((*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 56) ||
         ((*(void (**)(__int64, _QWORD, _QWORD))(a1 + 72))(a1, 0, 0),
          *(_QWORD*)(a1 + 40) != 0)) &&
        (v10 = *(__int64 (**)(__int64, __int64, _QWORD))(a1 + 80),
         *(_QWORD*)(a1 + 56) = 0, *(_QWORD*)(a1 + 32) = 0,
         *(_QWORD*)(a1 + 40) = 0,
         (v10(a1, a2, a3) & 0x8000000000000000LL) == 0)) {
      v11 = *(_DWORD*)a1;
      v7 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_DWORD*)a1 = v11 & 0xFFFFFFEF;
      if (v6) {
        return v7;
      }
    }
    else {
      v7 = -1;
      if (v6) {
        return v7;
      }
    }
    goto LABEL_4;
  }
  v6 = true;
  if (a3 < 3) {
    goto LABEL_7;
  }
LABEL_3:
  v7 = -1;
  *(_DWORD*)__errno_location_plt() = 22;
  if (!v6) {
  LABEL_4:
    UnlockFile(a1);
  }
  return v7;
}

#pragma GCC visibility pop
