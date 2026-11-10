#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*SdkData_e76690[])();

extern _UNKNOWN* SdkData_e89ba0;

struct PseudoSret SdkRoutine_61cee0(void);

__int64 SdkRoutine_6496b0(_QWORD, _QWORD);

__int64 SdkRoutine_6496c0(_QWORD);

__int64 SdkRoutine_6496d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_649720(_QWORD, _QWORD);

_QWORD* SdkRoutine_64b0b0(_QWORD* result, __int64, __int64, __int64);

__int64 SdkRoutine_64b2a0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_64b3b0(_QWORD);

__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);

__int64 SdkRoutine_65a950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkRoutine_65d380(_QWORD);

__int64 SdkRoutine_65f400(__int64, int, int, char, char);

__int64 SdkRoutine_664890(_QWORD);

__int64 SdkRoutine_666b40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_66eaa0(_QWORD);

__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858d40(_QWORD);

__int64 SdkRoutine_858d50(_QWORD);

__int64 SdkHr_61b980(__int64 a1, __int64 a2)
{
  char v3;
  char v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  char v8;
  int v9;
  char v10;

  *(struct PseudoSret*)(&v7) = SdkRoutine_61cee0();
  if ((v7 & 1) == 0) {
    return HIDWORD(v7);
  }
  v4 = BYTE4(v7);
  v3 = v8;
  result = 0;
  v6 = *(_DWORD*)(a2 + 48) & 0xFFFFFF00;
  *(_QWORD*)(a2 + 52) = 0;
  *(_DWORD*)(a2 + 48) = v6 & 0xF000FF00 | v3 & 3 | (4 * (v4 & 3)) & 0xF |
                        (16 * (v10 & 3)) & 0x3F | ((v9 & 3) << 6);
  return result;
}

__int64 SdkHr_6587a0(__int64 a1, _DWORD* a2, unsigned __int64* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char v23;
  _BYTE v25[40];

  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  v8 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8 - v3 + 360;
  v10 = v4 >= v9;
  v11 = v4 - v9;
  if (v10) {
    *(_QWORD*)(a1 + 32) = v8 + 360;
    *(_QWORD*)(a1 + 40) = v11;
  }
  else {
    v8 = 0;
  }
  v12 = *(int*)(a1 + 80);
  if ((int)v12 < *(_DWORD*)(a1 + 64) && (v13 = *(_QWORD*)(a1 + 72)) != 0) {
    v14 = (unsigned int*)(v13 + 16 * v12);
    v15 = *v14;
    v16 = *((_QWORD*)v14 + 1);
    *(_DWORD*)(a1 + 80) = v12 + 1;
  }
  else {
    v15 = 0;
    v16 = 0;
  }
  *(_QWORD*)(v8 + 352) = a1;
  *(_BYTE*)(v8 + 8) = 1;
  *(_QWORD*)v8 = SdkData_e76690;
  *(_OWORD*)(v8 + 9) = 0u;
  *(_OWORD*)(v8 + 25) = 0u;
  SdkRoutine_6496c0(v25);
  SdkRoutine_6496b0(v25, *(_QWORD*)(a1 + 24));
  v17 = (*a2 + 4095) & 0xFFFFF000;
  v18 = *(_QWORD*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 40);
  v20 = (v18 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v21 = v20 - v18 + v17;
  v10 = v19 >= v21;
  v22 = v19 - v21;
  if (v10) {
    *(_QWORD*)(a1 + 32) = v20 + v17;
    *(_QWORD*)(a1 + 40) = v22;
  }
  else {
    v20 = 0;
  }
  v23 = SdkRoutine_65a950(v8 + 48, *(_QWORD*)(a1 + 24), (unsigned int)a2[6],
                          v17, v20, v15, v16);
  *(_BYTE*)(v8 + 8) = v23 & 1;
  if ((v23 & 1) != 0) {
    SdkRoutine_6496d0(v25, v8 + 48, 0, v17);
    if ((unsigned __int8)SdkRoutine_649720(v8 + 304, v25) != 0) {
      if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
        ++*(_DWORD*)(a1 + 60);
        *a3 = v8;
        return 1;
      }
    }
    else {
      SdkRoutine_65d380(v8 + 48);
      *(_BYTE*)(v8 + 8) = 0;
    }
  }
  (**(void (***)(unsigned __int64))v8)(v8);
  return 0;
}

void SdkHr_6642b0(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64* v33;
  unsigned __int64 v35;
  char v36;

  v4 = a4 + 0x2000;
  if (a2 == 1) {
    v33 = *(unsigned __int64**)(a4 + 11320);
    if (*(_QWORD*)(a4 + 11240) != *(_QWORD*)(a4 + 11312) ||
        *(_QWORD*)(a4 + 11280) != (_QWORD)v33) {
      v35 = *v33;
      *(_BYTE*)(a4 + 11448) = 1;
      *(_QWORD*)a4 += 8 * HIDWORD(v35);
      v36 = SdkRoutine_66eaa0(a4 + 40);
      SdkRoutine_64b2a0(a4 + 11240, a4 + 9648, 512);
      *(_QWORD*)(a4 + 11320) = *(_QWORD*)(a4 + 11280);
      if ((v36 & 1) != 0) {
        SdkRoutine_664890(a4);
      }
    }
  }
  else if (a2 == 0) {
    v6 = *(_QWORD*)(a4 + 8408);
    v8 = SdkRoutine_64b3b0(*(_QWORD*)(a4 + 8392));
    v9 = *(_QWORD*)(a4 + 8416);
    v10 = v8 + v6 - v9;
    v11 = v8 + v6 >= v9 ? 0LL : *(_QWORD*)(a4 + 8304);
    if (v10 + 2 * a3 + v11 < *(_QWORD*)(a4 + 9536) ||
        (SdkRoutine_664890(a4), a3 > *(_QWORD*)(a4 + 9528))) {
      v12 = *(_QWORD*)(a4 + 11416) + SdkRoutine_64b3b0(a4 + 11240);
      v13 = *(_QWORD*)(a4 + 8392);
      *(_QWORD*)(a4 + 11416) = v12;
      v14 = SdkRoutine_64b3b0(v13);
      v15 = *(_QWORD*)(a4 + 8408);
      v16 = *(_QWORD*)(a4 + 8336);
      v17 = *(_QWORD*)(a4 + 8304);
      v18 = v15 + v14;
      v19 = *(_QWORD*)(a4 + 8392);
      *(_BYTE*)(v4 + 152) = 0;
      if (v18 >= v16) {
        v20 = v17;
      }
      else {
        v20 = 0;
      }
      v21 = v18 - v20;
      *(_QWORD*)(a4 + 8328) = v21;
      *(_QWORD*)(a4 + 8352) = v21;
      v22 = SdkRoutine_64b3b0(v19);
      v23 = *(_QWORD*)(a4 + 8416);
      v24 = *(_QWORD*)(a4 + 8424);
      v25 = v22 + v15 >= v23;
      v26 = v22 + v15 - v23;
      v27 = *(_QWORD*)(a4 + 8304);
      if (v25) {
        v27 = 0;
      }
      v28 = v27 + v26;
      v29 = v28 + a3;
      v30 = v24 - v28;
      if (v29 >= v24) {
        v31 = a3;
      }
      else {
        v31 = v30;
      }
      v32 = SdkRoutine_666b40(a4 + 8280, a4 + 8408, a3, v31);
      SdkRoutine_64b0b0(*(_QWORD**)(a4 + 8392), *(_QWORD*)(a4 + 8400),
                        *(_QWORD*)(a4 + 8408), v32);
    }
  }
}

__int64 SdkHr_669cf0(__int64 a1)
{
  int v1;
  int v2;
  __int64 v3;
  int v5;
  int v6;
  unsigned __int8* v7;
  char v8;
  int v10;

  v1 = *(_DWORD*)(a1 + 32);
  v2 = *(_DWORD*)(a1 + 36);
  v3 = *(_QWORD*)(a1 + 8);
  if (v2 != 10 && (*(_DWORD*)(a1 + 32) & 0x50) == 0) {
    v6 = *(_DWORD*)(a1 + 56);
    if ((v1 & 8) != 0 && *(_BYTE*)(v3 + 7580) == 1) {
      v7 = (unsigned __int8*)SdkData_e89ba0 + 48 * v6;
      if (v7[14] != 0 || v7[15] != 0) {
        v8 = *(_DWORD*)(v3 + 7284) != 1981175382;
      LABEL_14:
        LOBYTE(v5) = SdkRoutine_65f400(v3 + 2520, v6, *(_DWORD*)(a1 + 60), v8,
                                       (*(_DWORD*)(a1 + 32) & 0x1000) != 0);
        v3 = *(_QWORD*)(a1 + 8);
        v1 = *(_DWORD*)(a1 + 32);
        v2 = *(_DWORD*)(a1 + 36);
        goto LABEL_15;
      }
      if (v7[8] <= 1u && *(_DWORD*)(v3 + 7280) != 1981175382) {
        v8 = 1;
        goto LABEL_14;
      }
    }
    v8 = 0;
    goto LABEL_14;
  }
  v5 = *(_DWORD*)(v3 + 7576);
LABEL_15:
  if ((*(_BYTE*)(v3 + 10) & 1) != 0) {
    v10 = v1 & 0x50;
    if (v2 != 10 && v10 == 0) {
      return (unsigned __int8)v5 | 0x300u;
    }
  }
  if (*(_DWORD*)(v3 + 7576) == (unsigned __int8)v5) {
    return 256;
  }
  return (unsigned __int8)v5 | 0x100u;
}

__int64 SdkHr_67aa40(__int64 result, int a2, unsigned int a3,
                     unsigned __int64 a4)
{
  unsigned int* v5;
  unsigned int v6;
  unsigned int** v7;
  unsigned int v8;
  unsigned __int64 v9;
  float* v10;
  bool v11;
  __int64 v12;
  const double* v13;
  float* v14;
  __int64 v15;
  const double* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  float64x2x2_t v24;
  float64x2x2_t v25;
  float32x4x4_t v26;

  if (a3 != 0) {
    v5 = *(unsigned int**)result;
    v6 = (4 * a3) | 2;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v6 > *(_QWORD*)(result + 8)) {
      v7 = (unsigned int**)result;
      v8 = a3;
      v9 = a4;
      SdkRoutine_64b750(result, (__int64)v5,
                        4LL * (*(_DWORD*)(result + 104) + v6));
      v5 = *v7;
      a3 = v8;
      a4 = v9;
      result = (__int64)v7;
    }
    v10 = (float*)(v5 + 2);
    *v5 = ((a3 & 0x7FF) << 18) | 0xA0010E98;
    v5[1] = ((a3 << 16) - 0x10000) | a2;
    if ((int)a3 < 1) {
      v14 = (float*)(v5 + 2);
    }
    else {
      if (a3 < 4 || ((unsigned __int64)v10 < a4 + 16LL * a3
                         ? (v11 = a4 >= (unsigned __int64)&v5[4 * a3 + 2])
                         : (v11 = true),
                     !v11)) {
        v12 = 0;
        v14 = (float*)(v5 + 2);
        v17 = a3 & 3;
        if (v17 == 0) {
          goto LABEL_19;
        }
        goto LABEL_15;
      }
      v12 = a3 & 0x7FFFFFFC;
      v13 = (const double*)a4;
      v14 = &v10[4 * v12];
      v15 = v12;
      do {
        v24 = vld2q_f64(v13);
        v16 = v13 + 4;
        v15 -= 4;
        v13 += 8;
        v25 = vld2q_f64(v16);
        v26.val[1] = vuzp2q_s32(v24.val[0], v25.val[0]);
        v26.val[0] = vuzp1q_s32(v24.val[0], v25.val[0]);
        v26.val[3] = vuzp2q_s32(v24.val[1], v25.val[1]);
        v26.val[2] = vuzp1q_s32(v24.val[1], v25.val[1]);
        vst4q_f32(v10, v26);
        v10 += 16;
      } while (v15 != 0);
      if (v12 != a3) {
        v17 = a3 & 3;
        if (v17 == 0) {
        LABEL_19:
          v19 = v12;
          goto LABEL_20;
        }
      LABEL_15:
        v18 = a4 + 16 * v12 + 8;
        v19 = v12 + v17;
        do {
          --v17;
          *(_DWORD*)v14 = *(_QWORD*)(v18 - 8);
          v14[1] = *(float*)(v18 - 4);
          *((_DWORD*)v14 + 2) = *(_QWORD*)v18;
          v20 = *(_DWORD*)(v18 + 4);
          v18 += 16;
          *((_DWORD*)v14 + 3) = v20;
          v14 += 4;
        } while (v17 != 0);
      LABEL_20:
        if (v12 - (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFCLL) {
          v21 = a3 - v19;
          v22 = a4 + 16 * v19 + 32;
          do {
            v21 -= 4;
            *(_DWORD*)v14 = *(_QWORD*)(v22 - 32);
            v14[1] = *(float*)(v22 - 28);
            *((_DWORD*)v14 + 2) = *(_QWORD*)(v22 - 24);
            v14[3] = *(float*)(v22 - 20);
            *((_DWORD*)v14 + 4) = *(_QWORD*)(v22 - 16);
            v14[5] = *(float*)(v22 - 12);
            *((_DWORD*)v14 + 6) = *(_QWORD*)(v22 - 8);
            v14[7] = *(float*)(v22 - 4);
            *((_DWORD*)v14 + 8) = *(_QWORD*)v22;
            v14[9] = *(float*)(v22 + 4);
            *((_DWORD*)v14 + 10) = *(_QWORD*)(v22 + 8);
            v14[11] = *(float*)(v22 + 12);
            *((_DWORD*)v14 + 12) = *(_QWORD*)(v22 + 16);
            v14[13] = *(float*)(v22 + 20);
            *((_DWORD*)v14 + 14) = *(_QWORD*)(v22 + 24);
            v23 = *(_DWORD*)(v22 + 28);
            v22 += 64;
            *((_DWORD*)v14 + 15) = v23;
            v14 += 16;
          } while (v21 != 0);
        }
      }
    }
    *(_QWORD*)result = v14;
  }
  return result;
}

__int64 SdkHr_6953c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int32x4_t v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;

  v1 = *(unsigned int*)(a1 + 76);
  if ((_DWORD)v1 == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(unsigned int*)(a1 + 72);
  if ((unsigned int)v1 < 8) {
    v3 = 0;
    v4 = -1;
    goto LABEL_8;
  }
  ((uint64_t*)&v6)[0] = -1;
  ((uint64_t*)&v6)[1] = -1;
  ((uint64_t*)&v7)[0] = -1;
  ((uint64_t*)&v7)[1] = -1;
  v3 = (unsigned int)v1 & 0xFFFFFFF8;
  v8 = v3;
  v9 = (int32x4_t*)(v2 + 4 * v1 + a1 + 16);
  do {
    v10 = v9[-1];
    v11 = *v9;
    v8 -= 8;
    v9 += 2;
    v6 = vmaxq_s32(v6, v10);
    v7 = vmaxq_s32(v7, v11);
  } while (v8 != 0);
  v4 = vmaxvq_s32(vmaxq_s32(v6, v7));
  if (v3 != v1) {
  LABEL_8:
    v12 = 4 * v3 + 4 * v1;
    v13 = v1 - v3;
    v14 = (int*)(a1 + v2 + v12);
    do {
      v16 = *v14++;
      v15 = v16;
      if (v4 <= v16) {
        v4 = v15;
      }
      --v13;
    } while (v13 != 0);
  }
  return (unsigned int)v4;
}

__int64 SdkHr_69dc00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  bool v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int32x2_t v47;
  _DWORD v48[8];

  result = 0;
  if (a2 == 0 || a1 == 0 || a3 == 0) {
    return result;
  }
  SdkRoutine_858d40(a1 + 2440);
  v7 = *(_DWORD*)(a1 + 2424);
  if (v7 == 0) {
    goto LABEL_51;
  }
  v8 = 0;
  while (1) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 2416) + 8LL * v8);
    v10 = *(_QWORD*)(v9 + 24);
    v11 = *(_QWORD*)(v9 + 56);
    v12 = a2 - v10;
    if (a2 >= v10 && a2 < v11 + v10) {
      break;
    }
    if (v7 == ++v8) {
      goto LABEL_51;
    }
  }
  if (*(_DWORD*)v9 == 0 && (*(_BYTE*)(v9 + 16) & 1) != 0 ||
      (v14 = *(_QWORD*)(v9 + 48)) == 0) {
  LABEL_51:
    SdkRoutine_858d50(a1 + 2440);
    return 0;
  }
  SdkRoutine_858d50(a1 + 2440);
  v15 = (_QWORD*)((v12 + v14) & 0xFFFFFFFFFFFFFF00LL);
  if ((unsigned __int64)v15 >= v11 + v14) {
    return 0;
  }
  v16 = v14 - v10 - (_QWORD)v15 - 128;
  while (*v15 != 0x1234567800FF7802LL || v15[1] != 0xFC00000000F00LL) {
    v15 += 16;
    v16 -= 128;
    if ((unsigned __int64)v15 >= v11 + v14) {
      return 0;
    }
  }
  v48[0] = 305419896;
  if ((v15[2] & 0x1FFLL) != 2) {
    goto LABEL_54;
  }
  v17 = v15[2] & 0xFFFFFE02LL;
  v18 = HIDWORD(v15[2]);
  v19 = v17 == 16742402 && v15[3] == 0xFC00000000F00LL;
  if (v17 != 16742402 || v15[3] != 0xFC00000000F00LL) {
    LODWORD(v18) = 0;
  }
  v48[1] = v18;
  if (v19) {
    if ((v15[4] & 0x1FFLL) != 2) {
      goto LABEL_60;
    }
    v20 = v15[4] & 0xFFFFFE02LL;
    v21 = HIDWORD(v15[4]);
    v22 = v20 == 16742402 && v15[5] == 0xFC00000000F00LL;
    if (v20 != 16742402 || v15[5] != 0xFC00000000F00LL) {
      LODWORD(v21) = 0;
    }
    v48[2] = v21;
    if (v22) {
      if ((v15[6] & 0x1FFLL) != 2) {
        goto LABEL_61;
      }
      v23 = v15[6] & 0xFFFFFE02LL;
      v24 = HIDWORD(v15[6]);
      v25 = v23 == 16742402 && v15[7] == 0xFC00000000F00LL;
      if (v23 != 16742402 || v15[7] != 0xFC00000000F00LL) {
        LODWORD(v24) = 0;
      }
      v48[3] = v24;
      if (v25) {
        if ((v15[8] & 0x1FFLL) != 2) {
          goto LABEL_62;
        }
        v26 = v15[8] & 0xFFFFFE02LL;
        v27 = HIDWORD(v15[8]);
        v28 = v26 == 16742402 && v15[9] == 0xFC00000000F00LL;
        if (v26 != 16742402 || v15[9] != 0xFC00000000F00LL) {
          LODWORD(v27) = 0;
        }
        v48[4] = v27;
        if (v28) {
          if ((v15[10] & 0x1FFLL) != 2) {
            goto LABEL_63;
          }
          v29 = v15[10] & 0xFFFFFE02LL;
          v30 = HIDWORD(v15[10]);
          v31 = v29 == 16742402 && v15[11] == 0xFC00000000F00LL;
          if (v29 != 16742402 || v15[11] != 0xFC00000000F00LL) {
            LODWORD(v30) = 0;
          }
          v48[5] = v30;
          if (v31) {
            if ((v15[12] & 0x1FFLL) != 2) {
              goto LABEL_64;
            }
            v32 = v15[12] & 0xFFFFFE02LL;
            v33 = HIDWORD(v15[12]);
            v34 = v32 == 16742402 && v15[13] == 0xFC00000000F00LL;
            if (v32 != 16742402 || v15[13] != 0xFC00000000F00LL) {
              LODWORD(v33) = 0;
            }
            v48[6] = v33;
            if (v34) {
              if ((v15[14] & 0x1FFLL) == 2) {
                v35 = HIDWORD(v15[14]);
                v37 = (v15[14] & 0xFFFFFE02LL) == 16742402 &&
                      v15[15] == 0xFC00000000F00LL;
                v36 = v37 == 0;
                if (v37 == 0) {
                  LODWORD(v35) = 0;
                }
                v48[7] = v35;
                v38 = v37 << 31 >> 31;
                v39 = v36 ? 28LL : 32LL;
              }
              else {
                LOBYTE(v38) = 0;
                v39 = 28;
              }
            }
            else {
            LABEL_64:
              LOBYTE(v38) = 0;
              v39 = 24;
            }
          }
          else {
          LABEL_63:
            LOBYTE(v38) = 0;
            v39 = 20;
          }
        }
        else {
        LABEL_62:
          LOBYTE(v38) = 0;
          v39 = 16;
        }
      }
      else {
      LABEL_61:
        LOBYTE(v38) = 0;
        v39 = 12;
      }
    }
    else {
    LABEL_60:
      LOBYTE(v38) = 0;
      v39 = 8;
    }
  }
  else {
  LABEL_54:
    LOBYTE(v38) = 0;
    v39 = 4;
  }
  if ((v38 & 1) == 0) {
    return 0;
  }
  SdkRoutine_856130(&v44, v48, v39);
  v40 = HIDWORD(v44);
  if (v16 + HIDWORD(v44) == 0) {
    return 0;
  }
  v41 = v45;
  *(_DWORD*)(a3 + 12) = 0;
  *(_DWORD*)(a3 + 16) = v40;
  v42 = -v16 - v40;
  v43 = v46;
  *(_QWORD*)a3 = v42;
  *(_QWORD*)(a3 + 36) = v41;
  *(_DWORD*)(a3 + 8) = v43;
  if (v43 == 8) {
    *(int32x2_t*)(a3 + 12) = vrev64_s32(v47);
  }
  return 1;
}

#pragma GCC visibility pop
