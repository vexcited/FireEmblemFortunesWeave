#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 MovieRoutine_39880(_QWORD);
__int64 MovieRoutine_750e0(_QWORD);
__int64 MovieRoutine_75140(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_751a0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_75200(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_793a0(_QWORD);
__int64 MovieRoutine_79520(_QWORD);
__int64 MovieRoutine_82ce0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_846a0(_QWORD);
__int64 MovieRoutine_846b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_84700(_QWORD, _QWORD, _QWORD);

__int64* MovieHr_39680(__int64* result, int* a2, int a3, int a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int i;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;

  v17 = *a2;
  if (*a2 != 0) {
    if (v17 >= 0) {
      v18 = *a2;
    }
    else {
      v18 = -v17;
    }
    v19 = (0x4000 - a4) * (32736 - a3);
    v20 = 1;
    v21 = v19 >> 15;
    if (v19 >= 0x8000 && v18 >= 2) {
      do {
        ++v20;
        v19 = 2 * v21 * a4;
        a3 += 2 * v21 + 2;
        v21 = v19 >> 15;
      } while (v19 >= 0x8000 && v20 < v18);
    }
    if (v19 >> 15 != 0) {
      if (v17 >= 0) {
        v30 = v21 + 1;
      }
      else {
        v30 = 0;
      }
      v29 = v30 + a3;
      a3 += v30 + v21 + 1;
    }
    else {
      v24 = (unsigned int)v17 >> 31;
      v25 = v18 - v20;
      v26 = v17 >> 31;
      v27 = v20 + v26;
      v28 = ((int)((v24 | 0x8000) - a3) >> 1) - 1;
      if (v25 >= v28) {
        v25 = v28;
      }
      *a2 = (v27 + v25) ^ v26;
      v29 = v26 + a3 + 2 * v25 + 1;
      a3 = v29 + (v29 != 0x8000);
    }
  }
  else {
    v29 = 0;
  }
  v4 = *((_DWORD*)result + 8);
  v5 = v4 >> 15;
  if (v29 != 0) {
    *((_DWORD*)result + 9) += v4 + v5 * (v29 - 0x8000);
    v6 = v5 * (a3 - v29);
    *((_DWORD*)result + 8) = v6;
    if (v6 > 0x800000) {
      return result;
    }
  }
  else {
    v6 = v4 + v5 * (a3 - 0x8000);
    *((_DWORD*)result + 8) = v6;
    if (v6 > 0x800000) {
      return result;
    }
  }
  v7 = *((_DWORD*)result + 9);
  do {
    if ((unsigned int)v7 >> 23 == 255) {
      ++*((_DWORD*)result + 10);
    }
    else {
      v9 = *((_DWORD*)result + 11);
      if ((v9 & 0x80000000) == 0) {
        v10 = *((unsigned int*)result + 7);
        if ((unsigned int)(*((_DWORD*)result + 3) + v10) >=
            *((_DWORD*)result + 2)) {
          v12 = -1;
        }
        else {
          v11 = *result;
          v12 = 0;
          *((_DWORD*)result + 7) = v10 + 1;
          *(_BYTE*)(v11 + v10) = v9 + (v7 < 0);
        }
        *((_DWORD*)result + 12) |= v12;
      }
      for (i = *((_DWORD*)result + 10); i != 0; *((_DWORD*)result + 12) = -1) {
        while (1) {
          v16 = *((unsigned int*)result + 7);
          if ((unsigned int)(*((_DWORD*)result + 3) + v16) >=
              *((_DWORD*)result + 2)) {
            break;
          }
          v14 = *result;
          *((_DWORD*)result + 7) = v16 + 1;
          *(_BYTE*)(v14 + v16) = (v7 < 0) - 1;
          v15 = *((_DWORD*)result + 12);
          i = *((_DWORD*)result + 10) - 1;
          *((_DWORD*)result + 10) = i;
          *((_DWORD*)result + 12) = v15;
          if (i == 0) {
            goto LABEL_40;
          }
        }
        *((_DWORD*)result + 10) = --i;
      }
    LABEL_40:
      *((_DWORD*)result + 11) = (unsigned __int8)((unsigned int)v7 >> 23);
      v6 = *((_DWORD*)result + 8);
      v7 = *((_DWORD*)result + 9);
    }
    v8 = *((_DWORD*)result + 6);
    v7 = (v7 & 0x7FFFFF) << 8;
    v6 <<= 8;
    *((_DWORD*)result + 8) = v6;
    *((_DWORD*)result + 9) = v7;
    *((_DWORD*)result + 6) = v8 + 8;
  } while (v6 < 0x800001);
  return result;
}

__int64 MovieHr_77b80(_DWORD* a1, unsigned int a2, int a3, int a4, int a5,
                      __int64 a6, unsigned int a7, int a8)
{
  __int64 result;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  __int64 v18;
  char v19;
  char* v20;
  char* v21;
  _BYTE* v22;
  char v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  _DWORD* v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;

  if ((unsigned int)(a3 - 256) < 0xFFFFFF01) {
    return 0xFFFFFFFFLL;
  }
  result = 0xFFFFFFFFLL;
  if ((a5 & 0x80000000) == 0 && a4 >= 1 && a5 <= a4 && a4 <= 255 - a5) {
    a1[67] = 0;
    *a1 = a3;
    a1[1] = a4;
    a1[2] = a5;
    if (a8 != 1) {
      a1[68] = -1;
    }
    a1[69] = a7;
    a1[72] = -1000;
    a1[70] = 5000;
    v14 = a3 & 7;
    if ((unsigned int)(a3 - 1) >= 7) {
      v16 = (char*)a1 + 19;
      v17 = (_BYTE*)(a6 + 3);
      v18 = 0;
      do {
        v18 -= 8;
        *(v16 - 7) = *(v17 - 3);
        *(v16 - 6) = *(v17 - 2);
        *(v16 - 5) = *(v17 - 1);
        *(v16 - 4) = *v17;
        *(v16 - 3) = v17[1];
        *(v16 - 2) = v17[2];
        *(v16 - 1) = v17[3];
        v19 = v17[4];
        v17 += 8;
        *v16 = v19;
        v16 += 8;
      } while (-(__int64)((unsigned __int8)a3 & 0xF8) != v18);
      v15 = -v18;
      if ((a3 & 7) == 0) {
      LABEL_17:
        if ((unsigned int)MovieRoutine_750e0(a1) != 0) {
          if (a8 == 1) {
            if ((int)a1[1] >= 1) {
              v24 = 0;
              while (1) {
                if ((signed int)v24 >= a1[2]) {
                  result = MovieRoutine_75200(a1, v24, 0xFFFFFFFFLL);
                }
                else {
                  result = MovieRoutine_75140(a1, v24, 0xFFFFFFFFLL);
                  if ((_DWORD)result == -1) {
                    return result;
                  }
                  result = MovieRoutine_751a0(a1, v24, 0xFFFFFFFFLL);
                }
                if ((_DWORD)result == -1) {
                  return result;
                }
                if ((signed int)++v24 >= a1[1]) {
                  goto LABEL_27;
                }
              }
            }
          LABEL_34:
            v28 = a1 + 74;
            v29 = MovieRoutine_846a0(2);
            v30 = MovieRoutine_846a0(1);
            if ((int)a1[2] < 1) {
              v31 = 0;
            LABEL_42:
              if (v31 >= a1[1]) {
              LABEL_48:
                if (a8 == 1) {
                  v35 = MovieRoutine_793a0(a1);
                  MovieRoutine_82ce0(v35, 0, (unsigned int)(4 * a3));
                  v36 = MovieRoutine_79520(a1);
                  MovieRoutine_82ce0(v36, 0, (unsigned int)(480 * a3));
                }
                a1[71] = a8;
                return 0;
              }
              else {
                v33 = (int)((v30 + 7) & 0xFFFFFFF8);
                while (1) {
                  result = MovieRoutine_846b0(v28, a2, 1, a7);
                  if (v31 == a1[68]) {
                    v34 = result;
                    MovieRoutine_84700(v28, 10024, 1);
                    result = v34;
                  }
                  if ((_DWORD)result != 0) {
                    break;
                  }
                  v28 = (_DWORD*)((char*)v28 + v33);
                  if (++v31 >= a1[1]) {
                    goto LABEL_48;
                  }
                }
              }
            }
            else {
              v31 = 0;
              v32 = (int)((v29 + 7) & 0xFFFFFFF8);
              while (1) {
                result = MovieRoutine_846b0(v28, a2, 2, a7);
                if ((_DWORD)result != 0) {
                  break;
                }
                if (v31 == a1[68]) {
                  MovieRoutine_84700(v28, 10024, 1);
                }
                v28 = (_DWORD*)((char*)v28 + v32);
                if (++v31 >= a1[2]) {
                  goto LABEL_42;
                }
              }
            }
            return result;
          }
        LABEL_27:
          if (a8 != 2) {
            goto LABEL_34;
          }
          v25 = *a1;
          if ((unsigned int)(*a1 - 228) >= 0xFFFFFF1D) {
            v26 = MovieRoutine_39880(v25);
            if (v25 == v26 * v26 || v25 - v26 * v26 == 2) {
              goto LABEL_34;
            }
          }
        }
        return 0xFFFFFFFFLL;
      }
    }
    else {
      v15 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_17;
      }
    }
    v20 = (char*)a1 + v15;
    v21 = (char*)(a6 + v15);
    v22 = v20 + 12;
    do {
      v23 = *v21++;
      --v14;
      *v22++ = v23;
    } while (v14 != 0);
    goto LABEL_17;
  }
  return result;
}

#pragma GCC visibility pop
