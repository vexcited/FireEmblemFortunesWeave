#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 FxMute_Unknown5_alt1(__int64 result, __int64 a2,
                             int* a3) __asm__("FxMute_Unknown5");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");
void FxMute_Unknown5(__int64 a1, __int64 a2, int* a3);

void FxMute_Unknown5(__int64 a1, __int64 a2, int* a3)
{
  __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  LODWORD(v3) = *a3;
  v4 = a3[3];
  v5 = a3[4];
  v6 = v4 * *a3;
  v7 = v5 / v6;
  if (v5 % v6 != 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (v7 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (v7 >= 1 && v4 >= 1) {
    if (v7 == 1) {
      v9 = 0;
      v10 = *a3;
      v11 = *a3;
    }
    else {
      v12 = 1;
      v9 = 0;
      LODWORD(v13) = *a3;
      v10 = *a3;
      v11 = *a3;
      do {
        if (v4 >= 1) {
          if (v10 < 1) {
            v11 = v10;
          }
          else {
            v14 = 0;
            v15 = a2 + 4LL * v11 * v4 * v9;
            do {
              if ((int)v13 >= 1) {
                v16 = 0;
                v17 = v15 + 4LL * (int)v13 * v14;
                do {
                  *(_DWORD*)(v17 + 4 * v16++) = 0;
                  v13 = *a3;
                } while (v16 < v13);
                v4 = a3[3];
              }
              ++v14;
              v10 = v13;
              v11 = v13;
            } while (v14 < v4);
          }
        }
        if (v4 < 1) {
          LODWORD(v3) = v13;
        }
        else if (v10 < 1) {
          LODWORD(v3) = v13;
          v11 = v10;
        }
        else {
          v18 = 0;
          v19 = a2 + 4LL * v11 * v4 * v12;
          LODWORD(v3) = v13;
          do {
            if ((int)v3 >= 1) {
              v20 = 0;
              v21 = v19 + 4LL * (int)v3 * v18;
              do {
                *(_DWORD*)(v21 + 4 * v20++) = 0;
                v3 = *a3;
              } while (v20 < v3);
              v4 = a3[3];
            }
            ++v18;
            v10 = v3;
            v11 = v3;
          } while (v18 < v4);
        }
        v9 += 2;
        v12 += 2;
        LODWORD(v13) = v3;
      } while (v9 != (v7 & 0x7FFFFFFE));
    }
    if ((v7 & 1) != 0 && v4 >= 1 && v10 >= 1) {
      v22 = 0;
      v23 = a2 + 4LL * v11 * v9 * v4;
      do {
        if ((int)v3 >= 1) {
          v24 = 0;
          v25 = v23 + 4LL * (int)v3 * v22;
          do {
            *(_DWORD*)(v25 + 4 * v24++) = 0;
            v3 = *a3;
          } while (v24 < v3);
          v4 = a3[3];
        }
        ++v22;
      } while (v22 < v4);
    }
  }
}

#pragma GCC visibility pop
