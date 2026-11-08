#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN CudaDriverData_13b4aec;
extern _DWORD CudaDriverData_13b4f60[5];
extern _QWORD CudaDriverData_1420878[16];
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN** CudaDriverData_14231d8;
extern _UNKNOWN CudaDriverData_14347a8;
extern int CudaDriverData_1434ac0;
extern int CudaDriverData_1434cc8;
extern int CudaDriverData_14358d0;
extern char CudaDriverData_14358d9;
extern __int64 CudaDriverData_1435ee0;
extern char CudaDriverData_1436502;
extern int CudaDriverData_144071c;
extern __int64 (*CudaDriverData_14408b0)(__int64*);
extern __int64 (*CudaDriverData_14409d8)(_DWORD*);
extern __int64 (*CudaDriverData_14409e0)(_DWORD*);
extern __int64 (*CudaDriverData_1440a08)(_DWORD*);
extern __int64 (*CudaDriverData_1440a58)(_QWORD*);
__int64 CudaDriverRoutine_102040(_QWORD);
__int64 CudaDriverRoutine_102e00(_QWORD);
__int64 CudaDriverRoutine_102fe0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1030f0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1031f0(void);
__int64 CudaDriverRoutine_103220(void);
__int64 CudaDriverRoutine_103250(void);
__int64 CudaDriverRoutine_104c40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_104e80(_QWORD, _QWORD);
__int64 CudaDriverRoutine_104fd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_107e20(_QWORD);
__int64 CudaDriverRoutine_107f90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_108070(_QWORD);
__int64 CudaDriverRoutine_108520(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1085d0(_QWORD);
__int64 CudaDriverRoutine_112b30(_QWORD);
__int64 CudaDriverRoutine_118a60(_QWORD, _QWORD);
__int64 CudaDriverRoutine_118bc0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11aed0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_11d0f0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1216a0(_QWORD);
__int64 CudaDriverRoutine_121c60(_QWORD);
__int64 CudaDriverRoutine_126ed0(void);
__int64 CudaDriverRoutine_12b530(void);
__int64 CudaDriverRoutine_12ba40(_QWORD);
__int64 CudaDriverRoutine_12bee0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12cff0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12d100(_QWORD);
__int64 CudaDriverRoutine_12e320(_QWORD);
__int64 CudaDriverRoutine_12e330(_QWORD);
__int64 CudaDriverRoutine_12e340(_QWORD);
__int64 CudaDriverRoutine_12e510(_QWORD, _QWORD);
__int64 CudaDriverRoutine_12e550(_QWORD, _QWORD);
__int64 CudaDriverRoutine_138310(void);
__int64 CudaDriverRoutine_1a10c0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a11d0(_QWORD);
__int64 CudaDriverRoutine_1a1320(_QWORD);
__int64 CudaDriverRoutine_1a1670(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1a16d0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1b8de0(void);
__int64 CudaDriverRoutine_1b9890(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1ba520(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1ba970(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1bace0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1bbf10(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1bbf50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1d9fa0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1da010(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1da030(_QWORD);
__int64 CudaDriverRoutine_1da1b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1db190(_QWORD);
__int64 CudaDriverRoutine_1db1a0(_QWORD);
__int64 CudaDriverRoutine_1db1b0(_QWORD);
__int64 CudaDriverRoutine_1db750(_QWORD);
__int64 CudaDriverRoutine_1db7b0(_QWORD);
__int64 CudaDriverRoutine_1db800(_QWORD);
__int64 CudaDriverRoutine_1db920(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dba10(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbab0(_QWORD);
__int64 CudaDriverRoutine_1dbc20(_QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbe40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_1dbf50(_QWORD);
__int64 CudaDriverRoutine_1dbf90(_QWORD);
__int64 CudaDriverRoutine_1dbfc0(_QWORD);
__int64 CudaDriverRoutine_1dbfd0(_QWORD);
__int64 CudaDriverRoutine_1dc050(_QWORD);
__int64 CudaDriverRoutine_1e9390(__int64 result);
__int64 CudaDriverRoutine_1eca90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_200f40(__int64**, __int64);
__int64 CudaDriverRoutine_201110(__int64 result);
__int64 CudaDriverRoutine_201340(__int64*, unsigned __int64);
__int64 CudaDriverRoutine_201450(_QWORD);
bool CudaDriverRoutine_201460(_QWORD*);
__int64 CudaDriverRoutine_201480(unsigned __int64*, __int64);
__int64 CudaDriverRoutine_2014d0(unsigned __int64*, _QWORD*);
__int64 CudaDriverRoutine_201520(unsigned __int64*, _QWORD*);
_QWORD* CudaDriverRoutine_2051e0(_QWORD* result);
__int64 CudaDriverRoutine_205860(__int64);
__int64 CudaDriverRoutine_205940(__int64*, __int64, __int64*, unsigned int);
__int64 CudaDriverRoutine_205fa0(int, __int64, __int64*, __int64*);
__int64 CudaDriverRoutine_206060(__int64, __int64);
__int64 CudaDriverRoutine_207f00(_QWORD*, int, __int64, __int64);
__int64 CudaDriverRoutine_2080d0(__int64 result, unsigned int, int, _QWORD*);
__int64 CudaDriverRoutine_2083e0(_QWORD, _QWORD, _QWORD, _QWORD);
bool CudaDriverRoutine_208ef0(__int64, unsigned int, _QWORD*);
__int64 CudaDriverRoutine_209120(_QWORD);
__int64 CudaDriverRoutine_209440(_QWORD);
__int64 CudaDriverRoutine_20b420(unsigned int, unsigned int, __int64);
__int64 CudaDriverRoutine_214d50(void);
__int64 CudaDriverRoutine_218d20(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_2197c0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_21bff0(void);
__int64 CudaDriverRoutine_21c230(void);
__int64 CudaDriverRoutine_21f3d0(int, int, int, int, int, int, int, int, int,
                                 __int64);
__int64 CudaDriverRoutine_25cf10(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_25cf30(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_27980(_QWORD);
__int64 CudaDriverRoutine_27a80(_QWORD);
__int64 CudaDriverRoutine_27b80(_QWORD);
__int64 CudaDriverRoutine_2b9f0(_QWORD);
__int64 CudaDriverRoutine_2bb60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_30bf0(void);
__int64 CudaDriverRoutine_30e80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_339c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_56260(_QWORD);
__int64 CudaDriverRoutine_57b40(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_5f100(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_98340(_QWORD);
__int64 CudaDriverRoutine_99e40(_QWORD);
__int64 CudaDriverRoutine_9ab20(void);
__int64 CudaDriverRoutine_9ac80(_QWORD);
__int64 CudaDriverRoutine_9ad50(_QWORD);
__int64 CudaDriverRoutine_9ae50(_QWORD);
__int64 CudaDriverRoutine_9afa0(_QWORD);
__int64 CudaDriverRoutine_9afb0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_9b010(_QWORD, _QWORD);
__int64 CudaDriverRoutine_9b050(void);
__int64 CudaDriverRoutine_9ea90(_QWORD);
__int64 CudaDriverRoutine_b4720(void);
__int64 CudaDriverRoutine_b9660(_QWORD);
__int64 CudaDriverRoutine_b9e70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD);
__int64 CudaDriverRoutine_ba080(void);
__int64 CudaDriverRoutine_bace0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_bae90(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_bc3c0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_bc880(void);
__int64 CudaDriverRoutine_c36c0(void);
__int64 CudaDriverRoutine_c3ef0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_cfc10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_d6360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD, _DWORD);
__int64 CudaDriverRoutine_d6af0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_d8640(void);
__int64 CudaDriverRoutine_d8860(_QWORD, _QWORD);
__int64 CudaDriverRoutine_d8920(void);
__int64 CudaDriverRoutine_d8ba0(void);
__int64 CudaDriverRoutine_d8be0(void);
__int64 CudaDriverRoutine_d9080(_QWORD);
__int64 CudaDriverRoutine_d9230(_QWORD);
__int64 CudaDriverRoutine_d9290(_QWORD);
__int64 CudaDriverRoutine_d9320(_QWORD, _QWORD);
__int64 CudaDriverRoutine_d9ac0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_db0e0(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ded50(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_deeb0(void);
__int64 CudaDriverRoutine_df0b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_e6700(_QWORD, _QWORD);
__int64 CudaDriverRoutine_ec740(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_ed630(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_eea90(_QWORD, _QWORD);
__int64 CudaDriverRoutine_eeec0(void);
__int64 CudaDriverRoutine_f0380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_f0f50(_QWORD);
__int64 CudaDriverRoutine_f1060(void);
__int64 CudaDriverRoutine_f1180(_QWORD, _QWORD);
__int64 CudaDriverRoutine_f1460(_QWORD);
__int64 CudaDriverRoutine_f2a00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_f2bb0(_QWORD);
__int64 CudaDriverRoutine_f2fe0(void);
__int64 CudaDriverRoutine_f6230(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);
__int64 CudaDriverRoutine_f6360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);

__int64 CudaDriverHr_1ea140(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  _DWORD v14[2];
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;

  v19 = 0;
  v14[0] = 36;
  v1 = *(_QWORD*)(a1 + 240);
  v2 = v1 & 0xF800000000LL;
  v3 = v1 & 0x7C0000000000000LL;
  if (v2 == 0x1800000000LL && v3 != 0x3C0000000000000LL) {
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 104LL);
  LABEL_8:
    *(_QWORD*)(a1 + 104) = v6;
    return 0;
  }
  v5 = **(_QWORD**)(a1 + 208);
  if (*(_DWORD*)(v5 + 20) != 0) {
    v6 = *(_QWORD*)(v5 + 24);
    goto LABEL_8;
  }
  v8 = *(_QWORD*)(a1 + 128);
  v14[1] = *(_DWORD*)(v5 + 4);
  v10 = *(_QWORD*)(a1 + 344);
  v16 = v8;
  v15 = v10;
  v17 = 3;
  v18 = &v19;
  v11 = CudaDriverData_14409d8(v14);
  if ((_DWORD)v11 != 0) {
    return CudaDriverRoutine_1e9390(v11);
  }
  v12 = v19;
  v13 = *(_BYTE*)(a1 + 96);
  *(_QWORD*)(a1 + 104) = v19;
  if ((v13 & 1) != 0) {
    *(_QWORD*)(a1 + 88) = v12;
  }
  return 0;
}

__int64 CudaDriverHr_1eaac0(__int64 a1)
{
  _QWORD* v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  _BYTE v10[388];
  _DWORD v11[4];
  unsigned __int64 v12;
  int v13;

  v1 = (_QWORD*)(a1 + 240);
  if ((*(_QWORD*)(a1 + 240) & 0xF800000000LL) != 0x800000000LL) {
    return 0;
  }
  v13 = 0;
  v11[0] = 24;
  v3 = *(__int64**)(a1 + 632);
  v12 = 0;
  v4 = *v3;
  CudaDriverRoutine_25cf30(v10, a1 + 240, 384);
  v5 = CudaDriverRoutine_1eca90(v4, v10, &v13);
  if ((_DWORD)v5 == 0) {
    *(_QWORD*)&v11[1] =
        *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 632) + 19824LL) + 88LL);
    v11[3] = v13;
    v6 = CudaDriverData_14409e0(v11);
    if ((_DWORD)v6 == 0) {
      v9 = v12;
      v7 = ((__int64 (*)(void))CudaDriverRoutine_12e320)();
      if (v9 > (unsigned int)v7) {
        if (v9 <= *(_QWORD*)(*(_QWORD*)(a1 + 632) + 64LL) && (*v1 & 7LL) == 2) {
          v9 = *(_QWORD*)(*(_QWORD*)(a1 + 632) + 64LL);
        }
        return *(_DWORD*)(a1 + 344) & (unsigned int)(v9 - 1);
      }
      goto LABEL_6;
    }
    v5 = CudaDriverRoutine_1e9390(v6);
  }
  v7 = CudaDriverRoutine_12e320(v5);
LABEL_6:
  result = CudaDriverRoutine_12e320(v7);
  if ((_DWORD)result != 0) {
    LODWORD(v9) = result;
    return *(_DWORD*)(a1 + 344) & (unsigned int)(v9 - 1);
  }
  return result;
}

__int64 CudaDriverHr_1eabe0(__int64 a1, _QWORD* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 result;
  _BYTE v7[388];
  _DWORD v8[4];
  __int64 v9;
  int v10;

  v10 = 0;
  v8[0] = 24;
  v4 = *(__int64**)(a1 + 632);
  v9 = 0;
  v5 = *v4;
  CudaDriverRoutine_25cf30(v7, a1 + 240, 384);
  result = CudaDriverRoutine_1eca90(v5, v7, &v10);
  if ((_DWORD)result == 0) {
    *(_QWORD*)&v8[1] =
        *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 632) + 19824LL) + 88LL);
    v8[3] = v10;
    result = CudaDriverData_14409e0(v8);
    if ((_DWORD)result != 0) {
      return CudaDriverRoutine_1e9390(result);
    }
    else {
      *a2 = v9;
    }
  }
  return result;
}

__int64 CudaDriverHr_1eb560(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;

  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  v5 = 8;
  result = CudaDriverData_14408b0(&v5);
  if ((_DWORD)result != 0) {
    result = CudaDriverRoutine_1e9390(result);
  }
  *(_DWORD*)(a2 + 128) = HIDWORD(v5);
  *(_DWORD*)(a2 + 132) = *(_DWORD*)(a1 + 100);
  *(_DWORD*)(a2 + 140) = *(_DWORD*)(a1 + 104);
  return result;
}

__int64 CudaDriverHr_1eb700(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;

  *(_QWORD*)(a2 + 128) = 0;
  *(_QWORD*)(a2 + 136) = 0;
  v5 = 8;
  result = CudaDriverData_14408b0(&v5);
  if ((_DWORD)result != 0) {
    result = CudaDriverRoutine_1e9390(result);
  }
  *(_DWORD*)(a2 + 128) = HIDWORD(v5);
  *(_DWORD*)(a2 + 132) = *(_DWORD*)(a1 + 32);
  return result;
}

__int64 CudaDriverHr_1eb8d0(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v5;
  __int64 v7;

  v7 = 8;
  v5 = CudaDriverData_14408b0(&v7);
  if ((_DWORD)v5 != 0) {
    CudaDriverRoutine_1e9390(v5);
  }
  *a2 = HIDWORD(v7);
  *a3 = 0;
  return 0;
}

__int64 CudaDriverHr_1eb980(__int64 a1, _DWORD* a2, int a3)
{
  __int64 result;
  _DWORD v5[2];
  int v6;

  v6 = 0;
  v5[0] = 12;
  if (a3 != 1) {
    return 801;
  }
  v5[1] = *(_DWORD*)(**(_QWORD**)(a1 + 208) + 4LL);
  result = CudaDriverData_1440a08(v5);
  if ((_DWORD)result != 0) {
    result = CudaDriverRoutine_1e9390(result);
  }
  *a2 = v6;
  return result;
}

__int64 CudaDriverHr_1ec5e0(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  _BYTE v16[388];
  _DWORD v17[4];
  __int64 v18;
  int v19;

  v19 = 0;
  v17[0] = 24;
  v4 = *(__int64**)(a1 + 632);
  v18 = 0;
  v5 = *v4;
  CudaDriverRoutine_25cf30(v16, a1 + 240, 384);
  result = CudaDriverRoutine_1eca90(v5, v16, &v19);
  if ((_DWORD)result == 0) {
    *(_QWORD*)&v17[1] =
        *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 632) + 19824LL) + 88LL);
    v17[3] = v19;
    v7 = CudaDriverData_14409e0(v17);
    if ((_DWORD)v7 != 0) {
      result = CudaDriverRoutine_1e9390(v7);
      if ((_DWORD)result != 0) {
        return result;
      }
      v8 = 0;
      v9 = *(_QWORD*)(a1 + 528);
      if (v9 != 0) {
        goto LABEL_28;
      }
    }
    else {
      v8 = v18;
      v9 = *(_QWORD*)(a1 + 528);
      if (v9 != 0) {
        goto LABEL_28;
      }
    }
    if ((*(_QWORD*)(a1 + 240) & 0xF800000000LL) == 0x1800000000LL) {
      v10 = *(_QWORD*)(a1 + 168);
      if (v10 != 0 && (*(_BYTE*)(a1 + 96) & 2) != 0 &&
          **(_QWORD**)(*(_QWORD*)(a1 + 632) + 2000LL) ==
              **(_QWORD**)(*(_QWORD*)(v10 + 632) + 2000LL) &&
          (*(_BYTE*)(a1 + 248) & 2) == 0) {
        v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 208) + 16LL) + 24LL);
      LABEL_29:
        *a2 = v11;
        return 0;
      }
    }
    if ((unsigned __int8)CudaDriverRoutine_12b530() != 0 &&
        (*(_BYTE*)(a1 + 96) & 2) != 0) {
      v15 = CudaDriverRoutine_12ba40(*(_QWORD*)(a1 + 88));
      v11 = CudaDriverRoutine_12bee0(
          v15, *(_QWORD*)(**(_QWORD**)(a1 + 632) + 19824LL));
      goto LABEL_29;
    }
    if ((*(_QWORD*)(a1 + 240) & 0x7C000000LL) == 0x8000000 ||
        (*(_BYTE*)(a1 + 96) & 2) != 0 ||
        ((v12 = CudaDriverRoutine_1da030(*(_QWORD*)(a1 + 632)),
          (*(_QWORD*)(a1 + 240) & 0x18000LL) != 0x8000)
             ? (v13 = (unsigned __int8)v12 == 0)
             : (v13 = true),
         !v13 || (*(_QWORD*)(a1 + 240) & 0x7E00LL) == 0x1800)) {
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 632) + 88LL);
    }
    else if (((*(_QWORD*)(a1 + 240) & 7LL) == 1 ||
              (v12 = CudaDriverRoutine_12e320(v12), v8 == (unsigned int)v12)) &&
             (v14 = *(_QWORD*)(*(_QWORD*)(a1 + 632) + 64LL)) !=
                 (unsigned int)CudaDriverRoutine_12e320(v12)) {
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 632) + 120LL);
    }
    else {
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 632) + 104LL);
    }
  LABEL_28:
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL);
    goto LABEL_29;
  }
  return result;
}

__int64 CudaDriverHr_204ad0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  _QWORD v8[4];

  v8[0] = 0;
  result = CudaDriverRoutine_121c60(v8);
  if ((_DWORD)result == 0) {
    result = CudaDriverRoutine_ded50(v8[0], 0, 0);
    if ((_DWORD)result == 0) {
      result = 1;
      if (a1 != 0 && a3 != 0) {
        if (*(_DWORD*)a3 == 1) {
          return 400;
        }
        else if ((unsigned int)CudaDriverData_144071c < 3) {
          return 803;
        }
        else {
          LODWORD(v8[0]) = 28;
          v7 = **(
              _QWORD**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 72) + 33160LL) +
                                   200LL) +
                        88LL);
          *(_QWORD*)((char*)&v8[1] + 4) = a2;
          *(_QWORD*)((char*)&v8[2] + 4) = a1;
          *(_QWORD*)((char*)v8 + 4) = v7;
          result = CudaDriverData_1440a58(v8);
          if ((_DWORD)result != 0) {
            return CudaDriverRoutine_1e9390(result);
          }
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_205e20(__int64 a1, __int64 a2, __int64* a3, __int64* a4)
{
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  __int64 v13;

  v8 = CudaDriverRoutine_5f100(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 72LL), a1, a2);
  v9 = (__int64*)v8;
  if (a4 != nullptr) {
    *a4 = v8;
  }
  v10 = *(_DWORD*)(a1 + 28);
  CudaDriverRoutine_205860(a2);
  result = CudaDriverRoutine_205940(v9, a2, a3, v10);
  if (*(_QWORD*)(a1 + 16) != 0) {
    *(_QWORD*)(v9[4227] + 272) = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 64LL);
    v12 = v9[4227];
    v13 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v12 + 272) == v13) {
      v13 = *(_QWORD*)(a1 + 16);
    }
    *(_QWORD*)(v12 + 264) = v13;
  }
  return result;
}

__int64 CudaDriverHr_205fa0(int a1, __int64 a2, __int64* a3, __int64* a4)
{
  __int64 v4;
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int128 v15;

  v4 = *(_QWORD*)(a2 + 16);
  v14 = 0u;
  v15 = 0u;
  LODWORD(v14) = a1;
  v8 = CudaDriverRoutine_5f100(*(_QWORD*)(v4 + 72), &v14, a2);
  v9 = (__int64*)v8;
  if (a4 != nullptr) {
    *a4 = v8;
  }
  v10 = HIDWORD(v15);
  CudaDriverRoutine_205860(a2);
  result = CudaDriverRoutine_205940(v9, a2, a3, v10);
  v12 = v15;
  if ((_QWORD)v15 != 0) {
    *(_QWORD*)(v9[4227] + 272) = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 64LL);
    v13 = v9[4227];
    if (*(_QWORD*)(v13 + 272) != *((_QWORD*)&v14 + 1)) {
      v12 = *((_QWORD*)&v14 + 1);
    }
    *(_QWORD*)(v13 + 264) = v12;
  }
  return result;
}

__int64 CudaDriverHr_206380(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;

  CudaDriverRoutine_205860(a1);
  result = CudaDriverRoutine_1ba970(*(_QWORD*)(a1 + 584), a3);
  if ((_DWORD)result == 0) {
    return CudaDriverRoutine_1ba970(a2, a3);
  }
  return result;
}

__int64 CudaDriverHr_207d50(__int64* a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;

  v8 = CudaDriverRoutine_12e330(64);
  v9 = v8;
  if (v8 == 0) {
    a4 = 0;
    goto LABEL_13;
  }
  *(_QWORD*)v8 = a2;
  *(_DWORD*)(v8 + 8) = a3;
  *(_DWORD*)(v8 + 12) = a4;
  *(_OWORD*)(v8 + 32) = 0u;
  *(_OWORD*)(v8 + 48) = 0u;
  *(_OWORD*)(v8 + 16) = 0u;
  if (a4 != 0) {
    v10 = CudaDriverRoutine_1a10c0(a4, 0);
    *(_QWORD*)(v9 + 16) = v10;
    if (v10 != 0) {
      CudaDriverRoutine_1a16d0(v10, a4);
      v11 = CudaDriverRoutine_12e510(a4, 4);
      *(_QWORD*)(v9 + 24) = v11;
      if (v11 != 0) {
        v12 = CudaDriverRoutine_12e510(a4, 8);
        *(_QWORD*)(v9 + 32) = v12;
        if (v12 != 0) {
          v13 = CudaDriverRoutine_200f40((__int64**)(v9 + 40), a4);
          if (v13 != 0) {
            a4 = v13;
          LABEL_13:
            CudaDriverRoutine_209120(v9);
            v9 = 0;
            goto LABEL_14;
          }
          v14 = CudaDriverRoutine_12e510(a4, 8);
          *(_QWORD*)(v9 + 48) = v14;
          if (v14 != 0) {
            a4 = CudaDriverRoutine_200f40((__int64**)(v9 + 56), 512);
            if (a4 == 0) {
              goto LABEL_14;
            }
            goto LABEL_13;
          }
        }
      }
    }
    a4 = 2;
    goto LABEL_13;
  }
LABEL_14:
  *a1 = v9;
  return a4;
}

__int64 CudaDriverHr_207e60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 2112);
  *(_QWORD*)(result + 2112) = 0;
  if (v1 != 0) {
    if (*(_QWORD*)(v1 + 168) != 0) {
      CudaDriverRoutine_2051e0((_QWORD*)(v1 + 168));
    }
    if (*(_QWORD*)(v1 + 216) != 0) {
      CudaDriverRoutine_1db190(v1 + 216);
    }
    v2 = *(_QWORD*)(v1 + 104);
    if (v2 != 0) {
      CudaDriverRoutine_209120(v2);
    }
    v3 = *(_QWORD*)(v1 + 112);
    if (v3 != 0) {
      CudaDriverRoutine_209120(v3);
    }
    *(_OWORD*)v1 = 0u;
    *(_OWORD*)(v1 + 16) = 0u;
    *(_OWORD*)(v1 + 32) = 0u;
    *(_OWORD*)(v1 + 48) = 0u;
    *(_OWORD*)(v1 + 64) = 0u;
    *(_OWORD*)(v1 + 80) = 0u;
    *(_OWORD*)(v1 + 96) = 0u;
    *(_OWORD*)(v1 + 112) = 0u;
    *(_OWORD*)(v1 + 128) = 0u;
    *(_OWORD*)(v1 + 144) = 0u;
    *(_OWORD*)(v1 + 160) = 0u;
    *(_OWORD*)(v1 + 176) = 0u;
    *(_OWORD*)(v1 + 192) = 0u;
    *(_OWORD*)(v1 + 208) = 0u;
    *(_OWORD*)(v1 + 224) = 0u;
    *(_OWORD*)(v1 + 240) = 0u;
    return CudaDriverRoutine_12e340(v1);
  }
  return result;
}

__int64 CudaDriverHr_207f00(_QWORD* a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v10;
  __int64 v11;

  v10 = 0;
  v11 = 0;
  *((_BYTE*)a1 + 208) = 1;
  CudaDriverRoutine_205fa0(0, *(_QWORD*)(*a1 + 760LL), &v11, &v10);
  v8 = v11;
  if (a3 != 0) {
    v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
        *(_QWORD*)(*a1 + 64LL) + 19248LL))(
        v11, *a1, a1[24] + a1[22] + (unsigned int)(*((_DWORD*)a1 + 62) * a2),
        a3);
    v11 = v8;
  }
  if (a4 != 0) {
    v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
        *(_QWORD*)(*a1 + 64LL) + 19248LL))(
        v8, *a1, a1[25] + a1[22] + (unsigned int)(*((_DWORD*)a1 + 63) * a2),
        a4);
    v11 = v8;
  }
  CudaDriverRoutine_206060(*(_QWORD*)(*a1 + 760LL), v8);
  return 0;
}

__int64 CudaDriverHr_2081e0(_QWORD* a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;

  if (*(_QWORD*)a2 != 0) {
    v4 = *(_DWORD*)(*(_QWORD*)a2 + 276LL);
    if (*((_DWORD*)a1 + 21) < 0x800u) {
      goto LABEL_11;
    }
  }
  else {
    v4 = *(_DWORD*)(*a1 + 2104LL);
    if (*((_DWORD*)a1 + 21) < 0x800u) {
      goto LABEL_11;
    }
  }
  v5 = a1[15];
  if (*(_DWORD*)(v5 + 868) != -1) {
    if (a1[16] == v5) {
      a1[16] = *(_QWORD*)(v5 + 880);
    }
    v6 = *(_QWORD*)(v5 + 888);
    a1[15] = v6;
    if (v6 != 0) {
      *(_QWORD*)(v6 + 880) = 0;
    }
    v7 = *(_DWORD*)(v5 + 868);
    *(_OWORD*)(v5 + 880) = 0u;
    CudaDriverRoutine_2080d0(a1[13], v7, 1, &v17);
    *(_BYTE*)(v5 + 872) = 1;
    *(_DWORD*)(v5 + 868) = -1;
    --*((_DWORD*)a1 + 21);
  }
LABEL_11:
  if (*(_DWORD*)(a2 + 868) == -1) {
    goto LABEL_21;
  }
  v8 = a1[15];
  if (a1[16] == a2) {
    a1[16] = *(_QWORD*)(a2 + 880);
    if (v8 != a2) {
    LABEL_14:
      v9 = *(_QWORD*)(a2 + 888);
      *(_QWORD*)(*(_QWORD*)(a2 + 880) + 888LL) = v9;
      if (v9 != 0) {
        v10 = *(_QWORD*)(a2 + 880);
      LABEL_19:
        *(_QWORD*)(v9 + 880) = v10;
        goto LABEL_20;
      }
      goto LABEL_20;
    }
  }
  else if (v8 != a2) {
    goto LABEL_14;
  }
  v9 = *(_QWORD*)(a2 + 888);
  a1[15] = v9;
  if (v9 != 0) {
    v10 = 0;
    goto LABEL_19;
  }
LABEL_20:
  v11 = *(_DWORD*)(a2 + 868);
  *(_OWORD*)(a2 + 880) = 0u;
  CudaDriverRoutine_2080d0(a1[13], v11, 1, &v17);
  *(_BYTE*)(a2 + 872) = 1;
  *(_DWORD*)(a2 + 868) = -1;
  --*((_DWORD*)a1 + 21);
LABEL_21:
  CudaDriverRoutine_2083e0(a1[13], 1, a2, a2 + 868);
  ++*((_DWORD*)a1 + 21);
  v12 = a1[16];
  if (v12 != 0) {
    *(_QWORD*)(a2 + 880) = v12;
    v13 = *(_QWORD*)(a1[16] + 888LL);
    *(_QWORD*)(a2 + 888) = v13;
    if (v13 != 0) {
      *(_QWORD*)(v13 + 880) = a2;
    }
    *(_QWORD*)(a1[16] + 888LL) = a2;
  }
  else {
    *(_QWORD*)(a2 + 888) = a1[15];
    a1[15] = a2;
    v14 = *(_QWORD*)(a2 + 888);
    if (v14 != 0) {
      *(_QWORD*)(v14 + 880) = a2;
    }
  }
  a1[16] = a2;
  if (v4 == 2) {
    v15 = 0;
  }
  else {
    v15 = a2 + 368;
  }
  CudaDriverRoutine_207f00(a1, *(_DWORD*)(a2 + 868), a2 + 336, v15);
  *(_BYTE*)(a2 + 872) = 0;
  return 0;
}

__int64 CudaDriverHr_2083e0(__int64 a1, int a2, __int64 a3, _DWORD* a4)
{
  int v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;

  if (*(_DWORD*)(a1 + 12) == 0) {
    return 2;
  }
  CudaDriverRoutine_209440(a1);
  v8 = CudaDriverRoutine_1a1320(*(_QWORD*)(a1 + 16));
  if (v8 != 0) {
    v9 = v8 - 1;
  LABEL_4:
    *(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL * v9) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL * v9) = a3;
    *a4 = *(_DWORD*)(a1 + 8) + v9;
    return 0;
  }
  if ((unsigned __int8)CudaDriverRoutine_201450(*(_QWORD*)(a1 + 40)) == 0) {
    CudaDriverRoutine_2014d0(*(unsigned __int64**)(a1 + 40), &v17);
    v9 = v17;
    v11 = (unsigned int)v17;
    v12 = CudaDriverRoutine_12d100(
        *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (unsigned int)v17));
    v13 = CudaDriverRoutine_1bbf10(v12, 0);
    CudaDriverRoutine_1bbf50(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v9), v13, 0,
                             0);
    v15 = CudaDriverRoutine_201460(*(_QWORD**)(a1 + 56));
    v16 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * v9);
    if (v15) {
      CudaDriverRoutine_1ba520(v16, v14);
    }
    else {
      CudaDriverRoutine_56260(v16);
      CudaDriverRoutine_201480(*(unsigned __int64**)(a1 + 56),
                               *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v11));
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v11) = 0;
    goto LABEL_4;
  }
  return 2;
}

__int64* CudaDriverHr_208500(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD v9[3];

  if (*(_DWORD*)(a2 + 192) != -1) {
    v4 = result[17];
    if (result[18] == a2) {
      result[18] = *(_QWORD*)(a2 + 200);
      if (v4 != a2) {
      LABEL_4:
        v5 = *(_QWORD*)(a2 + 208);
        *(_QWORD*)(*(_QWORD*)(a2 + 200) + 208LL) = v5;
        if (v5 != 0) {
          v6 = *(_QWORD*)(a2 + 200);
        LABEL_9:
          *(_QWORD*)(v5 + 200) = v6;
          goto LABEL_10;
        }
        goto LABEL_10;
      }
    }
    else if (v4 != a2) {
      goto LABEL_4;
    }
    v5 = *(_QWORD*)(a2 + 208);
    result[17] = v5;
    if (v5 != 0) {
      v6 = 0;
      goto LABEL_9;
    }
  LABEL_10:
    v9[1] = v2;
    v9[2] = v3;
    *(_QWORD*)(a2 + 200) = 0;
    *(_QWORD*)(a2 + 208) = 0;
    v7 = result;
    result = (__int64*)CudaDriverRoutine_2080d0(result[14],
                                                *(_DWORD*)(a2 + 192), 2, v9);
    *(_DWORD*)(a2 + 192) = -1;
    *(_BYTE*)(a2 + 196) = 1;
    --*((_DWORD*)v7 + 22);
  }
  return result;
}

__int64* CudaDriverHr_2087f0(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  _QWORD v10[3];

  if (*(_DWORD*)(a2 + 512) != -1) {
    v4 = result[19];
    if (result[20] == a2) {
      result[20] = *(_QWORD*)(a2 + 536);
      if (v4 != a2) {
      LABEL_4:
        v5 = *(_QWORD*)(a2 + 544);
        *(_QWORD*)(*(_QWORD*)(a2 + 536) + 544LL) = v5;
        if (v5 != 0) {
          v6 = *(_QWORD*)(a2 + 536);
        LABEL_9:
          *(_QWORD*)(v5 + 536) = v6;
          goto LABEL_10;
        }
        goto LABEL_10;
      }
    }
    else if (v4 != a2) {
      goto LABEL_4;
    }
    v5 = *(_QWORD*)(a2 + 544);
    result[19] = v5;
    if (v5 != 0) {
      v6 = 0;
      goto LABEL_9;
    }
  LABEL_10:
    v10[1] = v2;
    v10[2] = v3;
    v7 = *(_DWORD*)(a2 + 512);
    v8 = result;
    *(_OWORD*)(a2 + 536) = 0u;
    result = (__int64*)CudaDriverRoutine_2080d0(result[13], v7, 3, v10);
    *(_DWORD*)(a2 + 512) = -1;
    *(_BYTE*)(a2 + 516) = 1;
    --*((_DWORD*)v8 + 23);
  }
  return result;
}

__int64 CudaDriverHr_208fb0(__int64 result, unsigned int a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  __int64 v9;

  v3 = *(_QWORD*)(result + 104);
  *a3 = 0;
  v4 = *(_DWORD*)(v3 + 8);
  v5 = a2 - v4;
  if (a2 >= v4 && *(_DWORD*)(v3 + 12) + v4 > a2 &&
      *(_DWORD*)(*(_QWORD*)(v3 + 24) + 4LL * v5) == 1) {
    v6 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8LL * v5);
    *a3 = v6;
    v7 = *(unsigned __int8*)(v6 + 873);
    if (v7 != 1) {
      v6 = 0;
    }
    *a3 = v6;
    if (v7 == 1) {
      v9 = result;
      result = CudaDriverRoutine_2080d0(*(_QWORD*)(result + 104), a2, 1, a3);
      *(_DWORD*)(*a3 + 868LL) = -1;
      --*(_DWORD*)(v9 + 96);
    }
  }
  return result;
}

__int64 CudaDriverHr_209120(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (result != 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 56);
    if (v2 != 0) {
      while ((unsigned __int8)CudaDriverRoutine_201450(v2) == 0) {
        CudaDriverRoutine_2014d0(*(unsigned __int64**)(v1 + 56), &v6);
        CudaDriverRoutine_1ba520(v6, v4);
        v2 = *(_QWORD*)(v1 + 56);
      }
      CudaDriverRoutine_201110(*(_QWORD*)(v1 + 56));
      v3 = *(_QWORD*)(v1 + 40);
      if (v3 == 0) {
        goto LABEL_12;
      }
    }
    else {
      v3 = *(_QWORD*)(v1 + 40);
      if (v3 == 0) {
      LABEL_12:
        CudaDriverRoutine_12e340(*(_QWORD*)(v1 + 48));
        CudaDriverRoutine_12e340(*(_QWORD*)(v1 + 24));
        CudaDriverRoutine_12e340(*(_QWORD*)(v1 + 32));
        CudaDriverRoutine_1a11d0(*(_QWORD*)(v1 + 16));
        return CudaDriverRoutine_12e340(v1);
      }
    }
    while ((unsigned __int8)CudaDriverRoutine_201450(v3) == 0) {
      CudaDriverRoutine_2014d0(*(unsigned __int64**)(v1 + 40), &v6);
      CudaDriverRoutine_1ba520(
          *(_QWORD*)(*(_QWORD*)(v1 + 48) + 8LL * (unsigned int)v6), v5);
      v3 = *(_QWORD*)(v1 + 40);
    }
    CudaDriverRoutine_201110(*(_QWORD*)(v1 + 40));
    goto LABEL_12;
  }
  return result;
}

__int64 CudaDriverHr_209440(__int64 result)
{
  __int64 i;
  unsigned int v2;
  __int64 v4;
  bool v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if (*(_DWORD*)(result + 12) != 0) {
    for (i = result;; *(_QWORD*)(*(_QWORD*)(i + 48) + 8LL * v2) = 0) {
      result = CudaDriverRoutine_201450(*(_QWORD*)(i + 40));
      if ((_BYTE)result != 0) {
        break;
      }
      CudaDriverRoutine_201520(*(unsigned __int64**)(i + 40), &v8);
      v2 = v8;
      result = CudaDriverRoutine_1bace0(
          &v7, *(_QWORD*)(*(_QWORD*)(i + 48) + 8LL * (unsigned int)v8), 3);
      if ((_DWORD)result != 0 || v7 != 5) {
        break;
      }
      CudaDriverRoutine_2014d0(*(unsigned __int64**)(i + 40), &v8);
      CudaDriverRoutine_1a1670(*(_QWORD*)(i + 16), v2 + 1);
      v5 = CudaDriverRoutine_201460(*(_QWORD**)(i + 56));
      v6 = *(_QWORD*)(*(_QWORD*)(i + 48) + 8LL * v2);
      if (v5) {
        CudaDriverRoutine_1ba520(v6, v4);
      }
      else {
        CudaDriverRoutine_56260(v6);
        CudaDriverRoutine_201480(*(unsigned __int64**)(i + 56),
                                 *(_QWORD*)(*(_QWORD*)(i + 48) + 8LL * v2));
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_2095d0(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_DWORD*)(result + 12);
  v4 = 0;
  if (v1 != 0) {
    v2 = result;
    result = CudaDriverRoutine_2014d0(*(unsigned __int64**)(result + 56), &v4);
    if ((_DWORD)result != 2) {
      CudaDriverRoutine_201340(*(__int64**)(v2 + 56), 0x200u);
      return CudaDriverRoutine_1ba520(v4, v3);
    }
  }
  return result;
}

__int64 CudaDriverHr_213ff0(unsigned int* a1)
{
  unsigned int v1;
  __int64 v3;
  _DWORD v5[8];
  __int64 v6;

  if (a1 == nullptr) {
    return 4;
  }
  v1 = *a1;
  v6 = 0;
  memset(v5, 0, sizeof(v5));
  if (v1 >= 0x28) {
    v3 = 40;
  }
  else {
    v3 = v1;
  }
  CudaDriverRoutine_25cf30(v5, a1, v3);
  v5[0] = v3;
  CudaDriverRoutine_25cf30(a1, v5, v3);
  return 45;
}

__int64 CudaDriverHr_214070(_DWORD* a1, unsigned int a2)
{
  __int64 result;
  _DWORD* v4;

  v4 = nullptr;
  if (a1 == nullptr) {
    return 1;
  }
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  result = CudaDriverRoutine_9afb0(a2, &v4);
  if ((_DWORD)result == 0) {
    if (v4 != nullptr) {
      result = 0;
      *a1 = *v4;
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_214140(int a1, _QWORD* a2)
{
  __int64 result;

  if (a2 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    if (*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35) != 0) {
      result = 0;
      *a2 = 285;
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_214190(int a1, __int64 a2, __int64 a3)
{
  __int64 result;

  if (a3 == 0) {
    return 1;
  }
  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    if (*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35) == 0) {
      return 999;
    }
    if ((unsigned __int64)(a2 - 1) <= 0x11C) {
      CudaDriverRoutine_25cf30(a3, &CudaDriverData_13b4aec, 4 * a2);
      return 0;
    }
    return 1;
  }
  return result;
}

__int64 CudaDriverHr_214210(int a1)
{
  unsigned int v1;

  v1 = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    if (*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35) != 0) {
      return CudaDriverRoutine_214d50();
    }
    return 999;
  }
  return v1;
}

__int64 CudaDriverHr_214250(int a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;

  if (a2 == nullptr) {
    return 999;
  }
  result = 101;
  *a2 = 0;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35);
    if (v4 != 0) {
      *a2 = CudaDriverRoutine_99e40(v4);
      return 0;
    }
    return 999;
  }
  return result;
}

__int64 CudaDriverHr_2142c0(__int64 a1, _QWORD* a2)
{
  __int64 v5;

  if (a1 == 0) {
    return 3;
  }
  if (a2 == nullptr) {
    return 1;
  }
  *a2 = 0;
  if ((unsigned int)CudaDriverRoutine_deeb0() != 0) {
    return 3;
  }
  v5 = CudaDriverRoutine_98340(a1);
  *a2 = CudaDriverRoutine_99e40(*(_QWORD*)(v5 + 64));
  return 0;
}

__int64 CudaDriverHr_214340(_DWORD* a1, unsigned int a2)
{
  __int64 v2;
  unsigned int v3;

  if (a1 == nullptr) {
    return 1;
  }
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  v2 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35);
  v3 = *(_DWORD*)(v2 + 21864);
  if (v3 < 2) {
  LABEL_6:
    *a1 = *(_DWORD*)(v2 + 21868);
    return 0;
  }
  if (v3 != 4) {
    if (v3 == 3) {
      goto LABEL_6;
    }
    return 101;
  }
  *a1 = *(_DWORD*)(*(_QWORD*)(v2 + 19824) + 116LL);
  return 0;
}

__int64 CudaDriverHr_2143c0(_DWORD* a1, unsigned int a2)
{
  __int64 v2;

  if (a1 == nullptr) {
    return 1;
  }
  *a1 = 0;
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  v2 = *(unsigned int*)(*((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35) +
                        21864LL);
  if ((unsigned int)v2 <= 4) {
    *a1 = CudaDriverData_13b4f60[v2];
  }
  return 0;
}

__int64 CudaDriverHr_214430(_DWORD* a1, unsigned int a2)
{
  int v2;
  unsigned int v3;

  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  v2 = *(_DWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35) + 3384LL);
  v3 = 999;
  if (v2 > 49343) {
    if (v2 == 49344) {
      *a1 = 23;
      return 0;
    }
    if (v2 == 49600) {
      *a1 = 25;
      return 0;
    }
    return v3;
  }
  if (v2 != 45248) {
    if (v2 == 45504) {
      *a1 = 20;
      return 0;
    }
    return v3;
  }
  *a1 = 19;
  return 0;
}

__int64 CudaDriverHr_214590(_OWORD* a1, int a2)
{
  __int64 result;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    *a1 =
        *(_OWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35) +
                   3078LL);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_214630(_BYTE* a1, int a2)
{
  __int64 result;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    *a1 =
        *(_BYTE*)(*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35) +
                  17116LL);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_214680(_BYTE* a1, int a2)
{
  __int64 result;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    *a1 =
        *(_BYTE*)(*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35) +
                  17117LL);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2146d0(_DWORD* a1, unsigned int a2)
{
  __int64 v2;
  int v4;

  if (a1 == nullptr) {
    return 1;
  }
  *a1 = 0;
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  v2 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35);
  if (*(_DWORD*)(v2 + 21864) == 2) {
    *a1 = 3;
    return 0;
  }
  else {
    v4 = *(_DWORD*)(v2 + 16860);
    if ((unsigned int)(v4 - 1) <= 1) {
      *a1 = v4;
    }
    return 0;
  }
}

__int64 CudaDriverHr_214810(__int64 a1, int a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    return CudaDriverRoutine_27980(a1);
  }
  return result;
}

__int64 CudaDriverHr_214850(int a1, __int64 a2)
{
  __int64 result;

  if (a2 == 0) {
    return 1;
  }
  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    return CudaDriverRoutine_27a80((unsigned int)a1);
  }
  return result;
}

__int64 CudaDriverHr_214890(__int64 a1, int a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    return CudaDriverRoutine_27b80(a1);
  }
  return result;
}

__int64 CudaDriverHr_2148d0(bool* a1, unsigned int a2)
{
  unsigned int v2;
  __int64 v3;
  bool* v4;
  bool* v6;
  char v7;
  bool v9;
  char v10;

  if (a1 == nullptr) {
    return 1;
  }
  v2 = 101;
  if ((a2 & 0x80000000) != 0) {
    return v2;
  }
  if ((int)a2 < CudaDriverData_1434ac0) {
    v3 = *((_QWORD*)&CudaDriverData_14347a8 + a2 + 35);
    if (*(_DWORD*)(v3 + 21864) != 4 ||
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v3 + 19824) + 96LL) + 261LL) == 1) {
      if (CudaDriverData_14358d0 == 0) {
        goto LABEL_13;
      }
      v4 = a1;
      if ((unsigned __int8)CudaDriverRoutine_9ad50(
              *((_QWORD*)&CudaDriverData_14347a8 + a2 + 35)) != 0 &&
          CudaDriverData_14358d0 != 1) {
        v9 = false;
        a1 = v4;
      LABEL_21:
        v2 = 0;
        *a1 = v9;
        return v2;
      }
      a1 = v4;
      if (CudaDriverData_14358d9 != 0 ||
          (v10 = CudaDriverRoutine_9ae50(v3), a1 = v4, v10 == 0)) {
      LABEL_13:
        if ((*(_BYTE*)(v3 + 16856) & 4) == 0) {
          v6 = a1;
          v7 = CudaDriverRoutine_9afa0(v3);
          v9 = true;
          if (v7 != 0) {
            v9 = (*(_BYTE*)(v3 + 16856) & 2) == 0;
          }
          a1 = v6;
          goto LABEL_21;
        }
      }
    }
    v9 = false;
    goto LABEL_21;
  }
  return v2;
}

__int64 CudaDriverHr_214a20(_DWORD* a1, unsigned int a2)
{
  __int64 result;
  _DWORD* v4;

  v4 = nullptr;
  if (a1 == nullptr) {
    return 101;
  }
  result = CudaDriverRoutine_9b010(a2, &v4);
  if ((_DWORD)result == 0) {
    if (v4 != nullptr) {
      result = 0;
      *a1 = *v4;
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_214af0(_OWORD* a1, int a2)
{
  if (a1 == nullptr) {
    return 1;
  }
  if (a2 < CudaDriverData_1434ac0 ||
      a2 >= CudaDriverData_1434cc8 + CudaDriverData_1434ac0) {
    return 101;
  }
  *a1 = *(_OWORD*)(*((_QWORD*)&CudaDriverData_14347a8 +
                     (unsigned int)(a2 - CudaDriverData_1434ac0) + 100) +
                   3078LL);
  return 0;
}

__int64 CudaDriverHr_214b50(__int64* a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    v4 = CudaDriverRoutine_f2bb0(
        *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35));
    v5 = v4 + 176;
    v6 = v4 == 0;
    result = 0;
    if (v6) {
      v7 = 0;
    }
    else {
      v7 = v5;
    }
    *a1 = v7;
  }
  return result;
}

__int64 CudaDriverHr_214bc0(_DWORD* a1, unsigned int a2)
{
  if (a1 == nullptr) {
    return 1;
  }
  *a1 = 0;
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  if (*(_DWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35) +
                 21864LL) != 1) {
    return 801;
  }
  *a1 = *(_DWORD*)(CudaDriverData_1435ee0 + 28);
  return 0;
}

__int64 CudaDriverHr_214c20(_DWORD* a1, unsigned int a2)
{
  if (a1 == nullptr) {
    return 1;
  }
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  if (*(_DWORD*)(*((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35) +
                 21864LL) != 1) {
    return 801;
  }
  *a1 = *(_DWORD*)(CudaDriverData_1435ee0 + 176);
  return 0;
}

__int64 CudaDriverHr_214c80(_BYTE* a1, unsigned int a2)
{
  __int64 v2;

  if (a1 == nullptr) {
    return 1;
  }
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  *a1 = 0;
  v2 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35);
  if (*(_DWORD*)(v2 + 21864) != 1 || (*(_BYTE*)(v2 + 16856) & 0x20) == 0) {
    return 0;
  }
  *a1 = 1;
  return 0;
}

__int64 CudaDriverHr_214cf0(_OWORD* a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0 && a2 < CudaDriverData_1434ac0) {
    result = 0;
    v4 = *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a2 + 35);
    v5 = 3111;
    if ((*(_WORD*)(v4 + 16848) & 0x80) == 0) {
      v5 = 3078;
    }
    *a1 = *(_OWORD*)(v4 + v5);
  }
  return result;
}

__int64 CudaDriverHr_215b40(unsigned int a1, int a2, unsigned int a3,
                            _DWORD* a4)
{
  __int64 result;
  __int64 v6;
  unsigned int v7;
  _DWORD* v8;
  __int64 v9;
  _BYTE v10[8];

  if (a1 >= CudaDriverData_1434ac0) {
    return 101;
  }
  result = 1;
  if (a4 == nullptr) {
    return result;
  }
  if (a3 > 2) {
    return result;
  }
  v6 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a1 + 35);
  if (v6 == 0) {
    return result;
  }
  if (a2 == 1) {
    v7 = a3;
    v8 = a4;
    result = (*(__int64 (**)(__int64, _QWORD, _BYTE*))(v6 + 20488))(v6, 0, v10);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_11;
  }
  if (a2 != 0) {
    return 999;
  }
  v7 = a3;
  v8 = a4;
  result = (*(__int64 (**)(__int64, _BYTE*, _QWORD))(v6 + 20488))(v6, v10, 0);
  if ((_DWORD)result == 0) {
  LABEL_11:
    v9 = 4;
    if (v7 <= 1) {
      v9 = 0;
    }
    *v8 = *(_DWORD*)&v10[v9];
  }
  return result;
}

__int64 CudaDriverHr_215d20(unsigned int a1, _DWORD* a2)
{
  __int64 result;
  __int64 v4;

  if (a1 >= CudaDriverData_1434ac0) {
    return 101;
  }
  result = 1;
  if (a2 != nullptr) {
    v4 = *((_QWORD*)&CudaDriverData_14347a8 + (int)a1 + 35);
    if (v4 != 0) {
      *a2 = *(_DWORD*)(v4 + 14764);
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_215d70(__int64 a1, unsigned int a2)
{
  if (a2 >= CudaDriverData_1434ac0) {
    return 101;
  }
  if (*((_QWORD*)&CudaDriverData_14347a8 + (int)a2 + 35) != 0) {
    return 801;
  }
  return 1;
}

__int64 CudaDriverHr_215ee0(unsigned int a1)
{
  if (a1 > 0xF) {
    return 0;
  }
  if (a1 == 4) {
    return CudaDriverRoutine_138310();
  }
  return CudaDriverData_1420878[a1];
}

__int64 CudaDriverHr_215f20(__int64 a1)
{
  if (a1 == 0) {
    return 1;
  }
  CudaDriverRoutine_9ab20();
  return 0;
}

__int64 CudaDriverHr_216120(_QWORD* a1, _DWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != nullptr && a2 != nullptr) {
    *a1 = *CudaDriverData_14231d8;
    *a2 = 101;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216160(__int64 a1, _QWORD* a2)
{
  if (a2 == nullptr) {
    return 1;
  }
  *a2 = CudaDriverRoutine_b4720();
  return 0;
}

__int64 CudaDriverHr_2161a0(int a1, unsigned int a2, _DWORD* a3)
{
  int v3;
  __int64 result;
  int v5;
  unsigned __int64 v6;
  int v7;

  if (a3 == nullptr) {
    return 1;
  }
  v3 = a1 - 272;
  result = 0;
  *a3 = 0;
  HIDWORD(v6) = v3;
  LODWORD(v6) = v3;
  v5 = v6 >> 4;
  if (v5 <= 2) {
    switch (v5) {
    case 0:
      if (a2 - 7 >= 2) {
        return 0;
      }
      goto LABEL_28;
    case 1:
      result = 0;
      if (a2 > 6) {
        return result;
      }
      v7 = 81;
      break;
    case 2:
      result = 0;
      if (a2 > 8) {
        return result;
      }
      v7 = 469;
      break;
    default:
      return result;
    }
  LABEL_27:
    if (((1 << a2) & v7) == 0) {
      return result;
    }
    goto LABEL_28;
  }
  if (v5 > 5) {
    if (v5 != 6) {
      if (v5 != 7) {
        return result;
      }
      if (a2 != 0) {
        return 0;
      }
    LABEL_28:
      *a3 = 1;
      return 0;
    }
    result = 0;
    if (a2 > 0xB) {
      return result;
    }
    v7 = 2269;
    goto LABEL_27;
  }
  if (v5 == 3) {
    if (a2 != 0 && a2 != 11) {
      return 0;
    }
    goto LABEL_28;
  }
  if (v5 == 5) {
    result = 0;
    if (a2 <= 8) {
      v7 = 468;
      goto LABEL_27;
    }
  }
  return result;
}

__int64 CudaDriverHr_2162b0(unsigned int a1, int* a2)
{
  bool v2;
  __int64 result;
  int v4;

  if (a2 == nullptr) {
    return 1;
  }
  v2 = a1 >= 2;
  result = 0;
  v4 = !v2;
  *a2 = v4;
  return result;
}

__int64 CudaDriverHr_2162f0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v5;
  const char* v6;
  __int64 v7;

  result = 1;
  if (a1 != nullptr && a2 != 0) {
    if (a3 != 0) {
      if (*(_DWORD*)(a3 + 4) == 1) {
        v5 = a1;
        result = CudaDriverRoutine_d9230(&v7);
        if ((_DWORD)result != 0) {
          *v5 = 0;
        }
        else {
          *v5 = v7;
        }
        return result;
      }
      v6 = "The source graph pointer is invalid";
    }
    else {
      v6 = "The source graph pointer is NULL";
    }
    CudaDriverRoutine_ed630("CUDA", 0, v6);
    return 1;
  }
  return result;
}

__int64 CudaDriverHr_216380(__int64 a1, __int64 a2)
{
  __int64 result;
  _DWORD* v5;
  __int64 v6;

  v6 = 0;
  if (a1 == 0) {
    return 1;
  }
  if (*(_DWORD*)(a1 + 4) != 0) {
    return 1;
  }
  result = CudaDriverRoutine_121c60(&v6);
  if ((_DWORD)result == 0) {
    v5 = (_DWORD*)CudaDriverRoutine_1216a0(v6);
    if (*v5 != 1) {
      if (*(_QWORD*)a2 == 0) {
        return 400;
      }
      v5 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)a2 + 32LL) + 24LL);
    }
    result = CudaDriverRoutine_2bb60(v6, a2, v5, 0, a1 + 856, 0,
                                     *(_QWORD*)(a1 + 1200));
    if ((_DWORD)result == 0) {
      return CudaDriverRoutine_db0e0(a1, a2, v5);
    }
  }
  return result;
}

__int64 CudaDriverHr_216560(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE v11[48];

  result = 1;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 2) {
    v5 = a1;
    result = CudaDriverRoutine_121c60(&v8);
    if ((_DWORD)result == 0) {
      result = CudaDriverRoutine_df0b0(v8, 0, &v9, 0);
      if ((_DWORD)result == 0) {
        result = CudaDriverRoutine_104e80(a2, v11);
        if ((_DWORD)result == 0) {
          result =
              CudaDriverRoutine_104fd0(*(_QWORD*)(v5 + 24), v11, 0, &v10, 1);
          if ((_DWORD)result == 0) {
            v6 = v9;
            if (v9 != 0) {
              v7 = v5;
              if (*(_QWORD*)(v9 + 168) != v10) {
                v9 = 0;
                v6 = v10;
              }
            }
            else {
              v6 = v10;
              v7 = v5;
            }
            CudaDriverRoutine_d6af0(v7, v11, v6);
            return 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_216650(__int64 a1, _OWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_QWORD*)a2 != 0 &&
      *(_DWORD*)(a1 + 4) == 3) {
    *(_OWORD*)(a1 + 32) = *a2;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216690(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  if (a1 == 0 || a4 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a4 = a2;
  if (a2 != 0 && a3 != 0) {
    return CudaDriverRoutine_d8920();
  }
  *a4 = *(unsigned int*)(a1 + 1036);
  return 0;
}

__int64 CudaDriverHr_2166f0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  if (a1 == 0 || a4 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a4 = a2;
  if (a2 != 0 && a3 != 0) {
    return CudaDriverRoutine_d8920();
  }
  *a4 = *(unsigned int*)(a1 + 1092);
  return 0;
}

__int64 CudaDriverHr_216750(__int64 a1, __int64 a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != 0) {
    CudaDriverRoutine_d9080(a1);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216790(__int64 a1, __int64 a2)
{
  __int64 result;
  __int128 v4;
  __int128 v5;
  __int128 v6;

  result = 1;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 0) {
    v4 = *(_OWORD*)(a1 + 32);
    v5 = *(_OWORD*)(a1 + 48);
    v6 = *(_OWORD*)(a1 + 64);
    *(_QWORD*)(a2 + 48) = *(_QWORD*)(a1 + 80);
    *(_OWORD*)(a2 + 16) = v5;
    *(_OWORD*)(a2 + 32) = v6;
    *(_OWORD*)a2 = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216810(__int64 a1, _OWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 3) {
    *a2 = *(_OWORD*)(a1 + 32);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216840(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v5;

  if (a1 == 0 || a4 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a4 = a2;
  if (a2 != 0) {
    v5 = a3;
  }
  else {
    v5 = 0;
  }
  CudaDriverRoutine_d8860(a1, v5);
  return 0;
}

__int64 CudaDriverHr_216950(_QWORD* a1, __int64 a2)
{
  __int64 result;
  const char* v4;
  __int64 v5;

  if (a1 == nullptr) {
    return 1;
  }
  if (a2 == 0) {
    v4 = "The source graph pointer is NULL";
  LABEL_10:
    CudaDriverRoutine_ed630("CUDA", 0, v4);
    return 1;
  }
  if (*(_DWORD*)(a2 + 4) != 1) {
    v4 = "The source graph pointer is invalid";
    goto LABEL_10;
  }
  result = CudaDriverRoutine_d9290(&v5);
  if ((_DWORD)result == 0) {
    *a1 = v5;
  }
  return result;
}

__int64 CudaDriverHr_2169f0(__int64 a1)
{
  if (a1 == 0) {
    return 1;
  }
  CudaDriverRoutine_c36c0();
  return 0;
}

__int64 CudaDriverHr_216ac0(unsigned int* a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != nullptr && a2 != nullptr) {
    *a2 = *a1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216cb0(unsigned int* a1, unsigned __int64* a2)
{
  __int64 result;

  result = 1;
  if (a1 != nullptr && a2 != nullptr) {
    *a2 = *a1 | ((unsigned __int64)**((unsigned int**)a1 + 3) << 32);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_216e20(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a3 != nullptr && a2 != nullptr && *(_DWORD*)(a1 + 4) == 1) {
    result = 0;
    *a2 = *(_QWORD*)(a1 + 1208);
    *a3 = *(_QWORD*)(a1 + 520);
  }
  return result;
}

__int64 CudaDriverHr_216e60(__int64 a1, _QWORD* a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a2 != nullptr && *(_DWORD*)(a1 + 4) == 2) {
    result = 0;
    *a2 = *(_QWORD*)(a1 + 1208);
  }
  return result;
}

__int64 CudaDriverHr_216ea0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a2 != nullptr && *(_DWORD*)(a1 + 4) == 4) {
    result = 0;
    *a2 = *(_QWORD*)(a1 + 48);
  }
  return result;
}

__int64 CudaDriverHr_216ee0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a2 != nullptr && *(_DWORD*)(a1 + 4) == 3) {
    result = 0;
    *a2 = *(_QWORD*)(a1 + 1208);
  }
  return result;
}

__int64 CudaDriverHr_216f20(__int64 a1, _QWORD* a2)
{
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a2 != nullptr && *(_DWORD*)(a1 + 4) == 5) {
    result = 0;
    *a2 = *(_QWORD*)(a1 + 1208);
  }
  return result;
}

__int64 CudaDriverHr_2170c0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 24);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2170e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            _QWORD* a5)
{
  bool v5;
  _BOOL4 v6;

  if (a1 == 0 || a5 == nullptr) {
    return 1;
  }
  v5 = a3 == 0 || a4 == 0;
  v6 = !v5;
  if (a2 != 0 && !v6) {
    return 1;
  }
  if (a2 != 0) {
    return CudaDriverRoutine_d8be0();
  }
  *a5 = CudaDriverRoutine_d8ba0();
  return 0;
}

__int64 CudaDriverHr_217170(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr && a3 != nullptr) {
    v5 = *(_QWORD*)(a1 + 1112);
    if (v5 != 0) {
      *a3 = v5;
      v6 = *(_QWORD*)(a1 + 1112);
      if (v6 != 0) {
        v6 = *(_QWORD*)(v6 + 24);
      }
      *a2 = v6;
      return 0;
    }
    else {
      *a2 = 0;
      *a3 = 0;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_2171c0(__int64 a1, bool* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 4) == 2;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2172c0(__int64 a1, _DWORD* a2)
{
  unsigned int v2;
  int v3;

  v2 = 1;
  if (a1 != 0 && a2 != nullptr &&
      a1 == *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8LL)) {
    v3 = 0;
    do {
      a1 = *(_QWORD*)(a1 + 1256);
      ++v3;
    } while (a1 != 0);
    v2 = 0;
    *a2 = v3;
  }
  return v2;
}

__int64 CudaDriverHr_217300(__int64 a1, unsigned int a2, _QWORD* a3)
{
  unsigned int v3;
  unsigned __int64 v4;

  v3 = 1;
  if (a1 != 0 && a3 != nullptr &&
      a1 == *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8LL)) {
    if (a2 != 0) {
      v4 = 1;
      do {
        *a3++ = a1;
        a1 = *(_QWORD*)(a1 + 1256);
      } while (a1 != 0 && v4++ < a2);
    }
    return 0;
  }
  return v3;
}

__int64 CudaDriverHr_217350(__int64 a1, _BYTE* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_BYTE*)(a1 + 672);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_217370(__int64 a1, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;
  __int64 v13;
  _QWORD v14[4];
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a1 == 0) {
    return 1;
  }
  v4 = *(_DWORD*)(a1 + 4);
  if (v4 != 2) {
    if (v4 == 0) {
      v5 = *(_QWORD*)(a1 + 800);
      if (v5 != 0) {
        if (a2 == nullptr || *(_DWORD*)(v5 + 8) != 2) {
          return 1;
        }
        goto LABEL_9;
      }
    }
    return 1;
  }
  if (a2 == nullptr) {
    return 1;
  }
LABEL_9:
  v16 = v2;
  v17 = v3;
  v7 = *a2;
  memset(v14, 0, sizeof(v14));
  if (v7 >= 0x28) {
    v8 = 40;
  }
  else {
    v8 = v7;
  }
  LODWORD(v14[0]) = v8;
  if (v4 == 2) {
    v9 = a1 + 40;
  }
  else {
    v9 = *(_QWORD*)(a1 + 800) + 24LL;
  }
  v10 = *(_DWORD*)(v9 + 8);
  v12 = *(_QWORD*)(v9 + 16) * *(unsigned int*)(v9 + 12);
  v13 = *(_QWORD*)(v9 + 32);
  HIDWORD(v14[2]) = *(_DWORD*)(v9 + 12);
  LODWORD(v14[3]) = v10;
  v15 = v12 * v13;
  v14[1] = CudaDriverRoutine_1dbe40(0, *(_QWORD*)v9, 0);
  LOBYTE(v14[2]) = 1;
  CudaDriverRoutine_25cf30(a2, v14, v8);
  return 0;
}

__int64 CudaDriverHr_217480(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0 && *(_DWORD*)(a1 + 4) == 0) {
    return CudaDriverRoutine_30bf0();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_2174a0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64 v8;

  v8 = 0;
  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a3 != 0) {
    v5 = a1;
    if (*(_DWORD*)(a1 + 4) == 0) {
      result = CudaDriverRoutine_121c60(&v8);
      if ((_DWORD)result == 0) {
        return CudaDriverRoutine_30e80(v8, v5, a2, a3);
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_217540(__int64 a1, _QWORD* a2, bool* a3)
{
  unsigned int v3;
  __int64 v4;
  bool v5;

  v3 = 1;
  if (a1 != 0 && a2 != nullptr && a3 != nullptr &&
      *(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) == 2) {
    v4 = *(_QWORD*)(a1 + 1112);
    if (v4 != 0) {
      *a2 = v4;
      if (*(_DWORD*)(a1 + 4) != 0) {
        goto LABEL_9;
      }
    }
    else {
      *a2 = *(_QWORD*)(a1 + 1120);
      if (*(_DWORD*)(a1 + 4) != 0) {
        goto LABEL_9;
      }
    }
    if (*(_BYTE*)(a1 + 673) != 0 || *(_BYTE*)(a1 + 672) != 0) {
      v5 = true;
      goto LABEL_13;
    }
    if (*(_BYTE*)(a1 + 674) != 0) {
      v5 = *(_QWORD*)(a1 + 800) == 0;
      goto LABEL_13;
    }
  LABEL_9:
    v5 = false;
  LABEL_13:
    v3 = 0;
    *a3 = v5;
  }
  return v3;
}

__int64 CudaDriverHr_217670(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 7) {
    *a2 = *(_QWORD*)(a1 + 32);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2176a0(__int64 a1, __int64 a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 7) {
    *(_QWORD*)(a1 + 32) = a2;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2176d0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 6) {
    *a2 = *(_QWORD*)(a1 + 32);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_217700(__int64 a1, __int64 a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 6) {
    *(_QWORD*)(a1 + 32) = a2;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_217730(__int64 a1, __int64 a2)
{
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 8) {
    return CudaDriverRoutine_d8640();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_217750(__int64 a1, __int64 a2)
{
  __int64 result;
  __int128 v4;

  result = 1;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 8) {
    v4 = *(_OWORD*)(a1 + 32);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 48);
    *(_OWORD*)a2 = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_217790(__int64 a1, __int64 a2)
{
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 9) {
    return CudaDriverRoutine_d8640();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_2177b0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int128 v4;

  result = 1;
  if (a1 != 0 && a2 != 0 && *(_DWORD*)(a1 + 4) == 9) {
    v4 = *(_OWORD*)(a1 + 32);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 48);
    *(_OWORD*)a2 = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_2177f0(__int64 a1, __int64 a2)
{
  if (a1 == 0 || *(_DWORD*)(a1 + 4) != 0) {
    return 1;
  }
  *(_BYTE*)(a1 + 93) = a2;
  if ((_BYTE)a2 == 0 || *(_DWORD*)(*(_QWORD*)(a1 + 24) + 4LL) != 2) {
    return 0;
  }
  CudaDriverRoutine_c3ef0(a1, a2);
  return 0;
}

__int64 CudaDriverHr_2178b0(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 11) {
    result = 0;
    if (*(_QWORD*)(a1 + 1120) != 0) {
      a1 = *(_QWORD*)(a1 + 1120);
    }
    *a2 = *(_QWORD*)(a1 + 32);
  }
  return result;
}

__int64 CudaDriverHr_217a20(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  _QWORD* v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  if (a1 == 0 || a4 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a4 = a2;
  if (a2 != 0 && a3 != 0) {
    v5 = a4;
    CudaDriverRoutine_25cf10(a3, 0, 8 * a2);
    v8 = *(_QWORD*)(a1 + 104);
    if (v8 != 0) {
      v9 = 0;
      a4 = v5;
      while (1) {
        if (*(_DWORD*)(v8 + 1092) == 0) {
          if (v9 == *v5) {
            goto LABEL_22;
          }
          *(_QWORD*)(a3 + 8 * v9++) = v8;
        }
        v8 = *(_QWORD*)(v8 + 1136);
        if (v8 == 0) {
          goto LABEL_22;
        }
      }
    }
    v9 = 0;
    a4 = v5;
  }
  else {
    v10 = *(_QWORD*)(a1 + 104);
    if (v10 != 0) {
      v9 = 0;
      do {
        v11 = *(_DWORD*)(v10 + 1092);
        v10 = *(_QWORD*)(v10 + 1136);
        if (v11 == 0) {
          ++v9;
        }
      } while (v10 != 0);
    }
    else {
      v9 = 0;
    }
  }
LABEL_22:
  *a4 = v9;
  return 0;
}

__int64 CudaDriverHr_217b30(_QWORD* a1, __int64 a2, __int64* a3, __int64 a4,
                            __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v9;
  _QWORD* v14;
  _DWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[3];

  result = 1;
  if (a1 != nullptr && a2 != 0) {
    v9 = *(_DWORD*)(a2 + 4);
    if (v9 != 2) {
      if (v9 == 1) {
        return CudaDriverRoutine_2b9f0(a1);
      }
      return result;
    }
    v21[1] = v5;
    v21[2] = v6;
    v14 = a1;
    v21[0] = 0;
    result = CudaDriverRoutine_121c60(v21);
    if ((_DWORD)result != 0) {
      return result;
    }
    v15 = (_DWORD*)CudaDriverRoutine_1216a0(v21[0]);
    if (*v15 != 1) {
      if (*(_QWORD*)a5 == 0) {
        return 400;
      }
      v15 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)a5 + 32LL) + 24LL);
    }
    result = CudaDriverRoutine_2bb60(v21[0], a5, v15, 0, 0, 0, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (a3 == nullptr && a4 != 0) {
      return 1;
    }
    if (a4 != 0) {
      v16 = a3;
      v17 = a4;
      do {
        v19 = *v16++;
        v18 = v19;
        if (v19 == 0 || a2 != *(_QWORD*)(v18 + 24)) {
          return 1;
        }
      } while (--v17 != 0);
    }
    result = CudaDriverRoutine_d6360(&v20, a2, a3, 0, 0, a4, a5, v15, 2);
    if ((_DWORD)result == 0) {
      *v14 = v20;
    }
  }
  return result;
}

__int64 CudaDriverHr_217c80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _DWORD* v7;
  __int64 v8;

  result = 1;
  v8 = 0;
  if (a1 != 0 && a2 != 0 && a3 != 0) {
    result = CudaDriverRoutine_121c60(&v8);
    if ((_DWORD)result == 0) {
      v7 = (_DWORD*)CudaDriverRoutine_1216a0(v8);
      if (*v7 != 1) {
        if (*(_QWORD*)a3 == 0) {
          return 400;
        }
        v7 = *(_DWORD**)(*(_QWORD*)(*(_QWORD*)a3 + 32LL) + 24LL);
      }
      if ((unsigned int)CudaDriverRoutine_d9ac0(a2, a3, v7) != 0) {
        return 1;
      }
      else {
        result = CudaDriverRoutine_2bb60(v8, a3, v7, 0, a2 + 856, 0,
                                         *(_QWORD*)(a2 + 1200));
        if ((_DWORD)result == 0) {
          return CudaDriverRoutine_d9320(a2, a3);
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_217fa0(__int64 a1, _OWORD* a2)
{
  __int64 result;
  __int128 v4;

  result = 1;
  if (a1 != 0 && a2 != nullptr && *(_DWORD*)(a1 + 4) == 13) {
    v4 = *(_OWORD*)(a1 + 48);
    *a2 = *(_OWORD*)(a1 + 32);
    a2[1] = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_217fe0(__int64 a1, unsigned __int64 a2, unsigned int a3,
                            __int64 a4, unsigned __int64* a5)
{
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[4];

  result = 1;
  if (a3 != 0 && a1 != 0 && a5 != nullptr) {
    if (a2 == 0 || a4 != 0) {
      if (*(_DWORD*)(a1 + 4) == 1) {
        if (*(_QWORD*)(a1 + 336) != 0) {
          v8 = *(_QWORD*)(a1 + 336);
        }
        else {
          v8 = a1;
        }
        if (a2 != 0) {
          v9 = a3;
          CudaDriverRoutine_25cf10(a4, 0, a2 * a3);
          v26 = *(unsigned int*)(v8 + 252);
          if ((_DWORD)v26 != 0) {
            v11 = 0;
            v12 = 0;
            v24 = a4;
            v25 = *(_QWORD*)(v8 + 216);
            do {
              v13 = (__int64*)(v25 + 40 * v11);
              v16 = *v13;
              v14 = v13 + 1;
              v15 = v16;
              if (CudaDriverRoutine_12d100(v14) != 0 && v12 < a2) {
                v18 = 1;
                v19 = 0;
                v20 = v24 + 32 * v12;
                do {
                  v21 = v19;
                  v19 = v18;
                  v27[3] = v15;
                  v27[0] = 32;
                  v27[1] = v18;
                  v27[2] = 0;
                  v22 = CudaDriverRoutine_12cff0(v14, v21);
                  BYTE4(v27[2]) = *(_BYTE*)(v22 + 8);
                  LODWORD(v27[2]) = *(_DWORD*)v22;
                  CudaDriverRoutine_25cf30(v20, v27, v9);
                  ++v12;
                  if (CudaDriverRoutine_12d100(v14) <= (unsigned __int64)v18) {
                    break;
                  }
                  ++v18;
                  v20 += 32;
                } while (v12 < a2);
              }
              ++v11;
            } while (v11 != v26);
          }
          else {
            v12 = 0;
          }
        }
        else {
          v12 = *(unsigned int*)(v8 + 208);
        }
        *a5 = v12;
        return 0;
      }
      else {
        CudaDriverRoutine_ed630("CUDA", 0,
                                "The source graph pointer is invalid");
        return 1;
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_2181b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            _QWORD* a5)
{
  if (a1 == 0 || a5 == nullptr || a2 != 0 && a3 == 0) {
    return 1;
  }
  *a5 = a2;
  if (a2 != 0 && a3 != 0) {
    return CudaDriverRoutine_d8920();
  }
  *a5 = *(unsigned int*)(a1 + 1036);
  return 0;
}

__int64 CudaDriverHr_2183a0(__int64 a1, unsigned int a2, unsigned __int64 a3,
                            __int64 a4, _QWORD* a5)
{
  __int64 result;
  __int64 v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  if (a1 == 0) {
    return 1;
  }
  result = 1;
  if (a5 != nullptr && *(_DWORD*)(a1 + 4) == 13 && (a3 == 0 || a4 != 0) &&
      *(_DWORD*)(a1 + 44) > a2) {
    if (a3 != 0) {
      CudaDriverRoutine_25cf10(a4, 0, 8 * a3);
      v11 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL * a2);
      if (v11 != 0) {
        v12 = 0;
        v13 = a5;
        do {
          if (a3 <= v12) {
            break;
          }
          *(_QWORD*)(a4 + 8LL * v12++) = v11;
          v11 = *(_QWORD*)(v11 + 1224);
        } while (v11 != 0);
        v11 = v12;
      }
      else {
        v13 = a5;
      }
      *v13 = v11;
      return 0;
    }
    else {
      *a5 = 0;
      v14 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL * a2);
      if (v14 != 0) {
        v15 = 1;
        result = 0;
        do {
          *a5 = v15++;
          v14 = *(_QWORD*)(v14 + 1224);
        } while (v14 != 0);
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_218620(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned int a5)
{
  _BOOL4 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[4];
  __int64 v18;

  v18 = 0;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v9 = a5 >> 3 < 0x55F;
  memset(v17, 0, sizeof(v17));
  result = CudaDriverRoutine_121c60(&v16);
  if ((_DWORD)result != 0) {
    return result;
  }
  result = CudaDriverRoutine_df0b0(v16, &v15, &v14, 0);
  if ((_DWORD)result != 0) {
    return result;
  }
  if (v14 != 0) {
    v11 = v14;
  }
  else {
    v11 = v15;
  }
  if (a1 == nullptr || a3 == 0 && a4 != 0) {
    return 1;
  }
  if (a2 == 0) {
    v13 = "The source graph pointer is NULL";
  LABEL_18:
    CudaDriverRoutine_ed630("CUDA", 0, v13);
    return 1;
  }
  if (*(_DWORD*)(a2 + 4) != 1) {
    v13 = "The source graph pointer is invalid";
    goto LABEL_18;
  }
  result = CudaDriverRoutine_cfc10(&v18, a2, v11, v17, v9);
  if ((_DWORD)result == 0) {
    v12 = v18;
    if (v18 != 0 && *(_BYTE*)(v18 + 415) != 0) {
      v12 = *(_QWORD*)(*(_QWORD*)(v18 + 424) + 96LL);
    }
    *a1 = v12;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_218980(unsigned __int64* a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 (*v5)(__int64, __int64*, __int64*, __int64*, __int64*);
  unsigned __int64* v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v16 = 0;
  v17 = 0;
  v18 = 0;
  if (a2 == nullptr) {
    return 400;
  }
  v2 = *a2;
  if (*a2 == 0) {
    return 400;
  }
  if (a1 == nullptr) {
    return 1;
  }
  v3 = *a1;
  if (*a1 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v2 + 48);
  if (v4 != 0) {
    v5 = *(__int64 (**)(__int64, __int64*, __int64*, __int64*, __int64*))(v4 +
                                                                          56);
    v6 = a1;
    v13 = 0;
    v14 = 0;
    v12 = 0;
    v7 = v5(v2, &v14, &v13, &v12, a2);
    if (v7 == 0) {
      v8 = CudaDriverRoutine_102e00(v14);
      v7 = 0;
      v16 = v13 + v8;
      v17 = v12;
    }
    v3 = *v6;
    v9 = v7;
    a1 = v6;
  }
  else {
    v9 = 400;
  }
  if (v3 >= 0x20) {
    v11 = 32;
  }
  else {
    v11 = v3;
  }
  v15 = v11;
  CudaDriverRoutine_25cf30(a1, &v15, v11);
  return v9;
}

__int64 CudaDriverHr_218be0(__int64 a1, __int64 a2, int a3, unsigned int a4,
                            __int64 a5, unsigned __int64 a6,
                            unsigned __int64 a7, __int64 a8)
{
  unsigned int v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;

  if (a1 == 0) {
    return 201;
  }
  if (a8 == 0) {
    return 1;
  }
  v8 = 0;
  if (a5 == 0 || a7 == 0) {
    return v8;
  }
  if (a6 < a5 * (unsigned __int64)a4 && a7 > 1) {
    return 1;
  }
  if (((unsigned int)a2 & (a4 - 1)) != 0) {
    return 1;
  }
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v10 = a8;
  v19 = a7;
  v20 = 0;
  v17 = a5;
  v18 = a6;
  v11 = CudaDriverRoutine_98340(a1);
  v12 = CudaDriverRoutine_98340(v11);
  CudaDriverRoutine_108520(v12 + 24, 0, 0, 0);
  LODWORD(v10) = CudaDriverRoutine_104c40(v11, &v14, v10, 0);
  v13 = CudaDriverRoutine_98340(v11);
  CudaDriverRoutine_1085d0(v13 + 24);
  return (unsigned int)v10;
}

__int64 CudaDriverHr_218cf0(__int64 a1, __int64 a2, __int64 a3)
{
  return CudaDriverRoutine_218d20(a1, a2, a3);
}

__int64 CudaDriverHr_218fb0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  char* v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  int v25;

  v2 = *(_QWORD*)(a1 + 16);
  v25 = 0;
  v3 = 192;
  v6 = *(_DWORD*)(v2 + 188);
  v7 = (char*)CudaDriverData_14225e0;
  if (v6 == 3) {
    v3 = 168;
  }
  v8 = *(_QWORD*)((char*)CudaDriverData_14225e0 + v3);
  if (v6 == 3) {
    v9 = 0;
  }
  else {
    v9 = 5;
  }
  if (*(_DWORD*)(v8 + 4LL * v9) != 0 &&
      ((v21 = v2, v22 = a2, v20 = 40, v6 != 3) ? (v10 = 24) : (v10 = 21),
       v23 = a1, v24 = &v25, CudaDriverRoutine_20b420(v10, v9, (__int64)&v20),
       v25 != 0)) {
    v11 = 0;
  }
  else {
    v12 = CudaDriverRoutine_98340(v2);
    CudaDriverRoutine_108520(v12 + 24, 0, 0, 0);
    v11 = CudaDriverRoutine_57b40(v2, a1, *(_QWORD*)(a2 + 704));
    v13 = CudaDriverRoutine_98340(v2);
    CudaDriverRoutine_1085d0(v13 + 24);
  }
  v14 = *(_DWORD*)(v2 + 188);
  v15 = 192;
  if (v14 == 3) {
    v15 = 168;
  }
  v16 = *(_QWORD*)&v7[v15];
  if (v14 == 3) {
    v17 = 0;
  }
  else {
    v17 = 6;
  }
  if (*(_DWORD*)(v16 + 4LL * v17) != 0) {
    v21 = v2;
    v22 = a2;
    v23 = a1;
    v20 = 32;
    if (v14 == 3) {
      v18 = 21;
    }
    else {
      v18 = 24;
    }
    CudaDriverRoutine_20b420(v18, v17, (__int64)&v20);
  }
  return v11;
}

__int64 CudaDriverHr_219100(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, _QWORD* a6)
{
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  _QWORD v17[60];
  __int64 v18;
  _BYTE v19[8];
  int v20;
  char v21;

  if (a1 == 0) {
    return 1;
  }
  if (a2 == 0) {
    return 400;
  }
  result = 1;
  if (a3 != 0 && a6 != nullptr && *a6 <= 0x10u) {
    CudaDriverRoutine_25cf30(v19, a6, *a6);
    v12 = a3;
    v13 = *(_QWORD*)(a3 + 16);
    if (CudaDriverRoutine_98340(v13) ==
        *(_QWORD*)(*(_QWORD*)(a2 + 32) + 24LL)) {
      v18 = 0;
      memset(v17, 0, sizeof(v17));
      CudaDriverRoutine_e6700(v17, v12);
      LOBYTE(v18) = v21;
      if (v20 != 0) {
        return CudaDriverRoutine_339c0(v13, a2, v17, a1, v12, a4, a5);
      }
      else {
        v14 = CudaDriverRoutine_98340(v13);
        CudaDriverRoutine_108520(v14 + 24, 0, 0, 0);
        v15 = CudaDriverRoutine_339c0(v13, a2, v17, a1, v12, a4, a5);
        v16 = CudaDriverRoutine_98340(v13);
        CudaDriverRoutine_1085d0(v16 + 24);
        return v15;
      }
    }
    else {
      return 400;
    }
  }
  return result;
}

__int64 CudaDriverHr_2195c0(int a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  _DWORD v7[8];
  __int128 v8;
  __int128 v9;
  __int128 v10;
  _BYTE v11[576];
  int v12;
  int v13;

  CudaDriverRoutine_25cf10(v11, 0, 592);
  memset(v7, 0, sizeof(v7));
  v8 = 0u;
  v9 = 0u;
  v10 = 0u;
  if (a2 == nullptr || *a2 == 0) {
    return 1;
  }
  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    result = CudaDriverRoutine_ec740(
        *((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35), 0, v11);
    if ((_DWORD)result == 0) {
      CudaDriverRoutine_2197c0(v7, v11);
      v5 = (unsigned int)*a2;
      LODWORD(v8) = a1;
      v7[0] = v5;
      if (v13 == 64 || v13 == 33) {
        v6 = v12;
      }
      else {
        v6 = 0;
      }
      DWORD1(v8) = v6;
      CudaDriverRoutine_25cf30(a2, v7, v5);
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_2197c0(__int64 result, int* a2)
{
  int v2;

  *(_DWORD*)result = 80;
  v2 = *a2;
  if ((unsigned int)(*a2 - 16) > 0x30 ||
      ((1LL << ((unsigned __int8)*a2 - 16)) & 0x10000003F003FLL) == 0) {
    v2 = 0;
  }
  *(_DWORD*)(result + 8) = v2;
  *(_DWORD*)(result + 12) = a2[1];
  *(_DWORD*)(result + 16) = a2[2];
  *(_DWORD*)(result + 24) = *((unsigned __int8*)a2 + 17);
  *(_DWORD*)(result + 28) = *((unsigned __int8*)a2 + 18);
  *(_DWORD*)(result + 64) = *((unsigned __int8*)a2 + 19);
  *(_QWORD*)(result + 40) = *((_QWORD*)a2 + 68);
  *(_QWORD*)(result + 48) = *((_QWORD*)a2 + 69);
  *(_DWORD*)(result + 56) = *((unsigned __int8*)a2 + 16);
  *(_DWORD*)(result + 72) = *((unsigned __int8*)a2 + 20);
  if (a2[142] == 16 && a2[146] == 64) {
    *(_DWORD*)(result + 76) = *(_BYTE*)(*((_QWORD*)a2 + 70) + 17100LL) & 1;
  }
  else {
    *(_DWORD*)(result + 76) = 0;
  }
  return result;
}

__int64 CudaDriverHr_219880(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  v7 = *(_QWORD*)(a1 + 64);
  if (a4 == *(_DWORD*)(v7 + 11744)) {
    v8 = a5;
    v9 = a6;
    v10 = a2;
    v11 =
        (__int64*)(*(_QWORD*)(a2 + 848) + 24LL * *(unsigned int*)(v7 + 11708));
    if (a3 == v11[2]) {
      v14 = *v11;
      v15 = a1;
      v12 = a3;
      v17 = CudaDriverRoutine_1db800(a3);
      a1 = v15;
      v13 = v14 + a4 - v17;
    }
    else {
      v12 = a3;
      v13 = a4;
    }
  }
  else {
    v12 = a3;
    v13 = a4;
    v10 = a2;
    v8 = a5;
    v9 = a6;
  }
  v18 = a1;
  v19 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v19 + 24, 0, 0, 0);
  v20 = CudaDriverRoutine_f6230(v18, v12, v13, v8, v9, v10, 2, 0);
  v21 = CudaDriverRoutine_98340(v18);
  CudaDriverRoutine_1085d0(v21 + 24);
  return v20;
}

__int64 CudaDriverHr_2199b0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v13;
  __int64 v14;

  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  v13 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v13 + 24, 0, 0, 0);
  LODWORD(a6) = CudaDriverRoutine_f6360(a1, a5, a3, a4, a6, a2, 1, 0);
  v14 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v14 + 24);
  return (unsigned int)a6;
}

__int64 CudaDriverHr_219a70(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                            __int64 a5, unsigned int a6)
{
  __int64 result;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  result = 1;
  if (a2 != nullptr && a6 <= 2) {
    *a2 = (*(__int64 (**)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(
        *(_QWORD*)(a1 + 64) + 19248LL))(*a2, a1, a3, a4, a5, 2 - a6);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_219de0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  v7 = a1;
  v8 = *(_QWORD*)(a1 + 64);
  if (a4 == *(_DWORD*)(v8 + 11744)) {
    v9 = a5;
    v10 = a6;
    v11 = a2;
    v12 =
        (__int64*)(*(_QWORD*)(a2 + 848) + 24LL * *(unsigned int*)(v8 + 11708));
    if (a3 == v12[2]) {
      v15 = *v12;
      v13 = a3;
      v16 = v7;
      v18 = CudaDriverRoutine_1db800(a3);
      v19 = v15 + a4;
      v7 = v16;
      v14 = v19 - v18;
      v8 = *(_QWORD*)(v16 + 64);
    }
    else {
      v13 = a3;
      v14 = a4;
    }
  }
  else {
    v13 = a3;
    v14 = a4;
    v11 = a2;
    v9 = a5;
    v10 = a6;
  }
  CudaDriverRoutine_9ac80(v8);
  CudaDriverRoutine_98340(v7);
  return CudaDriverRoutine_f6230(v7, v13, v14, v9, v10, v11, 2, 0);
}

__int64 CudaDriverHr_219ef0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  if ((*(_BYTE*)(a2 + 56) & 2) != 0) {
    return 800;
  }
  v7 = *(_QWORD*)(a1 + 64);
  if (a4 == *(_DWORD*)(v7 + 11744)) {
    v8 = a5;
    v9 = a6;
    v10 =
        (__int64*)(*(_QWORD*)(a2 + 848) + 24LL * *(unsigned int*)(v7 + 11708));
    if (a3 == v10[2]) {
      v13 = *v10;
      v14 = a1;
      v11 = a3;
      v15 = a2;
      v17 = CudaDriverRoutine_1db800(a3);
      a1 = v14;
      a2 = v15;
      v12 = v13 + a4 - v17;
    }
    else {
      v11 = a3;
      v12 = a4;
    }
  }
  else {
    v11 = a3;
    v12 = a4;
    v8 = a5;
    v9 = a6;
  }
  v18 = a1;
  v19 = a2;
  v20 = CudaDriverRoutine_118a60(a1, a2);
  v21 = CudaDriverRoutine_f6230(v18, v11, v12, v8, v9, v19, 2, 0);
  CudaDriverRoutine_118bc0(v18, v19, v20);
  return v21;
}

__int64 CudaDriverHr_21a030(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  unsigned int v13;

  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  if ((*(_BYTE*)(a2 + 56) & 2) != 0) {
    return 800;
  }
  v13 = CudaDriverRoutine_118a60(a1, a2);
  LODWORD(a3) = CudaDriverRoutine_f6360(a1, a5, a3, a4, a6, a2, 1, 0);
  CudaDriverRoutine_118bc0(a1, a2, v13);
  return (unsigned int)a3;
}

__int64 CudaDriverHr_21a120(int a1, unsigned int a2, __int64 a3, _QWORD* a4,
                            _QWORD* a5)
{
  __int64 result;
  char* v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v14;

  v14 = 0;
  if (a4 == nullptr) {
    return 999;
  }
  result = 101;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    v7 = (char*)&CudaDriverData_14347a8 + 8 * (unsigned int)a1;
    v9 = a2;
    v10 = *((_QWORD*)v7 + 35);
    v11 = *(_QWORD*)(v10 + 16928);
    if (v11 != 0) {
      if ((unsigned int)CudaDriverRoutine_b9e70(*((_QWORD*)v7 + 35), v11, v9, 1,
                                                a3, 64, &v14) != 0) {
        return 999;
      }
      else {
        *a4 = v14;
        if (a5 != nullptr) {
          *a5 = (*(__int64 (**)(void))(v10 + 19448))();
        }
        return 0;
      }
    }
    else {
      return 801;
    }
  }
  return result;
}

__int64 CudaDriverHr_21a220(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                            _QWORD* a5)
{
  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  if (a4 == nullptr) {
    return 999;
  }
  if (a2 != 0) {
    return 1;
  }
  if ((unsigned int)CudaDriverRoutine_ba080() != 0) {
    return 999;
  }
  *a4 = 0;
  if (a5 != nullptr) {
    *a5 = (*(__int64 (**)(void))(*(_QWORD*)(a1 + 64) + 19448LL))();
  }
  return 0;
}

__int64 CudaDriverHr_21a2f0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;

  v3 = a2;
  if (a2 != 0) {
    return CudaDriverRoutine_1db190(&v3);
  }
  return result;
}

__int64 CudaDriverHr_21a320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;

  if (a1 == 0) {
    return 201;
  }
  v4 = CudaDriverRoutine_98340(a1);
  if ((unsigned int)CudaDriverRoutine_eea90(v4, a3) != 0) {
    return 999;
  }
  else {
    return 0;
  }
}

__int64 CudaDriverHr_21a370(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  __int64 result;

  result = 1;
  if (a1 != nullptr && a2 != nullptr && a3 != 0) {
    *a1 = *(_QWORD*)(a3 + 80);
    *a2 = *(_QWORD*)(a3 + 96);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21a3a0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 result;

  result = 999;
  if (a2 != 0 && a3 != nullptr) {
    *a3 = a2 + 40;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21a520(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    v5 = CudaDriverRoutine_1dbfc0(a1);
    *a2 = v5;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21a570(_DWORD* a1, __int64 a2, __int64 a3)
{
  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a3 != 0) {
    return CudaDriverRoutine_21bff0();
  }
  return 1;
}

__int64 CudaDriverHr_21a5d0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_1dbc20(*(_QWORD*)(v3 + 80), a2);
  v7 = result;
  if (result != 0) {
    v5 = CudaDriverRoutine_98340(v3);
    CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
    CudaDriverRoutine_1db190(&v7);
    v6 = CudaDriverRoutine_98340(v3);
    return CudaDriverRoutine_1085d0(v6 + 24);
  }
  return result;
}

__int64 CudaDriverHr_21a650(_DWORD* a1, __int64 a2, __int64 a3)
{
  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a3 != 0) {
    return CudaDriverRoutine_21bff0();
  }
  return 999;
}

__int64 CudaDriverHr_21a6b0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = CudaDriverRoutine_98340(a1);
  result = CudaDriverRoutine_1dba10(*(_QWORD*)(v3 + 80), a2);
  v7 = result;
  if (result != 0) {
    v5 = CudaDriverRoutine_98340(v3);
    CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
    CudaDriverRoutine_1db190(&v7);
    v6 = CudaDriverRoutine_98340(v3);
    return CudaDriverRoutine_1085d0(v6 + 24);
  }
  return result;
}

__int64 CudaDriverHr_21a790(__int64 result, __int64* a2)
{
  __int64 v3;

  if (a2 != nullptr) {
    *a2 = 0;
    if (result != 0) {
      v3 = result;
      result = CudaDriverRoutine_1db1b0(result);
      if ((result & 0x3000000) == 0x1000000) {
        result = CudaDriverRoutine_1dbab0(v3);
        *a2 = result;
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21a7f0(__int64 result, __int64* a2)
{
  __int64 v3;

  if (a2 != nullptr) {
    *a2 = 0;
    if (result != 0) {
      v3 = result;
      result = CudaDriverRoutine_1db1b0(result);
      if ((result & 0x3000000) == 0x1000000) {
        result = CudaDriverRoutine_1db7b0(v3);
        *a2 = result;
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21a850(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result != 0) {
    v7 = result;
    v1 = result;
    v2 = CudaDriverRoutine_1db1b0(result) & 0xF800000000LL;
    v3 = v1;
    if (v2 == 0x1800000000LL) {
      v3 = CudaDriverRoutine_1dbf50(v1);
      v7 = v3;
    }
    v4 = CudaDriverRoutine_1dbfd0(v3);
    v5 = CudaDriverRoutine_98340(v4);
    CudaDriverRoutine_108520(v5 + 24, 0, 0, 0);
    CudaDriverRoutine_1db190(&v7);
    v6 = CudaDriverRoutine_98340(v4);
    return CudaDriverRoutine_1085d0(v6 + 24);
  }
  return result;
}

__int64 CudaDriverHr_21a8e0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = 1;
  if (a1 != nullptr && a2 != 0) {
    v6 = CudaDriverRoutine_98340(a2);
    if (a3 != 0 && (*a1 = 0, (v7 = CudaDriverRoutine_1dba10(*(_QWORD*)(v6 + 80),
                                                            a3)) != 0)) {
      v8 = v7;
      result = 0;
      *a1 = v8;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_21a950(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v5;

  result = 1;
  if (a1 != nullptr && a3 != 0) {
    v5 = CudaDriverRoutine_1db1a0(a3);
    *a1 = v5;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21a990(__int64 result, int a2)
{
  if (*(_DWORD*)result == 0) {
    *(_BYTE*)(result + 15901) = a2 != 0;
    *(_BYTE*)(result + 1301) = 1;
  }
  return result;
}

__int64 CudaDriverHr_21a9c0(__int64 a1, _QWORD* a2, _DWORD* a3, _QWORD* a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a1 == 0) {
    return 1;
  }
  v7 = CudaDriverRoutine_98340(a1);
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(v7 + 1232);
  }
  if (a3 != nullptr) {
    *a3 = 0;
    if (*(_QWORD*)(v7 + 1232) != 0) {
      v8 = v7;
      v9 = CudaDriverRoutine_1db1b0(*(_QWORD*)(v7 + 1232)) & 7;
      v7 = v8;
      *a3 = v9;
    }
  }
  if (a4 != nullptr) {
    *a4 = CudaDriverRoutine_9ea90(v7);
  }
  return 0;
}

__int64 CudaDriverHr_21aa60(__int64 a1, __int64 a2)
{
  __int64 v3;

  if (a1 == 0 || a2 == 0) {
    return 1;
  }
  v3 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_11d0f0(*(_QWORD*)(*(_QWORD*)(v3 + 64) + 3128LL), a2);
}

__int64 CudaDriverHr_21aab0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v5;
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  v5 = CudaDriverRoutine_98340(a1);
  result = 1;
  if (a3 != nullptr && *(_QWORD*)(v5 + 80) != 0) {
    result = 0;
    *a3 = a2;
  }
  return result;
}

__int64 CudaDriverHr_21ab00(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v5;

  if (a1 == 0) {
    return 1;
  }
  v5 = CudaDriverRoutine_98340(a1);
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)(v5 + 64) + 19448LL))(a2);
  return 0;
}

__int64 CudaDriverHr_21ab50(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = CudaDriverRoutine_1dbf90(a1);
    *a2 = v5;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21aba0(__int64 a1,
                            __int64 (*a2)(__int64, __int64, __int64),
                            __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;

  if (a1 == 0 || *(_DWORD*)a1 != 0) {
    return 201;
  }
  result = a2(a3, 0, *(unsigned int*)(*(_QWORD*)(a1 + 80) + 2032LL));
  if ((_DWORD)result == 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 80) + 2040LL);
    if (v7 != 0) {
      v8 = 0;
      do {
        result = a2(a3, v7, v8);
        if ((_DWORD)result != 0) {
          break;
        }
        v7 = *(_QWORD*)(v7 + 8);
        ++v8;
      } while (v7 != 0);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21ac60(__int64 a1,
                            __int64 (*a2)(__int64, __int64, __int64),
                            __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v4 = *(_QWORD*)(a1 + 624);
  if (v4 != 0) {
    v7 = 0;
    do {
      v4 = CudaDriverRoutine_12d100(v4);
      ++v7;
    } while (v4 != 0);
    result = a2(a3, 0, v7);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  else {
    result = a2(a3, 0, 0);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  v9 = *(_QWORD*)(a1 + 624);
  if (v9 == 0) {
    return 0;
  }
  v10 = 0;
  do {
    result = a2(a3, v9, v10);
    if ((_DWORD)result != 0) {
      break;
    }
    result = CudaDriverRoutine_12d100(v9);
    ++v10;
    v9 = result;
  } while (result != 0);
  return result;
}

__int64 CudaDriverHr_21ada0(__int64 a1, unsigned int* a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  _QWORD v7[6];

  result = 1;
  memset(v7, 0, 40);
  if (a1 != 0 && a2 != nullptr) {
    CudaDriverRoutine_25cf10(a2 + 1, 0, *a2 - 4LL);
    v5 = CudaDriverRoutine_98340(a1);
    if ((unsigned int)CudaDriverRoutine_1d9fa0(*(_QWORD*)(v5 + 80), v7) != 0) {
      return 999;
    }
    else {
      v6 = *a2;
      if (*a2 >= 0x41) {
        a2[1] = v7[0];
        *(_OWORD*)(a2 + 2) = *(_OWORD*)&v7[1];
        *(_OWORD*)(a2 + 6) = 0u;
        *(_OWORD*)(a2 + 10) = 0u;
        *(_OWORD*)(a2 + 14) = *(_OWORD*)&v7[3];
        result = 0;
        if (v6 >= 0x49) {
          *a2 = 72;
        }
      }
      else {
        return 1;
      }
    }
  }
  return result;
}

bool CudaDriverHr_21ae90(__int64 a1, unsigned int a2, _QWORD* a3)
{
  __int64 v5;

  if (a1 == 0 || a3 == nullptr) {
    return true;
  }
  v5 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_208ef0(*(_QWORD*)(v5 + 2112), a2, a3);
}

__int64 CudaDriverHr_21afe0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;

  if (a1 == nullptr) {
    return 1;
  }
  *a1 = 0;
  if (a2 != 0) {
    v5 = CudaDriverRoutine_98340(a2);
    v6 = CudaDriverRoutine_1db920(*(_QWORD*)(v5 + 80), a3);
    if (v6 != 0) {
    LABEL_4:
      *a1 = v6;
      return 0;
    }
  }
  else {
    v6 = CudaDriverRoutine_1dbe40(0, a3, 0);
    if (v6 != 0) {
      goto LABEL_4;
    }
  }
  return 1;
}

__int64 CudaDriverHr_21b070(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = CudaDriverRoutine_1db800(a1);
    *a2 = v5;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21b0c0(__int64 a1, bool* a2)
{
  unsigned int v2;
  bool v3;

  v2 = 1;
  if (a1 != 0 && a2 != nullptr) {
    v3 = true;
    if ((*(_QWORD*)(a1 + 240) & 0xFC0000000000000LL) == 0 &&
        (*(_QWORD*)(a1 + 240) & 0x7E00LL) != 0xE00) {
      v3 = *(_BYTE*)(a1 + 688) != 0;
    }
    v2 = 0;
    *a2 = v3;
  }
  return v2;
}

__int64 CudaDriverHr_21b110(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = a1;
    v6 = CudaDriverRoutine_1db1b0(a1) & 0xF800000000LL;
    v7 = v5;
    if (v6 == 0x1800000000LL) {
      v7 = CudaDriverRoutine_1dbf50(v5);
    }
    v8 = CudaDriverRoutine_1dbfd0(v7);
    *a2 = v8;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21b180(__int64 a1)
{
  if (a1 == 0) {
    return 1;
  }
  CudaDriverRoutine_eeec0();
  return 0;
}

__int64 CudaDriverHr_21b260(__int64 a1, _DWORD* a2)
{
  __int64 result;
  int* v5;
  int v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = (int*)CudaDriverRoutine_1dc050(a1);
    if (v5 != nullptr) {
      v6 = *v5;
      *a2 = v6;
      return 0;
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_21b800(int a1, __int64 (*a2)(__int64, __int64, __int64),
                            __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 i;

  result = 999;
  if ((a1 & 0x80000000) == 0 && a1 < CudaDriverData_1434ac0) {
    if (*(_BYTE*)(*((_QWORD*)&CudaDriverData_14347a8 + (unsigned int)a1 + 35) +
                  16936LL) != 0) {
      v6 = CudaDriverRoutine_9b050();
      result = a2(a3, 0, *(unsigned int*)(v6 + 2032));
      if ((_DWORD)result == 0) {
        v7 = *(_QWORD*)(v6 + 2040);
        if (v7 != 0) {
          for (i = 0;; ++i) {
            result = a2(a3, v7, i);
            if ((_DWORD)result != 0) {
              break;
            }
            v7 = *(_QWORD*)(v7 + 8);
            if (v7 == 0) {
              return 0;
            }
          }
        }
        else {
          return 0;
        }
      }
    }
    else {
      return a2(a3, 0, 0);
    }
  }
  return result;
}

__int64 CudaDriverHr_21b900(__int64 a1, unsigned int* a2)
{
  __int64 result;
  __int64 v5;
  unsigned int v6;
  __int128 v7;
  __int64 v8;

  result = 1;
  v7 = 0u;
  v8 = 0;
  if (a1 != 0 && a2 != nullptr) {
    CudaDriverRoutine_25cf10(a2 + 1, 0, *a2 - 4LL);
    v5 = CudaDriverRoutine_98340(a1);
    result = CudaDriverRoutine_1da010(*(_QWORD*)(v5 + 80), &v7);
    if ((_DWORD)result == 0) {
      v6 = *a2;
      if (*a2 < 0x11) {
        return 1;
      }
      *(_OWORD*)(a2 + 2) = v7;
      if (v6 >= 0x1C) {
        if ((unsigned __int8)v8 > 2u) {
          return 1;
        }
        a2[6] = (unsigned __int8)v8;
        if (v6 >= 0x21) {
          *a2 = 32;
          return 0;
        }
      }
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21b9f0(_DWORD* a1, __int64 a2, __int64 a3)
{
  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a3 != 0) {
    return CudaDriverRoutine_21c230();
  }
  return 999;
}

__int64 CudaDriverHr_21ba50(_DWORD** a1, _DWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != nullptr && a2 != nullptr) {
    *a2 = **a1;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21ba80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  if (result != 0 && *(_DWORD*)result == 0) {
    v2 = result;
    result = CudaDriverRoutine_1dba10(*(_QWORD*)(result + 80), a2);
    v3 = result;
    if (result != 0) {
      CudaDriverRoutine_9ac80(*(_QWORD*)(v2 + 64));
      CudaDriverRoutine_98340(v2);
      return CudaDriverRoutine_1db190(&v3);
    }
  }
  return result;
}

__int64 CudaDriverHr_21bae0(_DWORD* a1, __int64 a2, __int64 a3)
{
  if (a1 == nullptr || *a1 != 0) {
    return 201;
  }
  if (a3 != 0) {
    return CudaDriverRoutine_21c230();
  }
  return 1;
}

__int64 CudaDriverHr_21bb40(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;

  if (result != 0) {
    v3 = CudaDriverRoutine_98340(result);
    result = CudaDriverRoutine_1dbc20(*(_QWORD*)(v3 + 80), a2);
    v4 = result;
    if (result != 0) {
      CudaDriverRoutine_9ac80(*(_QWORD*)(v3 + 64));
      CudaDriverRoutine_98340(v3);
      return CudaDriverRoutine_1db190(&v4);
    }
  }
  return result;
}

__int64 CudaDriverHr_21bbb0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    if (CudaDriverRoutine_1db750(a1) != 0) {
      v5 = CudaDriverRoutine_f1060();
    }
    else {
      v5 = 0;
    }
    *a2 = v5 + 176;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21bc20(__int64 a1,
                            __int64 (*a2)(__int64, __int64, __int64),
                            __int64 a3, unsigned int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;

  result = 1;
  if (a1 != 0 && a2 != nullptr && a4 <= 1) {
    CudaDriverRoutine_107f90(a1 + 16, 0, 0);
    if (a4 != 0) {
      v9 = 40;
    }
    else {
      v9 = 32;
    }
    v10 = *(_QWORD*)(a1 + v9);
    if (v10 != 0) {
      v11 = 0;
      do {
        v10 = *(_QWORD*)(v10 + v9);
        ++v11;
      } while (v10 != 0);
      v12 = a2(a3, 0, v11);
      if (v12 != 0) {
        goto LABEL_13;
      }
    }
    else {
      v12 = a2(a3, 0, 0);
      if (v12 != 0) {
        goto LABEL_13;
      }
    }
    v14 = *(_QWORD*)(a1 + v9);
    if (v14 == 0) {
    LABEL_18:
      v13 = 0;
      goto LABEL_19;
    }
    v15 = 0;
    while (1) {
      v12 = a2(a3, v14, v15);
      if (v12 != 0) {
        break;
      }
      v14 = *(_QWORD*)(v14 + v9);
      ++v15;
      if (v14 == 0) {
        goto LABEL_18;
      }
    }
  LABEL_13:
    v13 = v12;
  LABEL_19:
    CudaDriverRoutine_108070(a1 + 16);
    return v13;
  }
  return result;
}

__int64 CudaDriverHr_21be30(__int64 a1, int* a2)
{
  __int64 result;
  unsigned __int64 v5;
  int v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v5 = (unsigned __int64)CudaDriverRoutine_1db1b0(a1) >> 41;
    result = 0;
    if ((v5 & 7) != 0) {
      v6 = (v5 & 7) == 1;
    }
    else {
      v6 = 3;
    }
    *a2 = v6;
  }
  return result;
}

__int64 CudaDriverHr_21bf50(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;

  if (a1 == 0) {
    return 201;
  }
  v3 = CudaDriverRoutine_98340(a1);
  v7 = CudaDriverRoutine_1dbe40(v3, a2, 0);
  if (v7 == 0) {
    return 1;
  }
  v4 = CudaDriverRoutine_98340(v3);
  CudaDriverRoutine_108520(v4 + 24, 0, 0, 0);
  CudaDriverRoutine_1db190(&v7);
  v5 = CudaDriverRoutine_98340(v3);
  CudaDriverRoutine_1085d0(v5 + 24);
  return 0;
}

__int64 CudaDriverHr_21bff0(__int64 a1, __int64 a2, unsigned int* a3,
                            _QWORD* a4, _QWORD* a5, _QWORD* a6)
{
  __int64 result;
  __int64 v7;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int128 v43;
  __int128 v44;
  __int64 v45;
  __int64 v46;

  v20 = 0;
  if (a3 == nullptr || a4 == nullptr && a5 == nullptr && a6 == nullptr) {
    return 1;
  }
  v45 = 0;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v37 = 0u;
  v7 = *a3;
  v38 = 0u;
  v39 = 0u;
  v44 = 0u;
  v28 = 0u;
  v40 = 0u;
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  if ((unsigned int)v7 > 8) {
    return 801;
  }
  v46 = 0;
  CudaDriverRoutine_25cf30(&v46, a3, v7);
  v21 = 0x100000200LL;
  if ((unsigned int)BYTE4(v46) - 1 < 2) {
    if (CudaDriverData_14358d0 != 0) {
      return 801;
    }
    v13 = a1;
    if ((CudaDriverData_1436502 & 1) != 0) {
      v15 = 0x101000211LL;
    }
    else {
      v15 = 0x101000219LL;
    }
    if (BYTE4(v46) == 2) {
      v14 = v15 | 0x80;
    }
    else {
      v14 = v15;
    }
  }
  else {
    v13 = a1;
    if (BYTE4(v46) != 0) {
      if (BYTE4(v46) != 3) {
        return 1;
      }
      if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x20) == 0) {
        return 801;
      }
      CudaDriverRoutine_126ed0();
      v13 = a1;
      v14 = v21 & 0xF83FFFFF83FFFFFFLL;
    }
    else {
      v14 = 0x100000202LL;
    }
  }
  v16 = 201326592;
  if (BYTE5(v46) == 1) {
    v16 = 469762048;
  }
  v21 = v16 | v14;
  v17 = CudaDriverRoutine_98340(v13);
  CudaDriverRoutine_108520(v17 + 24, 0, 0, 0);
  v18 = CudaDriverRoutine_1da1b0(*(_QWORD*)(v13 + 80), &v21, a2, &v20);
  v19 = CudaDriverRoutine_98340(v13);
  CudaDriverRoutine_1085d0(v19 + 24);
  result = v18;
  if (v18 == 0) {
    if (v20 != 0) {
      if (a4 != nullptr) {
        *a4 = CudaDriverRoutine_1dbab0(v20);
      }
      if (a5 != nullptr) {
        *a5 = CudaDriverRoutine_102e00(v20);
      }
      result = 0;
      if (a6 != nullptr) {
        *a6 = v20;
      }
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_21c230(__int64 a1, __int64 a2, unsigned int* a3,
                            _QWORD* a4, _QWORD* a5, _QWORD* a6)
{
  __int64 result;
  __int64 v7;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int64 v43;
  __int64 v44;

  v18 = 0;
  if (a4 == nullptr && a5 == nullptr && a6 == nullptr) {
    return 1;
  }
  v43 = 0;
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v7 = *a3;
  v36 = 0u;
  v37 = 0u;
  v42 = 0u;
  v26 = 0u;
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v41 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  if ((unsigned int)v7 > 8) {
    return 801;
  }
  v44 = 0;
  CudaDriverRoutine_25cf30(&v44, a3, v7);
  v19 = 0x100000200LL;
  if ((unsigned int)BYTE4(v44) - 1 < 2) {
    if (CudaDriverData_14358d0 != 0) {
      return 801;
    }
    v13 = a1;
    if ((CudaDriverData_1436502 & 1) != 0) {
      v15 = 0x101000211LL;
    }
    else {
      v15 = 0x101000219LL;
    }
    if (BYTE4(v44) == 2) {
      v14 = v15 | 0x80;
    }
    else {
      v14 = v15;
    }
  }
  else {
    v13 = a1;
    if (BYTE4(v44) != 0) {
      if (BYTE4(v44) != 3) {
        return 1;
      }
      if ((*(_WORD*)(*(_QWORD*)(a1 + 64) + 16848LL) & 0x20) == 0) {
        return 801;
      }
      CudaDriverRoutine_126ed0();
      v13 = a1;
      v14 = v19 & 0xF83FFFFF83FFFFFFLL;
    }
    else {
      v14 = 0x100000202LL;
    }
  }
  v16 = *(_QWORD*)(v13 + 64);
  v17 = 201326592;
  if (BYTE5(v44) == 1) {
    v17 = 469762048;
  }
  v19 = v17 | v14;
  CudaDriverRoutine_9ac80(v16);
  CudaDriverRoutine_98340(v13);
  result = CudaDriverRoutine_1da1b0(*(_QWORD*)(v13 + 80), &v19, a2, &v18);
  if ((_DWORD)result == 0) {
    if (v18 != 0) {
      if (a4 != nullptr) {
        *a4 = CudaDriverRoutine_1dbab0(v18);
      }
      if (a5 != nullptr) {
        *a5 = CudaDriverRoutine_102e00(v18);
      }
      result = 0;
      if (a6 != nullptr) {
        *a6 = v18;
      }
    }
    else {
      return 999;
    }
  }
  return result;
}

__int64 CudaDriverHr_21c440(int* a1, __int64 a2)
{
  int v3;

  if (a1 == nullptr) {
    return 1;
  }
  if (*(_QWORD*)(a2 + 96) != 0) {
    *a1 = 1;
    return 0;
  }
  else {
    if (*(_QWORD*)(a2 + 104) != 0) {
      v3 = 2;
    }
    else {
      v3 = 0;
    }
    *a1 = v3;
    return 0;
  }
}

__int64 CudaDriverHr_21c5b0(_DWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;

  if (a1 == nullptr) {
    return 1;
  }
  v2 = *(_QWORD*)(a2 + 96);
  if (v2 != 0) {
    *a1 = **(_DWORD**)(v2 + 176);
    return 0;
  }
  else {
    v4 = *(_QWORD*)(a2 + 104);
    if (v4 != 0) {
      *a1 = **(_DWORD**)(v4 + 104);
      return 0;
    }
    else {
      return 999;
    }
  }
}

__int64 CudaDriverHr_21c610(__int64 a1, int a2, _DWORD* a3)
{
  _QWORD* v3;
  _DWORD* v4;
  unsigned __int8 v5;

  if (a3 == nullptr) {
    return 1;
  }
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == nullptr) {
    return 999;
  }
  if (*v3 == 0) {
    return 999;
  }
  switch (a2) {
  case 3:
    v4 = a3;
    v5 = CudaDriverRoutine_103250();
    goto LABEL_13;
  case 2:
    v4 = a3;
    v5 = CudaDriverRoutine_103220();
    goto LABEL_13;
  case 1:
    v4 = a3;
    v5 = CudaDriverRoutine_1031f0();
  LABEL_13:
    *v4 = v5;
    return 0;
  default:
    break;
  }
  return 1;
}

__int64 CudaDriverHr_21c800(__int64 a1,
                            __int64 (*a2)(__int64, _QWORD, _QWORD,
                                          unsigned __int64),
                            __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned int v11;
  unsigned __int64 v12;
  _QWORD* v13;
  int v14;

  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == nullptr) {
    return 999;
  }
  if (*v3 == 0) {
    return 999;
  }
  v4 = v3[22];
  if (v4 == 0) {
    return 999;
  }
  v5 = *(_QWORD*)(v4 + 16928);
  if (v5 == 0) {
    return 999;
  }
  v6 = v3[29];
  result = a2(a3, 0, 0, v6);
  if ((_DWORD)result == 0) {
    CudaDriverRoutine_107f90(v5 + 128, 0, 0);
    v11 = 1;
    v12 = 0;
    do {
      v13 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 96) + 80LL) + 80 * v12);
      v14 = a2(a3, *v13, v13[1], v6);
      v12 = v11++;
    } while (v14 == 0 && v6 >= v12);
    CudaDriverRoutine_108070(v5 + 128);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21c8f0(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0) {
    return CudaDriverRoutine_1b8de0();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21c910(__int64 a1, __int64 a2)
{
  __int64 v4;

  v4 = CudaDriverRoutine_112b30(a2);
  if (a2 != 0) {
    return CudaDriverRoutine_1b9890(a1, v4, 2);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21c960(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 96);
  if (v2 == 0) {
    return 999;
  }
  CudaDriverRoutine_107f90(*(_QWORD*)(v2 + 88), 0, 0);
  v4 = CudaDriverRoutine_f0f50(v2);
  v5 = CudaDriverRoutine_102040(v4);
  CudaDriverRoutine_f1180(
      v2, (a2 + (unsigned __int64)(unsigned int)(*(_DWORD*)(v5 + 8) - 1)) /
              *(unsigned int*)(v5 + 8));
  CudaDriverRoutine_108070(*(_QWORD*)(v2 + 88));
  return 0;
}

__int64 CudaDriverHr_21c9f0(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD* v7;
  unsigned int v8;

  if (a1 == 0 || a3 == 0 || *(_QWORD*)(a1 + 96) == 0 ||
      (unsigned __int8)CudaDriverRoutine_f1460(*(_QWORD*)(a1 + 96)) != 0) {
    return 1;
  }
  v7 = *(_QWORD**)(a1 + 96);
  CudaDriverRoutine_107f90(v7[11], 0, 0);
  v8 = CudaDriverRoutine_102fe0(*v7, a2, a3);
  CudaDriverRoutine_108070(v7[11]);
  return v8;
}

__int64 CudaDriverHr_21ca90(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD* v7;
  unsigned int v8;

  if (a1 == 0 || a3 == 0 || *(_QWORD*)(a1 + 96) == 0 ||
      (unsigned __int8)CudaDriverRoutine_f1460(*(_QWORD*)(a1 + 96)) != 0) {
    return 1;
  }
  v7 = *(_QWORD**)(a1 + 96);
  CudaDriverRoutine_107f90(v7[11], 0, 0);
  v8 = CudaDriverRoutine_1030f0(*v7, a2, a3);
  CudaDriverRoutine_108070(v7[11]);
  return v8;
}

__int64 CudaDriverHr_21cb30(__int64 a1, int* a2)
{
  __int64 v2;
  bool v4;
  __int64 result;
  int v6;

  if (a2 == nullptr) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 96);
  if (v2 == 0) {
    return 1;
  }
  v4 = (unsigned __int8)CudaDriverRoutine_f1460(v2) == 0;
  result = 0;
  v6 = !v4;
  *a2 = v6;
  return result;
}

__int64 CudaDriverHr_21cb80(_QWORD* a1, int a2)
{
  __int64 result;
  _QWORD* v4;
  _QWORD v5[10];
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a1 == nullptr) {
    return 1;
  }
  result = 101;
  if ((a2 & 0x80000000) == 0) {
    v4 = a1;
    if (a2 < CudaDriverData_1434ac0) {
      LODWORD(v9) = 1;
      HIDWORD(v9) = a2;
      result = CudaDriverRoutine_f2a00(&v9, 0, 0, &v8);
      if ((_DWORD)result == 0) {
        v6 = 0;
        memset(&v5[2], 0, 64);
        v5[0] = 1;
        v5[1] = v9;
        result = CudaDriverRoutine_f0380(v5, 0, v8, 0, 0, &v7);
        if ((_DWORD)result == 0) {
          *v4 = v7 + 176;
        }
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21ce00(__int64 a1, unsigned int a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0 && *(_QWORD*)(a1 + 96) != 0 &&
      (unsigned __int8)CudaDriverRoutine_f1460(*(_QWORD*)(a1 + 96)) == 0) {
    return CudaDriverRoutine_1030f0(**(_QWORD**)(a1 + 96), a2, a3);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21ce80(__int64 a1, int* a2)
{
  __int64 result;
  bool v5;
  int v6;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    if (*(_QWORD*)(a1 + 96) != 0) {
      v5 = (unsigned __int8)CudaDriverRoutine_f2fe0() == 0;
      result = 0;
      v6 = !v5;
      *a2 = v6;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 CudaDriverHr_21cee0(__int64 a1, int* a2)
{
  __int64 result;
  int v4;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    if (*(_DWORD*)(a1 + 16) == 3) {
      v4 = *(_DWORD*)(a1 + 20);
    }
    else {
      v4 = -1;
    }
    *a2 = v4;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21cf20(__int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD v12[5];
  __int64 v13;
  _QWORD v14[6];
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a1 == 0) {
    return 201;
  }
  if (a2 == 0) {
    return 1;
  }
  v5 = *a3;
  if ((unsigned int)v5 > 0x38) {
    return 801;
  }
  v16 = v3;
  v17 = v4;
  v15 = 0;
  memset(v14, 0, sizeof(v14));
  CudaDriverRoutine_25cf30(v14, a3, v5);
  qmemcpy(v12, &v14[1], sizeof(v12));
  v13 = 0;
  if ((unsigned int)(v15 - 1) <= 2) {
    LODWORD(v13) = v15;
  }
  v9 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_108520(v9 + 24, 0, 0, 0);
  v10 = CudaDriverRoutine_104c40(a1, v12, a2, 0);
  v11 = CudaDriverRoutine_98340(a1);
  CudaDriverRoutine_1085d0(v11 + 24);
  return v10;
}

__int64 CudaDriverHr_21d030(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 472);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d050(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(_QWORD*)(a1 + 144);
    if (v4 != 0) {
      v5 = a2;
      v6 = CudaDriverRoutine_102e00(v4);
      a2 = v5;
      v7 = v6;
    }
    else {
      v7 = 0;
    }
    *a2 = v7;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d0b0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(_QWORD*)(a1 + 160);
    if (v4 != 0) {
      v5 = a2;
      v6 = CudaDriverRoutine_102e00(v4);
      a2 = v5;
      v7 = v6;
    }
    else {
      v7 = 0;
    }
    *a2 = v7;
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d110(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 4464);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d130(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 1;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 4472);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d150(int* a1, char* a2)
{
  __int64 result;
  int v4;
  char v5;

  result = 1;
  if (a1 != nullptr && a2 != nullptr) {
    v4 = *a1;
    if (v4 == 1) {
      v5 = 0;
    }
    else {
      if (v4 != 2) {
        return 999;
      }
      v5 = 1;
    }
    result = 0;
    *a2 = v5;
  }
  return result;
}

__int64 CudaDriverHr_21d380(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  __int64 v3;
  _DWORD* v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v9;
  _DWORD* v10;
  _DWORD* v11;

  if (a1 == 0) {
    return 1;
  }
  if (a2 == nullptr) {
    return 1;
  }
  v2 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  if (v2 >= 0x10) {
    *(_DWORD*)(a1 + 72) = a2[3];
    v2 = *a2;
  }
  if (v2 < 0xC) {
    return 0;
  }
  *(_DWORD*)(a1 + 392) = a2[2];
  if (*a2 < 0x28) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 992);
  v4 = (_DWORD*)(v3 + 288);
  if (v3 == 0) {
    v4 = (_DWORD*)(a1 + 132);
  }
  *(_DWORD*)(a1 + 136) = a2[9] - *v4;
  if (*a2 < 0x30) {
    return 0;
  }
  *(_DWORD*)(a1 + 76) = a2[11];
  if (*a2 < 0x50) {
    return 0;
  }
  if (v3 != 0) {
    *(_DWORD*)(v3 + 168) = a2[14];
    *(_DWORD*)(v3 + 172) = a2[15];
    *(_DWORD*)(v3 + 176) = a2[16];
    *(_DWORD*)(v3 + 144) = a2[17];
    *(_DWORD*)(v3 + 148) = a2[18];
    v5 = a2[19];
    v6 = *(_QWORD*)(v3 + 144);
    *(_DWORD*)(v3 + 152) = v5;
    *(_QWORD*)(v3 + 156) = v6;
    *(_DWORD*)(v3 + 164) = v5;
  }
  *(_DWORD*)(a1 + 416) = a2[14];
  *(_DWORD*)(a1 + 420) = a2[15];
  *(_DWORD*)(a1 + 424) = a2[16];
  *(_DWORD*)(a1 + 816) = a2[17];
  *(_DWORD*)(a1 + 820) = a2[18];
  *(_DWORD*)(a1 + 824) = a2[19];
  if (*a2 < 0x5C) {
    return 0;
  }
  CudaDriverRoutine_bc3c0(a1, a2[22]);
  v9 = *a2;
  if (*a2 < 0x80) {
    return 0;
  }
  v10 = *(_DWORD**)(a1 + 992);
  if (v10 != nullptr) {
    v10[45] = a2[28];
    v10[46] = a2[29];
    v10[47] = a2[30];
    v10[48] = a2[31];
    v9 = *a2;
  }
  if (v9 < 0x94) {
    return 0;
  }
  v11 = *(_DWORD**)(a1 + 992);
  if (v11 == nullptr) {
    return 0;
  }
  v11[53] = a2[36];
  v11[54] = a2[37];
  v11[55] = a2[38];
  return 0;
}

__int64 CudaDriverHr_21d550(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                            _DWORD* a5)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != 0 && a4 != nullptr && a5 != nullptr) {
    *a4 = CudaDriverRoutine_b9660(a2);
    *a5 = *(_DWORD*)(a2 + 60);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d5c0(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  __int64 v8;

  v2 = 1;
  v8 = 0;
  memset(v7, 0, sizeof(v7));
  if (a1 == 0 || a2 == nullptr) {
    return v2;
  }
  v3 = *a2;
  if (*a2 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL);
    v7[3] = *(_QWORD*)(a1 + 96);
    v7[1] = *(_QWORD*)(v4 + 1232);
    if (v3 >= 0x28) {
      v5 = 40;
    }
    else {
      v5 = v3;
    }
    LODWORD(v7[0]) = v5;
    CudaDriverRoutine_25cf30(a2, v7, v5);
    return 0;
  }
  return 1;
}

__int64 CudaDriverHr_21d650(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 result;

  result = 1;
  if (a2 != 0 && a3 != nullptr) {
    *a3 = *(_QWORD*)(a2 + 8);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if (a3 != 0 && a2 != 0 && a4 != 0) {
    return CudaDriverRoutine_bae90(a2, a3, a4);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21d6a0(__int64 a1, __int64 a2,
                            void (*a3)(__int64, __int64, _QWORD), __int64 a4)
{
  unsigned int v7;
  __int64 v9;
  int v10;

  if ((unsigned int)CudaDriverRoutine_107e20(a2) != 0) {
    return (unsigned int)-1;
  }
  v9 = *(_QWORD*)(a2 + 224);
  if (v9 != 0) {
    v7 = 0;
    if (a3 != nullptr) {
      do {
        if (*(_DWORD*)(v9 + 880) == 2) {
          ++v7;
          a3(a4, v9, *(_QWORD*)(v9 + 8));
        }
        v9 = *(_QWORD*)(v9 + 1144);
      } while (v9 != 0);
    }
    else {
      do {
        v10 = *(_DWORD*)(v9 + 880);
        v9 = *(_QWORD*)(v9 + 1144);
        if (v10 == 2) {
          ++v7;
        }
      } while (v9 != 0);
    }
    return v7;
  }
  return 0;
}

__int64 CudaDriverHr_21d770(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[2];
  __int64 v6;

  v5[0] = a3;
  v5[1] = a4;
  v6 = 0;
  CudaDriverRoutine_11aed0(a2 + 40, CudaDriverRoutine_21f3d0, v5);
  return (unsigned int)v6;
}

__int64 CudaDriverHr_21d7d0(__int64 a1, __int64 a2, unsigned int a3, _QWORD* a4)
{
  __int64 result;
  __int64 v5;

  result = 999;
  if (a2 != 0 && a4 != nullptr && a3 < *(_DWORD*)(a2 + 472)) {
    v5 = *(_QWORD*)(a2 + 480);
    if (v5 != 0) {
      *a4 = *(_QWORD*)(v5 + 40LL * a3 + 8);
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21d810(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 4);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d830(__int64 a1, _DWORD* a2)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_DWORD*)(a1 + 24);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21d850(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    v4 = *(_QWORD*)(a1 + 96);
    if (v4 != 0) {
      *a2 = v4;
      return 0;
    }
  }
  return result;
}

__int64 CudaDriverHr_21d880(_DWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  _QWORD* v5;

  if (a2 == 0) {
    return 999;
  }
  v2 = *(_QWORD*)(a2 + 992);
  result = 0;
  if (v2 != 0) {
    v5 = (_QWORD*)(v2 + 32);
  }
  else {
    v5 = (_QWORD*)(a2 + 88);
  }
  *a1 = *v5;
  return result;
}

__int64 CudaDriverHr_21d8c0(__int64 result, _QWORD* a2, _QWORD* a3)
{
  __int64 v3;
  unsigned int* v4;

  if (result != 0) {
    if (a2 != nullptr) {
      v3 = *(_QWORD*)(result + 992);
      if (v3 != 0) {
        v4 = (unsigned int*)(v3 + 276);
      }
      else {
        v4 = (unsigned int*)(result + 640);
      }
      *a2 = *v4;
    }
    if (a3 != nullptr) {
      *a3 = *(unsigned int*)(result + 644);
    }
  }
  return result;
}

__int64 CudaDriverHr_21d900(__int64 result, __int64 a2, unsigned __int64 a3,
                            __int64 a4, unsigned __int64 a5)
{
  __int64 v5;
  unsigned int* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  if (result != 0) {
    v5 = *(_QWORD*)(result + 992);
    v6 = (unsigned int*)(result + 640);
    if (v5 != 0) {
      v6 = (unsigned int*)(v5 + 276);
    }
    v7 = *v6;
    if (a3 >= v7) {
      a3 = v7;
    }
    if (a5 >= *(unsigned int*)(result + 644)) {
      v8 = *(unsigned int*)(result + 644);
    }
    else {
      v8 = a5;
    }
    if (a2 != 0) {
      v9 = *(_QWORD*)(result + 648);
      if (a3 != 0 && v9 != 0) {
        if (v5 != 0) {
          v11 = *(_BYTE*)(v5 + 272);
          v12 = *(_QWORD*)(v5 + 280);
          v13 = a4;
          if ((v11 & 1) != 0) {
            v17 = result;
            v9 = v12;
          }
          else {
            v14 = result;
            v15 = a2;
            v16 = a3;
            CudaDriverRoutine_bc880();
            v9 = *(_QWORD*)(v14 + 648);
            a3 = v16;
            a2 = v15;
            v17 = v14;
          }
        }
        else {
          v17 = result;
          v13 = a4;
        }
        CudaDriverRoutine_25cf30(a2, v9, a3);
        a4 = v13;
        result = v17;
      }
    }
    if (a4 != 0) {
      v18 = *(_QWORD*)(result + 656);
      if (v8 != 0 && v18 != 0) {
        return CudaDriverRoutine_25cf30(a4, v18, v8);
      }
    }
  }
  return result;
}

__int64 CudaDriverHr_21da10(__int64 a1, _DWORD* a2)
{
  int v2;

  if (a1 == 0) {
    return 999;
  }
  v2 = *(_DWORD*)(a1 + 112);
  *a2 = v2;
  return 0;
}

__int64 CudaDriverHr_21da30(__int64 a1, unsigned int a2)
{
  if (a1 != 0) {
    return CudaDriverRoutine_bace0(a1, 0, a2, 1);
  }
  else {
    return 999;
  }
}

__int64 CudaDriverHr_21da70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a3 != 0 && a4 != 0 &&
      (unsigned __int64)(a4 + a2) <= *(_QWORD*)(a1 + 904)) {
    CudaDriverRoutine_25cf30(*(_QWORD*)(a1 + 888) + a2, a3, a4);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21dad0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a3 != 0 &&
      *(_QWORD*)(a1 + 896) >= (unsigned __int64)(a4 + a2)) {
    CudaDriverRoutine_25cf30(a3, *(_QWORD*)(a1 + 888) + a2, a4);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21db20(_QWORD* a1, unsigned __int64 a2, char a3)
{
  __int64 v6;

  if (a1 == nullptr) {
    return 999;
  }
  if (a2 >
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1[4] + 24LL) + 64LL) + 11748LL)) {
    return 999;
  }
  if (a3 != 0 || a1[113] < a2) {
    v6 = CudaDriverRoutine_12e550(a1[111], a2);
    a1[111] = v6;
    if (a2 == 0 || v6 != 0) {
      a1[113] = a2;
      a1[112] = a2;
      return 0;
    }
    else {
      a1[113] = 0;
      return 999;
    }
  }
  else {
    a1[112] = a2;
    return 0;
  }
}

__int64 CudaDriverHr_21dbf0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr && a3 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 896);
    *a3 = *(_QWORD*)(a1 + 904);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21dc20(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 result;
  unsigned int* v6;

  result = 999;
  if (a1 != 0 && a2 != nullptr && a3 != nullptr && a4 != nullptr) {
    v6 = *(unsigned int**)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) + 64LL);
    *a2 = v6[2931];
    *a3 = v6[2936];
    *a4 = v6[2937];
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21dc80(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 32);
    return 0;
  }
  return result;
}

__int64 CudaDriverHr_21dca0(__int64 a1, int* a2)
{
  __int64 result;
  int v4;

  result = 999;
  if (a1 != 0 && a2 != nullptr) {
    result = 0;
    if ((*(_WORD*)(a1 + 36) & 1) != 0) {
      v4 = 1;
    }
    else {
      v4 = 2;
    }
    *a2 = v4;
  }
  return result;
}

__int64 CudaDriverHr_21dce0(__int64 a1, unsigned int a2, _DWORD* a3)
{
  __int64 v3;
  void (*v4)(__int64, _QWORD, _QWORD, int*, _QWORD, _QWORD);
  __int64 v7;
  __int64 result;
  int v9;

  v9 = 0;
  if (a1 == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0) {
    return 1;
  }
  v4 = *(void (**)(__int64, _QWORD, _QWORD, int*, _QWORD, _QWORD))(v3 + 18752);
  v7 = CudaDriverRoutine_98340(a1);
  v4(v7, 0, a2, &v9, 0, 0);
  result = 0;
  if (a3 != nullptr) {
    *a3 = v9;
  }
  return result;
}

__int64 CudaDriverHr_21dd60(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v7;

  v7 = 0;
  if (a1 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 32);
  if (v2 == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v3 + 64);
  if (v4 == 0) {
    return 1;
  }
  (*(void (**)(void))(v4 + 18744))();
  result = 0;
  if (a2 != nullptr) {
    *a2 = v7;
  }
  return result;
}

__int64 CudaDriverHr_21dde0(__int64 a1, unsigned int a2, unsigned int a3,
                            _DWORD* a4)
{
  __int64 v4;
  void (*v5)(__int64, _QWORD, _QWORD, _QWORD, __int64*, _QWORD);
  __int64 v9;
  __int64 result;
  __int64 v11;

  v11 = 0;
  if (a1 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(a1 + 64);
  if (v4 == 0) {
    return 1;
  }
  v5 = *(void (**)(__int64, _QWORD, _QWORD, _QWORD, __int64*, _QWORD))(v4 +
                                                                       18752);
  v9 = CudaDriverRoutine_98340(a1);
  v5(v9, a2, a3, 0, &v11, 0);
  result = 0;
  if (a4 != nullptr) {
    *a4 = v11;
  }
  return result;
}

__int64 CudaDriverHr_21de70(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  if (a1 == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 32);
  if (v2 == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 == 0) {
    return 1;
  }
  v4 = *(_QWORD*)(v3 + 64);
  if (v4 == 0) {
    return 1;
  }
  (*(void (**)(void))(v4 + 18744))();
  if (a2 == nullptr) {
    return 0;
  }
  result = 0;
  *a2 = 0;
  return result;
}

#pragma GCC visibility pop
