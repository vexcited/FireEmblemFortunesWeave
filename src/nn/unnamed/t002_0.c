#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern int SdkData_10450c0;
extern char SdkData_10450c4;
extern __int64 SdkData_10450c8;
extern char SdkData_1048c60;
extern _UNKNOWN SdkData_1048c64;
extern __int64 SdkData_1048c70;
extern _UNKNOWN SdkData_1048c78;
extern int SdkData_1048c7c;
extern _UNKNOWN SdkData_1048c80;
extern __int64 SdkData_1048d10;
extern __int64 SdkData_1048d18;
extern _UNKNOWN SdkData_1048d20;
extern int SdkData_1061698;
extern __int128 SdkData_bb1e60;
extern __int128 SdkData_bb3360;
extern _DWORD SdkData_c77cf4[5];
extern _DWORD SdkData_c925c0[5];
extern float SdkData_c925d4[7];
extern float SdkData_c925f0[7];
extern _DWORD SdkData_c92ba8[3];
extern _UNKNOWN SdkData_ca6300;
extern __int16 SdkData_ca7dde[30];
extern unsigned __int8 SdkData_ca7e1a[256];
extern unsigned __int8 SdkData_ca7f1a[3074];
extern __int64 SdkData_e86b48;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e891d0;
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
__int64 SdkRoutine_73db40(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
__int64 SdkRoutine_80bd80(void*);
__int64 SdkRoutine_84c4a0(void);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_8572f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8578d0(_QWORD);
__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_859150(_QWORD, _QWORD);
__int64 SdkRoutine_859610(_QWORD, _QWORD);
__int64 SdkRoutine_859a60(_QWORD);
__int64 SdkRoutine_859a70(_QWORD, _QWORD);
__int64 SdkRoutine_859a80(void);
__int64 SdkRoutine_85c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
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
__int64 SdkRoutine_87a5c0(void);
__int64 SdkRoutine_87a5d0(void);
__int64 SdkRoutine_87a5e0(_QWORD, _QWORD);
__int64 SdkRoutine_87a6e0(void);
__int64 SdkRoutine_87a740(_QWORD);
__int64 SdkRoutine_87a750(_QWORD, _QWORD);
__int64 SdkRoutine_87a780(_QWORD);
__int64 SdkRoutine_87a840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a850(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a910(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a920(_QWORD, _QWORD);
__int64 SdkRoutine_87ac90(_QWORD, _QWORD);
__int64 SdkRoutine_87ada0(_QWORD, _QWORD);
__int64 SdkRoutine_87ca10(_QWORD);
__int64 SdkRoutine_87cb20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d130(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87d150(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);

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

float SdkHr_733a20(_QWORD* a1, float a2)
{
  float* v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;

  v2 = (float*)a1[1];
  v3 = *(float*)(*a1 + 4LL);
  v4 = v2[12];
  v5 = v2[13];
  v7 = v2[14];
  v6 = v2[15];
  v120 = *(float*)(*a1 + 20LL);
  v118 = *(float*)(*a1 + 28LL);
  v119 = *(float*)(*a1 + 24LL);
  v8 = v2[1];
  v116 = *(float*)(*a1 + 32LL);
  v96 = *(float*)(*a1 + 36LL);
  v9 = 1.0 - a2;
  v10 = (float)((float)(a2 * a2) * v3) - (float)((float)(v9 * v9) * v8);
  v12 = *(float*)(*a1 + 40LL);
  v11 = *(float*)(*a1 + 44LL);
  v102 = v2[5];
  v14 = *(float*)(*a1 + 56LL);
  v13 = *(float*)(*a1 + 60LL);
  v100 = v2[7];
  v107 = (float)((float)(a2 * a2) * v120) - (float)((float)(v9 * v9) * v102);
  v95 = (float)((float)((float)(a2 * a2) * *(float*)*a1) -
                (float)((float)(v9 * v9) * *v2)) /
        (float)((float)((float)(a2 * *(float*)*a1) +
                        (float)((float)(1.0 - a2) * *v2)) *
                (float)((float)(a2 * *(float*)*a1) +
                        (float)((float)(1.0 - a2) * *v2)));
  v15 = v2[16];
  v16 = v2[17];
  v17 = (float)((float)(a2 * a2) * v13) - (float)((float)(v9 * v9) * v6);
  v18 = (float)(a2 * v13) + (float)((float)(1.0 - a2) * v6);
  v106 = (float)((float)(a2 * a2) * v119) - (float)((float)(v9 * v9) * v2[6]);
  v98 = v2[8];
  v97 = v2[9];
  v104 = (float)((float)(a2 * a2) * v116) - (float)((float)(v9 * v9) * v98);
  v105 = (float)((float)(a2 * a2) * v118) - (float)((float)(v9 * v9) * v100);
  v20 = *(float*)(*a1 + 48LL);
  v19 = *(float*)(*a1 + 52LL);
  v103 = (float)((float)(a2 * a2) * v96) - (float)((float)(v9 * v9) * v97);
  v21 = (float)(a2 * a2) * v12;
  v22 = a2 * v12;
  v101 = v2[10];
  v99 = v2[11];
  v23 = v21 - (float)((float)(v9 * v9) * v101);
  v24 = (float)(a2 * a2) * v11;
  v25 = a2 * v11;
  v26 = (float)(v9 * v9) * v4;
  v27 = (float)(1.0 - a2) * v4;
  v112 = v23;
  v113 = v24 - (float)((float)(v9 * v9) * v99);
  v28 = (float)(a2 * a2) * v20;
  v29 = a2 * v20;
  v30 = v28 - v26;
  v31 = (float)(a2 * a2) * v19;
  v32 = (float)(v9 * v9) * v5;
  v33 = a2 * v19;
  v34 = (float)(1.0 - a2) * v5;
  v110 = v31 - v32;
  v111 = v30;
  v36 = *(float*)(*a1 + 64LL);
  v35 = *(float*)(*a1 + 68LL);
  v37 = (float)((float)(a2 * a2) * v14) - (float)((float)(v9 * v9) * v7);
  v38 = (float)(a2 * v14) + (float)((float)(1.0 - a2) * v7);
  v109 = v37;
  v39 = (float)((float)(a2 * a2) * v36) - (float)((float)(v9 * v9) * v15);
  v40 = a2 * v3;
  v42 = v2[18];
  v41 = v2[19];
  v43 = (float)(a2 * v36) + (float)((float)(1.0 - a2) * v15);
  v44 = (float)(v9 * v9) * v42;
  v45 = (float)(1.0 - a2) * v42;
  v46 = v10 / (float)((float)(v40 + (float)((float)(1.0 - a2) * v8)) *
                      (float)(v40 + (float)((float)(1.0 - a2) * v8)));
  v47 = (float)((float)(a2 * a2) * v35) - (float)((float)(v9 * v9) * v16);
  v48 = (float)(a2 * v35) + (float)((float)(1.0 - a2) * v16);
  v93 = v46;
  v114 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 8LL)) -
                 (float)((float)(v9 * v9) * v2[2])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 8LL)) +
                         (float)((float)(1.0 - a2) * v2[2])) *
                 (float)((float)(a2 * *(float*)(*a1 + 8LL)) +
                         (float)((float)(1.0 - a2) * v2[2])));
  v50 = *(float*)(*a1 + 72LL);
  v49 = *(float*)(*a1 + 76LL);
  v51 = (float)((float)(a2 * a2) * v50) - v44;
  v52 = (float)(v9 * v9) * v41;
  v53 = (float)(1.0 - a2) * v41;
  v54 = (float)(a2 * a2) * v49;
  v55 = a2 * v49;
  v108 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 12LL)) -
                 (float)((float)(v9 * v9) * v2[3])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 12LL)) +
                         (float)((float)(1.0 - a2) * v2[3])) *
                 (float)((float)(a2 * *(float*)(*a1 + 12LL)) +
                         (float)((float)(1.0 - a2) * v2[3])));
  v56 = v54 - v52;
  v57 = *(float*)(*a1 + 80LL);
  v58 = v2[20];
  v59 = (float*)a1[2];
  v94 = v56;
  v60 = (float)(v9 * v9) * v58;
  v61 = (float)(1.0 - a2) * v58;
  v115 = (float)((float)(a2 * a2) * v57) - v60;
  v62 = a2 * v118;
  v63 = a2 * v96;
  v64 = a2 * v50;
  v117 = (float)((float)((float)(a2 * a2) * *(float*)(*a1 + 16LL)) -
                 (float)((float)(v9 * v9) * v2[4])) /
         (float)((float)((float)(a2 * *(float*)(*a1 + 16LL)) +
                         (float)((float)(1.0 - a2) * v2[4])) *
                 (float)((float)(a2 * *(float*)(*a1 + 16LL)) +
                         (float)((float)(1.0 - a2) * v2[4])));
  v65 = a2 * v119;
  v66 = (float)(a2 * v120) + (float)((float)(1.0 - a2) * v102);
  v67 = a2 * v116;
  v68 = a2 * v57;
  v69 = v63 + (float)(v9 * v97);
  v70 = v66 * v66;
  v71 = v106 / (float)((float)(v65 + (float)(v9 * v2[6])) *
                       (float)(v65 + (float)(v9 * v2[6])));
  v72 = v105 / (float)((float)(v62 + (float)(v9 * v100)) *
                       (float)(v62 + (float)(v9 * v100)));
  v73 = (float)(v67 + (float)(v9 * v98)) * (float)(v67 + (float)(v9 * v98));
  v74 = v9 * v99;
  v75 = v22 + (float)(v9 * v101);
  v76 = v25 + v74;
  v77 = v29 + v27;
  v78 = v55 + v53;
  v79 = v68 + v61;
  v80 = v76 * v76;
  v81 = v111 / (float)(v77 * v77);
  v82 = v109 / (float)(v38 * v38);
  v83 = v17 / (float)(v18 * v18);
  v84 = v39 / (float)(v43 * v43);
  v85 = v51 / (float)((float)(v64 + v45) * (float)(v64 + v45));
  v86 = v47 / (float)(v48 * v48);
  v87 = v93 * (float)(v59[1] * v59[1]);
  v88 = v114 * (float)(v59[2] * v59[2]);
  v89 = v108 * (float)(v59[3] * v59[3]);
  v90 = v71 * (float)(v59[6] * v59[6]);
  v91 = (float)(v110 / (float)((float)(v33 + v34) * (float)(v33 + v34))) *
        (float)(v59[13] * v59[13]);
  return -(float)((
                      float)((
                                 float)((
                                            float)((
                                                       float)((float)((float)((float)((
                                                                                          float)((
                                                                                                     float)((
                                                                                                                float)((
                                                                                                                           float)((
                                                                                                                                      float)((
                                                                                                                                                 float)((
                                                                                                                                                            float)((float)((float)((float)((float)((float)((float)((float)(v95 * (float)(*v59 * *v59)) + 0.0) + v87) + v88) + v89) + (float)(v117 *
                                                                                                                                                                                                                                                                                             (float)(v59[4] * v59[4]))) +
                                                                                                                                                                           (float)((float)(v107 / v70) *
                                                                                                                                                                                   (float)(v59[5] * v59[5]))) +
                                                                                                                                                                   v90) +
                                                                                                                                                        (float)(v72 *
                                                                                                                                                                (float)(v59[7] *
                                                                                                                                                                        v59[7]))) +
                                                                                                                                             (float)((float)(v104 / v73) * (float)(v59[8] *
                                                                                                                                                                                   v59[8]))) +
                                                                                                                                  (float)((
                                                                                                                                              float)(v103 /
                                                                                                                                                     (float)(v69 *
                                                                                                                                                             v69)) *
                                                                                                                                          (float)(v59[9] *
                                                                                                                                                  v59[9]))) +
                                                                                                                       (float)((
                                                                                                                                   float)(v112 /
                                                                                                                                          (float)(v75 *
                                                                                                                                                  v75)) *
                                                                                                                               (float)(v59[10] *
                                                                                                                                       v59[10]))) +
                                                                                                            (float)((float)(v113 /
                                                                                                                            v80) *
                                                                                                                    (float)(v59[11] *
                                                                                                                            v59[11]))) +
                                                                                                 (float)(v81 *
                                                                                                         (float)(v59[12] *
                                                                                                                 v59[12]))) +
                                                                                      v91) +
                                                                              (float)(v82 *
                                                                                      (float)(v59[14] *
                                                                                              v59[14]))) +
                                                                      (float)(v83 *
                                                                              (float)(v59[15] *
                                                                                      v59[15]))) +
                                                              (float)(v84 *
                                                                      (float)(v59[16] *
                                                                              v59[16]))) +
                                                   (float)(v86 *
                                                           (float)(v59[17] *
                                                                   v59[17]))) +
                                        (float)(v85 *
                                                (float)(v59[18] * v59[18]))) +
                             (float)((float)(v94 / (float)(v78 * v78)) *
                                     (float)(v59[19] * v59[19]))) +
                  (float)((float)(v115 / (float)(v79 * v79)) *
                          (float)(v59[20] * v59[20])));
}

__int64 SdkHr_73b160(__int64 a1)
{
  _QWORD** v1;
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v13;

  v1 = (_QWORD**)a1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_1048c60,
                            memory_order_acquire) &
       1) == 0) {
    SdkRoutine_858b60(&SdkData_1048c64);
    if ((SdkData_1048c60 & 1) == 0) {
      SdkRoutine_858b60(&SdkData_1048c78);
      if (SdkData_1048c7c != 0) {
        v2 = SdkData_1048c7c + 1;
      }
      else {
        v3 = SdkRoutine_85c330(&SdkData_1048d20, 1024, 64, 4, 16,
                               &SdkData_1048c80);
        SdkData_1048c70 = (__int64)&SdkData_1048c80;
        SdkData_1048d10 = SdkData_e87068 + 16;
        SdkData_1048d18 = v3;
        v2 = 1;
      }
      SdkData_1048c7c = v2;
      SdkRoutine_858b80(&SdkData_1048c78);
      atomic_store(1u, (unsigned __int8*)&SdkData_1048c60);
    }
    a1 = SdkRoutine_858b80(&SdkData_1048c64);
  }
  v13 = 0;
  v4 = SdkData_1048c70;
  SdkRoutine_859a60(a1);
  v5 = SdkRoutine_859a70(&v13, &SdkData_ca6300);
  SdkRoutine_859a80();
  if (v5 == 0) {
    v7 = *(_QWORD*)(v4 + 144);
    v6 = v4 + 144;
    v8 = v13;
    v9 = (*(__int64 (**)(__int64, __int64, __int64))(v7 + 16))(v6, 40, 8);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 24) = 1;
      *(_DWORD*)(v9 + 8) = 1;
      *(_DWORD*)(v9 + 12) = v8;
      v10 = SdkData_e891d0;
      *(_QWORD*)(v9 + 32) = v6;
      *(_QWORD*)v9 = v10 + 16;
      *(_QWORD*)(v9 + 16) = v10 + 80;
    }
    v11 = *v1;
    *v1 = (_QWORD*)v9;
    if (v11 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v11 + 8LL))(
          (void*)v11, v11);
    }
  }
  return v5;
}

__int64 SdkHr_73d220(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[4];

  result = SdkRoutine_87a840(a1, v9, 1, a2);
  if ((_DWORD)result != 0) {
    v5 = result;
    v6 = SdkRoutine_87a5c0();
    v8 = SdkRoutine_87a5d0();
    v7 = SdkRoutine_87a5e0(v6, &v8);
    if (v7 != 0) {
      SdkRoutine_87a850(v7, a1, a2);
      return v5;
    }
    else {
      return 104653;
    }
  }
  return result;
}

__int64 SdkHr_73da20(__int64 a1, _DWORD* a2, int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int16 v15;
  __int64 v16;

  v8 = SdkRoutine_87a5c0();
  v16 = SdkRoutine_87a5d0();
  v9 = SdkRoutine_87a5e0(v8, &v16);
  if (v9 == 0) {
    v15 = -26419;
    return v15 | 0x10000u;
  }
  v10 = v9;
  SdkRoutine_87a6e0();
  *a2 = 0;
  SdkRoutine_87a910(v10, a1, a4);
  if ((SdkRoutine_87a740(v10) & 1) == 0) {
    v15 = 16589;
    return v15 | 0x10000u;
  }
  result = SdkRoutine_87a780(a4);
  if ((_DWORD)result == 0) {
    v12 = SdkRoutine_87a920(v10, a4);
    result = 82125;
    if (v12 != 0) {
      if (a3 >= 6) {
        v13 = 6;
      }
      else {
        v13 = (unsigned int)a3;
      }
      v14 = SdkRoutine_73db40(v12, a1, v13, 0);
      result = 0;
      *a2 = v14;
      if (v14 == 0) {
        return SdkRoutine_87a750(82125, a4);
      }
    }
  }
  return result;
}

__int64 SdkHr_744400(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v4 = *a4;
  v5 = 8 * a3;
  v10 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v8 = a2;
  v9 = v5;
  v11 = &v8;
  result = SdkRoutine_87ac90(a1, &v11) & 1;
  *a4 = v9;
  return result;
}

__int64 SdkHr_74bce0(_BYTE* a1, unsigned __int8 a2)
{
  unsigned int v2;
  int v3;
  __int16 v4;
  char v5;

  v2 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] + 256 +
                      (unsigned __int8)*a1 - (unsigned int)a2];
  v3 =
      SdkData_ca7dde[5 * SdkData_ca7e1a[a2] +
                     SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] +
                                    256 + (unsigned __int8)*a1 -
                                    (unsigned int)a2]] +
      a2;
  if ((unsigned int)v3 >= 0xFF) {
    LOBYTE(v4) = -1;
  }
  else {
    v4 = SdkData_ca7dde
             [5 * SdkData_ca7e1a[a2] +
              SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a2] + 256 +
                             (unsigned __int8)*a1 - (unsigned int)a2]] +
         a2;
  }
  if (v3 >= 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  *a1 = v5;
  return v2;
}

__int64 SdkHr_74f640(__int64* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  unsigned __int8* v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  _BYTE* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _BOOL4 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  bool v63;
  _BOOL4 v64;
  int v65;
  bool v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  bool v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 result;
  __int64 v86;
  __int64 v87;
  _BOOL4 v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  bool v95;
  _BOOL4 v96;
  int v97;
  bool v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;

  v3 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v3 == 0 || (v7 = *((_DWORD*)a2 + 2)) == 0) {
    v21 = 1;
    v22 = a1[1];
    if (v22 > 0x958) {
      goto LABEL_46;
    }
    goto LABEL_33;
  }
  v8 = *a2;
  v9 = *((unsigned int*)a2 + 4);
  v10 = 0;
  LOBYTE(v11) = 1;
  v12 = *a2 + 3;
  do {
    if (v7 < 8) {
      v13 = 0;
      if ((v7 & 7) == 0) {
        goto LABEL_4;
      }
    LABEL_27:
      v17 = (unsigned __int8*)(v8 + v13);
      v18 = v7 & 7;
      do {
        v20 = *v17++;
        v19 = v20;
        if ((unsigned __int8)v11 <= v20) {
          LOBYTE(v11) = v19;
        }
        --v18;
      } while (v18 != 0);
      goto LABEL_4;
    }
    v14 = 0;
    v15 = (unsigned __int8*)v12;
    do {
      v11 = (unsigned __int8)v11;
      v14 -= 8;
      if ((unsigned __int8)v11 <= (unsigned int)*(v15 - 3)) {
        v11 = *(v15 - 3);
      }
      if (v11 <= *(v15 - 2)) {
        v11 = *(v15 - 2);
      }
      if (v11 <= *(v15 - 1)) {
        v11 = *(v15 - 1);
      }
      if (v11 <= *v15) {
        v11 = *v15;
      }
      if (v11 <= v15[1]) {
        v11 = v15[1];
      }
      if (v11 <= v15[2]) {
        v11 = v15[2];
      }
      if (v11 <= v15[3]) {
        v11 = v15[3];
      }
      v16 = v15[4];
      v15 += 8;
      if (v11 <= v16) {
        LOBYTE(v11) = v16;
      }
    } while (-(__int64)(v7 & 0xFFFFFFF8) != v14);
    v13 = -v14;
    if ((v7 & 7) != 0) {
      goto LABEL_27;
    }
  LABEL_4:
    ++v10;
    v12 += v9;
    v8 += v9;
  } while (v10 != v3);
  v30 = 0;
  v31 = 255.0;
  v32 = 255.0 / (float)(unsigned __int8)v11;
  do {
    v33 = *a2;
    v34 = *((unsigned int*)a2 + 4);
    if (v7 < 8) {
      v35 = 0;
      if ((v7 & 7) == 0) {
        goto LABEL_35;
      }
    LABEL_42:
      v52 = (_BYTE*)(v33 + v35 + v30 * v34);
      v53 = v7 & 7;
      do {
        LOBYTE(v31) = *v52;
        --v53;
        v31 = v32 * (float)LODWORD(v31);
        *v52++ = (int)v31;
      } while (v53 != 0);
      goto LABEL_35;
    }
    v36 = 0;
    v37 = (_BYTE*)(v33 + v30 * v34 + 3);
    do {
      LOBYTE(v31) = *(v37 - 3);
      v36 -= 8;
      *(float*)&v38 = v32 * (float)LODWORD(v31);
      v39 = (int)*(float*)&v38;
      LOBYTE(v38) = *(v37 - 2);
      *(v37 - 3) = v39;
      *(float*)&v40 = v32 * (float)v38;
      v41 = (int)*(float*)&v40;
      LOBYTE(v40) = *(v37 - 1);
      *(v37 - 2) = v41;
      *(float*)&v42 = v32 * (float)v40;
      v43 = (int)*(float*)&v42;
      LOBYTE(v42) = *v37;
      *(v37 - 1) = v43;
      *(float*)&v44 = v32 * (float)v42;
      v45 = (int)*(float*)&v44;
      LOBYTE(v44) = v37[1];
      *v37 = v45;
      *(float*)&v46 = v32 * (float)v44;
      v47 = (int)*(float*)&v46;
      LOBYTE(v46) = v37[2];
      v37[1] = v47;
      *(float*)&v48 = v32 * (float)v46;
      v49 = (int)*(float*)&v48;
      LOBYTE(v48) = v37[3];
      v37[2] = v49;
      *(float*)&v50 = v32 * (float)v48;
      v51 = (int)*(float*)&v50;
      LOBYTE(v50) = v37[4];
      v37[3] = v51;
      v31 = v32 * (float)v50;
      v37[4] = (int)v31;
      v37 += 8;
    } while (-(__int64)(v7 & 0xFFFFFFF8) != v36);
    v35 = -v36;
    if ((v7 & 7) != 0) {
      goto LABEL_42;
    }
  LABEL_35:
    ++v30;
  } while (v30 != v3);
  v21 = (unsigned __int8)v11;
  v22 = a1[1];
  if (v22 > 0x958) {
  LABEL_46:
    if (v22 + 8 <= 0x960) {
      goto LABEL_47;
    }
    return 0;
  }
LABEL_33:
  *(_BYTE*)(*a1 + (v22 >> 3)) |= v21 >> 7 << (v22 & 7);
  v23 = *a1;
  a1[1] = v22 + 1;
  *(_BYTE*)(v23 + ((v22 + 1) >> 3)) |= ((v21 & 0x40) != 0) << ((v22 + 1) & 7);
  v24 = *a1;
  a1[1] = v22 + 2;
  *(_BYTE*)(v24 + ((v22 + 2) >> 3)) |= ((v21 & 0x20) != 0) << ((v22 + 2) & 7);
  v25 = *a1;
  a1[1] = v22 + 3;
  *(_BYTE*)(v25 + ((v22 + 3) >> 3)) |= ((v21 & 0x10) != 0) << ((v22 + 3) & 7);
  v26 = *a1;
  a1[1] = v22 + 4;
  *(_BYTE*)(v26 + ((v22 + 4) >> 3)) |= ((v21 & 8) != 0) << ((v22 + 4) & 7);
  v27 = *a1;
  a1[1] = v22 + 5;
  *(_BYTE*)(v27 + ((v22 + 5) >> 3)) |= ((v21 & 4) != 0) << ((v22 + 5) & 7);
  v28 = *a1;
  a1[1] = v22 + 6;
  *(_BYTE*)(v28 + ((v22 + 6) >> 3)) |= ((v21 & 2) != 0) << ((v22 + 6) & 7);
  v29 = *a1;
  a1[1] = v22 + 7;
  *(_BYTE*)(v29 + ((v22 + 7) >> 3)) |= (v21 & 1) << ((v22 + 7) & 7);
  a1[1] = v22 + 8;
LABEL_47:
  SdkRoutine_87ada0(a2, a3);
  v118 = 0x500000001LL;
  LODWORD(v119) = 25;
  v54 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v54 != 0) {
    v55 = *((unsigned int*)a2 + 2);
    if ((_DWORD)v55 != 0) {
      v56 = true;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      do {
        v60 = 0;
        v61 = *a2 + v57 * *((unsigned int*)a2 + 4);
        do {
          if (*(_BYTE*)(*(_QWORD*)a3 + v57 * *(unsigned int*)(a3 + 16) + v60) ==
              5) {
            v62 =
                v58 + *((_DWORD*)&v118 + v59) * *(unsigned __int8*)(v61 + v60);
            v63 = v59 == 2;
            v64 = v59 != 2;
            if (v59 == 2) {
              v59 = 0;
            }
            else {
              ++v59;
            }
            v65 = v64 && v56;
            if (v63) {
              v58 = 0;
            }
            else {
              v58 = v62;
            }
            if (v63) {
              v66 = !v56;
              v56 = v65;
              if (!v66) {
                v67 = a1[1];
                v56 = v67 + 7 < 0x961;
                v59 = 0;
                v58 = 0;
                if (v67 <= 0x959) {
                  *(_BYTE*)(*a1 + (v67 >> 3)) |= ((v62 & 0x40) != 0)
                                                 << (v67 & 7);
                  v68 = *a1;
                  a1[1] = v67 + 1;
                  *(_BYTE*)(v68 + ((v67 + 1) >> 3)) |= ((v62 & 0x20) != 0)
                                                       << ((v67 + 1) & 7);
                  v69 = *a1;
                  a1[1] = v67 + 2;
                  *(_BYTE*)(v69 + ((v67 + 2) >> 3)) |= ((v62 & 0x10) != 0)
                                                       << ((v67 + 2) & 7);
                  v70 = *a1;
                  a1[1] = v67 + 3;
                  *(_BYTE*)(v70 + ((v67 + 3) >> 3)) |= ((v62 & 8) != 0)
                                                       << ((v67 + 3) & 7);
                  v71 = *a1;
                  a1[1] = v67 + 4;
                  *(_BYTE*)(v71 + ((v67 + 4) >> 3)) |= ((v62 & 4) != 0)
                                                       << ((v67 + 4) & 7);
                  v72 = *a1;
                  a1[1] = v67 + 5;
                  *(_BYTE*)(v72 + ((v67 + 5) >> 3)) |= ((v62 & 2) != 0)
                                                       << ((v67 + 5) & 7);
                  v73 = *a1;
                  a1[1] = v67 + 6;
                  *(_BYTE*)(v73 + ((v67 + 6) >> 3)) |= (v62 & 1)
                                                       << ((v67 + 6) & 7);
                  v56 = true;
                  a1[1] = v67 + 7;
                }
              }
            }
            else {
              v56 = v65;
            }
          }
          ++v60;
        } while (v55 != v60);
        ++v57;
      } while (v57 != v54);
      v74 = v59 < 1 && v56;
      if (v59 < 1 || !v56 ||
          (v75 = a1[1], v76 = v75 + 7, v74 = v75 + 7 < 0x961, v75 > 0x959)) {
        if (!v74) {
          return 0;
        }
      }
      else {
        v77 = v58;
        *(_BYTE*)(*a1 + (v75 >> 3)) |= ((v58 & 0x40) != 0) << (v75 & 7);
        v78 = *a1;
        a1[1] = v75 + 1;
        *(_BYTE*)(v78 + ((v75 + 1) >> 3)) |= ((v58 & 0x20) != 0)
                                             << ((v75 + 1) & 7);
        v79 = *a1;
        a1[1] = v75 + 2;
        *(_BYTE*)(v79 + ((v75 + 2) >> 3)) |= ((v58 & 0x10) != 0)
                                             << ((v75 + 2) & 7);
        v80 = *a1;
        a1[1] = v75 + 3;
        *(_BYTE*)(v80 + ((v75 + 3) >> 3)) |= ((v58 & 8) != 0)
                                             << ((v75 + 3) & 7);
        v81 = *a1;
        a1[1] = v75 + 4;
        *(_BYTE*)(v81 + ((v75 + 4) >> 3)) |= ((v58 & 4) != 0)
                                             << ((v75 + 4) & 7);
        v82 = v75 + 5;
        v83 = v75 + 6;
        v84 = *a1;
        a1[1] = v82;
        *(_BYTE*)(v84 + (v82 >> 3)) |= ((v77 & 2) != 0) << (v82 & 7);
        a1[1] = v83;
        *(_BYTE*)(*a1 + (v83 >> 3)) |= (v77 & 1) << (v83 & 7);
        a1[1] = v76;
      }
    }
  }
  v118 = 0x300000001LL;
  v119 = 0x1B00000009LL;
  v120 = 81;
  v86 = *((unsigned int*)a2 + 3);
  if ((_DWORD)v86 == 0) {
    return 1;
  }
  v87 = *((unsigned int*)a2 + 2);
  if ((_DWORD)v87 == 0) {
    return 1;
  }
  v88 = true;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  do {
    v92 = 0;
    v93 = *a2 + v89 * *((unsigned int*)a2 + 4);
    do {
      if (*(_BYTE*)(*(_QWORD*)a3 + v89 * *(unsigned int*)(a3 + 16) + v92) ==
          3) {
        v94 = v90 + *((_DWORD*)&v118 + v91) * *(unsigned __int8*)(v93 + v92);
        v95 = v91 == 4;
        v96 = v91 != 4;
        if (v91 == 4) {
          v91 = 0;
        }
        else {
          ++v91;
        }
        v97 = v96 && v88;
        if (v95) {
          v90 = 0;
        }
        else {
          v90 = v94;
        }
        if (v95) {
          v98 = !v88;
          v88 = v97;
          if (!v98) {
            v99 = a1[1];
            v88 = v99 + 8 < 0x961;
            v91 = 0;
            v90 = 0;
            if (v99 <= 0x958) {
              *(_BYTE*)(*a1 + (v99 >> 3)) |= ((v94 & 0x80) != 0) << (v99 & 7);
              v100 = *a1;
              a1[1] = v99 + 1;
              *(_BYTE*)(v100 + ((v99 + 1) >> 3)) |= ((v94 & 0x40) != 0)
                                                    << ((v99 + 1) & 7);
              v101 = *a1;
              a1[1] = v99 + 2;
              *(_BYTE*)(v101 + ((v99 + 2) >> 3)) |= ((v94 & 0x20) != 0)
                                                    << ((v99 + 2) & 7);
              v102 = *a1;
              a1[1] = v99 + 3;
              *(_BYTE*)(v102 + ((v99 + 3) >> 3)) |= ((v94 & 0x10) != 0)
                                                    << ((v99 + 3) & 7);
              v103 = *a1;
              a1[1] = v99 + 4;
              *(_BYTE*)(v103 + ((v99 + 4) >> 3)) |= ((v94 & 8) != 0)
                                                    << ((v99 + 4) & 7);
              v104 = *a1;
              a1[1] = v99 + 5;
              *(_BYTE*)(v104 + ((v99 + 5) >> 3)) |= ((v94 & 4) != 0)
                                                    << ((v99 + 5) & 7);
              v105 = *a1;
              a1[1] = v99 + 6;
              *(_BYTE*)(v105 + ((v99 + 6) >> 3)) |= ((v94 & 2) != 0)
                                                    << ((v99 + 6) & 7);
              v106 = *a1;
              a1[1] = v99 + 7;
              *(_BYTE*)(v106 + ((v99 + 7) >> 3)) |= (v94 & 1)
                                                    << ((v99 + 7) & 7);
              v88 = true;
              a1[1] = v99 + 8;
            }
          }
        }
        else {
          v88 = v97;
        }
      }
      ++v92;
    } while (v87 != v92);
    ++v89;
  } while (v89 != v86);
  result = (v91 < 1) & (unsigned __int8)v88;
  if (v91 >= 1 && v88) {
    v107 = a1[1];
    v108 = v107 + 8;
    result = v107 + 8 < 0x961;
    if (v107 <= 0x958) {
      v109 = v90;
      *(_BYTE*)(*a1 + (v107 >> 3)) |= ((v90 & 0x80) != 0) << (v107 & 7);
      v110 = *a1;
      a1[1] = v107 + 1;
      *(_BYTE*)(v110 + ((v107 + 1) >> 3)) |= ((v90 & 0x40) != 0)
                                             << ((v107 + 1) & 7);
      v111 = *a1;
      a1[1] = v107 + 2;
      *(_BYTE*)(v111 + ((v107 + 2) >> 3)) |= ((v90 & 0x20) != 0)
                                             << ((v107 + 2) & 7);
      v112 = *a1;
      a1[1] = v107 + 3;
      *(_BYTE*)(v112 + ((v107 + 3) >> 3)) |= ((v90 & 0x10) != 0)
                                             << ((v107 + 3) & 7);
      v113 = *a1;
      a1[1] = v107 + 4;
      *(_BYTE*)(v113 + ((v107 + 4) >> 3)) |= ((v90 & 8) != 0)
                                             << ((v107 + 4) & 7);
      v114 = *a1;
      a1[1] = v107 + 5;
      *(_BYTE*)(v114 + ((v107 + 5) >> 3)) |= ((v90 & 4) != 0)
                                             << ((v107 + 5) & 7);
      v115 = v107 + 6;
      v116 = v107 + 7;
      v117 = *a1;
      a1[1] = v115;
      *(_BYTE*)(v117 + (v115 >> 3)) |= ((v109 & 2) != 0) << (v115 & 7);
      a1[1] = v116;
      *(_BYTE*)(*a1 + (v116 >> 3)) |= (v109 & 1) << (v116 & 7);
      a1[1] = v108;
    }
  }
  return result;
}

__int64* SdkHr_7578c0(__int64* result, __int64* a2, unsigned int a3,
                      unsigned int a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  float v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  float* v24;
  float v25;
  unsigned __int64 v26;
  float v27;

  result[1] = 0;
  v4 = 2 * a3;
  v5 = a2[1];
  if (v5 > v4) {
    v6 = *result;
    v7 = a3 + 1;
    v8 = 0;
    v9 = a3;
    v10 = (float)a3 * 0.001;
    v11 = (unsigned __int64)(float)(60000000.0 / (float)((float)a4 * 220.0));
    do {
      v12 = *a2;
      v13 = v7;
      v14 = *(float*)(*a2 + 4LL * v9);
      v15 = *(float*)(*a2 + 4 * v4);
      v16 = *(float*)(*a2 + 4LL * (v9 - 1));
      v17 = v9 + 1;
      v18 = *(float*)(*a2 + 4LL * (unsigned int)v17);
      if (v16 >= v14) {
        if (v16 > v14 || v18 >= v14) {
          goto LABEL_3;
        }
      }
      else if (v18 > v14) {
        goto LABEL_3;
      }
      v20 = v9;
      v21 = v11 + v9;
      if (v5 < v21) {
        v21 = v5;
      }
      if (v21 <= v17) {
      LABEL_18:
        v26 = v9 - v11;
        if (v9 >= v11 && v26 != 0 && v26 < v5) {
          if (v5 < v9) {
            v20 = v5;
          }
          while (v14 >= *(float*)(v12 + 4 * v26)) {
            if (++v26 >= v20) {
              goto LABEL_25;
            }
          }
        }
        else {
        LABEL_25:
          v27 = v10 + v15;
          if (v14 > (float)(v10 + *(float*)(*a2 + 4LL * (v9 - a3))) &&
              v14 > v27) {
            if (v8 == result[2]) {
              return result;
            }
            *(_DWORD*)(v6 + 4 * v8++) = v9;
            result[1] = v8;
            v5 = a2[1];
          }
        }
      }
      else {
        v22 = 4LL * v7;
        v23 = v21 - v7;
        v24 = (float*)(v12 + v22);
        while (1) {
          v25 = *v24++;
          if (v14 < v25) {
            break;
          }
          if (--v23 == 0) {
            goto LABEL_18;
          }
        }
      }
    LABEL_3:
      v4 = (unsigned int)v17 + a3;
      v7 = v13 + 1;
      ++v9;
    } while (v5 > v4);
  }
  return result;
}

__int64 SdkHr_7f60d0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2;

  if (*(_QWORD*)(a1 + 120) == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(a1 + 16) >= v2) {
    return 0xFFFFFFFFLL;
  }
  if (a2 != -1) {
    if ((*(_BYTE*)(a1 + 152) & 0x10) != 0 ||
        *(unsigned __int8*)(v2 - 1) == (unsigned __int8)a2) {
      *(_QWORD*)(a1 + 24) = v2 - 1;
      *(_BYTE*)(v2 - 1) = a2;
      return a2;
    }
    return 0xFFFFFFFFLL;
  }
  *(_QWORD*)(a1 + 24) = v2 - 1;
  return 0;
}

__int64 SdkHr_80bda0(_QWORD* a1, _QWORD* a2, char a3, __int64 a4, __int16 a5,
                     _DWORD* a6, bool* a7, __int64 a8, __int64* a9,
                     __int64* a10, __int64 a11)
{
  _QWORD* v12;
  _QWORD* v16;
  _BOOL4 v17;
  char* v18;
  unsigned __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  _QWORD* v23;
  _BOOL4 v24;
  int v25;
  unsigned int v26;
  int v27;
  _QWORD* v28;
  _BOOL4 v29;
  int v30;
  unsigned __int8* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  _BYTE* v41;
  __int64* v42;
  void* v43;
  __int64 (*v44)(void*);
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int8* v52;
  __int64 v53;
  bool v54;
  int v55;
  unsigned int v56;
  unsigned __int64 v57;
  int v58;
  unsigned __int8* v59;
  int v60;
  _QWORD* v61;
  _BOOL4 v62;
  char* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  unsigned int v69;
  char* v70;
  unsigned __int64 v71;
  _BOOL4 v72;
  char* v73;
  unsigned __int8 v74;
  _QWORD* v75;
  char* v76;
  char v77;
  unsigned __int64 v78;
  char* v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int8* v86;
  char* v87;
  __int64 v88;
  unsigned __int8 v89;
  unsigned __int8* v90;
  _QWORD* v91;
  __int64 v92;
  unsigned int v93;
  unsigned __int64 v94;
  int v95;
  unsigned __int8* v96;
  int v97;
  char* v98;
  unsigned __int8 v99;
  unsigned __int8* v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  char* v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  char* v109;
  unsigned __int64 v110;
  char* v111;
  char* i;
  unsigned __int64 v113;
  _QWORD* v114;
  _BOOL4 v115;
  int v116;
  unsigned __int8* v117;
  _QWORD* v118;
  __int64 v119;
  char* v120;
  char* v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  _QWORD* v125;
  _BOOL4 v126;
  __int64 v127;
  unsigned __int8* v128;
  unsigned __int8 v129;
  int v130;
  _QWORD* v131;
  __int64 v132;
  __int64* v133;
  bool v134;
  _QWORD* v135;
  _BOOL4 v136;
  int v137;
  unsigned __int8* v138;
  __int64 v139;
  unsigned __int8 v140;
  _BYTE* v141;
  __int64 v142;
  char* v143;
  char v144;
  __int64* v145;
  void* v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 (*v149)(void*);
  __int64 v150;
  __int64* v151;
  __int64 v152;
  _QWORD* v153;
  __int64 v154;
  __int64 v155;
  int v156;
  int v157;
  unsigned __int8* v158;
  __int64 v159;
  unsigned __int8 v160;
  _QWORD* v161;
  char* v162;
  unsigned __int64 v163;
  char* v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  unsigned int v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  _QWORD* v177;
  _BOOL4 v178;
  int v179;
  unsigned __int8* v180;
  int v181;
  _QWORD* v182;
  __int64 v183;
  unsigned __int64 v184;
  char* v185;
  char* v186;
  char* v187;
  int v188;
  bool v189;
  unsigned __int64 v190;
  _BYTE* v191;
  char* v192;
  _BYTE* v193;
  int v194;
  unsigned int v195;
  __int64 v197;
  _DWORD* v198;
  __int64 (*v201)(void*);
  __int64* v202;
  char* v204;
  char* v205;
  char* v206;
  char* v207;
  char* v208;
  char* v210;
  int v211;
  __int64 v212;
  unsigned __int64 v213;
  char* v214;
  __int64 v215;
  unsigned __int64 v216;
  unsigned __int8* v217;
  __int64 v218;
  unsigned __int64 v219;
  unsigned __int8* v220;
  __int64 v221;
  unsigned __int64 v222;
  char* v223;
  __int64 v224;
  unsigned __int64 v225;
  _BYTE* v226;
  char v227[4];
  char v228[4];
  _BYTE v229[4];
  _BYTE v230[400];
  __int64 v231;

  v12 = (_QWORD*)*a1;
  v16 = a2;
  if (v12 != nullptr) {
    if (v12[3] != v12[4]) {
      v17 = false;
      if (a2 == nullptr) {
        goto LABEL_4;
      }
    LABEL_11:
      if (v16[3] == v16[4]) {
        v21 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
        if (v21 == -1) {
          v16 = nullptr;
        }
        if (((v17 ^ (v21 == -1)) & 1) != 0) {
          goto LABEL_13;
        }
      }
      else if (v17) {
        goto LABEL_13;
      }
    LABEL_17:
      v22 = 0;
      *a6 |= 4u;
      return v22;
    }
    if ((*(unsigned int (**)(_QWORD*))(*v12 + 72LL))(v12) != -1) {
      v17 = *a1 == 0;
      if (v16 != nullptr) {
        goto LABEL_11;
      }
      goto LABEL_4;
    }
    *a1 = 0;
  }
  v17 = true;
  if (v16 != nullptr) {
    goto LABEL_11;
  }
LABEL_4:
  if (v17) {
    goto LABEL_17;
  }
  v16 = nullptr;
LABEL_13:
  v198 = a6;
  v225 = 0;
  v226 = nullptr;
  v223 = nullptr;
  v224 = 0;
  v221 = 0;
  v222 = 0;
  v219 = 0;
  v220 = nullptr;
  v217 = nullptr;
  v218 = 0;
  v215 = 0;
  v216 = 0;
  v213 = 0;
  v214 = nullptr;
  v212 = 0;
  SdkRoutine_87d130(a3 & 1, a4, v229, v228, v227, &v224, &v221, &v218, &v215,
                    &v211);
  v18 = v230;
  v19 = 0;
  v20 = nullptr;
  v204 = (char*)&v231;
  v201 = SdkRoutine_80bd80;
  *a10 = *a9;
  v210 = v230;
  while (1) {
    v23 = (_QWORD*)*a1;
    if (*a1 != 0) {
      if (v23[3] != v23[4]) {
        v24 = false;
        if (v16 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_30;
      }
      if ((*(unsigned int (**)(_QWORD*))(*v23 + 72LL))(v23) != -1) {
        v24 = *a1 == 0;
        if (v16 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_30;
      }
      *a1 = 0;
    }
    v24 = true;
    if (v16 == nullptr) {
    LABEL_23:
      if (v24) {
        goto LABEL_380;
      }
      goto LABEL_36;
    }
  LABEL_30:
    if (v16[3] == v16[4]) {
      v25 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
      if (v25 == -1) {
        v16 = nullptr;
      }
      if (((v24 ^ (v25 == -1)) & 1) == 0) {
        goto LABEL_380;
      }
    }
    else if (!v24) {
      goto LABEL_380;
    }
  LABEL_36:
    v202 = v20;
    v26 = (unsigned __int8)v229[v19];
    if (v26 <= 1) {
      if (v229[v19] != 0) {
        if (v26 != 1) {
          goto LABEL_19;
        }
        if (v19 != 3) {
          v52 = *(unsigned __int8**)(*a1 + 24LL);
          if (v52 == *(unsigned __int8**)(*a1 + 32LL)) {
            v74 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
            v53 = v74;
            if ((v74 & 0x80) != 0) {
              goto LABEL_444;
            }
          }
          else {
            v53 = *v52;
            if ((v53 & 0x80) != 0) {
              goto LABEL_444;
            }
          }
          if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v53) & 0x2000) == 0) {
            goto LABEL_444;
          }
          v75 = (_QWORD*)*a1;
          v207 = v18;
          v76 = *(char**)(*a1 + 24LL);
          if (v76 == *(char**)(*a1 + 32LL)) {
            v77 = (*(__int64 (**)(_QWORD*))(*v75 + 80LL))(v75);
            v78 = (unsigned __int8)v212;
            if ((v212 & 1) == 0) {
              goto LABEL_148;
            }
          }
          else {
            v77 = *v76;
            v75[3] = v76 + 1;
            v78 = (unsigned __int8)v212;
            if ((v212 & 1) == 0) {
            LABEL_148:
              if ((_DWORD)v78 != 44) {
                v98 = (char*)&v212 + 1;
                v80 = v78 >> 1;
                LOBYTE(v212) = v78 + 2;
              LABEL_216:
                v106 = &v98[v80];
                while (1) {
                  *v106 = v77;
                  v18 = v207;
                  v20 = v202;
                  v106[1] = 0;
                  v61 = (_QWORD*)*a1;
                  v62 = true;
                  if (*a1 != 0) {
                  LABEL_124:
                    v62 = false;
                    if (v61[3] == v61[4]) {
                      if ((*(unsigned int (**)(_QWORD*))(*v61 + 72LL))(v61) ==
                          -1) {
                        v62 = true;
                        *a1 = 0;
                      }
                      else {
                        v62 = *a1 == 0;
                      }
                    }
                  }
                LABEL_347:
                  if (v16 != nullptr) {
                    if (v16[3] == v16[4]) {
                      v157 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
                      if (v157 == -1) {
                        v16 = nullptr;
                      }
                      if (v62 == (v157 == -1)) {
                        goto LABEL_19;
                      }
                    }
                    else if (!v62) {
                      goto LABEL_19;
                    }
                  }
                  else if (v62) {
                    goto LABEL_19;
                  }
                  v158 = *(unsigned __int8**)(*a1 + 24LL);
                  if (v158 == *(unsigned __int8**)(*a1 + 32LL)) {
                    v160 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
                    v159 = v160;
                    if ((v160 & 0x80) != 0) {
                      goto LABEL_19;
                    }
                  }
                  else {
                    v159 = *v158;
                    if ((v159 & 0x80) != 0) {
                      goto LABEL_19;
                    }
                  }
                  if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v159) & 0x2000) ==
                      0) {
                    goto LABEL_19;
                  }
                  v161 = (_QWORD*)*a1;
                  v207 = v18;
                  v162 = *(char**)(*a1 + 24LL);
                  if (v162 == *(char**)(*a1 + 32LL)) {
                    v77 = (*(__int64 (**)(_QWORD*))(*v161 + 80LL))(v161);
                    v163 = (unsigned __int8)v212;
                    if ((v212 & 1) != 0) {
                      goto LABEL_366;
                    }
                  LABEL_363:
                    v164 = (char*)&v212 + 1;
                    v165 = 22;
                    v166 = 48;
                    if ((_DWORD)v163 == 44) {
                      goto LABEL_374;
                    }
                    LOBYTE(v212) = v163 + 2;
                    v106 = (char*)&v212 + (v163 >> 1) + 1;
                  }
                  else {
                    v77 = *v162;
                    v161[3] = v162 + 1;
                    v163 = (unsigned __int8)v212;
                    if ((v212 & 1) == 0) {
                      goto LABEL_363;
                    }
                  LABEL_366:
                    v164 = v214;
                    v167 = v212 & 0xFFFFFFFFFFFFFFFELL;
                    v165 = (v212 & 0xFFFFFFFFFFFFFFFELL) - 1;
                    if (v213 != v165) {
                      v170 = (__int64)v214;
                      v165 = v213;
                      goto LABEL_379;
                    }
                    v166 = -9;
                    if (v165 < 0x7FFFFFFFFFFFFFF3LL) {
                      v168 = (2 * v165) | 7;
                      if (v168 == 23) {
                        v169 = 26;
                      }
                      else {
                        v169 = v168 + 1;
                      }
                      if (v165 >= 0xC) {
                        v166 = v169;
                      }
                      else {
                        v166 = 23;
                      }
                    LABEL_374:
                      v167 = v165 + 1;
                    }
                    v170 = SdkRoutine_85e050(v166);
                    SdkRoutine_858a50(v170, v164, v165);
                    if (v167 != 23) {
                      SdkRoutine_857220(v164, v167);
                    }
                    v214 = (char*)v170;
                    v212 = v166 | 1;
                  LABEL_379:
                    v213 = v165 + 1;
                    v106 = (char*)(v170 + v165);
                  }
                }
              }
              v79 = (char*)&v212 + 1;
              v80 = 22;
              v81 = 48;
              goto LABEL_159;
            }
          }
          v79 = v214;
          v82 = v212 & 0xFFFFFFFFFFFFFFFELL;
          v80 = (v212 & 0xFFFFFFFFFFFFFFFELL) - 1;
          if (v213 != v80) {
            v98 = v214;
            v80 = v213;
          LABEL_215:
            v213 = v80 + 1;
            goto LABEL_216;
          }
          if (v80 >= 0x7FFFFFFFFFFFFFF3LL) {
            v81 = -9;
            goto LABEL_212;
          }
          v83 = (2 * v80) | 7;
          if (v83 == 23) {
            v84 = 26;
          }
          else {
            v84 = v83 + 1;
          }
          if (v80 >= 0xC) {
            v81 = v84;
          }
          else {
            v81 = 23;
          }
        LABEL_159:
          v82 = v80 + 1;
        LABEL_212:
          v98 = (char*)SdkRoutine_85e050(v81);
          SdkRoutine_858a50(v98, v79, v80);
          if (v82 != 23) {
            SdkRoutine_857220(v79, v82);
          }
          v214 = v98;
          v212 = v81 | 1;
          goto LABEL_215;
        }
      }
      else if (v19 != 3) {
        v61 = (_QWORD*)*a1;
        v62 = true;
        if (*a1 == 0) {
          goto LABEL_347;
        }
        goto LABEL_124;
      }
    LABEL_380:
      if (v20 == nullptr ||
          (((v171 = *(unsigned __int8*)v20) & 1) != 0 ? (v172 = v20[1])
                                                      : (v172 = v171 >> 1),
           v172 < 2)) {
      LABEL_415:
        if (v18 == v210) {
          v22 = 1;
        }
        else {
          v184 = v225;
          v22 = 1;
          if ((v224 & 1) == 0) {
            v184 = (unsigned __int64)(unsigned __int8)v224 >> 1;
          }
          if (v210 - v18 >= 5 && v184 != 0) {
            v185 = v210 - 4;
            if (v18 < v210 - 4) {
              v186 = v18 + 4;
              v187 = v210 - 4;
              do {
                v188 = *((_DWORD*)v186 - 1);
                *((_DWORD*)v186 - 1) = *(_DWORD*)v187;
                *(_DWORD*)v187 = v188;
                v187 -= 4;
                v189 = v186 >= v187;
                v186 += 4;
              } while (!v189);
              v190 = (unsigned __int64)(unsigned __int8)v224 >> 1;
              if ((v224 & 1) != 0) {
                v191 = v226;
              }
              else {
                v191 = (char*)&v224 + 1;
              }
              if ((v224 & 1) != 0) {
                v190 = v225;
              }
              v192 = v18;
              v193 = &v191[v190];
              while (1) {
                v194 = (unsigned __int8)*v191;
                if (*v191 != 0 && v194 != 255 && *(_DWORD*)v192 != v194) {
                  goto LABEL_444;
                }
                v192 += 4;
                if (v193 - v191 > 1) {
                  ++v191;
                }
                if (v192 >= v185) {
                  goto LABEL_441;
                }
              }
            }
            v191 = (v224 & 1) != 0 ? v226 : (char*)&v224 + 1;
          LABEL_441:
            v195 = (unsigned __int8)*v191;
            v22 = 1;
            if (v195 != 0 && v195 != 255 && *(_DWORD*)v185 - 1 >= v195) {
              goto LABEL_444;
            }
          }
        }
        goto LABEL_445;
      }
      v173 = 2;
      v174 = 1;
      while (1) {
        v177 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v177[3] != v177[4]) {
            v178 = false;
            if (v16 == nullptr) {
              goto LABEL_394;
            }
            goto LABEL_401;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v177 + 72LL))(v177) != -1) {
            v178 = *a1 == 0;
            if (v16 == nullptr) {
              goto LABEL_394;
            }
            goto LABEL_401;
          }
          *a1 = 0;
        }
        v178 = true;
        if (v16 == nullptr) {
        LABEL_394:
          if (v178) {
            goto LABEL_444;
          }
          v16 = nullptr;
          goto LABEL_407;
        }
      LABEL_401:
        if (v16[3] == v16[4]) {
          v179 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
          if (v179 == -1) {
            v16 = nullptr;
          }
          if (v178 == (v179 == -1)) {
            goto LABEL_444;
          }
        }
        else if (!v178) {
          goto LABEL_444;
        }
      LABEL_407:
        v180 = *(unsigned __int8**)(*a1 + 24LL);
        if (v180 == *(unsigned __int8**)(*a1 + 32LL)) {
          v181 = (*(unsigned __int8 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
          if ((*(_BYTE*)v20 & 1) == 0) {
          LABEL_412:
            if (v181 != *((unsigned __int8*)v20 + v174 + 1)) {
              goto LABEL_444;
            }
            goto LABEL_413;
          }
        }
        else {
          v181 = *v180;
          if ((*(_BYTE*)v20 & 1) == 0) {
            goto LABEL_412;
          }
        }
        if (v181 != *(unsigned __int8*)(v20[2] + v174)) {
          goto LABEL_444;
        }
      LABEL_413:
        v182 = (_QWORD*)*a1;
        v183 = *(_QWORD*)(*a1 + 24LL);
        if (v183 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v182 + 80LL))(v182);
        }
        else {
          v182[3] = v183 + 1;
        }
        v175 = *(unsigned __int8*)v20;
        v174 = v173++;
        if ((v175 & 1) != 0) {
          v176 = v20[1];
        }
        else {
          v176 = v175 >> 1;
        }
        if (v176 <= v174) {
          goto LABEL_415;
        }
      }
    }
    if (v26 == 2) {
      if (v20 != nullptr || v19 < 2) {
        v69 = (unsigned __int8)v221;
        v206 = v18;
        v71 = v222;
        v70 = v223;
        v72 = (v221 & 1) == 0;
        if ((v221 & 1) != 0) {
          v73 = v223;
        }
        else {
          v73 = (char*)&v221 + 1;
        }
        if (v19 != 0 && (unsigned __int8)v229[v19 - 1] <= 1u) {
        LABEL_164:
          if (v72) {
            v85 = v69 >> 1;
          }
          else {
            v85 = v71;
          }
          if (v85 != 0) {
            v86 = (unsigned __int8*)&v73[v85];
            v87 = v73;
            do {
              v88 = *v87;
              if (v88 < 0 ||
                  (*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v88) & 0x2000) == 0) {
                goto LABEL_218;
              }
              ++v87;
              --v85;
            } while (v85 != 0);
            v87 = (char*)v86;
          }
          else {
            v87 = v73;
          }
        LABEL_218:
          v107 = v213;
          v108 = v87 - v73;
          if ((v212 & 1) == 0) {
            v107 = (unsigned __int64)(unsigned __int8)v212 >> 1;
          }
          if (v108 <= v107) {
            v109 = (char*)&v212 + 1;
            if ((v212 & 1) != 0) {
              v109 = v214;
            }
            if ((unsigned int)SdkRoutine_8572f0(&v109[v107 - v108], v73,
                                                v108) == 0) {
              v73 = v87;
            }
          }
        }
      }
      else {
        v54 = v229[3] != 0 && v19 == 2;
        v55 = v54;
        if ((a5 & 0x200) == 0 && v55 == 0) {
          v20 = nullptr;
          goto LABEL_19;
        }
        v69 = (unsigned __int8)v221;
        v206 = v18;
        v71 = v222;
        v70 = v223;
        v72 = (v221 & 1) == 0;
        if ((v221 & 1) != 0) {
          v73 = v223;
        }
        else {
          v73 = (char*)&v221 + 1;
        }
        if ((unsigned __int8)v229[v19 - 1] <= 1u) {
          goto LABEL_164;
        }
      }
      v110 = v69 >> 1;
      if ((v69 & 1) != 0) {
        v111 = v70;
      }
      else {
        v111 = (char*)&v221 + 1;
      }
      if ((v69 & 1) != 0) {
        v110 = v71;
      }
      for (i = &v111[v110];; i = &v120[v113]) {
        if (v73 == i) {
        LABEL_260:
          if ((a5 & 0x200) != 0) {
            v121 = v223;
            v122 = (unsigned __int64)(unsigned __int8)v221 >> 1;
            if ((v221 & 1) != 0) {
              v122 = v222;
            }
            else {
              v121 = (char*)&v221 + 1;
            }
            v18 = v206;
            v54 = v73 == &v121[v122];
            v20 = v202;
            if (!v54) {
              goto LABEL_444;
            }
          }
          else {
            v18 = v206;
            v20 = v202;
          }
          goto LABEL_19;
        }
        v114 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v114[3] != v114[4]) {
            v115 = false;
            if (v16 == nullptr) {
              goto LABEL_238;
            }
            goto LABEL_245;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v114 + 72LL))(v114) != -1) {
            v115 = *a1 == 0;
            if (v16 == nullptr) {
              goto LABEL_238;
            }
            goto LABEL_245;
          }
          *a1 = 0;
        }
        v115 = true;
        if (v16 == nullptr) {
        LABEL_238:
          if (v115) {
            goto LABEL_260;
          }
          goto LABEL_251;
        }
      LABEL_245:
        if (v16[3] == v16[4]) {
          v116 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
          if (v116 == -1) {
            v16 = nullptr;
          }
          if (v115 == (v116 == -1)) {
            goto LABEL_260;
          }
        }
        else if (!v115) {
          goto LABEL_260;
        }
      LABEL_251:
        v117 = *(unsigned __int8**)(*a1 + 24LL);
        if (v117 == *(unsigned __int8**)(*a1 + 32LL)) {
          if ((*(unsigned __int8 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1) !=
              (unsigned __int8)*v73) {
            goto LABEL_260;
          }
        }
        else if (*v117 != (unsigned __int8)*v73) {
          goto LABEL_260;
        }
        v118 = (_QWORD*)*a1;
        v119 = *(_QWORD*)(*a1 + 24LL);
        if (v119 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v118 + 80LL))(v118);
        }
        else {
          v118[3] = v119 + 1;
        }
        v120 = (char*)&v221 + 1;
        if ((v221 & 1) != 0) {
          v120 = v223;
        }
        v113 = (unsigned __int64)(unsigned __int8)v221 >> 1;
        ++v73;
        if ((v221 & 1) != 0) {
          v113 = v222;
        }
      }
    }
    if (v26 != 3) {
      break;
    }
    v56 = (unsigned __int8)v218;
    v57 = v219;
    v58 = v218 & 1;
    if (v58 == 0) {
      v57 = (unsigned __int64)(unsigned __int8)v218 >> 1;
    }
    if (v57 != 0) {
      v59 = *(unsigned __int8**)(*a1 + 24LL);
      if (v59 == *(unsigned __int8**)(*a1 + 32LL)) {
        v89 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v56 = (unsigned __int8)v218;
        v60 = v89;
        v58 = v218 & 1;
      }
      else {
        v60 = *v59;
      }
      v90 = v220;
      if (v58 == 0) {
        v90 = (unsigned __int8*)&v218 + 1;
      }
      if (v60 == *v90) {
        v91 = (_QWORD*)*a1;
        v92 = *(_QWORD*)(*a1 + 24LL);
        if (v92 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v91 + 80LL))(v91);
          v56 = (unsigned __int8)v218;
          v58 = v218 & 1;
        }
        else {
          v91[3] = v92 + 1;
        }
        v105 = v56 >> 1;
        *a7 = false;
        if (v58 != 0) {
          v105 = v219;
        }
        if (v105 > 1) {
          v20 = &v218;
        }
        goto LABEL_19;
      }
    }
    v93 = (unsigned __int8)v215;
    v94 = v216;
    v95 = v215 & 1;
    if (v95 == 0) {
      v94 = (unsigned __int64)(unsigned __int8)v215 >> 1;
    }
    if (v94 != 0) {
      v96 = *(unsigned __int8**)(*a1 + 24LL);
      if (v96 == *(unsigned __int8**)(*a1 + 32LL)) {
        v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v93 = (unsigned __int8)v215;
        v97 = v99;
        v95 = v215 & 1;
      }
      else {
        v97 = *v96;
      }
      v100 = v217;
      if (v95 == 0) {
        v100 = (unsigned __int8*)&v215 + 1;
      }
      if (v97 == *v100) {
        v101 = (_QWORD*)*a1;
        v102 = *(_QWORD*)(*a1 + 24LL);
        if (v102 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v101 + 80LL))(v101);
          v93 = (unsigned __int8)v215;
          v95 = v215 & 1;
        }
        else {
          v101[3] = v102 + 1;
        }
        v123 = v93 >> 1;
        *a7 = true;
        v124 = v216;
        if (v95 == 0) {
          v124 = v123;
        }
        if (v124 > 1) {
          v20 = &v215;
        }
        goto LABEL_19;
      }
      v56 = (unsigned __int8)v218;
    }
    if ((v56 & 1) != 0) {
      v103 = v219;
    }
    else {
      v103 = v56 >> 1;
    }
    if ((v93 & 1) != 0) {
      v104 = v216;
    }
    else {
      v104 = v93 >> 1;
    }
    if (v103 != 0) {
      if (v104 != 0) {
        goto LABEL_444;
      }
    }
    else if (v104 == 0) {
      goto LABEL_19;
    }
    *a7 = v103 != 0;
  LABEL_19:
    if (++v19 == 4) {
      goto LABEL_380;
    }
  }
  if (v26 != 4) {
    goto LABEL_19;
  }
  v27 = 0;
  while (2) {
    v28 = (_QWORD*)*a1;
    if (*a1 == 0) {
    LABEL_51:
      v29 = true;
      if (v16 == nullptr) {
        goto LABEL_45;
      }
      goto LABEL_52;
    }
    if (v28[3] == v28[4]) {
      if ((*(unsigned int (**)(_QWORD*))(*v28 + 72LL))(v28) != -1) {
        v29 = *a1 == 0;
        if (v16 == nullptr) {
          goto LABEL_45;
        }
        goto LABEL_52;
      }
      *a1 = 0;
      goto LABEL_51;
    }
    v29 = false;
    if (v16 == nullptr) {
    LABEL_45:
      if (v29) {
        goto LABEL_127;
      }
      goto LABEL_58;
    }
  LABEL_52:
    if (v16[3] != v16[4]) {
      if (!v29) {
        goto LABEL_127;
      }
    LABEL_58:
      v31 = *(unsigned __int8**)(*a1 + 24LL);
      if (v31 != *(unsigned __int8**)(*a1 + 32LL)) {
        v32 = *v31;
        v33 = a11;
        if ((v32 & 0x80) != 0) {
          goto LABEL_63;
        }
      LABEL_62:
        if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v32) & 0x800) != 0) {
          v41 = (_BYTE*)*a10;
          if (*a10 == v33) {
            v205 = v18;
            v43 = (void*)*a9;
            v44 = (__int64 (*)(void*))a9[1];
            v45 = v33 - *a9;
            v46 = 2 * v45;
            if (2 * v45 <= 1) {
              v46 = 1;
            }
            if (v45 <= 0x7FFFFFFFFFFFFFFELL) {
              v47 = v46;
            }
            else {
              v47 = -1;
            }
            if (v44 == SdkRoutine_80bd80) {
              v39 = SdkRoutine_8578d0(v47);
              if (v39 == 0) {
              LABEL_459:
                v150 = SdkRoutine_87ca10(v39);
              LABEL_460:
                v67 = SdkRoutine_87ca10(v150);
              LABEL_461:
                v197 = SdkRoutine_87ca10(v67);
                SdkRoutine_7cd620(v197);
              }
              v51 = v39;
              SdkRoutine_856130(v39, v43, v45);
              v48 = a9;
              v39 = v51;
              *a9 = v51;
              if (v43 != nullptr) {
                v44(v43);
                v48 = a9;
                v39 = *a9;
              }
            }
            else {
              v39 = SdkRoutine_859610(*a9, v47);
              if (v39 == 0) {
                goto LABEL_459;
              }
              v48 = a9;
              *a9 = v39;
            }
            v18 = v205;
            v42 = a10;
            v48[1] = SdkData_e86b48;
            v41 = (_BYTE*)(v39 + v45);
            v20 = v202;
            *a10 = (__int64)v41;
            a11 = *v48 + v47;
          }
          else {
            v42 = a10;
          }
          ++v27;
          *v42 = (__int64)(v41 + 1);
          *v41 = v32;
          v49 = (_QWORD*)*a1;
          v50 = *(_QWORD*)(*a1 + 24LL);
          if (v50 != *(_QWORD*)(*a1 + 32LL)) {
          LABEL_41:
            v49[3] = v50 + 1;
            continue;
          }
        }
        else {
        LABEL_63:
          if ((v224 & 1) != 0) {
            v35 = v225;
          }
          else {
            v35 = (unsigned __int64)(unsigned __int8)v224 >> 1;
          }
          if (v35 == 0 || v27 == 0 || v32 != (unsigned __int8)v227[0]) {
            goto LABEL_127;
          }
          v36 = v210;
          if (v210 == v204) {
            v37 = v204 - v18;
            if (v204 == v18) {
              v38 = 4;
            }
            else {
              v38 = 2 * (v204 - v18);
            }
            if (v37 >= 0x7FFFFFFFFFFFFFFFLL) {
              v38 = -1;
            }
            if (v201 == SdkRoutine_80bd80) {
              v39 = SdkRoutine_8578d0(v38);
              if (v39 == 0) {
                goto LABEL_459;
              }
              v40 = (char*)v39;
              SdkRoutine_856130(v39, v18, v37);
              if (v18 != nullptr) {
                v201(v18);
              }
            }
            else {
              v39 = SdkRoutine_859610(v18, v38);
              v40 = (char*)v39;
              if (v39 == 0) {
                goto LABEL_459;
              }
            }
            v36 = &v40[v37];
            v18 = v40;
            v204 = &v40[v38 & 0xFFFFFFFFFFFFFFFCLL];
            v20 = v202;
            v201 = (__int64 (*)(void*))SdkData_e86b48;
          }
          *(_DWORD*)v36 = v27;
          v27 = 0;
          v210 = v36 + 4;
          v49 = (_QWORD*)*a1;
          v50 = *(_QWORD*)(*a1 + 24LL);
          if (v50 != *(_QWORD*)(*a1 + 32LL)) {
            goto LABEL_41;
          }
        }
        (*(void (**)(_QWORD*))(*v49 + 80LL))(v49);
        continue;
      }
      v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
      v32 = v34;
      v33 = a11;
      if ((v34 & 0x80) == 0) {
        goto LABEL_62;
      }
      goto LABEL_63;
    }
    break;
  }
  v30 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
  if (v30 == -1) {
    v16 = nullptr;
  }
  if (v29 != (v30 == -1)) {
    goto LABEL_58;
  }
LABEL_127:
  v63 = v210;
  if (v18 != v210 && v27 != 0) {
    if (v210 == v204) {
      v64 = v204 - v18;
      v65 = 2 * (v204 - v18);
      if (v204 == v18) {
        v65 = 4;
      }
      if (v64 >= 0x7FFFFFFFFFFFFFFFLL) {
        v66 = -1;
      }
      else {
        v66 = v65;
      }
      if (v201 == SdkRoutine_80bd80) {
        v67 = SdkRoutine_8578d0(v66);
        if (v67 == 0) {
          goto LABEL_461;
        }
        v68 = (char*)v67;
        SdkRoutine_856130(v67, v18, v64);
        if (v18 != nullptr) {
          v201(v18);
        }
      }
      else {
        v67 = SdkRoutine_859610(v18, v66);
        v68 = (char*)v67;
        if (v67 == 0) {
          goto LABEL_461;
        }
      }
      v63 = &v68[v64];
      v18 = v68;
      v204 = &v68[v66 & 0xFFFFFFFFFFFFFFFCLL];
      v201 = (__int64 (*)(void*))SdkData_e86b48;
    }
    *(_DWORD*)v63 = v27;
    v63 += 4;
  }
  v210 = v63;
  if (v211 < 1) {
    goto LABEL_302;
  }
  v125 = (_QWORD*)*a1;
  v208 = v18;
  if (*a1 != 0) {
    if (v125[3] != v125[4]) {
      v126 = false;
      goto LABEL_285;
    }
    if ((*(unsigned int (**)(_QWORD*))(*v125 + 72LL))(v125) != -1) {
      v126 = *a1 == 0;
      goto LABEL_285;
    }
    *a1 = 0;
  }
  v126 = true;
LABEL_285:
  if (v16 == nullptr) {
    if (v126) {
      goto LABEL_444;
    }
    v16 = nullptr;
    v127 = *a1;
    v128 = *(unsigned __int8**)(*a1 + 24LL);
    if (v128 != *(unsigned __int8**)(*a1 + 32LL)) {
      goto LABEL_297;
    }
    goto LABEL_291;
  }
  if (v16[3] == v16[4]) {
    v130 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
    if (v130 == -1) {
      v16 = nullptr;
    }
    if (v126 != (v130 == -1)) {
      goto LABEL_296;
    }
  }
  else {
    if (!v126) {
      goto LABEL_444;
    }
  LABEL_296:
    v127 = *a1;
    v128 = *(unsigned __int8**)(*a1 + 24LL);
    if (v128 != *(unsigned __int8**)(*a1 + 32LL)) {
    LABEL_297:
      if (*v128 != (unsigned __int8)v228[0]) {
        goto LABEL_444;
      }
    LABEL_298:
      v131 = (_QWORD*)*a1;
      v132 = *(_QWORD*)(*a1 + 24LL);
      if (v132 == *(_QWORD*)(*a1 + 32LL)) {
        (*(void (**)(_QWORD*))(*v131 + 80LL))(v131);
      }
      else {
        v131[3] = v132 + 1;
      }
      if (v211 < 1) {
      LABEL_302:
        v133 = a10;
      LABEL_303:
        if (*v133 == *a9) {
          goto LABEL_444;
        }
        goto LABEL_19;
      }
      while (2) {
        v135 = (_QWORD*)*a1;
        if (*a1 != 0) {
          if (v135[3] != v135[4]) {
            v136 = false;
            if (v16 == nullptr) {
              goto LABEL_309;
            }
          LABEL_316:
            if (v16[3] == v16[4]) {
              v137 = (*(__int64 (**)(_QWORD*))(*v16 + 72LL))(v16);
              if (v137 == -1) {
                v16 = nullptr;
              }
              if (v136 == (v137 == -1)) {
                goto LABEL_444;
              }
            }
            else if (!v136) {
              goto LABEL_444;
            }
          LABEL_322:
            v138 = *(unsigned __int8**)(*a1 + 24LL);
            if (v138 == *(unsigned __int8**)(*a1 + 32LL)) {
              v140 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
              v139 = v140;
              if ((v140 & 0x80) != 0) {
                goto LABEL_444;
              }
            }
            else {
              v139 = *v138;
              if ((v139 & 0x80) != 0) {
                goto LABEL_444;
              }
            }
            if ((*(_WORD*)(*(_QWORD*)(a8 + 16) + 2 * v139) & 0x800) == 0) {
              goto LABEL_444;
            }
            v141 = (_BYTE*)*a10;
            if (*a10 != a11) {
              v142 = *a1;
              v143 = *(char**)(*a1 + 24LL);
              if (v143 != *(char**)(*a1 + 32LL)) {
                goto LABEL_329;
              }
            LABEL_342:
              v144 = (*(__int64 (**)(__int64))(*(_QWORD*)v142 + 72LL))(v142);
              v145 = a10;
              v141 = (_BYTE*)*a10;
              goto LABEL_343;
            }
            v146 = (void*)*a9;
            v147 = a11 - *a9;
            if (v147 > 0x7FFFFFFFFFFFFFFELL) {
              v148 = -1;
              v149 = (__int64 (*)(void*))a9[1];
              if (v149 != SdkRoutine_80bd80) {
                goto LABEL_335;
              }
            }
            else {
              if (2 * v147 <= 1) {
                v148 = 1;
              }
              else {
                v148 = 2 * v147;
              }
              v149 = (__int64 (*)(void*))a9[1];
              if (v149 != SdkRoutine_80bd80) {
              LABEL_335:
                v150 = SdkRoutine_859610(*a9, v148);
                if (v150 == 0) {
                  goto LABEL_460;
                }
                v151 = a9;
                *a9 = v150;
              LABEL_341:
                v18 = v208;
                v151[1] = SdkData_e86b48;
                v141 = (_BYTE*)(v150 + v147);
                v20 = v202;
                *a10 = (__int64)v141;
                a11 = *v151 + v148;
                v142 = *a1;
                v143 = *(char**)(*a1 + 24LL);
                if (v143 == *(char**)(*a1 + 32LL)) {
                  goto LABEL_342;
                }
              LABEL_329:
                v144 = *v143;
                v145 = a10;
              LABEL_343:
                *v145 = (__int64)(v141 + 1);
                *v141 = v144;
                v153 = (_QWORD*)*a1;
                v154 = *(_QWORD*)(*a1 + 24LL);
                v155 = *(_QWORD*)(*a1 + 32LL);
                v156 = --v211;
                if (v154 == v155) {
                  (*(void (**)(_QWORD*))(*v153 + 80LL))(v153);
                  v133 = a10;
                  if (v211 <= 0) {
                    goto LABEL_303;
                  }
                }
                else {
                  v153[3] = v154 + 1;
                  v134 = v156 <= 0;
                  v133 = a10;
                  if (v134) {
                    goto LABEL_303;
                  }
                }
                continue;
              }
            }
            v150 = SdkRoutine_8578d0(v148);
            if (v150 == 0) {
              goto LABEL_460;
            }
            v152 = v150;
            SdkRoutine_856130(v150, v146, v147);
            v151 = a9;
            v150 = v152;
            *a9 = v152;
            if (v146 != nullptr) {
              v149(v146);
              v151 = a9;
              v150 = *a9;
            }
            goto LABEL_341;
          }
          if ((*(unsigned int (**)(_QWORD*))(*v135 + 72LL))(v135) != -1) {
            v136 = *a1 == 0;
            if (v16 != nullptr) {
              goto LABEL_316;
            }
            goto LABEL_309;
          }
          *a1 = 0;
        }
        break;
      }
      v136 = true;
      if (v16 != nullptr) {
        goto LABEL_316;
      }
    LABEL_309:
      if (v136) {
        goto LABEL_444;
      }
      v16 = nullptr;
      goto LABEL_322;
    }
  LABEL_291:
    v129 = (*(__int64 (**)(__int64))(*(_QWORD*)v127 + 72LL))(v127);
    if (v129 == (unsigned __int8)v228[0]) {
      goto LABEL_298;
    }
  }
LABEL_444:
  v22 = 0;
  *v198 |= 4u;
LABEL_445:
  if ((v212 & 1) == 0) {
    if ((v215 & 1) == 0) {
      goto LABEL_447;
    }
  LABEL_453:
    SdkRoutine_857220(v217, v215 & 0xFFFFFFFFFFFFFFFELL);
    if ((v218 & 1) != 0) {
      goto LABEL_454;
    }
  LABEL_448:
    if ((v221 & 1) == 0) {
      goto LABEL_449;
    }
  LABEL_455:
    SdkRoutine_857220(v223, v221 & 0xFFFFFFFFFFFFFFFELL);
    if ((v224 & 1) != 0) {
      goto LABEL_456;
    }
  LABEL_450:
    if (v18 == nullptr) {
      return v22;
    }
  LABEL_457:
    v201(v18);
    return v22;
  }
  SdkRoutine_857220(v214, v212 & 0xFFFFFFFFFFFFFFFELL);
  if ((v215 & 1) != 0) {
    goto LABEL_453;
  }
LABEL_447:
  if ((v218 & 1) == 0) {
    goto LABEL_448;
  }
LABEL_454:
  SdkRoutine_857220(v220, v218 & 0xFFFFFFFFFFFFFFFELL);
  if ((v221 & 1) != 0) {
    goto LABEL_455;
  }
LABEL_449:
  if ((v224 & 1) == 0) {
    goto LABEL_450;
  }
LABEL_456:
  SdkRoutine_857220(v226, v224 & 0xFFFFFFFFFFFFFFFELL);
  if (v18 != nullptr) {
    goto LABEL_457;
  }
  return v22;
}

__int64 SdkHr_80e200(_QWORD* a1, _QWORD* a2, char a3, __int64 a4, __int16 a5,
                     _DWORD* a6, bool* a7, __int64 a8, __int64* a9,
                     __int64* a10, unsigned __int64 a11)
{
  _QWORD* v12;
  _DWORD* v18;
  _BOOL4 v19;
  int* v20;
  int v21;
  _BOOL4 v22;
  char* v23;
  char* v25;
  _QWORD* v26;
  int* v27;
  int v28;
  _BOOL4 v29;
  int* v30;
  int v31;
  unsigned int v32;
  int v33;
  _QWORD* v34;
  int* v35;
  int v36;
  _BOOL4 v37;
  int* v38;
  int v39;
  unsigned int* v40;
  unsigned int v41;
  _DWORD* v42;
  __int64* v43;
  unsigned __int64 v44;
  _QWORD* v45;
  __int64 v46;
  void* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 (*v54)(void*);
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned int* v58;
  __int64 v59;
  bool v60;
  int v61;
  unsigned int v62;
  unsigned __int64 v63;
  int v64;
  int* v65;
  int v66;
  _QWORD* v67;
  _BOOL4 v68;
  int* v69;
  int v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  unsigned int v76;
  char* v77;
  int v78;
  char* v79;
  char* v80;
  _QWORD* v81;
  int* v82;
  int v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  char* v87;
  unsigned __int64 v88;
  char v89;
  char* v90;
  unsigned __int64 v91;
  _DWORD* v92;
  _QWORD* v93;
  __int64 v94;
  unsigned int v95;
  unsigned __int64 v96;
  int v97;
  int* v98;
  int v99;
  _DWORD* v100;
  _QWORD* v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int8* v106;
  unsigned __int64 v107;
  __int64 v108;
  char* v109;
  char* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  _QWORD* v113;
  int* v114;
  int v115;
  _BOOL4 v116;
  int* v117;
  int v118;
  int* v119;
  int v120;
  _QWORD* v121;
  __int64 v122;
  char* v123;
  char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  bool v127;
  unsigned __int8* v128;
  _QWORD* v129;
  int* v130;
  int v131;
  _BOOL4 v132;
  int* v133;
  int v134;
  int* v135;
  int v136;
  _QWORD* v137;
  __int64 v138;
  _QWORD* v139;
  int* v140;
  int v141;
  _BOOL4 v142;
  int* v143;
  int v144;
  unsigned int* v145;
  __int64 v146;
  _DWORD* v147;
  _QWORD* v148;
  int* v149;
  int v150;
  __int64* v151;
  void* v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64* v155;
  __int64* v156;
  __int64 (*v157)(void*);
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  int v162;
  int v163;
  __int64 v164;
  __int64 v165;
  int v166;
  char* v167;
  int* v168;
  int v169;
  unsigned int* v170;
  __int64 v171;
  _QWORD* v172;
  int* v173;
  _DWORD* v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  unsigned int v177;
  unsigned __int64 v178;
  char* v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  _QWORD* v182;
  int* v183;
  int v184;
  _BOOL4 v185;
  int* v186;
  int v187;
  int* v188;
  int v189;
  _QWORD* v190;
  __int64 v191;
  int v192;
  unsigned int v193;
  unsigned __int64 v194;
  char* v195;
  char* v196;
  char* v197;
  int v198;
  bool v199;
  unsigned __int64 v200;
  _BYTE* v201;
  char* v202;
  _BYTE* v203;
  int v204;
  unsigned int v205;
  __int64 v207;
  _DWORD* v208;
  unsigned __int8* v211;
  __int64 (*v212)(void*);
  __int64 v213;
  char* v214;
  char* v215;
  char* v216;
  char* v217;
  unsigned __int64 v218;
  int v219;
  __int64 v220;
  unsigned __int64 v221;
  char* v222;
  __int64 v223;
  unsigned __int64 v224;
  _DWORD* v225;
  __int64 v226;
  unsigned __int64 v227;
  _DWORD* v228;
  __int64 v229;
  unsigned __int64 v230;
  char* v231;
  __int64 v232;
  unsigned __int64 v233;
  _BYTE* v234;
  int v235;
  int v236;
  _BYTE v237[4];
  _BYTE v238[400];
  __int64 v239;

  v12 = (_QWORD*)*a1;
  if (v12 != nullptr) {
    v18 = (_DWORD*)v12[3];
    if (v18 == (_DWORD*)v12[4]) {
      if ((*(unsigned int (**)(_QWORD*))(*v12 + 72LL))(v12) != -1) {
      LABEL_4:
        v19 = *a1 == 0;
        if (a2 == nullptr) {
          goto LABEL_5;
        }
      LABEL_10:
        v20 = (int*)a2[3];
        if (v20 == (int*)a2[4]) {
          v192 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          if (v192 == -1) {
            a2 = nullptr;
          }
          if (((v19 ^ (v192 == -1)) & 1) != 0) {
            goto LABEL_14;
          }
        }
        else {
          v21 = *v20;
          v22 = *v20 == -1;
          if (v21 == -1) {
            a2 = nullptr;
          }
          if (((v19 ^ v22) & 1) != 0) {
            goto LABEL_14;
          }
        }
      LABEL_393:
        v193 = 0;
        *a6 |= 4u;
        return v193;
      }
    }
    else if (*v18 != -1) {
      goto LABEL_4;
    }
    *a1 = 0;
  }
  v19 = true;
  if (a2 != nullptr) {
    goto LABEL_10;
  }
LABEL_5:
  if (v19) {
    goto LABEL_393;
  }
  a2 = nullptr;
LABEL_14:
  v208 = a6;
  v233 = 0;
  v234 = nullptr;
  v231 = nullptr;
  v232 = 0;
  v229 = 0;
  v230 = 0;
  v227 = 0;
  v228 = nullptr;
  v225 = nullptr;
  v226 = 0;
  v223 = 0;
  v224 = 0;
  v221 = 0;
  v222 = nullptr;
  v220 = 0;
  SdkRoutine_87d150(a3 & 1, a4, v237, &v236, &v235, &v232, &v229, &v226, &v223,
                    &v219);
  v23 = v238;
  v211 = nullptr;
  v218 = 0;
  v217 = (char*)&v239;
  *a10 = *a9;
  v25 = v238;
  v212 = SdkRoutine_80bd80;
  v213 = a8;
  while (1) {
    v26 = (_QWORD*)*a1;
    if (*a1 != 0) {
      v27 = (int*)v26[3];
      if (v27 == (int*)v26[4]) {
        v28 = (*(__int64 (**)(_QWORD*))(*v26 + 72LL))(v26);
      }
      else {
        v28 = *v27;
      }
      if (v28 != -1) {
        v29 = *a1 == 0;
        if (a2 == nullptr) {
          goto LABEL_23;
        }
        goto LABEL_27;
      }
      *a1 = 0;
    }
    v29 = true;
    if (a2 == nullptr) {
    LABEL_23:
      if (v29) {
        goto LABEL_354;
      }
      goto LABEL_33;
    }
  LABEL_27:
    v30 = (int*)a2[3];
    if (v30 == (int*)a2[4]) {
      v31 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    }
    else {
      v31 = *v30;
    }
    if (v31 == -1) {
      a2 = nullptr;
    }
    if (((v29 ^ (v31 == -1)) & 1) == 0) {
      goto LABEL_354;
    }
  LABEL_33:
    v32 = (unsigned __int8)v237[v218];
    if (v32 <= 1) {
      break;
    }
    if (v32 == 2) {
      if (v211 != nullptr || v218 < 2) {
        v76 = (unsigned __int8)v229;
        v77 = v231;
        v216 = v23;
        v78 = v229 & 1;
        if (v78 != 0) {
          v79 = v231;
        }
        else {
          v79 = (char*)&v229 + 4;
        }
        if (v218 != 0) {
          v80 = v79;
          v78 = v229 & 1;
          if ((unsigned __int8)v237[v218 - 1] <= 1u) {
            goto LABEL_156;
          }
          goto LABEL_209;
        }
      }
      else {
        v60 = v237[3] != 0 && v218 == 2;
        v61 = v60;
        if ((a5 & 0x200) == 0 && v61 == 0) {
          v211 = nullptr;
          goto LABEL_16;
        }
        v76 = (unsigned __int8)v229;
        v77 = v231;
        v216 = v23;
        if ((v229 & 1) != 0) {
          v80 = v231;
        }
        else {
          v80 = (char*)&v229 + 4;
        }
        v78 = v229 & 1;
        if ((unsigned __int8)v237[v218 - 1] > 1u) {
          goto LABEL_209;
        }
      LABEL_156:
        v87 = (char*)&v229 + 4;
        v88 = v230;
        if (v78 != 0) {
          v87 = v77;
        }
        else {
          v88 = v76 >> 1;
        }
        if (v80 != &v87[4 * v88]) {
          while (1) {
            v89 = (*(__int64 (**)(__int64, __int64, _QWORD))(
                *(_QWORD*)v213 + 24LL))(v213, 0x2000, *(unsigned int*)v80);
            v76 = (unsigned __int8)v229;
            v77 = v231;
            if ((v89 & 1) == 0) {
              break;
            }
            v90 = (char*)&v229 + 4;
            v91 = v230;
            v78 = v229 & 1;
            v80 += 4;
            if (v78 != 0) {
              v90 = v231;
            }
            else {
              v91 = (unsigned __int64)(unsigned __int8)v229 >> 1;
            }
            if (v80 == &v90[4 * v91]) {
              goto LABEL_200;
            }
          }
          v78 = v229 & 1;
        }
      LABEL_200:
        v107 = v221;
        if (v78 != 0) {
          v79 = v77;
        }
        else {
          v79 = (char*)&v229 + 4;
        }
        v108 = v80 - v79;
        if ((v220 & 1) == 0) {
          v107 = (unsigned __int64)(unsigned __int8)v220 >> 1;
        }
        if (v107 >= v108 >> 2) {
          v109 = (char*)&v220 + 4;
          if ((v220 & 1) != 0) {
            v109 = v222;
          }
          if ((unsigned int)SdkRoutine_8572f0(&v109[4 * v107 - v108], v79,
                                              v108) == 0) {
          LABEL_209:
            v79 = v80;
          }
        }
        a8 = v213;
      }
      if (v78 != 0) {
        v110 = v77;
      }
      else {
        v110 = (char*)&v229 + 4;
      }
      v111 = v230;
      if (v78 == 0) {
        v111 = v76 >> 1;
      }
      if (v79 == &v110[4 * v111]) {
        v23 = v216;
      LABEL_247:
        if ((a5 & 0x200) != 0) {
          v124 = v231;
          v125 = (unsigned __int64)(unsigned __int8)v229 >> 1;
          if ((v229 & 1) != 0) {
            v125 = v230;
          }
          else {
            v124 = (char*)&v229 + 4;
          }
          if (v79 != &v124[4 * v125]) {
            goto LABEL_423;
          }
        }
        goto LABEL_16;
      }
      v23 = v216;
      while (2) {
        v113 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v114 = (int*)v113[3];
          if (v114 == (int*)v113[4]) {
            v115 = (*(__int64 (**)(_QWORD*))(*v113 + 72LL))(v113);
          }
          else {
            v115 = *v114;
          }
          if (v115 != -1) {
            v116 = *a1 == 0;
            if (a2 == nullptr) {
            LABEL_227:
              if (v116) {
                goto LABEL_247;
              }
            LABEL_237:
              v119 = *(int**)(*a1 + 24LL);
              if (v119 == *(int**)(*a1 + 32LL)) {
                v120 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
              }
              else {
                v120 = *v119;
              }
              if (v120 != *(_DWORD*)v79) {
                goto LABEL_247;
              }
              v121 = (_QWORD*)*a1;
              v122 = *(_QWORD*)(*a1 + 24LL);
              if (v122 == *(_QWORD*)(*a1 + 32LL)) {
                (*(void (**)(_QWORD*))(*v121 + 80LL))(v121);
              }
              else {
                v121[3] = v122 + 4;
              }
              v123 = (char*)&v229 + 4;
              if ((v229 & 1) != 0) {
                v123 = v231;
              }
              v112 = (unsigned __int64)(unsigned __int8)v229 >> 1;
              v79 += 4;
              if ((v229 & 1) != 0) {
                v112 = v230;
              }
              if (v79 == &v123[4 * v112]) {
                goto LABEL_247;
              }
              continue;
            }
          LABEL_231:
            v117 = (int*)a2[3];
            if (v117 == (int*)a2[4]) {
              v118 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            }
            else {
              v118 = *v117;
            }
            if (v118 == -1) {
              a2 = nullptr;
            }
            if (v116 == (v118 == -1)) {
              goto LABEL_247;
            }
            goto LABEL_237;
          }
          *a1 = 0;
        }
        break;
      }
      v116 = true;
      if (a2 == nullptr) {
        goto LABEL_227;
      }
      goto LABEL_231;
    }
    if (v32 != 3) {
      if (v32 != 4) {
        goto LABEL_16;
      }
      v33 = 0;
      while (2) {
        v34 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v35 = (int*)v34[3];
          if (v35 == (int*)v34[4]) {
            v36 = (*(__int64 (**)(_QWORD*))(*v34 + 72LL))(v34);
          }
          else {
            v36 = *v35;
          }
          if (v36 != -1) {
            v37 = *a1 == 0;
            if (a2 == nullptr) {
            LABEL_45:
              if (v37) {
                goto LABEL_122;
              }
              goto LABEL_55;
            }
          LABEL_49:
            v38 = (int*)a2[3];
            if (v38 == (int*)a2[4]) {
              v39 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
            }
            else {
              v39 = *v38;
            }
            if (v39 == -1) {
              a2 = nullptr;
            }
            if (v37 == (v39 == -1)) {
            LABEL_122:
              if (v23 != v25 && v33 != 0) {
                if (v25 == v217) {
                  v71 = v217 - v23;
                  v72 = 2 * (v217 - v23);
                  if (v217 == v23) {
                    v72 = 4;
                  }
                  if (v71 >= 0x7FFFFFFFFFFFFFFFLL) {
                    v73 = -1;
                  }
                  else {
                    v73 = v72;
                  }
                  if (v212 == SdkRoutine_80bd80) {
                    v74 = SdkRoutine_8578d0(v73);
                    if (v74 == 0) {
                      goto LABEL_440;
                    }
                    v75 = (char*)v74;
                    SdkRoutine_856130(v74, v23, v71);
                    if (v23 != nullptr) {
                      v212(v23);
                    }
                  }
                  else {
                    v74 = SdkRoutine_859610(v23, v73);
                    v75 = (char*)v74;
                    if (v74 == 0) {
                      goto LABEL_440;
                    }
                  }
                  v25 = &v75[v71];
                  v23 = v75;
                  v217 = &v75[v73 & 0xFFFFFFFFFFFFFFFCLL];
                  a8 = v213;
                  v212 = (__int64 (*)(void*))SdkData_e86b48;
                }
                *(_DWORD*)v25 = v33;
                v25 += 4;
              }
              if (v219 >= 1) {
                v129 = (_QWORD*)*a1;
                if (*a1 != 0) {
                  v130 = (int*)v129[3];
                  if (v130 == (int*)v129[4]) {
                    v131 = (*(__int64 (**)(_QWORD*))(*v129 + 72LL))(v129);
                  }
                  else {
                    v131 = *v130;
                  }
                  if (v131 != -1) {
                    v132 = *a1 == 0;
                    if (a2 == nullptr) {
                      goto LABEL_272;
                    }
                  LABEL_276:
                    v133 = (int*)a2[3];
                    if (v133 == (int*)a2[4]) {
                      v134 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                    }
                    else {
                      v134 = *v133;
                    }
                    if (v134 == -1) {
                      a2 = nullptr;
                    }
                    if (v132 != (v134 == -1)) {
                    LABEL_282:
                      v135 = *(int**)(*a1 + 24LL);
                      if (v135 == *(int**)(*a1 + 32LL)) {
                        v136 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(
                            *a1);
                      }
                      else {
                        v136 = *v135;
                      }
                      if (v136 == v236) {
                        v137 = (_QWORD*)*a1;
                        v138 = *(_QWORD*)(*a1 + 24LL);
                        if (v138 == *(_QWORD*)(*a1 + 32LL)) {
                          (*(void (**)(_QWORD*))(*v137 + 80LL))(v137);
                        }
                        else {
                          v137[3] = v138 + 4;
                        }
                        if (v219 < 1) {
                          goto LABEL_15;
                        }
                        while (2) {
                          v139 = (_QWORD*)*a1;
                          if (*a1 != 0) {
                            v140 = (int*)v139[3];
                            if (v140 == (int*)v139[4]) {
                              v141 = (*(__int64 (**)(_QWORD*))(*v139 + 72LL))(
                                  v139);
                            }
                            else {
                              v141 = *v140;
                            }
                            if (v141 != -1) {
                              v142 = *a1 == 0;
                              if (a2 == nullptr) {
                                goto LABEL_298;
                              }
                            LABEL_302:
                              v143 = (int*)a2[3];
                              if (v143 == (int*)a2[4]) {
                                v144 =
                                    (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
                              }
                              else {
                                v144 = *v143;
                              }
                              if (v144 == -1) {
                                a2 = nullptr;
                              }
                              if (v142 == (v144 == -1)) {
                                goto LABEL_423;
                              }
                              goto LABEL_308;
                            }
                            *a1 = 0;
                          }
                          v142 = true;
                          if (a2 != nullptr) {
                            goto LABEL_302;
                          }
                        LABEL_298:
                          if (v142) {
                            goto LABEL_423;
                          }
                          a2 = nullptr;
                        LABEL_308:
                          v145 = *(unsigned int**)(*a1 + 24LL);
                          if (v145 == *(unsigned int**)(*a1 + 32LL)) {
                            v146 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 +
                                                                 72LL))(*a1);
                          }
                          else {
                            v146 = *v145;
                          }
                          if (((*(__int64 (**)(__int64, __int64, __int64))(
                                   *(_QWORD*)a8 + 24LL))(a8, 2048, v146) &
                               1) == 0) {
                            goto LABEL_423;
                          }
                          v147 = (_DWORD*)*a10;
                          if (*a10 != a11) {
                            v148 = (_QWORD*)*a1;
                            v149 = *(int**)(*a1 + 24LL);
                            if (v149 != *(int**)(*a1 + 32LL)) {
                              goto LABEL_314;
                            }
                          LABEL_327:
                            v162 =
                                (*(__int64 (**)(_QWORD*))(*v148 + 72LL))(v148);
                            v151 = a10;
                            v150 = v162;
                            v148 = (_QWORD*)*a1;
                            v147 = (_DWORD*)*a10;
                            goto LABEL_328;
                          }
                          v152 = (void*)*a9;
                          v153 = a11 - *a9;
                          if (a11 == *a9) {
                            v154 = 4;
                            v155 = a10;
                            v156 = a9;
                            if (v153 < 0x7FFFFFFFFFFFFFFFLL) {
                              goto LABEL_320;
                            }
                          LABEL_319:
                            v154 = -1;
                          }
                          else {
                            v154 = 2 * v153;
                            v155 = a10;
                            v156 = a9;
                            if (v153 >= 0x7FFFFFFFFFFFFFFFLL) {
                              goto LABEL_319;
                            }
                          }
                        LABEL_320:
                          v157 = (__int64 (*)(void*))v156[1];
                          if (v157 == SdkRoutine_80bd80) {
                            v158 = SdkRoutine_8578d0(v154);
                            if (v158 == 0) {
                              goto LABEL_439;
                            }
                            v159 = v158;
                            SdkRoutine_856130(v158, v152, v153);
                            v158 = v159;
                            v156 = a9;
                            v155 = a10;
                            *a9 = v158;
                            if (v152 != nullptr) {
                              v157(v152);
                              v158 = *a9;
                            }
                          }
                          else {
                            v158 = SdkRoutine_859610(*a9, v154);
                            if (v158 == 0) {
                              goto LABEL_439;
                            }
                            *v156 = v158;
                          }
                          v147 = (_DWORD*)(v158 + v153);
                          v160 = v154 & 0xFFFFFFFFFFFFFFFCLL;
                          v161 = SdkData_e86b48;
                          *v155 = v158 + v153;
                          a8 = v213;
                          v156[1] = v161;
                          a11 = *v156 + v160;
                          v148 = (_QWORD*)*a1;
                          v149 = *(int**)(*a1 + 24LL);
                          if (v149 == *(int**)(*a1 + 32LL)) {
                            goto LABEL_327;
                          }
                        LABEL_314:
                          v150 = *v149;
                          v151 = a10;
                        LABEL_328:
                          *v147 = v150;
                          v163 = v219;
                          *v151 = (__int64)(v147 + 1);
                          v164 = v148[3];
                          v165 = v148[4];
                          v166 = v163 - 1;
                          v219 = v166;
                          if (v164 == v165) {
                            (*(void (**)(_QWORD*))(*v148 + 80LL))(v148);
                            if (v219 <= 0) {
                              goto LABEL_15;
                            }
                          }
                          else {
                            v148[3] = v164 + 4;
                            if (v166 <= 0) {
                              goto LABEL_15;
                            }
                          }
                          continue;
                        }
                      }
                    }
                    goto LABEL_423;
                  }
                  *a1 = 0;
                }
                v132 = true;
                if (a2 != nullptr) {
                  goto LABEL_276;
                }
              LABEL_272:
                if (!v132) {
                  a2 = nullptr;
                  goto LABEL_282;
                }
                goto LABEL_423;
              }
            LABEL_15:
              if (*a10 == *a9) {
                goto LABEL_423;
              }
              goto LABEL_16;
            }
          LABEL_55:
            v40 = *(unsigned int**)(*a1 + 24LL);
            if (v40 == *(unsigned int**)(*a1 + 32LL)) {
              v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
            }
            else {
              v41 = *v40;
            }
            if (((*(__int64 (**)(__int64, __int64, _QWORD))(
                     *(_QWORD*)a8 + 24LL))(a8, 2048, v41) &
                 1) == 0) {
              if ((v232 & 1) != 0) {
                v44 = v233;
              }
              else {
                v44 = (unsigned __int64)(unsigned __int8)v232 >> 1;
              }
              if (v44 == 0 || v33 == 0 || v41 != v235) {
                goto LABEL_122;
              }
              if (v25 == v217) {
                v51 = v217 - v23;
                if (v217 == v23) {
                  v52 = 4;
                }
                else {
                  v52 = 2 * (v217 - v23);
                }
                if (v51 >= 0x7FFFFFFFFFFFFFFFLL) {
                  v52 = -1;
                }
                v215 = v23;
                if (v212 == SdkRoutine_80bd80) {
                  v53 = SdkRoutine_8578d0(v52);
                  if (v53 == 0) {
                  LABEL_438:
                    v158 = SdkRoutine_87ca10(v53);
                  LABEL_439:
                    v74 = SdkRoutine_87ca10(v158);
                  LABEL_440:
                    v207 = SdkRoutine_87ca10(v74);
                    SdkRoutine_7cd620(v207);
                  }
                  v23 = (char*)v53;
                  SdkRoutine_856130(v53, v215, v51);
                  if (v215 != nullptr) {
                    v212(v215);
                  }
                }
                else {
                  v53 = SdkRoutine_859610(v23, v52);
                  v23 = (char*)v53;
                  if (v53 == 0) {
                    goto LABEL_438;
                  }
                }
                v217 = &v23[v52 & 0xFFFFFFFFFFFFFFFCLL];
                a8 = v213;
                v212 = (__int64 (*)(void*))SdkData_e86b48;
                *(_DWORD*)&v23[v51] = v33;
                v25 = &v23[v51 + 4];
                v33 = 0;
                v45 = (_QWORD*)*a1;
                v46 = *(_QWORD*)(*a1 + 24LL);
                if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                LABEL_38:
                  v45[3] = v46 + 4;
                  continue;
                }
              }
              else {
                *(_DWORD*)v25 = v33;
                v25 += 4;
                v33 = 0;
                v45 = (_QWORD*)*a1;
                v46 = *(_QWORD*)(*a1 + 24LL);
                if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                  goto LABEL_38;
                }
              }
              goto LABEL_96;
            }
            v42 = (_DWORD*)*a10;
            if (*a10 != a11) {
              v43 = a10;
            LABEL_90:
              *v42 = v41;
              ++v33;
              *v43 = (__int64)(v42 + 1);
              v45 = (_QWORD*)*a1;
              v46 = *(_QWORD*)(*a1 + 24LL);
              if (v46 != *(_QWORD*)(*a1 + 32LL)) {
                goto LABEL_38;
              }
            LABEL_96:
              (*(void (**)(_QWORD*))(*v45 + 80LL))(v45);
              continue;
            }
            v214 = v23;
            v47 = (void*)*a9;
            v48 = a11 - *a9;
            if (a11 == *a9) {
              v49 = 4;
              v50 = a9;
              if (v48 < 0x7FFFFFFFFFFFFFFFLL) {
                goto LABEL_83;
              }
            LABEL_82:
              v49 = -1;
            }
            else {
              v49 = 2 * v48;
              v50 = a9;
              if (v48 >= 0x7FFFFFFFFFFFFFFFLL) {
                goto LABEL_82;
              }
            }
          LABEL_83:
            v54 = (__int64 (*)(void*))v50[1];
            if (v54 == SdkRoutine_80bd80) {
              v53 = SdkRoutine_8578d0(v49);
              if (v53 == 0) {
                goto LABEL_438;
              }
              v56 = v53;
              SdkRoutine_856130(v53, v47, v48);
              v55 = a9;
              *a9 = v56;
              if (v47 != nullptr) {
                v54(v47);
                v55 = a9;
                v56 = *a9;
              }
            }
            else {
              v53 = SdkRoutine_859610(*a9, v49);
              if (v53 == 0) {
                goto LABEL_438;
              }
              v55 = a9;
              v56 = v53;
              *a9 = v53;
            }
            v57 = v49 & 0xFFFFFFFFFFFFFFFCLL;
            v43 = a10;
            v55[1] = SdkData_e86b48;
            v42 = (_DWORD*)(v56 + v48);
            a8 = v213;
            v23 = v214;
            *a10 = (__int64)v42;
            a11 = *v55 + v57;
            goto LABEL_90;
          }
          *a1 = 0;
        }
        break;
      }
      v37 = true;
      if (a2 == nullptr) {
        goto LABEL_45;
      }
      goto LABEL_49;
    }
    v62 = (unsigned __int8)v226;
    v63 = v227;
    v64 = v226 & 1;
    if (v64 == 0) {
      v63 = (unsigned __int64)(unsigned __int8)v226 >> 1;
    }
    if (v63 != 0) {
      v65 = *(int**)(*a1 + 24LL);
      if (v65 == *(int**)(*a1 + 32LL)) {
        v66 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v62 = (unsigned __int8)v226;
        v64 = v226 & 1;
      }
      else {
        v66 = *v65;
      }
      v92 = v228;
      if (v64 == 0) {
        v92 = (_DWORD*)&v226 + 1;
      }
      if (v66 == *v92) {
        v93 = (_QWORD*)*a1;
        v94 = *(_QWORD*)(*a1 + 24LL);
        if (v94 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v93 + 80LL))(v93);
          v62 = (unsigned __int8)v226;
          v64 = v226 & 1;
        }
        else {
          v93[3] = v94 + 4;
        }
        v105 = v62 >> 1;
        v60 = v64 == 0;
        v106 = (unsigned __int8*)&v226;
        *a7 = false;
        if (!v60) {
          v105 = v227;
        }
      LABEL_257:
        v127 = v105 > 1;
        v128 = v211;
        if (v127) {
          v128 = v106;
        }
        v211 = v128;
        goto LABEL_16;
      }
    }
    v95 = (unsigned __int8)v223;
    v96 = v224;
    v97 = v223 & 1;
    if (v97 == 0) {
      v96 = (unsigned __int64)(unsigned __int8)v223 >> 1;
    }
    if (v96 != 0) {
      v98 = *(int**)(*a1 + 24LL);
      if (v98 == *(int**)(*a1 + 32LL)) {
        v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        v95 = (unsigned __int8)v223;
        v97 = v223 & 1;
      }
      else {
        v99 = *v98;
      }
      v100 = v225;
      if (v97 == 0) {
        v100 = (_DWORD*)&v223 + 1;
      }
      if (v99 == *v100) {
        v101 = (_QWORD*)*a1;
        v102 = *(_QWORD*)(*a1 + 24LL);
        if (v102 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v101 + 80LL))(v101);
          v95 = (unsigned __int8)v223;
          v97 = v223 & 1;
        }
        else {
          v101[3] = v102 + 4;
        }
        v126 = v95 >> 1;
        *a7 = true;
        v105 = v224;
        if (v97 == 0) {
          v105 = v126;
        }
        v106 = (unsigned __int8*)&v223;
        goto LABEL_257;
      }
      v62 = (unsigned __int8)v226;
    }
    if ((v62 & 1) != 0) {
      v103 = v227;
    }
    else {
      v103 = v62 >> 1;
    }
    if ((v95 & 1) != 0) {
      v104 = v224;
    }
    else {
      v104 = v95 >> 1;
    }
    if (v103 != 0) {
      if (v104 != 0) {
        goto LABEL_423;
      }
    }
    else if (v104 == 0) {
      goto LABEL_16;
    }
    *a7 = v103 != 0;
  LABEL_16:
    if (++v218 == 4) {
      goto LABEL_354;
    }
  }
  if (v237[v218] == 0) {
    if (v218 == 3) {
      goto LABEL_354;
    }
    v67 = (_QWORD*)*a1;
    v68 = true;
    if (*a1 != 0) {
      goto LABEL_120;
    }
    while (1) {
      if (a2 != nullptr) {
        v168 = (int*)a2[3];
        if (v168 == (int*)a2[4]) {
          v169 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
        }
        else {
          v169 = *v168;
        }
        if (v169 == -1) {
          a2 = nullptr;
        }
        if (v68 == (v169 == -1)) {
          goto LABEL_16;
        }
      }
      else if (v68) {
        goto LABEL_16;
      }
      v170 = *(unsigned int**)(*a1 + 24LL);
      if (v170 == *(unsigned int**)(*a1 + 32LL)) {
        v171 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
      }
      else {
        v171 = *v170;
      }
      if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a8 + 24LL))(
               a8, 0x2000, v171) &
           1) == 0) {
        goto LABEL_16;
      }
      v172 = (_QWORD*)*a1;
      v173 = *(int**)(*a1 + 24LL);
      if (v173 == *(int**)(*a1 + 32LL)) {
        v83 = (*(__int64 (**)(_QWORD*))(*v172 + 80LL))(v172);
      }
      else {
        v83 = *v173;
        v172[3] = v173 + 1;
      }
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) != 0) {
        break;
      }
      v85 = 4;
      if ((unsigned __int8)v220 == 8) {
      LABEL_151:
        SdkRoutine_87cb20(&v220, v85, 1, v85, v85, 0, 0);
        v86 = v85;
      LABEL_331:
        v221 = v86 + 1;
        v167 = &v222[4 * v86];
        *(_DWORD*)v167 = v83;
        *((_DWORD*)v167 + 1) = 0;
        v67 = (_QWORD*)*a1;
        v68 = true;
        if (*a1 != 0) {
          goto LABEL_120;
        }
      }
      else {
      LABEL_350:
        LOBYTE(v220) = v84 + 2;
        v174 = (_DWORD*)&v220 + (v84 >> 1) + 1;
        *v174 = v83;
        v174[1] = 0;
        v67 = (_QWORD*)*a1;
        v68 = true;
        if (*a1 != 0) {
        LABEL_120:
          v69 = (int*)v67[3];
          if (v69 == (int*)v67[4]) {
            v70 = (*(__int64 (**)(_QWORD*))(*v67 + 72LL))(v67);
          }
          else {
            v70 = *v69;
          }
          if (v70 == -1) {
            *a1 = 0;
          }
          else {
            v68 = *a1 == 0;
          }
        }
      }
    }
    v86 = v221;
    v85 = (v220 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (v221 != v85) {
      goto LABEL_331;
    }
    goto LABEL_151;
  }
  if (v32 != 1) {
    goto LABEL_16;
  }
  if (v218 != 3) {
    v58 = *(unsigned int**)(*a1 + 24LL);
    if (v58 == *(unsigned int**)(*a1 + 32LL)) {
      v59 = (*(unsigned int (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
    }
    else {
      v59 = *v58;
    }
    if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a8 + 24LL))(
             a8, 0x2000, v59) &
         1) == 0) {
      goto LABEL_423;
    }
    v81 = (_QWORD*)*a1;
    v82 = *(int**)(*a1 + 24LL);
    if (v82 == *(int**)(*a1 + 32LL)) {
      v83 = (*(__int64 (**)(_QWORD*))(*v81 + 80LL))(v81);
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) == 0) {
        goto LABEL_147;
      }
    }
    else {
      v83 = *v82;
      v81[3] = v82 + 1;
      v84 = (unsigned __int8)v220;
      if ((v220 & 1) == 0) {
      LABEL_147:
        if ((_DWORD)v84 != 8) {
          goto LABEL_350;
        }
        v85 = 4;
        goto LABEL_151;
      }
    }
    v86 = v221;
    v85 = (v220 & 0xFFFFFFFFFFFFFFFELL) - 1;
    if (v221 != v85) {
      goto LABEL_331;
    }
    goto LABEL_151;
  }
LABEL_354:
  if (v211 != nullptr) {
    v175 = *v211;
    v176 = (v175 & 1) != 0 ? *((_QWORD*)v211 + 1) : v175 >> 1;
    if (v176 >= 2) {
      v177 = 2;
      v178 = 1;
      v179 = v25;
      do {
        v182 = (_QWORD*)*a1;
        if (*a1 != 0) {
          v183 = (int*)v182[3];
          if (v183 == (int*)v182[4]) {
            v184 = (*(__int64 (**)(_QWORD*))(*v182 + 72LL))(v182);
          }
          else {
            v184 = *v183;
          }
          if (v184 != -1) {
            v185 = *a1 == 0;
            if (a2 != nullptr) {
              goto LABEL_375;
            }
            goto LABEL_371;
          }
          *a1 = 0;
        }
        v185 = true;
        if (a2 != nullptr) {
        LABEL_375:
          v186 = (int*)a2[3];
          if (v186 == (int*)a2[4]) {
            v187 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          }
          else {
            v187 = *v186;
          }
          if (v187 == -1) {
            a2 = nullptr;
          }
          if (v185 == (v187 == -1)) {
            goto LABEL_423;
          }
          goto LABEL_381;
        }
      LABEL_371:
        if (v185) {
          goto LABEL_423;
        }
        a2 = nullptr;
      LABEL_381:
        v188 = *(int**)(*a1 + 24LL);
        if (v188 == *(int**)(*a1 + 32LL)) {
          v189 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 72LL))(*a1);
        }
        else {
          v189 = *v188;
        }
        if ((*v211 & 1) != 0) {
          if (v189 != *(_DWORD*)(*((_QWORD*)v211 + 2) + 4 * v178)) {
            goto LABEL_423;
          }
        }
        else if (v189 != *(_DWORD*)&v211[4 * v178 + 4]) {
          goto LABEL_423;
        }
        v190 = (_QWORD*)*a1;
        v191 = *(_QWORD*)(*a1 + 24LL);
        if (v191 == *(_QWORD*)(*a1 + 32LL)) {
          (*(void (**)(_QWORD*))(*v190 + 80LL))(v190);
        }
        else {
          v190[3] = v191 + 4;
        }
        v180 = *v211;
        v178 = v177++;
        v25 = v179;
        if ((v180 & 1) != 0) {
          v181 = *((_QWORD*)v211 + 1);
        }
        else {
          v181 = v180 >> 1;
        }
      } while (v181 > v178);
    }
  }
  if (v23 == v25) {
    v193 = 1;
  }
  else {
    v194 = v233;
    v193 = 1;
    if ((v232 & 1) == 0) {
      v194 = (unsigned __int64)(unsigned __int8)v232 >> 1;
    }
    if (v25 - v23 >= 5 && v194 != 0) {
      v195 = v25 - 4;
      if (v23 < v25 - 4) {
        v196 = v23 + 4;
        v197 = v25 - 4;
        do {
          v198 = *((_DWORD*)v196 - 1);
          *((_DWORD*)v196 - 1) = *(_DWORD*)v197;
          *(_DWORD*)v197 = v198;
          v197 -= 4;
          v199 = v196 >= v197;
          v196 += 4;
        } while (!v199);
        v200 = (unsigned __int64)(unsigned __int8)v232 >> 1;
        if ((v232 & 1) != 0) {
          v201 = v234;
        }
        else {
          v201 = (char*)&v232 + 1;
        }
        if ((v232 & 1) != 0) {
          v200 = v233;
        }
        v202 = v23;
        v203 = &v201[v200];
        while (1) {
          v204 = (unsigned __int8)*v201;
          if (*v201 != 0 && v204 != 255 && *(_DWORD*)v202 != v204) {
            goto LABEL_423;
          }
          v202 += 4;
          if (v203 - v201 > 1) {
            ++v201;
          }
          if (v202 >= v195) {
            goto LABEL_420;
          }
        }
      }
      v201 = (v232 & 1) != 0 ? v234 : (char*)&v232 + 1;
    LABEL_420:
      v205 = (unsigned __int8)*v201;
      v193 = 1;
      if (v205 != 0 && v205 != 255 && *(_DWORD*)v195 - 1 >= v205) {
      LABEL_423:
        v193 = 0;
        *v208 |= 4u;
      }
    }
  }
  if ((v220 & 1) == 0) {
    if ((v223 & 1) == 0) {
      goto LABEL_426;
    }
  LABEL_432:
    SdkRoutine_857220(v225, (4 * v223) & 0xFFFFFFFFFFFFFFF8LL);
    if ((v226 & 1) != 0) {
      goto LABEL_433;
    }
  LABEL_427:
    if ((v229 & 1) == 0) {
      goto LABEL_428;
    }
  LABEL_434:
    SdkRoutine_857220(v231, (4 * v229) & 0xFFFFFFFFFFFFFFF8LL);
    if ((v232 & 1) != 0) {
      goto LABEL_435;
    }
  LABEL_429:
    if (v23 == nullptr) {
      return v193;
    }
  LABEL_436:
    v212(v23);
    return v193;
  }
  SdkRoutine_857220(v222, (4 * v220) & 0xFFFFFFFFFFFFFFF8LL);
  if ((v223 & 1) != 0) {
    goto LABEL_432;
  }
LABEL_426:
  if ((v226 & 1) == 0) {
    goto LABEL_427;
  }
LABEL_433:
  SdkRoutine_857220(v228, (4 * v226) & 0xFFFFFFFFFFFFFFF8LL);
  if ((v229 & 1) != 0) {
    goto LABEL_434;
  }
LABEL_428:
  if ((v232 & 1) == 0) {
    goto LABEL_429;
  }
LABEL_435:
  SdkRoutine_857220(v234, v232 & 0xFFFFFFFFFFFFFFFELL);
  if (v23 != nullptr) {
    goto LABEL_436;
  }
  return v193;
}

__int64 SdkHr_84b100()
{
  SdkRoutine_84c4a0();
  return SdkRoutine_859150((unsigned int)SdkData_1061698, 0);
}

#pragma GCC visibility pop
