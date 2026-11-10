#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_78ead0(_QWORD);
unsigned __int64 scanexp(_QWORD* a1, int a2);

unsigned __int64 scanexp(_QWORD* a1, int a2)
{
  unsigned __int8* v2;
  unsigned int v5;
  _BOOL4 v6;
  unsigned __int8* v7;
  unsigned int v8;
  unsigned __int64 result;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int8* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int8* v19;
  unsigned __int8* v20;

  v2 = (unsigned __int8*)a1[1];
  if (v2 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  else {
    a1[1] = v2 + 1;
    v5 = *v2;
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  if (v5 != 45) {
    v8 = v5 - 58;
    v6 = false;
    goto LABEL_14;
  }
LABEL_6:
  v7 = (unsigned __int8*)a1[1];
  if (v7 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  else {
    a1[1] = v7 + 1;
    v5 = *v7;
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  if (v8 <= 0xFFFFFFF5) {
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    goto LABEL_15;
  }
LABEL_14:
  if (v8 < 0xFFFFFFF6) {
  LABEL_15:
    result = 0x8000000000000000LL;
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    return result;
  }
  if (v5 - 48 > 9) {
    v15 = 0;
  }
  else {
    v10 = 0;
    do {
      v14 = (unsigned __int8*)a1[1];
      if (v14 == (unsigned __int8*)a1[22]) {
        v11 = SdkRoutine_78ead0(a1);
      }
      else {
        a1[1] = v14 + 1;
        v11 = *v14;
      }
      v12 = v5 + 10 * v10;
      v5 = v11;
      v10 = v12 - 48;
    } while (v11 - 48 <= 9 && v10 < 214748364);
    v15 = v10;
    if (v11 - 48 <= 9) {
      do {
        v19 = (unsigned __int8*)a1[1];
        if (v19 == (unsigned __int8*)a1[22]) {
          v16 = SdkRoutine_78ead0(a1);
        }
        else {
          a1[1] = v19 + 1;
          v16 = *v19;
        }
        v17 = 10 * v15 + v11;
        v11 = v16;
        v15 = v17 - 48;
      } while (v16 - 48 <= 9 && v15 < 0x147AE147AE147AELL);
      if (v16 - 48 <= 9) {
        do {
          while (1) {
            v20 = (unsigned __int8*)a1[1];
            if (v20 != (unsigned __int8*)a1[22]) {
              break;
            }
            if ((unsigned int)SdkRoutine_78ead0(a1) - 48 >= 0xA) {
              goto LABEL_44;
            }
          }
          a1[1] = v20 + 1;
        } while ((unsigned int)*v20 - 48 < 0xA);
      }
    }
  }
LABEL_44:
  if ((a1[23] & 0x8000000000000000LL) == 0) {
    --a1[1];
  }
  if (v6) {
    return -v15;
  }
  else {
    return v15;
  }
}

#pragma GCC visibility pop
