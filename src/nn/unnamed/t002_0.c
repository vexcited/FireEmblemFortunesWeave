#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int SdkData_10450c0;

extern char SdkData_10450c4;

extern __int64 SdkData_10450c8;

extern __int128 SdkData_bb1e60;

extern __int128 SdkData_bb3360;

extern _DWORD SdkData_c77cf4[5];

extern _DWORD SdkData_c925c0[5];

extern float SdkData_c925d4[7];

extern float SdkData_c925f0[7];

extern _DWORD SdkData_c92ba8[3];

extern _UNKNOWN* SdkData_e89ba0;

extern _UNKNOWN* SdkData_e89bd8;

__int64 SdkRoutine_64ac60(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_64b750(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_65ce80(_QWORD);

__int64 SdkRoutine_669460(void);

__int64 SdkRoutine_669550(void);

__int64 SdkRoutine_669c40(_QWORD, _QWORD);

__int64 SdkRoutine_669f00(_QWORD);

__int64 SdkRoutine_669f10(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_669f40(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_66a6d0(_QWORD, _QWORD);

__int64 SdkRoutine_66cfa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_67a390(_QWORD, _QWORD);

unsigned __int64 SdkRoutine_6863c0(__int64, _DWORD*);

__int64 SdkRoutine_686c00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_686d90(__int64, __int64, unsigned int*, unsigned int,
                          __int64);

__int64 SdkRoutine_696a70(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_699440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_6a9c00(__int64);

__int64 SdkRoutine_6adbf0(_QWORD);

__int64 SdkRoutine_86acf0(void);

__int64 SdkRoutine_86ad00(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_86ad40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_875d30(_QWORD);

__int64 SdkRoutine_876530(_QWORD);

__int64 SdkRoutine_876550(_QWORD, _QWORD);

__int64 SdkRoutine_876560(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876570(_QWORD);

__int64 SdkRoutine_876580(_QWORD);

__int64 SdkRoutine_8765a0(_QWORD, _QWORD);

__int64 SdkRoutine_8765b0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8767c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8767d0(_QWORD, _QWORD);

__int64 SdkRoutine_8767e0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8767f0(_QWORD, _QWORD);

__int64 SdkRoutine_876830(_QWORD, _QWORD);

__int64 SdkRoutine_876850(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8768b0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8768c0(void);

__int64 SdkRoutine_8768d0(void);

__int64 SdkRoutine_8768e0(void);

__int64 SdkRoutine_876900(void);

__int64 SdkRoutine_876910(void);

__int64 SdkRoutine_876930(_QWORD, _QWORD);

__int64 SdkRoutine_8769c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8769d0(_QWORD);

__int64 SdkRoutine_8769e0(_QWORD, _QWORD);

__int64 SdkRoutine_8769f0(void);

__int64 SdkRoutine_876a00(void);

__int64 SdkRoutine_876a10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);

__int64 SdkRoutine_876a30(void);

__int64 SdkRoutine_876a80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkHr_681b60(__int64 result, int a2, int a3, __int64 a4)
{
  __int64 v5;
  __int64* v8;
  float* v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  float v13;
  float v14;
  float v15;
  float v16;
  int v17;
  int v18;
  float v19;

  v5 = *(_QWORD*)result;
  v8 = (__int64*)result;
  if (*(_QWORD*)result + 4 * (unsigned __int64)(unsigned int)(7 * a3) >
      *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(
        result, v5, 4LL * (unsigned int)(*(_DWORD*)(result + 104) + 7 * a3));
    v5 = *v8;
  }
  if (a3 >= 1) {
    v9 = (float*)(a4 + 4);
    v10 = (unsigned int)a3;
    v11 = 16 * a2 + 3080;
    v12 = 32 * a2 + 2580;
    do {
      v13 = *(v9 - 1);
      v14 = *v9;
      v9 += 2;
      v15 = v14 - v13;
      v16 = (float)(v13 + v14) * 0.5;
      if (*(_DWORD*)(v8[14] + 4) == 1) {
        v16 = v13;
      }
      else {
        v15 = (float)(v14 - v13) * 0.5;
      }
      *(_DWORD*)v5 = ((v12 - 12) >> 2) | 0x20010000;
      v17 = (v12 >> 2) | 0x20010000;
      v12 += 32;
      *(_DWORD*)(v5 + 8) = v17;
      v18 = (v11 >> 2) | 0x20020000;
      v11 += 16;
      *(float*)(v5 + 4) = v15;
      if (v13 >= v14) {
        v19 = v14;
      }
      else {
        v19 = v13;
      }
      if (v13 <= v14) {
        v13 = v14;
      }
      *(float*)(v5 + 12) = v16;
      *(_DWORD*)(v5 + 16) = v18;
      --v10;
      *(float*)(v5 + 20) = v19;
      *(float*)(v5 + 24) = v13;
      v5 += 28;
    } while (v10 != 0);
  }
  *v8 = v5;
  return result;
}

__int64 SdkHr_682f70(__int64 a1, unsigned int a2, unsigned int a3)
{
  _DWORD* v3;
  char v7;
  __int64 result;

  v3 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 8LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, *(_QWORD*)a1,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 2));
    v3 = *(_DWORD**)a1;
  }
  if ((unsigned int)SdkRoutine_65ce80(a2) < 4 ||
      (unsigned int)SdkRoutine_65ce80(a2) <= 0xF) {
    if ((unsigned int)SdkRoutine_65ce80(a2) >= 4) {
      v7 = SdkRoutine_65ce80(a2);
    }
    else {
      v7 = 4;
    }
  }
  else {
    v7 = 15;
  }
  if ((unsigned int)SdkRoutine_65ce80(a3) < 4 ||
      (unsigned int)SdkRoutine_65ce80(a3) <= 0xF) {
    if ((unsigned int)SdkRoutine_65ce80(a3) >= 4) {
      result = SdkRoutine_65ce80(a3);
    }
    else {
      result = 4;
    }
  }
  else {
    result = 15;
  }
  *v3 = 536937433;
  v3[1] = (0x10000 << result) & 0xFFFF0000 | (unsigned __int16)(1 << v7);
  *(_QWORD*)a1 = v3 + 2;
  return result;
}

__int64 SdkHr_686d90(__int64 a1, __int64 a2, unsigned int* a3, unsigned int a4,
                     __int64 a5)
{
  unsigned int v5;
  unsigned int v7;
  unsigned int v8;
  signed int v9;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned int v13;
  signed int v14;
  unsigned __int64 v16;
  unsigned int v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  char v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;

  v5 = a3[5];
  if (v5 != 0) {
    v7 = a3[3];
    v8 = a3[1];
    v9 = v8 + v7;
    if (v7 == -1 || v9 == -1) {
      v12 = 0;
    }
    else {
      v12 = ((unsigned __int64)*a3 << 8) + v9;
    }
    v11 = ((v5 << 15) + 8355840) & 0xFF800000;
  }
  else {
    v8 = a3[1];
    v12 = 0;
    v11 = 0;
  }
  v13 = a3[2];
  v14 = v8 + v13;
  if (v13 == -1 || v14 == -1) {
    v16 = 0;
  }
  else {
    v16 = ((unsigned __int64)*a3 << 8) + v14;
  }
  v17 = a3[18];
  v18 = *(_DWORD*)(a1 + 256);
  if (v18 < 2) {
    *(_QWORD*)(a1 + 248) = __ROR8__(a5, 32);
    v20 = 192;
    *(_DWORD*)(a1 + 196) =
        HIDWORD(v16) & 0x1FFFF | (*(_DWORD*)(a1 + 196) >> 17 << 17);
  }
  else {
    v19 = v16 >> 36;
    v16 >>= 4;
    v20 = 128;
    *(_DWORD*)(a1 + 132) = v19 & 0x1FFFFF | (*(_DWORD*)(a1 + 132) >> 21 << 21);
  }
  *(_DWORD*)(a1 + v20) = v16;
  v21 = 80;
  v22 = v17 + 255;
  if (v18 == 2) {
    v21 = 140;
  }
  *(_DWORD*)(a1 + v21) =
      *(_DWORD*)(a1 + v21) & 0xFFFE00FF | ((a4 & 0x1FF) << 8);
  if (v18 <= 1) {
    *(_DWORD*)(a1 + 68) = *(_DWORD*)(a1 + 68) & 0xFFFC0000 | v22 & 0x3FF00;
    v24 = a3 + 15;
    v28 = *((unsigned __int16*)a3 + 32);
    v29 = a3[17];
    *(_WORD*)(a1 + 74) = *((_WORD*)a3 + 30);
    v30 = v28 | (v29 << 16);
    LOBYTE(v28) = *(_BYTE*)(a1 + 95);
    *(_DWORD*)(a1 + 76) = v30;
    v31 = a3[19] & 0xFFFFFF | ((unsigned __int8)v28 << 24);
    *(_DWORD*)(a1 + 92) = v31;
    v27 = a3[20];
  }
  else {
    v23 = *(_DWORD*)(a1 + 140) & 0xFFFFFF00;
    *(_DWORD*)(a1 + 144) =
        *(_DWORD*)(a1 + 144) & 0xFFFFF800 | (v22 >> 7) & 0x7FE;
    v24 = a3 + 15;
    v25 = v23 | *((unsigned __int8*)a3 + 68);
    *(_DWORD*)(a1 + 136) = *((unsigned __int16*)a3 + 30) | (a3[16] << 16);
    *(_DWORD*)(a1 + 140) = v25;
    v26 = a3[19];
    *(_WORD*)(a1 + 148) = v26 >> 4;
    v27 = a3[20];
    if (v18 == 2) {
      *(_DWORD*)(a1 + 148) =
          (unsigned __int16)(v26 >> 4) | ((unsigned __int16)(v27 >> 4) << 16);
      *(_DWORD*)(a1 + 140) = v25 & 0xFFC1FFFF | ((a3[22] & 0x1F) << 17);
      goto LABEL_27;
    }
    v31 = *(_DWORD*)(a1 + 92);
  }
  *(_DWORD*)(a1 + 200) = v27 & 0xFFFFFF | (*(unsigned __int8*)(a1 + 203) << 24);
  *(_DWORD*)(a1 + 92) = v31 & 0x7FFFFFF | ((unsigned __int8)a3[22] << 27);
  if (v18 < 2) {
    v37 = *(_DWORD*)(a1 + 80);
    v32 = 32;
    v33 = 35;
    *(_DWORD*)(a1 + 136) = v12;
    if (v5 != 0) {
      v38 = 2;
    }
    else {
      v38 = 0;
    }
    *(_DWORD*)(a1 + 80) = v37 & 0xFFFFFFFD | v38;
    v36 = 0x1FFFF;
    v35 = -131072;
    goto LABEL_35;
  }
LABEL_27:
  v32 = 38;
  v33 = 45;
  if (v5 != 0) {
    v34 = 16;
  }
  else {
    v34 = 0;
  }
  *(_DWORD*)(a1 + 232) = *(_DWORD*)(a1 + 232) & 0xFFFFFFEF | v34;
  v35 = -524288;
  *(_DWORD*)(a1 + 176) = v12 >> 6;
  v36 = 0x7FFFF;
LABEL_35:
  *(_DWORD*)(a1 + 4 * v33) =
      *(_DWORD*)(a1 + 4 * v33) & v35 | v36 & (v12 >> v32);
  v39 = 140;
  if (v18 > 1) {
    v39 = 180;
  }
  *(_DWORD*)(a1 + v39) = *(_DWORD*)(a1 + v39) & 0x7FFFF | v11;
  return SdkRoutine_686c00(a2, v24, a4, v22 & 0xFFFFFF00, a1);
}

__int64 SdkHr_688090(__int64 result, __int64 a2, _DWORD* a3, unsigned int a4,
                     __int64 a5, char a6)
{
  __int64 v9;
  int v10;
  _DWORD* v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  _OWORD* v31;
  _DWORD* v32;

  v9 = result;
  if ((a6 & 1) != 0 || (*(_WORD*)(result + 360) & 3) != 0) {
    if (a2 != 0) {
      v10 = *(unsigned __int8*)(a2 + 32);
      v11 = *(_DWORD**)(result + 16);
      if ((*(_BYTE*)(result + 11408) & 1) != 0) {
        goto LABEL_11;
      }
      v13 = v11[44];
      v12 = v11[45];
      v14 = *(_DWORD*)(a2 + 52);
      if (v14 <= *(_DWORD*)(result + 7876)) {
        v16 = v11[43];
        v15 = 256;
        if (v16 != 0) {
        LABEL_7:
          if (v15 != *(_DWORD*)(result + 4280)) {
            v17 =
                ((*(_DWORD*)(result + 7872) / (v16 * v13 * v12)) & 0xFFFFFE00) *
                v13 * v12;
            v18 = *(_QWORD*)(result + 11240);
            if ((unsigned __int64)(v18 + 16) > *(_QWORD*)(result + 11248)) {
              v32 = *(_DWORD**)(result + 16);
              v19 = a5;
              v20 = a4;
              SdkRoutine_64b750(
                  result + 11240, v18,
                  4LL * (unsigned int)(*(_DWORD*)(result + 11344) + 4));
              v11 = v32;
              v18 = *(_QWORD*)(v9 + 11240);
              a5 = v19;
              a4 = v20;
            }
            *(_DWORD*)(v18 + 8) = v17;
            *(_DWORD*)(v18 + 12) = v15;
            *(_QWORD*)v18 = 537075897;
            *(_DWORD*)(v9 + 4280) = v15;
            *(_QWORD*)(v9 + 11240) = v18 + 16;
          }
        LABEL_11:
          result = SdkRoutine_686d90((__int64)a3, (__int64)v11,
                                     (unsigned int*)a2, a4, a5);
          v21 = a3[64];
          if ((*(_BYTE*)(v9 + 356) & 4) != 0) {
            if (v21 == 2) {
              v22 = a3[19] | 0x80000;
              goto LABEL_16;
            }
            v29 = a3[16] | 0x80000000;
          }
          else {
            if (v21 == 2) {
              v22 = a3[19] & 0xFFF7FFFF;
            LABEL_16:
              v23 = -261121;
              a3[19] = v22;
              v24 = 66846720;
              v25 = -66846721;
              v26 = 23;
              v27 = 22;
              v28 = 22;
              goto LABEL_22;
            }
            v29 = a3[16] & 0x7FFFFFFF;
          }
          v23 = -2139095041;
          a3[16] = v29;
          v24 = 65280;
          v25 = -65281;
          v28 = 16;
          v26 = 56;
          v27 = 18;
        LABEL_22:
          a3[v27] = a3[v27] & v25 | v24;
          a3[v26] |= 0xFF00FF00;
          a3[v28] &= v23;
          a3[v26] = -12517616;
          v30 = *(unsigned __int8*)(a2 + 32);
          if (*(_BYTE*)(a2 + 32) == 0 && v10 != 0) {
            *(_WORD*)(v9 + 360) |= 0x1D8u;
            v30 = *(unsigned __int8*)(a2 + 32);
          }
          if (v30 == 1 && v10 != 1) {
            v31 = *(_OWORD**)(v9 + 11240);
            if ((unsigned __int64)(v31 + 1) > *(_QWORD*)(v9 + 11248)) {
              result = SdkRoutine_64b750(
                  v9 + 11240, v31,
                  4LL * (unsigned int)(*(_DWORD*)(v9 + 11344) + 4));
              v31 = *(_OWORD**)(v9 + 11240);
            }
            *v31 = SdkData_bb3360;
            *(_QWORD*)(v9 + 11240) = v31 + 1;
          }
          goto LABEL_30;
        }
      }
      else {
        v15 = *(_DWORD*)(result + 7872) / (v13 * v12 * v14);
        v16 = v15;
        if (v15 != 0) {
          goto LABEL_7;
        }
      }
    }
    *(_WORD*)(result + 360) &= 0xFCFFu;
    return result;
  }
LABEL_30:
  if (*(_BYTE*)(a2 + 32) == 0 && (*(_WORD*)(v9 + 360) & 0x58) != 0) {
    result = SdkRoutine_6863c0(v9, (_DWORD*)(v9 + 4284));
  }
  if (*(_BYTE*)(v9 + 11408) == 1 && (a6 & 1) == 0 &&
      (*(_BYTE*)(v9 + 5977) & 1) != 0) {
    result = SdkRoutine_67a390(v9 + 11240, *(_QWORD*)(v9 + 368));
  }
  *(_DWORD*)(v9 + 360) = 512;
  return result;
}

__int64 SdkHr_6975b0(__int64 a1, __int64 a2, _BYTE* a3, __int64 a4, __int64 a5)
{
  _DWORD* v6;
  _DWORD* v7;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  int v30;
  unsigned __int64 v31;
  float v32;
  float v33;
  unsigned int v34;
  int v35;
  _DWORD* v36;
  int v38;
  __int64 result;
  _DWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _DWORD v44[11];
  int v45;
  char v46;
  int v47;
  int v48;
  int v49;
  int v50;
  _QWORD v51[4];
  _BYTE v52[16];

  v6 = *(_DWORD**)a1;
  v7 = *(_DWORD**)(a1 + 112);
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, v6, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v6 = *(_DWORD**)a1;
  }
  v12 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v12 <= 4) {
    *v6++ = SdkData_c925c0[v12];
  }
  *(_QWORD*)a1 = v6;
  if (a3 == nullptr || a5 == 0) {
    SdkRoutine_669f00(v52);
    SdkRoutine_669f10(v52, 0, 1);
    SdkRoutine_669f40(v52, 0, 1);
    SdkRoutine_669c40(v52, 7);
    if (a3 == nullptr) {
      a3 = v52;
    }
  }
  SdkRoutine_699440(v7, a2, a3, v51, 0, 1);
  v42 = a4;
  SdkRoutine_66a6d0(a4, v44);
  if (v44[6] == 2) {
    v13 = v44[9];
    v14 = (v44[8] + v48 * (64 / v49) - 1) & -(v48 * (64 / v49));
    v15 = v45 & 0xF | (unsigned __int8)(16 * (v46 & 0xF)) | ((v47 & 0xF) << 8);
  }
  else {
    v14 = v44[2];
    v13 = v44[4];
    v15 = 4096;
  }
  v17 = v44[0];
  v16 = v44[1];
  v18 = *((_DWORD*)SdkData_e89ba0 + 12 * v50 + 8);
  v19 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 104LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, *(_QWORD*)a1,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 26));
    v19 = *(_DWORD**)a1;
  }
  v20 = (int)v7[644];
  v21 = (int)v7[643] + v20;
  if ((_DWORD)v20 == -1 || (_DWORD)v21 == -1) {
    v23 = 0;
  }
  else {
    v23 = v21 + ((unsigned __int64)(unsigned int)v7[642] << 8);
  }
  v19[2] = v23;
  v24 = v15 | (v18 << 24);
  v25 = 0;
  *v19 = 537004053;
  v19[1] = HIDWORD(v23);
  v26 = (int)v7[654];
  if ((_DWORD)v26 != -1) {
    v27 = (int)v7[653] + v26;
    if ((_DWORD)v27 != -1) {
      v25 = v27 + ((unsigned __int64)(unsigned int)v7[652] << 8);
    }
  }
  v19[5] = v25;
  v19[8] = v16;
  v19[9] = v17;
  v19[10] = v14;
  v19[11] = v13;
  v28 = 1.0;
  v29 = 1.0;
  v19[3] = 537004117;
  v19[4] = HIDWORD(v25);
  v19[12] = v24;
  *((_QWORD*)v19 + 3) = 0xA0050E3280020049LL;
  v19[13] = (v7[650] << 16) | 0x80000813;
  v30 = v7[660];
  v19[17] = -2147418039;
  v19[14] = (v30 << 16) | 0x80000853;
  *(_QWORD*)(v19 + 15) = 0x8000085780000817LL;
  v31 = *(_QWORD*)(a2 + 32);
  v32 = (float)((v31 >> 31) & 0x1FFFE);
  v33 = (float)(unsigned int)v31 + (float)(unsigned int)v31;
  v34 = *(char*)(a2 + 31) - 2;
  if (v34 <= 6) {
    v28 = SdkData_c925d4[v34];
    v29 = SdkData_c925f0[v34];
  }
  *((float*)v19 + 20) = v33;
  *((float*)v19 + 21) = v32;
  v35 = v44[5];
  v36 = v19 + 25;
  *((float*)v19 + 22) = v33 * v28;
  *((float*)v19 + 23) = v29 * v32;
  *((_QWORD*)v19 + 9) = 0x200408E481980E36LL;
  if (v35 > 1 && (*(_QWORD*)(v42 + 40) & 0xFE000000LL) == 0x4000000) {
    v38 = -2147414380;
  }
  else {
    v38 = -2147479916;
  }
  v19[24] = v38;
  *(_QWORD*)a1 = v36;
  result = SdkRoutine_64ac60(a1, &v43, 40);
  *(_BYTE*)v43 = 22;
  *(_DWORD*)(v43 + 4) = *(char*)(a2 + 31);
  qmemcpy((void*)(v43 + 8), v51, 32);
  if ((unsigned __int64)(v19 + 41) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(a1, v19 + 25,
                               4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 16));
    v36 = *(_DWORD**)a1;
  }
  v36[2] = v16;
  v36[3] = v17;
  v36[4] = v14;
  v36[5] = v13;
  v40 = v36 + 15;
  v36[6] = v24;
  *(_QWORD*)v36 = 0xA0050E3280030049LL;
  *(_OWORD*)(v36 + 7) = SdkData_bb1e60;
  v36[13] = -2147152358;
  v36[14] = v38;
  *(_QWORD*)(v36 + 11) = 0x80010E1A80010049LL;
  *(_QWORD*)a1 = v36 + 15;
  if ((unsigned __int64)(v36 + 16) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(a1, v40,
                               4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v40 = *(_DWORD**)a1;
  }
  v41 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v41 <= 4) {
    *v40++ = SdkData_c77cf4[v41];
  }
  *(_QWORD*)a1 = v40;
  return result;
}

__int64 SdkHr_6a1420(__int64 result, __int64 a2, int a3)
{
  int v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a3 == 2) {
    v4 = 1;
  }
  else {
    v4 = a3;
  }
  if ((*(_BYTE*)(*(_QWORD*)(result + 16) + 10LL) & 8) != 0) {
    v5 = v4;
  }
  else {
    v5 = a3;
  }
  if (v5 > 1) {
    if (v5 != 2) {
      if (v5 == 3) {
        v8 = *(_QWORD*)(result + 11240);
        if ((unsigned __int64)(v8 + 48) > *(_QWORD*)(result + 11248)) {
          v9 = result;
          SdkRoutine_64b750(
              result + 11240, v8,
              4LL * (unsigned int)(*(_DWORD*)(result + 11344) + 12));
          v8 = *(_QWORD*)(v9 + 11240);
          result = v9;
        }
        *(_QWORD*)(v8 + 12) = 0;
        *(_QWORD*)(v8 + 4) = 0;
        *(_DWORD*)v8 = 537198688;
        *(_QWORD*)(v8 + 20) = 0x2003007700000000LL;
        *(_DWORD*)(v8 + 28) = HIDWORD(a2);
        *(_DWORD*)(v8 + 32) = a2;
        *(_DWORD*)(v8 + 44) = 33;
        *(_QWORD*)(v8 + 36) = 0x2001006C00000000LL;
        *(_QWORD*)(result + 11240) = v8 + 48;
      }
      return result;
    }
    return SdkRoutine_669460();
  }
  if (v5 == 0) {
    v7 = 16;
    return SdkRoutine_696a70(result + 11240, v7, a2);
  }
  if (v5 == 1) {
    v6 = *(_DWORD*)(result + 356);
    if ((v6 & 4) == 0) {
      if ((v6 & 0x10) == 0) {
        v7 = 0;
        return SdkRoutine_696a70(result + 11240, v7, a2);
      }
      return SdkRoutine_669550();
    }
    return SdkRoutine_669460();
  }
  return result;
}

__int64 SdkHr_6a5310(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                     unsigned int a5)
{
  if (result != 0) {
    return SdkRoutine_66cfa0(result, *(_QWORD*)(result + 2536), a2, a3, a4, a5);
  }
  return result;
}

__int64 SdkHr_6a9340(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  int v5;
  __int64 v7;
  __int64 v8;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[1] == 0) {
    v7 = v4[3];
    v8 = 0;
    if (v7 != 0) {
      if ((unsigned int)SdkRoutine_876830(v7, &v8) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v8) != 0) {
      return 7;
    }
    v4[1] = v8;
  }
  v5 = SdkRoutine_8768c0();
  if (*(_BYTE*)(a1 + 16) != 0) {
    *(_BYTE*)(a1 + 17) = v5 == 0;
  }
  if (v5 != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6a9480(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int* v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v11;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_DWORD*)(a1 + 4);
  *(_DWORD*)(a1 + 12) = 0;
  if (v4 != 1) {
    return 5;
  }
  v11 = 0;
  v5 = (int*)SdkRoutine_876550(SdkData_10450c8, &v11);
  v6 = v11;
  LODWORD(v7) = 1;
  if (v11 != 0 && v5 != nullptr) {
    v7 = *(_QWORD*)(a1 + 16);
    *(_DWORD*)(a1 + 12) = v11;
    if (v7 != 0) {
      if (v6 != 0) {
        v8 = 0;
        do {
          if (v8 >= *(unsigned int*)(a1 + 8)) {
            break;
          }
          v9 = *v5;
          v5 += 4;
          *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v8++) = v9;
        } while (v8 < *(unsigned int*)(a1 + 12));
      }
      LODWORD(v7) = 0;
    }
  }
  return (unsigned int)v7;
}

__int64 SdkHr_6a95c0(__int64 a1)
{
  int v2;
  __int64 v3;
  _DWORD* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  _DWORD* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned __int64 v16;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_DWORD*)a1 < 0x11u) {
    return 5;
  }
  v4 = *(_DWORD**)(a1 + 16);
  if (v4 != nullptr && *v4 < 0x1Du) {
    return 5;
  }
  v5 = *(_DWORD*)(a1 + 4);
  v16 = 0;
  v6 = SdkRoutine_876550(SdkData_10450c8, &v16);
  if (v16 == 0 || v6 == 0) {
    return 5;
  }
  v7 = 0;
  v8 = 0;
  while (v5 != *(_DWORD*)(v6 + 16 * v7)) {
    v7 = ++v8;
    if (v16 <= v8) {
      return 5;
    }
  }
  if ((unsigned int)SdkRoutine_876560(SdkData_10450c8, *(unsigned int*)(a1 + 4),
                                      0, &v16) != 0) {
    return 1;
  }
  v10 = (_DWORD*)SdkRoutine_876580(v16);
  if (v10 != nullptr) {
    v11 = *(_QWORD*)(a1 + 16);
    if (v11 != 0) {
      *(_DWORD*)(v11 + 28) = *(_DWORD*)(a1 + 4);
      *(_DWORD*)(a1 + 8) = v8;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = 0;
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4LL) = v10[52];
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 8LL) = v10[53];
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12LL) = v10[54];
      v12 = v10[133];
      v13 = *(_QWORD*)(a1 + 16);
      *(_DWORD*)(v13 + 16) = BYTE1(v12);
      if ((_BYTE)v12 != 0) {
        if ((v12 & 0xF0) != 0) {
          v14 = (unsigned __int8)(v12 & 0xF0) >> 4;
        }
        else {
          v14 = v12 & 0xF;
        }
      }
      else {
        v14 = 0;
      }
      v15 = 0;
      *(_DWORD*)(v13 + 20) = v14;
    }
    else {
      v15 = 0;
    }
  }
  else {
    v15 = 1;
  }
  SdkRoutine_876570(v16);
  return v15;
}

__int64 SdkHr_6a9920(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if ((unsigned int)SdkRoutine_876560(SdkData_10450c8, *(unsigned int*)(a1 + 4),
                                      0, &v14) != 0) {
    return 1;
  }
  v5 = SdkRoutine_876580(v14);
  if (v5 != 0 && *(_QWORD*)(v5 + 568) != 0) {
    v6 = *(_DWORD*)(v5 + 528);
    v7 = *(_QWORD*)(a1 + 16);
    v8 = 0;
    *(_DWORD*)(a1 + 12) = v6;
    if (v7 != 0 && v6 != 0) {
      v9 = 0;
      v10 = 0;
      do {
        v11 = (unsigned int)(*(_DWORD*)(a1 + 8) * v10++);
        v12 = (_DWORD*)(*(_QWORD*)(a1 + 16) + v11);
        *v12 = *(unsigned __int8*)(*(_QWORD*)(v5 + 568) + v9);
        v13 = *(_QWORD*)(v5 + 568) + v9;
        v9 += 6;
        v12[1] = *(unsigned __int8*)(v13 + 1);
      } while (v10 < *(unsigned int*)(v5 + 528));
      v8 = 0;
    }
  }
  else {
    v8 = 1;
  }
  SdkRoutine_876570(v14);
  return v8;
}

__int64 SdkHr_6a9ae0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[1] == 0) {
    v6 = v4[3];
    v7 = 0;
    if (v6 != 0) {
      if ((unsigned int)SdkRoutine_876830(v6, &v7) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v7) != 0) {
      return 7;
    }
    v4[1] = v7;
  }
  if ((unsigned int)SdkRoutine_8768d0() != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6a9c00(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[1] == 0) {
    v6 = v4[3];
    v7 = 0;
    if (v6 != 0) {
      if ((unsigned int)SdkRoutine_876830(v6, &v7) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v7) != 0) {
      return 7;
    }
    v4[1] = v7;
  }
  if ((unsigned int)SdkRoutine_8768e0() != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6a9d20(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  _QWORD v6[2];

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v6[1] = *(_QWORD*)(a1 + 16);
  v4 = *(_DWORD*)(a1 + 4);
  LODWORD(v6[0]) = 16;
  HIDWORD(v6[0]) = v4;
  return SdkRoutine_6a9c00((__int64)v6);
}

__int64 SdkHr_6a9e00(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[1] == 0) {
    v6 = v4[3];
    v7 = 0;
    if (v6 != 0) {
      if ((unsigned int)SdkRoutine_876830(v6, &v7) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v7) != 0) {
      return 7;
    }
    v4[1] = v7;
  }
  if ((unsigned int)SdkRoutine_876900() != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6aa020(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int16 v6;
  char v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_DWORD*)(a1 + 4);
  v7 = 0;
  v6 = 0;
  switch (v4) {
  case 3:
    v7 = 1;
    break;
  case 2:
    v6 = 257;
    break;
  case 1:
    LOBYTE(v6) = 1;
    break;
  default:
    return 5;
  }
  if ((unsigned int)SdkRoutine_8765a0(**(_QWORD**)(a1 + 8), &v6) != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6aa580(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  v5 = v4[1];
  if (v5 == 0) {
    v7 = v4[3];
    v8 = 0;
    if (v7 != 0) {
      if ((unsigned int)SdkRoutine_876830(v7, &v8) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v8) != 0) {
      return 7;
    }
    v5 = v8;
    v4[1] = v8;
  }
  if ((unsigned int)SdkRoutine_876930(v5, *(_DWORD*)(a1 + 4) == 0) != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6aa7e0(__int64 a1)
{
  int v2;
  __int64 v3;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  *(_QWORD*)(a1 + 8) = 126;
  return 0;
}

__int64 SdkHr_6aa8a0(__int64 a1)
{
  int v2;
  __int64 v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 result;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[32];
  int v18;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(unsigned __int8*)(a1 + 16);
  v5 = *(_QWORD**)(a1 + 24);
  result = 6;
  v18 = 0;
  memset(v17, 0, 64);
  if (v4 >= 0x10) {
    v7 = 16;
  }
  else {
    v7 = v4;
  }
  v8 = *(_DWORD*)(a1 + 4);
  memset(&v17[8], 0, 192);
  if (v8 != 1) {
    if (v8 == 2) {
      if ((unsigned int)SdkRoutine_8767e0(*v5, &v18, v17, v7) != 0) {
        return 7;
      }
      else {
        if (v4 != 0) {
          v9 = v7 & 3;
          if (v4 >= 4) {
            v11 = 0;
            v10 = 0;
            do {
              v10 += 4;
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11) = v17[v11 / 8];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 8) = v17[v11 / 8 + 1];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 16) = v17[v11 / 8 + 2];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 24) = v17[v11 / 8 + 3];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 32) = v17[v11 / 8 + 4];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 40) = v17[v11 / 8 + 5];
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v11 + 48) = v17[v11 / 8 + 6];
              v12 = v17[v11 / 8 + 7];
              v13 = *(_QWORD*)(a1 + 8) + v11;
              v11 += 64LL;
              *(_QWORD*)(v13 + 56) = v12;
            } while (((16 * (_WORD)v7) & 0xFC0) != v11);
          }
          else {
            v10 = 0;
          }
          if ((v7 & 3) != 0) {
            v14 = 2 * v10;
            do {
              --v9;
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + v14 * 8) = v17[v14];
              v15 = v17[v14 + 1];
              v16 = *(_QWORD*)(a1 + 8) + v14 * 8;
              v14 += 2;
              *(_QWORD*)(v16 + 8) = v15;
            } while (v9 != 0);
          }
        }
        *(_BYTE*)(a1 + 16) = v7;
        return 0;
      }
    }
    else if (v8 != 3) {
      return 5;
    }
  }
  return result;
}

__int64 SdkHr_6aae80(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 16);
  if (v4[1] == 0) {
    v6 = v4[3];
    v7 = 0;
    if (v6 != 0) {
      if ((unsigned int)SdkRoutine_876830(v6, &v7) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v7) != 0) {
      return 7;
    }
    v4[1] = v7;
  }
  if ((unsigned int)SdkRoutine_8768e0() != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6aafa0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[3] != 0) {
    return 5;
  }
  if (v4[1] == 0) {
    v6 = 0;
    if ((unsigned int)SdkRoutine_8767f0(*v4, &v6) != 0) {
      return 7;
    }
    v4[1] = v6;
  }
  if ((unsigned int)SdkRoutine_8768d0() != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6ab0c0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v5;
  unsigned int v6;
  __int64 v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if ((unsigned int)SdkRoutine_876560(SdkData_10450c8, *(unsigned int*)(a1 + 4),
                                      0, &v7) != 0) {
    return 1;
  }
  v5 = SdkRoutine_876580(v7);
  if (v5 != 0) {
    v6 = 0;
    *(_OWORD*)(a1 + 8) = *(_OWORD*)(v5 + 488);
  }
  else {
    v6 = 1;
  }
  SdkRoutine_876570(v7);
  return v6;
}

__int64 SdkHr_6ab1e0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4 != nullptr) {
    v5 = v4[4];
    v9 = 0;
    v10 = 0;
    if (v5 != 0) {
      v10 = v5;
    }
    else if (v4[3] != 0) {
      v9 = v4[3];
    }
    v11 = 0;
    v7 = SdkRoutine_8769c0(*v4, &v9, &v11);
    if (v7 == 0) {
      v8 = v11;
      v4[5] = v11;
      SdkRoutine_8769e0(v8, v4 + 6);
      return 0;
    }
    if (v7 != 4) {
      if (v7 == 196623) {
        return 9;
      }
      else {
        return 7;
      }
    }
  }
  return 5;
}

__int64 SdkHr_6ab320(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  unsigned int v5;
  __int64 result;
  __int64 v7;
  char v8;
  __int64 v9;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4 == nullptr || v4[5] == 0) {
    return 5;
  }
  if (v4[1] == 0) {
    v7 = v4[3];
    v9 = 0;
    if (v7 != 0) {
      if ((unsigned int)SdkRoutine_876830(v7, &v9) != 0) {
        return 11;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v9) != 0) {
      return 11;
    }
    v4[1] = v9;
    if (v4[11] != 0) {
      goto LABEL_11;
    }
  LABEL_21:
    v5 = 0;
    goto LABEL_22;
  }
  if (v4[11] == 0) {
    goto LABEL_21;
  }
LABEL_11:
  v5 = SdkRoutine_6adbf0(v4);
LABEL_22:
  LODWORD(result) = SdkRoutine_8769d0(v4[5]);
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      LODWORD(result) = 9;
    }
    else if ((_DWORD)result == 4) {
      LODWORD(result) = 5;
    }
    else {
      LODWORD(result) = 7;
    }
    v8 = 1;
  }
  else {
    v8 = 0;
  }
  v4[5] = 0;
  if (((v5 == 0) & (unsigned __int8)v8) != 0) {
    return (unsigned int)result;
  }
  else {
    return v5;
  }
}

__int64 SdkHr_6ab4a0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0) {
    return 5;
  }
  result = SdkRoutine_8769f0();
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      return 9;
    }
    else {
      if ((_DWORD)result == 4) {
        return 5;
      }
      return 7;
    }
  }
  return result;
}

__int64 SdkHr_6ab5a0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0) {
    return 5;
  }
  result = SdkRoutine_8769f0();
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      return 9;
    }
    else {
      if ((_DWORD)result == 4) {
        return 5;
      }
      return 7;
    }
  }
  return result;
}

__int64 SdkHr_6ab6a0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _OWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _BYTE v25[4];
  __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned __int64 v30;
  int v31;
  char v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  unsigned __int64 v40;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4 == nullptr || v4[5] == 0) {
    return 5;
  }
  v5 = *(_QWORD*)(a1 + 8);
  if (v4[1] == 0) {
    v11 = v4[3];
    v26 = 0;
    if (v11 != 0) {
      if ((unsigned int)SdkRoutine_876830(v11, &v26) != 0) {
        return 11;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v26) != 0) {
      return 11;
    }
    v4[1] = v26;
    v5 = *(_QWORD*)(a1 + 8);
  }
  v6 = (_OWORD*)(*(__int64 (**)(__int64))SdkData_e89bd8)(32);
  if (v6 == nullptr) {
    v9 = 4;
    goto LABEL_31;
  }
  *v6 = 0u;
  v6[1] = 0u;
  *(_QWORD*)(v5 + 88) = v6;
  v7 = *(_QWORD*)(a1 + 24);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 > *(_QWORD*)(v5 + 64)) {
    v9 = 5;
    goto LABEL_31;
  }
  v12 = *(_QWORD*)(v7 + 40);
  if ((v12 & 0xFFF) != 0) {
    goto LABEL_29;
  }
  v13 = *(_DWORD*)(v7 + 4) - 1;
  if (v13 > 2) {
    goto LABEL_29;
  }
  v14 = *(_QWORD*)(v5 + 16);
  v15 = *(_QWORD*)(a1 + 32);
  v16 = v6;
  v27 = 0;
  v26 = 0;
  v32 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v37 = SdkRoutine_86acf0();
  v38 = 0;
  v30 = v8;
  v39 = 0u;
  v28 = 4096;
  v29 = v13;
  v31 = 2560;
  v40 = 0xFFFFFFFF00000003LL;
  if (v12 != 0) {
    v38 = v12;
  }
  v17 = SdkRoutine_86ad00(v14, &v26, v16);
  if (v17 != 0) {
    if (v17 != 4) {
      if (v17 == 196623) {
        v9 = 9;
      }
      else {
        v9 = 7;
      }
      goto LABEL_30;
    }
  LABEL_29:
    v9 = 5;
  LABEL_30:
    SdkRoutine_6adbf0(v5);
    goto LABEL_31;
  }
  v18 = SdkRoutine_86ad40(*(unsigned int*)v16, 0, *(unsigned int*)(v7 + 16), 3,
                          v16 + 1);
  if (v18 != 0) {
    v19 = v18;
    SdkRoutine_6adbf0(v5);
    if (v19 == 4) {
      v20 = 5;
    }
    else {
      v20 = 7;
    }
    v21 = v19 == 196623;
  }
  else {
    v22 = *(_QWORD*)(v7 + 16);
    v26 = 0;
    v25[0] = 0;
    v23 = *(unsigned int*)v16;
    v16[3] = v22;
    result = SdkRoutine_876a20(*(_QWORD*)(v5 + 40), v23, 0, v22,
                               *(_DWORD*)(a1 + 16) != 0, v25, v16 + 2, &v26);
    if ((_DWORD)result == 0) {
      *(_QWORD*)(v7 + 40) = v16[1];
      *(_QWORD*)(v7 + 24) = *(unsigned int*)v16;
      *(_QWORD*)(v7 + 32) = v16[2];
      *(_QWORD*)(v15 + 40) = v26;
      *(_DWORD*)(v5 + 112) = 0;
      return result;
    }
    v24 = result;
    SdkRoutine_6adbf0(v5);
    if (v24 == 4) {
      v20 = 5;
    }
    else {
      v20 = 7;
    }
    v21 = v24 == 196623;
  }
  if (v21) {
    v9 = 9;
  }
  else {
    v9 = v20;
  }
LABEL_31:
  SdkRoutine_6adbf0(v4);
  return v9;
}

__int64 SdkHr_6ab9e0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0 && *(_QWORD*)(v4 + 40) != 0) {
    return SdkRoutine_6adbf0(v4);
  }
  else {
    return 5;
  }
}

__int64 SdkHr_6abac0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0) {
    return 5;
  }
  result = SdkRoutine_876a00();
  if ((_DWORD)result != 0) {
    if ((_DWORD)result == 196623) {
      return 9;
    }
    else {
      if ((_DWORD)result == 4) {
        return 5;
      }
      return 7;
    }
  }
  return result;
}

__int64 SdkHr_6abbc0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0 || *(_DWORD*)(v4 + 112) == -1) {
    return 5;
  }
  v5 = SdkRoutine_876a30();
  if (v5 != 0) {
    if (v5 != 4) {
      if (v5 == 196623) {
        return 9;
      }
      else {
        return 7;
      }
    }
    return 5;
  }
  if (*(_BYTE*)(a1 + 25) != 0 && *(_BYTE*)(a1 + 24) != 0) {
    *(_QWORD*)(a1 + 40) = 0;
  }
  result = 0;
  if (*(_BYTE*)(a1 + 26) != 0) {
    *(_QWORD*)(a1 + 32) = 0;
  }
  return result;
}

__int64 SdkHr_6abd60(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  char v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64* v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  char v44;
  unsigned int v45;
  _BYTE v46[97];
  _BYTE v47[7];
  __int64 v48;
  _DWORD v49[3];

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 != 0 && *(_QWORD*)(v4 + 40) != 0) {
    v5 = *(_QWORD*)(a1 + 24);
    if (HIDWORD(v5) == 0) {
      v6 = *(_QWORD*)(a1 + 16);
      v7 = *(_DWORD*)(a1 + 36);
      if (v7 == 1) {
        goto LABEL_13;
      }
      if (v7 == 2) {
        v7 = 0;
      LABEL_13:
        v49[0] = v7;
        if (v5 != 0) {
          v8 = 1;
          v9 = 0;
          while (1) {
            v10 = 0;
            v48 = 0;
            if ((unsigned int)v5 >= 0x7C) {
              v11 = 124;
            }
            else {
              v11 = (unsigned int)v5;
            }
            if ((unsigned int)v11 <= 1) {
              v12 = 1;
            }
            else {
              v12 = (unsigned int)v11;
            }
            if ((unsigned int)v5 >= 4) {
              v13 = 0;
              v10 = 0;
              v14 = v9;
              do {
                v15 = v6 + 32LL * v14;
                v16 = &v46[v13];
                v10 += 4;
                v13 += 96;
                *v16 = *(_BYTE*)v15;
                v16[1] = *(_BYTE*)(v15 + 2);
                *((_DWORD*)v16 + 1) = *(_DWORD*)(v15 + 12);
                *((_QWORD*)v16 + 1) =
                    *(unsigned int*)(v15 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v15 + 16) << 32);
                *((_QWORD*)v16 + 2) =
                    *(unsigned int*)(v15 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v15 + 24) << 32);
                v17 = v6 + 32LL * (v14 + 1);
                v16[24] = *(_BYTE*)v17;
                v16[25] = *(_BYTE*)(v17 + 2);
                *((_DWORD*)v16 + 7) = *(_DWORD*)(v17 + 12);
                *((_QWORD*)v16 + 4) =
                    *(unsigned int*)(v17 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v17 + 16) << 32);
                *((_QWORD*)v16 + 5) =
                    *(unsigned int*)(v17 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v17 + 24) << 32);
                v18 = v6 + 32LL * (v14 + 2);
                v16[48] = *(_BYTE*)v18;
                v16[49] = *(_BYTE*)(v18 + 2);
                *((_DWORD*)v16 + 13) = *(_DWORD*)(v18 + 12);
                *((_QWORD*)v16 + 7) =
                    *(unsigned int*)(v18 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v18 + 16) << 32);
                *((_QWORD*)v16 + 8) =
                    *(unsigned int*)(v18 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v18 + 24) << 32);
                v19 = v14 + 3;
                v14 += 4;
                v20 = v6 + 32 * v19;
                v16[72] = *(_BYTE*)v20;
                v16[73] = *(_BYTE*)(v20 + 2);
                *((_DWORD*)v16 + 19) = *(_DWORD*)(v20 + 12);
                *((_QWORD*)v16 + 10) =
                    *(unsigned int*)(v20 + 20) |
                    ((unsigned __int64)*(unsigned int*)(v20 + 16) << 32);
                *((_QWORD*)v16 + 11) =
                    *(unsigned int*)(v20 + 28) |
                    ((unsigned __int64)*(unsigned int*)(v20 + 24) << 32);
              } while (96 * (v12 >> 2) != v13);
            }
            v21 = v12 & 3;
            if ((v12 & 3) != 0) {
              v22 = (unsigned __int64*)&v46[24 * v10 + 8];
              v23 = v9 + v10;
              do {
                v24 = v6 + 32LL * v23;
                --v21;
                ++v23;
                *((_BYTE*)v22 - 8) = *(_BYTE*)v24;
                *((_BYTE*)v22 - 7) = *(_BYTE*)(v24 + 2);
                *((_DWORD*)v22 - 1) = *(_DWORD*)(v24 + 12);
                *v22 = *(unsigned int*)(v24 + 20) |
                       ((unsigned __int64)*(unsigned int*)(v24 + 16) << 32);
                v22[1] = *(unsigned int*)(v24 + 28) |
                         ((unsigned __int64)*(unsigned int*)(v24 + 24) << 32);
                v22 += 3;
              } while (v21 != 0);
            }
            v25 = SdkRoutine_876a10(*(_QWORD*)(v4 + 40), v46, v11, v49, &v48);
            if (v25 != 0) {
              break;
            }
            if ((unsigned int)v5 >= 8) {
              v27 = v47;
              v26 = 0;
              do {
                v28 = v9 + (unsigned int)v26;
                v26 += 8;
                v29 = v6 + 32 * v28;
                *(_BYTE*)(v29 + 2) = *(v27 - 96);
                *(_QWORD*)(v29 + 16) = __ROR8__(*(_QWORD*)(v27 - 89), 32);
                v30 = v6 + 32LL * (unsigned int)(v28 + 1);
                *(_BYTE*)(v30 + 2) = *(v27 - 72);
                *(_QWORD*)(v30 + 16) = __ROR8__(*(_QWORD*)(v27 - 65), 32);
                v31 = v6 + 32LL * (unsigned int)(v28 + 2);
                *(_BYTE*)(v31 + 2) = *(v27 - 48);
                *(_QWORD*)(v31 + 16) = __ROR8__(*(_QWORD*)(v27 - 41), 32);
                v32 = v6 + 32LL * (unsigned int)(v28 + 3);
                *(_BYTE*)(v32 + 2) = *(v27 - 24);
                *(_QWORD*)(v32 + 16) = __ROR8__(*(_QWORD*)(v27 - 17), 32);
                v33 = v6 + 32LL * (unsigned int)(v28 + 4);
                *(_BYTE*)(v33 + 2) = *v27;
                *(_QWORD*)(v33 + 16) = __ROR8__(*(_QWORD*)(v27 + 7), 32);
                v34 = v6 + 32LL * (unsigned int)(v28 + 5);
                *(_BYTE*)(v34 + 2) = v27[24];
                *(_QWORD*)(v34 + 16) = __ROR8__(*(_QWORD*)(v27 + 31), 32);
                v35 = v6 + 32LL * (unsigned int)(v28 + 6);
                v36 = v6 + 32LL * (unsigned int)(v28 + 7);
                *(_BYTE*)(v35 + 2) = v27[48];
                *(_QWORD*)(v35 + 16) = __ROR8__(*(_QWORD*)(v27 + 55), 32);
                *(_BYTE*)(v36 + 2) = v27[72];
                v37 = *(_QWORD*)(v27 + 79);
                v27 += 192;
                *(_QWORD*)(v36 + 16) = __ROR8__(v37, 32);
              } while ((v12 & 0x78) != v26);
            }
            else {
              v26 = 0;
            }
            v38 = v12 & 7;
            if ((v12 & 7) != 0) {
              v39 = &v46[24 * v26 + 8];
              v40 = v9 + v26;
              do {
                v41 = v6 + 32LL * v40++;
                --v38;
                *(_BYTE*)(v41 + 2) = *((_BYTE*)v39 - 7);
                v42 = *v39;
                v39 += 3;
                *(_QWORD*)(v41 + 16) = __ROR8__(v42, 32);
              } while (v38 != 0);
            }
            LODWORD(v5) = v5 - v11;
            v9 += v11;
            v8 &= v48;
            if ((_DWORD)v5 == 0) {
              v44 = v8 & 1;
              goto LABEL_49;
            }
          }
          if (v25 == 4) {
            v45 = 5;
          }
          else {
            v45 = 7;
          }
          if (v25 == 196623) {
            return 9;
          }
          else {
            return v45;
          }
        }
        else {
          v44 = 1;
        LABEL_49:
          *(_BYTE*)(a1 + 40) = v44;
          return 0;
        }
      }
    }
  }
  return 5;
}

__int64 SdkHr_6ac460(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4[1] == 0) {
    v7 = v4[3];
    v8 = 0;
    if (v7 != 0) {
      if ((unsigned int)SdkRoutine_876830(v7, &v8) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v8) != 0) {
      return 7;
    }
    v4[1] = v8;
  }
  v5 = SdkRoutine_876580(*v4);
  if (v5 == 0) {
    return 1;
  }
  *(_BYTE*)(a1 + 16) = *(_DWORD*)(v5 + 224) == 1;
  return 0;
}

__int64 SdkHr_6ac680(_QWORD* a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 i;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = (_QWORD*)a1[1];
  if (v4[1] == 0) {
    v15 = v4[3];
    v16 = 0;
    if (v15 != 0) {
      if ((unsigned int)SdkRoutine_876830(v15, &v16) != 0) {
        return 7;
      }
    }
    else if ((unsigned int)SdkRoutine_8767f0(*v4, &v16) != 0) {
      return 7;
    }
    v4[1] = v16;
  }
  v5 = (_QWORD*)SdkRoutine_876580(*v4);
  if (v5 == nullptr) {
    return 1;
  }
  if (a1[2] != 0) {
    v6 = 0;
    for (i = 0; i < a1[2]; ++i) {
      v9 = a1[3];
      v8 = 2;
      v10 = *(_DWORD*)(v9 + v6);
      if (v10 > 3) {
        switch (v10) {
        case 4:
          v11 = v9 + v6;
          v12 = *(unsigned int*)(v9 + v6 + 8);
          if ((unsigned int)v12 < *(_DWORD*)(v5[31] + 4LL)) {
            v13 = v5[37];
            goto LABEL_33;
          }
          break;
        case 6:
          v11 = v9 + v6;
          v12 = *(unsigned int*)(v9 + v6 + 8);
          if ((unsigned int)v12 < *(_DWORD*)(v5[31] + 4LL)) {
            v13 = v5[38];
            goto LABEL_33;
          }
          break;
        case 13:
          goto LABEL_15;
        default:
          goto LABEL_14;
        }
      }
      else {
        switch (v10) {
        case 1:
          v8 = 0;
          *(_QWORD*)(v9 + v6 + 8) = v5[36];
          goto LABEL_14;
        case 2:
          v11 = v9 + v6;
          v12 = *(unsigned int*)(v9 + v6 + 8);
          if ((unsigned int)v12 < *(_DWORD*)(v5[31] + 4LL)) {
            v13 = v5[39];
            goto LABEL_33;
          }
          break;
        case 3:
          v11 = v9 + v6;
          v12 = *(unsigned int*)(v9 + v6 + 8);
          if ((unsigned int)v12 < *(_DWORD*)(v5[31] + 4LL)) {
            v13 = v5[40];
          LABEL_33:
            v8 = 0;
            *(_DWORD*)(v11 + 12) = *(_QWORD*)(v13 + 8 * v12);
            goto LABEL_14;
          }
          break;
        default:
          goto LABEL_14;
        }
      }
      v8 = 3;
    LABEL_14:
      *(_DWORD*)(v9 + v6 + 4) = v8;
    LABEL_15:
      v6 += 32;
    }
  }
  return 0;
}

__int64 SdkHr_6ac8e0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (v4 == 0 || *(_QWORD*)(v4 + 40) == 0) {
    return 5;
  }
  v5 = *(_DWORD*)(v4 + 112);
  if (v5 == -1) {
    return 11;
  }
  *(_DWORD*)(a1 + 16) = v5;
  return 0;
}

__int64 SdkHr_6ac9e0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 result;
  __int64 v6;
  _BYTE v7[4];

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4 == nullptr) {
    return 5;
  }
  v6 = 0;
  v7[0] = 0;
  result = SdkRoutine_8765b0(*v4, v7, &v6);
  if ((_DWORD)result != 0) {
    return 7;
  }
  *(_QWORD*)(a1 + 16) = v6;
  return result;
}

__int64 SdkHr_6acc00(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  v4 = *(_QWORD**)(a1 + 8);
  if (v4 == nullptr) {
    return 5;
  }
  v5 = SdkRoutine_876580(*v4);
  if (v5 == 0) {
    return 1;
  }
  v6 = *(unsigned int*)(v5 + 8);
  if ((unsigned int)v6 > 2) {
    v7 = -2;
  }
  else {
    v7 = SdkData_c92ba8[v6];
  }
  *(_DWORD*)(a1 + 16) = v7;
  return 0;
}

__int64 SdkHr_6acd20(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD**)(a1 + 16);
  if (v4 == nullptr || v4[3] == 0) {
    return 5;
  }
  v5 = v4[2];
  if (v5 != 0) {
    result = SdkRoutine_876a80(v5, 0, 2, v4 + 4);
    if ((_DWORD)result == 0) {
      return result;
    }
    return 7;
  }
  result = SdkRoutine_876850(v4[1], 0, 2, v4 + 4);
  if ((_DWORD)result != 0) {
    return 7;
  }
  return result;
}

__int64 SdkHr_6ace40(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  _BYTE v7[7];
  char v8;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 == 0) {
    return 5;
  }
  v5 = *(_QWORD*)(v4 + 24);
  if (v5 == 0) {
    return 5;
  }
  result = SdkRoutine_8768b0(v5, 0, &v8, v7);
  if ((_DWORD)result != 0) {
    return 7;
  }
  *(_DWORD*)(a1 + 24) = 0;
  return result;
}

__int64 SdkHr_6acf40(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[7];
  char v8;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 == 0) {
    return 5;
  }
  v5 = *(_QWORD*)(v4 + 24);
  if (v5 == 0) {
    return 5;
  }
  if ((unsigned int)SdkRoutine_8768b0(v5, 1, &v8, v7) != 0) {
    return 7;
  }
  return 0;
}

__int64 SdkHr_6ad420(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v6;
  _DWORD v7[6];

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 == 0 || *(_QWORD*)(v4 + 24) == 0) {
    return 5;
  }
  if ((unsigned int)SdkRoutine_8767d0(*(_QWORD*)(v4 + 8), v7) != 0) {
    return 7;
  }
  if (v7[0] == 2) {
    *(_DWORD*)(a1 + 24) = v7[1];
    v6 = 1;
  }
  else {
    v6 = 0;
  }
  *(_DWORD*)(a1 + 28) = v6;
  return 0;
}

__int64 SdkHr_6ad6e0(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD**)(a1 + 16);
  if (v4 == nullptr || v4[3] == 0) {
    return 5;
  }
  v5 = v4[2];
  if (v5 != 0) {
    result = SdkRoutine_876a80(v5, 2, 2, v4 + 4);
    if ((_DWORD)result == 0) {
      return result;
    }
    return 7;
  }
  result = SdkRoutine_876850(v4[1], 2, 2, v4 + 4);
  if ((_DWORD)result != 0) {
    return 7;
  }
  return result;
}

__int64 SdkHr_6ad800(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD**)(a1 + 16);
  if (v4 == nullptr || v4[3] == 0) {
    return 5;
  }
  if ((unsigned int)SdkRoutine_8767c0(*v4, v4[1], -1,
                                      *(_DWORD*)(a1 + 24) != 0) != 0) {
    return 7;
  }
  return 0;
}

__int64 SdkHr_6ad900(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;

  if (SdkData_10450c0 != 2) {
    v2 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v2, 1u);
    if (v2 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v3 = SdkRoutine_876530(0);
      if (v3 != 0) {
        SdkData_10450c8 = v3;
      }
      SdkData_10450c4 = v3 != 0;
      SdkData_10450c0 = 2;
    }
  }
  if (SdkData_10450c4 != 1) {
    return 10;
  }
  if (*(_QWORD*)(a1 + 8) == 0) {
    return 5;
  }
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 == 0 || *(_QWORD*)(v4 + 24) == 0) {
    return 5;
  }
  if ((unsigned int)SdkRoutine_876910() != 0) {
    return 7;
  }
  return 0;
}

__int64 SdkHr_6adb40()
{
  int v0;
  __int64 v1;

  if (SdkData_10450c0 != 2) {
    v0 = 0;
    atomic_compare_exchange_strong((atomic_uint* volatile)&SdkData_10450c0,
                                   (unsigned int*)&v0, 1u);
    if (v0 != 0) {
      while (SdkData_10450c0 == 1) {
        SdkRoutine_875d30(100);
      }
    }
    else {
      v1 = SdkRoutine_876530(0);
      if (v1 != 0) {
        SdkData_10450c8 = v1;
      }
      SdkData_10450c4 = v1 != 0;
      SdkData_10450c0 = 2;
    }
  }
  return (unsigned __int8)SdkData_10450c4;
}

#pragma GCC visibility pop
