#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1679b0(_QWORD*);
extern __int64* GameData_2134428;
extern __int64* snd_g_memory_ptr[2];
__int64 FxSpectrum_Destructor_16f0e0(_QWORD* a1);
__int64 FxSpectrum_16f2b0(__int64 a1);
__int64 FxSpectrum_16f2e0(__int64 result, __int64 a2, unsigned __int64 a3);

__int64 FxSpectrum_Destructor_16f0e0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = GameData_2134428;
  v3 = a1[831];
  *a1 = GameData_2134428 + 2;
  a1[5] = v2 + 33;
  a1[699] = v2 + 174;
  v4 = snd_g_memory_ptr[0];
  if (v3 != 0) {
    v5 = *snd_g_memory_ptr[0];
    a1[831] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    v6 = a1[830];
    a1[830] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v7 = a1[829];
    a1[829] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v8 = a1[828];
    a1[828] = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v9 = a1[827];
    a1[827] = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
    v10 = a1[831];
    a1[831] = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    }
  }
  v11 = a1[830];
  a1[830] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v12 = a1[829];
  a1[829] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v13 = a1[828];
  a1[828] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  v14 = a1[827];
  a1[827] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
  }
  return GameRoutine_1679b0(a1);
}

__int64 FxSpectrum_16f2b0(__int64 a1)
{
  int v1;
  int v2;
  bool v3;
  int v4;

  v1 = *(_DWORD*)(a1 + 6668);
  v2 = *(_DWORD*)(a1 + 6664);
  v3 = __OFSUB__(v1, v2);
  v4 = v1 - v2;
  if (v4 < 0 != v3) {
    return (unsigned int)(v4 + 0x4000);
  }
  else {
    return (unsigned int)v4;
  }
}

__int64 FxSpectrum_16f2e0(__int64 result, __int64 a2, unsigned __int64 a3)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  int* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int* v16;
  int v17;

  if (*(_DWORD*)(result + 6604) != 0) {
    v3 = *(_DWORD*)(result + 6668);
    v4 = *(_DWORD*)(result + 6664);
    v5 = __OFSUB__(v3, v4);
    v6 = v3 - v4;
    if (v6 < 0 != v5) {
      v6 += 0x4000;
    }
    if ((a3 + v6) >> 14 == 0) {
      if (a3 != 0) {
        v7 = *(_QWORD*)(result + 6616);
        v8 = a3 & 3;
        if (a3 >= 4) {
          v10 = (int*)(a2 + 8);
          v11 = 0;
          do {
            v11 -= 4;
            *(float*)(v7 + 4LL * v3) =
                (float)*(v10 - 2) * 0x1.0000000000000p-15f;
            if ((unsigned int)(v3 + 1) >> 14 != 0) {
              v12 = 0;
            }
            else {
              v12 = v3 + 1;
            }
            *(float*)(v7 + 4LL * v12) =
                (float)*(v10 - 1) * 0x1.0000000000000p-15f;
            if ((unsigned int)(v12 + 1) >> 14 != 0) {
              v13 = 0;
            }
            else {
              v13 = v12 + 1;
            }
            *(float*)(v7 + 4LL * v13) = (float)*v10 * 0x1.0000000000000p-15f;
            if ((unsigned int)(v13 + 1) >> 14 != 0) {
              v14 = 0;
            }
            else {
              v14 = v13 + 1;
            }
            v15 = v10[1];
            v10 += 4;
            *(float*)(v7 + 4LL * v14) = (float)v15 * 0x1.0000000000000p-15f;
            if ((unsigned int)(v14 + 1) >> 14 != 0) {
              v3 = 0;
            }
            else {
              v3 = v14 + 1;
            }
          } while (-(__int64)(a3 & 0xFFFFFFFFFFFFFFFCLL) != v11);
          v9 = -v11;
          if ((a3 & 3) == 0) {
            goto LABEL_29;
          }
        }
        else {
          v9 = 0;
          if ((a3 & 3) == 0) {
            goto LABEL_29;
          }
        }
        v16 = (int*)(a2 + 4 * v9);
        do {
          v17 = *v16++;
          *(float*)(v7 + 4LL * v3) = (float)v17 * 0x1.0000000000000p-15f;
          if ((unsigned int)(v3 + 1) >> 14 != 0) {
            v3 = 0;
          }
          else {
            ++v3;
          }
          --v8;
        } while (v8 != 0);
      }
    LABEL_29:
      *(_DWORD*)(result + 6668) = v3;
    }
  }
  return result;
}

#pragma GCC visibility pop
