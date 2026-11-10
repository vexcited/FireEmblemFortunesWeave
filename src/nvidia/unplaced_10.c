#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_64b750(_QWORD);
__int64 SdkRoutine_64b750_alt1(__int64 result, __int64,
                               __int64) __asm__("SdkRoutine_64b750");
__int64 SdkRoutine_64d350(__int64 result, __int64*, __int64*, int, int, int,
                          int, int, int);
__int64 SdkRoutine_66a6d0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_64d7a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD, _DWORD, _DWORD, _DWORD);
__int64 nvidia_64f5d0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _DWORD) __asm__("nvidia_64f5d0");
extern _DWORD SdkData_bb0170[8];
extern _DWORD SdkData_bb0370[8];
extern _DWORD SdkData_c77cb8[5];
extern _DWORD SdkData_c77ccc[5];
extern _DWORD SdkData_c77ce0[5];
extern _DWORD SdkData_c77cf4[5];
extern _UNKNOWN* SdkData_e89ba0;
extern __int128 SdkData_bb0f80;
int* SdkRoutine_66a6d0_alt1(int* result, __int64,
                            __int64*) __asm__("SdkRoutine_66a6d0");
long double nvidia_64ed40(__int64 a1);
long double nvidia_64ed80(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
_DWORD* nvidia_64eda0(_DWORD* result, int a2, int a3, int a4, int a5);
__int64 nvidia_64edb0(__int64 result, __int64 a2, int a3, int a4, __int64 a5);
__int64 nvidia_64edc0(__int64 result, __int64 a2, int a3, int a4, __int64 a5);
__int64 nvidia_64edd0(__int64 result, int a2, int a3);
_BYTE* nvidia_64ede0(_BYTE* result, char a2, char a3, char a4, char a5);
long double nvidia_64ee00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4);
_DWORD* nvidia_64ee30(_DWORD* result, _DWORD* a2, _DWORD* a3, _DWORD* a4,
                      _DWORD* a5);
__int64 nvidia_64ee70(__int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4,
                      _QWORD* a5);
__int64 nvidia_64eeb0(__int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4,
                      _QWORD* a5);
__int64 nvidia_64eef0(__int64 result, _DWORD* a2, _DWORD* a3);
_BYTE* nvidia_64ef10(_BYTE* result, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE* a5);
__int64 nvidia_64ef60(__int64 result, __int64 a2, __int64* a3, int* a4,
                      __int64 a5, __int64* a6, unsigned int* a7, int a8);
__int64 nvidia_64f5d0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5,
                      int a6, int a7, int a8, int a9, int a10, int a11, int a12,
                      int a13, char a14, char a15, char a16, char a17);
__int64 nvidia_64f9e0(__int64 a1, int* a2, __int64* a3, int* a4, __int64* a5);
__int64 nvidia_64fbf0(__int64 a1, __int64 a2, int* a3, __int64 a4, int* a5);
__int64 nvidia_64fd30(__int64 result, char a2);
__int64 nvidia_64fdc0(__int64 result, int a2, __int64 a3);

long double nvidia_64ed40(__int64 a1)
{
  *(_DWORD*)(a1 + 76) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 112) = 0;
  *(_OWORD*)(a1 + 28) = 0u;
  *(_OWORD*)a1 = 0u;
  *(_OWORD*)(a1 + 16) = 0u;
  *(_OWORD*)(a1 + 44) = 0u;
  *(_OWORD*)(a1 + 60) = 0u;
  *(_OWORD*)(a1 + 88) = SdkData_bb0f80;
  return *(long double*)&SdkData_bb0f80;
}

long double nvidia_64ed80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  long double result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a3;
  result = *(long double*)a4;
  *(_QWORD*)(a1 + 32) = *(_QWORD*)(a4 + 16);
  *(long double*)(a1 + 16) = result;
  return result;
}

_DWORD* nvidia_64eda0(_DWORD* result, int a2, int a3, int a4, int a5)
{
  result[24] = a5;
  result[25] = a2;
  result[10] = a3;
  result[23] = a4;
  return result;
}

__int64 nvidia_64edb0(__int64 result, __int64 a2, int a3, int a4, __int64 a5)
{
  *(_QWORD*)(result + 48) = a2;
  *(_DWORD*)(result + 56) = a3;
  *(_DWORD*)(result + 60) = a4;
  *(_QWORD*)(result + 64) = a5;
  return result;
}

__int64 nvidia_64edc0(__int64 result, __int64 a2, int a3, int a4, __int64 a5)
{
  *(_DWORD*)(result + 44) = a3;
  *(_DWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 72) = a2;
  *(_QWORD*)(result + 80) = a5;
  return result;
}

__int64 nvidia_64edd0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 104) = a2;
  *(_DWORD*)(result + 108) = a3;
  return result;
}

_BYTE* nvidia_64ede0(_BYTE* result, char a2, char a3, char a4, char a5)
{
  result[112] = a2;
  result[113] = a3;
  result[114] = a4;
  result[115] = a5;
  return result;
}

long double nvidia_64ee00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4)
{
  long double result;

  if (a2 != nullptr) {
    *a2 = *(_QWORD*)a1;
  }
  if (a3 != nullptr) {
    *a3 = *(_QWORD*)(a1 + 8);
  }
  if (a4 != 0) {
    result = *(long double*)(a1 + 16);
    *(_QWORD*)(a4 + 16) = *(_QWORD*)(a1 + 32);
    *(long double*)a4 = result;
  }
  return result;
}

_DWORD* nvidia_64ee30(_DWORD* result, _DWORD* a2, _DWORD* a3, _DWORD* a4,
                      _DWORD* a5)
{
  if (a2 != nullptr) {
    *a2 = result[25];
  }
  if (a3 != nullptr) {
    *a3 = result[10];
  }
  if (a4 != nullptr) {
    *a4 = result[23];
  }
  if (a5 != nullptr) {
    *a5 = result[24];
  }
  return result;
}

__int64 nvidia_64ee70(__int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4,
                      _QWORD* a5)
{
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(result + 48);
  }
  if (a3 != nullptr) {
    *a3 = *(_DWORD*)(result + 56);
  }
  if (a4 != nullptr) {
    *a4 = *(_DWORD*)(result + 60);
  }
  if (a5 != nullptr) {
    *a5 = *(_QWORD*)(result + 64);
  }
  return result;
}

__int64 nvidia_64eeb0(__int64 result, _QWORD* a2, _DWORD* a3, _DWORD* a4,
                      _QWORD* a5)
{
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(result + 72);
  }
  if (a3 != nullptr) {
    *a3 = *(_DWORD*)(result + 44);
  }
  if (a4 != nullptr) {
    *a4 = *(_DWORD*)(result + 88);
  }
  if (a5 != nullptr) {
    *a5 = *(_QWORD*)(result + 80);
  }
  return result;
}

__int64 nvidia_64eef0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  if (a2 != nullptr) {
    *a2 = *(_DWORD*)(result + 104);
  }
  if (a3 != nullptr) {
    *a3 = *(_DWORD*)(result + 108);
  }
  return result;
}

_BYTE* nvidia_64ef10(_BYTE* result, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE* a5)
{
  if (a2 != nullptr) {
    *a2 = result[112];
  }
  if (a3 != nullptr) {
    *a3 = result[113];
  }
  if (a4 != nullptr) {
    *a4 = result[114];
  }
  if (a5 != nullptr) {
    *a5 = result[115];
  }
  return result;
}

__int64 nvidia_64ef60(__int64 result, __int64 a2, __int64* a3, int* a4,
                      __int64 a5, __int64* a6, unsigned int* a7, int a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  signed int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  __int16 v20;
  unsigned int v21;
  int v22;
  char* v23;
  unsigned __int64 v24;
  char* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  __int16 v36;
  unsigned int v37;
  int v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  signed int v48;
  _DWORD* v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  __int64 v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  __int64 v78;
  unsigned int v79;
  char* v80;
  char* v81;
  __int64 v83;
  unsigned int v84;
  _BYTE v86[12];
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  _BYTE v91[12];
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  int v96;
  int v97;
  _QWORD v98[2];
  _QWORD v99[3];

  v8 = *(_QWORD*)(a2 + 40);
  if (a3 != nullptr) {
    if ((*((_BYTE*)a3 + 7) & 4) == 0) {
      v9 = v8 << 39 >> 55;
      v10 = (unsigned int)((int)((_DWORD)v8 << 7) >> 23);
      goto LABEL_7;
    }
    v10 = *((unsigned int*)a3 + 2);
  }
  else {
    v10 = v8 << 39 >> 55;
  }
  LODWORD(v9) = v10;
LABEL_7:
  v11 = *(_QWORD*)(a5 + 40);
  if (a6 != nullptr) {
    if ((*((_BYTE*)a6 + 7) & 4) == 0) {
      v12 = v11 << 39 >> 55;
      v78 = (unsigned int)((int)((_DWORD)v11 << 7) >> 23);
      goto LABEL_13;
    }
    v12 = *((unsigned int*)a6 + 2);
  }
  else {
    v12 = v11 << 39 >> 55;
  }
  v78 = v12;
LABEL_13:
  v13 = a4[2];
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v14 = a4[4];
  }
  else {
    v14 = a4[5];
  }
  v16 = a7[3];
  v15 = a7[4];
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    v17 = 1;
  }
  else {
    v17 = a4[4];
  }
  if ((*(_QWORD*)(a2 + 40) & 0xFE000000LL) == 0x6000000) {
    LOWORD(v13) = a4[1];
    v18 = 0;
  }
  else {
    v18 = a4[1];
  }
  if ((v11 & 0xFE000000) == 0x6000000) {
    v19 = a7[4];
  }
  else {
    v19 = a7[5];
  }
  if ((v11 & 0xFE000000) == 0x6000000) {
    v15 = 1;
    v20 = a7[1];
  }
  else {
    v20 = a7[2];
  }
  if ((v11 & 0xFE000000) == 0x6000000) {
    v21 = 0;
  }
  else {
    v21 = a7[1];
  }
  v84 = v21;
  if (v16 == 0 || v15 == 0 || v19 == 0) {
    return result;
  }
  v22 = a8 << 28;
  v23 = (char*)SdkData_e89ba0 + 48 * (int)v9;
  v24 = ((__int64)(int)v8 >> 25) - 5;
  v25 = (char*)SdkData_e89ba0 + 48 * (int)v12;
  v26 = *a4;
  v27 = *a7;
  v28 = (unsigned __int8)v23[8];
  v29 = (unsigned __int8)v23[9];
  v30 = (unsigned __int8)v25[8];
  v80 = v25;
  v81 = v23;
  v31 = (unsigned __int8)v25[9];
  v32 = a4[3];
  v33 = a8 << 29;
  if (v28 < 2) {
    if ((a8 & 4) != 0) {
      v34 = -v32;
    }
    else {
      v34 = v32;
    }
    v77 = (v32 & (v33 >> 31)) + v26;
    if ((a8 & 8) != 0) {
      v35 = -v17;
    }
    else {
      v35 = v17;
    }
    v76 = v18 + (v17 & (v22 >> 31));
    if ((a8 & 0x10) != 0) {
      v36 = v14 + v13;
      v14 = -v14;
      LOWORD(v13) = v36 - 1;
    }
  }
  else {
    v77 = (v28 - 1 + v26) / v28;
    v34 = (v28 - 1 + v32) / v28;
    v76 = (v29 - 1 + v18) / v29;
    v27 = (v30 - 1 + v27) / v30;
    v16 = (v30 - 1 + v16) / v30;
    v35 = (v29 - 1 + v17) / v29;
    v15 = (v31 - 1 + v15) / v31;
    v84 = (v31 - 1 + v84) / v31;
  }
  if (v24 < 2 || (unsigned __int64)(((__int64)(int)v11 >> 25) - 5) <= 1) {
    v37 = *(_DWORD*)(a2 + 84);
    v38 = (v37 >> 15) & 7;
    v39 = (v37 >> 18) & 7;
    v35 *= v39;
    v34 *= v38;
    v76 *= v39;
    v77 *= v38;
    v40 = *(_DWORD*)(a5 + 84);
    v41 = (v40 >> 15) & 7;
    v42 = (v40 >> 18) & 7;
    v27 *= v41;
    v16 *= v41;
    v15 *= v42;
    v84 *= v42;
  }
  v74 = (int)(v35 << 15) / v15;
  v75 = (int)(v34 << 15) / (int)v16;
  if ((_DWORD)v10 == (_DWORD)v78) {
    if ((a8 & 1) != 0 && (v75 != 0x8000 || v74 != 0x8000)) {
      v78 = (unsigned int)v10;
      goto LABEL_57;
    }
    if ((_DWORD)v10 == 56) {
      v10 = 37;
      v43 = 37;
      goto LABEL_55;
    }
    v78 = (unsigned int)v10;
    if ((_DWORD)v10 == 55) {
      v10 = 109;
      v43 = 109;
    LABEL_55:
      v78 = v43;
    }
  }
LABEL_57:
  v99[1] = 0;
  v44 = 0x300010000010000LL;
  if (a3 != nullptr) {
    v45 = *a3;
    v46 = *a3 & 0xFF00000000LL | 0x300010000010000LL;
    if ((*a3 & 0x100000000000000LL) == 0) {
      v46 = 0x300010000010000LL;
    }
    if ((v45 & 0x200000000000000LL) == 0) {
      LOWORD(v45) = 0;
    }
  }
  else {
    LOWORD(v45) = 0;
    v46 = 0x300010000010000LL;
  }
  v98[1] = 0;
  v99[0] = v46 | (unsigned __int16)(v45 + v13);
  if (a6 == nullptr) {
    goto LABEL_67;
  }
  v47 = *a6;
  if ((*a6 & 0x100000000000000LL) != 0) {
    v44 = *a6 & 0xFF00000000LL | 0x300010000010000LL;
  }
  if ((v47 & 0x200000000000000LL) == 0) {
  LABEL_67:
    LOWORD(v47) = 0;
  }
  v48 = v15;
  v83 = result;
  v79 = v27;
  v73 = v10;
  v98[0] = v44 | (unsigned __int16)(v47 + v20);
  v49 = *(_DWORD**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    v50 = v30;
    v51 = a8;
    v72 = v16;
    v52 = v28;
    v53 = v29;
    v54 = v14;
    v55 = v31;
    v56 = a8 << 29;
    SdkRoutine_64b750(result);
    result = v83;
    v33 = v56;
    v31 = v55;
    v16 = v72;
    v14 = v54;
    v29 = v53;
    v28 = v52;
    v15 = v48;
    a8 = v51;
    v30 = v50;
    v49 = *(_DWORD**)v83;
  }
  v57 = *(unsigned int*)(result + 24);
  if ((unsigned int)v57 <= 4) {
    *v49++ = SdkData_c77cb8[v57];
  }
  *(_QWORD*)result = v49;
  if (v19 >= 1) {
    v71 = v29;
    v58 = v31 - 1;
    v59 = v28 - 1;
    v60 = a8;
    v61 = v30;
    v62 = v29 - 1;
    v69 = v31;
    v70 = v61;
    v63 = v14 / v19;
    v64 = v61 - 1;
    v68 = v77 - (v16 & (v33 >> 31));
    v67 = v76 - (v15 & (v22 >> 31));
    do {
      SdkRoutine_66a6d0(a2, v91, v99);
      SdkRoutine_66a6d0(a5, v86, v98);
      v65 = v96;
      if ((unsigned int)(v96 - 1) >= 2) {
        if (((v97 - 51) & 0xFFFFFFFD) != 0) {
          v65 = 0;
        }
        else {
          v65 = 3;
        }
      }
      if ((unsigned __int8)v81[8] >= 2u) {
        v92 = (v59 + v92) / v28;
        v93 = (v62 + v93) / v71;
        v94 = (v59 + v94) / v28;
        v95 = (v62 + v95) / v71;
      }
      if ((unsigned __int8)v80[8] >= 2u) {
        v87 = (v64 + v87) / v70;
        v88 = (v58 + v88) / v69;
        v89 = (v64 + v89) / v70;
        v90 = (v58 + v90) / v69;
      }
      if (*(_DWORD*)(v83 + 24) == 2) {
        nvidia_64d7a0(v83, v91, v86, v68, v67, v79, v84, v16, v48, v65, v60);
      }
      else {
        nvidia_64f5d0_alt1(v83, v91, v73, v86, v78, (v75 >> 12) + 16 * v77,
                           (v74 >> 12) + 16 * v76, v79, v84);
      }
      --v19;
      LOWORD(v99[0]) += v63;
      ++LOWORD(v98[0]);
    } while (v19 != 0);
    result = v83;
    v49 = *(_DWORD**)v83;
  }
  if ((unsigned __int64)(v49 + 1) > *(_QWORD*)(result + 8)) {
    SdkRoutine_64b750(result);
    result = v83;
    v49 = *(_DWORD**)v83;
  }
  v66 = *(unsigned int*)(result + 24);
  if ((unsigned int)v66 <= 4) {
    *v49++ = SdkData_c77cf4[v66];
  }
  *(_QWORD*)result = v49;
  return result;
}

__int64 nvidia_64f5d0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5,
                      int a6, int a7, int a8, int a9, int a10, int a11, int a12,
                      int a13, char a14, char a15, char a16, char a17)
{
  _DWORD* v18;
  char* v25;
  __int64 result;
  char* v27;
  unsigned int v28;
  _DWORD* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  int v39;
  _DWORD* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  _DWORD* v52;
  _DWORD* v53;
  char* v54;
  bool v55;
  int v56;
  int v57;
  _DWORD* v58;

  v18 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 196LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750_alt1(a1, (__int64)v18,
                           4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 49));
    v18 = *(_DWORD**)a1;
  }
  v25 = (char*)SdkData_e89ba0;
  result = 536961157;
  if ((a17 & 1) != 0) {
    v27 = (char*)SdkData_e89ba0 + 48 * a3;
    if (*(_DWORD*)(a2 + 24) == 2) {
      *v18 = 537157772;
      v18[1] = *((_DWORD*)v27 + 7);
      v18[2] = 0;
      v18[3] = (unsigned __int8)(16 * (*(_DWORD*)(a2 + 48) & 7)) |
               ((*(_DWORD*)(a2 + 52) & 7) << 8);
      v28 = *(_DWORD*)(a2 + 40);
      if (v28 >= 1 << *(_DWORD*)(a2 + 52)) {
        v28 = 1 << *(_DWORD*)(a2 + 52);
      }
      v18[5] = 537026706;
      v29 = v18 + 5;
      *(v29 - 1) = v28;
      v30 = 64 / *(_DWORD*)(a2 + 72);
      v31 = *(_DWORD*)(a2 + 56);
      v32 = *(_DWORD*)(a2 + 32) + v31 * v30;
      v33 = -(v31 * v30);
      v34 = 3;
      v35 = (v32 - 1) & v33;
      v36 = 36;
      v29[1] = v35;
      v37 = 2;
    }
    else {
      v36 = 8;
      *v18 = 537026700;
      v18[1] = *((_DWORD*)v27 + 7);
      *((_QWORD*)v18 + 1) = 0x2002609200000001LL;
      v18[4] = *(_DWORD*)(a2 + 12);
      v39 = *(_DWORD*)(a2 + 16);
      v18[6] = 536961169;
      v29 = v18 + 6;
      v34 = 2;
      *(v29 - 1) = v39;
      v37 = 1;
    }
    v29[v37] = *(_DWORD*)(a2 + v36);
    v40 = &v29[v34];
    *v40 = 537026708;
    v40[1] = *(_DWORD*)(a2 + 4);
    v40[2] = *(_QWORD*)a2;
    v41 = &v25[48 * a5];
    if (*(_DWORD*)(a4 + 24) == 2) {
      v42 = 3;
      v43 = 10;
      v40[3] = 537223296;
      v40[4] = *((_DWORD*)v41 + 7);
      v40[5] = 0;
      v40[6] = (unsigned __int8)(16 * (*(_DWORD*)(a4 + 48) & 7)) |
               ((*(_DWORD*)(a4 + 52) & 7) << 8);
      v44 = *(_DWORD*)(a4 + 40);
      if (v44 >= 1 << *(_DWORD*)(a4 + 52)) {
        v44 = 1 << *(_DWORD*)(a4 + 52);
      }
      v40[7] = v44;
      *((_QWORD*)v40 + 4) = 0x2002608600000000LL;
      v45 = 64 / *(_DWORD*)(a4 + 72);
      v46 = *(_DWORD*)(a4 + 56);
      v47 = *(_DWORD*)(a4 + 32) + v46 * v45;
      v48 = -(v46 * v45);
      v49 = 36;
      v50 = (v47 - 1) & v48;
      v51 = 2;
    }
    else {
      v43 = 9;
      v42 = 2;
      v40[3] = 537026688;
      v50 = 536961157;
      v40[4] = *((_DWORD*)v41 + 7);
      *(_QWORD*)(v40 + 5) = 0x2002608600000001LL;
      v40[7] = *(_DWORD*)(a4 + 12);
      v51 = 1;
      v40[8] = *(_DWORD*)(a4 + 16);
      v49 = 8;
    }
    v40[v43] = v50;
    v52 = v40 + 9;
    v52[v51] = *(_DWORD*)(a4 + v49);
    v53 = &v52[v42];
    *v53 = 537026696;
    v38 = v53 + 4;
    v53[1] = *(_DWORD*)(a4 + 4);
    v53[2] = *(_QWORD*)a4;
    v53[3] = -2147393355;
  }
  else {
    *v18 = 537026708;
    v18[1] = *(_DWORD*)(a2 + 4);
    v18[2] = *(_QWORD*)a2;
    v18[3] = 537026696;
    v18[4] = *(_DWORD*)(a4 + 4);
    v18[5] = *(_QWORD*)a4;
    v38 = v18 + 6;
  }
  if ((unsigned __int64)(v38 + 49) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750_alt1(a1, (__int64)v38,
                           4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 49));
    v38 = *(_DWORD**)a1;
    result = 536961157;
  }
  v54 = &v25[48 * a5];
  v55 = v54[14] != 0 || v54[15] != 0;
  v56 = *(_DWORD*)(a4 + 24) != 1 && v55;
  if (v56 == 1) {
    *v38++ = -2147393362;
  }
  v38[4] = a9;
  v38[5] = a10;
  *v38 = 536961571;
  if ((a16 & 1) != 0) {
    v57 = 16;
  }
  else {
    v57 = 0;
  }
  v38[6] = a11;
  v38[7] = 537158192;
  v38[1] = v57 & 0xFFFFFFFE | a15 & 1;
  v38[2] = 537158188;
  v38[3] = a8;
  v38[8] = a12 << -a14;
  v38[9] = a12 >> a14;
  v38[10] = a13 << -a14;
  v38[11] = a13 >> a14;
  v38[12] = 537158196;
  v38[13] = a6 << 28;
  v38[14] = a6 >> 4;
  v38[15] = a7 << 28;
  v38[16] = a7 >> 4;
  if (v56 != 0) {
    v38[17] = -2147458898;
    v58 = v38 + 18;
  }
  else {
    v58 = v38 + 17;
  }
  *(_QWORD*)a1 = v58;
  return result;
}

__int64 nvidia_64f9e0(__int64 a1, int* a2, __int64* a3, int* a4, __int64* a5)
{
  _DWORD* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 result;
  _DWORD* v18;
  __int64 v19;
  struct {
    _BYTE v20[12];
    int v21;
    int v22;
  } v20_;
  struct {
    _BYTE v23[12];
    int v24;
    int v25;
    char gap188_[56];
    int v26;
  } v23_;

  SdkRoutine_66a6d0_alt1(a2, (__int64)v23_.v23, a3);
  SdkRoutine_66a6d0_alt1(a4, (__int64)v20_.v20, a5);
  v9 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750_alt1(a1, (__int64)v9,
                           4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v9 = *(_DWORD**)a1;
  }
  v10 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v10 <= 4) {
    *v9++ = SdkData_c77ccc[v10];
  }
  *(_QWORD*)a1 = v9;
  v11 = 1;
  v12 = v23_.v24;
  v13 = v23_.v25;
  if (v23_.v24 >= v20_.v21) {
    v12 = v20_.v21;
  }
  if (v23_.v25 >= v20_.v22) {
    v13 = v20_.v22;
  }
  v14 = 1;
  HIDWORD(v15) = v23_.v26;
  LODWORD(v15) = v23_.v26;
  v16 = (v15 >> 1) - 1;
  if (v16 <= 7) {
    v14 = SdkData_bb0370[v16];
    v11 = SdkData_bb0170[v16];
  }
  result =
      nvidia_64f5d0(a1, (__int64)v23_.v23, a2[10] << 7 >> 23, (__int64)v20_.v20,
                    a4[10] << 7 >> 23, 8 * v14 - 8, 8 * v11 - 8, 0, 0, v12, v13,
                    16 * v14, 16 * v11, 4, 0, 1, 1);
  v18 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750_alt1(
        a1, (__int64)v18, 4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v18 = *(_DWORD**)a1;
  }
  v19 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v19 <= 4) {
    *v18++ = SdkData_c77cf4[v19];
  }
  *(_QWORD*)a1 = v18;
  return result;
}

__int64 nvidia_64fbf0(__int64 a1, __int64 a2, int* a3, __int64 a4, int* a5)
{
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  char v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  unsigned __int64 v20;
  unsigned int v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int64 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;

  v5 = *(_DWORD*)(a2 + 104);
  v6 = *(_DWORD*)(a2 + 108);
  v7 = *(_QWORD*)(a2 + 96);
  v8 = (__int64)(*(_QWORD*)(a2 + 40) << 39) >> 55;
  v9 = *(_DWORD*)(a2 + 84);
  v10 = *(_QWORD*)(a2 + 72);
  v38 = 0u;
  v36 = 0u;
  v37 = 0u;
  v11 = *(_BYTE*)(a2 + 112);
  v33 = v7;
  v34 = 0u;
  v35 = 0u;
  v29 = 0u;
  v28 = 0u;
  v32 = 0u;
  v30 = 0u;
  v31 = 0u;
  HIDWORD(v34) = HIWORD(v6);
  LODWORD(v35) = 2;
  v12 = *a5;
  v13 = a5[1];
  DWORD2(v38) = v8;
  DWORD2(v35) = v5;
  HIDWORD(v35) = (unsigned __int16)v6;
  DWORD1(v34) = v5;
  DWORD2(v34) = (unsigned __int16)v6;
  v14 = *(unsigned __int8*)(a2 + 113);
  LODWORD(v38) = (unsigned __int8)v9;
  DWORD1(v38) = (v9 >> 21) & 0x3F;
  v15 = v10 >> 16;
  v16 = *(_DWORD*)(a4 + 84);
  v17 = *(_QWORD*)(a4 + 40);
  LODWORD(v36) = 1;
  LODWORD(v30) = 1;
  *((_QWORD*)&v37 + 1) = v15;
  *((_QWORD*)&v36 + 1) = __PAIR64__(*(unsigned __int8*)(a2 + 114), v14);
  LODWORD(v37) = 1 << v11;
  v18 = *(_DWORD*)(a4 + 104);
  LODWORD(v7) = (unsigned __int16)*(_DWORD*)(a4 + 108);
  LODWORD(v15) = HIWORD(*(_DWORD*)(a4 + 108));
  v27 = *(_QWORD*)(a4 + 96);
  v19 = (v16 >> 21) & 0x3F;
  HIDWORD(v28) = v15;
  LODWORD(v29) = 2;
  LODWORD(v15) = (unsigned __int8)v16;
  v20 = *(_QWORD*)(a4 + 72);
  *(_QWORD*)((char*)&v28 + 4) = __PAIR64__(v7, v18);
  *((_QWORD*)&v29 + 1) = __PAIR64__(v7, v18);
  v21 = *(unsigned __int8*)(a4 + 114);
  *(_QWORD*)&v32 = __PAIR64__(v19, v15);
  LOBYTE(v19) = *(_BYTE*)(a4 + 112);
  DWORD2(v32) = (int)((_DWORD)v17 << 7) >> 23;
  v22 = v20 >> 16;
  LODWORD(v20) = *(unsigned __int8*)(a4 + 113);
  v23 = *a3;
  v24 = a3[1];
  v25 = a3[3];
  LODWORD(v8) = a3[4];
  *((_QWORD*)&v31 + 1) = v22;
  LODWORD(v31) = 1 << v19;
  *((_QWORD*)&v30 + 1) = __PAIR64__(v21, v20);
  return SdkRoutine_64d350(a1, &v33, &v27, v23, v24, v12, v13, v25, v8);
}

__int64 nvidia_64fd30(__int64 result, char a2)
{
  unsigned int* v3;
  __int64 v4;
  unsigned int v5;
  _DWORD* v6;
  int v7;

  v3 = *(unsigned int**)result;
  v4 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 8LL) > *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result);
    v3 = *(unsigned int**)v4;
  }
  if (a2 != 0) {
    v5 = -2147418112;
  }
  else {
    v5 = 0x80000000;
  }
  *v3 = v5 | 0x8097;
  v6 = v3 + 1;
  v7 = *(_DWORD*)(v4 + 24);
  if (v7 == 3 || v7 == 0) {
    v3[1] = v5 | 0x609B;
    v6 = v3 + 2;
  }
  *(_QWORD*)v4 = v6;
  return result;
}

__int64 nvidia_64fdc0(__int64 result, int a2, __int64 a3)
{
  _DWORD* v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  _DWORD* v11;
  unsigned __int64 v12;
  __int64 v13;

  v4 = *(_DWORD**)result;
  v6 = result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result);
    v4 = *(_DWORD**)v6;
  }
  v7 = *(unsigned int*)(v6 + 24);
  if ((unsigned int)v7 <= 4) {
    *v4++ = SdkData_c77ce0[v7];
  }
  v8 = *(_QWORD*)(v6 + 8);
  *(_QWORD*)v6 = v4;
  if ((unsigned __int64)(v4 + 8) > v8) {
    result = SdkRoutine_64b750(v6);
    v4 = *(_DWORD**)v6;
  }
  if (a2 != 0) {
    if (a2 != 1) {
      return result;
    }
    v9 = 4;
  }
  else {
    v9 = 3;
  }
  v4[2] = a3;
  v4[3] = v9;
  *v4 = 537100437;
  v4[1] = HIDWORD(a3);
  v10 = *(_DWORD*)(v6 + 24);
  if (v10 != 3 && v10 != 0) {
    v11 = v4 + 4;
  }
  else {
    v4[6] = a3;
    v4[7] = v9;
    v4[4] = 537092249;
    v4[5] = HIDWORD(a3);
    v11 = v4 + 8;
  }
  v12 = *(_QWORD*)(v6 + 8);
  *(_QWORD*)v6 = v11;
  if ((unsigned __int64)(v11 + 1) > v12) {
    result = SdkRoutine_64b750(v6);
    v11 = *(_DWORD**)v6;
  }
  v13 = *(unsigned int*)(v6 + 24);
  if ((unsigned int)v13 <= 4) {
    *v11++ = SdkData_c77cf4[v13];
  }
  *(_QWORD*)v6 = v11;
  return result;
}

#pragma GCC visibility pop
