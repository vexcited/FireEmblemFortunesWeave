#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4216f0(__int64, unsigned int);
__int64 SdkRoutine_433470(__int64);
__int64 SdkRoutine_4635e0(_QWORD*, unsigned int, __int64, __int64, __int64);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_85a870(_QWORD);
__int64 SdkRoutine_85a880(_QWORD, _QWORD);
__int64 SdkRoutine_85b320(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85b3d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85b440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_85b450(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85b560(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_869570(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8699b0(_QWORD, _QWORD);
__int64 SdkRoutine_869e90(_QWORD);

__int64 SdkHr_421940(__int64 a1, unsigned int a2, unsigned int a3, _DWORD* a4)
{
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  unsigned int* v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v9 = a4[2];
  v10 = *(__int16*)(v8 + 424);
  if (*(_WORD*)(v8 + 424) != 0 && v9 != 0) {
    v12 = v9;
    v13 = *(_QWORD*)(v8 + 376);
    v14 = a4[55];
    if (*(_DWORD*)(v13 + 4LL * ((int)v12 - 1)) != v14 ||
        *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4LL * ((int)v12 - 1)) != a4[56]) {
      if ((int)v12 + 1 >= *(__int16*)(v8 + 516)) {
        SdkRoutine_4216f0(a1, 1u);
        result = *(unsigned int*)(a1 + 72);
        if ((_DWORD)result != 0) {
          return result;
        }
        v14 = a4[55];
        v13 = *(_QWORD*)(v8 + 376);
      }
      *(_DWORD*)(v13 + 4 * v12) = v14;
      *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4 * v12) = a4[56];
      *(_BYTE*)(*(_QWORD*)(v8 + 392) + v12) = 1;
      *(_WORD*)(*(_QWORD*)(v8 + 408) + 2 * v10 - 2) = v12;
      ++a4[2];
    }
  }
  *(_DWORD*)(a1 + 72) = 0;
  v16 = (int)a4[2];
  if ((int)v16 + 1 < *(__int16*)(v8 + 516) ||
      (SdkRoutine_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    if ((int)v10 + 1 < *(__int16*)(v8 + 514) ||
        (SdkRoutine_4216f0(a1, 2u),
         (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
      v17 = 2 * v10;
      *(_WORD*)(*(_QWORD*)(v8 + 400) + 2 * v10) = v16;
      ++*(_WORD*)(v8 + 424);
      v18 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
      v19 = SdkRoutine_869570(a2, v18[22], 30);
      v20 = SdkRoutine_869570(a3, v18[24], 30) + v19;
      v21 = SdkRoutine_869570(a2, v18[23], 30);
      v22 = SdkRoutine_869570(a3, v18[25], 30) + v21;
      *(_DWORD*)(*(_QWORD*)(v8 + 376) + 4 * v16) = v20;
      a4[55] = v20;
      *(_DWORD*)(*(_QWORD*)(v8 + 384) + 4 * v16) = v22;
      a4[56] = v22;
      *(_BYTE*)(*(_QWORD*)(v8 + 392) + v16) = 1;
      *(_WORD*)(*(_QWORD*)(v8 + 408) + v17) = v16;
      ++a4[2];
      *(_DWORD*)(a1 + 72) = 0;
      return 0;
    }
  }
  return result;
}

__int64 SdkHr_421b40(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned int* v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v4 = *(int*)(a4 + 8);
  v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v10 = *(__int16*)(v9 + 424);
  if ((int)v4 + 1 < *(__int16*)(v9 + 516) ||
      (SdkRoutine_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    v12 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
    v13 = SdkRoutine_869570(a2, v12[22], 30);
    v14 = SdkRoutine_869570(a3, v12[24], 30) + v13;
    v15 = SdkRoutine_869570(a2, v12[23], 30);
    v16 = SdkRoutine_869570(a3, v12[25], 30) + v15;
    *(_DWORD*)(*(_QWORD*)(v9 + 376) + 4 * v4) = v14;
    *(_DWORD*)(*(_QWORD*)(v9 + 384) + 4 * v4) = v16;
    *(_BYTE*)(*(_QWORD*)(v9 + 392) + v4) = 1;
    *(_WORD*)(*(_QWORD*)(v9 + 408) + 2 * v10 - 2) = v4;
    ++*(_DWORD*)(a4 + 8);
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  return result;
}

__int64 SdkHr_421c60(__int64 a1, unsigned int a2, unsigned int a3,
                     unsigned int a4, unsigned int a5, unsigned int a6,
                     unsigned int a7, __int64 a8)
{
  __int64 v8;
  __int64 v16;
  __int64 v17;
  __int64 result;
  unsigned int* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;

  v8 = *(int*)(a8 + 8);
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 56) + 40LL) + 16LL);
  v17 = *(__int16*)(v16 + 424);
  if ((int)v8 + 3 < *(__int16*)(v16 + 516) ||
      (SdkRoutine_4216f0(a1, 1u),
       (_DWORD)(result = *(unsigned int*)(a1 + 72)) == 0)) {
    v36 = a8;
    v19 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL) + 264LL);
    v35 = v17;
    v20 = SdkRoutine_869570(a2, v19[22], 30);
    v34 = SdkRoutine_869570(a3, v19[24], 30) + v20;
    v21 = SdkRoutine_869570(a2, v19[23], 30);
    v22 = SdkRoutine_869570(a3, v19[25], 30) + v21;
    v23 = SdkRoutine_869570(a4, v19[22], 30);
    v24 = SdkRoutine_869570(a5, v19[24], 30) + v23;
    v25 = SdkRoutine_869570(a4, v19[23], 30);
    v26 = SdkRoutine_869570(a5, v19[25], 30) + v25;
    v27 = SdkRoutine_869570(a6, v19[22], 30);
    v28 = SdkRoutine_869570(a7, v19[24], 30) + v27;
    v29 = SdkRoutine_869570(a6, v19[23], 30);
    v30 = SdkRoutine_869570(a7, v19[25], 30);
    v31 = v8 + 2;
    v32 = v30 + v29;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v8) = v34;
    v33 = v8 + 1;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v8) = v22;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v8) = 0;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v33) = v24;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v33) = v26;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v33) = 0;
    *(_DWORD*)(*(_QWORD*)(v16 + 376) + 4 * v31) = v28;
    *(_DWORD*)(*(_QWORD*)(v16 + 384) + 4 * v31) = v32;
    *(_BYTE*)(*(_QWORD*)(v16 + 392) + v31) = 1;
    *(_WORD*)(*(_QWORD*)(v16 + 408) + 2 * v35 - 2) = v8 + 2;
    *(_DWORD*)(v36 + 8) += 3;
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
  return result;
}

__int64 SdkHr_4379e0(__int64 result,
                     __int64 (*a2)(_QWORD*, _QWORD, _QWORD, _QWORD), __int16 a3,
                     char a4)
{
  _QWORD* v7;
  _DWORD* v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;

  v7 = (_QWORD*)result;
  v8 = (_DWORD*)(*(_QWORD*)(result + 40) - 4LL);
  *(_QWORD*)(result + 40) = v8;
  v9 = 2 * *v8;
  *(_QWORD*)(result + 40) = &v8[-v9];
  v10 = *(_QWORD*)(result + 64);
  v11 = *(unsigned __int16*)(v10 + 34);
  if (*(_BYTE*)(v10 + 276) != 0) {
    v12 = v11 - a3;
    if (v12 > 0xF) {
      return result;
    }
  }
  else {
    v13 = SdkRoutine_433470(result);
    result = SdkRoutine_869570(v11, v13, 16);
    v12 = result - a3;
    if (v12 > 0xF) {
      return result;
    }
  }
  v14 = 16 * v12;
  v15 = v9 >> 1;
  v16 = (v9 >> 1) & 0xFFFFFFFE;
  if (v16 < 3) {
    v17 = 0;
    if (v9 > 0) {
      goto LABEL_19;
    }
  }
  else {
    v17 = 0;
    do {
      v18 = v16 + v17;
      v15 >>= 1;
      if ((int)(*(_DWORD*)(v7[5] + 4LL * v18) & 0xFFFFFFF0) < v14) {
        v17 = v18;
      }
      v16 = v15 & 0x7FFFFFFE;
    } while ((v15 & 0x7FFFFFFE) > 2);
    if (v17 < v9) {
      while (1) {
      LABEL_19:
        v22 = v7[5];
        v23 = *(_DWORD*)(v22 + 4LL * (unsigned int)v17);
        if ((v23 & 0xFFFFFFF0) == v14) {
          v19 = *(_DWORD*)(v22 + 4LL * (unsigned int)v17) & 0xF;
          v20 = v22 + 4LL * v17;
          if (v19 <= 7) {
            v21 = -8;
          }
          else {
            v21 = -7;
          }
          result = a2(v7, *v7, *(unsigned int*)(v20 + 4),
                      (unsigned int)((int)((v21 + v19) << 6) >> a4));
          if (v17 + 2 >= v9) {
            return result;
          }
        }
        else if ((int)(v23 & 0xFFFFFFF0) > v14 || v17 + 2 >= v9) {
          return result;
        }
        v17 += 2;
      }
    }
  }
  return result;
}

__int64 SdkHr_437b60(__int64 result, __int16 a2, char a3)
{
  _QWORD* v3;
  __int64 v4;
  int* v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  char v11;
  __int16 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  signed __int16 v23;
  __int64 v24;
  signed __int16 v25;
  __int64 v26;

  v3 = *(_QWORD**)result;
  v4 = result;
  v5 = (int*)(*(_QWORD*)(result + 40) - 4LL);
  *(_QWORD*)(result + 40) = v5;
  v6 = *v5;
  v7 = &v5[-v6 - 1];
  *(_QWORD*)(result + 40) = v7;
  v8 = *v7;
  *(_QWORD*)(result + 40) = &v7[-v8];
  v9 = *(_QWORD*)(result + 64);
  v10 = *(unsigned __int16*)(v9 + 34);
  if (*(_BYTE*)(v9 + 276) == 0) {
    v11 = a3;
    v12 = a2;
    v13 = SdkRoutine_433470(result);
    result = SdkRoutine_869570(v10, v13, 16);
    a2 = v12;
    a3 = v11;
    v10 = result;
  }
  v14 = 0;
  v15 = 16 * (v10 - a2);
  while (4LL * ((unsigned int)v8 & ~((int)v8 >> 31)) != v14) {
    v16 = *(_DWORD*)(*(_QWORD*)(v4 + 40) + v14);
    if ((v16 & 0xFFFFFFF0) == v15) {
      if ((*(_DWORD*)(*(_QWORD*)(v4 + 40) + v14) & 0xFu) <= 7) {
        v17 = -8;
      }
      else {
        v17 = -7;
      }
      if ((int)v6 >= 1) {
        v18 = (v17 + (*(_DWORD*)(*(_QWORD*)(v4 + 40) + v14) & 0xF)) << 6 >> a3;
        v19 = (int)v8 + (int)v6;
        v20 = v3[8];
        do {
          v21 = -2;
          do {
            v22 = v20 + v21;
            v21 += 2;
          } while (*(__int16*)(*(_QWORD*)(v4 + 40) + 4 * v19) >
                   (int)*(unsigned __int16*)(v22 + 2));
          if (*(_WORD*)(v4 + 28) != 0) {
            result =
                SdkRoutine_869570(v18, (unsigned int)*(__int16*)(v4 + 28), 14);
            v20 = v3[8];
            if (v21 != 0) {
              v23 = *(_WORD*)(v20 + v21 - 2) + 1;
            }
            else {
              v23 = 0;
            }
            while (*(unsigned __int16*)(v20 + v21) >= v23) {
              v24 = v23++;
              *(_DWORD*)(*v3 + 4 * v24) += result;
              *(_BYTE*)(v3[9] + v24) |= 1u;
              v20 = v3[8];
            }
          }
          if (*(_WORD*)(v4 + 30) != 0) {
            result =
                SdkRoutine_869570(v18, (unsigned int)*(__int16*)(v4 + 30), 14);
            v20 = v3[8];
            if (v21 != 0) {
              v25 = *(_WORD*)(v20 + v21 - 2) + 1;
            }
            else {
              v25 = 0;
            }
            while (*(unsigned __int16*)(v20 + v21) >= v25) {
              v26 = v25++;
              *(_DWORD*)(v3[1] + 4 * v26) += result;
              *(_BYTE*)(v3[9] + v26) |= 2u;
              v20 = v3[8];
            }
          }
          --v19;
        } while (v19 > v8);
      }
      return result;
    }
    v14 += 4;
    if ((int)(v16 & 0xFFFFFFF0) > v15) {
      return result;
    }
  }
  return result;
}

__int64 SdkHr_437da0(__int64 result, __int16 a2, char a3)
{
  __int64 v3;
  _QWORD* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int16 v10;
  char v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int16* v16;
  int v17;
  __int64 v18;
  __int16 v19;
  int v20;
  int v21;
  int v22;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  char v33;
  __int16 v34;

  v3 = *(_QWORD*)(result + 40);
  v4 = *(_QWORD**)result;
  *(_QWORD*)(result + 40) = v3 - 4;
  v5 = *(_DWORD*)(v3 - 4);
  *(_QWORD*)(result + 40) = v3 - 8;
  v6 = *(int*)(v3 - 8);
  *(_QWORD*)(result + 40) = v3 - 8 - 4 * v6;
  if (*(_BYTE*)(v4[6] + (__int16)v5) != 0) {
    v7 = *(_QWORD*)(result + 64);
    v8 = result;
    v9 = *(unsigned __int16*)(v7 + 34);
    if (*(_BYTE*)(v7 + 276) == 0) {
      v10 = a2;
      v11 = a3;
      v12 = SdkRoutine_433470(result);
      result = SdkRoutine_869570(v9, v12, 16);
      a3 = v11;
      a2 = v10;
      v9 = result;
    }
    v13 = 0;
    v14 = 16 * (v9 - a2);
    while (4LL * ((unsigned int)v6 & ~((int)v6 >> 31)) != v13) {
      v15 = *(_DWORD*)(*(_QWORD*)(v8 + 40) + v13);
      if ((v15 & 0xFFFFFFF0) == v14) {
        v16 = (unsigned __int16*)v4[8];
        v17 = (__int16)v5;
        v18 = 1;
        do {
          v20 = *v16++;
          v19 = v20;
          --v18;
        } while ((__int16)v5 > v20);
        v33 = a3;
        v34 = v19;
        if (v18 != 0) {
          v21 = (__int16)(*(v16 - 2) + 1);
        }
        else {
          v21 = 0;
        }
        result = (*(__int64 (**)(__int64, _QWORD, _QWORD))(v8 + 104))(
            v8, *(unsigned int*)(v4[2] + 4LL * (__int16)v5),
            *(unsigned int*)(v4[3] + 4LL * (__int16)v5));
        v22 = result;
        v23 = v5;
        if (v19 > (__int16)v5) {
          v24 = v19;
          v25 = (__int16)v5 + 1LL;
          v26 = -v24;
          while (*(_BYTE*)(v4[6] + v25) != 0) {
            result = (*(__int64 (**)(__int64, _QWORD, _QWORD))(v8 + 104))(
                v8, *(unsigned int*)(v4[2] + 4 * v25),
                *(unsigned int*)(v4[3] + 4 * v25));
            if ((_DWORD)result != v22) {
              break;
            }
            ++v25;
            if (v26 + v25 == 1) {
              v23 = v34;
              goto LABEL_21;
            }
          }
          v23 = v25 - 1;
        }
      LABEL_21:
        LOWORD(v27) = v5;
        if (v21 < (__int16)v5) {
          LOWORD(v27) = v5;
          do {
            v28 = v17 - 1LL;
            if (*(_BYTE*)(v4[6] + v28) == 0) {
              break;
            }
            result = (*(__int64 (**)(__int64, _QWORD, _QWORD))(v8 + 104))(
                v8, *(unsigned int*)(v4[2] + 4 * v28),
                *(unsigned int*)(v4[3] + 4 * v28));
            if ((_DWORD)result != v22) {
              break;
            }
            LOWORD(v27) = v27 - 1;
            v17 = (__int16)v27;
          } while (v21 < (__int16)v27);
        }
        if ((v15 & 0xFu) <= 7) {
          v29 = -8;
        }
        else {
          v29 = -7;
        }
        v30 = (v29 + (v15 & 0xF)) << 6 >> v33;
        if (*(_WORD*)(v8 + 28) != 0) {
          result =
              SdkRoutine_869570(v30, (unsigned int)*(__int16*)(v8 + 28), 14);
          if ((__int16)v27 <= v23) {
            LOWORD(v31) = v27;
            do {
              v32 = (__int16)v31;
              v31 = (__int16)(v31 + 1);
              *(_DWORD*)(*v4 + 4 * v32) += result;
              *(_BYTE*)(v4[9] + v32) |= 1u;
            } while (v31 <= v23);
          }
        }
        if (*(_WORD*)(v8 + 30) != 0) {
          result =
              SdkRoutine_869570(v30, (unsigned int)*(__int16*)(v8 + 30), 14);
          if ((__int16)v27 <= v23) {
            do {
              *(_DWORD*)(v4[1] + 4LL * (__int16)v27) += result;
              *(_BYTE*)(v4[9] + (__int16)v27) |= 2u;
              v27 = (__int16)(v27 + 1);
            } while (v27 <= v23);
          }
        }
        return result;
      }
      v13 += 4;
      if ((int)(v15 & 0xFFFFFFF0) > v14) {
        return result;
      }
    }
  }
  return result;
}

_QWORD* SdkHr_4380a0(_QWORD* result, __int16 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  char v10;
  __int16 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;

  v3 = result[5];
  v4 = *result;
  result[5] = v3 - 4;
  v5 = *(__int16*)(v3 - 4);
  result[5] = v3 - 8;
  v6 = *(int*)(v3 - 8);
  result[5] = v3 - 8 - 4 * v6;
  if (*(_BYTE*)(*(_QWORD*)(v4 + 48) + v5) != 0) {
    v7 = result[8];
    v8 = result;
    v9 = *(unsigned __int16*)(v7 + 34);
    if (*(_BYTE*)(v7 + 276) == 0) {
      v10 = a3;
      v11 = a2;
      v12 = SdkRoutine_433470((__int64)result);
      result = (_QWORD*)SdkRoutine_869570(v9, v12, 16);
      a2 = v11;
      a3 = v10;
      v9 = (unsigned int)result;
    }
    v13 = 0;
    v14 = 16 * (v9 - a2);
    while (4LL * ((unsigned int)v6 & ~((int)v6 >> 31)) != v13) {
      v15 = *(_DWORD*)(v8[5] + v13);
      if ((v15 & 0xFFFFFFF0) == v14) {
        if ((*(_DWORD*)(v8[5] + v13) & 0xFu) <= 7) {
          v16 = -8;
        }
        else {
          v16 = -7;
        }
        v17 = (v16 + (*(_DWORD*)(v8[5] + v13) & 0xF)) << 6 >> a3;
        v18 = SdkRoutine_869570(v17, (unsigned int)*((__int16*)v8 + 14), 14);
        v19 = SdkRoutine_869570(v17, (unsigned int)*((__int16*)v8 + 15), 14);
        result = (_QWORD*)((__int64 (*)(_QWORD*, _QWORD, _QWORD))v8[13])(
            v8, *(unsigned int*)(*(_QWORD*)(v4 + 16) + 4 * v5),
            *(unsigned int*)(*(_QWORD*)(v4 + 24) + 4 * v5));
        v20 = *(__int16*)(*(_QWORD*)(v4 + 64) + 2LL * *(__int16*)(v4 + 80) - 2);
        if ((v20 & 0x8000000000000000LL) == 0) {
          v21 = (int)result;
          do {
            if (*(_BYTE*)(*(_QWORD*)(v4 + 48) + v20) != 0) {
              result = (_QWORD*)((__int64 (*)(_QWORD*, _QWORD, _QWORD))v8[13])(
                  v8, *(unsigned int*)(*(_QWORD*)(v4 + 16) + 4 * v20),
                  *(unsigned int*)(*(_QWORD*)(v4 + 24) + 4 * v20));
              if ((_DWORD)result == v21) {
                if (*((_WORD*)v8 + 14) != 0) {
                  *(_DWORD*)(*(_QWORD*)v4 + 4 * v20) += v18;
                  *(_BYTE*)(*(_QWORD*)(v4 + 72) + v20) |= 1u;
                }
                if (*((_WORD*)v8 + 15) != 0) {
                  *(_DWORD*)(*(_QWORD*)(v4 + 8) + 4 * v20) += v19;
                  *(_BYTE*)(*(_QWORD*)(v4 + 72) + v20) |= 2u;
                }
              }
            }
          } while (v20-- > 0);
        }
        return result;
      }
      v13 += 4;
      if ((int)(v15 & 0xFFFFFFF0) > v14) {
        return result;
      }
    }
  }
  return result;
}

__int64 SdkHr_4554a0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  __int64 v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64* v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;

  v1 = *(_QWORD*)(a1 + 128);
  result = *(_QWORD*)(v1 + 16784);
  if (result != 0) {
  LABEL_2:
    v4 = *(_DWORD**)result;
    *v4 = **(_DWORD**)result + 1;
    *(_QWORD*)(v1 + 16784) = *(_QWORD*)(result + 8);
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 40) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)result = v4;
    *(_QWORD*)(result + 8) = 0;
    return result;
  }
  if (*(_DWORD*)(v1 + 8216) >= 0x59u) {
    while (1) {
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 8152);
      if (v5 != 0) {
        v7 = 126;
        v8 = 0;
      LABEL_12:
        *(_DWORD*)v5 = 0;
        *(_QWORD*)(v5 + 8) = 0;
        v9 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16776LL);
        *(_QWORD*)(v5 + 16) = v9;
        if (v9 != 0) {
          *(_QWORD*)(v9 + 8) = v5;
        }
        v10 = (__int64*)(v5 + 24);
        *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16776LL) = v5;
        v11 = v5 + 24;
        if ((v8 & 1) == 0) {
          v12 = v7 & 6;
          v13 = (__int64*)(v5 + 24);
          if ((unsigned int)(v7 - 1) >= 7) {
            v14 = v7 & 0x78;
            v15 = 0;
            do {
              v16 = (_QWORD*)(v5 + v15);
              v15 += 512;
              v14 -= 8;
              v16[11] = v5;
              v16 += 11;
              v16[8] = v5;
              *(v16 - 8) = v5;
              *(v16 - 7) = v16;
              v16[1] = v16 + 8;
              v16[16] = v5;
              v16[9] = v16 + 16;
              v16[24] = v5;
              v16[17] = v16 + 24;
              v16[25] = v16 + 32;
              v16[32] = v5;
              v16[33] = v16 + 40;
              v16[40] = v5;
              v16[41] = v16 + 48;
              v16[48] = v5;
              v16[49] = v16 + 56;
            } while (v14 != 0);
            v10 = (__int64*)(v5 + v15 + 24);
            v13 = v10;
          }
          for (; v12 != 0; v13 += 8) {
            v10 = v13 + 8;
            --v12;
            *v13 = v5;
            v13[1] = (__int64)(v13 + 8);
          }
        }
        *v10 = v5;
        v10[1] = 0;
        result = v5 + 24;
        *(_QWORD*)(v1 + 16784) = v11;
        goto LABEL_2;
      }
      v6 = SdkRoutine_869e90(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v6 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 4056);
    if (v5 != 0) {
      v8 = 0;
      v7 = 62;
      goto LABEL_12;
    }
    while (1) {
      v17 = SdkRoutine_869e90(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v17 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 4056);
      v7 = 62;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 2008);
    if (v5 != 0) {
      v8 = 0;
      v7 = 30;
      goto LABEL_12;
    }
    while (1) {
      v18 = SdkRoutine_869e90(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v18 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        result = *(_QWORD*)(v1 + 16784);
        if (result != 0) {
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 2008);
      v7 = 30;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 984);
    if (v5 != 0) {
      v8 = 0;
      v7 = 14;
      goto LABEL_12;
    }
    while (1) {
      v19 = SdkRoutine_869e90(a1);
      result = *(_QWORD*)(v1 + 16784);
      if (v19 == 0) {
        break;
      }
      if (result != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
        LABEL_45:
          result = v20;
          goto LABEL_2;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 984);
      v7 = 14;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    if (result != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 472);
    if (v5 != 0) {
      v8 = 0;
      v7 = 6;
      goto LABEL_12;
    }
    while (1) {
      v21 = SdkRoutine_869e90(a1);
      v22 = *(_QWORD*)(v1 + 16784);
      if (v21 == 0) {
        break;
      }
      if (v22 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 472);
      v7 = 6;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v22 != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 216);
    if (v5 != 0) {
      v8 = 0;
      v7 = 2;
      goto LABEL_12;
    }
    while (1) {
      v23 = SdkRoutine_869e90(a1);
      v24 = *(_QWORD*)(v1 + 16784);
      if (v23 == 0) {
        break;
      }
      if (v24 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 216);
      v7 = 2;
      v8 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v24 != 0) {
      goto LABEL_2;
    }
    *(_DWORD*)(a1 + 72) = 0;
    v5 = SdkRoutine_8699b0(a1, 88);
    if (v5 != 0) {
      v7 = 0;
      v8 = 1;
      goto LABEL_12;
    }
    while (1) {
      v25 = SdkRoutine_869e90(a1);
      v26 = *(_QWORD*)(v1 + 16784);
      if (v25 == 0) {
        break;
      }
      if (v26 != 0) {
        *(_DWORD*)(a1 + 72) = 0;
        v20 = *(_QWORD*)(v1 + 16784);
        if (v20 != 0) {
          goto LABEL_45;
        }
      }
      *(_DWORD*)(a1 + 72) = 0;
      v5 = SdkRoutine_8699b0(a1, 88);
      v8 = 1;
      v7 = 0;
      if (v5 != 0) {
        goto LABEL_12;
      }
    }
    result = *(_QWORD*)(v1 + 16784);
    if (v26 != 0) {
      goto LABEL_2;
    }
  }
  else {
    result = 0;
  }
  *(_DWORD*)(a1 + 72) = 201;
  return result;
}

__int64 SdkHr_463a70(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4,
                     unsigned int a5, __int64 a6, __int64 a7, unsigned int a8,
                     __int64 a9)
{
  unsigned __int64 v14;
  __int64 v15;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v22;
  char v24[2];
  __int16 v25;
  _QWORD v26[2];
  _QWORD v27[3];
  _BYTE v28[4];
  char v29[8];
  __int64 v30;
  _QWORD v31[9];
  __int64 v32[12];
  __int64 v33;
  _DWORD v34[4];

  v14 = (unsigned __int64)v31;
  v30 = a3;
  v25 = a5;
  v15 = a8;
  v33 = 0;
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  v29[0] = 1;
  v28[1] = 5;
  v28[0] = 1;
  v26[1] = 0;
  memset(v27, 0, sizeof(v27));
  v26[0] = 0;
  v24[0] = 1;
  v17 = SdkRoutine_85b3d0(v31, v29, v28, v27, v26, v24);
  v18 = v17;
  if ((SdkRoutine_85a870(v17) & 1) != 0) {
    SdkRoutine_85a880(v17, "TryCreateCacheStorage");
    v34[0] = v17;
    if (v17 != 0) {
      v19 = SdkRoutine_858db0(v34);
    LABEL_13:
      v15 = v19;
      v17 = v19;
      if ((v19 & 0x3FFFFFLL) == 0x7D402) {
        v22 = SdkRoutine_85b440(a3, a2, a4, a5, a6, a7, 0, v18);
        v17 = 0;
        if (v22 == 0) {
          goto LABEL_15;
        }
        goto LABEL_30;
      }
      goto LABEL_20;
    }
  }
  else if (v17 != 0) {
    return v17;
  }
  v18 = a9;
  v19 = SdkRoutine_85b320(v32, a2, v31);
  if (v19 != 0) {
    goto LABEL_13;
  }
  v17 = SdkRoutine_85b450(a2, a3, 5, 0, 0, a9);
  if ((SdkRoutine_85a870(v17) & 1) == 0) {
    if (v17 != 0) {
      return v17;
    }
    goto LABEL_6;
  }
  SdkRoutine_85a880(v17, "TryCreateCacheStorage");
  v34[0] = v17;
  if (v17 != 0) {
    SdkRoutine_858db0(v34);
  LABEL_20:
    if ((SdkRoutine_85a870(v15) & 1) == 0) {
      return v17;
    }
    SdkRoutine_85a880(v15, "TryCreateCacheStorage");
    v34[0] = v17;
    v20 = SdkRoutine_858db0(v34);
    goto LABEL_22;
  }
LABEL_6:
  if ((v15 & 1) == 0) {
    v17 = 1537538;
    if ((SdkRoutine_85a870(1537538) & 1) == 0) {
      return v17;
    }
    goto LABEL_27;
  }
  v20 = SdkRoutine_4635e0(&v33, a2, v32[0], a6, a7);
  if (v20 == 0) {
  LABEL_8:
    v17 = 0;
    *a1 = *(_QWORD*)(v14 + 168);
    return v17;
  }
LABEL_22:
  v17 = v20;
  if ((v20 & 0x1FF) == 2 && ((v20 >> 9) & 0x1FFE) - 30 < 0x10) {
    goto LABEL_8;
  }
  v14 = v20;
  if ((v20 & 0x3FFFFFLL) == 0x35F402) {
    v17 = 2202114;
    if ((SdkRoutine_85a870(2202114) & 1) == 0) {
      return v17;
    }
    SdkRoutine_85a880(2202114, "TryCreateCacheStorage");
    v34[0] = 2202114;
    SdkRoutine_858db0(v34);
  LABEL_27:
    SdkRoutine_85a880(1537538, "TryCreateCacheStorage");
    v34[0] = v17;
    SdkRoutine_858db0(v34);
  }
  if ((SdkRoutine_85a870(v14) & 1) == 0) {
    return v17;
  }
  SdkRoutine_85a880(v14, "TryCreateCacheStorage");
  v34[0] = v17;
  v22 = SdkRoutine_858db0(v34);
LABEL_30:
  if ((v22 & 0x1FF) != 2 || ((v22 >> 9) & 0x1FFE) - 30 > 0xF) {
    goto LABEL_36;
  }
  *(_QWORD*)(v14 + 176) = 0;
  v17 = SdkRoutine_85b560(v34, a6, a7);
  if (v17 == 0) {
    *(_QWORD*)(v14 + 168) =
        ((*(_QWORD*)(v14 + 176) + 0x3FFFLL) & 0xFFFFFFFFFFFFC000LL) + 0x4000;
  }
LABEL_15:
  while ((SdkRoutine_85a870(v17) & 1) != 0) {
    SdkRoutine_85a880(v17, "TryCreateCacheStorage");
    v34[0] = v17;
    if (v17 == 0) {
      goto LABEL_8;
    }
    v22 = SdkRoutine_858db0(v34);
  LABEL_36:
    if ((v22 & 0x3FFFFF) == 0x402) {
      v17 = 0;
    }
    else {
      v17 = v22;
    }
  }
  if (v17 == 0) {
    goto LABEL_8;
  }
  return v17;
}

#pragma GCC visibility pop
