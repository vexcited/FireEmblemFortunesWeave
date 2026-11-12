#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int16 SdkData_ca7dde[30];
extern unsigned __int8 SdkData_ca7e1a[256];
extern unsigned __int8 SdkData_ca7f1a[3074];
int** nerd_gillette_internal_otete_751ac0(int** result, unsigned __int8* a2,
                                          unsigned __int8 a3, char a4);

int** nerd_gillette_internal_otete_751ac0(int** result, unsigned __int8* a2,
                                          unsigned __int8 a3, char a4)
{
  int v4;
  int v5;
  __int16 v6;
  unsigned __int8 v7;
  int* v8;
  __int64* v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a4 != 0) {
    v4 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] + 256 + *a2 -
                        (unsigned int)a3];
    v5 =
        SdkData_ca7dde[5 * SdkData_ca7e1a[a3] +
                       SdkData_ca7f1a[512 *
                                          (unsigned __int64)SdkData_ca7e1a[a3] +
                                      256 + *a2 - (unsigned int)a3]] +
        a3;
    if ((unsigned int)v5 >= 0xFF) {
      LOBYTE(v6) = -1;
    }
    else {
      v6 = SdkData_ca7dde
               [5 * SdkData_ca7e1a[a3] +
                SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] +
                               256 + *a2 - (unsigned int)a3]] +
           a3;
    }
    if (v5 >= 0) {
      v7 = v6;
    }
    else {
      v7 = 0;
    }
    *a2 = v7;
    **result += *result[1] * v4;
    *result[1] *= 5;
    v8 = result[1];
    if (*v8 == 125) {
      v9 = (__int64*)result[2];
      v10 = v9[1];
      if (v10 >> 1 <= 0xDAC) {
        v11 = **result;
        *(_BYTE*)(*v9 + (v10 >> 3)) |= ((v11 & 0x40) != 0) << (v10 & 7);
        v12 = *v9;
        v9[1] = v10 + 1;
        *(_BYTE*)(v12 + ((v10 + 1) >> 3)) |= ((v11 & 0x20) != 0)
                                             << ((v10 + 1) & 7);
        v13 = *v9;
        v9[1] = v10 + 2;
        *(_BYTE*)(v13 + ((v10 + 2) >> 3)) |= ((v11 & 0x10) != 0)
                                             << ((v10 + 2) & 7);
        v14 = *v9;
        v9[1] = v10 + 3;
        *(_BYTE*)(v14 + ((v10 + 3) >> 3)) |= ((v11 & 8) != 0)
                                             << ((v10 + 3) & 7);
        v15 = *v9;
        v9[1] = v10 + 4;
        *(_BYTE*)(v15 + ((v10 + 4) >> 3)) |= ((v11 & 4) != 0)
                                             << ((v10 + 4) & 7);
        v16 = *v9;
        v9[1] = v10 + 5;
        *(_BYTE*)(v16 + ((v10 + 5) >> 3)) |= ((v11 & 2) != 0)
                                             << ((v10 + 5) & 7);
        v17 = *v9;
        v9[1] = v10 + 6;
        *(_BYTE*)(v17 + ((v10 + 6) >> 3)) |= (v11 & 1) << ((v10 + 6) & 7);
        v9[1] = v10 + 7;
        v8 = result[1];
      }
      *v8 = 1;
      **result = 0;
    }
  }
  else {
    *a2 = a3;
  }
  return result;
}

#pragma GCC visibility pop
