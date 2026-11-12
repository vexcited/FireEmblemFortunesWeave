#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_5fa0(_QWORD, _QWORD);
__int64 GameRoutine_6a0(unsigned __int64*, __int64, unsigned __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c060;
extern unsigned __int8 GameData_1a83980[256];
extern unsigned int GameData_1b37d88[29];
__int64 Value_c30(__int64* a1, int* a2, unsigned __int8* a3, __int64 a4);
__int64 Value_10e0(unsigned __int64* a1, unsigned __int64* a2, __int64 a3,
                   unsigned __int64 a4, __int64 a5, unsigned __int64 a6,
                   int a7);
__int64 Value_17a0(int* a1, unsigned __int16 a2, unsigned __int16 a3);
__int64 Value_1800(_BYTE* a1, unsigned int a2);
__int64 Value_2500(__int64* a1, __int64 a2, __int64 a3);
unsigned __int64 Value_2640(_QWORD* a1, __int64 a2, unsigned __int64 a3);
__int64 Value_2870(__int64 result);
__int64 Value_2a70(__int64 a1);
__int64 Value_2ad0(__int64* a1, __int64 a2, __int64 a3);
__int64 Value_2cc0(__int64* a1, char a2);
__int64 Value_3a70(__int64* a1, _BYTE* a2);
__int64 Value_3b80(_QWORD* a1, __int64 a2);
__int64 Value_7f50(__int64* a1);
unsigned __int64 Value_b210(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 Value_b320(_QWORD** a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                   unsigned __int64 a5, unsigned __int64 a6);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");

__int64 Value_c30(__int64* a1, int* a2, unsigned __int8* a3, __int64 a4)
{
  __int64 v4;
  int v5;
  unsigned int v7;
  unsigned __int8 v8;
  unsigned __int8 v9;
  int v10;
  unsigned int v11;
  signed __int8 v12;
  unsigned __int8 v13;
  int v14;
  int v15;
  __int64 v16;

  if (a4 <= 0) {
    *a1 = 0;
    return 22;
  }
  v4 = *a3;
  v5 = GameData_1a83980[v4];
  switch (v5) {
  case 1:
    *a2 = v4;
    *a1 = 1;
    return 0;
  case 2:
    if (a4 != 1) {
      if ((char)a3[1] <= -65) {
        *a1 = 2;
        *a2 = a3[1] & 0x3F | ((v4 & 0x1F) << 6);
        return 0;
      }
      goto LABEL_16;
    }
    goto LABEL_26;
  case 3:
    if ((unsigned __int64)a4 < 3) {
      if (a4 == 1) {
        goto LABEL_26;
      }
      v12 = a3[1];
      if ((_DWORD)v4 == 237) {
        if (v12 > -97) {
          goto LABEL_16;
        }
      }
      else if ((_DWORD)v4 == 224) {
        if ((v12 & 0xE0) != 0xA0) {
          goto LABEL_16;
        }
      }
      else if (v12 > -65) {
        goto LABEL_16;
      }
      goto LABEL_43;
    }
    v11 = a3[1];
    if ((v11 & 0xC0) != 0x80) {
      goto LABEL_16;
    }
    v13 = a3[2];
    if ((v13 & 0xC0) == 0x80) {
      v14 = ((v4 & 0xF) << 12) | ((v11 & 0x3F) << 6);
      if ((v14 & 0xF800) != 0 && (v14 & 0xF800) != 0xD800) {
        *a1 = 3;
        *a2 = v13 & 0x3F | v14;
        return 0;
      }
      goto LABEL_16;
    }
    if ((_DWORD)v4 == 237) {
      if (v11 > 0x9F) {
        goto LABEL_16;
      }
    }
    else if ((_DWORD)v4 == 224 && v11 < 0xA0) {
      goto LABEL_16;
    }
    break;
  case 4:
    if ((unsigned __int64)a4 >= 4) {
      v7 = a3[1];
      if ((v7 & 0xC0) == 0x80) {
        v8 = a3[2];
        if ((v8 & 0xC0) == 0x80) {
          v9 = a3[3];
          if ((v9 & 0xC0) == 0x80) {
            v10 = ((v4 & 7) << 18) | ((v7 & 0x3F) << 12);
            if ((unsigned int)(v10 - 0x10000) >> 20 == 0) {
              *a1 = 4;
              *a2 = v9 & 0x3F | ((v8 & 0x3F) << 6) | v10;
              return 0;
            }
            goto LABEL_16;
          }
          v16 = 3;
        }
        else {
          v16 = 2;
        }
        if ((_DWORD)v4 == 244) {
          if (v7 <= 0x8F) {
          LABEL_57:
            *a1 = v16;
            *a2 = 65533;
            return 84;
          }
        }
        else if ((_DWORD)v4 != 240 || v7 >= 0x90) {
          goto LABEL_57;
        }
      }
    LABEL_16:
      *a1 = 1;
      *a2 = 65533;
      return 84;
    }
    if (a4 == 1) {
    LABEL_26:
      *a1 = 1;
      *a2 = 65533;
      return 34;
    }
    v15 = a3[1];
    if ((_DWORD)v4 == 244) {
      if ((char)v15 > -113) {
        goto LABEL_16;
      }
    }
    else if ((_DWORD)v4 == 240) {
      if ((unsigned int)(v15 - 144) > 0x2F) {
        goto LABEL_16;
      }
    }
    else if ((char)v15 > -65) {
      goto LABEL_16;
    }
    if (a4 == 2) {
    LABEL_43:
      *a1 = 2;
      *a2 = 65533;
      return 34;
    }
    if ((char)a3[2] <= -65) {
      *a1 = 3;
      *a2 = 65533;
      return 34;
    }
    break;
  default:
    goto LABEL_16;
  }
  *a1 = 2;
  *a2 = 65533;
  return 84;
}

__int64 Value_10e0(unsigned __int64* a1, unsigned __int64* a2, __int64 a3,
                   unsigned __int64 a4, __int64 a5, unsigned __int64 a6, int a7)
{
  unsigned __int64* v9;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  unsigned __int64* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned __int64* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v36;
  __int64 v37;
  unsigned __int64 v38;

  v9 = a2;
  if (a7 == 0) {
    return GameRoutine_6a0(a2, a5, a6);
  }
  if (a7 == 1) {
    v12 = 0;
    v13 = 0;
    while (1) {
      while (1) {
      LABEL_5:
        v14 = a5 + v12;
        v15 = GameRoutine_6a0(&v38, a5 + v12, a6 - v12);
        v16 = v38;
        v17 = v15;
        v18 = v38 + v13;
        if (a3 != 0) {
          if (v18 > a4) {
            v23 = a1;
            goto LABEL_50;
          }
          memcpy(a3 + v13, a5 + v12, v38);
        }
        v12 += v16;
        if (v17 == 0) {
          v23 = a1;
          v9 = a2;
          goto LABEL_47;
        }
        if (v12 < a6) {
          break;
        }
        v13 = v18;
      }
      v13 = v18;
      if (a3 != 0) {
        break;
      }
      while (1) {
        v21 = Value_c30(&v37, &v36, (unsigned __int8*)(a5 + v12), a6 - v12);
        if (v21 == 0) {
          break;
        }
        if (v21 == 34) {
          v23 = a1;
          goto LABEL_43;
        }
        v13 += 3LL;
        v12 += v37;
        if (v12 >= a6) {
          goto LABEL_5;
        }
      }
    }
    while (1) {
      v19 = Value_c30(&v37, &v36, (unsigned __int8*)(a5 + v12), a6 - v12);
      if (v19 == 0) {
        v13 = v18;
        goto LABEL_5;
      }
      if (v19 == 34) {
        break;
      }
      v13 = v18 + 3;
      if (v18 + 3 > a4) {
        break;
      }
      v20 = a3 + v18;
      v18 += 3LL;
      *(_WORD*)v20 = -16401;
      *(_BYTE*)(v20 + 2) = -67;
      v12 += v37;
      if (v12 >= a6) {
        goto LABEL_5;
      }
    }
    v23 = a1;
  LABEL_33:
    v13 = v18;
  LABEL_43:
    *v23 = v13;
    *a2 = v12;
    return 34;
  }
  v23 = a1;
  v24 = GameRoutine_6a0(&v38, a5, a6);
  v18 = v38;
  v25 = v24;
  if (a3 != 0) {
    if (v38 > a4) {
      v12 = 0;
      v13 = 0;
      v14 = a5;
    LABEL_50:
      if (a4 == v13) {
        v30 = a2;
      }
      else {
        memcpy(a3 + v13, v14, a4 - v13);
        v30 = a2;
        v12 += a4 - v13;
        v31 = a5 - 1;
        do {
          if (v12 == 0) {
            break;
          }
          v32 = *(char*)(v31 + v12);
          v33 = (__int64)*(char*)(v31 + v12) >> 7;
          v12 += v33;
          a4 += v33;
        } while (v32 < -64);
      }
      *v30 = v12;
      *v23 = a4;
      return 34;
    }
    v13 = 0;
    v12 = 0;
    v14 = a5;
    while (1) {
      memcpy(a3 + v13, v14, v18);
      v12 += v18;
      v13 += v18;
      if (v25 == 0) {
        break;
      }
      for (; v12 < a6; v12 += v37) {
        v27 = Value_c30(&v37, &v36, (unsigned __int8*)(a5 + v12), a6 - v12);
        if (v27 == 0) {
          break;
        }
        if (v27 == 34) {
          goto LABEL_43;
        }
      }
      v14 = a5 + v12;
      v26 = GameRoutine_6a0(&v38, a5 + v12, a6 - v12);
      v18 = v38;
      v25 = v26;
      if (v38 + v13 > a4) {
        goto LABEL_50;
      }
    }
    v18 = v13;
    v9 = a2;
  }
  else {
    v12 = v38;
    if (v24 != 0) {
      while (v12 >= a6) {
      LABEL_36:
        v28 = GameRoutine_6a0(&v38, a5 + v12, a6 - v12);
        v12 += v38;
        v18 += v38;
        if (v28 == 0) {
          goto LABEL_47;
        }
      }
      while (1) {
        v29 = Value_c30(&v37, &v36, (unsigned __int8*)(a5 + v12), a6 - v12);
        if (v29 == 34) {
          goto LABEL_33;
        }
        if (v29 != 0) {
          v12 += v37;
          if (v12 < a6) {
            continue;
          }
        }
        goto LABEL_36;
      }
    }
  }

LABEL_47:
  *v9 = v12;
  *v23 = v18;
  return 0;
}

__int64 Value_17a0(int* a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3;
  unsigned int v4;

  v3 = a2;
  if ((a2 & 0xF800) != 0xD800) {
    v4 = 1;
  LABEL_3:
    *a1 = v3;
    return v4;
  }
  v4 = 0;
  if ((a2 & 0x400) == 0 && (a3 & 0xFC00) == 0xDC00) {
    v3 = (a2 << 10) + a3 - 56613888;
    v4 = 2;
    goto LABEL_3;
  }
  return v4;
}

__int64 Value_1800(_BYTE* a1, unsigned int a2)
{
  if (a2 <= 0x7F) {
    *a1 = a2;
    return 1;
  }
  if (a2 <= 0x7FF) {
    *a1 = (a2 >> 6) | 0xC0;
    a1[1] = a2 & 0x3F | 0x80;
    return 2;
  }
  if (HIWORD(a2) != 0) {
    if (HIWORD(a2) <= 0x10u) {
      *a1 = (a2 >> 18) | 0xF0;
      a1[1] = (a2 >> 12) & 0x3F | 0x80;
      a1[3] = a2 & 0x3F | 0x80;
      a1[2] = (a2 >> 6) & 0x3F | 0x80;
      return 4;
    }
  }
  else if (a2 >> 11 < 0x1B || a2 >= 0xE000) {
    *a1 = (a2 >> 12) | 0xE0;
    a1[1] = (a2 >> 6) & 0x3F | 0x80;
    a1[2] = a2 & 0x3F | 0x80;
    return 3;
  }
  return 0;
}

__int64 Value_2500(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a3 < 0) {
    if (*((_DWORD*)a1 + 2) == 0) {
      *((_DWORD*)a1 + 2) = 22;
    }
    return 0;
  }
  else {
    v5 = a1[2];
    v6 = a1[3];
    if (v5 + a3 <= v6) {
      memcpy(a2, v5, a3);
      a1[2] += a3;
      return a3;
    }
    else {
      v8 = *a1;
      v9 = v6 - v5;
      memcpy(a2, v5, v6 - v5);
      v10 = a3 - v9;
      a1[2] = (__int64)(a1 + 4);
      a1[3] = (__int64)(a1 + 4);
      if (v10 < 0) {
        v10 = 0;
        if (*(_DWORD*)(v8 + 60) == 0) {
          *(_DWORD*)(v8 + 60) = 22;
        }
      }
      else {
        v11 = *(_QWORD*)(v8 + 16);
        if ((unsigned __int64)(v11 + v10) <= *(_QWORD*)(v8 + 24)) {
          memcpy(a2 + v9, *(_QWORD*)(v8 + 40) + v11, v10);
          *(_QWORD*)(v8 + 16) += v10;
        }
        else {
          v10 = Value_2640(v8, a2 + v9, v10);
        }
      }
      return v10 + v9;
    }
  }
}

unsigned __int64 Value_2640(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD* v3;
  int v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)(_QWORD*, __int64, unsigned __int64);
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;

  v3 = a1 + 2;
  v7 = *((_DWORD*)a1 + 15);
  if (a1[2] == a1[3] && v7 == 0) {
    v9 = (*(__int64 (**)(_QWORD*, _QWORD, _QWORD))(*a1 + 16LL))(a1, a1[5],
                                                                a1[6]);
    if (v9 != 0) {
      a1[1] += a1[3];
      a1[2] = 0;
      a1[3] = v9;
      a1[4] = -1;
    }
    v7 = *((_DWORD*)a1 + 15);
  }
  if (v7 == 0) {
    v10 = a1[2];
    v11 = a1[3] - v10;
    v12 = a3 - v11;
    v13 = a1[5] + v10;
    if (a3 <= v11) {
      memcpy(a2, v13, a3);
      *v3 += a3;
      return a3;
    }
    memcpy(a2, v13, a1[3] - v10);
    v14 = a2 + v11;
    v15 = *(__int64 (**)(_QWORD*, __int64, unsigned __int64))(*a1 + 16LL);
    if (v12 >= a1[6]) {
      v21 = v15(a1, v14, a3 - v11);
      if (v21 != 0) {
        v22 = v12 - v21;
        a3 = v21 + v11;
        a1[1] += v21;
        if (v22 != 0) {
          v23 = v14 + v21;
          do {
            v24 = (*(__int64 (**)(_QWORD*, __int64, unsigned __int64))(
                *a1 + 16LL))(a1, v23, v22);
            if (v24 == 0) {
              break;
            }
            v22 -= v24;
            v23 += v24;
            a3 += v24;
            a1[1] += v24;
          } while (v22 != 0);
        }
        v25 = a1[1] + a1[3];
        goto LABEL_27;
      }
    }
    else {
      v16 = ((__int64 (*)(_QWORD*, _QWORD))v15)(a1, a1[5]);
      if (v16 != 0) {
        v17 = v16;
        if (v16 > v12) {
        LABEL_17:
          memcpy(v14, a1[5], a3 - v11);
          v19 = a1[3];
          v20 = a1[1];
          a1[3] = v17;
          a1[1] = v20 + v19;
          a1[2] = v12;
          return a3;
        }
        while (1) {
          v18 = (*(__int64 (**)(_QWORD*, unsigned __int64, unsigned __int64))(
              *a1 + 16LL))(a1, a1[5] + v17, a1[6] - v17);
          if (v18 == 0) {
            break;
          }
          v17 += v18;
          if (v17 > v12) {
            goto LABEL_17;
          }
        }
        memcpy(v14, a1[5], v17);
        a3 = v17 + v11;
        v25 = a1[3] + v17 + a1[1];
      LABEL_27:
        a1[1] = v25;
        *v3 = 0;
        v3[1] = 0;
        a1[4] = -1;
        return a3;
      }
    }
    a3 = v11;
    a1[2] = a1[3];
    return a3;
  }
  return 0;
}

__int64 Value_2870(__int64 result)
{
  _QWORD* v1;

  if (*(_DWORD*)(result + 60) == 0) {
    v1 = (_QWORD*)result;
    result =
        (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)result + 16LL))(
            result, *(_QWORD*)(result + 40), *(_QWORD*)(result + 48));
    if (result != 0) {
      v1[1] += v1[3];
      v1[2] = 0;
      v1[3] = result;
      v1[4] = -1;
    }
  }
  return result;
}

__int64 Value_2a70(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(a1 + 57) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 32);
    if (v1 == -1) {
      if (*(_DWORD*)(a1 + 60) == 0) {
        *(_DWORD*)(a1 + 60) = 34;
      }
      return 0;
    }
    else {
      *(_QWORD*)(a1 + 16) = v1;
      return 1;
    }
  }
  else {
    if (*(_DWORD*)(a1 + 60) == 0) {
      *(_DWORD*)(a1 + 60) = 95;
    }
    return 0;
  }
}

__int64 Value_2ad0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char v17;
  __int64 v18;
  unsigned __int64 v19;

  if (a1[3] == 0) {
    if (*((_DWORD*)a1 + 10) != 0) {
      return 0;
    }
    v6 = *a1;
    v7 = a2;
    v19 = 0;
    v8 = (*(__int64 (**)(__int64*, unsigned __int64*))(v6 + 32))(a1, &v19);
    v9 = v19;
    if (v8 == 0 || v19 == 0) {
      if (v19 == 0) {
        goto LABEL_30;
      }
      if (((*(__int64 (**)(__int64*, _QWORD, _QWORD, _QWORD))(*a1 + 16))(a1, 0,
                                                                         0, 0) &
           1) == 0) {
        return 0;
      }
      v9 = a1[4];
    }
    else {
      a1[3] = v8;
      a1[4] = v9;
    }
    v18 = a1[2];
    a2 = v7;
    if (v18 + a3 <= v9) {
      memcpy(a1[3] + v18, v7, a3);
      a1[2] += a3;
      return 1;
    }
  }
  if (*((_DWORD*)a1 + 10) != 0) {
    return 0;
  }
  if (a1[3] == 0) {
    v13 = *a1;
    v12 = a2;
    v19 = 0;
    v14 = (*(__int64 (**)(__int64*, unsigned __int64*))(v13 + 32))(a1, &v19);
    v15 = v19;
    if (v14 != 0 && v19 != 0) {
      a1[3] = v14;
      a1[4] = v15;
    LABEL_27:
      a2 = v12;
      goto LABEL_28;
    }
    if (v19 != 0) {
      v17 = (*(__int64 (**)(__int64*, _QWORD, _QWORD, _QWORD))(*a1 + 16))(a1, 0,
                                                                          0, 0);
      a2 = v12;
      if ((v17 & 1) == 0) {
        return 0;
      }
      goto LABEL_28;
    }
  LABEL_30:
    if (*((_DWORD*)a1 + 10) != 0) {
      return 0;
    }
    *((_DWORD*)a1 + 10) = 12;
    return 0;
  }
  v11 = a1[2];
  if (v11 != 0) {
    v12 = a2;
    if (((*(__int64 (**)(__int64*, __int64, __int64, _QWORD))(*a1 + 16))(
             a1, a1[3], v11, 0) &
         1) == 0) {
      return 0;
    }
    a1[1] += a1[2];
    a1[2] = 0;
    goto LABEL_27;
  }

LABEL_28:
  if (((*(__int64 (**)(__int64*, __int64, __int64, _QWORD))(*a1 + 16))(a1, a2,
                                                                       a3, 0) &
       1) == 0) {
    return 0;
  }
  a1[1] += a3;
  a1[2] = 0;
  return 1;
}

__int64 Value_2cc0(__int64* a1, char a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v10;

  if (*((_DWORD*)a1 + 10) != 0) {
    return 0;
  }
  if (a1[3] != 0) {
    v3 = a1[2];
    if (v3 != 0) {
      if (((*(__int64 (**)(__int64*, __int64, __int64, _QWORD))(*a1 + 16))(
               a1, a1[3], v3, a2 & 1) &
           1) != 0) {
        a1[1] += a1[2];
        a1[2] = 0;
        return 1;
      }
      return 0;
    }
    return 1;
  }
  else {
    v5 = *a1;
    v10 = 0;
    v7 = (*(__int64 (**)(__int64*, __int64*))(v5 + 32))(a1, &v10);
    v8 = v10;
    if (v7 == 0 || v10 == 0) {
      if (v10 != 0) {
        return (*(__int64 (**)(__int64*, _QWORD, _QWORD, _QWORD))(*a1 + 16))(
                   a1, 0, 0, 0) &
               1;
      }
      else {
        if (*((_DWORD*)a1 + 10) != 0) {
          return 0;
        }
        *((_DWORD*)a1 + 10) = 12;
        return 0;
      }
    }
    else {
      a1[3] = v7;
      a1[4] = v8;
      return 1;
    }
  }
}

__int64 Value_3a70(__int64* a1, _BYTE* a2)
{
  __int64 v5;
  int v6;
  unsigned int v7;

  if (*a1 != 0) {
    return 114;
  }
  v5 = GameRoutine_1a09d20(152, GameData_212c060);
  if (v5 != 0) {
    v6 = (unsigned __int8)a2[2];
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 24) = v5 + 40;
    *(_OWORD*)(v5 + 48) = 0u;
    *(_OWORD*)(v5 + 64) = 0u;
    *(_OWORD*)(v5 + 80) = 0u;
    *(_OWORD*)(v5 + 96) = 0u;
    *(_OWORD*)(v5 + 32) = 0u;
    *(_QWORD*)(v5 + 80) = v5 + 88;
    v7 = 4 * (unsigned __int8)a2[1];
    *(_OWORD*)(v5 + 112) = 0u;
    *(_OWORD*)(v5 + 128) = 0u;
    *(_QWORD*)(v5 + 16) = 5;
    *(_DWORD*)(v5 + 4) = v7;
    if (v6 == 1) {
      v7 |= 8u;
      *(_DWORD*)(v5 + 4) = v7;
      if (*a2 != 1) {
      LABEL_6:
        if (a2[3] != 1) {
        LABEL_8:
          *(_QWORD*)(v5 + 8) = 0;
          *(_DWORD*)v5 = 0;
          *a1 = v5;
          return 0;
        }
      LABEL_7:
        *(_DWORD*)(v5 + 4) = v7 | 0x10;
        goto LABEL_8;
      }
    }
    else if (*a2 != 1) {
      goto LABEL_6;
    }
    v7 = v7 & 0xFFFFFFF9 | 2;
    *(_DWORD*)(v5 + 4) = v7;
    if (a2[3] != 1) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  return 12;
}

__int64 Value_3b80(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  bool v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;

  v2 = *a1;
  if (*a1 == 0) {
    return 22;
  }
  if (*(_QWORD*)(v2 + 8) != 0) {
    return 114;
  }
  v4 = *(unsigned int*)(v2 + 20);
  v5 = *(unsigned __int64**)(v2 + 32);
  if (v5 != nullptr && (v6 = *v5) != 0) {
    v7 = GameData_1b37d88[v6 + 1] + (unsigned __int64)*(unsigned int*)(v2 + 16);
    LODWORD(v6) = *(_DWORD*)(v2 + 16);
    if (v7 > v4) {
      goto LABEL_8;
    }
  }
  else {
    v6 = *(unsigned int*)(v2 + 16);
    if (v6 > v4) {
    LABEL_8:
      v8 = (unsigned int)v4 >= (unsigned int)v6;
      v9 = v4 - v6;
      if (!v8) {
      LABEL_9:
        v10 = (_QWORD*)(*(_QWORD*)(v2 + 24) + 8LL * (unsigned int)v4);
      LABEL_15:
        *v10 = 0;
        ++*(_DWORD*)(v2 + 20);
        v15 = *a1;
        *(_QWORD*)(v15 + 8) = a2;
        return 0;
      }
    LABEL_14:
      v14 = __clz(v9 + 16);
      v10 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 8 * (27 - v14) + 8) +
                      8LL * (v9 - GameData_1b37d88[28 - v14]));
      goto LABEL_15;
    }
  }
  v11 = a1;
  v12 = a2;
  if ((GameRoutine_5fa0(v2 + 16, 0) & 1) != 0) {
    v13 = *(_DWORD*)(v2 + 16);
    LODWORD(v4) = *(_DWORD*)(v2 + 20);
    a2 = v12;
    a1 = v11;
    v8 = (unsigned int)v4 >= v13;
    v9 = v4 - v13;
    if (!v8) {
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  return 12;
}

__int64 Value_7f50(__int64* a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = *(__int64**)(v1 + 8);
    if ((*(_BYTE*)v1 & 1) != 0) {
      if (*v2 != 0) {
        v3 = v2[1];
        if (v3 != v2[2]) {
          v4 = a1;
          v5 = Value_2a70(*v2);
          a1 = v4;
          if ((v5 & 1) != 0) {
            v6 = v3 - (_QWORD)v2;
            v7 = *v2;
            v8 = v6 - 24;
            if (v8 < 0) {
              if (*(_DWORD*)(v7 + 60) == 0) {
                *(_DWORD*)(v7 + 60) = 22;
              }
            }
            else {
              v9 = *(_QWORD*)(v7 + 16);
              v11 = *(_QWORD*)(v7 + 24);
              v10 = (_QWORD*)(v7 + 16);
              if (v11 >= v9 + v8) {
                *v10 = v9 + v8;
              }
              else {
                v13 = *(_QWORD*)v7;
                v12 = *(_QWORD*)(v7 + 8);
                *v10 = 0;
                *(_QWORD*)(v7 + 24) = 0;
                *(_QWORD*)(v7 + 8) = v12 + v11;
                v14 = (*(__int64 (**)(__int64, unsigned __int64))(v13 + 32))(
                    v7, v8 - v11 + v9);
                a1 = v4;
                *(_QWORD*)(v7 + 8) += v14;
              }
            }
          }
        }
        *v2 = 0;
        v2[1] = 0;
        v2[2] = 0;
        v1 = *a1;
      }
    }
    else {
      *v2 = 0;
    }
    a1[4] = 0;
    *((_BYTE*)a1 + 40) = 0;
    *((_DWORD*)a1 + 4) = -1;
    **(_QWORD**)(v1 + 16) = 0;
    *(_QWORD*)(v1 + 24) = 0;
    *((_DWORD*)a1 + 2) = 0;
  }
  return 0;
}

unsigned __int64 Value_b210(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;

  if ((a3 & 0x8000000000000000LL) != 0) {
    if (*(_DWORD*)(a1 + 60) == 0) {
      *(_DWORD*)(a1 + 60) = 22;
    }
    return 0;
  }
  else {
    v3 = *(_QWORD*)(a1 + 16);
    if (v3 + a3 <= *(_QWORD*)(a1 + 24)) {
      memcpy(a2, *(_QWORD*)(a1 + 40) + v3, a3);
      *(_QWORD*)(a1 + 16) += a3;
      return a3;
    }
    else {
      return Value_2640((_QWORD*)a1, a2, a3);
    }
  }
}

__int64 Value_b320(_QWORD** a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                   unsigned __int64 a5, unsigned __int64 a6)
{
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;

  if (a3 >= a5) {
    memcpy_alt1(a2, a4, a5);
    v10 = a6 > a5;
    v11 = a6 - a5;
    if (!v10) {
      return 0;
    }
  }
  else {
    memset_alt1(a2, 0, a3);
    v10 = a6 > a5;
    v11 = a6 - a5;
    if (!v10) {
      return 0;
    }
  }
  v12 = (__int64)*a1;
  v13 = (*a1)[2];
  if (v13 + v11 <= (*a1)[3]) {
    memcpy_alt1(a2 + a5, *(_QWORD*)(v12 + 40) + v13, v11);
    *(_QWORD*)(v12 + 16) += v11;
    return 0;
  }
  else {
    v14 = Value_2640(*a1, a2 + a5, v11);
    if (v14 == v11) {
      return 0;
    }
    if (v14 == 0 && *a1 != nullptr && *((_DWORD*)*a1 + 15) != 0) {
      return 12;
    }
    else {
      return 11;
    }
  }
}

#pragma GCC visibility pop
