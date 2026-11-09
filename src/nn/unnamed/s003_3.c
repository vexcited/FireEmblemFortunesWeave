#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_1042158)(_QWORD);
extern __int64 (*SdkData_1042178)(_QWORD);
extern _DWORD SdkData_bb0170[8];
extern _DWORD SdkData_bb0370[8];
extern _DWORD SdkData_c77ca4[5];
extern _DWORD SdkData_c77ccc[5];
extern _DWORD SdkData_c77cf4[5];
extern __int64* SdkData_e899b0[3];
extern _QWORD SdkData_e899c8;
extern _BYTE* SdkData_e899e8;
extern __int64* SdkData_e899f0;
extern _BYTE* SdkData_e899f8;
extern _QWORD SdkData_e89a00;
extern _BYTE* SdkData_e89a08;
extern _BYTE* SdkData_e89a10;
extern _QWORD SdkData_e89a18;
extern _QWORD SdkData_e89a20;
extern _BYTE* SdkData_e89a28;
extern _BYTE* SdkData_e89a30;
extern _QWORD SdkData_e89a38;
extern int* SdkData_e89a48[2];
extern _BYTE* SdkData_e89a58;
extern _QWORD SdkData_e89a90;
extern _BYTE* SdkData_e89a98;
extern _BYTE* SdkData_e89aa0;
extern _BYTE* SdkData_e89ab8;
extern _BYTE* SdkData_e89ac0;
extern int* SdkData_e89b00[3];
extern __int64* SdkData_e89b08[2];
extern _BYTE* SdkData_e89b18;
extern int* SdkData_e89b20[4];
extern int* SdkData_e89b28[3];
extern int* SdkData_e89b30[2];
extern int* SdkData_e89b38;
extern _BYTE* SdkData_e89b40;
extern _BYTE* SdkData_e89b48;
extern int* SdkData_e89b50;
extern _BYTE* SdkData_e89b58;
extern _BYTE* SdkData_e89b60;
extern _BYTE* SdkData_e89b68;
extern _BYTE* SdkData_e89b70;
extern _UNKNOWN* SdkData_e89ba0;
extern __int64 SdkData_ea7c38;
extern _UNKNOWN SdkData_ea7c40;
__int64 SdkRoutine_649780(__int64);
__int64 SdkRoutine_6497e0(_QWORD);
__int64 SdkRoutine_649800(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_649830(_QWORD);
_QWORD* SdkRoutine_64ac60(_QWORD* result, _QWORD*, unsigned int);
__int64 SdkRoutine_64b3b0(_QWORD);
__int64 SdkRoutine_64b750(_QWORD);
__int64 SdkRoutine_64cb80(__int64 result, _QWORD*, unsigned int);
_QWORD* SdkRoutine_64e860(_QWORD* result, __int64, unsigned __int64,
                          unsigned __int64);
__int64 SdkRoutine_64f5d0(__int64, __int64, int, __int64, int, int, int, int,
                          int, int, int, int, int, char, char, char, char);
__int64 SdkRoutine_653d20(int*, __int64, unsigned int);
__int64 SdkRoutine_6540f0(_QWORD);
__int64 SdkRoutine_6551f0(int, __int64);
__int64 SdkRoutine_65cf40(_QWORD, _QWORD);
__int64 SdkRoutine_65cf50(__int64 result);
__int64 SdkRoutine_65cf70(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_65d040(_QWORD, _QWORD);
__int64 SdkRoutine_65d0a0(_OWORD*, __int64);
__int64 SdkRoutine_65ed60(_QWORD);
__int64 SdkRoutine_664480(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_664a50(_QWORD, _QWORD);
__int64 SdkRoutine_6650b0(_QWORD, _QWORD);
__int64 SdkRoutine_66a6d0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66c890(_QWORD, _QWORD);
__int64 SdkRoutine_66cad0(_QWORD, _QWORD);
__int64 SdkRoutine_66f5e0(_QWORD);
__int64 SdkRoutine_685980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_687900(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_688370(_QWORD);
__int64 SdkRoutine_6892f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6a0870(_QWORD);
__int64 SdkRoutine_6add10(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6addf0(_QWORD);
__int64 SdkRoutine_6ade20(_QWORD);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858d40(_QWORD);
__int64 SdkRoutine_858d50(_QWORD);
__int64 SdkRoutine_858d70(_QWORD);
__int64 SdkRoutine_875990(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_875b30(_QWORD);
__int64 SdkRoutine_875d90(_QWORD);
__int64 SdkRoutine_875da0(_QWORD, _QWORD);
__int64 SdkRoutine_876b30(_QWORD);

__int64 SdkHr_643ff0()
{
  __int64* v0;
  __int64* v1;
  __int64* v2;
  __int64 result;
  int* v4;
  int* v5;
  int* v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;

  *SdkData_e89b20[0] = 0;
  v0 = SdkData_e89b08[0];
  if (*SdkData_e89b08[0] != 0) {
    SdkRoutine_875b30(*SdkData_e89b08[0]);
  }
  *v0 = 0;
  v1 = SdkData_e899b0[0];
  if (*SdkData_e899b0[0] != 0) {
    SdkRoutine_875b30(*SdkData_e899b0[0]);
  }
  *v1 = 0;
  *SdkData_e89b28[0] = 0;
  *SdkData_e89b30[0] = 0;
  *SdkData_e89b38 = 0;
  *SdkData_e89b40 = 0;
  *SdkData_e89ac0 = 0;
  *SdkData_e89b48 = 0;
  v2 = SdkData_e899f0;
  result = *SdkData_e899f0;
  if (*SdkData_e899f0 != 0) {
    result = SdkRoutine_875b30(result);
  }
  v4 = SdkData_e89b00[0];
  *v2 = 0;
  v5 = SdkData_e89a48[0];
  *v4 = -1;
  v6 = SdkData_e89b50;
  v7 = (_BYTE*)SdkData_e89a20;
  *v5 = 0;
  v8 = (_BYTE*)SdkData_e89a90;
  *v6 = 0;
  v9 = (_BYTE*)SdkData_e89a38;
  *v7 = 0;
  v10 = (_BYTE*)SdkData_e89a00;
  *v8 = 0;
  v11 = (_BYTE*)SdkData_e89a18;
  *v9 = 0;
  v12 = (_BYTE*)SdkData_e899c8;
  *v10 = 0;
  *v11 = 0;
  *v12 = 0;
  *SdkData_e89b58 = 0;
  *SdkData_e89a98 = 0;
  *SdkData_e89b60 = 0;
  *SdkData_e89ab8 = 0;
  *SdkData_e899e8 = 0;
  *SdkData_e89b68 = 0;
  *SdkData_e899f8 = 0;
  *SdkData_e89a28 = 0;
  *SdkData_e89a08 = 0;
  *SdkData_e89b70 = 0;
  *SdkData_e89a10 = 0;
  *SdkData_e89a30 = 0;
  *SdkData_e89aa0 = 0;
  *SdkData_e89a58 = 0;
  *SdkData_e89b18 = 0;
  return result;
}

__int64 SdkHr_649bf0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                     _QWORD* a4, unsigned int a5)
{
  __int64 v5;
  int v10;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  char v16;
  _DWORD* v17;
  _DWORD* v18;
  __int64 result;
  _DWORD* v20;

  v5 = a5;
  if (*(_BYTE*)(a1 + 11136) != 0) {
    v10 = 3;
  }
  else {
    v10 = 0;
  }
  v11 = ((unsigned __int64)a5 + 3) >> 2;
  v12 = ((__int64 (*)(void))SdkRoutine_65ed60)();
  v13 = *(_QWORD*)(a1 + 11240);
  v14 = *(_QWORD*)(a1 + 11248);
  if ((v12 & 1) != 0) {
    v15 = 5;
  }
  else {
    v15 = 3;
  }
  v20 = *(_DWORD**)(a1 + 11240);
  if (v13 + 4 * (unsigned __int64)(unsigned int)(v11 + v15 + v10 + 7) > v14) {
    SdkRoutine_64b750(a1 + 11240);
    v20 = *(_DWORD**)(a1 + 11240);
  }
  SdkRoutine_6892f0(a1 + 11128, &v20, a4);
  SdkRoutine_685980(&v20, *(_QWORD*)(a1 + 16) + 16LL, a3,
                    (unsigned int)(4 * v11), 0);
  SdkRoutine_856130(v20, *a4, v5);
  v20 += v11;
  v16 = SdkRoutine_65ed60(a1);
  v17 = v20;
  if ((v16 & 1) != 0) {
    *v20 = 536948366;
    v20[1] = a3 >> 8;
    v17 = v20 + 2;
    v20 += 2;
  }
  *v17 = 536944813;
  v20[1] = a2 >> 8;
  v18 = v20;
  v20[2] = -2147278672;
  v20 = v18 + 3;
  result = SdkRoutine_688370(a1 + 11128);
  *(_QWORD*)(a1 + 11240) = v20;
  return result;
}

__int64 SdkHr_649d70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3,
                     int a4, char a5, int a6)
{
  int v6;
  int v10;
  _BYTE* v11;
  int v12;
  _QWORD* v13;
  int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  char v19;
  _DWORD* v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  char* v24;
  _DWORD* v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  char* v29;
  char v30;
  _DWORD* v31;
  _DWORD* v32;
  __int64 result;
  _DWORD* v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  _QWORD v42[20];
  int v43;

  v6 = *(_DWORD*)(a1 + 328);
  v36 = 0u;
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  if (v6 == 52928) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if (v6 == 51648) {
    v10 = 1;
  }
  v40 = 0u;
  v41 = 0u;
  v43 = v10;
  memset(v42, 0, sizeof(v42));
  if (v6 == 52928) {
    DWORD2(v38) = a4;
    LODWORD(v40) = a4;
    LODWORD(v37) = 0x1000000;
    v11 = (_BYTE*)(a1 + 11136);
    LODWORD(v42[17]) = 1;
    v12 = *(unsigned __int8*)(a1 + 11136);
    DWORD2(v39) = 5243136;
    v13 = (_QWORD*)(a1 + 16);
    if (v12 != 0) {
      v14 = 45;
    }
    else {
      v14 = 42;
    }
    v15 = a1 + 11128;
    if ((*(_DWORD*)(a1 + 356) & 0x14) != 0) {
      v16 = 720896;
    }
    else {
      v16 = 196608;
    }
    HIDWORD(v40) = v16;
    if ((a5 & 1) != 0) {
      v17 = a6 & 0xFFC0FFFF | ((*(_DWORD*)(a1 + 5984) & 0x3F) << 16);
    LABEL_23:
      LODWORD(v37) = v17;
    }
  }
  else {
    v13 = (_QWORD*)(a1 + 16);
    LODWORD(v41) = 1;
    LODWORD(v37) = 64;
    DWORD2(v40) = 48;
    HIDWORD(v38) = 67305472;
    v15 = a1 + 11128;
    v11 = (_BYTE*)(a1 + 11136);
    if (*(_BYTE*)(a1 + 11136) != 0) {
      v14 = 45;
    }
    else {
      v14 = 42;
    }
    if ((*(_DWORD*)(a1 + 356) & 0x14) != 0) {
      v18 = 0x80000000;
    }
    else {
      v18 = 0;
    }
    LODWORD(v40) = v18 & 0x80000000 | a4 & 0x7FFFFFFF;
    if ((a5 & 1) != 0) {
      v17 = a6 & 0xFFFFFFC0 | *(_DWORD*)(a1 + 5984) & 0x3F;
      goto LABEL_23;
    }
  }
  v19 = SdkRoutine_65ed60(a1);
  v20 = *(_DWORD**)(a1 + 11240);
  v21 = *(_QWORD*)(a1 + 11248);
  v35 = v20;
  if ((v19 & 1) != 0) {
    v22 = 5;
  }
  else {
    v22 = 3;
  }
  if ((unsigned __int64)&v20[v22 + v14] > v21) {
    SdkRoutine_64b750(a1 + 11240);
    v35 = *(_DWORD**)(a1 + 11240);
  }
  SdkRoutine_687900(v15, &v35, &v36);
  v23 = 96;
  if (v43 == 2) {
    v23 = 60;
    v24 = (char*)&v39 + 12;
  }
  else {
    v24 = (char*)v42;
  }
  SdkRoutine_685980(&v35, *v13 + 16LL, v23 + a3, 12, 0);
  v25 = v35;
  v26 = *((_DWORD*)v24 + 2);
  *(_QWORD*)v35 = *(_QWORD*)v24;
  v25[2] = v26;
  v35 = v25 + 3;
  if (*v11 == 1) {
    if (v43 == 2) {
      v27 = 0;
    }
    else {
      v27 = 2;
    }
    v28 = 60;
    if (v43 == 2) {
      v29 = (char*)&v36;
    }
    else {
      v29 = (char*)&v39 + 12;
    }
    if (v43 == 2) {
      v28 = 0;
    }
    SdkRoutine_685980(&v35, *v13 + 16LL, v28 + a3, 4 * v27, 0);
    SdkRoutine_856130(v35, v29, 4LL * v27);
    v35 += v27;
  }
  if ((a5 & 1) != 0) {
    SdkRoutine_685980(&v35, *v13 + 16LL, a3 + 16, 4, 0);
    *v35++ = v37;
  }
  v30 = SdkRoutine_65ed60(a1);
  v31 = v35;
  if ((v30 & 1) != 0) {
    *v35 = 536948366;
    v35[1] = a3 >> 8;
    v31 = v35 + 2;
    v35 += 2;
  }
  *v31 = 536944813;
  v35[1] = a2 >> 8;
  v32 = v35;
  v35[2] = -2147278672;
  v35 = v32 + 3;
  result = SdkRoutine_688370(v15);
  *(_QWORD*)(a1 + 11240) = v35;
  return result;
}

__int64 SdkHr_64cd60(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  bool v6;
  char v7;
  __int64 v8;

  result = SdkRoutine_64cb80(a1, &v8, 0x10u);
  v5 = *(_DWORD*)(a1 + 24);
  v6 = v5 == 1 || v5 == 4;
  v7 = 6;
  if (v6) {
    v7 = 97;
  }
  *(_BYTE*)v8 = v7;
  *(_QWORD*)(v8 + 8) = a2;
  return result;
}

__int64 SdkHr_64cdc0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;

  result = SdkRoutine_64cb80(a1, &v9, 0x10u);
  *(_BYTE*)v9 = 17;
  *(_DWORD*)(v9 + 4) = a4;
  if (a2 != 0) {
    v8 = *(_QWORD*)(a2 + 24) + a3;
  }
  else {
    v8 = 0;
  }
  *(_QWORD*)(v9 + 8) = v8;
  return result;
}

__int64 SdkHr_64ce30(__int64 a1, __int64 a2, char a3, __int16 a4, int a5,
                     __int64 a6)
{
  __int16 v6;
  __int64 v7;
  _BYTE* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  v6 = a5;
  v7 = 4LL * a5;
  SdkRoutine_64cb80(a1, &v15, (v7 + 23) & 0xFFFFFFF8);
  v12 = (_BYTE*)v15;
  result = SdkRoutine_856130(v15 + 16, a6, v7);
  *v12 = 18;
  v14 = v15;
  *(_BYTE*)(v15 + 1) = a3;
  *(_QWORD*)(v14 + 8) = a2;
  *(_WORD*)(v15 + 2) = a4;
  *(_WORD*)(v15 + 4) = v6;
  return result;
}

long double SdkHr_64cef0(__int64 a1, __int64 a2, __int64 a3, __int128* a4,
                         __int64 a5, __int64 a6, long double* a7, int a8,
                         int a9)
{
  __int64 v14;
  __int128 v15;
  long double result;
  __int64 v17;

  SdkRoutine_64cb80(a1, &v17, 0x40u);
  *(_BYTE*)v17 = 110;
  v14 = v17;
  *(_QWORD*)(v17 + 8) = a2;
  v15 = *a4;
  *(_QWORD*)(v14 + 32) = a5;
  *(_OWORD*)(v14 + 16) = v15;
  result = *a7;
  *(_DWORD*)(v14 + 56) = a8;
  *(_DWORD*)(v14 + 60) = a9;
  *(long double*)(v14 + 40) = result;
  return result;
}

_QWORD* SdkHr_64e860(_QWORD* result, __int64 a2, unsigned __int64 a3,
                     unsigned __int64 a4)
{
  unsigned int v4;
  _QWORD* v8;
  __int64 v10;
  _DWORD* v11;
  _DWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = *((_DWORD*)result + 6);
  v8 = result;
  if (v4 == 4 || v4 == 1) {
    result = SdkRoutine_64ac60(result, &v16, 0x20u);
    *(_BYTE*)v16 = 92;
    v10 = v16;
    *(_QWORD*)(v16 + 8) = a2;
    *(_QWORD*)(v10 + 16) = a3;
    *(_QWORD*)(v10 + 24) = a4;
  }
  else {
    v11 = (_DWORD*)*result;
    if ((unsigned __int64)(*result + 4LL) > result[1]) {
      result = (_QWORD*)SdkRoutine_64b750(result);
      v11 = (_DWORD*)*v8;
      v4 = *((_DWORD*)v8 + 6);
    }
    if (v4 <= 4) {
      *v11++ = SdkData_c77ca4[v4];
    }
    *v8 = v11;
    do {
      if (a4 >= 0x3FFFFF) {
        v14 = 0x3FFFFF;
      }
      else {
        v14 = a4;
      }
      if ((unsigned __int64)(v11 + 9) > v8[1]) {
        result = (_QWORD*)SdkRoutine_64b750(v8);
        v12 = (_DWORD*)*v8;
      }
      else {
        v12 = v11;
      }
      v12[4] = a3;
      v12[5] = 536969478;
      v11 = v12 + 9;
      a4 -= v14;
      v12[6] = v14;
      *(_QWORD*)(v12 + 7) = 0x186200180C0LL;
      *v12 = 537166080;
      v12[1] = HIDWORD(a2);
      v13 = HIDWORD(a3);
      a3 += v14;
      v12[2] = a2;
      v12[3] = v13;
      a2 += v14;
      *v8 = v12 + 9;
    } while (a4 != 0);
    if ((unsigned __int64)(v12 + 10) > v8[1]) {
      result = (_QWORD*)SdkRoutine_64b750(v8);
      v11 = (_DWORD*)*v8;
    }
    v15 = *((unsigned int*)v8 + 6);
    if ((unsigned int)v15 <= 4) {
      *v11++ = SdkData_c77cf4[v15];
    }
    *v8 = v11;
  }
  return result;
}

_QWORD* SdkHr_64ea80(_QWORD* result, __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char* v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;

  if ((*(_QWORD*)(*(_QWORD*)a2 + 40LL) & 0x1FF0000LL) == 0x310000) {
    return result;
  }
  result = SdkRoutine_64ac60(result, &v17, 0x88u);
  *(_BYTE*)v17 = 91;
  v3 = v17;
  *(_DWORD*)(v17 + 68) = *(_DWORD*)(a2 + 40);
  *(_QWORD*)(v3 + 8) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v3 + 16) = *(_DWORD*)(a2 + 16);
  *(_DWORD*)(v3 + 20) = *(_DWORD*)(a2 + 20);
  *(_DWORD*)(v3 + 48) = *(_DWORD*)(a2 + 24);
  *(_DWORD*)(v3 + 24) = *(_DWORD*)(a2 + 28);
  *(_DWORD*)(v3 + 28) = *(_DWORD*)(a2 + 32);
  v4 = *(_DWORD*)(a2 + 56);
  if (v4 == 0) {
    v5 = *(_DWORD*)(a2 + 92);
    if ((*(_BYTE*)(a2 + 100) & 1) != 0) {
      v5 *= 8;
    }
    v4 = (*(_DWORD*)(a2 + 28) + v5 - 1) / v5;
  }
  *(_DWORD*)(v3 + 40) = v4;
  if (*(int*)(a2 + 36) < 2) {
    v7 = 1;
    *(_DWORD*)(v3 + 44) = 0;
  }
  else {
    v6 = *(_DWORD*)(a2 + 60);
    if (v6 == 0) {
      v6 = v4 * ((unsigned int)(*(_DWORD*)(a2 + 32) + *(_DWORD*)(a2 + 96) - 1) /
                 *(_DWORD*)(a2 + 96));
    }
    *(_DWORD*)(v3 + 44) = v6;
    v7 = *(_DWORD*)(a2 + 36);
  }
  *(_DWORD*)(v3 + 52) = v7;
  *(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 48);
  *(_DWORD*)(v3 + 56) = *(unsigned __int8*)(*(_QWORD*)a2 + 84LL);
  *(_DWORD*)(v3 + 60) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
  *(_DWORD*)(v3 + 64) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
  *(_QWORD*)(v3 + 72) = *(_QWORD*)(a2 + 64);
  *(_QWORD*)(v3 + 88) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(a2 + 72);
  v8 = *(_DWORD*)(a2 + 44);
  *(_DWORD*)(v3 + 96) = v8;
  if ((*(_DWORD*)(a2 + 100) & 1) != 0) {
    v8 = 0;
  }
  *(_DWORD*)(v3 + 96) = v8;
  *(_DWORD*)(v3 + 100) = *(_DWORD*)(a2 + 88);
  *(_DWORD*)(v3 + 108) = *(_DWORD*)(a2 + 92);
  *(_DWORD*)(v3 + 112) = *(_DWORD*)(a2 + 96);
  v9 = *(_DWORD*)(a2 + 100);
  *(_DWORD*)(v3 + 104) = v9;
  *(_DWORD*)(v3 + 116) = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
  *(_DWORD*)(v3 + 120) = *(unsigned __int16*)(*(_QWORD*)a2 + 36LL);
  v10 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
  v11 = (char*)SdkData_e89ba0 + 48 * ((int)((_DWORD)v10 << 7) >> 23);
  if (v11[14] != 0 || v11[15] != 0) {
    v12 = *(_DWORD*)(a2 + 108);
    v13 = *(unsigned __int16*)(a2 + 104);
    v9 |= 0x20000000u;
    *(_DWORD*)(v3 + 104) = v9;
    *(_DWORD*)(v3 + 68) = v13 | (v12 << 16);
    v10 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
  }
  v14 = v10 << 39 >> 55;
  if (v14 == 51) {
    v15 = 8;
    goto LABEL_20;
  }
  if (v14 == 54) {
    v15 = 0x40000000;
  LABEL_20:
    *(_DWORD*)(v3 + 104) = v9 | v15;
  }
  if ((*(_BYTE*)(a2 + 100) & 4) != 0) {
    *(_WORD*)(v3 + 124) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
    *(_WORD*)(v3 + 126) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7;
    *(_WORD*)(v3 + 128) = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
    v16 = (*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7;
  }
  else {
    *(_WORD*)(v3 + 124) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7) *
                          *(unsigned __int8*)(a2 + 112);
    *(_WORD*)(v3 + 126) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 15) & 7) *
                          *(unsigned __int8*)(a2 + 113);
    *(_WORD*)(v3 + 128) = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7) *
                          *(unsigned __int8*)(a2 + 114);
    v16 = ((*(_DWORD*)(*(_QWORD*)a2 + 84LL) >> 18) & 7) *
          *(unsigned __int8*)(a2 + 115);
  }
  *(_WORD*)(v3 + 130) = v16;
  return result;
}

__int64 SdkHr_64f9e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  _BYTE v20[12];
  int v21;
  int v22;
  _BYTE v23[12];
  int v24;
  int v25;
  int v26;

  SdkRoutine_66a6d0(a2, v23, a3);
  SdkRoutine_66a6d0(a4, v20, a5);
  v9 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1);
    v9 = *(_DWORD**)a1;
  }
  v10 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v10 <= 4) {
    *v9++ = SdkData_c77ccc[v10];
  }
  *(_QWORD*)a1 = v9;
  v11 = 1;
  v12 = v24;
  v13 = v25;
  if (v24 >= v21) {
    v12 = v21;
  }
  if (v25 >= v22) {
    v13 = v22;
  }
  v14 = 1;
  HIDWORD(v15) = v26;
  LODWORD(v15) = v26;
  v16 = (v15 >> 1) - 1;
  if (v16 <= 7) {
    v14 = SdkData_bb0370[v16];
    v11 = SdkData_bb0170[v16];
  }
  result = SdkRoutine_64f5d0(
      a1, (__int64)v23, (int)(*(_DWORD*)(a2 + 40) << 7) >> 23, (__int64)v20,
      (int)(*(_DWORD*)(a4 + 40) << 7) >> 23, 8 * v14 - 8, 8 * v11 - 8, 0, 0,
      v12, v13, 16 * v14, 16 * v11, 4, 0, 1, 1);
  v18 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(a1);
    v18 = *(_DWORD**)a1;
  }
  v19 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v19 <= 4) {
    *v18++ = SdkData_c77cf4[v19];
  }
  *(_QWORD*)a1 = v18;
  return result;
}

__int64 SdkHr_6567c0(__int64 a1, unsigned __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64* v4;
  __int64 result;
  unsigned __int64 v6;

  if ((*(_BYTE*)(a1 + 19) & 1) != 0) {
    v6 = 2;
  }
  else {
    if (*(_BYTE*)(a1 + 18) != 0) {
      return 0;
    }
    v2 = *(_QWORD*)(a1 + 80);
    if (*(_DWORD*)(v2 + 20) != 1) {
      return 0;
    }
    v3 = *(unsigned int*)(v2 + 40);
    v4 = a2;
    if ((int)SdkRoutine_6551f0(166, 0) < (unsigned __int64)(4 * v3)) {
      return 0;
    }
    a2 = v4;
    v6 = *(_QWORD*)(v2 + 24) |
         ((unsigned __int64)*(unsigned int*)(v2 + 40) << 40) | 2;
  }
  result = 1;
  *a2 = v6;
  return result;
}

_QWORD* SdkHr_657f20(_QWORD* a1, int a2, int a3, __int64 a4)
{
  _QWORD* result;
  __int64 v8;

  result = SdkRoutine_64ac60(a1, &v8, 0x10u);
  *(_BYTE*)v8 = 103;
  *(_QWORD*)v8 = *(_QWORD*)v8 & 0xFFFFFFFF000000FFLL | (unsigned int)(a2 << 8);
  *(_DWORD*)(v8 + 4) = a3;
  *(_QWORD*)(v8 + 8) = a4;
  return result;
}

_QWORD* SdkHr_658330(_QWORD* a1, __int64 a2)
{
  _QWORD* result;
  __int64 v4;

  result = SdkRoutine_64ac60(a1, &v4, 0x10u);
  *(_BYTE*)v4 = 104;
  *(_QWORD*)(v4 + 8) = a2;
  return result;
}

__int64 SdkHr_65a260(__int64 a1, _QWORD* a2, unsigned __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;

  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a6 + 24LL))(a6);
  v15 = v14;
  if (a2 != nullptr) {
    v16 = (*(__int64 (**)(__int64))(*(_QWORD*)a5 + 24LL))(a5);
    result = SdkRoutine_649780(v16);
    if (result == 0) {
      return result;
    }
    SdkRoutine_856130(result + a7, a4, a3);
    SdkRoutine_649800(v16, a7, a3);
    v18 = SdkRoutine_6497e0(v16);
    v19 = SdkRoutine_6497e0(v15);
    SdkRoutine_64e860(a2, v18 + a7, v19 + a8, a3);
  }
  else {
    result = SdkRoutine_649780(v14);
    if (result == 0) {
      return result;
    }
    SdkRoutine_856130(result + a8, a4, a3);
    SdkRoutine_649800(v15, a8, a3);
  }
  return 1;
}

__int64 SdkHr_65b600(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_DWORD*)a2 = SdkRoutine_649830(a1 + 304);
  *(_DWORD*)(a2 + 4) = 1;
  *(_DWORD*)(a2 + 48) |= 6u;
  result = SdkRoutine_6497e0(a1 + 304);
  *(_QWORD*)(a2 + 40) = result;
  return result;
}

bool SdkHr_65b650(__int64 a1, _QWORD* a2, __int64 a3, unsigned int a4)
{
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;

  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 24LL))(a3);
  if (v8 != 0) {
    v9 = SdkRoutine_6497e0(v7);
    v10 = SdkRoutine_6497e0(v8);
    v11 = SdkRoutine_649830(v7);
    SdkRoutine_649830(v8);
    if (v11 >= a4) {
      v12 = a4;
    }
    else {
      v12 = v11;
    }
    SdkRoutine_64e860(a2, v10, v9, v12);
  }
  return v8 != 0;
}

__int64 SdkHr_65b950()
{
  __int64 v0;

  v0 = SdkRoutine_875d90((unsigned int)SdkData_ea7c38);
  SdkRoutine_6540f0(v0);
  return SdkRoutine_875da0((unsigned int)SdkData_ea7c38, 0);
}

_QWORD* SdkHr_65bfe0(__int64 a1, __int64 a2, char a3, char a4, char a5, int a6)
{
  _QWORD* result;
  int v13;
  int v15;
  int v16;
  __int64 v17;

  result = SdkRoutine_64ac60((_QWORD*)a1, &v17, 0x10u);
  *(_BYTE*)v17 = 7;
  *(_DWORD*)v17 = *(_DWORD*)v17 & 0xFFFFF0FF | ((a3 & 0xF) << 8);
  *(_DWORD*)v17 = *(_DWORD*)v17 & 0xFFFF0FFF | ((a4 & 0xF) << 12);
  *(_BYTE*)(v17 + 2) = a5;
  *(_DWORD*)(v17 + 4) = a6;
  v13 = *(_DWORD*)(a1 + 24);
  if (v13 == 4 || v13 == 1) {
    v15 = 0x1000000;
  }
  else {
    v15 = 0;
  }
  *(_DWORD*)v17 = *(_DWORD*)v17 & 0xFEFFFFFF | v15;
  if (*(_DWORD*)(a1 + 24) == 2) {
    v16 = 0x2000000;
  }
  else {
    v16 = 0;
  }
  *(_DWORD*)v17 = *(_DWORD*)v17 & 0xFDFFFFFF | v16;
  *(_QWORD*)(v17 + 8) = a2;
  return result;
}

__int64 SdkHr_65ebb0(__int64 a1, int** a2)
{
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int** v7;
  __int128 v8;
  __int64 result;
  __int64 v10;
  int* v11;
  int v12;
  int* v13;
  _DWORD v14[6];

  if (*((_BYTE*)a2 + 64) == 0) {
    v3 = a1;
    v13 = a2[1];
    SdkRoutine_66c890(a2, v14);
    v4 = *((_DWORD*)a2 + 10);
    v5 = **a2;
    v12 = 0;
    v10 = 0;
    v11 = nullptr;
    v14[4] = v5;
    v14[5] = v4;
    SdkRoutine_875990(&v13, &v10, &v12);
    v6 = v12;
    a1 = v3;
    *((_DWORD*)a2 + 14) = v12;
    v7 = &a2[4 * v6];
    v8 = *(_OWORD*)(v7 + 21);
    *(_OWORD*)(v7 + 35) = *(_OWORD*)(v7 + 19);
    *(_OWORD*)(v7 + 37) = v8;
    v7[21] = v11;
    v7[20] = (int*)0x100000005LL;
  }
  result = (*(__int64 (**)(__int64, int**))(*(_QWORD*)a1 + 24LL))(a1, a2);
  if ((unsigned int)result <= 1) {
    return SdkRoutine_66cad0(a2, &a2[4 * *((int*)a2 + 14) + 52]);
  }
  return result;
}

__int64 SdkHr_65f950(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;

  SdkRoutine_858d40(&SdkData_ea7c40);
  SdkData_1042158(a1[3]);
  SdkData_1042158(a1[4]);
  v2 = a1[1];
  SdkRoutine_858d40(v2 + 2488);
  v3 = a1[17];
  v4 = (_QWORD*)a1[18];
  if (v4 != nullptr) {
    *v4 = v3;
  }
  if (v3 != 0) {
    *(_QWORD*)(v3 + 8) = a1[18];
  }
  a1[17] = 0;
  a1[18] = 0;
  SdkRoutine_858d50(v2 + 2488);
  v5 = a1[15];
  if (v5 != 0) {
    if (*(_QWORD*)(v5 + 8) != 0) {
      SdkRoutine_6a0870(*(_QWORD*)(v5 + 8));
      v5 = a1[15];
    }
    SdkRoutine_6a0870(v5);
  }
  v6 = (_QWORD*)a1[19];
  if (v6 != nullptr) {
    (*(void (**)(_QWORD))(*(_QWORD*)(a1[1] + 7688LL) + 320LL))(*v6);
    SdkData_1042158(v6[9]);
    SdkData_1042158(v6[11]);
    SdkData_1042158(v6[12]);
    SdkData_1042158(v6[13]);
    SdkRoutine_858d70(v6 + 17);
    SdkData_1042158(v6[7]);
    SdkData_1042158(v6);
    a1[19] = 0;
  }
  return SdkRoutine_858d50(&SdkData_ea7c40);
}

_QWORD* SdkHr_662d30(_QWORD* result)
{
  __int64 v1;

  v1 = *result;
  if (*result != 0) {
    SdkHr_662d30(*result);
    return (_QWORD*)SdkRoutine_6ade20(v1);
  }
  return result;
}

bool SdkHr_6631e0(_QWORD* a1)
{
  return ((*(__int64 (**)(_QWORD*))(*a1 + 888LL))(a1) & 1) != 0 &&
         *(_BYTE*)(a1[1] + 161LL) != 0;
}

__int64 SdkHr_663470(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_BYTE*)(result + 40) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 44) = 0;
  *(_QWORD*)(result + 60) = 0;
  *(_QWORD*)(result + 52) = 0;
  *(_DWORD*)(result + 68) = 100;
  return result;
}

__int64 SdkHr_663510(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _DWORD v13[92];

  if (*(_BYTE*)(a2 + 36) == 0) {
    v3 = 0x10000;
    if (*(_BYTE*)(a2 + 38) == 0) {
      goto LABEL_14;
    }
    goto LABEL_7;
  }
  v3 = *(int*)(a2 + 44);
  if (v3 % (int)SdkRoutine_6551f0(80, 0) != 0 ||
      (unsigned int)v3 < (unsigned int)SdkRoutine_6551f0(81, 0)) {
    return 0;
  }
  if (*(_BYTE*)(a2 + 38) != 0) {
  LABEL_7:
    v4 = *(int*)(a2 + 52);
    v5 = (_DWORD)v4 != 0 && (v4 & (v4 - 1)) == 0;
    if (!v5 || v4 % (int)SdkRoutine_6551f0(93, 0) != 0 ||
        (unsigned int)v4 < (unsigned int)SdkRoutine_6551f0(91, 0)) {
      return 0;
    }
  }
LABEL_14:
  if (*(_BYTE*)(a2 + 37) != 0) {
    v6 = *(int*)(a2 + 48);
    if (v6 % (int)SdkRoutine_6551f0(83, 0) != 0) {
      return 0;
    }
    if ((_DWORD)v6 != 0) {
      if ((unsigned int)v6 < (unsigned int)SdkRoutine_6551f0(84, 0)) {
        return 0;
      }
    }
    else {
      v6 = 0;
    }
  }
  else {
    v6 = 0x40000;
  }
  if (*(_QWORD*)(*(_QWORD*)(a2 + 8) + 7688LL) != 0 &&
      v6 % (int)SdkRoutine_6551f0(151, 0) != 0) {
    return 0;
  }
  v7 = *(int*)(a2 + 60);
  if ((_DWORD)v7 == 0) {
    goto LABEL_36;
  }
  result = 0;
  if ((v7 & 0xFFF) == 0 && (*(_QWORD*)(a2 + 16) & 0xFFFLL) == 0) {
    if (*(_BYTE*)(a2 + 36) != 0) {
      v9 = *(int*)(a2 + 44);
    }
    else {
      v9 = 0x10000;
    }
    if (*(_BYTE*)(a2 + 38) != 0) {
      v10 = *(int*)(a2 + 52);
    }
    else {
      v10 = 0x4000;
    }
    if ((*(_BYTE*)(a2 + 32) & 0x10) != 0) {
      v11 = 0;
    }
    else {
      SdkRoutine_664480(v13, *(_QWORD*)(a2 + 8), a2);
      v11 = (v13[69] + 4095) & 0xFFFFF000;
    }
    if (v10 + v9 + v11 <= v7) {
    LABEL_36:
      if (*(_BYTE*)(a2 + 40) == 0) {
        return 1;
      }
      v12 = *(_DWORD*)(a2 + 64);
      if (v12 >= (unsigned int)SdkRoutine_6551f0(86, 0) &&
          v3 >= *(int*)(a2 + 64)) {
        return 1;
      }
    }
    return 0;
  }
  return result;
}

__int64 SdkHr_663720(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _DWORD v5[92];

  if (*(_BYTE*)(a1 + 36) != 0) {
    v1 = *(int*)(a1 + 44);
    if (*(_BYTE*)(a1 + 38) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    v2 = 0x4000;
    if ((*(_BYTE*)(a1 + 32) & 0x10) == 0) {
      goto LABEL_4;
    }
  LABEL_7:
    v3 = 0;
    return v2 + v1 + v3;
  }
  v1 = 0x10000;
  if (*(_BYTE*)(a1 + 38) == 0) {
    goto LABEL_6;
  }
LABEL_3:
  v2 = *(int*)(a1 + 52);
  if ((*(_BYTE*)(a1 + 32) & 0x10) != 0) {
    goto LABEL_7;
  }
LABEL_4:
  SdkRoutine_664480(v5, *(_QWORD*)(a1 + 8), a1);
  v3 = (v5[69] + 4095) & 0xFFFFF000;
  return v2 + v1 + v3;
}

__int64 SdkHr_663850(__int64 a1)
{
  SdkRoutine_66f5e0(a1 + 40);
  return 1;
}

__int64 SdkHr_6641b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned int a5, __int64 a6)
{
  __int64 v6;
  __int64 result;
  int v12;
  _BYTE v13[56];

  v6 = a4 + 4095;
  *(_BYTE*)(a1 + 256) = 0;
  if (a3 != 0) {
    *(_QWORD*)(a1 + 264) = a3;
    *(_BYTE*)(a1 + 272) = 1;
  }
  else {
    *(_BYTE*)(a1 + 272) = 0;
    result = SdkRoutine_6add10(v6 & 0xFFFFFFFFFFFFF000LL, 4096, 0);
    *(_QWORD*)(a1 + 264) = result;
    if (result == 0) {
      return result;
    }
  }
  SdkRoutine_65cf50((__int64)v13);
  SdkRoutine_65cf40(v13, a2);
  SdkRoutine_65cf70(v13, *(_QWORD*)(a1 + 264), v6 & 0xFFFFFFFFFFFFF000LL);
  SdkRoutine_65d040(v13, a5);
  if (a6 != 0) {
    (*(void (**)(_QWORD, _BYTE*))(a6 + 8))(*(_QWORD*)a6, v13);
  }
  v12 = (unsigned __int8)SdkRoutine_65d0a0((_OWORD*)a1, (__int64)v13);
  result = v12 != 0;
  if (v12 != 0) {
    *(_DWORD*)(a1 + 16) |= 0x10000000u;
    *(_BYTE*)(a1 + 256) = 1;
  }
  else {
    SdkRoutine_6addf0(*(_QWORD*)(a1 + 264));
    *(_QWORD*)(a1 + 264) = 0;
    return 0;
  }
  return result;
}

__int64 SdkHr_664480(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  unsigned int v4;
  __int16 v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  int v23;
  unsigned int v24;
  unsigned __int64 v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;

  v3 = *(_DWORD*)(a3 + 32);
  if ((v3 & 0x15) != 0) {
    v4 = 0;
  }
  else {
    v4 = (4 * *(_DWORD*)(a2 + 180) * *(_DWORD*)(a2 + 188) + 12543) & 0xFFFFFF00;
  }
  *(_DWORD*)(result + 276) = 2304;
  *(_QWORD*)(result + 280) = 0x90000000000LL;
  v5 = *(_DWORD*)(a2 + 8);
  *(_DWORD*)(result + 288) = 2304;
  *(_DWORD*)(result + 332) = v4;
  if ((v5 & 0x300) != 0) {
    v6 = 14336;
  }
  else {
    v6 = 3584;
  }
  *(_DWORD*)(result + 292) = v6;
  *(_DWORD*)(result + 324) = 256;
  v7 = (v6 + 2559) & 0xFFFFFF00;
  *(_DWORD*)(result + 320) = v7;
  v8 = ((_WORD)v7 + 511) & 0x7E00;
  *(_DWORD*)(result + 328) = v8;
  v9 = v8 + v4;
  *(_DWORD*)(result + 344) = v9;
  v10 = (v3 << 28 >> 31) & 0x39700;
  *(_DWORD*)(result + 348) = v10;
  v11 = v9 + v10;
  v12 = ~(v3 << 8) & 0x1000;
  *(_DWORD*)(result + 352) = v11;
  *(_DWORD*)(result + 356) = v12;
  v13 = v11 + v12;
  *(_DWORD*)(result + 276) = v13;
  v14 = *(_DWORD*)(a2 + 268);
  if (v14 != 0 && (*(_BYTE*)(a3 + 32) & 0x22) == 0) {
    v15 = *(_DWORD*)(a2 + 272);
    v16 = v15 - 1;
    v17 = -v15;
    v18 = (v16 + v13) & v17;
    *(_DWORD*)(result + 336) = v18;
    v19 = (((v16 + v14) & v17) + v16) & v17;
    v13 = v19 + v18;
    *(_DWORD*)(result + 340) = v19;
    *(_DWORD*)(result + 276) = v13;
  }
  if (*(_BYTE*)(a3 + 37) != 0) {
    v20 = *(int*)(a3 + 48);
  }
  else {
    v20 = 0x40000;
  }
  v21 = (*(_DWORD*)(a2 + 8) & 0x300) == 0;
  v22 = 5888;
  v23 = v13 + 255;
  if ((*(_DWORD*)(a2 + 8) & 0x300) == 0) {
    v22 = 4352;
  }
  v24 = v23 & 0xFFFFFF00;
  v25 = v20 / v22;
  v26 = 11;
  *(_DWORD*)(result + 296) = v24;
  if (v21) {
    v26 = 9;
  }
  v27 = (_DWORD)v25 << 11;
  v28 = 1792 * v25;
  v29 = (_DWORD)v25 << v26;
  *(_DWORD*)(result + 316) = v27;
  *(_DWORD*)(result + 308) = v29;
  v30 = v24 + v28;
  *(_DWORD*)(result + 300) = v28;
  *(_DWORD*)(result + 304) = v30;
  v31 = v30 + v29;
  v32 = v31 + v27;
  *(_DWORD*)(result + 312) = v31;
  *(_DWORD*)(result + 276) = v31 + v27;
  v33 = *(_QWORD*)(a2 + 7688);
  if (v33 != 0) {
    if (*(_BYTE*)(a3 + 39) != 0) {
      LODWORD(v33) = *(_DWORD*)(a3 + 56);
    }
    else {
      v34 = result;
      LODWORD(v33) = SdkRoutine_6551f0(152, a2);
      result = v34;
      v32 = *(_DWORD*)(v34 + 276);
    }
  }
  v35 = (v32 + 255) & 0xFFFFFF00;
  v36 = (v33 + 255) & 0xFFFFFF00;
  *(_DWORD*)(result + 364) = v36;
  *(_DWORD*)(result + 360) = v35;
  *(_DWORD*)(result + 276) = v35 + v36;
  return result;
}

bool SdkHr_664670(__int64 a1, int a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 356);
  if ((v2 & 8) != 0) {
    if (a2 == 1) {
      ++*(_BYTE*)(a1 + 7929);
    }
    else if (a2 == 0) {
      ++*(_BYTE*)(a1 + 7928);
      return (v2 & 8) != 0;
    }
  }
  return (v2 & 8) != 0;
}

__int64 SdkHr_664890(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;

  v1 = result + 0x2000;
  v2 = result;
  if (*(_BYTE*)(result + 24) == 1) {
    result = ((__int64 (*)(void))SdkData_1042178)();
    if ((unsigned __int64)(result - *(_QWORD*)(v2 + 32)) >= 0x3E9) {
      v3 = SdkRoutine_876b30(100);
      result = SdkData_1042178(v3);
      *(_QWORD*)(v2 + 32) = result;
    }
  }
  if ((*(_BYTE*)(v1 + 3256) & 1) != 0 ||
      (*(_QWORD*)(v2 + 11240) == *(_QWORD*)(v2 + 11312)
           ? (v4 = *(_QWORD*)(v2 + 11280) == *(_QWORD*)(v2 + 11320))
           : (v4 = false),
       !v4)) {
    if ((*(_BYTE*)(v1 + 3257) & 1) == 0) {
      v5 = *(_QWORD*)(v2 + 8392);
      v6 = *(_DWORD*)(v2 + 11344) - *(_DWORD*)(v2 + 11348);
      v7 = *(_QWORD*)(v2 + 11248);
      v8 = *(_QWORD*)(v2 + 8408);
      *(_DWORD*)(v2 + 11348) = 0;
      *(_QWORD*)(v2 + 11248) = v7 + 4LL * v6;
      v9 = SdkRoutine_64b3b0(v5);
      v10 = *(_QWORD*)(v2 + 8416);
      v11 = v9 + v8 >= v10;
      v12 = v9 + v8 - v10;
      v13 = *(_QWORD*)(v2 + 8304);
      if (v11) {
        v13 = 0;
      }
      if (v12 + v13 >= *(_QWORD*)(v2 + 9528)) {
        SdkRoutine_653d20((int*)(v2 + 8432), v2, 0);
      }
      SdkRoutine_664a50(v2, 1);
      SdkRoutine_6650b0(v2, 1);
      result = SdkRoutine_664a50(v2, 1);
      *(_BYTE*)(v1 + 3256) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
