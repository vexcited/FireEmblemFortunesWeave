#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e846c0[])();
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_6a0ba0(_QWORD);
__int64 SdkRoutine_838aa0(_QWORD);
__int64 SdkRoutine_845240(void);
__int64 SdkRoutine_857810(_QWORD);
__int64 SdkRoutine_8578d0(_QWORD);
__int64 SdkRoutine_857e60(_QWORD);
__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859610(_QWORD);
__int64 SdkRoutine_876830(_QWORD, _QWORD);
__int64 SdkRoutine_876870(_QWORD);
__int64 SdkRoutine_8768c0(_QWORD, _QWORD);
__int64 SdkRoutine_87c7b0(void);

__int64 SdkHr_6a1ae0(__int64 result, int a2, __int64 a3)
{
  int* v4;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = *(int**)result;
  v6 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 32LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, (__int64)v4,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 8));
    v4 = *(int**)v6;
  }
  v7 = *(_DWORD*)(v6 + 24);
  v8 = 536936788;
  if (v7 == 0) {
    v9 = 536936789;
    v10 = 536936790;
    v11 = 536936791;
    goto LABEL_7;
  }
  if (v7 == 1) {
    v8 = 536944980;
    v9 = 536944981;
    v10 = 536944982;
    v11 = 536944983;
  LABEL_7:
    v4[2] = v9;
    v4[3] = a3;
    *v4 = v8;
    v4[1] = HIDWORD(a3);
    v4[4] = v10;
    v4[5] = 4 * a2 + 1280;
    v4[6] = v11;
    v4[7] = 1;
    v4 += 8;
  }
  *(_QWORD*)v6 = v4;
  return result;
}

__int64 SdkHr_680f50(__int64 result, char a2, unsigned __int8 a3)
{
  unsigned int* v4;
  unsigned int** v6;

  v4 = *(unsigned int**)result;
  v6 = (unsigned int**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 8LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, (__int64)v4,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 2));
    v4 = *v6;
  }
  if ((a2 & 1) != 0) {
    *v4++ = (a3 << 16) - 2147482395;
  }
  if ((a2 & 2) != 0) {
    *v4++ = (a3 << 16) | 0x800003D5;
  }
  *v6 = v4;
  return result;
}

__int64 SdkHr_69f880(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _OWORD* v10;
  int* v11;
  int* v12;
  __int128* v13;
  __int64 v14;
  __int128 v15;
  __int128 v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  int* v21;
  int v22;

  v2 = SdkRoutine_6a0ba0(*(_QWORD*)(a1 + 32));
  if (v2 != 0) {
    v4 = *(_DWORD*)(a1 + 8);
    v3 = *(_DWORD*)(a1 + 12);
    v5 = *(_QWORD*)v2;
    if (v4 <= v3) {
      v4 = *(_DWORD*)(a1 + 12);
    }
    if (v5 + 4 * (unsigned __int64)v4 > *(_QWORD*)(v2 + 8)) {
      v6 = (__int64*)v2;
      SdkRoutine_64b750(v2, v5, 4LL * (*(_DWORD*)(v2 + 104) + v4));
      v5 = *v6;
      v3 = *(_DWORD*)(a1 + 12);
      v2 = (__int64)v6;
    }
    if (v3 != 0) {
      v7 = *(_QWORD*)(a1 + 16);
      if (v3 < 8 || (unsigned __int64)(v5 - v7) < 0x20) {
        v11 = *(int**)(a1 + 16);
        v12 = (int*)v5;
      }
      else {
        v8 = v3;
        v9 = v3 & 0xFFFFFFF8;
        v10 = (_OWORD*)(v5 + 16);
        v11 = (int*)(v7 + 4 * v9);
        v12 = (int*)(v5 + 4 * v9);
        v3 -= v9;
        v13 = (__int128*)(v7 + 16);
        v14 = v9;
        do {
          v15 = *(v13 - 1);
          v16 = *v13;
          v13 += 2;
          v14 -= 8;
          *(v10 - 1) = v15;
          *v10 = v16;
          v10 += 2;
        } while (v14 != 0);
        if (v9 == v8) {
          goto LABEL_21;
        }
      }
      v18 = v3 - 1;
      v19 = v3 & 7;
      if ((v3 & 7) != 0) {
        v3 &= 0xFFFFFFF8;
        do {
          v20 = *v11++;
          --v19;
          *v12++ = v20;
        } while (v19 != 0);
      }
      v21 = v12;
      if (v18 >= 7) {
        do {
          v3 -= 8;
          *v21 = *v11;
          v21[1] = v11[1];
          v21[2] = v11[2];
          v21[3] = v11[3];
          v21[4] = v11[4];
          v21[5] = v11[5];
          v21[6] = v11[6];
          v12 = v21 + 8;
          v22 = v11[7];
          v11 += 8;
          v21[7] = v22;
          v21 += 8;
        } while (v3 != 0);
      }
      goto LABEL_21;
    }
    v12 = (int*)v5;
  LABEL_21:
    v17 = 0;
    *(_QWORD*)v2 = v12;
    return v17;
  }
  return 5;
}

__int64 SdkHr_8387c0(_QWORD* a1)
{
  _BYTE* v1;
  _BYTE* v2;
  _BYTE* v3;
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;
  __int16 v21;
  __int64 v22;
  char* v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v2 = (_BYTE*)*a1;
  v1 = (_BYTE*)a1[1];
  if ((_BYTE*)*a1 == v1) {
    return 0;
  }
  if (*v2 != 83) {
    return 0;
  }
  v3 = v2 + 1;
  *a1 = v2 + 1;
  if (v1 == v2 + 1) {
    return 0;
  }
  v4 = (unsigned __int8)*v3;
  if (v4 < 0x61) {
    if (v4 == 95) {
      *a1 = v2 + 2;
      v7 = a1[37];
      if (v7 != a1[38]) {
        return *(_QWORD*)v7;
      }
      return 0;
    }
    if (v4 < 0x30) {
      return 0;
    }
  LABEL_15:
    if (v4 < 0x3A || v4 - 65 <= 0x19) {
      v9 = 0;
      while (1) {
        v10 = (unsigned __int8)*v3;
        if ((unsigned int)v10 < 0x30) {
          break;
        }
        if ((unsigned int)v10 < 0x3A) {
          *a1 = ++v3;
          v9 = v10 + 36 * v9 - 48;
          if (v3 == v1) {
            break;
          }
        }
        else {
          if ((unsigned int)(v10 - 65) > 0x19) {
            break;
          }
          *a1 = ++v3;
          v9 = v10 + 36 * v9 - 55;
          if (v3 == v1) {
            break;
          }
        }
      }
      if (v3 != v1 && *v3 == 95) {
        v11 = v9 + 1;
        *a1 = v3 + 1;
        v12 = a1[37];
        if (v11 < (a1[38] - v12) >> 3) {
          return *(_QWORD*)(v12 + 8 * v11);
        }
      }
    }
    return 0;
  }
  if (v4 > 0x7A) {
    goto LABEL_15;
  }
  v5 = 0;
  if ((unsigned __int8)*v3 > 0x68u) {
    switch (v4) {
    case 'i':
      v6 = 3;
      break;
    case 'o':
      v6 = 4;
      break;
    case 's':
      v6 = 2;
      break;
    default:
      return v5;
    }
  }
  else {
    switch (v4) {
    case 'a':
      v6 = 0;
      break;
    case 'b':
      v6 = 1;
      break;
    case 'd':
      v6 = 5;
      break;
    default:
      return v5;
    }
  }
  v14 = (_QWORD*)a1[614];
  *a1 = v2 + 2;
  v15 = v14[1];
  if ((unsigned __int64)(v15 - 4064) <= 0xFFFFFFFFFFFFF00FLL) {
    v16 = a1;
    v17 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v17 == nullptr) {
      v27 = SdkRoutine_87c7b0();
      goto LABEL_55;
    }
    v18 = v17;
    v15 = 0;
    *v17 = v14;
    v17[1] = 0;
    v14 = v17;
    a1 = v16;
    v16[614] = v18;
  }
  v19 = a1;
  v14[1] = v15 + 16;
  v20 = (char*)v14 + v15 + 16;
  v20[8] = 48;
  v21 = *(_WORD*)(v20 + 9);
  *((_DWORD*)v20 + 3) = v6;
  *(_WORD*)(v20 + 9) = v21 & 0xF000 | 0x540;
  *(_QWORD*)v20 = SdkData_e846c0;
  v22 = SdkRoutine_845240();
  if ((char*)v22 == v20) {
    return (__int64)v20;
  }
  v23 = (char*)v19[38];
  v5 = v22;
  v24 = v19;
  if (v23 != (char*)v19[39]) {
  LABEL_53:
    *(_QWORD*)v23 = v5;
    v24[38] = v23 + 8;
    return v5;
  }
  v25 = (char*)v19[37];
  v26 = v23 - v25;
  if (v25 != (char*)(v19 + 40)) {
    v27 = SdkRoutine_859610(v25);
    v24 = v19;
    v19[37] = v27;
    if (v27 == 0) {
      goto LABEL_55;
    }
    goto LABEL_52;
  }
  v27 = SdkRoutine_8578d0(2 * (v23 - v25));
  if (v27 != 0) {
    if (v23 != v25) {
      v28 = v27;
      SdkRoutine_858a50(v27, v25, v26);
      v27 = v28;
    }
    v24 = v19;
    v19[37] = v27;
  LABEL_52:
    v23 = (char*)(v27 + v26);
    v24[39] = v27 + 8 * (v26 >> 2);
    goto LABEL_53;
  }
LABEL_55:
  v29 = SdkRoutine_857810(v27);
  return SdkRoutine_838aa0(v29);
}

__int64 SdkHr_6a5780(__int64 result, char a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  if (result != 0) {
    v2 = (__int64*)(result + 352);
    v3 = 256;
    while (1) {
      v5 = *(v2 - 7);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 6);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 5);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 4);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 3);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 2);
      if (v5 != 0) {
        break;
      }
      v5 = *(v2 - 1);
      if (v5 != 0) {
        break;
      }
      v6 = *v2;
      v2 += 8;
      v5 = v6;
      if (v6 != 0) {
        break;
      }
      v3 -= 8;
      if (v3 == 0) {
        return 0;
      }
    }
    SdkRoutine_876830(*(_QWORD*)(v5 + 48), &v8);
    result = (unsigned int)SdkRoutine_8768c0(v8, (a2 & 1) == 0) == 0;
    if (v8 != 0) {
      v7 = result;
      SdkRoutine_876870(v8);
      return v7;
    }
  }
  return result;
}

__int64 SdkHr_697070(__int64 result, char a2)
{
  int* v3;
  int** v4;
  int v5;

  v3 = *(int**)result;
  v4 = (int**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result =
        SdkRoutine_64b750(result, (__int64)v3,
                          4LL * (unsigned int)(*(_DWORD*)(result + 104) + 1));
    v3 = *v4;
  }
  if (a2 != 0) {
    v5 = -2147414486;
  }
  else {
    v5 = -2147480022;
  }
  *v3 = v5;
  *v4 = v3 + 1;
  return result;
}

__int64 SdkHr_684940(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  unsigned int* v7;
  int v8;
  unsigned __int64 v9;
  _DWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 i;
  _OWORD* v13;
  __int128* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int128 v17;
  __int128 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;

  result = SdkRoutine_857e60(a3);
  v7 = *(unsigned int**)a1;
  v8 = result;
  v9 = (unsigned __int64)(result + 4) >> 2;
  if (*(_QWORD*)a1 + 4 * (unsigned __int64)(unsigned int)(v9 + 5) >
      *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(
        a1, (__int64)v7, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + v9 + 5));
    v7 = *(unsigned int**)a1;
  }
  v7[2] = a2;
  v7[3] = v9;
  *v7 = (((_DWORD)v9 << 16) + 196608) & 0x1FFF0000 | 0xA0002EDA;
  v7[1] = 92274688;
  v10 = v7 + 4;
  v11 = (unsigned int)(4 * v9 - 4);
  if ((int)v11 < 1) {
    LODWORD(i) = 0;
    goto LABEL_13;
  }
  if ((unsigned int)v11 < 0x1D) {
    i = 0;
    goto LABEL_12;
  }
  if ((unsigned __int64)v7 - a3 + 16 < 0x20) {
    for (i = 0; i < v11; i += 4LL) {
    LABEL_12:
      v19 = *(_DWORD*)(a3 + i);
      *v10++ = v19;
    }
    goto LABEL_13;
  }
  v13 = v7 + 8;
  v14 = (__int128*)(a3 + 16);
  v15 = ((v11 - 1) >> 2) + 1;
  i = 4 * (v15 & 0x7FFFFFFFFFFFFFF8LL);
  v10 = (_DWORD*)((char*)v10 + i);
  v16 = v15 & 0x7FFFFFFFFFFFFFF8LL;
  do {
    v17 = *(v14 - 1);
    v18 = *v14;
    v14 += 2;
    v16 -= 8;
    *(v13 - 1) = v17;
    *v13 = v18;
    v13 += 2;
  } while (v16 != 0);
  if (v15 != (v15 & 0x7FFFFFFFFFFFFFF8LL)) {
    goto LABEL_12;
  }
LABEL_13:
  if ((int)i >= v8) {
    v21 = 0;
  }
  else {
    v20 = (unsigned int)i;
    v21 = *(unsigned __int8*)(a3 + (unsigned int)i);
    v22 = (unsigned int)i | 1LL;
    if ((int)v22 < v8) {
      v23 = v20 | 2;
      v21 |= *(unsigned __int8*)(a3 + v22) << 8;
      if ((int)v23 < v8) {
        v21 |= *(unsigned __int8*)(a3 + v23) << 16;
      }
    }
  }
  *v10 = v21;
  *(_QWORD*)a1 = v10 + 1;
  return result;
}

__int64 SdkHr_84a1b0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 result;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;

  (*(void (**)(_QWORD*, _QWORD))(*a2 + 16LL))(a2, *(_QWORD*)(a1 + 24));
  v4 = *(_QWORD*)(a1 + 24);
  v5 = *(unsigned __int16*)(v4 + 9);
  v6 = (v5 >> 8) & 3;
  if (v6 != 0) {
    if (v6 == 2) {
      if (((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 8LL))(v4, a2) &
           1) != 0) {
        goto LABEL_8;
      }
      v4 = *(_QWORD*)(a1 + 24);
      v5 = *(unsigned __int16*)(v4 + 9);
    }
    v7 = (v5 >> 10) & 3;
    if (v7 != 0 &&
        (v7 != 2 ||
         ((*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 16LL))(v4, a2) &
          1) == 0)) {
      v8 = a2[2];
      v16 = a2[3];
      if (v8 + 1 <= v16) {
        result = a2[1];
      }
      else {
        v17 = a2[1];
        v18 = v8 + 993;
        v19 = 2 * v16;
        if (v19 <= v18) {
          v20 = v18;
        }
        else {
          v20 = v19;
        }
        a2[3] = v20;
        result = SdkRoutine_859610(v17);
        a2[1] = result;
        if (result == 0) {
          goto LABEL_33;
        }
        v8 = a2[2];
      }
      v15 = 32;
      goto LABEL_23;
    }
  }
LABEL_8:
  v8 = a2[2];
  v9 = a2[3];
  if (v8 + 1 <= v9) {
    result = a2[1];
    v15 = 40;
  }
  else {
    v10 = a2[1];
    v11 = v8 + 993;
    v12 = 2 * v9;
    if (v12 <= v11) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    a2[3] = v13;
    result = SdkRoutine_859610(v10);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_33;
    }
    v8 = a2[2];
    v15 = 40;
  }
LABEL_23:
  *(_BYTE*)(result + v8) = v15;
  v21 = *(_QWORD*)(a1 + 16);
  ++a2[2];
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v21);
  if ((*(_WORD*)(v21 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v21);
  }
  v22 = a2[2];
  v23 = a2[3];
  if (v22 + 3 <= v23) {
    result = a2[1];
    goto LABEL_32;
  }
  v24 = a2[1];
  v25 = v22 + 995;
  v26 = 2 * v23;
  if (v26 <= v25) {
    v27 = v25;
  }
  else {
    v27 = v26;
  }
  a2[3] = v27;
  result = SdkRoutine_859610(v24);
  a2[1] = result;
  if (result == 0) {
  LABEL_33:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v22 = a2[2];
LABEL_32:
  v28 = result + v22;
  *(_BYTE*)(v28 + 2) = 42;
  *(_WORD*)v28 = 14906;
  a2[2] += 3LL;
  return result;
}

#pragma GCC visibility pop
