#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __fpclassifyl_plt(long double);
__int64 __netf2();
extern __int128 SdkData_bb3280;
extern __int128 SdkData_bb4110;
extern __int128 SdkData_bb4540;
long double SdkRoutine_853f10(long double, long double);
long double SdkRoutine_854fd0(long double, long double);
long double fmodl(long double a1, long double a2);

long double fmodl(long double a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  long double v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  long double v13;
  unsigned __int64 v14;
  __int64 v15;
  signed __int128 v16;
  long double v17;
  __int128 v18;
  signed __int128 v19;
  __int128 v20;
  __int16 v21;
  long double v24;
  long double v25;
  long double v26;
  long double v27;
  long double v28;

  v3 = *((_QWORD*)&a1 + 1);
  v2 = *(_QWORD*)&a1;
  v5 = *((_QWORD*)&a2 + 1);
  v4 = *(_QWORD*)&a2;
  if ((unsigned int)__netf2() == 0 ||
      (unsigned int)__fpclassifyl_plt(a2) == 0 ||
      (_DWORD)(v8 = HIWORD(v3) & 0x7FFF) == 0x7FFF) {
    v6 = SdkRoutine_854fd0(a1, a2);
    return SdkRoutine_853f10(v6, v6);
  }
  v9 = v3 & 0x7FFFFFFFFFFFFFFFLL;
  v10 = v5 & 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD*)&v28 = v2;
  *(_QWORD*)&v27 = v4;
  *((_QWORD*)&v27 + 1) = v5 & 0x7FFFFFFFFFFFFFFFLL;
  if ((int)__netf2() <= 0) {
    if ((unsigned int)__netf2() != 0) {
      return a1;
    }
    v12 = a1;
    return SdkRoutine_854fd0(v12, *(long double*)&SdkData_bb4110);
  }
  v11 = HIWORD(v5) & 0x7FFF;
  if ((_DWORD)v8 != 0) {
    v12 = a1;
    v13 = v27;
    if ((_DWORD)v11 != 0) {
      goto LABEL_8;
    }
  }
  else {
    *((_QWORD*)&v28 + 1) = v3 & 0x7FFFFFFFFFFFFFFFLL;
    v17 = SdkRoutine_854fd0(v28, *(long double*)&SdkData_bb3280);
    v9 = *((_QWORD*)&v17 + 1);
    v2 = *(_QWORD*)&v17;
    LODWORD(v8) = HIWORD(*((_QWORD*)&v17 + 1)) - 120;
    v12 = a1;
    v13 = v27;
    if ((_DWORD)v11 != 0) {
    LABEL_8:
      v14 = v9 & 0xFFFFFFFFFFFFLL | 0x1000000000000LL;
      v15 = v10 & 0xFFFFFFFFFFFFLL | 0x1000000000000LL;
      if ((int)v8 > (int)v11) {
        goto LABEL_17;
      }
      goto LABEL_9;
    }
  }
  v26 = SdkRoutine_854fd0(v13, *(long double*)&SdkData_bb3280);
  v12 = a1;
  v4 = *(_QWORD*)&v26;
  LODWORD(v11) = HIWORD(*((_QWORD*)&v26 + 1)) - 120;
  v14 = v9 & 0xFFFFFFFFFFFFLL | 0x1000000000000LL;
  v15 = *((_QWORD*)&v26 + 1) & 0xFFFFFFFFFFFFLL | 0x1000000000000LL;
  if ((int)v8 > (int)v11) {
    do {
    LABEL_17:
      while (1) {
        v19 = __PAIR128__(v14 - v15, v2) - v4;
        if (v19 >= 0) {
          break;
        }
        *((_QWORD*)&v18 + 1) = v14;
        *(_QWORD*)&v18 = v2;
        v14 = v18 >> 63;
        v2 *= 2;
        LODWORD(v8) = v8 - 1;
        if ((int)v8 <= (int)v11) {
          goto LABEL_20;
        }
      }
      if (v19 == 0) {
        return SdkRoutine_854fd0(v12, *(long double*)&SdkData_bb4110);
      }
      v14 = (__int128)(__PAIR128__(v14 - v15, v2) - v4) >> 63;
      v2 = 2 * v19;
      LODWORD(v8) = v8 - 1;
    } while ((int)v8 > (int)v11);
  LABEL_20:
    LODWORD(v8) = v11;
    v16 = __PAIR128__(v14 - v15, v2) - v4;
    if (v16 < 0) {
      goto LABEL_23;
    }
    goto LABEL_21;
  }
LABEL_9:
  v16 = __PAIR128__(v14 - v15, v2) - v4;
  if (v16 >= 0) {
  LABEL_21:
    if (v16 == 0) {
      return SdkRoutine_854fd0(v12, *(long double*)&SdkData_bb4110);
    }
    v14 = *((_QWORD*)&v16 + 1);
    v2 = v16;
  }
LABEL_23:
  while (HIWORD(v14) == 0) {
    *((_QWORD*)&v20 + 1) = v14;
    *(_QWORD*)&v20 = v2;
    v14 = v20 >> 63;
    v2 *= 2;
    LODWORD(v8) = v8 - 1;
  }
  v21 = HIWORD(v3) & 0x8000;
  if ((int)v8 <= 0) {
    *(_QWORD*)&v24 = v2;
    *((_QWORD*)&v24 + 1) =
        v14 & 0xFFFFFFFFFFFFLL |
        ((unsigned __int64)(unsigned __int16)((v8 + 120) | v21) << 48);
    return SdkRoutine_854fd0(v24, *(long double*)&SdkData_bb4540);
  }
  else {
    *(_QWORD*)&v25 = v2;
    *((_QWORD*)&v25 + 1) =
        v14 & 0xFFFFFFFFFFFFLL |
        ((unsigned __int64)(unsigned __int16)(v8 | v21) << 48);
    return v25;
  }
}

#pragma GCC visibility pop
