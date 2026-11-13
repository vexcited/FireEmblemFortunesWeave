#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __getlocale_addr_plt(void);
__int64 cos_plt(void* this_, double);
__int64 exp_plt(void* this_, double);
__int64 sin_plt(void* this_, double);
extern __int64 (*SdkData_bd16c0)();
void* __lctrans_impl(void* this_, __int64);
_QWORD* musl_78eaa0(_QWORD* result, __int64 a2);
double musl_78eb90(void* a1, double a2, double a3);
void* musl_798d70(void* a1);
__int64 musl_7a5860(_QWORD* a1, _BYTE* a2, __int64 a3);
unsigned __int64 __memcpy_aarch64(unsigned __int64 result, char* a2,
                                  unsigned __int64 a3);
__int64 __memcpy_aarch64_simd(__int64 a1, __int64 a2, unsigned __int64 a3);

_QWORD* musl_78eaa0(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = result[1];
  v3 = result[2];
  v4 = result[11] - v2;
  result[23] = a2;
  result[24] = v4;
  v5 = v2 + a2;
  if (v3 - v2 <= a2 || a2 == 0) {
    v5 = v3;
  }
  result[22] = v5;
  return result;
}

double musl_78eb90(void* a1, double a2, double a3)
{

#pragma clang fp contract(off)
  int v4;
  void* v5;
  unsigned __int64 v6;
  int v7;
  __int64 v8;
  double v9;
  double v10;
  void* v11;
  double v12;
  double v13;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  v4 = (int)a1;
  v5 = (void*)exp_plt(a1, a2 + -0x1.37be319ba0da4p+10),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  v7 = v4 + (v6 >> 52) - 247;
  v8 = v6 & 0xFFFFFFFFFFFFFLL | 0x7FE0000000000000LL;
  *(_QWORD*)&v9 =
      (unsigned __int64)(unsigned int)(((v7 / 2) << 20) + 1072693248) << 32;
  *(_QWORD*)&v10 =
      (unsigned __int64)(unsigned int)(((v7 - v7 / 2) << 20) + 1072693248)
      << 32;
  v11 = (void*)cos_plt(v5, a3),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  v13 = v12 * *(double*)&v8 * v9 * v10;
  sin_plt(v11, a3),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(double, "d0", "=w"));
  return v13;
}

void* musl_798d70(void* a1)
{
  __int64 v2;

  v2 = __getlocale_addr_plt();
  return __lctrans_impl(a1, *(_QWORD*)(*(_QWORD*)v2 + 40LL));
}

__int64 musl_7a5860(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 (**v3)();
  unsigned __int64 v4;
  unsigned int v5;
  _BYTE* v6;
  __int64 v7;

  if (*(_DWORD*)a1[18] != 0) {
    v3 = (__int64 (**)())a1[18];
  }
  else {
    v3 = &SdkData_bd16c0;
  }
  if (a1[12] != 0) {
    v4 = 0;
    do {
      v5 = *((_DWORD*)v3 + v4);
      if (v5 == 0) {
        break;
      }
      if (v5 >= 0x80) {
        LOBYTE(v5) = 64;
      }
      *(_BYTE*)(a1[11] + v4++) = v5;
    } while (v4 < a1[12]);
  }
  else {
    v4 = 0;
  }
  v6 = (_BYTE*)a1[11];
  v7 = 0;
  a1[18] = (char*)v3 + 4 * v4;
  a1[1] = v6;
  a1[2] = &v6[v4];
  if (a3 != 0 && v4 != 0) {
    a1[1] = v6 + 1;
    *a2 = *v6;
    return 1;
  }
  return v7;
}

unsigned __int64 __memcpy_aarch64(unsigned __int64 result, char* a2,
                                  unsigned __int64 a3)
{
  char* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  unsigned __int64 j;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  unsigned __int64 i;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;

  v3 = &a2[a3];
  v4 = (char*)(result + a3);
  if (a3 > 0x80) {
    if (result != (_QWORD)a2) {
      if (result - (unsigned __int64)a2 < a3) {
        v52 = *((_QWORD*)v3 - 2);
        v53 = *((_QWORD*)v3 - 1);
        v54 = &v3[-((unsigned __int8)v4 & 0xF)];
        v55 = a3 - ((unsigned __int8)v4 & 0xF);
        v56 = *((_QWORD*)v54 - 2);
        v57 = *((_QWORD*)v54 - 1);
        *((_QWORD*)v4 - 2) = v52;
        *((_QWORD*)v4 - 1) = v53;
        v58 = *((_QWORD*)v54 - 4);
        v59 = *((_QWORD*)v54 - 3);
        v60 = *((_QWORD*)v54 - 6);
        v61 = *((_QWORD*)v54 - 5);
        v63 = *((_QWORD*)v54 - 8);
        v64 = *((_QWORD*)v54 - 7);
        v62 = v54 - 64;
        v65 = &v4[-((unsigned __int8)v4 & 0xF)];
        v42 = v55 > 0x80;
        for (i = v55 - 128; v42; i -= 64LL) {
          *((_QWORD*)v65 - 2) = v56;
          *((_QWORD*)v65 - 1) = v57;
          v56 = *((_QWORD*)v62 - 2);
          v57 = *((_QWORD*)v62 - 1);
          *((_QWORD*)v65 - 4) = v58;
          *((_QWORD*)v65 - 3) = v59;
          v58 = *((_QWORD*)v62 - 4);
          v59 = *((_QWORD*)v62 - 3);
          *((_QWORD*)v65 - 6) = v60;
          *((_QWORD*)v65 - 5) = v61;
          v60 = *((_QWORD*)v62 - 6);
          v61 = *((_QWORD*)v62 - 5);
          *((_QWORD*)v65 - 8) = v63;
          *((_QWORD*)v65 - 7) = v64;
          v65 -= 64;
          v63 = *((_QWORD*)v62 - 8);
          v64 = *((_QWORD*)v62 - 7);
          v62 -= 64;
          v42 = i > 0x40;
        }
        v67 = *((_QWORD*)a2 + 6);
        v68 = *((_QWORD*)a2 + 7);
        *((_QWORD*)v65 - 2) = v56;
        *((_QWORD*)v65 - 1) = v57;
        v69 = *((_QWORD*)a2 + 4);
        v70 = *((_QWORD*)a2 + 5);
        *((_QWORD*)v65 - 4) = v58;
        *((_QWORD*)v65 - 3) = v59;
        v71 = *((_QWORD*)a2 + 2);
        v72 = *((_QWORD*)a2 + 3);
        *((_QWORD*)v65 - 6) = v60;
        *((_QWORD*)v65 - 5) = v61;
        v73 = *(_QWORD*)a2;
        v74 = *((_QWORD*)a2 + 1);
        *((_QWORD*)v65 - 8) = v63;
        *((_QWORD*)v65 - 7) = v64;
        *(_QWORD*)(result + 48) = v67;
        *(_QWORD*)(result + 56) = v68;
        *(_QWORD*)(result + 32) = v69;
        *(_QWORD*)(result + 40) = v70;
        *(_QWORD*)(result + 16) = v71;
        *(_QWORD*)(result + 24) = v72;
        *(_QWORD*)result = v73;
        *(_QWORD*)(result + 8) = v74;
      }
      else {
        v28 = *(_QWORD*)a2;
        v29 = *((_QWORD*)a2 + 1);
        v30 = (_QWORD*)(result & 0xFFFFFFFFFFFFFFF0LL);
        v31 = &a2[-(result & 0xF)];
        v32 = a3 + (result & 0xF);
        v33 = *((_QWORD*)v31 + 2);
        v34 = *((_QWORD*)v31 + 3);
        *(_QWORD*)result = v28;
        *(_QWORD*)(result + 8) = v29;
        v35 = *((_QWORD*)v31 + 4);
        v36 = *((_QWORD*)v31 + 5);
        v37 = *((_QWORD*)v31 + 6);
        v38 = *((_QWORD*)v31 + 7);
        v40 = *((_QWORD*)v31 + 8);
        v41 = *((_QWORD*)v31 + 9);
        v39 = v31 + 64;
        v42 = v32 > 0x90;
        for (j = v32 - 144; v42; j -= 64LL) {
          v30[2] = v33;
          v30[3] = v34;
          v33 = v39[2];
          v34 = v39[3];
          v30[4] = v35;
          v30[5] = v36;
          v35 = v39[4];
          v36 = v39[5];
          v30[6] = v37;
          v30[7] = v38;
          v37 = v39[6];
          v38 = v39[7];
          v30[8] = v40;
          v30[9] = v41;
          v30 += 8;
          v40 = v39[8];
          v41 = v39[9];
          v39 += 8;
          v42 = j > 0x40;
        }
        v44 = *((_QWORD*)v3 - 8);
        v45 = *((_QWORD*)v3 - 7);
        v30[2] = v33;
        v30[3] = v34;
        v46 = *((_QWORD*)v3 - 6);
        v47 = *((_QWORD*)v3 - 5);
        v30[4] = v35;
        v30[5] = v36;
        v48 = *((_QWORD*)v3 - 4);
        v49 = *((_QWORD*)v3 - 3);
        v30[6] = v37;
        v30[7] = v38;
        v50 = *((_QWORD*)v3 - 2);
        v51 = *((_QWORD*)v3 - 1);
        v30[8] = v40;
        v30[9] = v41;
        *((_QWORD*)v4 - 8) = v44;
        *((_QWORD*)v4 - 7) = v45;
        *((_QWORD*)v4 - 6) = v46;
        *((_QWORD*)v4 - 5) = v47;
        *((_QWORD*)v4 - 4) = v48;
        *((_QWORD*)v4 - 3) = v49;
        *((_QWORD*)v4 - 2) = v50;
        *((_QWORD*)v4 - 1) = v51;
      }
    }
  }
  else if (a3 > 0x20) {
    v12 = *(_QWORD*)a2;
    v13 = *((_QWORD*)a2 + 1);
    v14 = *((_QWORD*)a2 + 2);
    v15 = *((_QWORD*)a2 + 3);
    v16 = *((_QWORD*)v3 - 4);
    v17 = *((_QWORD*)v3 - 3);
    v18 = *((_QWORD*)v3 - 2);
    v19 = *((_QWORD*)v3 - 1);
    if (a3 > 0x40) {
      v20 = *((_QWORD*)a2 + 4);
      v21 = *((_QWORD*)a2 + 5);
      v22 = *((_QWORD*)a2 + 6);
      v23 = *((_QWORD*)a2 + 7);
      if (a3 > 0x60) {
        v24 = *((_QWORD*)v3 - 8);
        v25 = *((_QWORD*)v3 - 7);
        v26 = *((_QWORD*)v3 - 6);
        v27 = *((_QWORD*)v3 - 5);
        *((_QWORD*)v4 - 8) = v24;
        *((_QWORD*)v4 - 7) = v25;
        *((_QWORD*)v4 - 6) = v26;
        *((_QWORD*)v4 - 5) = v27;
      }
      *(_QWORD*)result = v12;
      *(_QWORD*)(result + 8) = v13;
      *(_QWORD*)(result + 16) = v14;
      *(_QWORD*)(result + 24) = v15;
      *(_QWORD*)(result + 32) = v20;
      *(_QWORD*)(result + 40) = v21;
      *(_QWORD*)(result + 48) = v22;
      *(_QWORD*)(result + 56) = v23;
      *((_QWORD*)v4 - 4) = v16;
      *((_QWORD*)v4 - 3) = v17;
      *((_QWORD*)v4 - 2) = v18;
      *((_QWORD*)v4 - 1) = v19;
    }
    else {
      *(_QWORD*)result = v12;
      *(_QWORD*)(result + 8) = v13;
      *(_QWORD*)(result + 16) = v14;
      *(_QWORD*)(result + 24) = v15;
      *((_QWORD*)v4 - 4) = v16;
      *((_QWORD*)v4 - 3) = v17;
      *((_QWORD*)v4 - 2) = v18;
      *((_QWORD*)v4 - 1) = v19;
    }
  }
  else if (a3 < 0x10) {
    if ((a3 & 8) != 0) {
      v8 = *((_QWORD*)v3 - 1);
      *(_QWORD*)result = *(_QWORD*)a2;
      *((_QWORD*)v4 - 1) = v8;
    }
    else if ((a3 & 4) != 0) {
      v9 = *((_DWORD*)v3 - 1);
      *(_DWORD*)result = *(_DWORD*)a2;
      *((_DWORD*)v4 - 1) = v9;
    }
    else if (a3 != 0) {
      v10 = *(v3 - 1);
      v11 = a2[a3 >> 1];
      *(_BYTE*)result = *a2;
      *(_BYTE*)(result + (a3 >> 1)) = v11;
      *(v4 - 1) = v10;
    }
  }
  else {
    v5 = *((_QWORD*)a2 + 1);
    v6 = *((_QWORD*)v3 - 2);
    v7 = *((_QWORD*)v3 - 1);
    *(_QWORD*)result = *(_QWORD*)a2;
    *(_QWORD*)(result + 8) = v5;
    *((_QWORD*)v4 - 2) = v6;
    *((_QWORD*)v4 - 1) = v7;
  }
  return result;
}

__int64 __memcpy_aarch64_simd(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  long double result;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  int v8;
  char v9;
  char v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  long double v17;
  __int64 v18;
  _OWORD* v19;
  _OWORD* v20;
  unsigned __int64 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  bool v26;
  unsigned __int64 j;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int64 v39;
  unsigned __int64 i;
  __int128 v41;
  __int128 v42;
  __int128 v43;

  v4 = a2 + a3;
  v5 = a1 + a3;
  if (a3 > 0x80) {
    if (a1 - a2 < a3) {
      if (a1 != a2) {
        v31 = *(_OWORD*)(v4 - 16);
        v32 = v4 & 0xF;
        v33 = v4 & 0xFFFFFFFFFFFFFFF0LL;
        v34 = a3 - v32;
        v35 = *(_OWORD*)(v33 - 32);
        v36 = *(_OWORD*)(v33 - 16);
        *(_OWORD*)(v5 - 16) = v31;
        v37 = *(_OWORD*)(v33 - 64);
        v38 = *(_OWORD*)(v33 - 48);
        v39 = v5 - v32;
        v26 = v34 > 0x80;
        for (i = v34 - 128; v26; i -= 64LL) {
          *(_OWORD*)(v39 - 16) = v36;
          *(_OWORD*)(v39 - 32) = v35;
          v35 = *(_OWORD*)(v33 - 96);
          v36 = *(_OWORD*)(v33 - 80);
          *(_OWORD*)(v39 - 48) = v38;
          *(_OWORD*)(v39 - 64) = v37;
          v39 -= 64;
          v37 = *(_OWORD*)(v33 - 128);
          v38 = *(_OWORD*)(v33 - 112);
          v33 -= 64LL;
          v26 = i > 0x40;
        }
        v41 = *(_OWORD*)(a2 + 32);
        v42 = *(_OWORD*)(a2 + 48);
        *(_OWORD*)(v39 - 32) = v35;
        *(_OWORD*)(v39 - 16) = v36;
        result = *(long double*)a2;
        v43 = *(_OWORD*)(a2 + 16);
        *(_OWORD*)(v39 - 64) = v37;
        *(_OWORD*)(v39 - 48) = v38;
        *(_OWORD*)(a1 + 32) = v41;
        *(_OWORD*)(a1 + 48) = v42;
        *(long double*)a1 = result;
        *(_OWORD*)(a1 + 16) = v43;
      }
    }
    else {
      v17 = *(long double*)a2;
      v18 = a2 & 0xF;
      v19 = (_OWORD*)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = (_OWORD*)(a1 - v18);
      v21 = a3 + v18;
      v22 = v19[1];
      v23 = v19[2];
      *(long double*)a1 = v17;
      v24 = v19[3];
      v25 = v19[4];
      v26 = v21 > 0x90;
      for (j = v21 - 144; v26; j -= 64LL) {
        v20[1] = v22;
        v20[2] = v23;
        v22 = v19[5];
        v23 = v19[6];
        v20[3] = v24;
        v20[4] = v25;
        v24 = v19[7];
        v25 = v19[8];
        v19 += 4;
        v20 += 4;
        v26 = j > 0x40;
      }
      v28 = *(_OWORD*)(v4 - 64);
      v29 = *(_OWORD*)(v4 - 48);
      v20[1] = v22;
      v20[2] = v23;
      result = *(long double*)(v4 - 32);
      v30 = *(_OWORD*)(v4 - 16);
      v20[3] = v24;
      v20[4] = v25;
      *(_OWORD*)(v5 - 64) = v28;
      *(_OWORD*)(v5 - 48) = v29;
      *(long double*)(v5 - 32) = result;
      *(_OWORD*)(v5 - 16) = v30;
    }
  }
  else if (a3 > 0x20) {
    result = *(long double*)a2;
    v11 = *(_OWORD*)(a2 + 16);
    v12 = *(_OWORD*)(v4 - 32);
    v13 = *(_OWORD*)(v4 - 16);
    if (a3 > 0x40) {
      v14 = *(_OWORD*)(a2 + 32);
      v15 = *(_OWORD*)(a2 + 48);
      if (a3 > 0x60) {
        v16 = *(_OWORD*)(v4 - 48);
        *(_OWORD*)(v5 - 64) = *(_OWORD*)(v4 - 64);
        *(_OWORD*)(v5 - 48) = v16;
      }
      *(long double*)a1 = result;
      *(_OWORD*)(a1 + 16) = v11;
      *(_OWORD*)(a1 + 32) = v14;
      *(_OWORD*)(a1 + 48) = v15;
      *(_OWORD*)(v5 - 32) = v12;
      *(_OWORD*)(v5 - 16) = v13;
    }
    else {
      *(long double*)a1 = result;
      *(_OWORD*)(a1 + 16) = v11;
      *(_OWORD*)(v5 - 32) = v12;
      *(_OWORD*)(v5 - 16) = v13;
    }
  }
  else if (a3 < 0x10) {
    if ((a3 & 8) != 0) {
      v7 = *(_QWORD*)(v4 - 8);
      *(_QWORD*)a1 = *(_QWORD*)a2;
      *(_QWORD*)(v5 - 8) = v7;
    }
    else if ((a3 & 4) != 0) {
      v8 = *(_DWORD*)(v4 - 4);
      *(_DWORD*)a1 = *(_DWORD*)a2;
      *(_DWORD*)(v5 - 4) = v8;
    }
    else if (a3 != 0) {
      v9 = *(_BYTE*)(v4 - 1);
      v10 = *(_BYTE*)(a2 + (a3 >> 1));
      *(_BYTE*)a1 = *(_BYTE*)a2;
      *(_BYTE*)(a1 + (a3 >> 1)) = v10;
      *(_BYTE*)(v5 - 1) = v9;
    }
  }
  else {
    result = *(long double*)a2;
    v6 = *(_OWORD*)(v4 - 16);
    *(_OWORD*)a1 = *(_OWORD*)a2;
    *(_OWORD*)(v5 - 16) = v6;
  }
  return a1;
}

#pragma GCC visibility pop
