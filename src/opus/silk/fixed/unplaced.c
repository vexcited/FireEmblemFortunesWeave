#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 opus_silk_fixed_3085a0(__int64 result, __int64 a2, int a3);
__int64 opus_silk_fixed_30d5e0(__int64 result, __int64 a2, int a3, int a4);

__int64 opus_silk_fixed_3085a0(__int64 result, __int64 a2, int a3)
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
  int* v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  int v32;
  unsigned __int64 v33;

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
      v10 = *(_DWORD*)(a2 + 4 * v5);
      if (v5 != 0) {
        if (v5 >= 0xF) {
          v12 = result + 4 * v5;
          v11 = 0;
          v13 = (int*)(result + 16);
          v14 = v3;
          do {
            v15 = *v14;
            v16 = *(v13 - 4);
            *(v13 - 4) = v16 + ((unsigned __int64)(*v14 * (__int64)v10) >> 16);
            *v14 = v15 + ((unsigned __int64)(v16 * (__int64)v10) >> 16);
            v14 -= 8;
            v17 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL));
            v18 = *(v13 - 3);
            *(v13 - 3) = v18 + ((unsigned __int64)(v17 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL)) =
                v17 + ((unsigned __int64)(v18 * (__int64)v10) >> 16);
            v19 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL));
            v20 = *(v13 - 2);
            *(v13 - 2) = v20 + ((unsigned __int64)(v19 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL)) =
                v19 + ((unsigned __int64)(v20 * (__int64)v10) >> 16);
            v21 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL));
            v22 = *(v13 - 1);
            *(v13 - 1) = v22 + ((unsigned __int64)(v21 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL)) =
                v21 + ((unsigned __int64)(v22 * (__int64)v10) >> 16);
            v23 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL));
            v24 = *v13 * (__int64)v10;
            *v13 += (unsigned __int64)(v23 * (__int64)v10) >> 16;
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL)) =
                v23 + (v24 >> 16);
            LODWORD(v24) = v13[1];
            v25 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL));
            v13[1] = v24 + ((unsigned __int64)(v25 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL)) =
                v25 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v26 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL));
            LODWORD(v24) = v13[2];
            v13[2] = v24 + ((unsigned __int64)(v26 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL)) =
                v26 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v27 = v11 ^ 0x3FFFFFFFFFFFFFF8LL;
            v11 += 8;
            v28 = *(_DWORD*)(v12 + 4 * v27);
            LODWORD(v24) = v13[3];
            v13[3] = v24 + ((unsigned __int64)(v28 * (__int64)v10) >> 16);
            v13 += 8;
            *(_DWORD*)(v12 + 4 * v27) =
                v28 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
          } while ((v7 & 0x7FFFFFFFFFFFFFF8LL) != v11);
        }
        else {
          v11 = 0;
        }
        if ((v9 & 7) != 0) {
          v29 = v7 & 7;
          v30 = -1 * v11;
          v31 = (int*)(result + 4 * v11);
          do {
            v32 = v3[v30];
            --v29;
            v33 = *v31 * (__int64)v10;
            *v31++ += (unsigned __int64)(v32 * (__int64)v10) >> 16;
            v3[v30--] = v32 + (v33 >> 16);
          } while (v29 != 0);
        }
      }
      ++v4;
      ++v3;
      *(_DWORD*)(result + 4 * v5++) = -256 * v10;
    } while (v8 != v6);
  }
  return result;
}

__int64 opus_silk_fixed_30d5e0(__int64 result, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _WORD* v6;
  __int16* v7;
  __int64 v8;
  int v9;
  _WORD* v10;
  __int16* v11;
  int v12;

  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 < 8) {
      v5 = 0;
      if ((a4 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v6 = (_WORD*)(result + 8);
    v7 = (__int16*)(a2 + 8);
    v8 = 0;
    do {
      v8 -= 8;
      *(v6 - 4) = (unsigned int)(a3 * *(v7 - 4)) >> 16;
      *(v6 - 3) = (unsigned int)(a3 * *(v7 - 3)) >> 16;
      *(v6 - 2) = (unsigned int)(a3 * *(v7 - 2)) >> 16;
      *(v6 - 1) = (unsigned int)(a3 * *(v7 - 1)) >> 16;
      *v6 = (unsigned int)(a3 * *v7) >> 16;
      v6[1] = (unsigned int)(a3 * v7[1]) >> 16;
      v6[2] = (unsigned int)(a3 * v7[2]) >> 16;
      v9 = v7[3];
      v7 += 8;
      v6[3] = (unsigned int)(a3 * v9) >> 16;
      v6 += 8;
    } while (-(__int64)(a4 & 0x7FFFFFF8) != v8);
    v5 = -v8;
    if ((a4 & 7) != 0) {
    LABEL_8:
      v10 = (_WORD*)(result + 2 * v5);
      v11 = (__int16*)(a2 + 2 * v5);
      do {
        v12 = *v11++;
        --v4;
        *v10++ = (unsigned int)(a3 * v12) >> 16;
      } while (v4 != 0);
    }
  }
  return result;
}

#pragma GCC visibility pop
