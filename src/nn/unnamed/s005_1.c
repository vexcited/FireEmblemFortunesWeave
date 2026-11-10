#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_e7f3d8;

extern _UNKNOWN SdkData_e7f508;

extern __int64 (*SdkData_e7f638[])();

extern __int64 SdkData_e888e8;

extern __int64 SdkData_e89438;

extern __int64 SdkData_e89450;

extern __int64 SdkData_e89460;

extern __int64 SdkData_e89468;

extern __int64 SdkData_e89470;

extern __int64 SdkData_e89478;

extern __int64 SdkData_e89490;

extern __int64 SdkData_e89618;

extern __int64 SdkData_e89620;

extern __int64 SdkData_e896d0;

extern __int64 SdkData_e896d8;

extern __int64 SdkData_e896e0;

extern __int64 SdkData_e896e8;

extern __int64 SdkData_e896f0;

extern __int64 SdkData_e896f8;

extern __int64 SdkData_e89700;

extern __int64 SdkData_e89708;

extern __int64 SdkData_e89710;

extern __int64 SdkData_e89718;

extern __int64 SdkData_e89720;

extern __int64 SdkData_e89728;

__int64 SdkRoutine_815af0(_QWORD, _QWORD);

__int64 SdkRoutine_815c20(_QWORD, _QWORD);

__int64 SdkRoutine_815d50(_QWORD, _QWORD);

__int64 SdkRoutine_815e80(_QWORD, _QWORD);

__int64 SdkRoutine_815fb0(_QWORD);

__int64 SdkRoutine_8160e0(_QWORD, _QWORD);

__int64 SdkRoutine_816210(_QWORD);

__int64 SdkRoutine_816340(_QWORD);

__int64 SdkRoutine_816470(_QWORD);

__int64 SdkRoutine_8165a0(_QWORD);

__int64 SdkRoutine_8166d0(_QWORD, _QWORD);

__int64 SdkRoutine_816800(_QWORD, _QWORD);

__int64 SdkRoutine_816930(_QWORD, _QWORD);

__int64 SdkRoutine_816a60(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_816b70(_QWORD, _QWORD);

__int64 SdkRoutine_816ca0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_816db0(_QWORD, _QWORD);

__int64 SdkRoutine_816ee0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_816f90(_QWORD, _QWORD);

__int64 SdkRoutine_8170c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_817170(_QWORD, _QWORD);

__int64 SdkRoutine_8172a0(_QWORD, _QWORD);

__int64 SdkRoutine_8173d0(_QWORD, _QWORD);

__int64 SdkRoutine_817500(_QWORD, _QWORD);

__int64 SdkRoutine_817630(_QWORD);

__int64 SdkRoutine_817760(_QWORD);

__int64 SdkRoutine_817f20(_QWORD, _QWORD);

__int64 SdkRoutine_81df70(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_82a490(_QWORD, _QWORD);

__int64 SdkRoutine_82adc0(_QWORD, _QWORD);

__int64 SdkRoutine_82da50(_QWORD);

__int64 SdkRoutine_82eed0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_82efc0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_857cc0(_QWORD, _QWORD);

__int64 SdkRoutine_85e050(unsigned __int64);

__int64 SdkRoutine_8605f0(_QWORD, _QWORD);

__int64 SdkRoutine_86ee40(_QWORD);

__int64 SdkRoutine_86ee50(_QWORD, double);

__int64 SdkRoutine_86ee60(_QWORD);

__int64 SdkRoutine_87b8c0(_QWORD, _QWORD);

__int64 SdkRoutine_87cd70(_QWORD, _QWORD);

__int64 SdkRoutine_87d290(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d2a0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d2b0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d2c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d2d0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_87d2e0(_QWORD, _QWORD, _QWORD);

__int64 SdkHr_7e8170()
{
  __int64 v0;
  __int64 v1;
  unsigned int* v3;
  unsigned int v4;

  v0 = SdkRoutine_87b8c0(&v4, 4);
  if ((_DWORD)v0 != 0) {
    v3 = (unsigned int*)SdkRoutine_857cc0(v0, v1);
    SdkRoutine_8605f0(*v3, "random_device getentropy failed");
    __udf(0);
  }
  return v4;
}

__int64 SdkHr_7e9750(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = SdkData_e89438;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v2 + 64;
  *(_QWORD*)a1 = v2 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = SdkRoutine_86ee40(a1 + 16);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 SdkHr_7ec4e0(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = SdkData_e89450;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 8) = v2 + 64;
  *(_QWORD*)a1 = v2 + 24;
  result = SdkRoutine_86ee40(a1 + 8);
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = -1;
  return result;
}

__int64 SdkHr_7ee300(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = SdkData_e89460;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 24) = v2 + 64;
  *(_QWORD*)a1 = v2 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = SdkRoutine_86ee40(a1 + 24);
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = -1;
  v4 = SdkData_e89468;
  *(_QWORD*)a1 = SdkData_e89468 + 24;
  *(_QWORD*)(a1 + 16) = v4 + 64;
  *(_QWORD*)(a1 + 24) = v4 + 104;
  return result;
}

__int64 SdkHr_7eeda0(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = SdkData_e89478;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v2 + 64;
  *(_QWORD*)a1 = v2 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = SdkRoutine_86ee40(a1 + 16);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 SdkHr_7f1b60(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = SdkData_e89490;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 8) = v2 + 64;
  *(_QWORD*)a1 = v2 + 24;
  result = SdkRoutine_86ee40(a1 + 8);
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = -1;
  return result;
}

__int64 SdkHr_7f7050(__int64 a1, __int64 a2, double a3)
{
  __int64 v5;
  __int64 v6;
  __int64 result;
  _BYTE v8[8];

  *(_QWORD*)(a1 + 168) = SdkData_e888e8 + 16;
  v5 = a1 + 168;
  *(_QWORD*)(a1 + 272) = 0;
  SdkRoutine_86ee50(a1 + 176, a3);
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 64) = a2;
  *(_QWORD*)(v5 + 80) = v5 + 104;
  *(_BYTE*)(v5 + 96) = 0;
  *(_QWORD*)v5 = &SdkData_e7f3d8;
  *(_DWORD*)(v5 + 92) = -1;
  SdkRoutine_87cd70(v8, v5 + 8);
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 16LL))(v5, v8);
  SdkRoutine_86ee60(v8);
  v6 = SdkData_e89438;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v6 + 64;
  *(_QWORD*)a1 = v6 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = SdkRoutine_86ee40(a1 + 16);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 SdkHr_7f7170(__int64 a1, __int64 a2, double a3)
{
  __int64 v5;
  __int64 v6;
  __int64 result;
  _BYTE v8[8];

  *(_QWORD*)(a1 + 168) = SdkData_e89470 + 16;
  v5 = a1 + 168;
  *(_QWORD*)(a1 + 272) = 0;
  SdkRoutine_86ee50(a1 + 176, a3);
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)(v5 + 64) = a2;
  *(_QWORD*)(v5 + 80) = v5 + 104;
  *(_BYTE*)(v5 + 96) = 0;
  *(_QWORD*)v5 = &SdkData_e7f508;
  *(_DWORD*)(v5 + 92) = -1;
  SdkRoutine_87cd70(v8, v5 + 8);
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 16LL))(v5, v8);
  SdkRoutine_86ee60(v8);
  v6 = SdkData_e89478;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 16) = v6 + 64;
  *(_QWORD*)a1 = v6 + 24;
  *(_QWORD*)(a1 + 8) = 0;
  result = SdkRoutine_86ee40(a1 + 16);
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = -1;
  return result;
}

__int64 SdkHr_8178a0(_QWORD* a1, _QWORD* a2, __int64 a3, char a4)
{
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;

  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  *a1 = SdkData_e7f638;
  a1[1] = -1;
  a1[5] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[2] = a1 + 5;
  v8 = a1 + 2;
  a1[28] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[34] = 0;
  a1[35] = 1;
  a1[3] = a1 + 35;
  a1[4] = a1 + 35;
  result = SdkRoutine_817f20(a1 + 36, a2 + 36);
  if (a1 != a2) {
    result = SdkRoutine_82da50(v8);
  }
  v11 = a1[2];
  v10 = a1[3];
  if (v10 != v11) {
    v12 = 1;
    v13 = 0;
    do {
      v14 = *(_QWORD*)(v11 + 8 * v13);
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        v11 = a1[2];
        v10 = a1[3];
      }
      v13 = v12++;
    } while (v13 < (v10 - v11) >> 3);
  }
  if ((a4 & 8) != 0) {
    v15 = SdkRoutine_85e050(0x18u);
    SdkRoutine_87d290(v15, a3, 0);
    SdkRoutine_815af0(a1, v15);
    v16 = SdkRoutine_85e050(0x18u);
    SdkRoutine_87d2a0(v16, a3, 0);
    result = SdkRoutine_815c20(a1, v16);
  }
  if ((a4 & 1) != 0) {
    v17 = SdkRoutine_85e050(0x28u);
    SdkRoutine_87d2b0(v17, a3, 0);
    SdkRoutine_815d50(a1, v17);
    v18 = SdkRoutine_85e050(0x18u);
    SdkRoutine_87d2c0(v18, a3, 0);
    SdkRoutine_815e80(a1, v18);
    v19 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v19 = SdkData_e896d0 + 16;
    v19[1] = -1;
    SdkRoutine_815fb0(a1);
    v20 = SdkRoutine_85e050(0x18u);
    v21 = (_QWORD*)v20;
    if ((*(_BYTE*)a3 & 1) != 0) {
      v22 = *(_QWORD*)(a3 + 16);
    }
    else {
      v22 = a3 + 1;
    }
    SdkRoutine_81df70(v20, v22, 0);
    *v21 = SdkData_e896d8 + 16;
    SdkRoutine_8160e0(a1, v21);
    v23 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v23 = SdkData_e896e0 + 16;
    v23[1] = -1;
    SdkRoutine_816210(a1);
    v24 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v24 = SdkData_e896e8 + 16;
    v24[1] = -1;
    SdkRoutine_816340(a1);
    v25 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v25 = SdkData_e896f0 + 16;
    v25[1] = -1;
    SdkRoutine_816470(a1);
    v26 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v26 = SdkData_e896f8 + 16;
    v26[1] = -1;
    result = SdkRoutine_8165a0(a1);
  }
  if ((a4 & 0x10) != 0) {
    v27 = SdkRoutine_85e050(0x88u);
    SdkRoutine_816a60(v27, a3, 0);
    SdkRoutine_816930(a1, v27);
    v28 = SdkRoutine_85e050(0x88u);
    SdkRoutine_816ca0(v28, a3, 0);
    SdkRoutine_816b70(a1, v28);
    v29 = SdkRoutine_85e050(0x88u);
    SdkRoutine_816ee0(v29, a3, 0);
    SdkRoutine_816db0(a1, v29);
    v30 = SdkRoutine_85e050(0x88u);
    SdkRoutine_8170c0(v30, a3, 0);
    result = SdkRoutine_816f90(a1, v30);
  }
  if ((a4 & 2) != 0) {
    v31 = SdkRoutine_85e050(0x30u);
    SdkRoutine_87d2d0(v31, a3, 0);
    SdkRoutine_8166d0(a1, v31);
    v32 = SdkRoutine_85e050(0x30u);
    SdkRoutine_87d2e0(v32, a3, 0);
    result = SdkRoutine_816800(a1, v32);
  }
  if ((a4 & 4) != 0) {
    v33 = (_QWORD*)SdkRoutine_85e050(0x440u);
    v34 = SdkData_e89618;
    *v33 = SdkData_e89618 + 16;
    v33[1] = -1;
    v33[2] = v34 + 112;
    SdkRoutine_82a490(v33 + 3, a3);
    v35 = SdkData_e89700 + 168;
    *v33 = SdkData_e89700 + 16;
    v33[2] = v35;
    SdkRoutine_817170(a1, v33);
    v36 = (_QWORD*)SdkRoutine_85e050(0x440u);
    v37 = SdkData_e89620;
    *v36 = SdkData_e89620 + 16;
    v36[1] = -1;
    v36[2] = v37 + 112;
    SdkRoutine_82adc0(v36 + 3, a3);
    v38 = SdkData_e89708 + 168;
    *v36 = SdkData_e89708 + 16;
    v36[2] = v38;
    SdkRoutine_8172a0(a1, v36);
    v39 = (_QWORD*)SdkRoutine_85e050(0x18u);
    SdkRoutine_82eed0(v39, a3, 0);
    *v39 = SdkData_e89710 + 16;
    SdkRoutine_8173d0(a1, v39);
    v40 = (_QWORD*)SdkRoutine_85e050(0x18u);
    SdkRoutine_82efc0(v40, a3, 0);
    *v40 = SdkData_e89718 + 16;
    result = SdkRoutine_817500(a1, v40);
  }
  if ((a4 & 0x20) != 0) {
    v41 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v41 = SdkData_e89720 + 16;
    v41[1] = -1;
    SdkRoutine_817630(a1);
    v42 = (_QWORD*)SdkRoutine_85e050(0x10u);
    *v42 = SdkData_e89728 + 16;
    v42[1] = -1;
    return SdkRoutine_817760(a1);
  }
  return result;
}

#pragma GCC visibility pop
