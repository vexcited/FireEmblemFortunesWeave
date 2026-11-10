#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mbtowc_plt(_QWORD, _QWORD, _QWORD);
__int64 nnmusl_stdio_7798e0(int* a1, char* a2, __int64 a3);

__int64 nnmusl_stdio_7798e0(int* a1, char* a2, __int64 a3)
{
  _QWORD* v4;
  char* v5;
  __int64 v8;
  bool v10;
  int v11;
  __int64 v12;
  _DWORD* v13;
  int v15;
  __int64 v17;
  __int64 v18;
  int v19;

  v4 = *((_QWORD**)a1 + 18);
  v5 = *((char**)a1 + 7);
  if (a2 != v5 &&
      nnmusl_stdio_7798e0(a1, v5, *((_QWORD*)a1 + 5) - (_QWORD)v5) == -1) {
    return -1;
  }
  v8 = v4[1];
  v10 = v8 == 0 || (int)a3 < 1 || a2 == nullptr;
  if (v10) {
    *(_DWORD*)*v4 = 0;
  }
  else {
    v11 = 0;
    v12 = a3;
    do {
      while (1) {
        v15 = *a2;
        if (v15 < 0) {
          break;
        }
        v13 = (_DWORD*)*v4;
        ++a2;
        --v12;
        *v13 = v15;
        --v8;
        *v4 = v13 + 1;
        v4[1] = v8;
        if (v8 == 0 || (int)v12 <= 0) {
          goto LABEL_22;
        }
      }
      v11 = mbtowc_plt(*v4, a2, v12);
      a2 += v11;
      v12 -= v11;
      v13 = (_DWORD*)*v4;
      v8 = v4[1] - 1LL;
      v10 = v4[1] == 1;
      *v4 += 4LL;
      v4[1] = v8;
    } while (!v10 && (int)v12 > 0);
  LABEL_22:
    v13[1] = 0;
    if (v11 < 0) {
      v19 = *a1;
      *((_QWORD*)a1 + 7) = 0;
      *((_QWORD*)a1 + 4) = 0;
      *((_QWORD*)a1 + 5) = 0;
      a3 = v11;
      *a1 = v19 | 0x20;
      return a3;
    }
  }
  v17 = *((_QWORD*)a1 + 11);
  v18 = v17 + *((_QWORD*)a1 + 12);
  *((_QWORD*)a1 + 7) = v17;
  *((_QWORD*)a1 + 4) = v18;
  *((_QWORD*)a1 + 5) = v17;
  return a3;
}

#pragma GCC visibility pop
