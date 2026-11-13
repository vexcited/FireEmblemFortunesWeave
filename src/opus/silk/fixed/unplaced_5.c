#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_silk_fixed_5ff80(__int64 result, __int64 a2, int a3);

__int64 opus_silk_fixed_5ff80(__int64 result, __int64 a2, int a3)
{
  int* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _DWORD* v25;
  int v26;
  unsigned __int64 v27;

  if (a3 >= 1) {
    v3 = (int*)(result - 4);
    v4 = 1;
    v5 = 0;
    v6 = (unsigned int)a3;
    do {
      if (v4 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 = v4 >> 1;
      }
      v8 = v5 + 1;
      if ((v5 + 1) >> 1 <= 1) {
        LOBYTE(v9) = 1;
      }
      else {
        v9 = (v5 + 1) >> 1;
      }
      if (v5 != 0) {
        v10 = *(__int16*)(a2 + 2 * v5);
        if (v5 >= 7) {
          v12 = result + 4 * v5;
          v11 = 0;
          v13 = (_DWORD*)(result + 8);
          v14 = v3;
          do {
            v15 = *v14;
            v16 = *(v13 - 2);
            *(v13 - 2) =
                v16 + ((unsigned __int64)(v10 * (__int64)(2 * *v14)) >> 16);
            *v14 = v15 + ((unsigned __int64)(v10 * (__int64)(2 * v16)) >> 16);
            v14 -= 4;
            v17 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL));
            v18 = *(v13 - 1);
            *(v13 - 1) =
                v18 + ((unsigned __int64)(v10 * (__int64)(2 * v17)) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL)) =
                v17 + ((unsigned __int64)(v10 * (__int64)(2 * v18)) >> 16);
            v19 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL));
            v20 = v10 * (__int64)(2 * *(int*)v13);
            *(_DWORD*)v13 += (unsigned __int64)(v10 * (__int64)(2 * v19)) >> 16;
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL)) =
                v19 + (v20 >> 16);
            v21 = v11 ^ 0x3FFFFFFFFFFFFFFCLL;
            v11 += 4;
            v22 = *(_DWORD*)(v12 + 4 * v21);
            LODWORD(v20) = v13[1];
            v13[1] = v20 + ((unsigned __int64)(v10 * (__int64)(2 * v22)) >> 16);
            v13 += 4;
            *(_DWORD*)(v12 + 4 * v21) =
                v22 + ((unsigned __int64)(v10 * (__int64)(2 * (int)v20)) >> 16);
          } while ((v7 & 0x7FFFFFFFFFFFFFFCLL) != v11);
        }
        else {
          v11 = 0;
        }
        if ((v9 & 3) != 0) {
          v23 = v7 & 3;
          v24 = -1 * v11;
          v25 = (_DWORD*)(result + 4 * v11);
          do {
            v26 = v3[v24];
            --v23;
            v27 = v10 * (__int64)(2 * *(int*)v25);
            *(_DWORD*)v25++ +=
                (unsigned __int64)(v10 * (__int64)(2 * v26)) >> 16;
            v3[v24--] = v26 + (v27 >> 16);
          } while (v23 != 0);
        }
      }
      ++v4;
      ++v3;
      *(_DWORD*)(result + 4 * v5) = -512 * *(__int16*)(a2 + 2 * v5);
      ++v5;
    } while (v8 != v6);
  }
  return result;
}

#pragma GCC visibility pop
